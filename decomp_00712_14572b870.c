// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14572b870 FUN_14572b870 body=221 status=ok
// SIG undefined FUN_14572b870(void)

longlong FUN_14572b870(void)

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
  if (DAT_14caf18e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14005d234;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147bca6cc;
    local_40 = FUN_1435847b3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x268;
    FUN_14081cfa3(L"/Script/Engine",L"Model",&DAT_14caf18e0,&DAT_147bca6d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf18e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572b94e FUN_14572b94e body=206 status=ok
// SIG undefined FUN_14572b94e(void)

undefined8 FUN_14572b94e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_144a7b8cc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572ba1e FUN_14572ba1e body=476 status=ok
// SIG undefined FUN_14572ba1e(void)

void FUN_14572ba1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2b0) == param_2) goto LAB_14572bac9;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0xa0);
  lVar8 = *(longlong *)(param_1 + 0xa0);
  uVar7 = (longlong)*(int *)(param_1 + 0xa8) << 3;
  do {
    if (uVar7 == 0) {
      iVar6 = -1;
      goto LAB_14572baf4;
    }
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    uVar2 = uVar7 - 8;
    plVar4 = (longlong *)(lVar8 + -8 + uVar7);
    uVar7 = uVar2;
  } while (*plVar4 != param_2);
  iVar6 = (int)(uVar2 >> 3);
  if (iVar6 != 0) {
LAB_14572baf4:
    plVar4 = (longlong *)*plVar1;
    lVar8 = *plVar4;
    lVar3 = 0;
    if (lVar8 != 0) {
      lVar3 = FUN_14059e8cc();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = 0;
        local_40 = param_2;
        if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_2);
        }
        FUN_147b8e84a(plVar1,&local_40);
        goto LAB_14572baa7;
      }
      plVar4 = (longlong *)*plVar1;
      lVar3 = *plVar4;
    }
    *plVar4 = plVar4[iVar6];
    plVar4[iVar6] = lVar3;
  }
LAB_14572baa7:
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x2b0) = param_2;
  if (1 < *(int *)(param_1 + 0xa8)) {
    lVar8 = 1;
    do {
      lVar3 = *(longlong *)(*plVar1 + lVar8 * 8);
      if (lVar3 != 0) {
        lVar5 = FUN_14059e8cc();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          FUN_140aeefbc(lVar3,0,1);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xa8));
  }
LAB_14572bac9:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572bbfc FUN_14572bbfc body=2508 status=ok
// SIG undefined FUN_14572bbfc(void)

void FUN_14572bbfc(longlong param_1,uint *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  byte bVar11;
  code *pcVar12;
  code *pcVar13;
  undefined2 uVar14;
  ushort uVar15;
  code **ppcVar16;
  ulonglong uVar17;
  ushort uVar18;
  ulonglong uVar19;
  int iVar20;
  float fVar21;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  int local_70;
  longlong local_68 [2];
  code *local_58;
  longlong *plStack_50;
  double local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 0x153) & 0x40) != 0) goto LAB_14572c30f;
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0x3f;
  *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) & 0xbf;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  uVar5 = FUN_140b631de();
  local_58 = FUN_140d96338;
  plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
  FUN_14572c8a8(uVar5,local_68,param_1);
  uVar14 = (undefined2)*param_2;
  if ((*param_2 >> 0xe & 1) == 0) {
    FUN_14036c39e(param_1 + 0x870,param_1);
    uVar14 = (undefined2)*param_2;
  }
  lVar9 = *(longlong *)(param_2 + 2);
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar9);
  }
  local_58 = (code *)CONCAT62(local_58._2_6_,uVar14);
  plStack_50 = (longlong *)lVar9;
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar9);
  }
  ppcVar16 = &local_58;
  FUN_1405f34aa(&DAT_14cb109f0,param_1);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2b0);
  }
  uVar4 = *param_2;
  bVar3 = (byte)uVar4;
  if ((uVar4 & 1) != 0) {
    if ((uVar4 & 8) != 0) {
      uVar5 = FUN_14001cc68(0x388,0x10);
      FUN_1405f3fce(uVar5,0);
      FUN_14572c6ce(param_1,uVar5);
      bVar3 = (byte)*param_2;
    }
    *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) & 0xfb | bVar3 >> 4 & 4;
    *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) & 0xf7 | (byte)*param_2 * '\x02' & 8;
    *(byte *)(param_1 + 0x934) = (byte)(*param_2 >> 0xd) & 1;
    plVar6 = (longlong *)FUN_144a7b9cd();
    uVar17 = CONCAT71((int7)((ulonglong)ppcVar16 >> 8),*(undefined1 *)(param_1 + 0x156)) &
             0xffffffffffffff08;
    local_b0 = CONCAT31(local_b0._1_3_,*(undefined1 *)(param_1 + 0x934));
    local_b8 = (uint)*(byte *)(param_1 + 0x150);
    (**(code **)(*plVar6 + 0x50))
              (plVar6,param_1,CONCAT71((int7)(uVar17 >> 8),(byte)uVar17 >> 3),*param_2 >> 10 & 1);
  }
  if (((plVar10 != (longlong *)0x0) && ((*param_2 & 0x20) != 0)) &&
     ((*(byte *)((longlong)plVar10 + 0x39d) & 0x10) != 0)) {
    FUN_14572ccb8(param_1);
  }
  lVar8 = DAT_14cb0d2b0;
  lVar9 = *(longlong *)(DAT_14cb0d2b0 + 0x250);
  if (((lVar9 != 0) && (lVar7 = FUN_1405f325c(), lVar2 = DAT_14cb0d2b0, lVar7 != 0)) &&
     ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38) &&
      ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30 && (*(longlong *)(lVar8 + 0x250) != 0)))))) {
    lVar9 = *(longlong *)(DAT_14cb0d2b0 + 0x250);
    if ((lVar9 == 0) ||
       (((lVar8 = FUN_1405f325c(), lVar8 == 0 || (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38)))
        || (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0x250);
    }
    lVar9 = FUN_14572c72f(param_1,uVar5);
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x188) = lVar9;
  }
  FUN_1409e22f8(param_1);
  plVar6 = *(longlong **)(param_1 + 0x30);
  if (plVar6[4] != param_1) {
    local_68[0] = plVar6[3];
    FUN_1400021e4(local_68,&local_58);
    pcVar13 = local_58;
    if ((int)plStack_50 == 0) {
      pcVar13 = (code *)&DAT_149dfb77a;
    }
    (**(code **)(*plVar6 + 0x170))(plVar6,pcVar13,param_1,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) == 1) {
    iVar20 = 0;
    uVar4 = 1;
  }
  else {
    FUN_14572c66e(param_1 + 400,1);
    iVar20 = *(int *)(param_1 + 0x198);
    uVar4 = *(uint *)(param_1 + 0x19c);
  }
  *(uint *)(param_1 + 0x198) = iVar20 + 1U;
  if (uVar4 < iVar20 + 1U) {
    FUN_1458edfd8(param_1 + 400,iVar20);
  }
  lVar9 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 400) + (longlong)iVar20 * 8) = lVar9;
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar9);
      if (*(longlong *)(lVar8 + 0x360) == param_1) {
        if ((lVar8 != 0) &&
           (lVar9 = FUN_1405e677a(DAT_14cb0d2b0,param_1), *(char *)(lVar9 + 0x88) == '\0')) {
          pcVar13 = *(code **)(param_1 + 0x30);
          lVar9 = *(longlong *)(pcVar13 + 0x2e8);
          if ((lVar9 != 0) && (pcVar13 != (code *)0x0)) {
            *(undefined8 *)(pcVar13 + 0x2e8) = 0;
            local_58 = pcVar13;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c();
            }
            FUN_140192ad0(lVar9 + 0x28,&local_58);
          }
        }
        break;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar9);
  }
  lVar9 = *(longlong *)(param_1 + 0x30);
  if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(lVar9 + 0xc0) = param_1;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x30) + 0x240);
  *pbVar1 = *pbVar1 | 0x20;
  lVar9 = *(longlong *)(param_1 + 0x118);
  if (lVar9 == 0) {
    lVar9 = FUN_14572cb46(param_1);
  }
  if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar9);
  }
  *(longlong *)(param_1 + 0x118) = lVar9;
  lVar9 = *(longlong *)(param_1 + 0x260);
  if (lVar9 != 0) {
    fVar21 = 0.0;
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2b0), plVar6 != (longlong *)0x0))
    {
      fVar21 = (float)(**(code **)(*plVar6 + 0x660))(plVar6);
      lVar9 = *(longlong *)(param_1 + 0x260);
    }
    local_48 = (double)fVar21;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a0 = 0;
    FUN_14037ebae(lVar9,&local_58,0,0);
  }
  if ((*param_2 & 8) != 0) {
    if (plVar10 == (longlong *)0x0) {
      local_58 = (code *)0x0;
LAB_14572c050:
      lVar9 = DAT_14cb0d2b0;
      if (DAT_14c950c29 == 1) {
        if (*(longlong *)(DAT_14cb0d2b0 + 0x278) == 0) goto LAB_14572c104;
        FUN_1456cec3c();
      }
      local_58 = *(code **)(lVar9 + 0x278);
      if (local_58 == (code *)0x0) goto LAB_14572c104;
    }
    else {
      (**(code **)(*plVar10 + 0x640))(plVar10,&local_58);
      pcVar13 = local_58;
      if ((((local_58 == (code *)0x0) || (lVar9 = FUN_1405f333a(), lVar9 == 0)) ||
          (*(int *)(pcVar13 + 0x38) < *(int *)(lVar9 + 0x38))) ||
         (local_58 == (code *)0x0 ||
          *(longlong *)(*(longlong *)(pcVar13 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
          lVar9 + 0x30)) goto LAB_14572c050;
    }
    pcVar12 = local_58;
    lVar9 = FUN_1405f333a();
    pcVar13 = local_58;
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(pcVar12 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(pcVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30 && (local_58 != (code *)0x0)))) {
      lVar9 = FUN_1405f333a();
      if (((lVar9 == 0) || (*(int *)(pcVar13 + 0x38) < *(int *)(lVar9 + 0x38))) ||
         (pcVar12 = local_58,
         *(longlong *)(*(longlong *)(pcVar13 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
         lVar9 + 0x30)) {
        pcVar12 = (code *)0x0;
      }
      plVar10 = (longlong *)FUN_14572c7eb(param_1,pcVar12);
      if ((plVar10 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(plVar10);
      }
      *(longlong **)(param_1 + 0x60) = plVar10;
      (**(code **)(*plVar10 + 0x2a8))(plVar10);
    }
  }
LAB_14572c104:
  FUN_1405f35b2(param_1 + 0x5b8,*(longlong *)(param_1 + 0x30) + 0x38);
  *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) & 0xfd | (byte)*param_2 & 2;
  *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) & 0xfe;
  FUN_1410908dc(param_1,local_68,0);
  FUN_140c50e9c(&local_58,local_68,1);
  FUN_140810f5e(local_88,0);
  FUN_1405f3246(&local_78,local_88,1);
  if ((int)plStack_50 == local_70) {
    if (1 < (int)plStack_50) {
      lVar9 = 0;
      while( true ) {
        uVar15 = *(ushort *)(local_58 + lVar9);
        uVar17 = (ulonglong)uVar15;
        uVar18 = *(ushort *)(local_78 + lVar9);
        if (uVar15 != uVar18) {
          if ((uVar18 | uVar15) < 0x80) {
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            uVar19 = (ulonglong)uVar18;
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
            if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar19]) goto LAB_14572c369;
          }
          bVar3 = *(byte *)(param_1 + 0x154);
          if (uVar15 == uVar18) goto LAB_14572c3a7;
          goto LAB_14572c19f;
        }
        if (uVar15 == 0) break;
LAB_14572c369:
        lVar9 = lVar9 + 2;
      }
    }
    bVar3 = *(byte *)(param_1 + 0x154);
LAB_14572c3a7:
    bVar11 = 0x20;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x154);
    if (local_70 + (int)plStack_50 == 1) goto LAB_14572c3a7;
LAB_14572c19f:
    bVar11 = 0;
  }
  *(byte *)(param_1 + 0x154) = bVar3 & 0xdf | bVar11;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14572c9a8(param_1);
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 0x40;
  *(byte *)(param_1 + 0x157) = *(byte *)(param_1 + 0x157) | 2;
  uVar4 = *param_2;
  plVar10 = *(longlong **)(param_2 + 2);
  if ((plVar10 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar10);
  }
  local_58 = (code *)CONCAT62(local_58._2_6_,(short)uVar4);
  plStack_50 = plVar10;
  if ((plVar10 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar10);
  }
  FUN_1405f34aa(&DAT_14cb10980,param_1,&local_58);
  FUN_14572c5ca(*(longlong *)(param_1 + 0x30) + 0x170,*(undefined8 *)(param_1 + 0x218));
  FUN_14572c5ec(*(longlong *)(param_1 + 0x30) + 0x1a8,*(undefined8 *)(param_1 + 0x218));
  FUN_1405f378a(*(undefined8 *)(param_1 + 0x30));
  FUN_140192ce0(*(undefined8 *)(param_1 + 0x30));
  plVar10 = (longlong *)FUN_140083894();
  (**(code **)(*plVar10 + 0x48))(plVar10,*(undefined8 *)(param_1 + 0x30));
  if ((*param_2 & 0x4000) == 0) {
    local_68[0] = 0;
    local_58 = (code *)&LAB_143794d2e;
    plStack_50 = &local_78;
    FUN_1405f0fde(param_1 + 0x870);
  }
  FUN_1447f69b6(param_1 + 0x540);
  FUN_1446f470e(&local_90,L"AssetRegistry",1);
  uVar5 = FUN_144a52528();
  plVar10 = (longlong *)FUN_14493e38c(uVar5,local_90);
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10);
  (**(code **)(*plVar10 + 800))(plVar10,param_1);
  FUN_14572c60e(param_1 + 0x950,param_1);
LAB_14572c30f:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572c5ca FUN_14572c5ca body=34 status=ok
// SIG undefined FUN_14572c5ca(void)

void FUN_14572c5ca(longlong param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x30))) {
                    /* WARNING: Could not recover jumptable at 0x00014572c5e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x250))(param_2,param_1,*(code **)(*param_2 + 0x250));
    return;
  }
  return;
}



// FUNCTION 14572c5ec FUN_14572c5ec body=34 status=ok
// SIG undefined FUN_14572c5ec(void)

void FUN_14572c5ec(longlong param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x58))) {
                    /* WARNING: Could not recover jumptable at 0x00014572c60b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 600))(param_2,param_1,*(code **)(*param_2 + 600));
    return;
  }
  return;
}



// FUNCTION 14572c60e FUN_14572c60e body=96 status=ok
// SIG undefined FUN_14572c60e(void)

void FUN_14572c60e(longlong param_1,longlong param_2)

{
  FUN_140cbebe8(param_1,0);
  FUN_1405f3418(param_1);
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) && (DAT_14cadbee0 == '\x01')) {
    FUN_14485c47a(param_1 + 0x30,param_2);
    FUN_140cbebe8(param_1,1);
    FUN_1402eb876(param_1,*(undefined8 *)(param_2 + 0x30));
    return;
  }
  return;
}



// FUNCTION 14572c66e FUN_14572c66e body=96 status=ok
// SIG undefined FUN_14572c66e(void)

void FUN_14572c66e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 14572c6ce FUN_14572c6ce body=91 status=ok
// SIG undefined FUN_14572c6ce(void)

void FUN_14572c6ce(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_14572c72a(*(longlong *)(param_1 + 0x260),0);
    puVar1 = *(undefined8 **)(param_1 + 0x260);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  *(longlong *)(param_1 + 0x260) = param_2;
  if (param_2 != 0) {
    FUN_14572c72a(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 14572c72a FUN_14572c72a body=5 status=ok
// SIG undefined FUN_14572c72a(void)

void FUN_14572c72a(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 14572c72f FUN_14572c72f body=187 status=ok
// SIG undefined FUN_14572c72f(void)

undefined8 FUN_14572c72f(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572c7eb FUN_14572c7eb body=187 status=ok
// SIG undefined FUN_14572c7eb(void)

undefined8 FUN_14572c7eb(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572c8a8 FUN_14572c8a8 body=254 status=ok
// SIG undefined FUN_14572c8a8(void)

undefined8
FUN_14572c8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14aa4d990;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572c9a8 FUN_14572c9a8 body=314 status=ok
// SIG undefined FUN_14572c9a8(void)

void FUN_14572c9a8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x152) == '\a') {
    return;
  }
  if (DAT_14cb101b8 == '\x01') {
    if (2 < *(int *)(param_1 + 0x1ac)) goto LAB_14572c9e9;
    uVar5 = 3;
  }
  else {
    uVar5 = 1;
    if (0 < *(int *)(param_1 + 0x1ac)) goto LAB_14572c9e9;
  }
  FUN_14572cae2(param_1 + 0x1a0,uVar5);
LAB_14572c9e9:
  iVar2 = FUN_140192022(param_1,0);
  *(int *)(param_1 + 0x1b0) = iVar2;
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(lVar1 + 0x20 + (longlong)iVar2 * 0x78) = lVar4;
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2e8) == 0) {
    FUN_14019222c((longlong)*(int *)(param_1 + 0x1b0) * 0x78 + *(longlong *)(param_1 + 0x1a0));
  }
  if (DAT_14cb101b8 == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
      pcVar3 = *(char **)(param_1 + 0x1a0);
      lVar4 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78;
      do {
        if (*pcVar3 == '\x02') {
          if (pcVar3 != (char *)0x0) {
            return;
          }
          break;
        }
        pcVar3 = pcVar3 + 0x78;
        lVar4 = lVar4 + -0x78;
      } while (lVar4 != 0);
    }
    iVar2 = FUN_140192022(param_1,2);
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x1a0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(lVar1 + 0x20 + (longlong)iVar2 * 0x78) = lVar4;
  }
  return;
}



// FUNCTION 14572cae2 FUN_14572cae2 body=99 status=ok
// SIG undefined FUN_14572cae2(void)

undefined8 FUN_14572cae2(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x78,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x78)) {
    uVar4 = uVar2 / 0x78 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x78,8);
  }
  return uVar3;
}



// FUNCTION 14572cb46 FUN_14572cb46 body=369 status=ok
// SIG undefined FUN_14572cb46(void)

longlong FUN_14572cb46(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) goto LAB_14572cc52;
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar2 == 0)) {
LAB_14572cc76:
    lVar2 = FUN_140834560();
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x420);
    if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_14572cc76;
    lVar1 = FUN_140834560();
    if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_14572cc76;
  }
  local_a8 = &local_98;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0x800080100;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  lVar2 = FUN_141137228(param_1,lVar2,0,0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x118) = lVar2;
  *(undefined4 *)(lVar2 + 0x3cc) = 0xfff0bdc0;
  if (local_58 != 0) {
    plVar3 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar3 = local_38;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  lVar2 = *(longlong *)(param_1 + 0x118);
LAB_14572cc52:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572ccb8 FUN_14572ccb8 body=216 status=ok
// SIG undefined FUN_14572ccb8(void)

undefined8 FUN_14572ccb8(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    uVar2 = FUN_14490d72a(param_1);
    cVar1 = FUN_14572cd92(uVar2);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_14572cdfc(&local_20);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0);
      if ((lVar5 != 0) && ((local_20 != 0 && ((*(byte *)(lVar5 + 0x39d) & 0x10) != 0)))) {
        uVar3 = FUN_144a52528();
        plVar4 = (longlong *)FUN_1405f3750(uVar3,local_20,0);
        if (plVar4 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4,param_1);
          if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar5);
          }
          *(longlong *)(param_1 + 0x180) = lVar5;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x180);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572cd92 FUN_14572cd92 body=106 status=ok
// SIG undefined FUN_14572cd92(void)

undefined8 FUN_14572cd92(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_140834482();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_140834482();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),param_1 != 3 | *(byte *)(lVar3 + 0x58));
  }
  return 0;
}



// FUNCTION 14572cdfc FUN_14572cdfc body=127 status=ok
// SIG undefined FUN_14572cdfc(void)

undefined8 * FUN_14572cdfc(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_140834482();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
    if (lVar3 == 0) goto LAB_14572ce64;
  }
  lVar2 = FUN_140834482();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    *param_1 = *(undefined8 *)(lVar3 + 0x48);
    return param_1;
  }
LAB_14572ce64:
  FUN_1446f470e(param_1,&DAT_149dfb77a,1);
  return param_1;
}



// FUNCTION 14572ce7c FUN_14572ce7c body=141 status=ok
// SIG undefined FUN_14572ce7c(void)

void FUN_14572ce7c(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c760e18 == '\x01') && (param_3 != 0)) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    lVar1 = FUN_147ba5e6a(param_3);
    if (param_2 != 0 && lVar1 != 0) {
      local_48 = param_5;
      FUN_143656e58(param_1,param_2,param_3,lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572cf0a FUN_14572cf0a body=135 status=ok
// SIG undefined FUN_14572cf0a(void)

void FUN_14572cf0a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x3408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x340c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x1a0,0);
      iVar4 = (int)(uVar3 / 0x1a0);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x340c) = iVar5;
    FUN_1488c096e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14572cf92 FUN_14572cf92 body=412 status=ok
// SIG undefined FUN_14572cf92(void)

longlong FUN_14572cf92(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = local_50;
  if (*(int *)(param_1 + 0x550) != DAT_14cb81730) {
    *(int *)(param_1 + 0x550) = DAT_14cb81730;
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x18) != '\x02')) &&
       (*(char *)(param_1 + 0x18) != '\x02')) {
      if ((*(byte *)(param_1 + 0x19) & 1) != 0) goto LAB_14572cfb8;
      local_38 = param_1 + 0x170;
      local_40 = 0x100000000;
      local_30 = 0xffffffff;
      local_28 = 0;
      if (*(int *)(param_1 + 0x188) != 0) {
        FUN_1449c0562(&local_40);
      }
      local_60 = local_40;
      local_58 = local_38;
      local_50 = local_30;
      uVar2 = local_50;
      local_48 = local_28;
      local_44 = local_24;
      local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
      local_68 = (longlong *)(param_1 + 0x160);
      if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
        iVar1 = local_50._4_4_;
        local_50 = uVar2;
        do {
          lVar4 = *(longlong *)(*local_68 + (longlong)iVar1 * 0x18);
          if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar4 != 0) goto LAB_14572d0b2;
            plVar3 = (longlong *)0x0;
          }
          else {
            FUN_1456cec3c(lVar4);
LAB_14572d0b2:
            uVar2 = FUN_1405fa766();
            plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
          }
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (((*(longlong *)(lVar4 + 0x80) == *(longlong *)(param_1 + 0x80)) &&
              (lVar4 = FUN_14572cf92(lVar4), lVar4 != 0)) &&
             (lVar4 == *(longlong *)(param_1 + 0x80))) goto LAB_14572cfb8;
          local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
          FUN_1449c0562(&local_60);
          iVar1 = local_50._4_4_;
          uVar2 = local_50;
        } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
      }
    }
  }
  local_50 = uVar2;
  lVar4 = 0;
LAB_14572cfb8:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14572d130 FUN_14572d130 body=124 status=ok
// SIG undefined FUN_14572d130(void)

undefined1 * FUN_14572d130(undefined1 *param_1,undefined1 *param_2)

{
  if (param_1[0x28] == '\x01') {
    *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_140115c12(param_1 + 0x18,0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = *param_2;
  FUN_1406022be(param_1 + 8,param_2 + 8);
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14b0394b0;
  param_1[0x28] = 1;
  return param_1;
}



// FUNCTION 14572d1ac FUN_14572d1ac body=110 status=ok
// SIG undefined FUN_14572d1ac(void)

void FUN_14572d1ac(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1488c0614(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14572d21c FUN_14572d21c body=136 status=ok
// SIG undefined FUN_14572d21c(void)

void FUN_14572d21c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x60c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x30,0);
      iVar4 = (int)(uVar3 / 0x30);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x60c) = iVar5;
    FUN_1488c0a02(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14572d2a5 FUN_14572d2a5 body=35 status=ok
// SIG undefined FUN_14572d2a5(void)

void FUN_14572d2a5(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14572d2c8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4e3600;
  return;
}



// FUNCTION 14572d2c8 FUN_14572d2c8 body=60 status=ok
// SIG undefined FUN_14572d2c8(void)

undefined8 * FUN_14572d2c8(undefined8 *param_1)

{
  FUN_1406078b6();
  *param_1 = &PTR_FUN_14a498260;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_140ff5708(param_1 + 0xd,1);
  return param_1;
}



// FUNCTION 14572d304 FUN_14572d304 body=64 status=ok
// SIG undefined FUN_14572d304(void)

void FUN_14572d304(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14572d344(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14572d344 FUN_14572d344 body=87 status=ok
// SIG undefined FUN_14572d344(void)

ulonglong FUN_14572d344(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14572d39c FUN_14572d39c body=81 status=ok
// SIG undefined FUN_14572d39c(void)

void FUN_14572d39c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_140609d94();
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x11c) = param_2[1];
  return;
}



// FUNCTION 14572d3ee FUN_14572d3ee body=460 status=ok
// SIG undefined FUN_14572d3ee(void)

void FUN_14572d3ee(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_141238f08();
  if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x230) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x228) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x228) + lVar5) != 0)) {
        if ((*(longlong *)(param_1 + 0xf8) != 0) &&
           (cVar3 = FUN_144729dda(param_1 + 0xf0), cVar3 != '\0')) {
          uVar6 = FUN_141238f08(param_1);
          FUN_14060a688(&local_78,uVar6);
          if (local_70 != (longlong *)0x0) {
            iVar4 = (int)local_70[1];
            goto LAB_14572d495;
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x230) * 0x10 != lVar5);
  }
  goto LAB_14572d54d;
  while( true ) {
    LOCK();
    iVar2 = (int)local_70[1];
    bVar9 = iVar4 == iVar2;
    if (bVar9) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar2 = iVar4;
    }
    iVar4 = iVar2;
    UNLOCK();
    plVar8 = local_70;
    if (bVar9) break;
LAB_14572d495:
    if (iVar4 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar8 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar7 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402300;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4bca4;
      FUN_14060a5fa(lVar5);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_14572d54d:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572d5bc FUN_14572d5bc body=55 status=ok
// SIG undefined FUN_14572d5bc(void)

void FUN_14572d5bc(longlong *param_1)

{
  FUN_14572d5f4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14572d5f4 FUN_14572d5f4 body=394 status=ok
// SIG undefined FUN_14572d5f4(void)

void FUN_14572d5f4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
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
      lVar2 = *local_70;
      *(undefined8 *)(lVar2 + 0x48 + (longlong)iStack_54 * 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x50 + (longlong)iStack_54 * 0x68) = 0xffffffffffffffff;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14059f004(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572d780 FUN_14572d780 body=100 status=ok
// SIG undefined FUN_14572d780(void)

void FUN_14572d780(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140619960(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 14572d7e4 FUN_14572d7e4 body=380 status=ok
// SIG undefined FUN_14572d7e4(void)

void FUN_14572d7e4(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  *(double *)(*(longlong *)(param_1 + 0x9c8) + 0x8d0) = (double)(float)param_2[8];
  uVar9 = 5;
  if ((byte)param_2[9] < 5) {
    uVar9 = param_2[9];
  }
  *(uint *)(*(longlong *)(param_1 + 0x9c8) + 0x8d8) = uVar9 & 0xff;
  iVar8 = *param_2;
  if (0x7e < iVar8) {
    iVar8 = 0x7f;
  }
  uVar7 = (undefined1)iVar8;
  if (iVar8 < 0) {
    uVar7 = 0xff;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x9c8) + 0x278) = uVar7;
  iVar8 = param_2[1];
  if (0x7e < iVar8) {
    iVar8 = 0x7f;
  }
  uVar7 = (undefined1)iVar8;
  if (iVar8 < 0) {
    uVar7 = 0xff;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x9c8) + 0x279) = uVar7;
  iVar8 = 0x7f;
  if (param_2[2] < 0x7f) {
    iVar8 = param_2[2];
  }
  if (iVar8 < 0) {
    iVar8 = -1;
  }
  *(char *)(*(longlong *)(param_1 + 0x9c8) + 0x27a) = (char)iVar8;
  *(double *)(*(longlong *)(param_1 + 0x9c8) + 0xd58) = (double)(float)param_2[5];
  dVar3 = (double)(float)param_2[6];
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  *(double *)(*(longlong *)(param_1 + 0x9c8) + 0xd38) = dVar3;
  fVar10 = (float)param_2[7];
  if (0.0 <= fVar10) {
    if (1e+10 <= fVar10) {
      fVar10 = 1e+10;
    }
  }
  else {
    fVar10 = 1e+10;
  }
  *(float *)(*(longlong *)(param_1 + 0x9c8) + 0xd40) = fVar10;
  *(undefined1 *)(*(longlong *)(param_1 + 0x9d8) + 0x20) = *(undefined1 *)((longlong)param_2 + 0x25)
  ;
  iVar8 = param_2[0xe];
  *(char *)(*(longlong *)(param_1 + 0x9d8) + 0x21) = (char)iVar8;
  *(char *)(*(longlong *)(param_1 + 0x9c8) + 0x7b9) = (char)iVar8;
  *(char *)(*(longlong *)(param_1 + 0x9d8) + 0x22) = (char)param_2[0x13];
  puVar1 = (undefined8 *)**(longlong **)(param_1 + 0x9d8);
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  *puVar1 = *(undefined8 *)(param_2 + 10);
  puVar1[1] = uVar6;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x9d8) + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x11);
  *puVar1 = *(undefined8 *)(param_2 + 0xf);
  puVar1[1] = uVar6;
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x9d8) + 0x10);
  iVar8 = param_2[0x15];
  iVar4 = param_2[0x16];
  iVar5 = param_2[0x17];
  *piVar2 = param_2[0x14];
  piVar2[1] = iVar8;
  piVar2[2] = iVar4;
  piVar2[3] = iVar5;
  FUN_140627960();
  return;
}



// FUNCTION 14572d960 FUN_14572d960 body=701 status=ok
// SIG undefined FUN_14572d960(void)

void FUN_14572d960(longlong param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14572dff8();
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    switch(*param_3) {
    case '\x02':
      local_21 = 3;
      FUN_140627eda(param_1 + 0x200);
      uVar2 = FUN_1414b0848(param_1);
      FUN_145ccf0c4(uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    case '\x03':
      thunk_FUN_161d88b1d(param_1);
      break;
    case '\x04':
      goto switchD_14572d9cb_caseD_4;
    case '\x05':
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    default:
      goto switchD_14572d9cb_default;
    }
LAB_14572db03:
    local_21 = 4;
  }
  else {
    if ((*(char *)(param_1 + 0x533) == '\x01') && (*(longlong *)(param_1 + 0x538) != 0)) {
      FUN_14414153c(*(longlong *)(param_1 + 0x538),param_3);
    }
    if ((*param_3 == '\x05') && (*(char *)(param_1 + 0x474) == '\x01')) {
      uVar2 = FUN_14119d4d6(param_1);
      FUN_14572f032(param_1,uVar2);
    }
    else {
      FUN_14572dc5a(param_1);
    }
    switch(*param_3) {
    case '\x01':
      local_21 = 2;
      break;
    case '\x02':
      cVar1 = FUN_14572e3ee(param_1);
      if (cVar1 == '\0') {
        FUN_14144f736(param_1 + 0x200,&DAT_14cbca7c0,0);
      }
      if ((*param_2 != '\t') && (*(char *)(param_1 + 0x531) == '\0')) {
        FUN_14144f736(param_1 + 0x200,&DAT_14cbca3c0,0);
      }
      local_21 = 3;
      break;
    case '\x03':
      if (*(char *)(param_1 + 0x531) == '\0') {
        thunk_FUN_161d88b1d(param_1);
        lVar3 = FUN_14119d4d6(param_1);
        if (lVar3 != 0) {
          puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          puVar4[1] = 0;
          *(undefined4 *)(puVar4 + 2) = 0;
          puVar4[3] = 0;
          *puVar4 = &PTR_FUN_14b972d30;
          FUN_14113cb0e(lVar3,puVar4);
        }
      }
      goto LAB_14572db03;
    case '\x04':
switchD_14572d9cb_caseD_4:
      FUN_14572ec18(param_1);
      local_21 = 5;
      break;
    case '\x05':
      thunk_FUN_15af3c563(param_1);
      if (*(char *)(param_1 + 0x531) != '\x01') goto switchD_14572d9cb_default;
      local_21 = 6;
      break;
    case '\x06':
      FUN_14572ea7c(param_1,0);
      *(undefined1 *)(param_1 + 0x531) = 0;
      FUN_14144c0b6(param_1 + 0x200,&DAT_14cbca7b8);
      local_21 = 7;
      break;
    case '\a':
      FUN_14572e5a6(param_1);
      local_21 = 8;
      break;
    case '\b':
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    case '\t':
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    default:
      goto switchD_14572d9cb_default;
    }
  }
  FUN_140627eda(param_1 + 0x200);
switchD_14572d9cb_default:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572dc5a FUN_14572dc5a body=261 status=ok
// SIG undefined FUN_14572dc5a(void)

void FUN_14572dc5a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x474) != '\x01') goto LAB_14572dd22;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(int *)(param_1 + 0x4ac) != 0) {
    FUN_148d36578(param_1 + 0x4a0,0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_14572dcf7;
    lVar2 = FUN_140d976a6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14572de9c(lVar1,0xffffffff);
    }
  }
LAB_14572dcf7:
  FUN_14572dd60(param_1);
  local_19 = 0;
  local_1a = 0;
  FUN_14572dde0(param_1 + 0x650,&local_1a,0);
LAB_14572dd22:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572dd60 FUN_14572dd60 body=127 status=ok
// SIG undefined FUN_14572dd60(void)

void FUN_14572dd60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x474) == '\x01') &&
     (iVar1 = *(int *)(param_1 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_14030d4a0();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_140c125e6(lVar3 + 0x338,&DAT_14cbd9510);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14572dde0 FUN_14572dde0 body=187 status=ok
// SIG undefined FUN_14572dde0(void)

void FUN_14572dde0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14572de83;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14572de83:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14572de9c FUN_14572de9c body=250 status=ok
// SIG undefined FUN_14572de9c(void)

bool FUN_14572de9c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_1[0x85];
  if ((int)lVar2 != param_2) {
    *(int *)(param_1 + 0x85) = param_2;
    local_58 = 0;
    uStack_50 = 0;
    FUN_14572df98();
    lVar3 = 0;
    uVar4 = 0;
    do {
      if ((uVar4 == *(uint *)(param_1 + 0x85)) ||
         (lVar3 == 0 && *(uint *)(param_1 + 0x85) == 0xffffffff)) {
        lVar1 = *(longlong *)param_1[0xb];
        *(undefined8 *)(lVar1 + lVar3) = &DAT_3f8000003f800000;
        ((undefined8 *)(lVar1 + lVar3))[1] = 0;
      }
      else {
        lVar1 = *(longlong *)param_1[0xb];
        *(undefined8 *)(lVar1 + lVar3) = 0;
        ((undefined8 *)(lVar1 + lVar3))[1] = 0;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x40);
    lVar3 = param_1[0xe];
    (**(code **)(*param_1 + 0x350))(param_1);
    if ((char)lVar3 == (char)param_1[0xe]) {
      FUN_140627ff6(param_1 + 0x82,1);
      FUN_140627ff6(param_1 + 0x82,(char)lVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (int)lVar2 != param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572df98 FUN_14572df98 body=96 status=ok
// SIG undefined FUN_14572df98(void)

void FUN_14572df98(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 4) {
    FUN_148868e78(param_1);
  }
  iVar6 = 4;
  do {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14146f8ae(param_1,iVar2);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



// FUNCTION 14572dff8 FUN_14572dff8 body=398 status=ok
// SIG undefined FUN_14572dff8(void)

void FUN_14572dff8(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  lVar3 = DAT_14c9a1ab0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c9a1ab0 != 0) {
    (**(code **)(*param_1 + 0x518))(param_1,&local_48);
    bVar4 = false;
    lVar6 = (longlong)(int)param_1[0x3e];
    if (0 < (longlong)(int)param_1[0x3e]) {
      do {
        if ((longlong)(int)local_40 != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)((longlong)local_48 + lVar5) == ((longlong *)param_1[0x3d])[lVar6 + -1]
               ) goto LAB_14572e086;
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)local_40 * 8 != lVar5);
        }
        FUN_14572e440(lVar3,param_1);
        bVar4 = true;
LAB_14572e086:
        bVar2 = 1 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar2);
    }
    if ((longlong)(int)local_40 != 0) {
      plVar1 = local_48 + (int)local_40;
      plVar7 = local_48;
      do {
        if ((longlong)(int)param_1[0x3e] != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(param_1[0x3d] + lVar6) == *plVar7) goto LAB_14572e0df;
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)param_1[0x3e] * 8 != lVar6);
        }
        FUN_14572e1d0(lVar3,param_1);
        bVar4 = true;
LAB_14572e0df:
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    if (bVar4) {
      if ((longlong **)(param_1 + 0x3d) != &local_48) {
        if (param_1[0x3d] != 0) {
          FUN_1400020a8();
        }
        param_1[0x3d] = (longlong)local_48;
        local_48 = (longlong *)0x0;
        *(int *)(param_1 + 0x3e) = (int)local_40;
        *(undefined4 *)((longlong)param_1 + 500) = local_40._4_4_;
        local_40 = 0;
      }
      FUN_1406290c2(lVar3,param_1,0);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572e188 FUN_14572e188 body=71 status=ok
// SIG undefined FUN_14572e188(void)

undefined8 * FUN_14572e188(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  undefined *puVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((byte)(*param_3 - 2U) < 8) {
    puVar1 = (&PTR_DAT_14b4040e8)[(byte)(*param_3 - 2U)];
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_14572e9fe(param_2);
    *(undefined **)*param_2 = puVar1;
  }
  return param_2;
}



// FUNCTION 14572e1d0 FUN_14572e1d0 body=115 status=ok
// SIG undefined FUN_14572e1d0(void)

undefined8 FUN_14572e1d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14572e25a(param_3);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    (**(code **)(*param_3 + 8))(param_3,local_30);
    uVar2 = FUN_140628096(param_1,param_2,local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572e244 FUN_14572e244 body=22 status=ok
// SIG undefined FUN_14572e244(void)

undefined8 FUN_14572e244(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)();
  return param_2;
}



// FUNCTION 14572e25a FUN_14572e25a body=169 status=ok
// SIG undefined FUN_14572e25a(void)

undefined8 FUN_14572e25a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_14572e308();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
  }
  (**(code **)*param_1)(param_1,&local_28);
  if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0x38);
    lVar3 = (longlong)*(int *)(lVar3 + 0x40) * 0xc;
    do {
      if (*plVar1 == local_28) {
        if (plVar1 != (longlong *)0x0) {
          uVar2 = CONCAT71((int7)((ulonglong)plVar1 >> 8),(char)plVar1[1]);
          goto LAB_14572e2cd;
        }
        break;
      }
      plVar1 = (longlong *)((longlong)plVar1 + 0xc);
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0);
  }
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
LAB_14572e2cd:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572e308 FUN_14572e308 body=228 status=ok
// SIG undefined FUN_14572e308(void)

longlong FUN_14572e308(void)

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
  if (DAT_14c9a0810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_147089047;
    local_40 = FUN_1462a1348;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusLoadingContextSettings",&DAT_14c9a0810,&DAT_147089046);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572e3ee FUN_14572e3ee body=81 status=ok
// SIG undefined FUN_14572e3ee(void)

undefined8 FUN_14572e3ee(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_140d01982();
  if ((((iVar1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14116599c();
    if (lVar2 != 0) {
      uVar3 = FUN_14144bed0(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14572e440 FUN_14572e440 body=115 status=ok
// SIG undefined FUN_14572e440(void)

undefined8 FUN_14572e440(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14572e25a(param_3);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    (**(code **)(*param_3 + 8))(param_3,local_30);
    uVar2 = FUN_14062813c(param_1,param_2,local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572e4b4 thunk_FUN_161d88b1d body=5 status=ok
// SIG undefined thunk_FUN_161d88b1d(void)

void thunk_FUN_161d88b1d(void)

{
  return;
}



// FUNCTION 14572e538 FUN_14572e538 body=110 status=ok
// SIG undefined FUN_14572e538(void)

void FUN_14572e538(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x10);
  lVar2 = FUN_14119d4d6(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_14030d4a0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_141495d94(lVar2 + 0x338);
      FUN_1403ca8ec(lVar2 + 0x338,&DAT_14cbd9588);
      *(undefined1 *)(param_1 + 0x119) = 1;
    }
  }
  return;
}



// FUNCTION 14572e5a6 FUN_14572e5a6 body=170 status=ok
// SIG undefined FUN_14572e5a6(void)

void FUN_14572e5a6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) {
    FUN_140628825();
    uVar2 = FUN_1414b0848(param_1);
    FUN_145ccf0c4(uVar2);
    FUN_145a12e06(uVar2);
    if (0 < *(int *)(lVar1 + 0x238)) {
      iVar5 = 0;
      lVar6 = 0;
      do {
        lVar3 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar6);
        if (lVar3 != 0) {
          lVar4 = FUN_144a5dd5e();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            FUN_14572e650(lVar3);
          }
        }
        lVar6 = lVar6 + 8;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0x238));
    }
  }
  return;
}



// FUNCTION 14572e650 FUN_14572e650 body=91 status=ok
// SIG undefined FUN_14572e650(void)

void FUN_14572e650(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_38 [37];
  undefined1 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 != '\0') {
    local_11 = 0;
    local_13 = 0;
    FUN_14572e6ac(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572e6ac FUN_14572e6ac body=93 status=ok
// SIG undefined FUN_14572e6ac(void)

void FUN_14572e6ac(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_140d27aa0();
  if (param_2[1] == '\x01') {
    *(undefined1 *)(lVar1 + 0x42) = *param_2;
  }
  if ((param_3[1] != '\x01') || (uVar2 = 0, *param_3 == '\0')) {
    uVar2 = 0xbf800000;
  }
  FUN_141191d9a(lVar1,uVar2);
  if (param_2[1] == '\x01') {
    param_2[1] = 0;
  }
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  return;
}



// FUNCTION 14572e70a thunk_FUN_15764adea body=5 status=ok
// SIG undefined thunk_FUN_15764adea(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff8 : 0x00015764ae4e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_FUN_15764adea(undefined8 param_1)

{
  FUN_162994c7e(param_1);
  return;
}



// FUNCTION 14572e7e6 thunk_FUN_15af3c563 body=5 status=ok
// SIG undefined thunk_FUN_15af3c563(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015af3c595) overlaps instruction at (ram,0x00015af3c594)
    */
/* WARNING: Removing unreachable block (ram,0x00015af3c5d6) */
/* WARNING: Removing unreachable block (ram,0x00015af3c66a) */
/* WARNING: Removing unreachable block (ram,0x0001651ca4bb) */
/* WARNING: Removing unreachable block (ram,0x00015af3c670) */
/* WARNING: Removing unreachable block (ram,0x00015af3c594) */

undefined8 thunk_FUN_15af3c563(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  undefined1 auStack_5f1d [24309];
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  *(undefined8 *)(0x5f14 - ~(ulonglong)auStack_5f1d) = unaff_RBX;
  return in_RAX;
}



// FUNCTION 14572e8dc FUN_14572e8dc body=95 status=ok
// SIG undefined FUN_14572e8dc(void)

void FUN_14572e8dc(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x10);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x10);
    bVar2 = (**(code **)(*plVar3 + 0x498))(plVar3);
    if (bVar2 < 6) {
      FUN_145ccf0c4(param_1);
      FUN_14572f23e(param_1);
      FUN_14572f4b6(param_1);
      FUN_145a12c8a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14572e93c FUN_14572e93c body=194 status=ok
// SIG undefined FUN_14572e93c(void)

void FUN_14572e93c(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_1 = param_1 + 0x10;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14479d2ce(param_1);
    bVar2 = (**(code **)(*plVar3 + 0x498))(plVar3);
    if (bVar2 < 6) {
      uVar4 = FUN_14479d2ce(param_1);
      lVar5 = FUN_14119d4d6(uVar4);
      if (lVar5 != 0) {
        lVar6 = FUN_14030d4a0();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          FUN_14479d2ce(param_1);
          lVar5 = lVar5 + 0x338;
          FUN_140c125e6(lVar5,&DAT_14cbd9578);
          FUN_1403ca8ec(lVar5,&DAT_14cbd9310);
          FUN_1406287f4(lVar5);
          return;
        }
      }
      FUN_14479d2ce(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14572e9fe FUN_14572e9fe body=125 status=ok
// SIG undefined FUN_14572e9fe(void)

void FUN_14572e9fe(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 << 3,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 3)) {
      uVar3 = uVar2 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 14572ea7c FUN_14572ea7c body=217 status=ok
// SIG undefined FUN_14572ea7c(void)

void FUN_14572ea7c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x1e0);
  if ((((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x30), lVar3 != 0)) &&
      (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x40), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar7);
      if (lVar5 != 0) {
        lVar6 = FUN_140628492();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          FUN_1409845a0(lVar2,local_4c,lVar5);
          if (-1 < local_4c[0]) {
            FUN_14572eb56(lVar3,local_4c,param_2);
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572eb56 FUN_14572eb56 body=192 status=ok
// SIG undefined FUN_14572eb56(void)

void FUN_14572eb56(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  lVar2 = FUN_140b9fe48();
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x8e) = param_3, param_3 != '\0')) {
    FUN_14120ddce(lVar2 + 0xf8);
    if ((*(longlong *)(param_1 + 0x210) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
      puVar3 = (undefined8 *)(param_1 + 0x210);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0xf0);
      lVar2 = FUN_144a61814(uVar1,puVar3);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,*puVar3);
      }
      *puVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572ec18 FUN_14572ec18 body=305 status=ok
// SIG undefined FUN_14572ec18(void)

void FUN_14572ec18(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + lVar7);
      if (lVar3 != 0) {
        lVar4 = FUN_14030d4a0();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_14572ed4a(lVar3);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  lVar5 = DAT_14c9a1ab0;
  if (DAT_14c9a1ab0 != 0) {
    FUN_14572ed72(DAT_14c9a1ab0,&DAT_14cbca450,1);
    FUN_14572ed72(lVar5,&DAT_14cbca8a0,0);
    FUN_14572ed72(lVar5,&DAT_14cbca3e8,DAT_14c872bf2);
    FUN_14572ef20(lVar5,1);
  }
  FUN_1406281e2(param_1,&DAT_14cbca7c8);
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar5 != 0)) &&
     (lVar5 = *(longlong *)(lVar5 + 0x170), lVar5 != 0)) {
    pbVar1 = (byte *)(lVar5 + 0x410);
    *pbVar1 = *pbVar1 | 1;
  }
  lVar5 = FUN_14040226a(param_1,0);
  if (lVar5 != 0) {
    FUN_145c186bc(lVar5,0);
  }
  uVar6 = FUN_140d27a2a(param_1);
  FUN_140628abc(uVar6,0);
  uVar6 = FUN_1414b0848(param_1);
  FUN_14572eeaa(uVar6);
  FUN_14572ef98(param_1);
  return;
}



// FUNCTION 14572ed4a FUN_14572ed4a body=40 status=ok
// SIG undefined FUN_14572ed4a(void)

void FUN_14572ed4a(longlong param_1)

{
  FUN_140c125e6(param_1 + 0x338,&DAT_14cbd9578);
  *(undefined1 *)(param_1 + 0x3de) = 0;
  return;
}



// FUNCTION 14572ed72 FUN_14572ed72 body=201 status=ok
// SIG undefined FUN_14572ed72(void)

void FUN_14572ed72(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x2e0) != *(int *)(param_1 + 0x30c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x310;
    if (*(longlong *)(param_1 + 0x318) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x318);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 800) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2d8) + (longlong)iVar7 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return;
          }
          cVar4 = FUN_14572ee3b(plVar1[1],param_3,param_1 + 0x2c8);
          if (cVar4 == '\0') {
            return;
          }
          FUN_14570107c(param_1);
          return;
        }
        iVar7 = (int)plVar1[2];
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 14572ee3b FUN_14572ee3b body=111 status=ok
// SIG undefined FUN_14572ee3b(void)

undefined8 FUN_14572ee3b(longlong *param_1,char param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  if ((((param_1 == (longlong *)0x0) || ((int)param_1[1] == 0)) ||
      (*(char *)((longlong)param_1 + 0x34) != '\0')) ||
     (*(char *)((longlong)param_1 + 0x35) == param_2)) {
    uVar3 = 0;
  }
  else {
    *(char *)((longlong)param_1 + 0x35) = param_2;
    lVar2 = param_3[1];
    uVar3 = 1;
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_3;
      lVar4 = 0;
      do {
        if (((*(int *)(lVar1 + 8 + lVar4) == (int)param_1[1]) &&
            (*(longlong *)(lVar1 + lVar4) != *param_1)) && (*(char *)(lVar1 + 0x34 + lVar4) == '\0')
           ) {
          if (param_2 == '\0') {
            uVar5 = *(undefined1 *)(lVar1 + 0xc + lVar4);
          }
          else {
            uVar5 = 0;
          }
          *(undefined1 *)(lVar1 + 0x35 + lVar4) = uVar5;
        }
        lVar4 = lVar4 + 0x60;
      } while ((longlong)(int)lVar2 * 0x60 != lVar4);
    }
  }
  return uVar3;
}



// FUNCTION 14572eeaa FUN_14572eeaa body=118 status=ok
// SIG undefined FUN_14572eeaa(void)

void FUN_14572eeaa(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x10;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(lVar1);
    if (((*(longlong *)(lVar3 + 0x30) != 0) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360) != 0)) &&
       (*(longlong *)(param_1 + 0x108) != 0)) {
      lVar3 = FUN_14050aea0(param_1 + 0x108);
      if (lVar3 != 0) {
        uVar4 = FUN_14479d2ce(lVar1);
        FUN_14572f778(uVar4,lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14572ef20 FUN_14572ef20 body=120 status=ok
// SIG undefined FUN_14572ef20(void)

void FUN_14572ef20(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2c8);
    lVar3 = (longlong)*(int *)(param_1 + 0x2d0) * 0x60;
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + 0xc + lVar4) != *(char *)(lVar2 + 0x35 + lVar4)) {
        lVar4 = 0;
        do {
          cVar1 = *(char *)(lVar2 + 0x35 + lVar4);
          if (*(char *)(lVar2 + 0xc + lVar4) != cVar1) {
            *(char *)(lVar2 + 0xc + lVar4) = cVar1;
          }
          lVar4 = lVar4 + 0x60;
        } while (lVar3 != lVar4);
        FUN_14570107c(param_1);
        FUN_1470a022e(param_1,param_2);
        return;
      }
      lVar4 = lVar4 + 0x60;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 14572ef98 FUN_14572ef98 body=154 status=ok
// SIG undefined FUN_14572ef98(void)

void FUN_14572ef98(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  lVar2 = thunk_FUN_1402735c8();
  if (((lVar5 != 0) && (*(int *)(lVar2 + 0xb40) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      lVar3 = FUN_140334a94(*(undefined8 *)(lVar2 + lVar6),lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_1460055fe(lVar3);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14572f032 FUN_14572f032 body=523 status=ok
// SIG undefined FUN_14572f032(void)

ulonglong FUN_14572f032(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [46];
  undefined1 local_3a;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = 0;
  if ((param_2 == (longlong *)0x0) || (*(char *)(param_1 + 0x474) == '\0')) goto LAB_14572f1a6;
  lVar4 = FUN_14030d4a0();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
     ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30 && (*(longlong *)(param_1 + 0x30) != 0)))) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((plVar7 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar7);
    }
    else if (plVar7 == (longlong *)0x0) goto LAB_14572f1cd;
    lVar4 = FUN_140d976a6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      uVar3 = (**(code **)(*param_2 + 0x328))(param_2);
      cVar2 = FUN_14572de9c(plVar7,uVar3);
      if (cVar2 != '\0') {
        plVar7 = *(longlong **)(param_1 + 0x478);
        *(longlong **)(param_1 + 0x478) = param_2;
        if (plVar7 != param_2 && plVar7 != (longlong *)0x0) {
          uVar5 = FUN_1414b0848(param_1);
          FUN_145a12c8a(uVar5);
        }
        plVar7 = param_2 + 0x67;
        FUN_1403ca8ec(plVar7,&DAT_14cbd9310);
        FUN_140c125e6(plVar7,&DAT_14cbd9510);
      }
      iVar1 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar1 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x38);
        lVar9 = 0;
        do {
          plVar7 = *(longlong **)(lVar4 + lVar9);
          if (plVar7 != (longlong *)0x0 && plVar7 != param_2) {
            lVar6 = FUN_14030d4a0();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30)) {
              plVar7 = plVar7 + 0x67;
              FUN_141495d94(plVar7);
              FUN_1403ca8ec(plVar7,&DAT_14cbd9510);
            }
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar1 * 8 != lVar9);
      }
      uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
      local_39 = 1;
      local_3a = 1;
      FUN_14572dde0(param_1 + 0x650,&local_3a,*(undefined8 *)(param_1 + 0x478));
      goto LAB_14572f1a6;
    }
  }
LAB_14572f1cd:
  uVar8 = 0;
LAB_14572f1a6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572f23e FUN_14572f23e body=631 status=ok
// SIG undefined FUN_14572f23e(void)

void FUN_14572f23e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x10;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(lVar1);
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,2,0x10);
    local_48 = 2;
    *local_50 = &PTR_LAB_14b412d70;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_50[2] = lVar5;
    *local_50 = &PTR_FUN_14b971b80;
    local_50[3] = param_1;
    FUN_14127bc3c(lVar3 + 0xc0,&local_58,&local_50);
    FUN_1449db362(&local_50);
    *(undefined8 *)(param_1 + 0xd0) = local_58;
    lVar4 = FUN_14479d2ce(lVar1);
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,2,0x10);
    local_48 = 2;
    *local_50 = &PTR_LAB_14b412d70;
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
    local_50[2] = lVar3;
    *local_50 = &PTR_FUN_14b971bf0;
    local_50[3] = param_1;
    FUN_14127bc3c(lVar4 + 0xd8,&local_58,&local_50);
    FUN_1449db362(&local_50);
    *(undefined8 *)(param_1 + 0xd8) = local_58;
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,2,0x10);
    local_48 = 2;
    *local_50 = &PTR_LAB_14b968eb0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_50[2] = lVar4;
    *local_50 = &PTR_FUN_14b971c60;
    local_50[3] = param_1;
    FUN_14586eb8c(&DAT_14cb717f8,&local_58,&local_50);
    FUN_1449db362(&local_50);
    *(undefined8 *)(param_1 + 0xe0) = local_58;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572f4b6 FUN_14572f4b6 body=705 status=ok
// SIG undefined FUN_14572f4b6(void)

void FUN_14572f4b6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144729dda(param_1 + 0x10);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    lVar2 = *(longlong *)(lVar2 + 0x48);
    if (lVar2 != 0) {
      lVar3 = FUN_140b6d0be();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_14485c47a(param_1 + 0x18,lVar2);
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,3,0x10);
        local_48 = 3;
        *local_50 = &PTR_LAB_149e020b0;
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
        local_50[2] = lVar4;
        *local_50 = &PTR_FUN_14b971cd0;
        local_50[3] = param_1;
        local_50[4] = lVar2;
        FUN_1448b6402(lVar2 + 0x1e0,&local_58,&local_50);
        FUN_1449db362(&local_50);
        *(undefined8 *)(param_1 + 0xe8) = local_58;
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,2,0x10);
        local_48 = 2;
        *local_50 = &PTR_LAB_14b971db0;
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
        local_50[2] = lVar4;
        *local_50 = &PTR_FUN_14b971d40;
        local_50[3] = param_1;
        FUN_14586f07a(lVar2 + 0x548,&local_58,&local_50);
        FUN_1449db362(&local_50);
        *(undefined8 *)(param_1 + 0xf0) = local_58;
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,3,0x10);
        local_48 = 3;
        *local_50 = &PTR_LAB_149e020b0;
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
        local_50[2] = lVar4;
        *local_50 = &PTR_FUN_14b971e20;
        local_50[3] = param_1;
        local_50[4] = lVar2;
        FUN_1448b6402(lVar2 + 0x1f8,&local_58,&local_50);
        FUN_1449db362(&local_50);
        *(undefined8 *)(param_1 + 0xf8) = local_58;
        goto LAB_14572f706;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
LAB_14572f706:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572f778 FUN_14572f778 body=1332 status=ok
// SIG undefined FUN_14572f778(void)

void FUN_14572f778(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  byte bVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_110 [16];
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  void *local_78;
  ulonglong uStack_70;
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  lVar14 = DAT_14cbca428;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar7 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar7 ^ 1);
  }
  if ((*(char *)(lVar14 + uVar9) != '\x01') ||
     (cVar8 = (**(code **)(*param_1 + 0x498))(param_1), (byte)(cVar8 - 6U) < 0xfd))
  goto LAB_14572f7e4;
  puVar12 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(param_2 + 8);
  }
  FUN_141710b0e(puVar12,&local_60,1);
  lVar14 = *(longlong *)(param_2 + 0x1b0);
  if (lVar14 == 0) {
    local_78 = (void *)0x0;
    uStack_70 = 0;
  }
  else {
    FUN_140902b70(lVar14,&local_e0);
    FUN_1400021e4(&local_e0,&local_78);
  }
  if (((1 < local_58) && (1 < (int)uStack_70)) && (lVar14 != 0)) {
    FUN_14623d36e(lVar14,&local_88);
    if (1 < local_80) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_e0 = local_88;
      local_d8 = local_80 + -1;
      FUN_14475bf92(&local_a8);
      cVar8 = FUN_1461c09bd(&local_a8);
      if (cVar8 != '\0') {
        if ((param_1[6] != 0) && (lVar14 = *(longlong *)(param_1[6] + 0x360), lVar14 != 0)) {
          local_100 = *(longlong *)(lVar14 + 0x18);
          FUN_1400021e4();
          if (local_d8 == (int)uStack_70) {
            bVar7 = 1;
            if (1 < local_d8) {
              lVar13 = 0;
              while( true ) {
                uVar15 = *(ushort *)((longlong)local_e0 + lVar13);
                uVar9 = (ulonglong)uVar15;
                uVar16 = *(ushort *)((longlong)local_78 + lVar13);
                if (uVar15 != uVar16) break;
                if (uVar15 == 0) goto LAB_14572f9fd;
LAB_14572f9b4:
                lVar13 = lVar13 + 2;
              }
              if ((uVar16 | uVar15) < 0x80) {
                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                uVar17 = (ulonglong)uVar16;
                uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar17]) goto LAB_14572f9b4;
              }
              if (uVar15 != uVar16) goto LAB_14572f9eb;
            }
          }
          else {
            bVar7 = 1;
            if ((int)uStack_70 + local_d8 != 1) {
LAB_14572f9eb:
              bVar7 = 1;
              if (*(byte *)(lVar14 + 0x152) < 7) {
                bVar7 = 0x1d >> (*(byte *)(lVar14 + 0x152) & 0x1f);
              }
            }
          }
LAB_14572f9fd:
          if (local_e0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if ((bVar7 & 1) == 0) {
            uVar2 = *DAT_14cbca410;
            lVar14 = param_1[8];
            if ((longlong)(int)lVar14 != 0) {
              lVar13 = param_1[7];
              lVar18 = 0;
              do {
                lVar3 = *(longlong *)(lVar13 + lVar18);
                if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
                  lVar10 = FUN_144a5dd5e();
                  lVar3 = *(longlong *)(lVar3 + 0x30);
                  if ((lVar3 != 0) &&
                     ((((lVar10 != 0 && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) &&
                       (*(int *)(lVar10 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
                      (*(longlong *)
                        (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                       lVar10 + 0x30)))) {
                    FUN_145ac4942(lVar3,0x40400000,uVar2);
                  }
                }
                lVar18 = lVar18 + 8;
              } while ((longlong)(int)lVar14 * 8 != lVar18);
            }
            pvVar6 = local_78;
            local_e0 = (void *)0x0;
            lVar14 = (longlong)(int)uStack_70;
            local_d8 = (int)uStack_70;
            if (lVar14 == 0) {
              local_d4 = 0;
            }
            else {
              FUN_1446dd670(&local_e0,uStack_70 & 0xffffffff,0);
              memcpy(local_e0,pvVar6,lVar14 * 2);
            }
            pvVar6 = local_60;
            local_d0 = (void *)0x0;
            local_c8 = local_58;
            if ((longlong)local_58 == 0) {
              local_c4 = 0;
            }
            else {
              FUN_1446dd670(&local_d0,local_58,0);
              memcpy(local_d0,pvVar6,(longlong)local_58 * 2);
            }
            local_c0 = param_1;
            if (((param_1[0xd4] != 0) && (param_1[0xd5] != 0)) && (0 < *(int *)(param_1[0xd5] + 8)))
            {
              FUN_1401cb356();
              local_f0 = param_1[0xd4];
              local_e8 = param_1[0xd5];
              if (local_e8 != 0) {
                LOCK();
                *(int *)(local_e8 + 0xc) = *(int *)(local_e8 + 0xc) + 1;
                UNLOCK();
              }
              FUN_140d61352(&local_f0);
            }
            uVar11 = FUN_1401cb356();
            FUN_14413f674(local_110,param_1,&local_e0);
            local_118 = uVar2;
            FUN_1405f67fc(uVar11,&local_100,local_110,
                          L"UOakGameInstance::DoMapTravelForMainMenuStation");
            param_1[0xd4] = local_100;
            local_100 = 0;
            plVar5 = (longlong *)param_1[0xd5];
            param_1[0xd5] = (longlong)local_f8;
            local_f8 = (longlong *)0x0;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))();
              }
              if (local_f8 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)local_f8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_f8 + 0x10))();
                }
              }
            }
            FUN_1449db362(local_110);
            if (local_d0 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_e0 != (void *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_14572f8ef;
          }
        }
        if (((param_1[0xd4] != 0) && (param_1[0xd5] != 0)) && (0 < *(int *)(param_1[0xd5] + 8))) {
          FUN_1401cb356();
          local_b8 = param_1[0xd4];
          local_b0 = param_1[0xd5];
          if (local_b0 != 0) {
            LOCK();
            *(int *)(local_b0 + 0xc) = *(int *)(local_b0 + 0xc) + 1;
            UNLOCK();
          }
          FUN_140d61352(&local_b8);
        }
      }
    }
LAB_14572f8ef:
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14572f7e4:
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14572fcae FUN_14572fcae body=62 status=ok
// SIG undefined FUN_14572fcae(void)

void FUN_14572fcae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148812c26(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14572fcec FUN_14572fcec body=132 status=ok
// SIG undefined FUN_14572fcec(void)

void FUN_14572fcec(longlong param_1,int param_2)

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



// FUNCTION 14572fd70 FUN_14572fd70 body=157 status=ok
// SIG undefined FUN_14572fd70(void)

void FUN_14572fd70(longlong param_1)

{
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 1;
  local_a6 = 2;
  local_a4 = 0x3f80000040a00000;
  local_18 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_7c = 0;
  uStack_74 = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  uStack_24 = 0;
  FUN_14572fe0e(param_1 + 0x110,&local_a8);
  FUN_140fbaa6a(&local_a8);
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14572fe0e FUN_14572fe0e body=202 status=ok
// SIG undefined FUN_14572fe0e(void)

undefined1 * FUN_14572fe0e(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  FUN_14572ff26(param_1 + 0x20,param_2 + 0x20);
  FUN_14572fed8(param_1 + 0x30,param_2 + 0x30);
  FUN_14572ff76(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_144a450dc(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 14572fed8 FUN_14572fed8 body=78 status=ok
// SIG undefined FUN_14572fed8(void)

longlong * FUN_14572fed8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140fbab91(*param_1,(int)param_1[1]);
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



// FUNCTION 14572ff26 FUN_14572ff26 body=80 status=ok
// SIG undefined FUN_14572ff26(void)

longlong * FUN_14572ff26(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140fbab65(*param_1,(int)param_1[1]);
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



// FUNCTION 14572ff76 FUN_14572ff76 body=80 status=ok
// SIG undefined FUN_14572ff76(void)

longlong * FUN_14572ff76(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140fbab39(*param_1,(int)param_1[1]);
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



// FUNCTION 14572ffc6 FUN_14572ffc6 body=147 status=ok
// SIG undefined FUN_14572ffc6(void)

void FUN_14572ffc6(longlong param_1,int param_2)

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



// FUNCTION 145730059 FUN_145730059 body=203 status=ok
// SIG undefined FUN_145730059(void)

undefined8 FUN_145730059(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145730126 FUN_145730126 body=366 status=ok
// SIG undefined FUN_145730126(void)

undefined4 * FUN_145730126(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145730318(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  lVar7 = *plVar1;
  local_40[1] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145730296(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145730400(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145730296 FUN_145730296 body=130 status=ok
// SIG undefined FUN_145730296(void)

undefined8 FUN_145730296(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14712a214((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145730318 FUN_145730318 body=231 status=ok
// SIG undefined FUN_145730318(void)

int * FUN_145730318(longlong *param_1,int *param_2)

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



// FUNCTION 145730400 FUN_145730400 body=482 status=ok
// SIG undefined FUN_145730400(void)

void FUN_145730400(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1457305e4 FUN_1457305e4 body=48 status=ok
// SIG undefined FUN_1457305e4(void)

void FUN_1457305e4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14573061a FUN_14573061a body=187 status=ok
// SIG undefined FUN_14573061a(void)

void FUN_14573061a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = &DAT_148ec9068;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1457306d6(param_1,param_2,&DAT_14cb92c58,param_1);
      local_38 = &LAB_148ec906a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_1457306d6(param_1,param_2,&DAT_14cb92be8,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457306d6 FUN_1457306d6 body=293 status=ok
// SIG undefined FUN_1457306d6(void)

void FUN_1457306d6(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14063e918(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457307fc FUN_1457307fc body=488 status=ok
// SIG undefined FUN_1457307fc(void)

void FUN_1457307fc(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_40 = (code *)&LAB_145834432;
      local_38 = 0;
      local_48 = &local_40;
      FUN_14063e99c(param_1,param_2,&DAT_14cb92b90,param_1);
      local_40 = (code *)&LAB_1458343a0;
      local_38 = 0;
      local_48 = &local_40;
      FUN_14063e99c(param_1,param_2,&DAT_14cb92b98,param_1);
      local_40 = FUN_140de0f20;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1457309e6(param_1,param_2,&DAT_14cb92b98,param_1);
      uVar1 = *(ushort *)(param_1 + 0x298);
      if ((uVar1 & 4) == 0) {
        local_40 = (code *)&LAB_145c19e12;
        local_38 = 0;
        local_48 = &local_40;
        FUN_14063e99c(param_1,param_2,&DAT_14cb92bc0,param_1);
        local_40 = (code *)&LAB_145c19e2a;
        local_38 = 0;
        local_48 = &local_40;
        FUN_14063e99c(param_1,param_2,&DAT_14cb92bc8,param_1);
        uVar1 = *(ushort *)(param_1 + 0x298);
      }
      if ((uVar1 & 8) == 0) {
        local_40 = (code *)&LAB_148a019d2;
        local_38 = 0;
        local_48 = &local_40;
        FUN_14063e99c(param_1,param_2,&DAT_14cb92bd0,param_1);
        local_40 = (code *)&LAB_1458343c2;
        local_38 = 0;
        local_48 = &local_40;
        FUN_14063e99c(param_1,param_2,&DAT_14cb92bd8,param_1);
        uVar1 = *(ushort *)(param_1 + 0x298);
      }
      if ((uVar1 & 0x10) == 0) {
        local_40 = (code *)&LAB_148a019e0;
        local_38 = 0;
        local_48 = &local_40;
        FUN_14063e99c(param_1,param_2,&DAT_14cb92be0,param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457309e6 FUN_1457309e6 body=420 status=ok
// SIG undefined FUN_1457309e6(void)

void FUN_1457309e6(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = (longlong *)(param_1 + 0x138);
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_14063f43a(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_14063f43a(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_14063f43a(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*local_60 + (longlong)iVar1 * 4) = uVar4;
  local_58 = *param_3;
  lVar5 = FUN_14063edce(&DAT_14cb91658);
  if (lVar5 != 0) {
    FUN_1411a33e2(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145730b8c FUN_145730b8c body=132 status=ok
// SIG undefined FUN_145730b8c(void)

void FUN_145730b8c(longlong param_1,int param_2)

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



// FUNCTION 145730c10 FUN_145730c10 body=66 status=ok
// SIG undefined FUN_145730c10(void)

longlong FUN_145730c10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145730d06(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x78 + *param_1;
  FUN_145730ce0(lVar2,1);
  return lVar2;
}



// FUNCTION 145730c52 FUN_145730c52 body=43 status=ok
// SIG undefined FUN_145730c52(void)

void FUN_145730c52(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_c8 [40];
  undefined8 *puStack_a0;
  int iStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  byte bStack_48;
  ulonglong uStack_30;
  
  if (((*(uint *)(param_1 + 0x48) == 0) || (lVar2 = *(longlong *)(param_2 + 0x148), lVar2 == 0)) ||
     (uVar1 = *(uint *)(lVar2 + 0x30), uVar5 = uVar1 | 1 << (*(uint *)(param_1 + 0x48) & 0x1f),
     *(uint *)(lVar2 + 0x30) = uVar5, uVar5 == uVar1)) {
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(char *)(lVar2 + 0x34) != '\0') || (*(int *)(lVar2 + 0x24) == 0)) ||
     ((uVar1 = *(uint *)(lVar2 + 0x20), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))))
  goto LAB_1406463f2;
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)(lVar2 + 0x24))) ||
     (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (*plVar4 == 0)))) goto LAB_1406463f2;
  lVar3 = FUN_1401b4c98();
  if (lVar3 == 0) goto LAB_1406463f2;
  FUN_140646454(&puStack_a0,lVar2,FUN_140a993f0);
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_14487d8d8(&uStack_88,&puStack_a0);
  bStack_48 = 1;
  FUN_14016fdb0(lVar3,&uStack_90,&uStack_88);
  (*(code *)(&PTR_LAB_14a1c87a0)[bStack_48])(&uStack_88);
  *(undefined8 *)(lVar2 + 0x28) = uStack_90;
  if (iStack_98 == 0) {
LAB_1406463e4:
    if (puStack_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)(puStack_a0,0);
    FUN_1446efa72(&puStack_a0,0,0,0x10);
    iStack_98 = 0;
    goto LAB_1406463e4;
  }
  *(undefined1 *)(lVar2 + 0x34) = 1;
LAB_1406463f2:
  if ((uStack_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145730c7e FUN_145730c7e body=98 status=ok
// SIG undefined FUN_145730c7e(void)

void FUN_145730c7e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((ulonglong)param_2 * 0x78 + lVar1);
  FUN_14587d704(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x78),(longlong)iVar3 * 0x78);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145730ce0 FUN_145730ce0 body=38 status=ok
// SIG undefined FUN_145730ce0(void)

void FUN_145730ce0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457dfdf2(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 145730d06 FUN_145730d06 body=143 status=ok
// SIG undefined FUN_145730d06(void)

void FUN_145730d06(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145730d96 FUN_145730d96 body=205 status=ok
// SIG undefined FUN_145730d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145730d96(void)

{
  if ((DAT_14caabddf & 2) == 0) {
    DAT_14caabddf = DAT_14caabddf | 2;
    _DAT_14caabd80 = L"TSlateMaterialShaderVStrue";
    _DAT_14caabd98 = FUN_146826540;
    _DAT_14caabda0 = FUN_146825d77;
    _DAT_14caabda8 = FUN_146825fd6;
    _DAT_14caabdb0 = FUN_1407e02ea;
    _DAT_14caabdb8 = FUN_146826273;
    _DAT_14caabd90 = FUN_14750c43a;
    _DAT_14caabdd0 = 0xffffffff000000f8;
    _DAT_14caabdd8 = 8;
    DAT_14caabddc = 0;
    _DAT_14caabdc0 = &LAB_14750c470;
    FUN_145730e64();
    FUN_1407e00cc(&DAT_14caabd78);
    return;
  }
  return;
}



// FUNCTION 145730e64 FUN_145730e64 body=133 status=ok
// SIG undefined FUN_145730e64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145730e64(void)

{
  _DAT_14cab0b40 = L"BASE";
  DAT_14cab0b6a = 4;
  FUN_145730eea();
  _DAT_14cab0b50 = DAT_14caabd88;
  _DAT_14cab0b48 = &DAT_14caabc98;
  _DAT_14cab0b58 = &LAB_14682652b;
  DAT_14caabd88 = &DAT_14cab0b40;
  DAT_14caabddd = DAT_14caabddd + '\x01';
  _DAT_14cab0b60 = 0x100000000;
  if (DAT_14caabcfc != '\0') {
    DAT_14caabdde = DAT_14caabdde + '\x01';
  }
  return;
}



// FUNCTION 145730eea FUN_145730eea body=200 status=ok
// SIG undefined FUN_145730eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145730eea(void)

{
  if ((DAT_14caabcff & 2) != 0) {
    return;
  }
  DAT_14caabcff = DAT_14caabcff | 2;
  _DAT_14caabca0 = L"FSlateMaterialShaderVS";
  _DAT_14caabcb8 = FUN_146826540;
  _DAT_14caabcc0 = FUN_146825d77;
  _DAT_14caabcc8 = FUN_146825fd6;
  _DAT_14caabcd0 = FUN_1407e02ea;
  _DAT_14caabcd8 = FUN_146826273;
  _DAT_14caabcb0 = FUN_14750c284;
  _DAT_14caabcf0 = 0xffffffff000000f8;
  _DAT_14caabcf8 = 8;
  DAT_14caabcfc = 0;
  _DAT_14caabce0 = &LAB_14750c2ba;
  FUN_145730fb2();
  FUN_1407e00cc(&DAT_14caabc98);
  return;
}



// FUNCTION 145730fb2 FUN_145730fb2 body=123 status=ok
// SIG undefined FUN_145730fb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145730fb2(void)

{
  _DAT_14cab0ae0 = L"BASE";
  DAT_14cab0b0a = 4;
  _DAT_14cab0ae8 = FUN_141526006();
  _DAT_14cab0af0 = DAT_14caabca8;
  _DAT_14cab0af8 = &LAB_14682652b;
  DAT_14caabca8 = &DAT_14cab0ae0;
  DAT_14caabcfd = DAT_14caabcfd + '\x01';
  _DAT_14cab0b00 = 0x100000000;
  if (*(char *)(_DAT_14cab0ae8 + 100) != '\0') {
    DAT_14caabcfe = DAT_14caabcfe + '\x01';
  }
  return;
}



// FUNCTION 14573102e FUN_14573102e body=205 status=ok
// SIG undefined FUN_14573102e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573102e(void)

{
  if ((DAT_14caabf07 & 2) == 0) {
    DAT_14caabf07 = DAT_14caabf07 | 2;
    _DAT_14caabea8 = L"TSlateMaterialShaderVSfalse";
    _DAT_14caabec0 = FUN_146826540;
    _DAT_14caabec8 = FUN_146825d77;
    _DAT_14caabed0 = FUN_146825fd6;
    _DAT_14caabed8 = FUN_1407e02ea;
    _DAT_14caabee0 = FUN_146826273;
    _DAT_14caabeb8 = FUN_14750c4c0;
    _DAT_14caabef8 = 0xffffffff000000f8;
    _DAT_14caabf00 = 8;
    DAT_14caabf04 = 0;
    _DAT_14caabee8 = &LAB_14750c4f6;
    FUN_1457310fc();
    FUN_1407e00cc(&DAT_14caabea0);
    return;
  }
  return;
}



// FUNCTION 1457310fc FUN_1457310fc body=133 status=ok
// SIG undefined FUN_1457310fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457310fc(void)

{
  _DAT_14cab0b70 = L"BASE";
  DAT_14cab0b9a = 4;
  FUN_145730eea();
  _DAT_14cab0b80 = DAT_14caabeb0;
  _DAT_14cab0b78 = &DAT_14caabc98;
  _DAT_14cab0b88 = &LAB_14682652b;
  DAT_14caabeb0 = &DAT_14cab0b70;
  DAT_14caabf05 = DAT_14caabf05 + '\x01';
  _DAT_14cab0b90 = 0x100000000;
  if (DAT_14caabcfc != '\0') {
    DAT_14caabf06 = DAT_14caabf06 + '\x01';
  }
  return;
}



// FUNCTION 145731182 FUN_145731182 body=205 status=ok
// SIG undefined FUN_145731182(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731182(void)

{
  if ((DAT_14caac02f & 2) == 0) {
    DAT_14caac02f = DAT_14caac02f | 2;
    _DAT_14caabfd0 = L"TSlateMaterialShaderPSCustom";
    _DAT_14caabfe8 = FUN_146826540;
    _DAT_14caabff0 = FUN_146825d77;
    _DAT_14caabff8 = FUN_146825fd6;
    _DAT_14caac000 = FUN_1407e02ea;
    _DAT_14caac008 = FUN_146826273;
    _DAT_14caabfe0 = FUN_14750c546;
    _DAT_14caac020 = 0xffffffff00000118;
    _DAT_14caac028 = 8;
    DAT_14caac02c = 0;
    _DAT_14caac010 = &LAB_14750c57c;
    FUN_145731250();
    FUN_1407e00cc(&DAT_14caabfc8);
    return;
  }
  return;
}



// FUNCTION 145731250 FUN_145731250 body=133 status=ok
// SIG undefined FUN_145731250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731250(void)

{
  _DAT_14cab0ba0 = L"BASE";
  DAT_14cab0bca = 4;
  FUN_1457312d6();
  _DAT_14cab0bb0 = DAT_14caabfd8;
  _DAT_14cab0ba8 = &DAT_14caabd08;
  _DAT_14cab0bb8 = &LAB_14682652b;
  DAT_14caabfd8 = &DAT_14cab0ba0;
  DAT_14caac02d = DAT_14caac02d + '\x01';
  _DAT_14cab0bc0 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac02e = DAT_14caac02e + '\x01';
  }
  return;
}



// FUNCTION 1457312d6 FUN_1457312d6 body=205 status=ok
// SIG undefined FUN_1457312d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457312d6(void)

{
  if ((DAT_14caabd6f & 2) != 0) {
    return;
  }
  DAT_14caabd6f = DAT_14caabd6f | 2;
  _DAT_14caabd10 = L"FSlateMaterialShaderPS";
  _DAT_14caabd28 = FUN_146826540;
  _DAT_14caabd30 = FUN_146825d77;
  _DAT_14caabd38 = FUN_146825fd6;
  _DAT_14caabd40 = FUN_1407e02ea;
  _DAT_14caabd48 = FUN_146826273;
  _DAT_14caabd20 = FUN_14750c2be;
  _DAT_14caabd60 = 0xffffffff00000118;
  _DAT_14caabd68 = 8;
  DAT_14caabd6c = 0;
  _DAT_14caabd50 = &LAB_14750c2f4;
  FUN_1457313a4();
  FUN_14573158c();
  FUN_1407e00cc(&DAT_14caabd08);
  return;
}



// FUNCTION 1457313a4 FUN_1457313a4 body=121 status=ok
// SIG undefined FUN_1457313a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457313a4(void)

{
  FUN_14573141e();
  _DAT_14cab00f0 = L"GammaAndAlphaValues";
  DAT_14cab011a = FUN_140850cc5();
  _DAT_14cab00f8 = FUN_140ec6960();
  _DAT_14cab0108 = &LAB_14682652b;
  _DAT_14cab0110 = 0x1000000f8;
  _DAT_14cab0118 = 0;
  _DAT_14cab0100 = DAT_14caabd18;
  DAT_14caabd18 = &DAT_14cab00f0;
  return;
}



// FUNCTION 14573141e FUN_14573141e body=121 status=ok
// SIG undefined FUN_14573141e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573141e(void)

{
  FUN_145731498();
  _DAT_14cab0120 = L"DrawFlags";
  DAT_14cab014a = FUN_140850cc5();
  _DAT_14cab0128 = FUN_140ec6960();
  _DAT_14cab0138 = &LAB_14682652b;
  _DAT_14cab0140 = 0x1000000fe;
  _DAT_14cab0148 = 0;
  _DAT_14cab0130 = DAT_14caabd18;
  DAT_14caabd18 = &DAT_14cab0120;
  return;
}



// FUNCTION 145731498 FUN_145731498 body=121 status=ok
// SIG undefined FUN_145731498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731498(void)

{
  FUN_145731512();
  _DAT_14cab0150 = L"ShaderParams";
  DAT_14cab017a = FUN_140850cc5();
  _DAT_14cab0158 = FUN_140ec6960();
  _DAT_14cab0168 = &LAB_14682652b;
  _DAT_14cab0170 = 0x100000104;
  _DAT_14cab0178 = 0;
  _DAT_14cab0160 = DAT_14caabd18;
  DAT_14caabd18 = &DAT_14cab0150;
  return;
}



// FUNCTION 145731512 FUN_145731512 body=121 status=ok
// SIG undefined FUN_145731512(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731512(void)

{
  FUN_145731b58();
  _DAT_14cab0180 = L"ShaderParams2";
  DAT_14cab01aa = FUN_140850cc5();
  _DAT_14cab0188 = FUN_140ec6960();
  _DAT_14cab0198 = &LAB_14682652b;
  _DAT_14cab01a0 = 0x10000010a;
  _DAT_14cab01a8 = 0;
  _DAT_14cab0190 = DAT_14caabd18;
  DAT_14caabd18 = &DAT_14cab0180;
  return;
}



// FUNCTION 14573158c FUN_14573158c body=123 status=ok
// SIG undefined FUN_14573158c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573158c(void)

{
  _DAT_14cab0b10 = L"BASE";
  DAT_14cab0b3a = 4;
  _DAT_14cab0b18 = FUN_141526006();
  _DAT_14cab0b20 = DAT_14caabd18;
  _DAT_14cab0b28 = &LAB_14682652b;
  DAT_14caabd18 = &DAT_14cab0b10;
  DAT_14caabd6d = DAT_14caabd6d + '\x01';
  _DAT_14cab0b30 = 0x100000000;
  if (*(char *)(_DAT_14cab0b18 + 100) != '\0') {
    DAT_14caabd6e = DAT_14caabd6e + '\x01';
  }
  return;
}



// FUNCTION 145731608 FUN_145731608 body=205 status=ok
// SIG undefined FUN_145731608(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731608(void)

{
  if ((DAT_14caac157 & 2) == 0) {
    DAT_14caac157 = DAT_14caac157 | 2;
    _DAT_14caac0f8 = L"TSlateMaterialShaderPSDefault";
    _DAT_14caac110 = FUN_146826540;
    _DAT_14caac118 = FUN_146825d77;
    _DAT_14caac120 = FUN_146825fd6;
    _DAT_14caac128 = FUN_1407e02ea;
    _DAT_14caac130 = FUN_146826273;
    _DAT_14caac108 = FUN_14750c5e6;
    _DAT_14caac148 = 0xffffffff00000118;
    _DAT_14caac150 = 8;
    DAT_14caac154 = 0;
    _DAT_14caac138 = &LAB_14750c61c;
    FUN_1457316d6();
    FUN_1407e00cc(&DAT_14caac0f0);
    return;
  }
  return;
}



// FUNCTION 1457316d6 FUN_1457316d6 body=133 status=ok
// SIG undefined FUN_1457316d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457316d6(void)

{
  _DAT_14cab0bd0 = L"BASE";
  DAT_14cab0bfa = 4;
  FUN_1457312d6();
  _DAT_14cab0be0 = DAT_14caac100;
  _DAT_14cab0bd8 = &DAT_14caabd08;
  _DAT_14cab0be8 = &LAB_14682652b;
  DAT_14caac100 = &DAT_14cab0bd0;
  DAT_14caac155 = DAT_14caac155 + '\x01';
  _DAT_14cab0bf0 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac156 = DAT_14caac156 + '\x01';
  }
  return;
}



// FUNCTION 14573175c FUN_14573175c body=205 status=ok
// SIG undefined FUN_14573175c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573175c(void)

{
  if ((DAT_14caac27f & 2) == 0) {
    DAT_14caac27f = DAT_14caac27f | 2;
    _DAT_14caac220 = L"TSlateMaterialShaderPSBorder";
    _DAT_14caac238 = FUN_146826540;
    _DAT_14caac240 = FUN_146825d77;
    _DAT_14caac248 = FUN_146825fd6;
    _DAT_14caac250 = FUN_1407e02ea;
    _DAT_14caac258 = FUN_146826273;
    _DAT_14caac230 = FUN_14750c686;
    _DAT_14caac270 = 0xffffffff00000118;
    _DAT_14caac278 = 8;
    DAT_14caac27c = 0;
    _DAT_14caac260 = &LAB_14750c6bc;
    FUN_14573182a();
    FUN_1407e00cc(&DAT_14caac218);
    return;
  }
  return;
}



// FUNCTION 14573182a FUN_14573182a body=133 status=ok
// SIG undefined FUN_14573182a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573182a(void)

{
  _DAT_14cab0c00 = L"BASE";
  DAT_14cab0c2a = 4;
  FUN_1457312d6();
  _DAT_14cab0c10 = DAT_14caac228;
  _DAT_14cab0c08 = &DAT_14caabd08;
  _DAT_14cab0c18 = &LAB_14682652b;
  DAT_14caac228 = &DAT_14cab0c00;
  DAT_14caac27d = DAT_14caac27d + '\x01';
  _DAT_14cab0c20 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac27e = DAT_14caac27e + '\x01';
  }
  return;
}



// FUNCTION 1457318b0 FUN_1457318b0 body=205 status=ok
// SIG undefined FUN_1457318b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457318b0(void)

{
  if ((DAT_14caac3a7 & 2) == 0) {
    DAT_14caac3a7 = DAT_14caac3a7 | 2;
    _DAT_14caac348 = L"TSlateMaterialShaderPSGrayscaleFont";
    _DAT_14caac360 = FUN_146826540;
    _DAT_14caac368 = FUN_146825d77;
    _DAT_14caac370 = FUN_146825fd6;
    _DAT_14caac378 = FUN_1407e02ea;
    _DAT_14caac380 = FUN_146826273;
    _DAT_14caac358 = FUN_14750c726;
    _DAT_14caac398 = 0xffffffff00000118;
    _DAT_14caac3a0 = 8;
    DAT_14caac3a4 = 0;
    _DAT_14caac388 = &LAB_14750c75c;
    FUN_14573197e();
    FUN_1407e00cc(&DAT_14caac340);
    return;
  }
  return;
}



// FUNCTION 14573197e FUN_14573197e body=133 status=ok
// SIG undefined FUN_14573197e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573197e(void)

{
  _DAT_14cab0c30 = L"BASE";
  DAT_14cab0c5a = 4;
  FUN_1457312d6();
  _DAT_14cab0c40 = DAT_14caac350;
  _DAT_14cab0c38 = &DAT_14caabd08;
  _DAT_14cab0c48 = &LAB_14682652b;
  DAT_14caac350 = &DAT_14cab0c30;
  DAT_14caac3a5 = DAT_14caac3a5 + '\x01';
  _DAT_14cab0c50 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac3a6 = DAT_14caac3a6 + '\x01';
  }
  return;
}



// FUNCTION 145731a04 FUN_145731a04 body=205 status=ok
// SIG undefined FUN_145731a04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731a04(void)

{
  if ((DAT_14caac5f7 & 2) == 0) {
    DAT_14caac5f7 = DAT_14caac5f7 | 2;
    _DAT_14caac598 = L"TSlateMaterialShaderPSRoundedBox";
    _DAT_14caac5b0 = FUN_146826540;
    _DAT_14caac5b8 = FUN_146825d77;
    _DAT_14caac5c0 = FUN_146825fd6;
    _DAT_14caac5c8 = FUN_1407e02ea;
    _DAT_14caac5d0 = FUN_146826273;
    _DAT_14caac5a8 = FUN_14750c866;
    _DAT_14caac5e8 = 0xffffffff00000118;
    _DAT_14caac5f0 = 8;
    DAT_14caac5f4 = 0;
    _DAT_14caac5d8 = &LAB_14750c89c;
    FUN_145731ad2();
    FUN_1407e00cc(&DAT_14caac590);
    return;
  }
  return;
}



// FUNCTION 145731ad2 FUN_145731ad2 body=133 status=ok
// SIG undefined FUN_145731ad2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731ad2(void)

{
  _DAT_14cab0c90 = L"BASE";
  DAT_14cab0cba = 4;
  FUN_1457312d6();
  _DAT_14cab0ca0 = DAT_14caac5a0;
  _DAT_14cab0c98 = &DAT_14caabd08;
  _DAT_14cab0ca8 = &LAB_14682652b;
  DAT_14caac5a0 = &DAT_14cab0c90;
  DAT_14caac5f5 = DAT_14caac5f5 + '\x01';
  _DAT_14cab0cb0 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac5f6 = DAT_14caac5f6 + '\x01';
  }
  return;
}



// FUNCTION 145731b58 FUN_145731b58 body=216 status=ok
// SIG undefined FUN_145731b58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145731b58(void)

{
  _DAT_14cab01e0 = L"AdditionalTextureParameter";
  DAT_14cab020a = FUN_140850cc5();
  _DAT_14cab01e8 = FUN_140fb78d0();
  _DAT_14cab01f8 = &LAB_14682652b;
  _DAT_14cab0200 = 0x100000114;
  _DAT_14cab0208 = 0;
  _DAT_14cab01f0 = DAT_14caabd18;
  DAT_14caabd18 = &DAT_14cab01e0;
  _DAT_14cab01b0 = L"TextureParameterSampler";
  DAT_14cab01da = FUN_140850cc5();
  _DAT_14cab01b8 = FUN_140fb78d0();
  _DAT_14cab01c8 = &LAB_14682652b;
  _DAT_14cab01d0 = 0x100000110;
  _DAT_14cab01d8 = 0;
  _DAT_14cab01c0 = DAT_14caabd18;
  DAT_14caabd18 = &DAT_14cab01b0;
  return;
}



// FUNCTION 145731c30 FUN_145731c30 body=99 status=ok
// SIG undefined FUN_145731c30(void)

undefined8 FUN_145731c30(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x88);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_20 = *(undefined8 *)(param_1 + 0x68);
  FUN_144a083d0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145731c94 FUN_145731c94 body=132 status=ok
// SIG undefined FUN_145731c94(void)

void FUN_145731c94(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145731d18 FUN_145731d18 body=731 status=ok
// SIG undefined FUN_145731d18(void)

void FUN_145731d18(longlong param_1,longlong param_2,ushort param_3,undefined1 param_4)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_3;
  lVar3 = *(longlong *)(param_1 + 0x90);
  uVar11 = (uint)param_3;
  if (*(int *)(lVar3 + uVar10 * 8) != 0) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
    if ((uint)param_3 < *(uint *)(param_1 + 0x58)) {
      uVar7 = *(ulonglong *)(lVar3 + uVar10 * 8);
      uVar7 = (uVar7 >> 0x21 ^ uVar7) * -0xae502812aa7333;
      lVar8 = (uVar7 >> 0x21 ^ uVar7) * -0x3b314601e57a13ad;
      uVar7 = (ulonglong)
              (((uint)((ulonglong)lVar8 >> 0x21) ^ (uint)lVar8) & *(uint *)(param_1 + 0x54) & 0xffff
              );
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x60) + uVar7 * 4);
      if (uVar6 == uVar11) {
        puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + uVar7 * 4);
        lVar8 = *(longlong *)(param_1 + 0x68);
      }
      else {
        do {
          if (uVar6 == 0xffffffff) goto LAB_145731db5;
          lVar8 = *(longlong *)(param_1 + 0x68);
          uVar7 = (ulonglong)uVar6;
          uVar6 = *(uint *)(lVar8 + uVar7 * 4);
        } while (uVar6 != uVar11);
        puVar9 = (undefined4 *)(lVar8 + uVar7 * 4);
      }
      *puVar9 = *(undefined4 *)(lVar8 + uVar10 * 4);
    }
LAB_145731db5:
    if (uVar11 < *(uint *)(param_1 + 0x78)) {
      uVar6 = *(uint *)(lVar3 + uVar10 * 8);
      uVar6 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar7 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & *(uint *)(param_1 + 0x74));
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x80) + uVar7 * 4);
      if (uVar6 == uVar11) {
        puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + uVar7 * 4);
        lVar8 = *(longlong *)(param_1 + 0x88);
      }
      else {
        do {
          if (uVar6 == 0xffffffff) goto LAB_145731e19;
          lVar8 = *(longlong *)(param_1 + 0x88);
          uVar7 = (ulonglong)uVar6;
          uVar6 = *(uint *)(lVar8 + uVar7 * 4);
        } while (uVar6 != uVar11);
        puVar9 = (undefined4 *)(lVar8 + uVar7 * 4);
      }
      *puVar9 = *(undefined4 *)(lVar8 + uVar10 * 4);
    }
LAB_145731e19:
    *(undefined8 *)(lVar3 + uVar10 * 8) = 0;
  }
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 4 + uVar10 * 0xc);
  while (uVar5 = uVar6 & 0xffffff, uVar5 != uVar11) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar4 = (ulonglong)uVar5 * 0xc;
    uVar2 = *(uint *)(lVar3 + lVar4);
    lVar8 = *(longlong *)(param_2 + 0x10 + (ulonglong)(uVar2 >> 0x1c) * 8);
    uVar6 = *(uint *)(lVar3 + 4 + lVar4);
    FUN_14576bcc8(lVar8 + (ulonglong)*(byte *)(lVar3 + 0xb + lVar4) * 0xa8 + 0xc0,param_2,lVar8,
                  uVar2 >> 0x18 & 0xffffff0f,uVar2 & 0xffffff,param_4);
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
    *(undefined4 *)(lVar3 + lVar4) = 0xffffffff;
    pbVar1 = (byte *)(lVar3 + 7 + lVar4);
    *pbVar1 = *pbVar1 | 0xf;
    *(undefined1 *)(lVar3 + 0xb + lVar4) = 0xff;
    uVar2 = *(uint *)(param_1 + 0xb0);
    lVar8 = (longlong)(int)uVar2;
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar7 = (ulonglong)*(uint *)(lVar3 + 8 + lVar4) & 0xffffff;
    *(uint *)(lVar3 + 4 + uVar7 * 0xc) =
         (uint)*(byte *)(lVar3 + 7 + uVar7 * 0xc) << 0x18 | *(uint *)(lVar3 + 4 + lVar4) & 0xffffff;
    uVar10 = (ulonglong)*(uint *)(lVar3 + 4 + lVar4) & 0xffffff;
    *(uint *)(*(longlong *)(param_1 + 0xa0) + 8 + uVar10 * 0xc) =
         (uint)*(byte *)(*(longlong *)(param_1 + 0xa0) + 0xb + uVar10 * 0xc) << 0x18 | (uint)uVar7;
    *(uint *)(lVar3 + 8 + lVar4) = (uint)*(byte *)(lVar3 + 0xb + lVar4) << 0x18 | uVar5;
    *(uint *)(lVar3 + 4 + lVar4) = (uint)*(byte *)(lVar3 + 7 + lVar4) << 0x18 | uVar5;
    lVar3 = *(longlong *)(param_1 + 0xa0);
    *(uint *)(lVar3 + 4 + lVar4) = uVar2 & 0xffffff | (uint)*(byte *)(lVar3 + 7 + lVar4) << 0x18;
    *(uint *)(lVar3 + 8 + lVar4) =
         (uint)*(byte *)(lVar3 + 0xb + lVar4) << 0x18 |
         *(uint *)(lVar3 + 8 + lVar8 * 0xc) & 0xffffff;
    uVar10 = (ulonglong)*(uint *)(lVar3 + 8 + lVar8 * 0xc) & 0xffffff;
    *(uint *)(*(longlong *)(param_1 + 0xa0) + 4 + uVar10 * 0xc) =
         (uint)*(byte *)(*(longlong *)(param_1 + 0xa0) + 7 + uVar10 * 0xc) << 0x18 | uVar5;
    *(uint *)(lVar3 + 8 + lVar8 * 0xc) = (uint)*(byte *)(lVar3 + 0xb + lVar8 * 0xc) << 0x18 | uVar5;
  }
  return;
}



// FUNCTION 145731ff4 FUN_145731ff4 body=91 status=ok
// SIG undefined FUN_145731ff4(void)

undefined8 * FUN_145731ff4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * -0x55555555;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145732088(param_1,iVar2,0);
    FUN_14573204f(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 14573204f FUN_14573204f body=57 status=ok
// SIG undefined FUN_14573204f(void)

void FUN_14573204f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
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
  }
  return;
}



// FUNCTION 145732088 FUN_145732088 body=115 status=ok
// SIG undefined FUN_145732088(void)

void FUN_145732088(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457320fc FUN_1457320fc body=122 status=ok
// SIG undefined FUN_1457320fc(void)

undefined4 * FUN_1457320fc(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  plVar2 = *(longlong **)(param_2 + 2);
  *(longlong **)(param_1 + 2) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[4] = param_2[4];
  param_1[6] = param_2[6];
  cVar1 = *(char *)(param_2 + 0xb);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = param_2[8];
    uVar4 = param_2[9];
    uVar5 = param_2[10];
    param_1[7] = param_2[7];
    param_1[8] = uVar3;
    param_1[9] = uVar4;
    param_1[10] = uVar5;
  }
  FUN_140665542(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x12);
  uVar7 = *(undefined8 *)(param_2 + 0x14);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(undefined8 *)(param_1 + 0x12) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar7;
  return param_1;
}



// FUNCTION 145732176 FUN_145732176 body=45 status=ok
// SIG undefined FUN_145732176(void)

void FUN_145732176(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1406656ca();
  if (*(int *)(param_1 + 0x80) < 2) {
    uVar1 = FUN_14573271e(param_1);
  }
  FUN_145732526(param_1,uVar1);
  return;
}



// FUNCTION 1457321a4 FUN_1457321a4 body=162 status=ok
// SIG undefined FUN_1457321a4(void)

void FUN_1457321a4(longlong *param_1,undefined8 param_2)

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
        goto LAB_145732231;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145732231:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145732246 FUN_145732246 body=62 status=ok
// SIG undefined FUN_145732246(void)

void FUN_145732246(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145732284(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x78,8);
  }
  return;
}



// FUNCTION 145732284 FUN_145732284 body=103 status=ok
// SIG undefined FUN_145732284(void)

ulonglong FUN_145732284(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x78) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x78,8);
      uVar1 = uVar1 / 0x78;
    }
  }
  return uVar1;
}



// FUNCTION 1457322ec FUN_1457322ec body=118 status=ok
// SIG undefined FUN_1457322ec(void)

void FUN_1457322ec(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x78;
  _Dst = (void *)(lVar1 + lVar3);
  *(undefined8 *)(lVar1 + 0x38 + lVar3) = 0;
  *(undefined8 *)(lVar1 + 0x40 + lVar3) = 0xffffffffffffffff;
  if (*(char *)(lVar1 + 0x34 + lVar3) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x34) = 0;
  }
  if (*(longlong **)((longlong)_Dst + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)_Dst + 0x10) + 0x10))();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~param_2 + iVar2) * 0x78);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145732362 FUN_145732362 body=191 status=ok
// SIG undefined FUN_145732362(void)

int FUN_145732362(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_145732490(param_1,iVar2);
  }
  lVar4 = (longlong)param_3 * 0x88;
  memmove((void *)(*param_1 + lVar4 + 0x88),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar2 - param_3) * 0x88);
  lVar3 = *param_1;
  FUN_145732422(lVar3 + lVar4,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  puVar1 = (undefined8 *)(lVar3 + 0x68 + lVar4);
  *puVar1 = *(undefined8 *)(param_2 + 0x68);
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar3 + 0x78 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x78 + lVar4) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(lVar3 + 0x80 + lVar4) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(lVar3 + 0x84 + lVar4) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  return param_3;
}



// FUNCTION 145732422 FUN_145732422 body=110 status=ok
// SIG undefined FUN_145732422(void)

undefined4 * FUN_145732422(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  FUN_14023423e(param_1 + 2,param_2 + 2);
  param_1[6] = param_2[6];
  cVar1 = *(char *)(param_2 + 0xb);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    param_1[7] = param_2[7];
    param_1[8] = uVar2;
    param_1[9] = uVar3;
    param_1[10] = uVar4;
  }
  FUN_140665542(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x12);
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  return param_1;
}



// FUNCTION 145732490 FUN_145732490 body=150 status=ok
// SIG undefined FUN_145732490(void)

void FUN_145732490(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145732526 FUN_145732526 body=503 status=ok
// SIG undefined FUN_145732526(void)

void FUN_145732526(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_8c;
  longlong local_88;
  
  if (0 < param_2) {
    iVar6 = *(int *)(param_1 + 0x80);
    if ((longlong)iVar6 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x78);
      fVar11 = *(float *)(lVar5 + 0x10 + (longlong)(iVar6 + -1) * 0x18);
      fVar10 = *(float *)(param_1 + 0x18);
      if (*(float *)(param_1 + 0x18) <= fVar11) {
        fVar10 = fVar11;
      }
      if (iVar6 < 1) {
        lVar9 = lVar5 + (longlong)iVar6 * 0x18;
        lVar7 = 0;
        iVar6 = 0;
      }
      else {
        lVar5 = 0;
        lVar9 = 0;
        iVar6 = 0;
        do {
          lVar8 = *(longlong *)(param_1 + 0x78);
          lVar7 = lVar8 + lVar5;
          lVar2 = FUN_1447a1f4a(lVar7);
          iVar4 = 0;
          if (*(int *)(lVar2 + 8) != 0) {
            iVar4 = *(int *)(lVar2 + 8) + -1;
          }
          iVar6 = iVar6 + iVar4;
          iVar4 = *(int *)(param_1 + 0x80);
          if (0.0 < *(float *)(lVar8 + 0x10 + lVar5)) goto LAB_1457325ce;
          lVar9 = lVar9 + 1;
          lVar5 = lVar5 + 0x18;
        } while (lVar9 < iVar4);
        lVar7 = 0;
LAB_1457325ce:
        if (iVar4 == 0) {
          return;
        }
        lVar5 = *(longlong *)(param_1 + 0x78);
        lVar9 = lVar5 + (longlong)iVar4 * 0x18;
      }
      iVar4 = 1;
      lVar8 = 0x18;
      fVar11 = 0.0;
      do {
        if ((lVar7 == lVar5) &&
           (lVar7 = 0, local_8c = iVar4, local_88 = lVar8, iVar4 < *(int *)(param_1 + 0x80))) {
          do {
            lVar2 = *(longlong *)(param_1 + 0x78);
            lVar7 = lVar2 + local_88;
            lVar3 = FUN_1447a1f4a(lVar7);
            iVar1 = 0;
            if (*(int *)(lVar3 + 8) != 0) {
              iVar1 = *(int *)(lVar3 + 8) + -1;
            }
            iVar6 = iVar6 + iVar1;
            if (0.0 < *(float *)(lVar2 + 0x10 + local_88)) break;
            local_8c = local_8c + 1;
            lVar7 = 0;
            local_88 = local_88 + 0x18;
          } while (local_8c < *(int *)(param_1 + 0x80));
        }
        fVar12 = *(float *)(lVar5 + 0x10);
        if (fVar12 <= 0.0) {
          lVar2 = FUN_1447a1f4a(lVar5);
          iVar1 = *(int *)(lVar2 + 8) + -1;
          if (*(int *)(lVar2 + 8) == 0) {
            iVar1 = 0;
          }
          fVar12 = fVar10;
          if (lVar7 != 0) {
            fVar12 = *(float *)(lVar7 + 0x10);
          }
          fVar12 = fVar11 + ((float)iVar1 / (float)iVar6) * fVar12;
          *(float *)(lVar5 + 0x10) = fVar12;
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x18;
        lVar8 = lVar8 + 0x18;
        fVar11 = fVar12;
      } while (lVar5 != lVar9);
    }
  }
  return;
}



// FUNCTION 14573271e FUN_14573271e body=629 status=ok
// SIG undefined FUN_14573271e(void)

int FUN_14573271e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) == 0) {
    lVar9 = param_1 + 8;
  }
  else {
    lVar9 = *plVar1;
  }
  puVar6 = (undefined8 *)FUN_1447a1f4a(lVar9);
  local_58 = (void *)0x0;
  local_50 = *(int *)(puVar6 + 1);
  lVar9 = (longlong)local_50;
  _Src = (void *)*puVar6;
  if (lVar9 == 0) {
    local_4c = 0;
    iVar5 = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar9 * 2);
    iVar4 = local_50;
    iVar5 = 0;
    if (1 < local_50) {
      iVar3 = local_50 + -1;
      lVar9 = FUN_140316ff8();
      fVar11 = (float)iVar3 / (float)*(int *)(lVar9 + 0x6c0);
      iVar8 = (int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1;
      iVar7 = -iVar8;
      FUN_145732994(plVar1,iVar7);
      lVar9 = (longlong)iVar7;
      iVar5 = iVar3;
      if (iVar8 < 0) {
        iVar8 = 0;
        uVar10 = (longlong)iVar3 / lVar9 & 0xffffffff;
        local_74 = iVar3;
        local_70 = plVar1;
        do {
          iVar5 = iVar4 + -2;
          if (iVar7 == 1) {
LAB_1457328c4:
            if (iVar5 < 0) {
              iVar5 = *(int *)(param_1 + 0x80);
              *(uint *)(param_1 + 0x80) = iVar5 + 1U;
              if (*(uint *)(param_1 + 0x84) < iVar5 + 1U) {
                FUN_140edeb3e(local_70,iVar5);
              }
              lVar9 = *local_70 + (longlong)iVar5 * 0x18;
              FUN_140009b9a(lVar9,&local_58);
              *(undefined4 *)(lVar9 + 0x10) = 0;
              iVar5 = local_74;
              break;
            }
          }
          else {
            iVar5 = FUN_1457329d1(&local_58,uVar10);
            if (iVar5 < 0) {
              iVar5 = FUN_14899ff32(&local_58,uVar10);
              goto LAB_1457328c4;
            }
          }
          FUN_144a63a7c(&local_58,local_68,iVar8,(iVar5 - iVar8) + 1);
          iVar8 = *(int *)(param_1 + 0x80);
          *(uint *)(param_1 + 0x80) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x84) < iVar8 + 1U) {
            FUN_140edeb3e(local_70,iVar8);
          }
          lVar2 = *local_70 + (longlong)iVar8 * 0x18;
          FUN_140009b9a(lVar2,local_68);
          *(undefined4 *)(lVar2 + 0x10) = 0;
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          iVar8 = iVar5 + 1;
          uVar10 = (ulonglong)(uint)((int)uVar10 + (int)((longlong)iVar3 / lVar9));
          iVar7 = iVar7 + -1;
          iVar5 = local_74;
        } while (iVar7 != 0);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 145732994 FUN_145732994 body=61 status=ok
// SIG undefined FUN_145732994(void)

void FUN_145732994(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1406655c0(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1489a4c22(param_1);
  return;
}



// FUNCTION 1457329d1 FUN_1457329d1 body=203 status=ok
// SIG undefined FUN_1457329d1(void)

ulonglong FUN_1457329d1(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = (ulonglong)((int)param_1[1] - 1);
  if ((int)param_1[1] == 0) {
    uVar6 = 0;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < (int)uVar6)) {
    uVar6 = (ulonglong)param_2;
    cVar2 = FUN_1406655ec(*(undefined2 *)(*param_1 + uVar6 * 2));
    if (cVar2 == '\0') {
      uVar1 = uVar6;
      do {
        uVar7 = uVar1;
        iVar4 = (int)param_1[1] + -1;
        if ((int)param_1[1] == 0) {
          iVar4 = 0;
        }
        if (iVar4 <= (int)uVar7 + 1) goto LAB_145732a4c;
        cVar2 = FUN_1406655ec(*(undefined2 *)(*param_1 + 2 + uVar7 * 2));
        uVar1 = uVar7 + 1;
      } while (cVar2 == '\0');
      iVar4 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        iVar4 = 0;
      }
LAB_145732a4c:
      uVar3 = (int)uVar7 + 1;
      uVar7 = uVar7 & 0xffffffff;
      if ((int)uVar3 < iVar4) {
        uVar7 = (ulonglong)uVar3;
      }
      do {
        iVar4 = (int)uVar6;
        if (iVar4 < 1) break;
        uVar6 = uVar6 - 1;
        cVar2 = FUN_1406655ec();
      } while (cVar2 == '\0');
      uVar5 = iVar4 - 1;
      uVar3 = 0;
      if (0 < (int)uVar5) {
        uVar3 = uVar5;
      }
      uVar6 = (ulonglong)uVar5;
      if ((int)((int)uVar7 - param_2) <= (int)(param_2 - uVar3)) {
        uVar6 = uVar7;
      }
    }
    else {
      uVar6 = (ulonglong)param_2;
    }
  }
  return uVar6;
}



// FUNCTION 145732a9c FUN_145732a9c body=132 status=ok
// SIG undefined FUN_145732a9c(void)

void FUN_145732a9c(longlong param_1,int param_2)

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



// FUNCTION 145732b22 FUN_145732b22 body=460 status=ok
// SIG undefined FUN_145732b22(void)

void FUN_145732b22(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 145732cf0 FUN_145732cf0 body=120 status=ok
// SIG undefined FUN_145732cf0(void)

void FUN_145732cf0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar4 = 8;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_145732d68(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145732d68 FUN_145732d68 body=133 status=ok
// SIG undefined FUN_145732d68(void)

void FUN_145732d68(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 145732dee FUN_145732dee body=70 status=ok
// SIG undefined FUN_145732dee(void)

undefined8 * FUN_145732dee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6024d0;
  FUN_140670012(param_1 + 0x1d);
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 145732e34 FUN_145732e34 body=370 status=ok
// SIG undefined FUN_145732e34(void)

void FUN_145732e34(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = param_1 + 0xc10;
  cVar3 = FUN_144729dda(lVar5);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(lVar5);
    FUN_140457ffc(lVar4 + 0x5fd0,param_1);
    lVar5 = FUN_14479d2ce(lVar5);
    FUN_140457ffc(lVar5 + 0x7790,param_1);
  }
  if (((*(longlong *)(param_1 + 0xc38) != 0) && (*(longlong *)(param_1 + 0xc40) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0xc40) + 8))) {
    FUN_1401cb356();
    local_30 = *(undefined8 *)(param_1 + 0xc38);
    local_28 = *(longlong *)(param_1 + 0xc40);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = *(longlong **)(param_1 + 0xc40);
    *(undefined8 *)(param_1 + 0xc38) = 0;
    *(undefined8 *)(param_1 + 0xc40) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  cVar3 = FUN_144729dda(param_1 + 0xc28);
  if (cVar3 != '\0') {
    uVar6 = FUN_14479d2ce(param_1 + 0xc28);
    FUN_140aeefbc(uVar6,0,1);
  }
  cVar3 = FUN_144729dda(param_1 + 0xc00);
  if (cVar3 != '\0') {
    *(undefined8 *)(param_1 + 0xc00) = 0;
  }
  if (*(longlong *)(param_1 + 3000) != 0) {
    FUN_140bcbe96();
  }
  FUN_145732fa8(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145732fa8 FUN_145732fa8 body=188 status=ok
// SIG undefined FUN_145732fa8(void)

void FUN_145732fa8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  thunk_FUN_140633cb6(param_1 + 0x450);
  FUN_1406716fe(param_1 + 0x9e0);
  FUN_1406335ea(param_1 + 0x960,param_2);
  FUN_140872868(param_1 + 0x640);
  FUN_14078a7c0(param_1 + 0x5d0);
  FUN_140457ffc(param_1 + 0xad0,param_1);
  if (*(longlong *)(param_1 + 0xba8) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0xba8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xbb0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xbb0) = 0;
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
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 145733064 FUN_145733064 body=67 status=ok
// SIG undefined FUN_145733064(void)

undefined8 FUN_145733064(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x4e8))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x570))(param_1);
    if ((iVar2 == 0) && ((*(byte *)((longlong)param_1 + 0x2de) & 4) == 0)) {
      return 0;
    }
  }
  uVar3 = FUN_1406751e8(param_1);
  return uVar3;
}



// FUNCTION 1457330a8 FUN_1457330a8 body=100 status=ok
// SIG undefined FUN_1457330a8(void)

undefined8 FUN_1457330a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1405b657a();
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
  return uVar6;
}



// FUNCTION 14573310c FUN_14573310c body=93 status=ok
// SIG undefined FUN_14573310c(void)

void FUN_14573310c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 145733170 FUN_145733170 body=57 status=ok
// SIG undefined FUN_145733170(void)

void FUN_145733170(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d328 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d328 = FUN_140002ddd(FUN_1464dab9d,uVar1,L"GbxDiscoveryRegionMapDef");
  }
  return;
}



// FUNCTION 1457331aa FUN_1457331aa body=499 status=ok
// SIG undefined FUN_1457331aa(void)

void FUN_1457331aa(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xb8);
  if (lVar5 == 0) {
    uVar4 = FUN_141030812();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xb8) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0xc0) = lVar5;
        if (lVar5 != 0) {
          lVar5 = *(longlong *)(param_1 + 0xb8);
          goto LAB_1457331d7;
        }
      }
    }
    lVar6 = FUN_14073fae1();
    lVar5 = *(longlong *)(lVar6 + 0x188);
    if (lVar5 == 0) {
      uVar4 = FUN_141030812();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x188) = lVar5;
    }
    if (*(longlong *)(lVar6 + 400) != 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(lVar6 + 0x180) != 0) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x180));
      }
      *(undefined8 *)(lVar6 + 400) = uVar4;
      return;
    }
    return;
  }
LAB_1457331d7:
  if (lVar5 != 0) {
    return;
  }
  uVar4 = FUN_141030812();
  lVar5 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0xb8) = lVar5;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*plVar1 != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      uVar4 = FUN_144aff482(uVar4,plVar1);
    }
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    return;
  }
  return;
}



// FUNCTION 14573339e FUN_14573339e body=81 status=ok
// SIG undefined FUN_14573339e(void)

void FUN_14573339e(undefined8 param_1,char param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_4 + 8) = 0;
    if (*(int *)(param_4 + 0xc) < 0) {
      FUN_14482f6fa(param_4,0);
      return;
    }
  }
  else {
    FUN_14067fad9(param_3,param_4,param_5,param_6,param_1,param_7);
  }
  return;
}



// FUNCTION 1457333f0 FUN_1457333f0 body=85 status=ok
// SIG undefined FUN_1457333f0(void)

void FUN_1457333f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x14) < iVar1) {
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + lVar2 * 8) + 0x290) == '\0') {
          FUN_14067fdfe();
          iVar1 = *(int *)(param_1 + 0x10);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  FUN_14067fda6(param_1,param_2);
  return;
}



// FUNCTION 145733446 FUN_145733446 body=291 status=ok
// SIG undefined FUN_145733446(void)

undefined4 * FUN_145733446(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140689906(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a12b03();
  cVar3 = FUN_1406897ba(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14161ea86(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573356a FUN_14573356a body=89 status=ok
// SIG undefined FUN_14573356a(void)

void FUN_14573356a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145733648();
  return;
}



// FUNCTION 1457335c4 FUN_1457335c4 body=132 status=ok
// SIG undefined FUN_1457335c4(void)

void FUN_1457335c4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145733648 FUN_145733648 body=80 status=ok
// SIG undefined FUN_145733648(void)

void FUN_145733648(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14573371e(param_1,param_2);
  return;
}



// FUNCTION 145733698 FUN_145733698 body=132 status=ok
// SIG undefined FUN_145733698(void)

void FUN_145733698(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573371e FUN_14573371e body=116 status=ok
// SIG undefined FUN_14573371e(void)

void FUN_14573371e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 145733792 FUN_145733792 body=118 status=ok
// SIG undefined FUN_145733792(void)

void FUN_145733792(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14573380c FUN_14573380c body=138 status=ok
// SIG undefined FUN_14573380c(void)

code * FUN_14573380c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MegaLightsSupportedStartIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4f44;
}



// FUNCTION 145733896 FUN_145733896 body=138 status=ok
// SIG undefined FUN_145733896(void)

code * FUN_145733896(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightStaticShadowBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x210000002ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14573380c;
}



// FUNCTION 145733920 FUN_145733920 body=180 status=ok
// SIG undefined FUN_145733920(void)

int FUN_145733920(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x34);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1457339ae;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x2c + (longlong)iVar4 * 0x34);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1457339ae:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457339d6 FUN_1457339d6 body=122 status=ok
// SIG undefined FUN_1457339d6(void)

ulonglong FUN_1457339d6(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  param_2 = param_2 & 0xffffffff;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar2 = FUN_145733a51();
    FUN_1446ddc76(&local_38,param_1,1);
    cVar1 = FUN_1412446f0(local_38,uVar2,local_30);
    if (cVar1 != '\0') {
      param_2 = CONCAT71((int7)(param_2 >> 8),local_30[0]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145733a51 FUN_145733a51 body=57 status=ok
// SIG undefined FUN_145733a51(void)

void FUN_145733a51(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c188 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c188 = FUN_14171c317(FUN_146530452,uVar1,L"EMissionActionPreCompletedFilter");
  }
  return;
}



// FUNCTION 145733a8a FUN_145733a8a body=122 status=ok
// SIG undefined FUN_145733a8a(void)

ulonglong FUN_145733a8a(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  param_2 = param_2 & 0xffffffff;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar2 = FUN_145733b05();
    FUN_1446ddc76(&local_38,param_1,1);
    cVar1 = FUN_1412446f0(local_38,uVar2,local_30);
    if (cVar1 != '\0') {
      param_2 = CONCAT71((int7)(param_2 >> 8),local_30[0]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145733b05 FUN_145733b05 body=57 status=ok
// SIG undefined FUN_145733b05(void)

void FUN_145733b05(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c170 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c170 = FUN_14171c317(FUN_146530423,uVar1,L"EMissionActionOnLoadFilter");
  }
  return;
}



// FUNCTION 145733b3e FUN_145733b3e body=188 status=ok
// SIG undefined FUN_145733b3e(void)

undefined8 FUN_145733b3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
    FUN_140c80c84((longlong *)(param_1 + 8),iVar4);
  }
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar5 = FUN_14068d7bc();
  FUN_140005f6c(puVar3,uVar5,0,0);
  FUN_145733bfc(puVar3,&local_28);
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



// FUNCTION 145733bfc FUN_145733bfc body=83 status=ok
// SIG undefined FUN_145733bfc(void)

longlong * FUN_145733bfc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14068d7bc();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145733c50 FUN_145733c50 body=132 status=ok
// SIG undefined FUN_145733c50(void)

void FUN_145733c50(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145733cd6 FUN_145733cd6 body=482 status=ok
// SIG undefined FUN_145733cd6(void)

void FUN_145733cd6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 145733eba FUN_145733eba body=137 status=ok
// SIG undefined FUN_145733eba(void)

void FUN_145733eba(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xa28))(param_1,&local_38,0);
  lVar1 = local_38;
  if ((longlong)local_30 != 0) {
    lVar2 = 0;
    do {
      FUN_145733f44(param_1,*(undefined8 *)(lVar1 + lVar2));
      lVar2 = lVar2 + 8;
    } while ((longlong)local_30 * 8 != lVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145733f44 FUN_145733f44 body=232 status=ok
// SIG undefined FUN_145733f44(void)

void FUN_145733f44(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*param_1 + 0x570))();
  uVar2 = (ulonglong)uVar1;
  (**(code **)(*param_2 + 0x720))(param_2,uVar2);
  uVar2 = CONCAT71((int7)(uVar2 >> 8),*(undefined1 *)((longlong)param_1 + 1099)) &
          0xffffffffffffff20;
  (**(code **)(*param_2 + 0x718))(param_2,CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5));
  (**(code **)(*param_2 + 0x948))(param_2,param_1 + 0x8f);
  FUN_1406900ce(param_1,&local_28);
  (**(code **)(*param_2 + 0x728))(param_2,local_28,1);
  if (((*(byte *)((longlong)param_2 + 0x2d3) & 8) == 0) ==
      (bool)((*(byte *)((longlong)param_1 + 0x2d3) & 8) >> 3)) {
    *(byte *)((longlong)param_2 + 0x2d3) =
         *(byte *)((longlong)param_2 + 0x2d3) & 0xf7 | *(byte *)((longlong)param_1 + 0x2d3) & 8;
    (**(code **)(*param_2 + 0x958))(param_2);
  }
  (**(code **)(*param_2 + 0x968))(param_2,param_1[0xc4]);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14573402d FUN_14573402d body=200 status=ok
// SIG undefined FUN_14573402d(void)

undefined8 * FUN_14573402d(undefined8 *param_1)

{
  undefined1 auStack_118 [40];
  undefined1 local_f0 [208];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x89) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 6;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_14723c72e();
  *param_1 = 0;
  if (param_1[0x12] == 0) {
    FUN_144a1fecc(param_1,local_f0);
    param_1[0x12] = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457340f6 FUN_1457340f6 body=217 status=ok
// SIG undefined FUN_1457340f6(void)

longlong FUN_1457340f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [208];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_147243eb2();
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + 0x89);
  *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  lVar1 = *(longlong *)(param_2 + 0x90);
  *(longlong *)(param_1 + 0x90) = lVar1;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  if (lVar1 == 0) {
    FUN_144a1fecc(param_1,local_f0);
    *(undefined8 *)(param_1 + 0x90) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457341d0 FUN_1457341d0 body=1509 status=ok
// SIG undefined FUN_1457341d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1457341d0(undefined8 param_1,longlong param_2,int param_3,uint param_4,char param_5,byte param_6
             ,longlong *param_7,longlong *param_8)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  code *local_188;
  code *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined8 auStack_d0 [12];
  undefined4 auStack_70 [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar6 = *(uint *)(param_2 + 0x28);
  if (param_5 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_1447e4184(param_1,1,-1 < (short)uVar6);
    bVar2 = (param_6 ^ 1) & bVar2;
  }
  memset(local_d8,0,0x98);
  if ((param_4 & 9) == 8) {
    cVar1 = FUN_14006f626(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_3 * 2));
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_145734393;
    }
    if (bVar2 == 0) {
      FUN_14006f83a();
      puVar5 = &DAT_14ca4ecb8;
    }
    else {
      FUN_14006fb8e();
      puVar5 = &DAT_14ca4f158;
    }
  }
  else if ((param_4 & 1) == 0) {
    if ((param_4 & 0xb) == 0) {
      if (bVar2 == 0) {
        FUN_14006f956();
        puVar5 = &DAT_14ca4ea68;
      }
      else {
        FUN_14006fdc6();
        puVar5 = &DAT_14ca4ef08;
      }
    }
    else if (bVar2 == 0) {
      puVar5 = &DAT_14ca4eb90;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14ca4ec38) {
        FUN_144b3d300(&DAT_14ca4ec38);
        if (DAT_14ca4ec38 == -1) {
          FUN_1456c065a();
          local_160 = &LAB_14712ac08;
          local_168 = &LAB_14712ac0c;
          local_170 = &LAB_1472ecd24;
          local_178 = FUN_14178096a;
          local_180 = FUN_1472ecd28;
          local_188 = FUN_1472ecd50;
          local_1a0 = L"Main";
          local_1a8 = L"/Engine/Private/ShadowDepthVertexShader.usf";
          local_150 = 0;
          local_158 = 0x118;
          local_190 = 1;
          local_198 = 0;
          puVar5 = &DAT_14ca4eb90;
          FUN_140db5666(&DAT_14ca4eb90,2,&DAT_14ca4eb28,
                        L"TShadowDepthVSVertexShadowDepth_OutputDepth");
          _DAT_14ca4eb90 = &PTR_FUN_14a1fb500;
          atexit((_func_5014 *)&LAB_143043041);
          puVar4 = &DAT_14ca4ec38;
          goto LAB_1457347a5;
        }
      }
    }
    else {
      FUN_14006fcaa();
      puVar5 = &DAT_14ca4f030;
    }
  }
  else if (bVar2 == 0) {
    puVar5 = &DAT_14ca4ede0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4ee88) {
      FUN_144b3d300(&DAT_14ca4ee88);
      if (DAT_14ca4ee88 == -1) {
        FUN_1456c0902();
        local_160 = &LAB_14712ac08;
        local_168 = &LAB_14712ac0c;
        local_170 = &LAB_1472ed098;
        local_178 = FUN_1407db42c;
        local_180 = FUN_1472ed09c;
        local_188 = FUN_1472ed0c4;
        local_1a0 = L"Main";
        local_1a8 = L"/Engine/Private/ShadowDepthVertexShader.usf";
        local_150 = 0;
        local_158 = 0x118;
        local_190 = 1;
        local_198 = 0;
        puVar5 = &DAT_14ca4ede0;
        FUN_140db5666(&DAT_14ca4ede0,2,&DAT_14ca4ed78,
                      L"TShadowDepthVSVertexShadowDepth_VirtualShadowMap");
        _DAT_14ca4ede0 = &PTR_FUN_14a1fb500;
        atexit((_func_5014 *)&LAB_143043059);
        puVar4 = &DAT_14ca4ee88;
LAB_1457347a5:
        _Init_thread_footer(puVar4);
      }
    }
  }
  else {
    FUN_14006f50a();
    puVar5 = &DAT_14ca4f280;
  }
  uVar6 = uVar6 & 0x8000;
  bVar2 = puVar5[0x48];
  auStack_d0[bVar2] = puVar5;
  auStack_70[bVar2] = 0;
  cVar1 = FUN_1447e4184(param_1,1,uVar6 == 0);
  if (((((param_4 & 0xb) == 0) || ((param_4 & 1) != 0)) || (uVar6 != 0)) || (cVar1 == '\0')) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 0xb) == 0) {
        FUN_14006f71e();
        puVar5 = &DAT_14ca4f4d0;
      }
      else if ((param_4 & 9) == 8) {
        FUN_14006fa72();
        puVar5 = &DAT_14ca4f5f8;
      }
      else {
        FUN_14006f3ee();
        puVar5 = &DAT_14ca4f3a8;
      }
    }
    else {
      puVar5 = &DAT_14ca4f720;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14ca4f7c8) {
        FUN_144b3d300(&DAT_14ca4f7c8);
        if (DAT_14ca4f7c8 == -1) {
          FUN_1456c14f0();
          local_160 = &LAB_14712ac08;
          local_168 = &LAB_14712ac0c;
          local_170 = &LAB_1472edafc;
          local_178 = FUN_14178163c;
          local_180 = FUN_1472edb00;
          local_188 = FUN_1472edb28;
          local_1a0 = L"Main";
          local_1a8 = L"/Engine/Private/ShadowDepthPixelShader.usf";
          local_150 = 0;
          local_158 = 0x108;
          local_190 = 1;
          local_198 = 3;
          puVar5 = &DAT_14ca4f720;
          FUN_140db5666(&DAT_14ca4f720,2,&DAT_14ca4f6b8,
                        L"TShadowDepthPSPixelShadowDepth_VirtualShadowMap");
          _DAT_14ca4f720 = &PTR_FUN_14a1fb500;
          atexit((_func_5014 *)&LAB_1430431cc);
          _Init_thread_footer(&DAT_14ca4f7c8);
        }
      }
    }
    bVar2 = puVar5[0x48];
    auStack_d0[bVar2] = puVar5;
    auStack_70[bVar2] = 0;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  uVar3 = FUN_14007744c(param_1,local_d8,param_2);
  if ((char)uVar3 != '\0') {
    if (local_138 != 0) {
      *param_7 = local_138;
      param_7[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_8 = lStack_120;
      param_8[1] = local_148;
    }
  }
LAB_145734393:
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457347b6 FUN_1457347b6 body=116 status=ok
// SIG undefined FUN_1457347b6(void)

void FUN_1457347b6(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x38);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar2) < uVar1) {
      FUN_14713b728(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)((longlong)iVar2 * 0x10 + lVar3),_Src,(longlong)(int)uVar1 << 4);
    *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14573482a FUN_14573482a body=634 status=ok
// SIG undefined FUN_14573482a(void)

undefined4 *
FUN_14573482a(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,
             undefined8 param_5,undefined1 *param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 0xe);
  uVar4 = uVar1 & param_3;
  plVar14 = param_1 + 0xb;
  plVar2 = (longlong *)param_1[0xc];
  plVar8 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar8 = plVar14;
  }
  plVar13 = param_1 + 8;
  do {
    lVar11 = (longlong)(int)uVar4;
    local_80 = param_4;
    if (*(uint *)((longlong)plVar8 + lVar11 * 4) == param_3) {
      plVar12 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      if (*param_4 ==
          *(longlong *)(*param_1 + (longlong)*(int *)((longlong)plVar12 + lVar11 * 4) * 0x10)) {
        *param_6 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar13 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar13 + lVar11 * 4);
        goto LAB_145734913;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5) <
      (ulonglong)(uVar1 * 3)) {
LAB_1457348d2:
    uVar5 = FUN_14713bb86(param_1,local_80,param_5,param_3);
    FUN_14713ba94(param_1,uVar5,param_3);
    *param_6 = 0;
LAB_145734913:
    *param_2 = uVar5;
    if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  puVar3 = (undefined4 *)param_1[9];
  if (puVar3 == (undefined4 *)0x0) {
    local_60[0] = (undefined4)*plVar13;
  }
  param_1[9] = 0;
  local_50 = (undefined4)param_1[10];
  local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
  param_1[10] = 0x100000000;
  if (plVar2 == (longlong *)0x0) {
    local_78[0] = (undefined4)*plVar14;
  }
  param_1[0xc] = 0;
  local_68 = (undefined4)param_1[0xd];
  local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
  param_1[0xd] = 0x100000000;
  iVar7 = uVar1 * 2 + 1;
  *(int *)(param_1 + 0xe) = iVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  uVar4 = uVar1 * 2 + 2;
  local_70 = plVar2;
  local_58 = puVar3;
  if (-1 < (int)uVar4) {
    if (uVar1 * 2 < 0x7ffffffe) {
      FUN_14475fe8c(plVar13);
      iVar7 = (int)param_1[0xe];
      iVar6 = (int)param_1[10];
      iVar10 = *(int *)((longlong)param_1 + 0x54);
    }
    else {
      iVar6 = 0;
      iVar10 = 1;
    }
    uVar4 = iVar7 + 1;
    *(int *)(param_1 + 10) = iVar7 + iVar6 + 1;
    if ((uint)(iVar10 - iVar6) < uVar4) {
      FUN_146f3c7b6(plVar13,iVar6);
      uVar4 = (int)param_1[0xe] + 1;
    }
    if (-1 < (int)uVar4) {
      if (*(int *)((longlong)param_1 + 0x6c) < (int)uVar4) {
        FUN_14476002c(plVar14);
        uVar4 = (int)param_1[0xe] + 1;
      }
      FUN_144a7a6da(plVar14,uVar4);
      plVar14 = (longlong *)local_78;
      if (plVar2 != (longlong *)0x0) {
        plVar14 = plVar2;
      }
      puVar9 = local_60;
      if (puVar3 != (undefined4 *)0x0) {
        puVar9 = puVar3;
      }
      uVar4 = 0;
      local_88 = puVar3;
      do {
        if (!SBORROW4(0,*(int *)((longlong)plVar14 + (longlong)(int)uVar4 * 4))) {
          FUN_14713ba94(param_1,puVar9[(int)uVar4]);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar1);
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      if (local_88 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1457348d2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 145734aa6 FUN_145734aa6 body=262 status=ok
// SIG undefined FUN_145734aa6(void)

undefined4 * FUN_145734aa6(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0x300000000;
  bVar7 = *param_1 != 0;
  if (bVar7) {
    param_2[0xe] = 1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 4);
    lVar4 = param_1[1];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    *param_2 = (int)*param_1;
    param_2[1] = uVar2;
    param_2[2] = (int)lVar4;
    param_2[3] = uVar3;
  }
  uVar6 = (uint)bVar7;
  if (param_1[2] != 0) {
    uVar6 = uVar6 + 1;
    param_2[0xe] = uVar6;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
    lVar4 = param_1[3];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
    puVar5 = param_2 + (ulonglong)bVar7 * 4;
    *puVar5 = (int)param_1[2];
    puVar5[1] = uVar2;
    puVar5[2] = (int)lVar4;
    puVar5[3] = uVar3;
  }
  if (param_1[4] != 0) {
    param_2[0xe] = uVar6 + 1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x24);
    lVar4 = param_1[5];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
    puVar5 = (undefined4 *)((longlong)param_2 + (ulonglong)(uVar6 << 4));
    *puVar5 = (int)param_1[4];
    puVar5[1] = uVar2;
    puVar5[2] = (int)lVar4;
    puVar5[3] = uVar3;
  }
  if (param_1[6] != 0) {
    iVar1 = param_2[0xe];
    param_2[0xe] = iVar1 + 1U;
    if ((uint)param_2[0xf] < iVar1 + 1U) {
      FUN_14713b728(param_2,iVar1);
    }
    puVar5 = *(undefined4 **)(param_2 + 0xc);
    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
      puVar5 = param_2;
    }
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x34);
    lVar4 = param_1[7];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x3c);
    puVar5 = puVar5 + (longlong)iVar1 * 4;
    *puVar5 = (int)param_1[6];
    puVar5[1] = uVar2;
    puVar5[2] = (int)lVar4;
    puVar5[3] = uVar3;
  }
  if (param_1[10] != 0) {
    iVar1 = param_2[0xe];
    param_2[0xe] = iVar1 + 1U;
    if ((uint)param_2[0xf] < iVar1 + 1U) {
      FUN_14713b728(param_2,iVar1);
    }
    puVar5 = *(undefined4 **)(param_2 + 0xc);
    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
      puVar5 = param_2;
    }
    lVar4 = param_1[0xb];
    *(longlong *)(puVar5 + (longlong)iVar1 * 4) = param_1[10];
    *(longlong *)((longlong)(puVar5 + (longlong)iVar1 * 4) + 8) = lVar4;
  }
  return param_2;
}



// FUNCTION 145734bb4 FUN_145734bb4 body=424 status=ok
// SIG undefined FUN_145734bb4(void)

undefined8 * FUN_145734bb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b0f74d0;
  param_1[3] = 0x41c80000425c0000;
  param_1[4] = 0x3f800000447a0000;
  *(undefined4 *)(param_1 + 5) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xc1a00000;
  *(undefined4 *)(param_1 + 6) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f3504f7;
  param_1[7] = 0x4974240041a00000;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3c23d70a;
  *(undefined2 *)(param_1 + 9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  FUN_144928b90(param_1 + 10);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((longlong)param_1 + 0x92) = 1;
  FUN_144928b90(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_140691b02(param_1 + 0x1c);
  FUN_140691b02(param_1 + 0x29);
  FUN_140691b02(param_1 + 0x36);
  FUN_140691b02(param_1 + 0x43);
  FUN_140691b02(param_1 + 0x50);
  FUN_140691b02(param_1 + 0x5d);
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3e800000;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  memset(param_1 + 0x81,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return param_1;
}



// FUNCTION 145734d5c FUN_145734d5c body=1440 status=ok
// SIG undefined FUN_145734d5c(void)

/* WARNING: Removing unreachable block (ram,0x000145735280) */

void FUN_145734d5c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x58);
  local_98 = FUN_144a7cacc();
  cVar7 = FUN_14573547a(plVar1);
  if (cVar7 != '\0') goto LAB_145734e7e;
  lVar8 = FUN_144a7cacc();
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = (void *)0x0;
  local_78 = 0;
  if (lVar8 == 0) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
  }
  else {
    FUN_1400bbfae(&local_68,lVar8);
    uStack_90 = CONCAT44(uStack_64,local_68);
    local_88 = CONCAT44(uStack_5c,uStack_60);
    if (uStack_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    uStack_80 = (void *)CONCAT44(uStack_54,local_58);
    local_78 = CONCAT44(uStack_4c,uStack_50);
    cVar7 = (*(code *)PTR_FUN_14c758760)();
    if (cVar7 != '\0') {
      uVar5 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
        local_98 = 0;
        goto LAB_145734e1b;
      }
    }
    FUN_14485c47a(&local_98,lVar8);
  }
LAB_145734e1b:
  iVar4 = *(int *)(param_1 + 0x60);
  lVar8 = (longlong)iVar4;
  *(uint *)(param_1 + 0x60) = iVar4 + 1U;
  if (*(uint *)(param_1 + 100) < iVar4 + 1U) {
    FUN_1457353e6(plVar1,iVar4);
  }
  lVar9 = *plVar1;
  *(undefined8 *)(lVar9 + lVar8 * 0x28) = local_98;
  puVar3 = (undefined4 *)(lVar9 + 8 + lVar8 * 0x28);
  *puVar3 = (undefined4)uStack_90;
  puVar3[1] = uStack_90._4_4_;
  puVar3[2] = (undefined4)local_88;
  puVar3[3] = local_88._4_4_;
  *(void **)(lVar9 + 0x18 + lVar8 * 0x28) = uStack_80;
  uStack_80 = (void *)0x0;
  *(undefined4 *)(lVar9 + 0x20 + lVar8 * 0x28) = (undefined4)local_78;
  *(undefined4 *)(lVar9 + 0x24 + lVar8 * 0x28) = local_78._4_4_;
LAB_145734e7e:
  plVar1 = (longlong *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_147f5bbcc(plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_147f5bbcc(plVar2,0);
  }
  local_a0 = (longlong *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_147f5bbcc(local_a0,0);
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x48);
    puVar10 = puVar11 + (longlong)*(int *)(param_1 + 0x50) * 5;
    do {
      local_98 = *puVar11;
      uStack_90 = puVar11[1];
      local_88 = puVar11[2];
      uStack_80 = (void *)0x0;
      uVar5 = *(uint *)(puVar11 + 4);
      pvVar6 = (void *)puVar11[3];
      local_78 = CONCAT44(local_78._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        local_78 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&uStack_80,uVar5,0);
        memcpy(uStack_80,pvVar6,(longlong)(int)uVar5 * 2);
      }
      lVar8 = FUN_1457352fe(&local_98);
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      iVar4 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar4 + 1U) {
        FUN_145735362(plVar1,iVar4);
      }
      *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar8;
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      if (uStack_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar11 = puVar11 + 5;
    } while (puVar11 != puVar10);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x58);
    puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x60) * 5;
    do {
      local_98 = *puVar10;
      uStack_90 = puVar10[1];
      local_88 = puVar10[2];
      uStack_80 = (void *)0x0;
      uVar5 = *(uint *)(puVar10 + 4);
      pvVar6 = (void *)puVar10[3];
      local_78 = CONCAT44(local_78._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        local_78 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&uStack_80,uVar5,0);
        memcpy(uStack_80,pvVar6,(longlong)(int)uVar5 * 2);
      }
      lVar8 = FUN_1457352fe(&local_98);
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      iVar4 = *(int *)(param_1 + 200);
      *(uint *)(param_1 + 200) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar4 + 1U) {
        FUN_145735362(plVar2,iVar4);
      }
      *(longlong *)(*plVar2 + (longlong)iVar4 * 8) = lVar8;
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      if (uStack_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = puVar10 + 5;
    } while (puVar10 != puVar11);
  }
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x70) * 5;
    do {
      local_98 = *puVar10;
      uStack_90 = puVar10[1];
      local_88 = puVar10[2];
      uStack_80 = (void *)0x0;
      uVar5 = *(uint *)(puVar10 + 4);
      pvVar6 = (void *)puVar10[3];
      local_78 = CONCAT44(local_78._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        local_78 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&uStack_80,uVar5,0);
        memcpy(uStack_80,pvVar6,(longlong)(int)uVar5 * 2);
      }
      lVar8 = FUN_1488e75e0(&local_98);
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      iVar4 = *(int *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0xd8) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xdc) < iVar4 + 1U) {
        FUN_145735362(local_a0,iVar4);
      }
      *(longlong *)(*local_a0 + (longlong)iVar4 * 8) = lVar8;
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      if (uStack_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = puVar10 + 5;
    } while (puVar10 != puVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457352fe FUN_1457352fe body=100 status=ok
// SIG undefined FUN_1457352fe(void)

longlong FUN_1457352fe(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_144a6c4d8(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145735362 FUN_145735362 body=132 status=ok
// SIG undefined FUN_145735362(void)

void FUN_145735362(longlong param_1,int param_2)

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



// FUNCTION 1457353e6 FUN_1457353e6 body=147 status=ok
// SIG undefined FUN_1457353e6(void)

void FUN_1457353e6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14573547a FUN_14573547a body=404 status=ok
// SIG undefined FUN_14573547a(void)

undefined4 FUN_14573547a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_1[1] == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = (longlong)(int)param_1[1] * 0x28;
    lVar6 = *param_1 + 8;
    do {
      lVar7 = lVar7 + -0x28;
      lVar2 = *param_2;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_88 = 0;
      if (lVar2 == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
      }
      else {
        FUN_1400bbfae(&local_80,lVar2);
        uStack_a0 = CONCAT44(uStack_7c,local_80);
        local_98 = CONCAT44(uStack_74,uStack_78);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        uStack_90 = CONCAT44(uStack_6c,local_70);
        local_88 = CONCAT44(uStack_64,uStack_68);
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if (cVar3 != '\0') {
          uVar1 = *(uint *)(lVar2 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
            local_a8 = 0;
            goto LAB_145735539;
          }
        }
        FUN_14485c47a(&local_a8,lVar2);
      }
LAB_145735539:
      uVar4 = FUN_144a7afa6(lVar6,&uStack_a0);
      if (uStack_90 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x28;
    } while ((byte)(lVar7 == 0 | (byte)uVar4) != 1);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145735610 FUN_145735610 body=903 status=ok
// SIG undefined FUN_145735610(void)

ulonglong FUN_145735610(longlong param_1)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  char local_88;
  longlong local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar2 = FUN_144a7e912(param_1 + 0x83f8);
  if (cVar2 == '\0') {
    uVar5 = 0;
    goto LAB_14573566c;
  }
  uVar3 = FUN_144a1306c(param_1 + 0x83f8);
  FUN_1449a52e6(uVar3,&local_b0);
  dVar1 = local_a0;
  FUN_145735998(param_1 + 0x81a0,&local_b0);
  cVar2 = FUN_144729dda(&local_a8);
  if ((cVar2 == '\0') && (local_78 == 0)) {
LAB_145735710:
    uVar5 = 0;
  }
  else {
    FUN_14573624a(&local_e0,param_1);
    dVar1 = dVar1 - local_d0;
    local_a8 = local_a8 - local_d8;
    local_b0 = local_b0 - local_e0;
    dVar8 = dVar1 * dVar1 + local_b0 * local_b0 + local_a8 * local_a8;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      local_b0 = local_b0 * dVar8;
      local_a8 = local_a8 * dVar8;
      dVar1 = dVar1 * dVar8;
    }
    dVar1 = dVar1 * local_b8 + local_b0 * local_c8 + local_a8 * local_c0;
    if (local_88 == '\x01') {
      local_90 = local_90 - local_d0;
      local_98 = local_98 - local_d8;
      local_a0 = local_a0 - local_e0;
      dVar8 = local_90 * local_90 + local_a0 * local_a0 + local_98 * local_98;
      if (9.99999993922529e-09 < dVar8) {
        dVar8 = 1.0 / SQRT(dVar8);
        local_a0 = local_a0 * dVar8;
        local_98 = local_98 * dVar8;
        local_90 = local_90 * dVar8;
      }
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if (local_90 * local_b8 + local_a0 * local_c8 + local_c0 * local_98 <= dVar1)
      goto LAB_14573586d;
    }
    else {
LAB_14573586d:
      if ((longlong)local_78 == 0) goto LAB_145735710;
      lVar7 = (longlong)local_78 << 3;
      uVar5 = 0;
      lVar6 = local_80;
      do {
        cVar2 = FUN_144729dda(lVar6);
        if (cVar2 != '\0') {
          plVar4 = (longlong *)FUN_14479d2ce(lVar6);
          (**(code **)(*plVar4 + 0x520))(plVar4,&local_118,0,0);
          dVar8 = (local_108 + local_f0) * 0.5 - local_d0;
          dVar10 = (local_110 + local_f8) * 0.5 - local_d8;
          dVar9 = (local_118 + local_100) * 0.5 - local_e0;
          dVar11 = dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10;
          if (9.99999993922529e-09 < dVar11) {
            dVar11 = 1.0 / SQRT(dVar11);
            dVar9 = dVar9 * dVar11;
            dVar10 = dVar10 * dVar11;
            dVar8 = dVar8 * dVar11;
          }
          if (dVar1 < dVar8 * local_b8 + dVar9 * local_c8 + dVar10 * local_c0) {
            uVar5 = 1;
            break;
          }
        }
        lVar6 = lVar6 + 8;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_14573566c:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 145735998 FUN_145735998 body=605 status=ok
// SIG undefined FUN_145735998(void)

undefined8 * FUN_145735998(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_94 [4];
  longlong local_90;
  undefined8 local_88;
  undefined1 local_79;
  longlong local_78;
  ulonglong uStack_70;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_79 = 0;
  local_88 = 0;
  plVar2 = (longlong *)FUN_14069f500(param_1,&local_79,&local_88);
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = plVar2;
  param_2[1] = local_88;
  uVar3 = FUN_14479d2ce(&local_88);
  lVar4 = FUN_14069ce20(uVar3);
  if (lVar4 != 0) {
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_14479d2ce(param_1 + 8);
      uVar5 = FUN_14479d2ce(&local_88);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_78,uVar5,uVar3);
      if ((local_50 & 1) != 0) {
        local_94[0] = 4;
        local_90 = local_78;
        uVar3 = FUN_14479d2ce(param_1 + 8);
        FUN_1400b9382(lVar4,&local_b0,local_94,uVar3);
        if (&local_b0 != param_2 + 2) {
          param_2[4] = local_a0;
          *(undefined4 *)(param_2 + 2) = (undefined4)local_b0;
          *(undefined4 *)((longlong)param_2 + 0x14) = local_b0._4_4_;
          *(undefined4 *)(param_2 + 3) = uStack_a8;
          *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_a4;
          *(undefined1 *)(param_2 + 5) = 1;
        }
      }
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) goto LAB_145735a24;
  }
  cVar1 = FUN_144729dda(&local_88);
  if (cVar1 != '\0') {
    lVar4 = FUN_14479d2ce(&local_88);
    lVar4 = *(longlong *)(lVar4 + 0x1c8);
    if (lVar4 == 0) {
      puVar7 = &DAT_14c8464e0;
      uVar10 = (undefined4)DAT_14c8464f0;
      uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar10 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
      puVar7 = (undefined8 *)(lVar4 + 0x260);
    }
    uVar3 = puVar7[1];
    param_2[2] = *puVar7;
    param_2[3] = uVar3;
    param_2[4] = CONCAT44(uVar11,uVar10);
    *(undefined1 *)(param_2 + 5) = 1;
  }
LAB_145735a24:
  if (plVar2 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_145735bf6(param_1,plVar2,&local_78);
    uVar8 = 0;
    if ((longlong)(int)uStack_70 != 0) {
      lVar9 = (longlong)(int)uStack_70 * 0x118;
      lVar4 = local_78 + 0xc0;
      do {
        lVar6 = FUN_14485cccc(lVar4);
        if (lVar6 != 0) {
          uVar3 = FUN_14485cccc(lVar4);
          local_b0 = 0;
          FUN_14485c47a(&local_b0,uVar3);
          FUN_1407a297a(param_2 + 6,&local_b0);
        }
        lVar4 = lVar4 + 0x118;
        lVar9 = lVar9 + -0x118;
      } while (lVar9 != 0);
      uVar8 = uStack_70 & 0xffffffff;
    }
    FUN_14121cbdb(local_78,uVar8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145735bf6 FUN_145735bf6 body=1532 status=ok
// SIG undefined FUN_145735bf6(void)

void FUN_145735bf6(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  bool bVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auStack_3d8 [32];
  undefined4 *local_3b8;
  undefined1 *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  byte local_38a;
  byte local_389;
  longlong local_388;
  int local_380;
  int local_37c;
  longlong *local_378;
  longlong local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  longlong local_328;
  longlong *local_320;
  longlong local_318;
  ulonglong uStack_310;
  longlong local_308 [2];
  undefined1 local_2f8 [4];
  undefined4 local_2f4;
  undefined4 local_2d0;
  undefined4 local_254;
  undefined4 local_228;
  undefined1 local_1f8 [4];
  undefined4 local_1f4;
  undefined8 local_1e4;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lVar21 = param_1 + 8;
  cVar6 = FUN_144729dda(lVar21);
  if (cVar6 == '\0') {
    lVar10 = 0;
  }
  else {
    uVar9 = FUN_14479d2ce(lVar21);
    lVar10 = FUN_1447210f0(uVar9);
  }
  if (param_2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_14082ce84(param_2 + 0x1a0);
  }
  local_378 = param_3;
  cVar6 = FUN_144729dda(lVar21);
  if ((((lVar11 == 0) || (lVar10 == 0)) || (cVar6 == '\0')) || (*(longlong *)(lVar11 + 0x348) == 0))
  goto LAB_145736032;
  local_308[0] = 0;
  local_308[1] = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_1f8[0] = 0;
  local_1f4 = 0;
  local_1e4 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0x3ff00000;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_134 = 0x3ff00000;
  uStack_130 = 0;
  uStack_12c = 0x3ff00000;
  local_128 = 0x3ff0000000000000;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_94 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1405fab15(&local_328);
  lVar16 = local_328;
  plVar2 = (longlong *)(local_328 + 0x250);
  lVar12 = FUN_14479d2ce(lVar21);
  uVar3 = *(undefined4 *)(lVar12 + 0xc);
  iVar4 = *(int *)(lVar16 + 600);
  *(uint *)(lVar16 + 600) = iVar4 + 1U;
  if (*(uint *)(lVar16 + 0x25c) < iVar4 + 1U) {
    FUN_1447808da(plVar2,iVar4);
  }
  *(undefined4 *)(*plVar2 + (longlong)iVar4 * 4) = uVar3;
  local_338 = DAT_14c8464f0;
  local_348 = DAT_14c8464e0;
  uStack_340 = DAT_14c8464e8;
  local_358 = DAT_14c846508;
  local_368 = (undefined4)DAT_14c8464f8;
  uStack_364 = DAT_14c8464f8._4_4_;
  uStack_360 = (undefined4)DAT_14c846500;
  uStack_35c = DAT_14c846500._4_4_;
  uVar9 = FUN_14479d2ce(lVar21);
  FUN_141313b0e(uVar9,&local_348,&local_368);
  param_1 = param_1 + 0x98;
  local_3a0 = local_328;
  local_3a8 = 0;
  local_3b8 = &local_368;
  local_3b0 = (undefined1 *)param_1;
  local_388 = lVar21;
  (**(code **)(**(longlong **)(lVar11 + 0x348) + 0x10))
            (*(longlong **)(lVar11 + 0x348),local_1f8,lVar10,&local_348);
  plVar2 = local_378;
  local_3a8 = local_328;
  local_3b0 = (undefined1 *)0x0;
  local_3b8 = (undefined4 *)local_1f8;
  (**(code **)(**(longlong **)(lVar11 + 0x348) + 0x40))
            (*(longlong **)(lVar11 + 0x348),local_378,local_308,lVar10);
  local_3a0 = 0;
  local_3b0 = (undefined1 *)0x0;
  local_3b8 = (undefined4 *)local_1f8;
  local_3a8 = param_1;
  FUN_14069df1a(*(undefined8 *)(lVar11 + 0x348),&local_318,local_308,plVar2);
  FUN_14069cfaa(*(undefined8 *)(lVar11 + 0x348),&local_318,lVar10,local_1f8);
  uVar9 = *(undefined8 *)(lVar11 + 0x348);
  memset(local_2f8,0,0x100);
  local_228 = 0xffffffff;
  local_2f4 = 0x3f800000;
  local_254 = 0xffffffff;
  local_3a0 = 0;
  local_3b8 = (undefined4 *)local_1f8;
  local_3b0 = local_2f8;
  local_3a8 = param_1;
  FUN_14069fde2(uVar9,plVar2,&local_318);
  local_2f8[0] = 0;
  local_2d0 = 0;
  FUN_1457361f4(local_2f8,local_388);
  plVar13 = (longlong *)FUN_1447262c2(local_2f8);
  if (plVar13 == (longlong *)0x0) {
LAB_145736186:
    FUN_144a5ac3a(local_2f8);
  }
  else {
    uVar9 = FUN_1403ec9c0();
    plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar9);
    if (plVar13 == (longlong *)0x0) goto LAB_145736186;
    uVar9 = FUN_1403ec9c0();
    plVar14 = (longlong *)FUN_144718840(plVar13,uVar9);
    if (plVar13 == plVar14) goto LAB_145736186;
    FUN_144a5ac3a(local_2f8);
    if (plVar14 != (longlong *)0x0) {
      iVar4 = (int)plVar2[1];
      lVar21 = (longlong)iVar4;
      if (lVar21 != 0) {
        lVar11 = *plVar2;
        uVar9 = FUN_14485cccc(lVar11 + 0xc0);
        iVar7 = (**(code **)(*plVar14 + 0x28))(plVar14,uVar9);
        bVar22 = iVar7 != 2;
        lVar10 = lVar11 + 0x1d8;
        iVar17 = 0;
        local_388 = lVar11;
        iVar7 = 0;
        do {
          lVar11 = (longlong)iVar7;
          iVar15 = iVar7 + 1;
          if (iVar7 + 1 < iVar4) {
            iVar15 = iVar4;
          }
          lVar12 = lVar11 * 0x118;
          lVar16 = lVar10 + lVar12;
          bVar20 = (bool)(bVar22 & 1);
          bVar19 = bVar22;
          bVar22 = bVar22 ^ 1;
          iVar18 = iVar7;
          do {
            lVar11 = lVar11 + 1;
            iVar5 = iVar15;
            if (lVar21 <= lVar11) break;
            local_38a = bVar19;
            local_389 = bVar22;
            local_380 = iVar18;
            local_37c = iVar17;
            local_370 = lVar10;
            uVar9 = FUN_14485cccc(lVar16);
            iVar8 = (**(code **)(*plVar14 + 0x28))(plVar14,uVar9);
            iVar18 = local_380 + 1;
            lVar16 = lVar16 + 0x118;
            lVar10 = local_370;
            bVar19 = local_38a;
            bVar22 = local_389;
            iVar5 = iVar18;
            iVar17 = local_37c;
          } while (bVar20 == (iVar8 != 2));
          iVar15 = iVar5 - iVar7;
          if ((bVar19 & 1) == 0) {
            if (iVar17 != iVar7) {
              memmove((void *)((longlong)iVar17 * 0x118 + local_388),(void *)(lVar12 + local_388),
                      (longlong)iVar15 * 0x118);
            }
            iVar17 = iVar17 + iVar15;
          }
          else {
            FUN_14121cbdb(lVar12 + local_388,iVar15);
          }
          iVar7 = iVar5;
        } while (lVar11 < lVar21);
        *(int *)(local_378 + 1) = iVar17;
      }
    }
  }
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_320 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar1 = (int *)((longlong)local_320 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_320 + 0x10))(local_320);
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14069cf61(local_318,uStack_310 & 0xffffffff);
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if (local_308[0] != 0) {
    FUN_1400020a8();
  }
LAB_145736032:
  if ((local_48 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457361f4 FUN_1457361f4 body=86 status=ok
// SIG undefined FUN_1457361f4(void)

void FUN_1457361f4(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*param_1 == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  else if (*param_1 == '\x01') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\x02';
  *(undefined8 *)(param_1 + 8) = *param_2;
  FUN_144a1314c(param_1 + 0x28);
  return;
}



// FUNCTION 14573624a FUN_14573624a body=108 status=ok
// SIG undefined FUN_14573624a(void)

undefined4 * FUN_14573624a(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141313b0e(param_2,&local_38,local_50);
  FUN_144a76660(local_50,param_1 + 6);
  *(undefined8 *)(param_1 + 4) = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457362b8 FUN_1457362b8 body=951 status=ok
// SIG undefined FUN_1457362b8(void)

void FUN_1457362b8(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined1 local_2d0 [8];
  undefined1 *local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_188;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_145736670();
  lVar8 = FUN_1403ca227();
  lVar8 = FUN_1407a0dc0(lVar8 + 0x120);
  if (lVar8 != 0) {
    uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_1409e0c66(&local_2b8,uVar9);
    if (plStack_2b0 != (longlong *)0x0) {
      iVar7 = (int)plStack_2b0[1];
      do {
        if (iVar7 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)plStack_2b0[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plStack_2b0 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
        plVar10 = plStack_2b0;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)plStack_2b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_2b0 + 0x10))();
      }
      lVar5 = local_2b8;
      if (plVar10 != (longlong *)0x0) {
        if (local_2b8 != 0) {
          local_290 = 0;
          local_288 = 0;
          local_2b8 = 0;
          plStack_2b0 = (longlong *)0x0;
          local_2a8 = 0;
          local_284 = 0xffffffff00000080;
          local_27c = 0;
          local_270 = 0;
          local_268 = 0;
          local_240 = 0;
          local_238 = 0;
          local_260 = 0;
          uStack_258 = 0;
          local_234 = 0xffffffff00000080;
          local_22c = 0;
          local_220 = 0;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0xffffffff00000000;
          local_1e0 = 0;
          local_1d8 = 0;
          local_200 = 0;
          uStack_1f8 = 0;
          local_1d4 = 0xffffffff00000080;
          local_1cc = 0;
          local_1c0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_188 = 0;
          local_160 = 0;
          local_158 = 0x200000000;
          local_148 = 0;
          local_140 = 0;
          uStack_13c = 0x20;
          uStack_138 = 0xffffffff;
          uStack_134 = 0;
          local_128 = 0;
          local_120 = 0;
          local_f8 = 0;
          local_f0 = 0x200000000;
          local_e0 = 0;
          local_d8 = 0;
          uStack_d4 = 0x20;
          uStack_d0 = 0xffffffff;
          uStack_cc = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_90 = 0;
          local_88 = 0x200000000;
          local_78 = 0;
          local_70 = 0;
          uStack_6c = 0x20;
          uStack_68 = 0xffffffff;
          uStack_64 = 0;
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar8);
          }
          local_2b8 = lVar8;
          FUN_140ff15b2(&local_2b8);
          local_2d8 = 1;
          FUN_140a41f04(lVar5,&local_2c8,param_2,&local_2b8);
          plVar2 = local_2c0;
          if ((undefined1 **)(param_1 + 0x27) != &local_2c8) {
            param_1[0x27] = (longlong)local_2c8;
            local_2c8 = (undefined1 *)0x0;
            plVar3 = (longlong *)param_1[0x28];
            if (local_2c0 != plVar3) {
              local_2c0 = (longlong *)0x0;
              param_1[0x28] = (longlong)plVar2;
              if (plVar3 != (longlong *)0x0) {
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
              }
            }
          }
          plVar2 = local_2c0;
          if (local_2c0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_2c0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_2c0)(local_2c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          puVar4 = (undefined1 *)param_1[0x27];
          if (puVar4 != (undefined1 *)0x0) {
            local_2c8 = &LAB_14072afac;
            local_2c0 = (longlong *)((ulonglong)local_2c0 & 0xffffffff00000000);
            FUN_145736790(puVar4 + 0x130,local_2d0,param_1);
          }
          FUN_14076ba26(&local_2b8);
        }
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
    }
  }
  if ((local_38 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145736670 FUN_145736670 body=286 status=ok
// SIG undefined FUN_145736670(void)

void FUN_145736670(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x27] != 0) {
    uVar5 = (**(code **)(*param_1 + 0x180))();
    FUN_1409e0c66(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_1409e0d9e(local_30,param_1 + 0x27);
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
    param_1[0x27] = 0;
    plVar6 = (longlong *)param_1[0x28];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x28] = 0;
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145736790 FUN_145736790 body=254 status=ok
// SIG undefined FUN_145736790(void)

undefined8
FUN_145736790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ac8b4c0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aaba0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e0aeb0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145736890 FUN_145736890 body=483 status=ok
// SIG undefined FUN_145736890(void)

void FUN_145736890(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
        lVar6 = (longlong)iVar4 * 0x68;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 100 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x60 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 145736a74 FUN_145736a74 body=146 status=ok
// SIG undefined FUN_145736a74(void)

void FUN_145736a74(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x8d0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x8d0)) {
      uVar5 = uVar4 / 0x8d0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x8d0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145736b06 FUN_145736b06 body=132 status=ok
// SIG undefined FUN_145736b06(void)

void FUN_145736b06(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145736b8c FUN_145736b8c body=123 status=ok
// SIG undefined FUN_145736b8c(void)

void FUN_145736b8c(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if ((*(int *)(lVar2 + uVar3) == *param_2) && (*(int *)(lVar2 + 4 + uVar3) == param_2[1])) {
        if ((~uVar3 & 0x7fffffff8) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145736cae(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)param_2;
  return;
}



// FUNCTION 145736c08 FUN_145736c08 body=48 status=ok
// SIG undefined FUN_145736c08(void)

void FUN_145736c08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,2);
  }
  return;
}



// FUNCTION 145736c38 FUN_145736c38 body=118 status=ok
// SIG undefined FUN_145736c38(void)

void FUN_145736c38(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145736ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 145736cae FUN_145736cae body=132 status=ok
// SIG undefined FUN_145736cae(void)

void FUN_145736cae(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145736d32 FUN_145736d32 body=157 status=ok
// SIG undefined FUN_145736d32(void)

void FUN_145736d32(undefined2 *param_1,undefined8 param_2)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  if (param_1[2] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[3] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[4] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[5] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[6] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[7] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 145736ddc FUN_145736ddc body=285 status=ok
// SIG undefined FUN_145736ddc(void)

void FUN_145736ddc(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145736efa FUN_145736efa body=322 status=ok
// SIG undefined FUN_145736efa(void)

void FUN_145736efa(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 14573703e FUN_14573703e body=68 status=ok
// SIG undefined FUN_14573703e(void)

void FUN_14573703e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148922c10();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145737082 FUN_145737082 body=89 status=ok
// SIG undefined FUN_145737082(void)

void FUN_145737082(longlong param_1,int param_2)

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



// FUNCTION 1457370dc FUN_1457370dc body=153 status=ok
// SIG undefined FUN_1457370dc(void)

void FUN_1457370dc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb86df8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb86df8 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_148922d84(param_1);
    }
    local_38 = &local_48;
    local_30 = &local_40;
    local_40 = FUN_143dfc0d6;
    local_20 = &local_30;
    local_28 = FUN_140b79a70;
    local_48 = param_1;
    FUN_140b7960e(lVar1,&local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145737176 FUN_145737176 body=94 status=ok
// SIG undefined FUN_145737176(void)

void FUN_145737176(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x50 + 0x48);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_147dc3298();
  return;
}



// FUNCTION 1457371d4 FUN_1457371d4 body=232 status=ok
// SIG undefined FUN_1457371d4(void)

undefined8 FUN_1457371d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a90a240;
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
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14b9a3660;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_1406baa38(&DAT_14cb103e0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457372be FUN_1457372be body=24 status=ok
// SIG undefined FUN_1457372be(void)

bool FUN_1457372be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457372d6 FUN_1457372d6 body=132 status=ok
// SIG undefined FUN_1457372d6(void)

void FUN_1457372d6(longlong param_1,int param_2)

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



// FUNCTION 14573735c FUN_14573735c body=205 status=ok
// SIG undefined FUN_14573735c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573735c(void)

{
  if ((DAT_14ca02187 & 2) == 0) {
    DAT_14ca02187 = DAT_14ca02187 | 2;
    _DAT_14ca02128 = L"FBuildFeedbackHashTableIndirectArgsCS";
    _DAT_14ca02140 = FUN_146826540;
    _DAT_14ca02148 = FUN_146825d77;
    _DAT_14ca02150 = FUN_146825fd6;
    _DAT_14ca02158 = FUN_1407e02ea;
    _DAT_14ca02160 = FUN_146826273;
    _DAT_14ca02138 = FUN_1472219f8;
    _DAT_14ca02178 = 0xffffffff000000e0;
    _DAT_14ca02180 = 8;
    DAT_14ca02184 = 0;
    _DAT_14ca02168 = &LAB_147221a22;
    FUN_14573742a();
    FUN_1407e00cc(&DAT_14ca02120);
    return;
  }
  return;
}



// FUNCTION 14573742a FUN_14573742a body=123 status=ok
// SIG undefined FUN_14573742a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14573742a(void)

{
  _DAT_14ca07b58 = L"BASE";
  DAT_14ca07b82 = 4;
  _DAT_14ca07b60 = FUN_140b35ae4();
  _DAT_14ca07b68 = DAT_14ca02130;
  _DAT_14ca07b70 = &LAB_14682652b;
  DAT_14ca02130 = &DAT_14ca07b58;
  DAT_14ca02185 = DAT_14ca02185 + '\x01';
  _DAT_14ca07b78 = 0x100000000;
  if (*(char *)(_DAT_14ca07b60 + 100) != '\0') {
    DAT_14ca02186 = DAT_14ca02186 + '\x01';
  }
  return;
}



// FUNCTION 1457374a6 FUN_1457374a6 body=205 status=ok
// SIG undefined FUN_1457374a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457374a6(void)

{
  if ((DAT_14ca022af & 2) == 0) {
    DAT_14ca022af = DAT_14ca022af | 2;
    _DAT_14ca02250 = L"FBuildFeedbackHashTableCS";
    _DAT_14ca02268 = FUN_146826540;
    _DAT_14ca02270 = FUN_146825d77;
    _DAT_14ca02278 = FUN_146825fd6;
    _DAT_14ca02280 = FUN_1407e02ea;
    _DAT_14ca02288 = FUN_146826273;
    _DAT_14ca02260 = FUN_147221abe;
    _DAT_14ca022a0 = 0xffffffff000000e0;
    _DAT_14ca022a8 = 8;
    DAT_14ca022ac = 0;
    _DAT_14ca02290 = &LAB_147221ae8;
    FUN_145737574();
    FUN_1407e00cc(&DAT_14ca02248);
    return;
  }
  return;
}



// FUNCTION 145737574 FUN_145737574 body=123 status=ok
// SIG undefined FUN_145737574(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145737574(void)

{
  _DAT_14ca07b88 = L"BASE";
  DAT_14ca07bb2 = 4;
  _DAT_14ca07b90 = FUN_140b35ae4();
  _DAT_14ca07b98 = DAT_14ca02258;
  _DAT_14ca07ba0 = &LAB_14682652b;
  DAT_14ca02258 = &DAT_14ca07b88;
  DAT_14ca022ad = DAT_14ca022ad + '\x01';
  _DAT_14ca07ba8 = 0x100000000;
  if (*(char *)(_DAT_14ca07b90 + 100) != '\0') {
    DAT_14ca022ae = DAT_14ca022ae + '\x01';
  }
  return;
}



// FUNCTION 1457375f0 FUN_1457375f0 body=205 status=ok
// SIG undefined FUN_1457375f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457375f0(void)

{
  if ((DAT_14ca023d7 & 2) == 0) {
    DAT_14ca023d7 = DAT_14ca023d7 | 2;
    _DAT_14ca02378 = L"FCompactFeedbackHashTableCS";
    _DAT_14ca02390 = FUN_146826540;
    _DAT_14ca02398 = FUN_146825d77;
    _DAT_14ca023a0 = FUN_146825fd6;
    _DAT_14ca023a8 = FUN_1407e02ea;
    _DAT_14ca023b0 = FUN_146826273;
    _DAT_14ca02388 = FUN_147221b84;
    _DAT_14ca023c8 = 0xffffffff000000e0;
    _DAT_14ca023d0 = 8;
    DAT_14ca023d4 = 0;
    _DAT_14ca023b8 = &LAB_147221bae;
    FUN_1457376be();
    FUN_1407e00cc(&DAT_14ca02370);
    return;
  }
  return;
}



// FUNCTION 1457376be FUN_1457376be body=123 status=ok
// SIG undefined FUN_1457376be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457376be(void)

{
  _DAT_14ca07bb8 = L"BASE";
  DAT_14ca07be2 = 4;
  _DAT_14ca07bc0 = FUN_140b35ae4();
  _DAT_14ca07bc8 = DAT_14ca02380;
  _DAT_14ca07bd0 = &LAB_14682652b;
  DAT_14ca02380 = &DAT_14ca07bb8;
  DAT_14ca023d5 = DAT_14ca023d5 + '\x01';
  _DAT_14ca07bd8 = 0x100000000;
  if (*(char *)(_DAT_14ca07bc0 + 100) != '\0') {
    DAT_14ca023d6 = DAT_14ca023d6 + '\x01';
  }
  return;
}



// FUNCTION 14573773a FUN_14573773a body=226 status=ok
// SIG undefined FUN_14573773a(void)

longlong * FUN_14573773a(longlong *param_1)

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
  pcVar13 = FUN_1462e9374;
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



// FUNCTION 145737822 FUN_145737822 body=138 status=ok
// SIG undefined FUN_145737822(void)

code * FUN_145737822(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FeedbackBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457378ac;
}



// FUNCTION 1457378ac FUN_1457378ac body=138 status=ok
// SIG undefined FUN_1457378ac(void)

code * FUN_1457378ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FeedbackBufferAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722adc0;
}



// FUNCTION 145737936 FUN_145737936 body=226 status=ok
// SIG undefined FUN_145737936(void)

longlong * FUN_145737936(longlong *param_1)

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
  pcVar13 = FUN_1462e93fc;
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



// FUNCTION 145737a1e FUN_145737a1e body=138 status=ok
// SIG undefined FUN_145737a1e(void)

code * FUN_145737a1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWHashTableKeys";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145737aa8;
}



// FUNCTION 145737aa8 FUN_145737aa8 body=138 status=ok
// SIG undefined FUN_145737aa8(void)

code * FUN_145737aa8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BuildHashTableIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e950c;
}



// FUNCTION 145737b32 FUN_145737b32 body=226 status=ok
// SIG undefined FUN_145737b32(void)

longlong * FUN_145737b32(longlong *param_1)

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
  pcVar13 = FUN_1462e9596;
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



// FUNCTION 145737c16 FUN_145737c16 body=138 status=ok
// SIG undefined FUN_145737c16(void)

code * FUN_145737c16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FeedbackBufferAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722b180;
}



// FUNCTION 145737ca0 FUN_145737ca0 body=138 status=ok
// SIG undefined FUN_145737ca0(void)

undefined1 * FUN_145737ca0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd2;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14722b3a8;
}



// FUNCTION 145737d2a FUN_145737d2a body=138 status=ok
// SIG undefined FUN_145737d2a(void)

code * FUN_145737d2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HashTableElementIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722b294;
}



// FUNCTION 145737db4 FUN_145737db4 body=232 status=ok
// SIG undefined FUN_145737db4(void)

longlong * FUN_145737db4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462c1f24;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145737ea2 FUN_145737ea2 body=103 status=ok
// SIG undefined FUN_145737ea2(void)

undefined8 * FUN_145737ea2(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_144881636(param_1,param_2);
  return param_1;
}



// FUNCTION 145737f0a FUN_145737f0a body=40 status=ok
// SIG undefined FUN_145737f0a(void)

undefined8 FUN_145737f0a(undefined8 param_1,int param_2)

{
  FUN_145737f32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145737f32 FUN_145737f32 body=118 status=ok
// SIG undefined FUN_145737f32(void)

void FUN_145737f32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acb29e0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d01fc(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d01fc(param_1 + 0x68);
  FUN_1406d02ae(param_1);
  return;
}



// FUNCTION 145737fa8 FUN_145737fa8 body=135 status=ok
// SIG undefined FUN_145737fa8(void)

bool FUN_145737fa8(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_10 [4];
  int local_c;
  char local_8 [4];
  int local_4;
  
  local_8[0] = '\x01';
  local_4 = param_2;
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    iVar2 = *(int *)(param_1 + 4);
    pcVar3 = param_1;
    if (param_2 <= iVar2) {
      if (param_2 < iVar2) {
        pcVar3 = local_8;
      }
      else {
        pcVar3 = local_8;
        if (cVar1 == '\x01') {
          pcVar3 = param_1;
        }
      }
    }
    if (*pcVar3 != cVar1) {
      return false;
    }
    if (*(int *)(pcVar3 + 4) != iVar2) {
      return false;
    }
  }
  local_10[0] = '\x01';
  local_c = param_2;
  cVar1 = param_1[8];
  if (cVar1 == '\x02') {
    return true;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  pcVar3 = param_1 + 8;
  if (((iVar2 <= param_2) && (pcVar3 = local_10, param_2 <= iVar2)) &&
     (pcVar3 = param_1 + 8, cVar1 != '\x01')) {
    pcVar3 = local_10;
  }
  if (*pcVar3 != cVar1) {
    return false;
  }
  return *(int *)(pcVar3 + 4) == iVar2;
}



// FUNCTION 145738030 FUN_145738030 body=340 status=ok
// SIG undefined FUN_145738030(void)

undefined4 * FUN_145738030(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145738e02(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145738d42(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1406db39e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145738186 FUN_145738186 body=686 status=ok
// SIG undefined FUN_145738186(void)

longlong * FUN_145738186(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *param_1 = param_2;
  param_1[5] = 0;
  param_1[6] = 0x200000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eda260;
  FUN_1406dac58(plVar4 + 2,param_2,0x3f800000);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar1 = param_1 + 1;
  iVar3 = (int)param_1[6];
  *(uint *)(param_1 + 6) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar3 + 1U) {
    FUN_145738988(plVar1,iVar3);
  }
  plVar6 = (longlong *)param_1[5];
  if ((longlong *)param_1[5] == (longlong *)0x0) {
    plVar6 = plVar1;
  }
  plVar6[(longlong)iVar3 * 2] = (longlong)(plVar4 + 2);
  plVar6[(longlong)iVar3 * 2 + 1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  lVar5 = *param_1;
  plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eda260;
  FUN_1406dac58(plVar4 + 2,lVar5 + 0x10,*(undefined4 *)(lVar5 + 0x20));
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar3 = (int)param_1[6];
  *(uint *)(param_1 + 6) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar3 + 1U) {
    FUN_145738988(plVar1,iVar3);
  }
  plVar6 = (longlong *)param_1[5];
  if ((longlong *)param_1[5] == (longlong *)0x0) {
    plVar6 = plVar1;
  }
  plVar6[(longlong)iVar3 * 2] = (longlong)(plVar4 + 2);
  plVar6[(longlong)iVar3 * 2 + 1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  lVar5 = (longlong)*(int *)(*param_1 + 0x30);
  if (lVar5 != 0) {
    lVar7 = *(longlong *)(*param_1 + 0x28);
    lVar5 = lVar5 * 0x38;
    do {
      plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_FUN_149eda260;
      FUN_1406dac58(plVar4 + 2,lVar7,*(undefined4 *)(lVar7 + 0x10));
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      iVar3 = (int)param_1[6];
      *(uint *)(param_1 + 6) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar3 + 1U) {
        FUN_145738988(plVar1,iVar3);
      }
      plVar6 = (longlong *)param_1[5];
      if ((longlong *)param_1[5] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      plVar6[(longlong)iVar3 * 2] = (longlong)(plVar4 + 2);
      plVar6[(longlong)iVar3 * 2 + 1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      lVar7 = lVar7 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
  }
  FUN_1406db586(param_1);
  return param_1;
}



// FUNCTION 145738434 FUN_145738434 body=126 status=ok
// SIG undefined FUN_145738434(void)

void FUN_145738434(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      iVar6 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1457384b2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457384b2 FUN_1457384b2 body=131 status=ok
// SIG undefined FUN_1457384b2(void)

void FUN_1457384b2(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 145738536 FUN_145738536 body=147 status=ok
// SIG undefined FUN_145738536(void)

undefined8 * FUN_145738536(undefined8 *param_1,undefined8 param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = param_2;
  fVar2 = 0.0;
  if (0.0 <= param_3) {
    fVar2 = param_3;
  }
  fVar3 = 0.0;
  if (0.0 <= param_4) {
    fVar3 = param_4;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = FUN_144b42fe0(((int)(fVar2 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar3 * 65536.0));
  *(int *)((longlong)param_1 + 0xc) = iVar1 + 0x20 >> 6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



// FUNCTION 1457385ca FUN_1457385ca body=261 status=ok
// SIG undefined FUN_1457385ca(void)

longlong *
FUN_1457385ca(longlong *param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  if ((param_3 & 1) == 0) {
    fVar4 = 0.0;
    if (0.0 <= param_4) {
      fVar4 = param_4;
    }
    fVar3 = 0.0;
    if (0.0 <= param_5) {
      fVar3 = param_5;
    }
    iVar1 = FUN_144b42fe0(((int)(fVar4 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar3 * 65536.0));
    iVar1 = iVar1 + 0x20 >> 6;
  }
  else {
    fVar4 = 0.0;
    if (0.0 <= param_5) {
      fVar4 = param_5;
    }
    fVar3 = 0.0;
    if (0.0 <= param_4) {
      fVar3 = param_4;
    }
    iVar1 = *(int *)(param_2 + 0x68);
    iVar2 = FUN_144b42fe0(((int)(fVar3 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar4 * 65536.0));
    iVar1 = FUN_144b555e0(iVar2 + 0x20U & 0xffffffc0,iVar1 + (uint)((short)iVar1 == 0) & 0xffff);
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



// FUNCTION 1457386d0 FUN_1457386d0 body=284 status=ok
// SIG undefined FUN_1457386d0(void)

undefined4 * FUN_1457386d0(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14573888c(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  local_40[2] = puVar1[2];
  uVar2 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar3 = FUN_1457387ee(param_1,param_3,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x2c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1406db03a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457387ee FUN_1457387ee body=158 status=ok
// SIG undefined FUN_1457387ee(void)

undefined8 FUN_1457387ee(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_1406da2e8(), iVar13 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x30);
    plVar4 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar13 * 0x30);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    uVar12 = param_3[7];
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_3 + 8);
    puVar3[4] = uVar9;
    puVar3[5] = uVar10;
    puVar3[6] = uVar11;
    puVar3[7] = uVar12;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_1469507a6(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 14573888c FUN_14573888c body=251 status=ok
// SIG undefined FUN_14573888c(void)

int * FUN_14573888c(longlong *param_1,int *param_2)

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



// FUNCTION 145738988 FUN_145738988 body=126 status=ok
// SIG undefined FUN_145738988(void)

void FUN_145738988(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 3) {
      iVar6 = 2;
    }
    else {
      if (*(uint *)(param_1 + 0x2c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar6;
    FUN_145738a06(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145738a06 FUN_145738a06 body=131 status=ok
// SIG undefined FUN_145738a06(void)

void FUN_145738a06(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,0x10);
  return;
}



// FUNCTION 145738a8a FUN_145738a8a body=284 status=ok
// SIG undefined FUN_145738a8a(void)

undefined4 * FUN_145738a8a(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145738c46(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  local_40[2] = puVar1[2];
  uVar2 = puVar1[1];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar3 = FUN_145738ba8(param_1,param_3,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x2c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1406db1ec(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145738ba8 FUN_145738ba8 body=158 status=ok
// SIG undefined FUN_145738ba8(void)

undefined8 FUN_145738ba8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_1406da006(), iVar13 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x30);
    plVar4 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar13 * 0x30);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    uVar12 = param_3[7];
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_3 + 8);
    puVar3[4] = uVar9;
    puVar3[5] = uVar10;
    puVar3[6] = uVar11;
    puVar3[7] = uVar12;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_146950820(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 145738c46 FUN_145738c46 body=251 status=ok
// SIG undefined FUN_145738c46(void)

int * FUN_145738c46(longlong *param_1,int *param_2)

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



// FUNCTION 145738d42 FUN_145738d42 body=191 status=ok
// SIG undefined FUN_145738d42(void)

undefined8 FUN_145738d42(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14694f526(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 145738e02 FUN_145738e02 body=239 status=ok
// SIG undefined FUN_145738e02(void)

int * FUN_145738e02(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 145738ef1 FUN_145738ef1 body=75 status=ok
// SIG undefined FUN_145738ef1(void)

void FUN_145738ef1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145738f3c FUN_145738f3c body=132 status=ok
// SIG undefined FUN_145738f3c(void)

void FUN_145738f3c(longlong param_1,int param_2)

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



// FUNCTION 145738fc2 FUN_145738fc2 body=314 status=ok
// SIG undefined FUN_145738fc2(void)

undefined4 * FUN_145738fc2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145739172(param_1,local_40);
  local_38[1] = 0;
  lVar3 = param_4[1];
  if (lVar3 == 0) {
    *local_38 = *param_4;
    lVar3 = param_4[1];
  }
  local_38[1] = lVar3;
  param_4[1] = 0;
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)((longlong)local_38 + 0x14) = *(undefined4 *)((longlong)param_4 + 0x14);
  param_4[2] = 0x200000000;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  cVar1 = FUN_1457390fe(param_1,param_3,local_38);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar2) {
      uVar4 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x1c) = param_3;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1406de46e(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457390fe FUN_1457390fe body=115 status=ok
// SIG undefined FUN_1457390fe(void)

undefined8 FUN_1457390fe(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1406de1a0(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146860124(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}


