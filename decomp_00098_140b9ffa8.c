// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b9ffa8 FUN_140b9ffa8 body=154 status=ok
// SIG undefined FUN_140b9ffa8(void)

longlong FUN_140b9ffa8(longlong param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    lVar3 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & *param_2) * 4);
    if (uVar2 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x160) + (longlong)(int)uVar2 * 0x18),
            *puVar1 != *param_2) {
        uVar2 = puVar1[4];
        if (uVar2 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      if (puVar1 + 2 == (uint *)0x0) {
        return 0;
      }
      lVar3 = *(longlong *)(puVar1 + 2);
      if (DAT_14c950c29 != '\x01') {
        return lVar3;
      }
      if (lVar3 == 0) {
        return 0;
      }
      FUN_1456cec3c(lVar3);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140ba0042 FUN_140ba0042 body=228 status=ok
// SIG undefined FUN_140ba0042(void)

longlong FUN_140ba0042(void)

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
  if (DAT_14cb61e78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486dfd9f;
    local_40 = FUN_1464f5c52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerProfileOwner",&DAT_14cb61e78,&DAT_1486dfd9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61e78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba0128 FUN_140ba0128 body=581 status=ok
// SIG undefined FUN_140ba0128(void)

void FUN_140ba0128(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (((*(longlong *)(lVar3 + 0x4a0) == 0) || (*(longlong *)(lVar3 + 0x4a8) == 0)) ||
     (*(int *)(*(longlong *)(lVar3 + 0x4a8) + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar5 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b4203c0;
    local_58[3] = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar9;
    puVar5[4] = FUN_140b9fa66;
    local_68 = 0;
    FUN_1405f67fc(uVar6,&local_48,&local_58,L"AGbxPlayerState.CheckVaultDataReadyToTransmit");
    *(undefined8 *)(lVar3 + 0x4a0) = local_48;
    local_48 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x4a8);
    *(longlong **)(lVar3 + 0x4a8) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_140ba02df;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140ba02df:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba036e FUN_140ba036e body=173 status=ok
// SIG undefined FUN_140ba036e(void)

void FUN_140ba036e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x4a0) != 0) && (*(longlong *)(lVar2 + 0x4a8) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x4a8) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(lVar2 + 0x4a0);
    local_20 = *(longlong *)(lVar2 + 0x4a8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar3 = *(longlong *)(lVar2 + 0x4a8);
    *(undefined8 *)(lVar2 + 0x4a0) = 0;
    *(undefined8 *)(lVar2 + 0x4a8) = 0;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba042c FUN_140ba042c body=299 status=ok
// SIG undefined FUN_140ba042c(void)

longlong * FUN_140ba042c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_LAB_14b3e9ca0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b420610;
  puVar2[3] = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = *param_3;
  return param_1;
}



// FUNCTION 140ba0558 FUN_140ba0558 body=94 status=ok
// SIG undefined FUN_140ba0558(void)

void FUN_140ba0558(longlong *param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_1 + 8);
  if (*param_1 == 0) {
    return;
  }
  plVar1 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000140ba05ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}



// FUNCTION 140ba05b6 FUN_140ba05b6 body=55 status=ok
// SIG undefined FUN_140ba05b6(void)

void FUN_140ba05b6(longlong *param_1)

{
  FUN_140ba05ee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ba05ee FUN_140ba05ee body=541 status=ok
// SIG undefined FUN_140ba05ee(void)

void FUN_140ba05ee(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
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
  plVar5 = local_60;
  iVar8 = local_58._4_4_;
  iVar14 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar12 = *param_1;
      lVar6 = (longlong)iVar8 * 0x38;
      if (*(longlong *)(lVar12 + 0x20 + lVar6) != 0) {
        local_78 = lVar6;
        local_70 = lVar12;
        FUN_1400020a8();
        lVar6 = local_78;
        lVar12 = local_70;
      }
      if (*(longlong *)(lVar12 + lVar6) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar9 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar9 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar12 = (longlong)iVar14;
      uVar7 = *(uint *)((longlong)plVar9 + lVar12 * 4) & uVar11;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar4 = iVar8;
        if (iVar8 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar8 <= iVar14) break;
        lVar6 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar6 * 4 + lVar12 * 4 + 4);
          if (uVar7 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar4 - lVar12 == lVar6) goto LAB_140ba0667;
        }
        iVar14 = iVar14 + (int)lVar6 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_140ba0667:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar7 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba080c FUN_140ba080c body=49 status=ok
// SIG undefined FUN_140ba080c(void)

longlong FUN_140ba080c(void)

{
  if (DAT_14c9a5168 == 0) {
    FUN_140f50038(&DAT_14c9a5168,&PTR_s__Script_GbxEngine_14a1a5308);
  }
  return DAT_14c9a5168;
}



// FUNCTION 140ba083e FUN_140ba083e body=38 status=ok
// SIG undefined FUN_140ba083e(void)

undefined8 FUN_140ba083e(undefined8 param_1,int param_2)

{
  FUN_140ba0864();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ba0864 FUN_140ba0864 body=69 status=ok
// SIG undefined FUN_140ba0864(void)

void FUN_140ba0864(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f05118;
  param_1[4] = &PTR_LAB_149f05120;
  if ((param_1[1] != 0) && (lVar1 = *(longlong *)(param_1[1] + 8), lVar1 != 0)) {
    FUN_140c4c666(lVar1,param_1 + 4);
  }
  FUN_140cc7538(param_1);
  return;
}



// FUNCTION 140ba08aa FUN_140ba08aa body=693 status=ok
// SIG undefined FUN_140ba08aa(void)

void FUN_140ba08aa(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  int local_12c;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 uStack_108;
  longlong local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  undefined4 uStack_e8;
  char acStack_e4 [52];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 uStack_63;
  undefined1 local_62;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar2 = *(longlong *)(param_1 + 0x220);
  local_b0 = 0x400000000;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_62 = 0;
  local_120 = lVar2 + 0x18;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_118 = 0x30c0000000000;
  _local_64 = CONCAT11(*(undefined1 *)(lVar2 + 0xa8),*(undefined1 *)(lVar2 + 0xac));
  uStack_80 = *(undefined8 *)(lVar2 + 0x78);
  local_78 = *(undefined8 *)(lVar2 + 0x80);
  uStack_70 = *(undefined8 *)(lVar2 + 0x88);
  local_88 = *(undefined8 *)(lVar2 + 0x90);
  bVar1 = *(byte *)(lVar2 + 0xb0);
  iVar4 = *(int *)(lVar2 + 0xa8);
  bVar7 = bVar1 ^ 3;
  iVar9 = 0;
  cVar8 = (char)(iVar4 << (bVar7 & 0x1f));
  if (1 < iVar4) {
    iVar9 = 0;
    local_128 = lVar2 + 0x48;
    do {
      uVar3 = local_b0;
      local_12c = iVar9 << (bVar7 & 0x1f);
      lVar10 = (longlong)(int)local_b0;
      uVar5 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,uVar5);
      local_138 = param_2;
      if (local_b0._4_4_ < uVar5) {
        FUN_14472d7dc(&local_f0,uVar3 & 0xffffffff);
      }
      lVar11 = lVar10 * 0x10;
      (&local_f0)[lVar10 * 2] = local_128;
      (&uStack_e8)[lVar10 * 4] = 0;
      acStack_e4[lVar11] = (char)local_12c;
      acStack_e4[lVar11 + 1] = cVar8;
      acStack_e4[lVar11 + 2] = (bVar1 != 0) * '\t' + '\x04';
      acStack_e4[lVar11 + 3] = '\x04';
      iVar9 = iVar9 + 2;
      iVar4 = *(int *)(lVar2 + 0xa8);
      param_2 = local_138;
    } while (iVar9 < iVar4 + -1);
  }
  uVar3 = local_b0;
  if (iVar9 < iVar4) {
    cVar6 = '\x02';
    if (bVar1 != 0) {
      cVar6 = '\f';
    }
    lVar10 = (longlong)(int)local_b0;
    uVar5 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,uVar5);
    if (local_b0._4_4_ < uVar5) {
      local_138 = param_2;
      FUN_14472d7dc(&local_f0,uVar3 & 0xffffffff);
      param_2 = local_138;
    }
    lVar11 = lVar10 * 0x10;
    (&local_f0)[lVar10 * 2] = lVar2 + 0x48;
    (&uStack_e8)[lVar10 * 4] = 0;
    acStack_e4[lVar11] = (char)(iVar9 << (bVar7 & 0x1f));
    acStack_e4[lVar11 + 1] = cVar8;
    acStack_e4[lVar11 + 2] = cVar6;
    acStack_e4[lVar11 + 3] = '\x04';
  }
  local_110 = lVar2 + 0x30;
  uStack_108 = 0x405080000000000;
  uStack_f8 = 0x405080400000000;
  local_98 = lVar2 + 0x60;
  uStack_90 = 0x408040000000000;
  local_100 = local_110;
  FUN_140ba0b60(param_1);
  FUN_14006bf18(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba0b60 FUN_140ba0b60 body=248 status=ok
// SIG undefined FUN_140ba0b60(void)

void FUN_140ba0b60(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x150) = param_3[8];
  *(undefined4 *)(param_1 + 0x154) = uVar10;
  *(undefined4 *)(param_1 + 0x158) = uVar11;
  *(undefined4 *)(param_1 + 0x15c) = uVar12;
  *(undefined4 *)(param_1 + 0x140) = uVar6;
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  *(undefined4 *)(param_1 + 0x148) = uVar8;
  *(undefined4 *)(param_1 + 0x14c) = uVar9;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined4 *)(param_1 + 0x138) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = uVar5;
  if ((undefined4 *)(param_1 + 0x130) != param_3) {
    iVar1 = param_3[0x1c];
    *(int *)(param_1 + 0x1a0) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x1a4) == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 4;
    }
    else {
      FUN_144780848((void *)(param_1 + 0x160),iVar1);
      if (iVar1 != 0) {
        memcpy((void *)(param_1 + 0x160),param_3 + 0xc,(longlong)iVar1 << 4);
      }
    }
  }
  puVar14 = (undefined8 *)(param_3 + 0x1e);
  puVar15 = (undefined8 *)(param_1 + 0x1a8);
  for (lVar13 = 8; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  uVar2 = param_3[0x2e];
  *(undefined4 *)(param_1 + 0x1eb) = *(undefined4 *)((longlong)param_3 + 0xbb);
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  uVar2 = param_3[0x31];
  uVar3 = param_3[0x32];
  uVar4 = param_3[0x33];
  *(undefined4 *)(param_1 + 0x1f0) = param_3[0x30];
  *(undefined4 *)(param_1 + 500) = uVar2;
  *(undefined4 *)(param_1 + 0x1f8) = uVar3;
  *(undefined4 *)(param_1 + 0x1fc) = uVar4;
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_3 + 0x34);
  FUN_1447fd100(param_1,param_2);
  return;
}



// FUNCTION 140ba0c58 FUN_140ba0c58 body=3100 status=ok
// SIG undefined FUN_140ba0c58(void)

void FUN_140ba0c58(longlong param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 uVar14;
  void *_Dst;
  byte *pbVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  byte *pbVar19;
  uint uVar20;
  longlong lVar21;
  byte *pbVar22;
  bool bVar23;
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
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte *local_78;
  undefined8 uStack_70;
  byte local_62;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140ba1876();
  lVar16 = *(longlong *)(param_1 + 0x88);
  if (lVar16 == 0) {
    uVar14 = FUN_145e0d748();
    lVar16 = FUN_14477b664(uVar14);
    *(longlong *)(param_1 + 0x88) = lVar16;
  }
  plVar11 = (longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    if ((*plVar11 == 0) || (lVar16 == 0)) goto LAB_140ba125d;
    plVar9 = *(longlong **)(lVar16 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      goto LAB_140ba125d;
    }
    uVar14 = (**(code **)(*plVar9 + 0x110))(plVar9);
    lVar16 = FUN_144aff482(uVar14,plVar11);
    *(longlong *)(param_1 + 0x90) = lVar16;
    if (lVar16 == 0) goto LAB_140ba125d;
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  if (((iVar4 == 0) || (uVar8 = *(uint *)(param_1 + 0x28), (int)uVar8 < 0)) ||
     (DAT_14c9647dc <= (int)uVar8)) goto LAB_140ba125d;
  lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  if (((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != iVar4)) ||
     ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) goto LAB_140ba125d;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  plVar9 = (longlong *)
           ((ulonglong)((uVar8 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
  if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar4)) ||
     ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
    lVar16 = 0;
  }
  else {
    lVar16 = *plVar9;
  }
  local_c8 = plVar11;
  if (*(int *)(lVar16 + 0x238) < 1) {
LAB_140ba0e81:
    uVar8 = *(uint *)(param_1 + 0x28);
    if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
        (lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar16 != 0)) &&
       ((*(int *)(lVar16 + 0x10) == iVar4 && ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)))) {
      lVar16 = *(longlong *)(param_1 + 0x88);
      if (lVar16 == 0) {
        uVar14 = FUN_145e0d748();
        lVar16 = FUN_14477b664(uVar14);
        *(longlong *)(param_1 + 0x88) = lVar16;
      }
      if (*(longlong *)(param_1 + 0x90) == 0) {
        if ((lVar16 != 0) && (*local_c8 != 0)) {
          plVar11 = *(longlong **)(lVar16 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
            *(undefined8 *)(param_1 + 0x90) = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar11 + 0x110))(plVar11);
            lVar16 = FUN_144aff482(uVar14,local_c8);
            *(longlong *)(param_1 + 0x90) = lVar16;
            if (lVar16 != 0) goto LAB_140ba0eeb;
          }
        }
      }
      else {
LAB_140ba0eeb:
        if ((*(longlong *)(param_1 + 0x50) != 0) && (0 < *(int *)(param_1 + 0xa0))) {
          lVar16 = 0;
          do {
            lVar21 = *(longlong *)(param_1 + 0x88);
            if (lVar21 == 0) {
              uVar14 = FUN_145e0d748();
              lVar21 = FUN_14477b664(uVar14);
              *(longlong *)(param_1 + 0x88) = lVar21;
            }
            lVar5 = *(longlong *)(param_1 + 0x90);
            if (((lVar5 == 0) && (lVar5 = 0, lVar21 != 0)) && (*local_c8 != 0)) {
              plVar11 = *(longlong **)(lVar21 + 0xb8);
              if ((plVar11 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
                lVar5 = 0;
              }
              else {
                uVar14 = (**(code **)(*plVar11 + 0x110))(plVar11);
                lVar5 = FUN_144aff482(uVar14,local_c8);
              }
              *(longlong *)(param_1 + 0x90) = lVar5;
            }
            if (*(int *)(lVar5 + 0xa8) <= lVar16) break;
            plVar11 = (longlong *)(lVar16 * 0x10 + *(longlong *)(param_1 + 0x98));
            lVar21 = *(longlong *)(param_1 + 0x88);
            if (lVar21 == 0) {
              uVar14 = FUN_145e0d748();
              lVar21 = FUN_14477b664(uVar14);
              *(longlong *)(param_1 + 0x88) = lVar21;
              lVar5 = *(longlong *)(param_1 + 0x90);
            }
            if (lVar5 == 0) {
              *(undefined8 *)(param_1 + 0x90) = 0;
              lVar5 = 0;
              if ((lVar21 != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
                plVar9 = *(longlong **)(lVar21 + 0xb8);
                if ((plVar9 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
                  lVar5 = 0;
                }
                else {
                  uVar14 = (**(code **)(*plVar9 + 0x110))(plVar9);
                  lVar5 = FUN_144aff482(uVar14,local_c8);
                }
                *(longlong *)(param_1 + 0x90) = lVar5;
              }
            }
            puVar1 = (uint *)(*(longlong *)(lVar5 + 0xa0) + lVar16 * 0x28);
            if ((((puVar1[1] == 0) || (uVar8 = *puVar1, (int)uVar8 < 0)) ||
                (DAT_14c9647dc <= (int)uVar8)) ||
               (((plVar9 = (longlong *)
                           ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                 plVar9 == (longlong *)0x0 || (*(uint *)(plVar9 + 2) != puVar1[1])) ||
                (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar21 = *plVar9, lVar21 == 0))))))
            {
              if (*(longlong *)(puVar1 + 2) != 0) {
                lVar21 = FUN_140007850();
                cVar3 = (*(code *)PTR_FUN_14c758760)();
                if ((lVar21 == 0) || (cVar3 == '\0')) {
                  if (lVar21 == 0) {
                    puVar1[0] = 0;
                    puVar1[1] = 0;
                    goto LAB_140ba1473;
                  }
                  uVar8 = *(uint *)(lVar21 + 0xc);
                  *puVar1 = uVar8;
                  if ((int)uVar8 < DAT_14c9647dc) {
                    lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                  }
                  else {
                    lVar5 = 0;
                  }
                  uVar8 = *(uint *)(lVar5 + 0x10);
                  if (*(uint *)(lVar5 + 0x10) == 0) {
                    LOCK();
                    iVar4 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar20 = DAT_14c964868 + 1;
                    bVar23 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar4;
                    if (bVar23) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d)
                      ;
                    }
                    LOCK();
                    uVar8 = *(uint *)(lVar5 + 0x10);
                    bVar23 = uVar8 == 0;
                    if (bVar23) {
                      *(uint *)(lVar5 + 0x10) = uVar20;
                      uVar8 = 0;
                    }
                    UNLOCK();
                    if (bVar23) {
                      uVar8 = uVar20;
                    }
                  }
                  puVar1[1] = uVar8;
                }
                else {
                  uVar8 = *(uint *)(lVar21 + 0xc);
                  if ((int)uVar8 < DAT_14c9647dc) {
                    lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                  }
                  else {
                    lVar5 = 0;
                  }
                  if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                    FUN_14485c47a(puVar1,lVar21);
                  }
                }
                if ((*(uint *)(lVar21 + 8) >> 0x1e & 1) == 0) goto LAB_140ba0fd0;
              }
LAB_140ba1473:
              lVar21 = 0;
            }
            else {
LAB_140ba0fd0:
              lVar5 = FUN_140ba1ab6();
              if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_140ba1473;
            }
            local_78 = (byte *)0x0;
            uStack_70 = 0;
            if ((longlong)(int)uStack_b0 != 0) {
              plVar9 = local_b8 + (int)uStack_b0;
              plVar18 = local_b8;
              do {
                if (((lVar21 != 0) && (*plVar18 != 0)) && (*(char *)(lVar21 + 0x80) == '\x01')) {
                  lVar5 = *(longlong *)(*plVar18 + 0x1c8);
                  if (lVar5 == 0) {
                    local_88 = DAT_14c8464f0;
                    local_98 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                    uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  }
                  else {
                    local_98 = *(code **)(lVar5 + 0x260);
                    uStack_90 = *(undefined8 *)(lVar5 + 0x268);
                    local_88 = *(undefined8 *)(lVar5 + 0x270);
                  }
                  if ((*(int *)(param_1 + 0x2c) == 0) ||
                     (uVar8 = *(uint *)(param_1 + 0x28), (int)uVar8 < 0)) {
LAB_140ba136c:
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = 0;
                    if ((int)uVar8 < DAT_14c9647dc) {
                      puVar12 = (undefined8 *)
                                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                      if (((puVar12 == (undefined8 *)0x0) ||
                          (*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x2c))) ||
                         ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_140ba136c;
                      uVar14 = *puVar12;
                    }
                  }
                  FUN_1402a1570(uVar14,lVar21);
                  FUN_1402a10ba(&local_62,uVar14);
                  cVar3 = local_61;
                  uVar2 = uStack_70;
                  lVar5 = (longlong)(int)uStack_70;
                  if (lVar5 != 0) {
                    lVar17 = 0;
                    do {
                      bVar7 = local_62;
                      if (local_61 == '\0') {
                        bVar7 = 0;
                      }
                      if (local_78[lVar17] == bVar7) {
                        if ((int)lVar17 != -1) goto LAB_140ba1151;
                        break;
                      }
                      lVar17 = lVar17 + 1;
                    } while (lVar5 != lVar17);
                  }
                  uVar8 = (int)uStack_70 + 1;
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
                  if (uStack_70._4_4_ < uVar8) {
                    FUN_1447403be(&local_78,uVar2 & 0xffffffff);
                  }
                  bVar7 = local_62;
                  if (cVar3 == '\0') {
                    bVar7 = 0;
                  }
                  local_78[lVar5] = bVar7;
                }
LAB_140ba1151:
                plVar18 = plVar18 + 1;
              } while (plVar18 != plVar9);
            }
            uVar8 = 0;
            do {
              if ((int)plVar11[1] <= (int)uVar8) break;
              if ((longlong)(int)uStack_70 != 0) {
                lVar5 = 0;
                do {
                  uVar20 = uVar8;
                  if (local_78[lVar5] == *(byte *)(*plVar11 + (ulonglong)uVar8 * 0x78))
                  goto LAB_140ba119f;
                  lVar5 = lVar5 + 1;
                } while ((int)uStack_70 != lVar5);
              }
              FUN_140ba1d94((ulonglong)uVar8 * 0x78 + *plVar11 + 8);
              lVar5 = *plVar11;
              FUN_140ed3afa(lVar5 + (longlong)(int)uVar8 * 0x78 + 8);
              iVar4 = (int)plVar11[1];
              if (~uVar8 + iVar4 != 0) {
                _Dst = (void *)(lVar5 + (longlong)(int)uVar8 * 0x78);
                memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~uVar8 + iVar4) * 0x78)
                ;
                iVar4 = (int)plVar11[1];
              }
              *(int *)(plVar11 + 1) = iVar4 + -1;
              FUN_140ba1cfe(plVar11);
              uVar20 = uVar8 - 1;
LAB_140ba119f:
              uVar8 = uVar20 + 1;
            } while (-2 < (int)uVar20);
            if ((longlong)(int)uStack_70 != 0) {
              pbVar22 = local_78 + (int)uStack_70;
              pbVar19 = local_78;
              do {
                bVar7 = *pbVar19;
                pbVar6 = (byte *)*plVar11;
                iVar4 = (int)plVar11[1];
                lVar5 = (longlong)iVar4;
                if (lVar5 == 0) {
                  pbVar15 = (byte *)0x0;
                }
                else {
                  lVar17 = lVar5 * 0x78;
                  pbVar13 = pbVar6;
                  do {
                    pbVar15 = pbVar13;
                    if (*pbVar13 == bVar7) break;
                    pbVar13 = pbVar13 + 0x78;
                    pbVar15 = (byte *)0x0;
                    lVar17 = lVar17 + -0x78;
                  } while (lVar17 != 0);
                }
                if ((((lVar21 != 0) && (pbVar15 == (byte *)0x0)) &&
                    (*(char *)(lVar21 + 0x80) == '\x01')) &&
                   ((int)(uint)bVar7 < *(int *)(lVar21 + 0x68))) {
                  local_c0 = *(longlong *)(lVar21 + 0x60);
                  *(uint *)(plVar11 + 1) = iVar4 + 1U;
                  if (*(uint *)((longlong)plVar11 + 0xc) < iVar4 + 1U) {
                    FUN_140ba246e(plVar11,iVar4);
                    pbVar6 = (byte *)*plVar11;
                  }
                  pbVar6 = pbVar6 + lVar5 * 0x78;
                  *pbVar6 = *pbVar19;
                  FUN_140ba2072(pbVar6 + 8,local_c0 + (ulonglong)((uint)bVar7 * 0x90) + 8);
                  local_a8 = *(undefined8 *)(param_1 + 0x50);
                  local_a0 = *(longlong *)(param_1 + 0x58);
                  if (local_a0 != 0) {
                    LOCK();
                    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
                    UNLOCK();
                  }
                  FUN_140ba25dc(pbVar6 + 8,&local_a8);
                }
                pbVar19 = pbVar19 + 1;
              } while (pbVar19 != pbVar22);
            }
            if ((longlong)(int)plVar11[1] != 0) {
              lVar5 = (longlong)(int)plVar11[1] * 0x78;
              lVar21 = *plVar11 + 8;
              do {
                FUN_140ba18a0(lVar21);
                lVar21 = lVar21 + 0x78;
                lVar5 = lVar5 + -0x78;
              } while (lVar5 != 0);
            }
            if (local_78 != (byte *)0x0) {
              FUN_1400020a8();
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(param_1 + 0xa0));
        }
      }
    }
  }
  else {
    lVar21 = 0;
    do {
      iVar4 = *(int *)(*(longlong *)(lVar16 + 0x230) + 4 + lVar21 * 8);
      if (((((iVar4 != 0) &&
            (uVar8 = *(uint *)(*(longlong *)(lVar16 + 0x230) + lVar21 * 8), -1 < (int)uVar8)) &&
           ((int)uVar8 < DAT_14c9647dc)) &&
          ((plVar11 = (longlong *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar4)))) &&
         (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
          (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0)))) {
        if (DAT_14cbadd90 == 0) {
          local_e0 = &local_98;
          local_98 = FUN_141030f22;
          local_d0 = FUN_14081d0ea;
          local_d8 = &LAB_1459f2e4c;
          local_e8 = &LAB_148c39de3;
          local_f0 = &LAB_1457a9eb2;
          local_f8 = &DAT_149e063b2;
          local_100 = 0;
          local_108 = 0x10000004;
          local_110 = 0x10;
          local_118 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
             DAT_14cbadd90 + 0x30)) &&
           (((*(byte *)(plVar11 + 0x84) & 2) != 0 &&
            ((cVar3 = (**(code **)(*plVar11 + 0x6c8))(), uVar2 = uStack_b0, cVar3 != '\0' &&
             (lVar5 = plVar11[0x7a], lVar5 != 0)))))) {
          lVar17 = (longlong)(int)uStack_b0;
          if (lVar17 != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)((longlong)local_b8 + uVar10) == lVar5) {
                if ((int)(~uVar10 >> 3) != 0) goto LAB_140ba0e66;
                break;
              }
              uVar10 = uVar10 + 8;
            } while (lVar17 * 8 - uVar10 != 0);
          }
          uVar8 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
          if (uStack_b0._4_4_ < uVar8) {
            FUN_140ba1b9c(&local_b8,uVar2 & 0xffffffff);
          }
          local_b8[lVar17] = lVar5;
        }
      }
LAB_140ba0e66:
      lVar21 = lVar21 + 1;
    } while ((int)lVar21 < *(int *)(lVar16 + 0x238));
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 != 0) goto LAB_140ba0e81;
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140ba125d:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba1876 FUN_140ba1876 body=41 status=ok
// SIG undefined FUN_140ba1876(void)

void FUN_140ba1876(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (((lVar3 == 0) ||
      (((*(char *)(lVar3 + 0x30) == '\0' && (*(char *)(lVar3 + 0x31) == '\0')) &&
       (*(int *)(lVar3 + 0x6c) == 2)))) && (lVar3 = *(longlong *)(param_1 + 0x70), lVar3 != 0)) {
    cVar6 = FUN_140ba1980();
    if (cVar6 == '\0') {
      FUN_140ba1e8e(lVar3);
      return;
    }
    FUN_140ba1a10(lVar3);
    if (0 < *(int *)(lVar3 + 0x48)) {
      lVar7 = 8;
      lVar8 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + -8 + lVar7);
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x40) + lVar7);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
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
        }
        if (lVar4 != 0) {
          cVar6 = FUN_140ba1980(lVar4);
          if (cVar6 == '\0') {
            FUN_140ba1e8e(lVar4);
          }
          else {
            FUN_140ba18a0();
          }
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
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar8 < *(int *)(lVar3 + 0x48));
    }
    return;
  }
  return;
}



// FUNCTION 140ba18a0 FUN_140ba18a0 body=224 status=ok
// SIG undefined FUN_140ba18a0(void)

void FUN_140ba18a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar5 = FUN_140ba1980();
  if (cVar5 == '\0') {
    FUN_140ba1e8e(param_1);
    return;
  }
  FUN_140ba1a10(param_1);
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + lVar6);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar6);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      if (lVar3 != 0) {
        cVar5 = FUN_140ba1980(lVar3);
        if (cVar5 == '\0') {
          FUN_140ba1e8e(lVar3);
        }
        else {
          FUN_140ba18a0();
        }
      }
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
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 140ba1980 FUN_140ba1980 body=143 status=ok
// SIG undefined FUN_140ba1980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140ba1980(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar7._0_8_ = DAT_14cb262c8;
  auVar7._12_4_ = 0x45300000;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(double *)(param_1 + 0x68) <=
       (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
       (auVar7._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0) &&
     (iVar1 = *(int *)(param_1 + 0x28), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1), cVar4 == '\0')) {
        uVar5 = 0;
        break;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 140ba1a10 FUN_140ba1a10 body=164 status=ok
// SIG undefined FUN_140ba1a10(void)

void FUN_140ba1a10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x50) == '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar4);
        if (plVar3 != (longlong *)0x0) {
          local_40 = *(undefined8 *)(param_1 + 0x58);
          local_38 = *(longlong *)(param_1 + 0x60);
          if (local_38 != 0) {
            LOCK();
            *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar3 + 0x10))(plVar3,param_1,&local_40);
        }
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba1ab6 FUN_140ba1ab6 body=228 status=ok
// SIG undefined FUN_140ba1ab6(void)

longlong FUN_140ba1ab6(void)

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
  if (DAT_14cbbf1b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148ca7ad9;
    local_40 = FUN_146610ff1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_AmbientAudio",&DAT_14cbbf1b8,
                  &DAT_148ca7ad8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf1b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba1b9c FUN_140ba1b9c body=353 status=ok
// SIG undefined FUN_140ba1b9c(void)

void FUN_140ba1b9c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ba1c21;
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
LAB_140ba1c21:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140ba1cfe FUN_140ba1cfe body=150 status=ok
// SIG undefined FUN_140ba1cfe(void)

void FUN_140ba1cfe(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x78)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x78,8);
      uVar3 = uVar3 / 0x78;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x78,8);
    }
  }
  return;
}



// FUNCTION 140ba1d94 FUN_140ba1d94 body=242 status=ok
// SIG undefined FUN_140ba1d94(void)

void FUN_140ba1d94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  FUN_140ba1e8e();
  iVar3 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) != 0) {
        FUN_140ba1d94();
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))();
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar5 = *(longlong **)(param_1 + 0x60);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140ba1e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ba1e8e FUN_140ba1e8e body=129 status=ok
// SIG undefined FUN_140ba1e8e(void)

void FUN_140ba1e8e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar4);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) != 0) {
          FUN_140ba1e8e();
        }
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 140ba1f10 FUN_140ba1f10 body=333 status=ok
// SIG undefined FUN_140ba1f10(void)

void FUN_140ba1f10(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x38) != '\x01') goto LAB_140ba200f;
  local_38 = 0;
  uStack_30 = 0;
  lVar4 = FUN_140206ee8(param_1 + 0x40);
  if (lVar4 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    cVar3 = FUN_144904448(plVar1);
    if (cVar3 != '\0') {
      plVar2 = (longlong *)*plVar1;
      if (((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x78) != -1)) &&
         (*plVar2 == *(longlong *)(param_1 + 0x78))) {
        *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + 1;
        uVar5 = FUN_140ba21e6(plVar1);
        local_68 = 0;
        FUN_14084a448(plVar2,&local_58,lVar4,uVar5);
        local_58 = 0;
        local_50 = 0xffffffffffffffff;
        *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
        if ((int)plVar2[0x26] < 1) {
          FUN_1400847bc(plVar2 + 0x17,0);
          if ((int)plVar2[0x21] == 0) {
            FUN_140087e46(plVar2);
            if (*plVar2 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_140ba200f;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
            }
          }
        }
LAB_140ba200f:
        if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      local_40 = 0;
      FUN_144a61ac8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 140ba2072 FUN_140ba2072 body=296 status=ok
// SIG undefined FUN_140ba2072(void)

undefined8 * FUN_140ba2072(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b2b40b0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148740684(param_1 + 4,iVar1,0);
    FUN_1487406f7(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140ba2320(param_1 + 6,iVar1,0);
    FUN_140ba219a(param_1[6],uVar2,iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_148740744(param_1 + 8,iVar1,0);
    FUN_1487407b7(param_1[8],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  lVar3 = *(longlong *)(param_2 + 0x60);
  param_1[0xc] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 140ba219a FUN_140ba219a body=76 status=ok
// SIG undefined FUN_140ba219a(void)

void FUN_140ba219a(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 140ba21e6 FUN_140ba21e6 body=313 status=ok
// SIG undefined FUN_140ba21e6(void)

undefined8 FUN_140ba21e6(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  if ((((param_1[2] == 0) || (plVar2 = (longlong *)*param_1, plVar2 == (longlong *)0x0)) ||
      (param_1[1] == -1)) || (*plVar2 != param_1[1])) {
    return 0;
  }
  lVar4 = plVar2[0x21];
  *(int *)(plVar2 + 0x21) = (int)lVar4 + 1;
  if (param_1[2] != 0) {
    plVar6 = plVar2 + 0x24;
    do {
      lVar3 = *plVar6;
      plVar6 = (longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0 && param_1[2] != lVar3);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
      uVar1 = *(uint *)(lVar3 + 0xc);
      uVar5 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140ba22a5;
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == *(int *)(lVar3 + 0x10))) &&
         ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
        uVar5 = *puVar7;
        goto LAB_140ba22a5;
      }
    }
  }
  uVar5 = 0;
LAB_140ba22a5:
  *(int *)(plVar2 + 0x21) = (int)lVar4;
  if (((int)plVar2[0x26] < 1) && (FUN_1400847bc(plVar2 + 0x17,0), (int)plVar2[0x21] == 0)) {
    FUN_140087e46(plVar2);
    if (*plVar2 != -1) {
      if (DAT_14cb259f8 == 0) {
        return uVar5;
      }
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
    }
  }
  return uVar5;
}



// FUNCTION 140ba2320 FUN_140ba2320 body=334 status=ok
// SIG undefined FUN_140ba2320(void)

void FUN_140ba2320(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ba2392;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140ba2392:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140ba246e FUN_140ba246e body=366 status=ok
// SIG undefined FUN_140ba246e(void)

void FUN_140ba246e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x78;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ba24f3;
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
LAB_140ba24f3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 140ba25dc FUN_140ba25dc body=468 status=ok
// SIG undefined FUN_140ba25dc(void)

void FUN_140ba25dc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(longlong *)(param_1 + 0x60) = lVar5;
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
  iVar3 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar8 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        local_48 = *(undefined8 *)(param_1 + 0x58);
        local_40 = *(longlong *)(param_1 + 0x60);
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar8);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar8 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        local_58 = *(undefined8 *)(param_1 + 0x58);
        local_50 = *(longlong *)(param_1 + 0x60);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar8);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar5 + lVar8);
      if (lVar7 != 0) {
        local_68 = *(undefined8 *)(param_1 + 0x58);
        local_60 = *(longlong *)(param_1 + 0x60);
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        FUN_140ba25dc(lVar7,&local_68);
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar8);
  }
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba27b2 FUN_140ba27b2 body=565 status=ok
// SIG undefined FUN_140ba27b2(void)

void FUN_140ba27b2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *param_3;
  if (lVar7 == 0) goto LAB_140ba2942;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    cVar6 = FUN_144904448(param_1 + 0x70);
    if (cVar6 != '\0') goto LAB_140ba2942;
    lVar7 = *param_3;
  }
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_40 = lVar7;
  lVar7 = FUN_140206ee8(param_1 + 8,&local_40);
  if ((lVar7 == 0) ||
     (FUN_1403c747e(*param_3,&local_48,0), plVar5 = local_48, local_48 == (longlong *)0x0))
  goto LAB_140ba2942;
  lVar3 = *param_3;
  plVar4 = *(longlong **)(lVar3 + 0x20);
  if ((plVar4 == (longlong *)0x0) || (*(int *)(lVar3 + 0x1c) == 0)) {
LAB_140ba2974:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x18);
    plVar8 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar9 == 0) ||
         ((*(int *)(lVar9 + 0x10) != *(int *)(lVar3 + 0x1c) ||
          ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) goto LAB_140ba2974;
      if (*(code **)(*plVar4 + 0x30) == (code *)&LAB_14479b63c) {
        plVar8 = plVar4 + -0xa4;
        if ((longlong *)plVar4[-0x77] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar4[-0x77];
        }
      }
      else {
        plVar8 = (longlong *)(**(code **)(*plVar4 + 0x30))();
      }
    }
  }
  local_68 = 0;
  FUN_14084a448(plVar5,&local_60,lVar7,plVar8);
  *(undefined8 *)(param_1 + 0x70) = local_60;
  *(undefined8 *)(param_1 + 0x78) = local_58;
  *(undefined8 *)(param_1 + 0x80) = local_50;
  if (((local_48 != (longlong *)0x0) &&
      (*(int *)(local_48 + 0x21) = (int)local_48[0x21] + -1, (int)local_48[0x26] < 1)) &&
     (FUN_1400847bc(local_48 + 0x17,0), (int)local_48[0x21] == 0)) {
    FUN_140087e46(local_48);
    if (*local_48 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140ba2942;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_48);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_48);
    }
  }
LAB_140ba2942:
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba29e8 FUN_140ba29e8 body=257 status=ok
// SIG undefined FUN_140ba29e8(void)

void FUN_140ba29e8(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    cVar1 = FUN_140532d9e();
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2208) != 0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb712d0) {
        FUN_144b3d300(&DAT_14cb712d0);
        if (DAT_14cb712d0 == -1) {
          FUN_1446f470e(&DAT_14cb712c8,L"GbxActorHidden",1);
          _Init_thread_footer(&DAT_14cb712d0);
        }
      }
      FUN_140d52e40(*(undefined8 *)(param_1 + 0x2208),&DAT_14cb712c8,param_2,1);
      (**(code **)(**(longlong **)(param_1 + 0x2208) + 0xcf0))();
      lVar2 = (**(code **)(*(longlong *)(param_1 + 0x68) + 0x20))(param_1 + 0x68);
      if (lVar2 != 0) {
        if ((char)param_2 != '\0') {
          FUN_140ba2cd0(lVar2,&DAT_14cb712c8,1);
          return;
        }
        FUN_140ba2af2(lVar2,&DAT_14cb712c8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ba2af2 FUN_140ba2af2 body=261 status=ok
// SIG undefined FUN_140ba2af2(void)

void FUN_140ba2af2(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_140ba2bf8(param_1 + 300);
  FUN_1400bc8c2(param_1 + 0x118,param_2);
  if ((char)param_1[0x118] == '\0') {
    if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
         (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && ((longlong *)*plVar2 != (longlong *)0x0))))
      {
        (**(code **)(*(longlong *)*plVar2 + 0x180))();
      }
    }
    lVar3 = 0;
    do {
      if (((*(char *)((longlong)param_1 + lVar3 + 0x14e) == '\x01') &&
          (*(undefined1 *)((longlong)param_1 + lVar3 + 0x14e) = 0,
          0 < *(int *)((longlong)param_1 + lVar3 + 0x90))) &&
         ((plVar2 = (longlong *)**(longlong **)((longlong)param_1 + lVar3 + 0x88),
          plVar2 != (longlong *)0x0 && (*(char *)((longlong)plVar2 + 0xb4) == '\x03')))) {
        (**(code **)(*plVar2 + 0xd0))();
      }
      lVar3 = lVar3 + 0x138;
    } while (lVar3 != 0x3a8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba2bf8 FUN_140ba2bf8 body=216 status=ok
// SIG undefined FUN_140ba2bf8(void)

int FUN_140ba2bf8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[5];
  lVar5 = (longlong)iVar1;
  iVar4 = 0;
  if (lVar5 != 0) {
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1;
    }
    iVar4 = 0;
    bVar11 = *plVar10 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      lVar3 = (longlong)iVar7;
      iVar8 = iVar7;
      lVar6 = lVar3;
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar2 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar9 = iVar8 + 1;
        iVar8 = iVar9;
      } while (bVar11 == (plVar10[lVar6] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar4 != iVar7) {
          memmove(plVar10 + iVar4,plVar10 + lVar3,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar4 = iVar4 + (iVar9 - iVar7);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 5) = iVar4;
    iVar4 = iVar1 - iVar4;
  }
  return iVar4;
}



// FUNCTION 140ba2cd0 FUN_140ba2cd0 body=626 status=ok
// SIG undefined FUN_140ba2cd0(void)

void FUN_140ba2cd0(uint *param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  uint *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((char)param_1[0x122] != '\0') ||
     ((param_3 != 0 && (*(char *)((longlong)param_1 + 0x3c1) == '\x01')))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  uVar4 = param_1[0x118];
  FUN_1400bc96c(param_1 + 0x118,param_2);
  if (((char)uVar4 == '\0') && ((param_3 & (byte)param_1[0x118]) == 1)) {
    local_40 = param_1[5];
    local_3c = 0;
    local_38 = 0 < (int)param_1[0x142];
    local_37 = 0;
    local_48 = param_1;
    if ((param_1[1] != 0) && ((uVar4 = *param_1, -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc))))
    {
      plVar6 = (longlong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar6 != (longlong *)0x0) &&
         (((*(uint *)(plVar6 + 2) == param_1[1] && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
          ((longlong *)*plVar6 != (longlong *)0x0)))) {
        (**(code **)(*(longlong *)*plVar6 + 0x180))();
      }
    }
    lVar7 = 0x14e;
    do {
      if (((0 < *(int *)((longlong)param_1 + lVar7 + -0xbe)) &&
          (lVar5 = **(longlong **)((longlong)param_1 + lVar7 + -0xc6), lVar5 != 0)) &&
         ((byte)(*(char *)(lVar5 + 0xb4) - 1U) < 2)) {
        cVar3 = *(char *)((longlong)param_1 + lVar7 + -1);
        if (cVar3 != -1) {
          *(char *)((longlong)param_1 + lVar7 + -1) = cVar3 + '\x01';
        }
        FUN_14065d9ca(lVar5,&local_48,4);
        cVar3 = *(char *)((longlong)param_1 + lVar7 + -1);
        if (cVar3 != '\0') {
          *(char *)((longlong)param_1 + lVar7 + -1) = cVar3 + -1;
        }
        *(undefined1 *)((longlong)param_1 + lVar7) = 1;
      }
      lVar7 = lVar7 + 0x138;
    } while (lVar7 != 0x4f6);
    FUN_1400e1ad8(param_1);
    if (((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) &&
       ((uVar4 = *param_1, -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)))) {
      lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if (((lVar7 != 0) && (*(uint *)(lVar7 + 0x10) == param_1[1])) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
        lVar7 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
        if (lVar7 != 0) {
          lVar5 = FUN_14070cc62();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             ((*(longlong *)(lVar7 + 0x858) != 0 &&
              (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x858) + 0x1518), lVar7 != 0)))) {
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            FUN_140c50aa0(lVar7,&local_58);
            plVar6 = plStack_50;
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_50)(plStack_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba2f58 FUN_140ba2f58 body=305 status=ok
// SIG undefined FUN_140ba2f58(void)

void FUN_140ba2f58(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140ba2ff2;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140ba2fcb:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140ba2fcb;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140ba2ff2;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140ba2ff2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba308a FUN_140ba308a body=118 status=ok
// SIG undefined FUN_140ba308a(void)

void FUN_140ba308a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4309b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b430940;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 140ba3100 FUN_140ba3100 body=62 status=ok
// SIG undefined FUN_140ba3100(void)

undefined8 FUN_140ba3100(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_14027347e();
    if (lVar1 != param_2) {
      uVar2 = FUN_140ba313e(*(undefined8 *)(param_1 + 0x40),param_2);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140ba313e FUN_140ba313e body=106 status=ok
// SIG undefined FUN_140ba313e(void)

undefined8 FUN_140ba313e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x58);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
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
    param_1 = *(longlong *)(param_1 + 0x50);
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
    if (param_1 == 0) break;
    lVar6 = FUN_14027347e(param_1);
    if (lVar6 == param_2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ba31a8 FUN_140ba31a8 body=58 status=ok
// SIG undefined FUN_140ba31a8(void)

longlong FUN_140ba31a8(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(param_1 + 8));
  FUN_140ba31e2(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 140ba31e2 FUN_140ba31e2 body=181 status=ok
// SIG undefined FUN_140ba31e2(void)

void FUN_140ba31e2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148a039ba,FUN_148a03a13,&LAB_148a0398f,&LAB_148a039a3);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
    if (0 < (int)param_2[1]) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        lVar1 = *param_2;
        (**(code **)(*param_1 + 0x28))(param_1);
        FUN_140ba3297(param_1,lVar1 + lVar4);
        (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar4);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x18;
      } while (iVar3 < (int)param_2[1]);
    }
                    /* WARNING: Could not recover jumptable at 0x000140ba3284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1);
    return;
  }
  return;
}



// FUNCTION 140ba3297 FUN_140ba3297 body=308 status=ok
// SIG undefined FUN_140ba3297(void)

void FUN_140ba3297(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined **local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x10))(param_1,&local_58,"FGbxUIData_GlyphKeybind",param_2);
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_48,"key",true);
    local_48[0] = &PTR_FUN_14b477e30;
    local_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
    plVar1 = local_58;
    cohtml::Property::Property((Property *)local_48,"is_hold_key",true);
    local_48[0] = &PTR_FUN_14b477ec0;
    local_30 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
    cohtml::Property::Property((Property *)local_48,"hold_duration",true);
    local_48[0] = &PTR_FUN_14b477f50;
    local_30 = 0x14;
    (**(code **)(*local_58 + 0x18))(local_58,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba33cc FUN_140ba33cc body=844 status=ok
// SIG undefined FUN_140ba33cc(void)

void FUN_140ba33cc(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ba371a();
  if (param_2 == (longlong *)0x0) goto LAB_140ba35cf;
  uVar4 = FUN_140437988();
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_140ba35cf;
  uVar4 = FUN_140437988();
  plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
  if ((plVar5 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_140ba35cf;
  lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar5 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b3f7600;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_50[2] = lVar8;
  *local_50 = (longlong)&PTR_FUN_14b424110;
  local_50[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar9 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar9 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar3;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar9 = iVar3;
      }
    }
  }
  *(int *)((longlong)plVar5 + 0x1c) = iVar9;
  plVar5[4] = (longlong)FUN_140ef5366;
  *(undefined4 *)(plVar5 + 5) = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*local_50 + 0x30))(), cVar2 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140ba35cf;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140ba35b9;
    }
  }
  else {
    plVar5 = (longlong *)(lVar7 + 0x58);
    if (*(int *)(lVar7 + 0x6c) < 1) {
      iVar9 = *(int *)(lVar7 + 0x60);
      iVar3 = *(int *)(lVar7 + 0x68) + -1;
      *(int *)(lVar7 + 0x68) = iVar3;
      if (iVar3 <= iVar9) {
        iVar3 = iVar9;
        if (0 < iVar9) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar5 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar5 + (longlong)iVar10 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar6 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar5,iVar10);
              FUN_14005b248(plVar5);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar3 = *(int *)(lVar7 + 0x60);
          } while (iVar10 < iVar3);
        }
        iVar10 = 2;
        if (2 < iVar3 * 2) {
          iVar10 = iVar3 * 2;
        }
        *(int *)(lVar7 + 0x68) = iVar10;
        if ((iVar10 < iVar9) && (*(int *)(lVar7 + 100) != iVar3)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar9 = *(int *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = iVar9 + 1U;
    if (*(uint *)(lVar7 + 100) < iVar9 + 1U) {
      FUN_1447a71f6(plVar5,iVar9);
    }
    lVar11 = *plVar5;
    lVar7 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar11 + lVar7) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar7) = 0;
    *(longlong **)(lVar11 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar11 + 8 + lVar7) = local_48;
LAB_140ba35b9:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140ba35cf:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba371a FUN_140ba371a body=360 status=ok
// SIG undefined FUN_140ba371a(void)

void FUN_140ba371a(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(param_2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x888) = param_2;
  if (param_1 == 0 || (~bVar1 & 1) != 0) {
    if (param_1 == 0) {
      lVar2 = 0;
      goto LAB_140ba378b;
    }
  }
  else {
    FUN_14689c22e(param_1);
    bVar1 = DAT_14c950c29;
  }
  lVar2 = param_1 + 0x880;
  if ((bVar1 & 1) != 0) {
    FUN_14689c22e(param_1);
  }
LAB_140ba378b:
  *(longlong *)(param_1 + 0x3a0) = param_1;
  *(longlong *)(param_1 + 0x3a8) = lVar2;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x1800000000;
  FUN_140ba3884(param_2,local_f8,0);
  puVar3 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar3 = local_f8;
  }
  lVar2 = (longlong)(int)local_30;
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(puVar3 + lVar4) + 0x438))
                (*(longlong **)(puVar3 + lVar4),*(undefined8 *)(param_1 + 0x888));
      lVar4 = lVar4 + 8;
    } while (lVar2 * 8 != lVar4);
  }
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba3884 FUN_140ba3884 body=342 status=ok
// SIG undefined FUN_140ba3884(void)

void FUN_140ba3884(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1488b5296(param_2,0);
  }
  if (DAT_14cad2858 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_146395584;
    local_58 = &LAB_147a0ba80;
    local_60 = &LAB_14575ccce;
    local_68 = L"Engine";
    local_70 = 0x40000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  local_30 = DAT_14cad2858;
  if ((DAT_14cad2858 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140ba3a2a(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba3a2a FUN_140ba3a2a body=719 status=ok
// SIG undefined FUN_140ba3a2a(void)

void FUN_140ba3a2a(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_140ba3bb3:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_140ba3a95:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b5588(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b5304(param_1,&local_40,param_4);
      }
      goto LAB_140ba3ad3;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_140ba3bb3;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140ba3a95;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140ba3cfa(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1488b56da(param_1,&local_50,param_4);
  }
LAB_140ba3ad3:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba3cfa FUN_140ba3cfa body=931 status=ok
// SIG undefined FUN_140ba3cfa(void)

void FUN_140ba3cfa(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar13 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_58 = param_2;
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = puVar13;
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar10 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar10 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar14) goto LAB_140ba3f2f;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar12 != 0) {
        lVar15 = *local_58;
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          local_68 = puVar13;
          local_60 = param_3;
          FUN_1456cec3c(lVar15);
          puVar13 = local_68;
          param_3 = local_60;
LAB_140ba3e00:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_68 = puVar13;
            local_60 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar13 = local_68;
            param_3 = local_60;
            if (DAT_14cad00c8 == 0) goto LAB_140ba4019;
          }
          if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140ba4019;
          if (*(longlong *)
               (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar15 = 0;
          }
        }
        else {
          if (lVar15 != 0) goto LAB_140ba3e00;
LAB_140ba4019:
          lVar15 = 0;
        }
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
          iVar4 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar4 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar4 + 1U) {
            local_68 = puVar13;
            local_60 = param_3;
            FUN_148197012(param_3,iVar4);
            puVar13 = local_68;
            param_3 = local_60;
          }
          lVar15 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar15 = param_3;
          }
          *(longlong *)(lVar15 + (longlong)iVar4 * 8) = lVar12;
        }
      }
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar13;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar8 = puVar5[lVar12] & uVar11;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar15 = 0;
          do {
            uVar8 = puVar5[lVar12 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar15 + 1);
              uVar11 = 0xffffffff;
              goto LAB_140ba3eb9;
            }
            iVar9 = iVar9 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar12 != lVar15);
          uVar11 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_140ba3eb9:
        uVar10 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_140ba3f2f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ba40da FUN_140ba40da body=31 status=ok
// SIG undefined FUN_140ba40da(void)

undefined8 FUN_140ba40da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ba40f9 FUN_140ba40f9 body=120 status=ok
// SIG undefined FUN_140ba40f9(void)

undefined8 FUN_140ba40f9(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar2 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
  if (bVar2 == 1) {
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      if (cVar1 != '\0') {
        bVar2 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
        goto LAB_140ba412e;
      }
    }
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) != 0) {
LAB_140ba412e:
    if ((bVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ba413f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
      return uVar3;
    }
    uVar3 = FUN_144a78877(*(uint *)(param_1 + 8) >> 0x18,*(uint *)(param_1 + 8) & 0xffffff);
    return uVar3;
  }
  return 0xffffffff;
}



// FUNCTION 140ba4172 FUN_140ba4172 body=127 status=ok
// SIG undefined FUN_140ba4172(void)

int FUN_140ba4172(uint param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  
  if (DAT_14cb979d8 != DAT_14cb97a04) {
    puVar3 = &DAT_14cb97a08;
    if (DAT_14cb97a10 != (undefined *)0x0) {
      puVar3 = DAT_14cb97a10;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cb97a18 - 1U & param_1) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14cb979d0 + 0x28 + (longlong)iVar1 * 0x30)) {
      cVar2 = FUN_140ba41f1(DAT_14cb979d0 + (longlong)iVar1 * 0x30,param_2);
      if (cVar2 != '\0') {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140ba41f1 FUN_140ba41f1 body=187 status=ok
// SIG undefined FUN_140ba41f1(void)

ulonglong FUN_140ba41f1(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      uVar3 = (ulonglong)uVar2;
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(*(uint *)(param_1 + 8) & 0xffffff) != 0);
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      bVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))();
      goto LAB_140ba423d;
    }
  }
  else {
    bVar1 = (*(uint *)(param_2 + 8) & 0xffffff) != 0;
LAB_140ba423d:
    uVar4 = (undefined7)(uVar3 >> 8);
    if (((byte)uVar3 & bVar1) == 1) {
      if (*(byte *)(param_1 + 0x18) == *(byte *)(param_2 + 0x18)) {
        if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000140ba426d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)**(undefined8 **)(param_1 + 8))
                            (*(undefined8 **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
          return uVar3;
        }
        uVar3 = CONCAT71(uVar4,*(int *)(param_1 + 8) == *(int *)(param_2 + 8));
      }
      else {
        uVar3 = 0;
      }
      goto LAB_140ba4279;
    }
    uVar3 = CONCAT71(uVar4,(byte)uVar3 ^ bVar1);
  }
  uVar3 = uVar3 ^ 1;
LAB_140ba4279:
  return uVar3 & 0xffffffff;
}



// FUNCTION 140ba42ac FUN_140ba42ac body=5156 status=ok
// SIG undefined FUN_140ba42ac(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140ba42ac(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  uint param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  int iVar14;
  code *pcVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  longlong *plVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_3f8 [32];
  longlong *local_3d8;
  longlong *local_3d0;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  undefined8 *local_3a0;
  longlong *local_398;
  undefined8 *local_388;
  uint local_37c;
  longlong *local_378;
  longlong *local_370;
  longlong local_368;
  int local_360;
  int local_35c;
  longlong *local_358;
  longlong local_350;
  undefined8 *local_348;
  ulonglong local_340;
  uint local_334;
  longlong *******local_330;
  ulonglong local_328;
  longlong *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong local_2f8 [10];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  longlong *******local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 uStack_1b0;
  undefined7 local_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 local_168;
  longlong *******local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  uVar4 = *(uint *)(param_2 + 0xe4);
  if (((uVar4 & 8) != 0) && (cVar2 = FUN_1400b7021(), cVar2 != '\0')) {
    if (*(char *)(param_1 + 0x10) == ')') {
      if (((uVar4 >> 0xd & 1) != 0) || (*(char *)(param_2 + 0xdf) != '\x01')) goto LAB_140ba431c;
      bVar23 = *(byte *)(param_2 + 0xe0);
    }
    else {
      if (((*(char *)(param_1 + 0x10) != '7') || ((uVar4 >> 0xd & 1) == 0)) ||
         (*(char *)(param_2 + 0xdf) != '\x01')) goto LAB_140ba431c;
      bVar23 = *(byte *)(param_2 + 0xe0);
    }
    if ((1 < bVar23) && (local_378 = *(longlong **)(param_2 + 0xc0), local_378 != (longlong *)0x0))
    {
      local_368 = CONCAT44(local_368._4_4_,1 << ((byte)param_5 & 0x1f));
      local_330 = (longlong *******)&local_160;
      local_388 = param_4;
      local_340 = param_3;
      do {
        plVar7 = (longlong *)
                 (**(code **)(*local_378 + 0x30))(local_378,*(undefined4 *)(param_1 + 0x20));
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x48) = DAT_14c9c7ca8;
          *(undefined4 *)(param_1 + 0x78) = 0xff;
          uVar4 = *(uint *)(param_2 + 0xe4);
          pcVar12 = *(code **)(*plVar7 + 0x38);
          plVar26 = plVar7;
          if (pcVar12 == FUN_144765e18) {
            plVar26 = (longlong *)plVar7[9];
            if (plVar26 == (longlong *)0x0) {
              plVar26 = (longlong *)plVar7[8];
              pcVar12 = *(code **)(*plVar26 + 0x420);
              pcVar15 = (code *)&LAB_144b24e8a;
            }
            else {
              pcVar12 = *(code **)(*plVar26 + 0x420);
              pcVar15 = (code *)&LAB_14497e108;
            }
            if (pcVar12 != pcVar15) goto LAB_140ba5648;
          }
          else {
LAB_140ba5648:
            (*pcVar12)(plVar26);
          }
          lVar27 = *plVar7;
          if (*(code **)(lVar27 + 0x100) == (code *)&LAB_144b25520) {
            bVar23 = (*(byte *)(plVar7[8] + 0x1d0) & 0x40) >> 6;
          }
          else {
            bVar23 = (**(code **)(lVar27 + 0x100))(plVar7);
            lVar27 = *plVar7;
          }
          pcVar12 = *(code **)(lVar27 + 0x38);
          plVar26 = plVar7;
          if (pcVar12 == FUN_144765e18) {
            plVar26 = (longlong *)plVar7[9];
            if (plVar26 == (longlong *)0x0) {
              plVar26 = (longlong *)plVar7[8];
              pcVar12 = *(code **)(*plVar26 + 0x420);
              if (pcVar12 != (code *)&LAB_144b24e8a) goto LAB_140ba5663;
              bVar25 = *(byte *)(plVar26 + 0x30);
            }
            else {
              pcVar12 = *(code **)(*plVar26 + 0x420);
              if (pcVar12 != (code *)&LAB_14497e108) goto LAB_140ba5663;
              bVar25 = *(byte *)(plVar26 + 0x2a);
            }
            bVar25 = (bVar25 & 0x10) >> 4;
          }
          else {
LAB_140ba5663:
            bVar25 = (*pcVar12)(plVar26);
          }
          local_370 = *(longlong **)(param_2 + 0xb8);
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_2f8[8] = 0;
          local_2f8[9] = 0;
          local_2f8[6] = 0;
          local_2f8[7] = 0;
          local_2f8[4] = 0;
          local_2f8[5] = 0;
          local_2f8[2] = 0;
          local_2f8[3] = 0;
          local_2f8[0] = 0;
          local_2f8[1] = 0;
          uVar8 = (**(code **)(*local_370 + 0x30))();
          local_3d8 = local_2f8;
          cVar2 = FUN_140ba56d1(plVar7,uVar8,local_2f8 + 2,local_2f8 + 4);
          lVar11 = local_2f8[4];
          lVar27 = local_2f8[2];
          if (cVar2 != '\0') {
            local_35c = 2 - (uint)((uVar4 >> 0xc & 1) != 0);
            if (bVar23 != 0) {
              local_35c = 1;
            }
            bVar28 = -1 < (char)uVar4;
            local_360 = 0;
            if (bVar28 && bVar25 == 0) {
              local_360 = 2 - (uint)((uVar4 & 0x40) == 0);
            }
            lVar1 = *(longlong *)(param_1 + 0x28);
            uVar4 = *(uint *)(param_2 + 0xe4);
            local_308 = DAT_14ca44d40;
            local_300 = DAT_14ca44d68;
            if (lVar1 != 0) {
              if ((uVar4 >> 0x18 & 1) != 0 && -1 < (int)param_5) {
                lVar17 = lVar1 + 0x3208;
                if (*(longlong *)(lVar1 + 0x3218) != 0) {
                  lVar17 = *(longlong *)(lVar1 + 0x3218);
                }
                if ((*(uint *)(lVar17 + (ulonglong)(param_5 >> 5) * 4) & (uint)local_368) == 0) {
                  lVar17 = lVar1 + 0x3228;
                  if (*(longlong *)(lVar1 + 0x3238) != 0) {
                    lVar17 = *(longlong *)(lVar1 + 0x3238);
                  }
                  if ((*(uint *)(lVar17 + (ulonglong)(param_5 >> 5) * 4) & (uint)local_368) == 0)
                  goto LAB_140ba45f4;
                  lVar17 = 0x31c8;
                }
                else {
                  lVar17 = 0x31d0;
                }
                local_300 = *(undefined8 *)(lVar1 + lVar17);
              }
LAB_140ba45f4:
              if (local_388 != (undefined8 *)0x0) {
                uVar5 = *(uint *)(local_388[0x43] + 0x158);
                if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar1 + 0x31c0))) {
                  puVar19 = &DAT_000031a8 + lVar1;
                  if (*(undefined1 **)(lVar1 + 0x31b8) != (undefined1 *)0x0) {
                    puVar19 = *(undefined1 **)(lVar1 + 0x31b8);
                  }
                  if ((*(uint *)(puVar19 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
                  {
                    local_308 = *(undefined8 *)
                                 (*(longlong *)(lVar1 + 0x3198) + (ulonglong)uVar5 * 8);
                  }
                }
              }
            }
            if (local_2f8[2] == 0) {
              local_328 = 0;
            }
            else {
              local_328 = (ulonglong)*(uint *)(local_2f8[2] + 0xdc);
            }
            if (local_2f8[4] == 0) {
              local_348 = (undefined8 *)0x0;
            }
            else {
              local_348 = (undefined8 *)((ulonglong)*(uint *)(local_2f8[4] + 0xdc) << 0x20);
            }
            uVar5 = 0;
            if (local_388 == (undefined8 *)0x0) {
              local_368 = 0;
            }
            else {
              local_368 = local_388[0x43];
            }
            local_170 = (longlong *)0x0;
            local_168 = 0x200000000;
            local_b0 = 0;
            local_a8 = 0;
            local_110 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_130 = 0;
            uStack_128 = 0;
            local_140 = 0;
            uStack_138 = 0;
            local_150 = 0;
            uStack_148 = 0;
            local_160 = (longlong *******)0x0;
            uStack_158 = 0;
            local_a4 = 7;
            local_98 = 0;
            local_78 = 0xffffffff;
            local_70 = 0;
            local_68 = 0;
            local_320 = plVar7;
            if (plVar7[3] != 0) {
              if ((*(byte *)(*(longlong *)(plVar7[3] + 0x28) + 0x246) & 0x10) == 0) {
                uVar5 = 0;
              }
              else {
                cVar2 = (**(code **)(*plVar7 + 0x358))(plVar7);
                uVar5 = (uint)(byte)(cVar2 * '\x02' + 1);
                uVar4 = *(uint *)(param_2 + 0xe4);
              }
            }
            local_66 = *(undefined1 *)(param_1 + 0x78);
            local_19c = uVar4 >> 0xe & 7;
            uVar3 = 0;
            local_218 = 0;
            local_228 = 0;
            uStack_220 = 0;
            local_210 = 1;
            local_1e8 = 0;
            lStack_1e0 = 0;
            local_1f8 = 0;
            lStack_1f0 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_1d8 = 0xffffffff;
            uStack_1d4 = 0xffffffff;
            uStack_1d0 = 0xffffffff;
            uStack_1cc = 0xffffffff;
            uStack_1a0 = 0;
            local_1b8 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_19f = 1;
            local_198 = 0;
            local_190 = 0;
            uStack_1b0 = (undefined1)local_378[10];
            local_1af = (undefined7)((ulonglong)local_378[10] >> 8);
            uStack_1a8 = (undefined1)local_378[0xb];
            uStack_1a7 = (undefined7)((ulonglong)local_378[0xb] >> 8);
            local_248 = 0;
            uStack_240 = 0;
            local_318 = lVar27;
            local_288 = lVar27;
            local_280 = local_2f8[3];
            local_310 = lVar11;
            local_278 = lVar11;
            local_270 = local_2f8[5];
            local_350 = local_2f8[6];
            local_268 = local_2f8[6];
            local_260 = local_2f8[7];
            local_258 = local_2f8[8];
            uStack_250 = local_2f8[9];
            local_238 = (undefined4)local_2a8;
            uStack_234 = local_2a8._4_4_;
            uStack_230 = (undefined4)uStack_2a0;
            uStack_22c = uStack_2a0._4_4_;
            local_64 = local_19c;
            FUN_144765e6c(&local_228,local_370[0x22],&local_288);
            local_358 = local_180;
            FUN_1447662e4(local_180,&local_288);
            plVar7 = local_320;
            lVar27 = local_350;
            puVar13 = &DAT_14c9c0e10;
            if (local_360 == 2) {
              puVar13 = &DAT_14c9c0e28;
            }
            puVar16 = &DAT_14c9c0d68;
            if (local_360 == 2) {
              puVar16 = &DAT_14c9c0df8;
            }
            if (!bVar28 || bVar25 != 0) {
              puVar13 = &DAT_14c9c0e40;
            }
            puVar9 = &DAT_14c9c0db0;
            if (bVar28 && bVar25 == 0) {
              puVar9 = puVar16;
            }
            if (local_35c == 1) {
              puVar9 = puVar13;
            }
            uStack_1c0 = *puVar9;
            local_1c8 = *(undefined8 *)(param_1 + 0x40);
            local_1b8 = *(undefined8 *)(param_1 + 0x48);
            if (DAT_14ca84f32 == '\x01') {
              if (*(int *)(DAT_14ca620d8 + 4) == 0) {
                uVar3 = 0;
              }
              else {
                uVar4 = (**(code **)(*local_320 + 0x490))(local_320);
                if (uVar4 < 4) {
                  uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar4 << 3) & 0x1f));
                }
                else {
                  uVar3 = 0;
                  if ((uVar4 < 7) && (DAT_14ca84f33 != '\0')) {
                    uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar4 << 3) & 0x3f));
                  }
                }
              }
            }
            local_19f = CONCAT11(uVar3,(undefined1)local_19f);
            cVar2 = (**(code **)(*plVar7 + 0x4a0))(plVar7);
            if (cVar2 == '\0') {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_1449c014c(param_1);
            }
            local_19f = CONCAT11(local_19f._1_1_,uVar3);
            if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
              FUN_144766928(&local_228);
            }
            local_37c = 0;
            FUN_144765fea(local_370,*(undefined4 *)(param_1 + 0x20),0);
            plVar26 = local_370;
            if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
               (DAT_14cafb358 == 2)) {
              uVar6 = *(undefined4 *)(param_1 + 8);
              uVar8 = (**(code **)(*local_370 + 0x30))(local_370);
              local_3d8._0_4_ = uVar6;
              FUN_1456c013a(&local_228,plVar7,uVar8,local_388);
              uVar6 = *(undefined4 *)(param_1 + 8);
              uVar8 = (**(code **)(*plVar26 + 0x30))(plVar26);
              local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,uVar6);
              FUN_1456c0257(&local_228,plVar7,uVar8);
            }
            local_334 = uVar5 + 4;
            if ((char)local_370[0x25] == -1) {
              local_334 = uVar5;
            }
            local_334 = local_334 & 0xff;
            local_67 = (char)local_370[0x25];
            if (local_318 != 0) {
              if ((local_110 & 1) == 0) {
                local_290 = (longlong *******)0x0;
                local_298 = 0x58;
                local_37c = 0;
              }
              else {
                plVar26 = local_170;
                if (local_170 == (longlong *)0x0) {
                  plVar26 = local_180;
                }
                local_298 = *plVar26;
                uVar20 = *(ulonglong *)(local_298 + 0x30);
                if ((uVar20 & 1) != 0) {
                  uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                }
                iVar14 = *(int *)(local_298 + 0x28);
                iVar22 = 0;
                if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                  lVar11 = 0;
                  iVar22 = 0;
                  do {
                    iVar22 = iVar22 + (uint)*(ushort *)(uVar20 + 2 + lVar11);
                    lVar11 = lVar11 + 0x18;
                  } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar11);
                }
                iVar18 = iVar14 + 0xe;
                if (-1 < iVar14 + 7) {
                  iVar18 = iVar14 + 7;
                }
                local_290 = (longlong *******)&local_160;
                if (0x50 < local_110._2_2_) {
                  local_290 = local_160;
                }
                local_37c = iVar22 + (iVar18 >> 3) +
                                     (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar14)
                                     * 8 + 7U & 0xfffffff8;
              }
              local_3c0 = &local_298;
              local_3c8 = &local_308;
              local_3d0 = plVar7;
              local_3d8 = local_378;
              FUN_14474308c(local_318,*(undefined8 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x20));
            }
            if (local_310 != 0) {
              uVar20 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
              uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
              uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar20 < 0x100000000000000) {
                local_298 = 0x58;
                local_290 = (longlong *******)0x0;
              }
              else {
                plVar26 = local_170;
                if (local_170 == (longlong *)0x0) {
                  plVar26 = local_180;
                }
                local_298 = plVar26[(uVar20 >> 0x38) - 1];
                uVar20 = *(ulonglong *)(local_298 + 0x30);
                if ((uVar20 & 1) != 0) {
                  uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                }
                iVar14 = *(int *)(local_298 + 0x28);
                iVar22 = 0;
                if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                  lVar27 = 0;
                  iVar22 = 0;
                  do {
                    iVar22 = iVar22 + (uint)*(ushort *)(uVar20 + 2 + lVar27);
                    lVar27 = lVar27 + 0x18;
                  } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar27);
                }
                iVar18 = iVar14 + 0xe;
                if (-1 < iVar14 + 7) {
                  iVar18 = iVar14 + 7;
                }
                local_290 = (longlong *******)&local_160;
                if (0x50 < local_110._2_2_) {
                  local_290 = local_160;
                }
                local_290 = (longlong *******)((longlong)(int)local_37c + (longlong)local_290);
                lVar27 = local_350;
                local_37c = ((iVar18 >> 3) +
                             (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar14) * 8 +
                             iVar22 + 7U & 0xfffffff8) + local_37c;
              }
              local_3c0 = &local_298;
              local_3c8 = &local_308;
              local_3d0 = plVar7;
              local_3d8 = local_378;
              FUN_14474308c(local_310,*(undefined8 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x20),local_388);
            }
            if (lVar27 != 0) {
              uVar20 = (ulonglong)(local_110 & 0x1f) - (ulonglong)(local_110 >> 1 & 5);
              uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
              uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar20 < 0x100000000000000) {
                local_298 = 0x58;
                local_290 = (longlong *******)0x0;
              }
              else {
                if (local_170 != (longlong *)0x0) {
                  local_358 = local_170;
                }
                if (0x50 < local_110._2_2_) {
                  local_330 = local_160;
                }
                local_298 = local_358[(uVar20 >> 0x38) - 1];
                local_290 = (longlong *******)((longlong)(int)local_37c + (longlong)local_330);
              }
              local_3c0 = &local_298;
              local_3c8 = &local_308;
              local_3d0 = plVar7;
              local_3d8 = local_378;
              FUN_14474308c(lVar27,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                            local_388);
            }
            plVar7 = (longlong *)(longlong)*(int *)(param_2 + 0xb0);
            if (0 < (longlong)plVar7) {
              local_348 = (undefined8 *)((ulonglong)local_348 | local_328);
              plVar26 = (longlong *)0x0;
              uVar20 = local_340;
              local_378 = plVar7;
              do {
                if ((uVar20 >> ((ulonglong)plVar26 & 0x3f) & 1) != 0) {
                  lVar27 = *(longlong *)(param_2 + 0xa8);
                  if (*(longlong *)(param_2 + 0xa8) == 0) {
                    lVar27 = param_2;
                  }
                  plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
                  uVar4 = *(uint *)(lVar27 + 0x7c + (longlong)plVar26 * 0xa8);
                  bVar25 = (byte)(uVar4 >> 8);
                  bVar24 = (bVar25 & 8) + (char)local_334;
                  bVar23 = bVar24;
                  if (((uVar4 >> 0xc & 1) != 0) &&
                     (bVar23 = bVar24 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
                    bVar23 = bVar24;
                  }
                  lVar27 = lVar27 + (longlong)plVar26 * 0xa8;
                  if (local_2f8[2] == 0) {
                    uVar4 = 0;
                  }
                  else {
                    if ((*(byte *)(plVar7 + 0xe) & 1) == 0) {
                      local_290 = (longlong *******)0x0;
                      local_298 = 0x58;
                      uVar4 = 0;
                    }
                    else {
                      plVar10 = (longlong *)plVar7[2];
                      if ((longlong *)plVar7[2] == (longlong *)0x0) {
                        plVar10 = plVar7;
                      }
                      local_298 = *plVar10;
                      uVar20 = *(ulonglong *)(local_298 + 0x30);
                      if ((uVar20 & 1) != 0) {
                        uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                      }
                      iVar14 = 0;
                      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                        lVar11 = 0;
                        iVar14 = 0;
                        do {
                          iVar14 = iVar14 + (uint)*(ushort *)(uVar20 + 2 + lVar11);
                          lVar11 = lVar11 + 0x18;
                        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar11);
                      }
                      iVar22 = *(int *)(local_298 + 0x28);
                      iVar18 = iVar22 + 0xe;
                      if (-1 < iVar22 + 7) {
                        iVar18 = iVar22 + 7;
                      }
                      if (*(ushort *)((longlong)plVar7 + 0x72) < 0x51) {
                        local_290 = (longlong *******)(plVar7 + 4);
                      }
                      else {
                        local_290 = (longlong *******)plVar7[4];
                      }
                      uVar4 = iVar14 + (iVar18 >> 3) +
                                       (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) +
                                       iVar22) * 8 + 7U & 0xfffffff8;
                    }
                    local_398 = plVar7 + 0xf;
                    local_3a0 = &local_298;
                    local_3a8 = &local_308;
                    local_3c0 = local_388;
                    local_3c8 = (undefined8 *)
                                CONCAT44(local_3c8._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_3d8 = local_370;
                    local_3d0 = (longlong *)((ulonglong)local_3d0 & 0xffffffffffffff00);
                    local_3b8 = (undefined8 *)param_2;
                    local_3b0 = (longlong *)lVar27;
                    FUN_1456bf974(local_2f8[2],*(undefined8 *)(local_2f8[3] + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  if (local_2f8[4] != 0) {
                    uVar20 = (ulonglong)(*(ushort *)(plVar7 + 0xe) & 0xf) -
                             (ulonglong)(*(ushort *)(plVar7 + 0xe) >> 1 & 5);
                    uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
                    uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                    if (uVar20 < 0x100000000000000) {
                      local_298 = 0x58;
                      local_290 = (longlong *******)0x0;
                    }
                    else {
                      plVar10 = (longlong *)plVar7[2];
                      if ((longlong *)plVar7[2] == (longlong *)0x0) {
                        plVar10 = plVar7;
                      }
                      local_298 = plVar10[(uVar20 >> 0x38) - 1];
                      uVar20 = *(ulonglong *)(local_298 + 0x30);
                      if ((uVar20 & 1) != 0) {
                        uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                      }
                      iVar14 = 0;
                      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                        lVar11 = 0;
                        iVar14 = 0;
                        do {
                          iVar14 = iVar14 + (uint)*(ushort *)(uVar20 + 2 + lVar11);
                          lVar11 = lVar11 + 0x18;
                        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar11);
                      }
                      iVar22 = *(int *)(local_298 + 0x28);
                      iVar18 = iVar22 + 0xe;
                      if (-1 < iVar22 + 7) {
                        iVar18 = iVar22 + 7;
                      }
                      if (*(ushort *)((longlong)plVar7 + 0x72) < 0x51) {
                        plVar10 = plVar7 + 4;
                      }
                      else {
                        plVar10 = (longlong *)plVar7[4];
                      }
                      local_290 = (longlong *******)((longlong)(int)uVar4 + (longlong)plVar10);
                      uVar4 = ((iVar18 >> 3) +
                               (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar22) * 8 +
                               iVar14 + 7U & 0xfffffff8) + uVar4;
                    }
                    local_398 = plVar7 + 0xf;
                    local_3a0 = &local_298;
                    local_3a8 = &local_308;
                    local_3c0 = local_388;
                    local_3c8 = (undefined8 *)
                                CONCAT44(local_3c8._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_3d8 = local_370;
                    local_3d0 = (longlong *)((ulonglong)local_3d0 & 0xffffffffffffff00);
                    local_3b8 = (undefined8 *)param_2;
                    local_3b0 = (longlong *)lVar27;
                    FUN_1456bf974(local_2f8[4],*(undefined8 *)(local_2f8[5] + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  if (local_2f8[6] != 0) {
                    uVar20 = (ulonglong)(*(ushort *)(plVar7 + 0xe) & 0x1f) -
                             (ulonglong)(*(ushort *)(plVar7 + 0xe) >> 1 & 5);
                    uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
                    uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                    if (uVar20 < 0x100000000000000) {
                      local_298 = 0x58;
                      local_290 = (longlong *******)0x0;
                    }
                    else {
                      plVar10 = (longlong *)plVar7[2];
                      if ((longlong *)plVar7[2] == (longlong *)0x0) {
                        plVar10 = plVar7;
                      }
                      if (*(ushort *)((longlong)plVar7 + 0x72) < 0x51) {
                        plVar21 = plVar7 + 4;
                      }
                      else {
                        plVar21 = (longlong *)plVar7[4];
                      }
                      local_298 = plVar10[(uVar20 >> 0x38) - 1];
                      local_290 = (longlong *******)((longlong)(int)uVar4 + (longlong)plVar21);
                    }
                    local_398 = plVar7 + 0xf;
                    local_3a0 = &local_298;
                    local_3a8 = &local_308;
                    local_3c0 = local_388;
                    local_3c8 = (undefined8 *)
                                CONCAT44(local_3c8._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_3d8 = local_370;
                    local_3d0 = (longlong *)((ulonglong)local_3d0 & 0xffffffffffffff00);
                    local_3b8 = (undefined8 *)param_2;
                    local_3b0 = (longlong *)lVar27;
                    FUN_1456bf974(local_2f8[6],*(undefined8 *)(local_2f8[7] + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  uVar20 = local_340;
                  uVar4 = 0;
                  local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
                  bVar24 = DAT_14ca96500;
                  if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x000140ba5612:
                    if (bVar24 != 0) {
LAB_140ba52b0:
                      uVar5 = *(uint *)(lVar27 + 0x54) & 7;
                      if (uVar5 == 0) {
                        uVar4 = *(uint *)(local_368 + 0x15c);
                        uVar5 = *(uint *)(local_368 + 0x204) & 0x7fffffff;
                      }
                      else {
                        if ((uVar5 != 1) || (*(longlong *)(param_1 + 0x28) == 0))
                        goto LAB_140ba52e6;
                        uVar4 = *(uint *)(lVar27 + 0xa0) | 0x80000000;
                        uVar5 = *(uint *)(lVar27 + 0xa4) | 0x80000000;
                      }
                      local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar5);
                    }
                  }
                  else if (((2 < *(int *)(param_1 + 0x20)) &&
                           (lVar11 = (ulonglong)DAT_14ca85550 * 0x3c,
                           *(longlong *)(&DAT_14ca814b0 + lVar11) != DAT_14ca81490)) &&
                          (DAT_14ca85550 != 0xc)) {
                    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar11 + 3) & 0x10) != 0) {
                      bVar24 = *(byte *)((longlong)&DAT_14ca814c8 + lVar11 + 3) & 0x20;
                      goto joined_r0x000140ba5612;
                    }
                    goto LAB_140ba52b0;
                  }
LAB_140ba52e6:
                  if (local_368 == 0) {
                    uVar6 = 0xffffffff;
                  }
                  else {
                    uVar6 = *(undefined4 *)(local_368 + 0x158);
                  }
                  local_298 = CONCAT44(uVar6,uVar4);
                  local_3b0 = &local_288;
                  local_3b8 = &local_228;
                  local_3c0 = (undefined8 *)CONCAT71(local_3c0._1_7_,bVar23 | bVar25 & 0x20);
                  local_3c8 = local_348;
                  local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,local_360);
                  local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,local_35c);
                  local_3a8 = plVar7;
                  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                            (*(longlong **)(param_1 + 0x30),param_2,(ulonglong)plVar26 & 0xffffffff,
                             &local_298);
                  plVar7 = local_378;
                }
                plVar26 = (longlong *)((longlong)plVar26 + 1);
              } while (plVar26 != plVar7);
            }
            if (lStack_1e0 != 0) {
              FUN_140021284();
            }
            if (local_1e8 != 0) {
              FUN_140021284();
            }
            if (lStack_1f0 != 0) {
              FUN_140021284();
            }
            if (local_1f8 != 0) {
              FUN_140021284();
            }
            if (local_b0 != 0) {
              FUN_1400020a8();
            }
            if ((0x50 < local_110._2_2_) && (local_160 != (longlong *******)0x0)) {
              FUN_1400020a8();
            }
            local_110 = local_110 & 0xffff;
            local_160 = (longlong *******)0x0;
            if (local_170 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
        }
        local_378 = (longlong *)
                    (**(code **)(*local_378 + 0x38))(local_378,*(undefined4 *)(param_1 + 0x20));
      } while (local_378 != (longlong *)0x0);
    }
  }
LAB_140ba431c:
  if ((local_60 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba56d1 FUN_140ba56d1 body=635 status=ok
// SIG undefined FUN_140ba56d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ba56d1(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  wchar_t *local_190;
  undefined4 local_188;
  undefined4 local_180;
  code *local_178;
  code *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0 [12];
  undefined4 auStack_60 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  memset(local_c0,0,0x90);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c49d0) {
    FUN_144b3d300(&DAT_14c9c49d0);
    if (DAT_14c9c49d0 == -1) {
      FUN_1456cbdfe();
      local_150 = &LAB_14712ac08;
      local_158 = &LAB_14712ac0c;
      local_160 = &LAB_14714d7d2;
      local_168 = FUN_14175f93a;
      local_170 = FUN_14714d7d6;
      local_178 = FUN_14714d7fe;
      local_190 = L"Main";
      local_198 = L"/Engine/Private/DepthOnlyVertexShader.usf";
      local_140 = 0;
      local_148 = 0x108;
      local_180 = 1;
      local_188 = 0;
      FUN_140db5666(&DAT_14c9c4928,2,&DAT_14c9c48c0,L"TDepthOnlyVS<false>");
      _DAT_14c9c4928 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcb454);
      _Init_thread_footer(&DAT_14c9c49d0);
    }
  }
  local_c0[DAT_14c9c4970] = &DAT_14c9c4928;
  auStack_60[DAT_14c9c4970] = 0;
  uVar2 = (**(code **)(*param_1 + 0x178))(param_1);
  FUN_1447e4184(param_1,0,uVar2 ^ 1);
  FUN_140ba594e();
  local_c0[DAT_14c9c4ce8] = &DAT_14c9c4ca0;
  auStack_60[DAT_14c9c4ce8] = 0;
  local_c8 = &DAT_14c9c5020;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,&local_c8,param_2);
  if (cVar1 != '\0') {
    if (lStack_130 != 0) {
      *param_5 = lStack_130;
      param_5[1] = local_138;
    }
    if (local_128 != 0) {
      *param_3 = local_128;
      param_3[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_4 = lStack_110;
      param_4[1] = local_138;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba594e FUN_140ba594e body=284 status=ok
// SIG undefined FUN_140ba594e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140ba594e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c4d48) {
    FUN_144b3d300(&DAT_14c9c4d48);
    if (DAT_14c9c4d48 == -1) {
      FUN_14577f9fe();
      FUN_140db5666(&DAT_14c9c4ca0,2,&DAT_14c9c4c38,L"FDigistructStencilEffectPS",
                    L"/Engine/Private/DepthOnlyPixelShader.usf",L"Main",3,1,FUN_14714d9e4,
                    FUN_14714d9bc,FUN_14175fa08,&LAB_14714d9b8,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14c9c4ca0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcb478);
      _Init_thread_footer(&DAT_14c9c4d48);
    }
  }
  return &DAT_14c9c4ca0;
}



// FUNCTION 140ba5a6a FUN_140ba5a6a body=78 status=ok
// SIG undefined FUN_140ba5a6a(void)

void FUN_140ba5a6a(longlong *param_1,uint param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_3 + 0x10);
    uVar2 = 0;
    do {
      (**(code **)(*param_1 + 0x50))
                (param_1,puVar1[-2],*puVar1,*(undefined8 *)(param_4 + uVar2 * 8));
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 3;
    } while (param_2 != uVar2);
  }
  return;
}



// FUNCTION 140ba5ab8 FUN_140ba5ab8 body=278 status=ok
// SIG undefined FUN_140ba5ab8(void)

void FUN_140ba5ab8(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (DAT_14c872bd8 == '\x01') {
    if (*(int *)(param_2 + 0x10) == 0x10) {
      lVar6 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar6 = 0;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
      lVar5 = param_1 + 0x58;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x60);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x68) - 1U &
                               (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
      if (iVar4 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == lVar6) {
            LeaveCriticalSection(lpCriticalSection);
            if (lVar5 != 0) {
              plVar2 = *(longlong **)(lVar5 + 8);
              plVar3 = *(longlong **)(lVar5 + 0x10);
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
              }
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x10))(plVar2,param_3,*param_4);
              }
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
            goto LAB_140ba5acf;
          }
          iVar4 = *(int *)(lVar5 + 0x18);
        } while (iVar4 != -1);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_140ba5acf:
  *param_4 = 0;
  return;
}



// FUNCTION 140ba5bce FUN_140ba5bce body=286 status=ok
// SIG undefined FUN_140ba5bce(void)

undefined8 FUN_140ba5bce(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140ba5ce6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ba5ce6;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140ba5ce6:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ba5c93;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140ba5c93;
    }
  }
  uVar6 = 0;
LAB_140ba5c93:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba5cee FUN_140ba5cee body=320 status=ok
// SIG undefined FUN_140ba5cee(void)

void FUN_140ba5cee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  PSRWLOCK local_40;
  int local_38;
  longlong local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xcc) != 0) {
    uVar3 = *(uint *)(param_1 + 200);
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if ((lVar5 != 0) &&
         (((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0xcc) && (param_2 != 0)) &&
          ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
        cVar4 = FUN_1418f7c5e();
        if (cVar4 != '\0') {
          FUN_1402815f4(param_1,&local_50);
          lVar5 = *(longlong *)(local_50 + 0xb0);
          local_40 = (PSRWLOCK)(lVar5 + 0x88);
          local_38 = 1;
          AcquireSRWLockExclusive(local_40);
          local_28 = 0;
          local_30 = lVar5;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)local_48 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
          FUN_14428477a(param_1,&local_40);
          if (local_38 == 0) {
            ReleaseSRWLockShared(local_40);
          }
          else {
            ReleaseSRWLockExclusive(local_40);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba5e30 FUN_140ba5e30 body=201 status=ok
// SIG undefined FUN_140ba5e30(void)

void FUN_140ba5e30(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((char)param_1[4] == '\0') {
    if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
        UNRECOVERED_JUMPTABLE = (code *)*param_2;
        plVar4 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar4 = (longlong *)param_2[2];
        }
        uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x000140ba5ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar2,lVar3);
        return;
      }
    }
  }
  else {
    lVar3 = (longlong)*(int *)(*(longlong *)param_1 + 0x10);
    if (lVar3 != 0) {
      lVar5 = *(longlong *)(*(longlong *)param_1 + 8);
      lVar3 = lVar3 * 0x18;
      do {
        FUN_140ba5e30(lVar5,param_2);
        lVar5 = lVar5 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 140ba5f0a FUN_140ba5f0a body=2697 status=ok
// SIG undefined FUN_140ba5f0a(void)

void FUN_140ba5f0a(longlong param_1,longlong *param_2,longlong ***param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  int iVar11;
  undefined8 uVar12;
  void *pvVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint *puVar16;
  longlong **pplVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong *plVar20;
  longlong **pplVar21;
  uint *puVar22;
  undefined8 *puVar23;
  longlong ***ppplVar24;
  bool bVar25;
  undefined1 auStack_f8 [32];
  longlong ***local_d8;
  longlong ***local_d0;
  longlong ***local_c8;
  longlong **local_c0;
  undefined1 local_b5;
  int local_b4;
  void *local_b0;
  uint local_a8;
  longlong local_a0;
  undefined4 local_98;
  longlong **local_90;
  longlong local_88;
  undefined8 local_80;
  longlong ***local_78;
  longlong *plStack_70;
  longlong **local_68;
  longlong *plStack_60;
  longlong **local_58;
  longlong ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(longlong *)(param_1 + 0x228) == 0) || (*(longlong *)(param_1 + 0x230) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x230) + 8) < 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  plVar14 = (longlong *)(param_1 + -8);
  (**(code **)(*param_2 + 0x68))(param_2,&local_58);
  uVar12 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_140ba69b6(&local_b0,uVar12,&local_58);
  if (((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x30))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x220) == 0) {
      plVar20 = (longlong *)0x0;
    }
    else {
      plVar20 = *(longlong **)(param_1 + 0x218);
    }
    (**(code **)(*plVar20 + 0x58))(plVar20,&local_b0);
  }
  cVar6 = (**(code **)(*plVar14 + 0x80))(plVar14,param_2,&local_b4,&local_b0);
  if (cVar6 == '\0') goto LAB_140ba691a;
  if (local_b4 == 1) {
    uVar7 = (**(code **)(*param_2 + 8))(param_2);
    local_d8 = param_3;
    (**(code **)(*plVar14 + 0xa0))(plVar14,&local_58,uVar7,&local_b0);
    pplVar17 = local_58;
    if ((int)local_50 < 2) {
      (*(code *)(*param_3)[8])(param_3,1);
      pplVar17 = local_58;
    }
LAB_140ba600c:
    if (pplVar17 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_b4 == 2) {
      cVar6 = FUN_1489cda40(param_1 + 0x158,&local_b0,param_2,param_3);
      if (cVar6 != '\0') goto LAB_140ba6016;
    }
    else {
      puVar18 = *(undefined8 **)(param_1 + 0x208);
      if (((puVar18[2] != 0) && (puVar18[3] != 0)) && (0 < *(int *)(puVar18[3] + 8))) {
        if ((DAT_14cb90d40 != (longlong *)0x0 && DAT_14cb90d48 != 0) &&
           (cVar6 = (**(code **)(*DAT_14cb90d40 + 0x30))(), cVar6 != '\0')) {
          plVar14 = DAT_14cb90d40;
          if (DAT_14cb90d48 == 0) {
            plVar14 = (longlong *)0x0;
          }
          cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,param_2,param_3,&local_b0);
          if (cVar6 != '\0') goto LAB_140ba6016;
        }
        if (*(char *)(puVar18 + 0x12) == '\0') {
          if ((DAT_14c86a9f8 != '\x01') ||
             (iVar11 = *(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0xc60), iVar11 == 2)) {
LAB_140ba62ab:
            if (param_3 != (longlong ***)0x0 && param_2 != (longlong *)0x0) {
              AcquireSRWLockExclusive((PSRWLOCK)(puVar18 + 0xe));
              plVar14 = (longlong *)FUN_14001cc68(0x28,0x10);
              plVar14[1] = (longlong)&DAT_100000001;
              *plVar14 = (longlong)&PTR_FUN_14b453ae0;
              ppplVar24 = (longlong ***)(plVar14 + 2);
              plVar14[2] = 0;
              plVar14[3] = 0;
              plVar14[4] = (longlong)param_3;
              local_78 = ppplVar24;
              plStack_70 = plVar14;
              FUN_14577fb48(&local_78,ppplVar24);
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
              }
              local_68 = (longlong **)ppplVar24;
              plStack_60 = plVar14;
              uVar7 = (**(code **)(*param_2 + 8))(param_2);
              local_58 = (longlong **)&local_88;
              local_88 = CONCAT44(local_88._4_4_,uVar7);
              local_50 = &local_68;
              FUN_14577fcce(puVar18 + 4,&local_80);
              plVar14 = plStack_60;
              if (plStack_60 != (longlong *)0x0) {
                LOCK();
                plVar20 = plStack_60 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*plStack_60)(plStack_60);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
              plVar14 = plStack_70;
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                plVar20 = plStack_70 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*plStack_70)(plStack_70);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
              ReleaseSRWLockExclusive((PSRWLOCK)(puVar18 + 0xe));
              local_78 = (longlong ***)0x0;
              local_80 = 0;
              local_b5 = FUN_140ba97ca(&local_78,&local_80,param_2);
              plVar14 = (longlong *)puVar18[1];
              bVar4 = true;
              if (plVar14 == (longlong *)0x0) {
LAB_140ba63fd:
                pplVar17 = (longlong **)0x0;
                plVar14 = (longlong *)0x0;
              }
              else {
                iVar11 = (int)plVar14[1];
                do {
                  if (iVar11 == 0) goto LAB_140ba63fd;
                  LOCK();
                  iVar5 = (int)plVar14[1];
                  bVar25 = iVar11 == iVar5;
                  if (bVar25) {
                    *(int *)(plVar14 + 1) = iVar11 + 1;
                    iVar5 = iVar11;
                  }
                  iVar11 = iVar5;
                  UNLOCK();
                } while (!bVar25);
                pplVar17 = (longlong **)*puVar18;
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
                LOCK();
                plVar20 = plVar14 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
                bVar4 = false;
              }
              uVar7 = (**(code **)(*param_2 + 8))(param_2);
              puVar18 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar16 = (uint *)*puVar18;
              if (puVar16 != (uint *)0x0) goto LAB_140ba64b2;
              while( true ) {
                uVar19 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar19 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar19 | 1;
                  __tlregdtor(&LAB_143e8d541);
                }
                lVar3 = *(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar15 = *(undefined4 **)(lVar3 + 0x310);
                *(undefined8 *)(lVar3 + 0x310) = 0;
                if (puVar15 == (undefined4 *)0x0) {
                  puVar15 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar15 = 0xffffffff;
                *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
                puVar15[0x12] = 0;
                *puVar18 = puVar15;
                FUN_140217a48(puVar18);
                puVar16 = (uint *)*puVar18;
LAB_140ba64b2:
                puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar22 = (uint *)(puVar23 + 0x1e);
                uVar19 = puVar16[0x12];
                if (puVar22 <= puVar16 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
                  LOCK();
                  uVar2 = *puVar16;
                  *puVar16 = *puVar16 + uVar19 + 1;
                  UNLOCK();
                  if ((uVar2 ^ uVar19) != 0xffffffff) break;
                  puVar16 = (uint *)*puVar18;
                  *puVar16 = 0xffffffff;
                  *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
                  puVar16[0x12] = 0;
                  *puVar18 = puVar16;
                  puVar23 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
                  puVar22 = (uint *)(puVar23 + 0x1e);
                  uVar19 = 0;
                  if (puVar22 <= puVar16 + 0x4000) {
                    uVar19 = 1;
                    goto LAB_140ba6534;
                  }
                }
              }
              uVar19 = uVar19 + 1;
LAB_140ba6534:
              *(uint **)(puVar16 + 0x10) = puVar22;
              puVar16[0x12] = uVar19;
              FUN_1447247dc(puVar23,0);
              pvVar13 = local_b0;
              *puVar23 = &PTR_FUN_14b453af8;
              if (!bVar4) {
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
              }
              local_68 = (longlong **)0x0;
              plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,local_a8);
              local_58 = pplVar17;
              local_50 = (longlong ***)plVar14;
              if ((longlong)(int)local_a8 == 0) {
                plStack_60 = (longlong *)(ulonglong)local_a8;
              }
              else {
                FUN_1446dd670(&local_68,local_a8,0);
                memcpy(local_68,pvVar13,(longlong)(int)local_a8 * 2);
              }
              local_c0 = (longlong **)&local_58;
              local_c8 = &local_68;
              local_d8 = (longlong ***)CONCAT44(local_d8._4_4_,uVar7);
              local_d0 = param_3;
              FUN_14577fbec(puVar23 + 0x15,local_b5,local_78,local_80);
              if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
              }
              puVar23[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar23[9] = puVar23;
              puVar23[10] = puVar23;
              lVar3 = *(longlong *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
              if (lVar3 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined8 *)(lVar3 + 0x30);
              }
              puVar23[0xf] = uVar12;
              puVar23[0x10] = 0xc80000527800b400;
              *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
              if (puVar23 == (undefined8 *)0x0) {
                local_58 = (longlong **)CONCAT71(local_58._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
                UNLOCK();
                local_58 = (longlong **)CONCAT71(local_58._1_7_,1);
                FUN_1447439e4(puVar23);
                LOCK();
                piVar1 = (int *)(puVar23 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar23)(puVar23,1);
                }
              }
              if (!bVar4) {
                LOCK();
                plVar20 = plVar14 + 1;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)*plVar20 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
            }
            goto LAB_140ba6016;
          }
          if (iVar11 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_140ba62ab;
          }
        }
        local_80 = 0;
        local_88 = 0;
        uVar7 = FUN_140ba97ca(&local_80,&local_88,param_2);
        local_68 = (longlong **)0x0;
        plStack_60 = (longlong *)0x0;
        local_90 = (longlong **)0x0;
        local_58 = (longlong **)0x14b454200;
        local_50 = (longlong ***)CONCAT35(local_50._5_3_,0xc);
        uVar8 = FUN_14001a6c0(&local_58,1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        FUN_1402c9134(&DAT_14c874628,uVar8,&local_58,1);
        if ((DAT_14cb90c60 == (longlong *)0x0 || DAT_14cb90c68 == 0) ||
           (cVar6 = (**(code **)(*DAT_14cb90c60 + 0x30))(), cVar6 == '\0')) {
LAB_140ba61b8:
          local_78 = (longlong ***)0x0;
          plStack_70 = (longlong *)0x0;
LAB_140ba61c3:
          uVar12 = local_80;
          local_d0 = &local_90;
          local_d8 = &local_68;
          cVar6 = FUN_140ba7c02(&local_b0,local_80,local_88,uVar7);
          if (cVar6 != '\0') {
            pplVar21 = (longlong **)(longlong)(int)plStack_60;
            ppplVar24 = &local_68;
            pplVar17 = local_90;
            goto LAB_140ba6209;
          }
          pplVar17 = *param_3;
          uVar12 = 1;
        }
        else {
          plVar14 = DAT_14cb90c60;
          if (DAT_14cb90c68 == 0) {
            plVar14 = (longlong *)0x0;
          }
          puVar18 = (undefined8 *)(**(code **)(*plVar14 + 0x58))();
          if (puVar18 == (undefined8 *)0x0) goto LAB_140ba61b8;
          (**(code **)*puVar18)(puVar18,&local_78,&local_b0);
          if ((local_78 == (longlong ***)0x0) ||
             (pplVar21 = (longlong **)(longlong)*(int *)(local_78 + 1), uVar12 = local_80,
             ppplVar24 = local_78, pplVar17 = pplVar21, pplVar21 == (longlong **)0x0))
          goto LAB_140ba61c3;
LAB_140ba6209:
          local_90 = pplVar17;
          local_d8 = param_3;
          FUN_140ba9b16(local_90,pplVar21,uVar12,uVar7);
          iVar11 = *(int *)(ppplVar24 + 1);
          pplVar17 = *ppplVar24;
          pvVar13 = (void *)(*(code *)(*param_3)[1])(param_3,(longlong)iVar11);
          memcpy(pvVar13,pplVar17,(longlong)iVar11);
          if ((local_78 != (longlong ***)0x0) && (local_78[2] != (longlong **)0x0)) {
            (*(code *)(*param_3)[3])(param_3);
          }
          pplVar17 = *param_3;
          uVar12 = 0;
        }
        (*(code *)pplVar17[8])(param_3,uVar12);
        plVar14 = plStack_70;
        pplVar17 = local_68;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar20 = plStack_70 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            pplVar17 = local_68;
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              pplVar17 = local_68;
            }
          }
        }
        goto LAB_140ba600c;
      }
    }
LAB_140ba691a:
    (*(code *)(*param_3)[8])(param_3,1);
  }
LAB_140ba6016:
  FUN_1447a1747(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba69b6 FUN_140ba69b6 body=318 status=ok
// SIG undefined FUN_140ba69b6(void)

/* WARNING: Removing unreachable block (ram,0x000140ba6ad5) */

longlong * FUN_140ba69b6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140ba6af5(&local_50);
  if (&local_50 == param_1) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
  }
  if ((int)param_3[1] != 0) {
    uVar3 = 0;
    do {
      FUN_140ba6af5(&local_50,*(undefined8 *)(*param_3 + uVar3 * 8));
      iVar1 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
        FUN_1447a1bd6(param_1 + 2,iVar1);
      }
      lVar2 = param_1[2];
      lVar4 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar4) = 0;
      *(longlong *)(lVar2 + lVar4) = local_50;
      local_50 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_48;
      *(undefined4 *)(lVar2 + 0xc + lVar4) = local_48._4_4_;
      local_48 = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 1));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba6af5 FUN_140ba6af5 body=589 status=ok
// SIG undefined FUN_140ba6af5(void)

longlong * FUN_140ba6af5(longlong *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_143e8d3fa();
  iVar8 = (int)param_1[1];
  lVar3 = (longlong)iVar8;
  puVar5 = (undefined2 *)*param_1;
  puVar2 = puVar5;
  if (lVar3 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  lVar9 = 7;
  lVar10 = 0;
  while( true ) {
    uVar11 = *(ushort *)((longlong)puVar2 + lVar10);
    uVar4 = (ulonglong)uVar11;
    uVar6 = *(ushort *)((longlong)&DAT_149e41626 + lVar10);
    if (uVar11 != uVar6) break;
    if (uVar11 == 0) goto LAB_140ba6d1c;
LAB_140ba6b63:
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB_140ba6d1c;
    lVar10 = lVar10 + 2;
  }
  if ((uVar6 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar12 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar12]) goto LAB_140ba6b63;
  }
  if (uVar11 != uVar6) {
    lVar9 = 8;
    lVar10 = 0;
    goto LAB_140ba6bac;
  }
  goto LAB_140ba6d1c;
LAB_140ba6bac:
  uVar11 = *(ushort *)((longlong)puVar2 + lVar10);
  uVar4 = (ulonglong)uVar11;
  uVar6 = *(ushort *)((longlong)&DAT_149e41636 + lVar10);
  if (uVar11 != uVar6) {
    if ((uVar6 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar12 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar12]) goto LAB_140ba6bc5;
    }
    if (uVar11 != uVar6) {
      uVar4 = lVar3 * 2;
      goto LAB_140ba6c02;
    }
    goto LAB_140ba6d1c;
  }
  if (uVar11 == 0) goto LAB_140ba6d1c;
LAB_140ba6bc5:
  lVar9 = lVar9 + -1;
  if (lVar9 == 0) goto LAB_140ba6d1c;
  lVar10 = lVar10 + 2;
  goto LAB_140ba6bac;
  while (uVar12 = uVar4 - 2, lVar9 = uVar4 - 2, uVar4 = uVar12,
        *(short *)((longlong)puVar5 + lVar9) != 0x3f) {
LAB_140ba6c02:
    if (uVar4 == 0) goto LAB_140ba6c98;
  }
  iVar1 = (int)(uVar12 >> 1);
  if (iVar1 != -1) {
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    if (iVar1 < iVar7) {
      iVar7 = iVar1;
    }
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    FUN_14006620a(&local_48,puVar2,iVar7);
    if (&local_48 == param_1) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 1) = local_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
    }
    puVar5 = (undefined2 *)*param_1;
    iVar8 = (int)param_1[1];
    lVar3 = (longlong)iVar8;
  }
LAB_140ba6c98:
  uVar4 = lVar3 * 2;
  do {
    if (uVar4 == 0) goto LAB_140ba6d1c;
    uVar12 = uVar4 - 2;
    lVar3 = uVar4 - 2;
    uVar4 = uVar12;
  } while (*(short *)((longlong)puVar5 + lVar3) != 0x23);
  iVar1 = (int)(uVar12 >> 1);
  if (iVar1 != -1) {
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      puVar5 = &DAT_149dfb77a;
      iVar7 = 0;
    }
    if (iVar1 < iVar7) {
      iVar7 = iVar1;
    }
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    FUN_14006620a(&local_48,puVar5,iVar7);
    if (&local_48 == param_1) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_48;
      *(undefined4 *)(param_1 + 1) = local_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
    }
  }
LAB_140ba6d1c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ba6d44 FUN_140ba6d44 body=2393 status=ok
// SIG undefined FUN_140ba6d44(void)

longlong *
FUN_140ba6d44(longlong *param_1,longlong *param_2,uint param_3,longlong *param_4,longlong param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  uint local_164;
  longlong *local_160;
  ulonglong local_158;
  longlong *local_150;
  longlong local_148 [2];
  longlong local_138 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = 0xffffffff;
  local_178 = (undefined8 *)((ulonglong)local_178 & 0xffffffff00000000);
  local_164 = param_3;
  iVar11 = FUN_1447ee042(param_4,L"Texture2D\'",10,1);
  local_170 = 0xffffffff;
  local_178 = (undefined8 *)((ulonglong)local_178 & 0xffffffff00000000);
  iVar12 = FUN_1447ee042(param_4,L"TextureRenderTarget2D\'",0x16,1);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = *param_4;
  iVar13 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar13 = 0;
  }
  uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar13);
  FUN_14475bf92(&local_e8);
  pvVar10 = local_d8;
  local_108 = (undefined4)local_e8;
  uStack_104 = local_e8._4_4_;
  uStack_100 = (undefined4)uStack_e0;
  uStack_fc = uStack_e0._4_4_;
  local_f8 = (void *)0x0;
  lVar26 = (longlong)(int)uStack_d0;
  local_f0 = (int)uStack_d0;
  if (lVar26 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,uStack_d0 & 0xffffffff,0);
    memcpy(local_f8,pvVar10,lVar26 * 2);
  }
  local_58 = 0;
  uStack_50 = 0;
  if (iVar11 == -1) {
    iVar11 = (uint)(iVar12 != -1) * 2;
  }
  else {
    if (CONCAT44(uStack_104,local_108) == 0) {
      local_c8 = 0;
      uStack_c0 = 0;
    }
    else {
      FUN_140ba791a(&local_108,&local_c8);
    }
    lVar26 = FUN_140ba769e(param_1 + 0x22,&local_c8);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14cb90c00;
    if (lVar26 == 0) {
      iVar11 = 0;
    }
    else {
      iVar12 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      iVar11 = 0;
      if (iVar12 == 0x40000002) {
        uVar18 = 0;
      }
      else {
        bVar27 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
          if (iVar12 == 1) {
            DVar14 = FUN_140ad26c0();
            DVar15 = GetCurrentThreadId();
            bVar27 = DVar14 == DVar15;
          }
          else {
            bVar27 = false;
          }
        }
        uVar18 = (ulonglong)(bVar27 ^ 1);
      }
      if (*(char *)(lVar5 + uVar18) == '\x01') {
        local_c8 = *(longlong *)(lVar26 + 0x10);
        iVar11 = *(int *)(lVar26 + 0x18) + -1;
        if (*(int *)(lVar26 + 0x18) == 0) {
          iVar11 = 0;
        }
        uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar11);
        FUN_14475bf92(&local_108);
        local_58 = *(undefined8 *)(lVar26 + 0x30);
        uStack_50 = *(undefined8 *)(lVar26 + 0x28);
        iVar11 = 1;
      }
    }
  }
  pvVar10 = local_f8;
  if (CONCAT44(uStack_104,local_108) == 0) {
    FUN_1400b22c2(param_2,&DAT_149e02088);
  }
  else {
    local_128 = local_108;
    uStack_124 = uStack_104;
    uStack_120 = uStack_100;
    uStack_11c = uStack_fc;
    local_118 = (void *)0x0;
    lVar26 = (longlong)local_f0;
    local_110 = local_f0;
    if (lVar26 == 0) {
      local_10c = 0;
    }
    else {
      FUN_1446dd670(&local_118,local_f0,0);
      memcpy(local_118,pvVar10,lVar26 * 2);
    }
    lVar26 = (**(code **)(*param_1 + 0xb0))(param_1,&local_128);
    if (lVar26 == 0) {
      plVar16 = (longlong *)FUN_14001cc68(0x60,0x10);
      pvVar10 = local_f8;
      plVar16[1] = (longlong)&DAT_100000001;
      *plVar16 = (longlong)&PTR_FUN_14b453350;
      *(undefined4 *)(plVar16 + 2) = local_108;
      *(undefined4 *)((longlong)plVar16 + 0x14) = uStack_104;
      *(undefined4 *)(plVar16 + 3) = uStack_100;
      *(undefined4 *)((longlong)plVar16 + 0x1c) = uStack_fc;
      plVar16[4] = 0;
      lVar26 = (longlong)local_f0;
      *(int *)(plVar16 + 5) = local_f0;
      if (lVar26 == 0) {
        *(undefined4 *)((longlong)plVar16 + 0x2c) = 0;
      }
      else {
        local_160 = plVar16 + 4;
        FUN_1446dd670(local_160,local_f0,0);
        memcpy((void *)*local_160,pvVar10,lVar26 * 2);
      }
      plVar16[6] = param_5;
      *(int *)(plVar16 + 7) = iVar11;
      plVar16[8] = 0;
      plVar16[9] = 0;
      *(undefined4 *)(plVar16 + 10) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar16 + 0x54) = local_58._4_4_;
      *(undefined4 *)(plVar16 + 0xb) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar16 + 0x5c) = uStack_50._4_4_;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        plVar25 = plVar16 + 1;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)*plVar25 == 0) {
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
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
      plVar25 = param_1 + 2;
      if (*(int *)((longlong)param_1 + 0x44) == 0) {
        iVar11 = (int)param_1[3];
        *(int *)(param_1 + 3) = iVar11 + 1;
        if (*(int *)((longlong)param_1 + 0x1c) == iVar11) {
          FUN_1447711aa(plVar25,iVar11);
        }
        iVar12 = (int)param_1[7];
        if (iVar12 == 0) {
          iVar13 = -1;
        }
        else {
          iVar13 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar13 = iVar12 + -1;
          }
          iVar13 = iVar13 >> 5;
        }
        plVar17 = param_1 + 4;
        iVar22 = iVar12 + 1;
        iVar24 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar24 = iVar12;
        }
        if (iVar24 >> 5 == iVar13) {
          *(int *)(param_1 + 7) = iVar22;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x3c) <= iVar12) {
            local_160 = plVar17;
            local_150 = plVar25;
            if (iVar12 + 0x20U < 0xa0) {
              iVar22 = 0x80;
              iVar13 = iVar12;
            }
            else {
              uVar21 = iVar12 + 0x20U >> 5;
              local_158 = (ulonglong)uVar21;
              if (*(int *)((longlong)param_1 + 0x3c) + 0x1fU < 0xa0) {
                uVar20 = 4;
                if (4 < uVar21) {
                  uVar20 = uVar21;
                }
              }
              else {
                uVar20 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
              }
              uVar18 = FUN_144a3809e(uVar20 << 2,0);
              iVar13 = (int)(uVar18 >> 2);
              iVar22 = -0x20;
              if ((int)local_158 <= iVar13) {
                iVar22 = iVar13 << 5;
              }
              iVar13 = (int)param_1[7];
            }
            *(int *)((longlong)param_1 + 0x3c) = iVar22;
            FUN_1446efbd8(local_160,iVar13);
            iVar22 = (int)param_1[7] + 1;
            plVar25 = local_150;
            plVar17 = local_160;
          }
          iVar13 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar13 = iVar22;
          }
          *(int *)(param_1 + 7) = iVar22;
          if (iVar22 % 0x20 != 0) {
            plVar23 = (longlong *)param_1[6];
            if ((longlong *)param_1[6] == (longlong *)0x0) {
              plVar23 = plVar17;
            }
            bVar19 = -(char)(iVar22 % 0x20);
            *(uint *)((longlong)plVar23 + (longlong)(iVar13 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar23 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                       ) >> (bVar19 & 0x1f);
          }
        }
        lVar26 = (longlong)iVar11;
        if ((longlong *)param_1[6] != (longlong *)0x0) {
          plVar17 = (longlong *)param_1[6];
        }
        bVar19 = (byte)iVar12 & 0x1f;
        puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar24 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
      }
      else {
        iVar11 = (int)param_1[8];
        lVar26 = (longlong)iVar11;
        iVar12 = *(int *)(param_1[2] + 4 + lVar26 * 0x20);
        *(int *)(param_1 + 8) = iVar12;
        iVar13 = *(int *)((longlong)param_1 + 0x44) + -1;
        *(int *)((longlong)param_1 + 0x44) = iVar13;
        if (iVar13 != 0) {
          *(undefined4 *)(param_1[2] + (longlong)iVar12 * 0x20) = 0xffffffff;
        }
      }
      plVar17 = param_1 + 4;
      if ((longlong *)param_1[6] != (longlong *)0x0) {
        plVar17 = (longlong *)param_1[6];
      }
      iVar12 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar12 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar11 & 0x1f);
      iVar12 = 1;
      lVar5 = param_1[2];
      lVar26 = lVar26 * 0x20;
      puVar3 = (undefined4 *)(lVar5 + lVar26);
      *(uint *)(lVar5 + lVar26) = local_164;
      *(longlong **)(lVar5 + 8 + lVar26) = plVar16 + 2;
      *(longlong **)(lVar5 + 0x10 + lVar26) = plVar16;
      *(undefined4 *)(lVar5 + 0x18 + lVar26) = 0xffffffff;
      uVar21 = (int)param_1[3] - *(int *)((longlong)param_1 + 0x44);
      if (1 < uVar21) {
        plVar16 = param_1 + 9;
        if ((longlong *)param_1[10] != (longlong *)0x0) {
          plVar16 = (longlong *)param_1[10];
        }
        iVar13 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[0xb] - 1U & local_164) * 4);
        if (iVar13 != -1) {
          do {
            puVar4 = (undefined4 *)(*plVar25 + (longlong)iVar13 * 0x20);
            if (*(uint *)(*plVar25 + (longlong)iVar13 * 0x20) == local_164) {
              plVar16 = *(longlong **)(puVar4 + 4);
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                plVar17 = plVar16 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
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
              uVar6 = *puVar3;
              uVar7 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
              *puVar4 = uVar6;
              puVar4[1] = uVar7;
              puVar4[2] = uVar8;
              puVar4[3] = uVar9;
              FUN_1409bea00(plVar25,iVar11);
              goto LAB_140ba71c1;
            }
            iVar13 = puVar4[6];
          } while (iVar13 != -1);
        }
      }
      if (3 < uVar21) {
        uVar18 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
        lVar26 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar26 & 0x1f);
      }
      if (((int)uVar21 < 1) || (iVar12 <= (int)param_1[0xb])) {
        uVar21 = (int)param_1[0xb] - 1U & local_164;
        puVar3[7] = uVar21;
        plVar16 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar16 = param_1 + 9;
        }
        puVar3[6] = *(undefined4 *)
                     ((longlong)plVar16 +
                     ((longlong)(int)param_1[0xb] - 1U & (longlong)(int)uVar21) * 4);
        plVar16 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar16 = param_1 + 9;
        }
        *(int *)((longlong)plVar16 + ((longlong)(int)param_1[0xb] - 1U & (longlong)(int)uVar21) * 4)
             = iVar11;
      }
      else {
        *(int *)(param_1 + 0xb) = iVar12;
        FUN_140ba9d5a(plVar25);
      }
LAB_140ba71c1:
      FUN_14475cc44(&local_108,local_138);
      FUN_140ba7826(&local_c8,L"Texture2D\'",local_138);
      iVar11 = (int)uStack_c0;
      iVar13 = ((int)uStack_c0 == 0) + 1;
      *param_2 = local_c8;
      local_c8 = 0;
      *(int *)(param_2 + 1) = (int)uStack_c0;
      iVar12 = uStack_c0._4_4_;
      *(int *)((longlong)param_2 + 0xc) = uStack_c0._4_4_;
      uStack_c0 = 0;
      iVar22 = iVar13 + iVar11;
      if (iVar22 < iVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar22);
      }
      if (iVar12 < iVar22) {
        FUN_1446f8c06(param_2);
      }
      FUN_1400020e8(param_2,&DAT_149e0208a,1);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_138[0] != 0) {
        FUN_1400020a8();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    }
    else {
      local_178 = &local_58;
      FUN_1409bebb8(&local_c8,&local_108,lVar26,iVar11);
      (**(code **)(*param_1 + 0x88))(param_1,local_164,&local_c8,param_5);
      FUN_14475cc44(&local_108,local_148);
      FUN_140ba7826(local_138,L"Texture2D\'",local_148);
      FUN_144a882a8(param_2,local_138,&DAT_149e0208a);
      if (local_138[0] != 0) {
        FUN_1400020a8();
      }
      if (local_148[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1418b57ca(&local_c8);
    }
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ba769e FUN_140ba769e body=187 status=ok
// SIG undefined FUN_140ba769e(void)

longlong FUN_140ba769e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  iVar2 = FUN_140ba775a();
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x50 + *param_1;
  }
  lVar1 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140ba775a FUN_140ba775a body=203 status=ok
// SIG undefined FUN_140ba775a(void)

int FUN_140ba775a(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_140ba77a0:
      lVar10 = (longlong)iVar1 * 0x50;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_140ba7811;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140ba7811;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140ba77be;
    }
  }
  return -1;
LAB_140ba7811:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140ba77be:
  iVar1 = *(int *)(lVar4 + 0x48 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140ba77a0;
}



// FUNCTION 140ba7826 FUN_140ba7826 body=243 status=ok
// SIG undefined FUN_140ba7826(void)

undefined8 * FUN_140ba7826(undefined8 *param_1,wchar_t *param_2,undefined8 *param_3)

{
  void *pvVar1;
  int extraout_EAX;
  int iVar2;
  int iVar4;
  int iVar5;
  uint uVar6;
  size_t sVar3;
  
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    extraout_EAX = (int)sVar3;
    if (extraout_EAX != 0) {
      iVar2 = 0;
      iVar5 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar5 = 0;
      }
      uVar6 = iVar5 + extraout_EAX + 1;
      *param_1 = 0;
      param_1[1] = 0;
      if (-2 < iVar5 + extraout_EAX) {
        iVar4 = 0;
        if (-1 < iVar5 + extraout_EAX) {
          FUN_1446f8c06(param_1,uVar6);
          iVar4 = *(int *)(param_1 + 1);
          iVar2 = *(int *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = iVar4 + uVar6;
        if ((uint)(iVar2 - iVar4) < uVar6) {
          FUN_144a2dbb8(param_1);
        }
        pvVar1 = (void *)*param_1;
        memcpy(pvVar1,param_2,(longlong)extraout_EAX * 2);
        pvVar1 = (void *)((longlong)pvVar1 + (longlong)extraout_EAX * 2);
        memcpy(pvVar1,(void *)*param_3,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar5 * 2) = 0;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
  }
  *param_1 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  return param_1;
}



// FUNCTION 140ba791a FUN_140ba791a body=292 status=ok
// SIG undefined FUN_140ba791a(void)

undefined8 * FUN_140ba791a(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_278 [40];
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_240 = local_220;
  local_228 = '\0';
  local_230 = &local_20;
  local_238 = local_240;
  if (*param_1 != 0) {
    FUN_14005eb5c(param_1,&local_240);
    if (param_1[1] != 0) {
      if (local_230 <= local_238 + 1) {
        FUN_140213274(&local_240,1);
      }
      *local_238 = 0x2e;
      local_238 = local_238 + 1;
      FUN_14005eb5c(param_1 + 1,&local_240);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_250,local_240,(ulonglong)((longlong)local_238 - (longlong)local_240) >> 1);
  if ((undefined8 *)&local_250 == param_2) {
    if (CONCAT44(uStack_24c,local_250) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_250;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_24c;
    *(undefined4 *)(param_2 + 1) = uStack_248;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_244;
  }
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba7a40 FUN_140ba7a40 body=449 status=ok
// SIG undefined FUN_140ba7a40(void)

longlong FUN_140ba7a40(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140ba7ad2;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_140ba7ad2;
    }
  }
  else {
LAB_140ba7ad2:
    cVar3 = FUN_144a61b4f();
    if ((cVar3 == '\0') || (DAT_14c950c28 == '\0')) {
      local_78 = *(undefined4 *)param_2;
      uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_70 = *(undefined4 *)(param_2 + 1);
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_2 + 3);
      lVar6 = (longlong)local_60;
      pvVar2 = (void *)param_2[2];
      if (lVar6 == 0) {
        local_5c = 0;
        local_50 = *param_2;
        uStack_48 = param_2[1];
        local_38 = 0;
LAB_140ba7b96:
        local_40 = (void *)0x0;
        local_58 = 0;
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar2,lVar6 * 2);
        pvVar2 = local_68;
        lVar6 = (longlong)local_60;
        local_58 = 0;
        local_50 = CONCAT44(uStack_74,local_78);
        uStack_48 = CONCAT44(uStack_6c,uStack_70);
        local_40 = (void *)0x0;
        local_38 = local_60;
        if (lVar6 == 0) goto LAB_140ba7b96;
        FUN_1446dd670(&local_40,local_60,0);
        memcpy(local_40,pvVar2,lVar6 * 2);
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8(local_68);
      }
      lVar6 = FUN_140832a06(&local_58);
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)) {
        cVar3 = FUN_140432338(lVar6);
        if (cVar3 != '\0') {
          if (local_40 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_140ba7a8b;
        }
      }
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  lVar6 = 0;
LAB_140ba7a8b:
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba7c02 FUN_140ba7c02 body=264 status=ok
// SIG undefined FUN_140ba7c02(void)

undefined4
FUN_140ba7c02(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined8 *param_5,longlong *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar3;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0xe8))(plVar3,puVar5,1);
  if (plVar3 == (longlong *)0x0) {
    param_4 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3);
    *param_6 = lVar4;
    if (lVar4 == 0) {
      param_4 = 0;
    }
    else if (param_2 < lVar4) {
      lVar1 = lVar4 + -1;
      if (lVar4 <= param_3) {
        param_3 = lVar1;
      }
      if (param_3 == -1) {
        param_3 = param_2 + 0x100000;
        if (lVar1 - param_2 < 0x100001) {
          param_3 = lVar1;
        }
        if ((char)param_4 == '\0') {
          param_3 = lVar1;
        }
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      uVar6 = (param_3 - param_2) + 1;
      FUN_1401211f6(param_5,uVar6 & 0xffffffff,1);
      param_4 = (**(code **)(*plVar3 + 0x20))(plVar3,*param_5,uVar6);
    }
    (**(code **)*plVar3)(plVar3,1);
  }
  return param_4;
}



// FUNCTION 140ba7d0a FUN_140ba7d0a body=6846 status=ok
// SIG undefined FUN_140ba7d0a(void)

ulonglong FUN_140ba7d0a(longlong *param_1,longlong *param_2,undefined4 *param_3,code **param_4)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  DWORD DVar10;
  undefined2 *puVar11;
  char *_Str;
  size_t sVar12;
  code *pcVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  undefined8 unaff_RBP;
  code **ppcVar19;
  uint uVar20;
  ulonglong uVar21;
  ushort uVar22;
  ushort uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  code **local_310;
  code *local_308;
  code *local_300;
  longlong local_2f0;
  code *local_2e8;
  int local_2e0;
  int local_2dc;
  code *local_2d8;
  code *local_2d0;
  undefined1 local_2c8 [16];
  longlong local_2b8;
  longlong local_2a8 [2];
  code *local_298;
  undefined8 local_290;
  code *local_288;
  undefined8 local_280;
  code *local_278;
  undefined8 uStack_270;
  code *local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined8 uStack_240;
  void *local_238;
  uint local_230;
  code *local_228;
  ulonglong uStack_220;
  code *local_218;
  ulonglong uStack_210;
  code *local_208;
  ulonglong uStack_200;
  code *local_1f8;
  ulonglong uStack_1f0;
  undefined2 *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ushort local_198;
  undefined6 uStack_196;
  longlong *local_188;
  longlong local_178;
  code *local_168;
  undefined8 uStack_160;
  longlong local_158;
  ushort local_128;
  undefined6 uStack_126;
  longlong *local_118;
  longlong local_108;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_1e8 = (undefined2 *)0x0;
  local_1e0 = *(uint *)(param_4 + 1);
  lVar26 = (longlong)(int)local_1e0;
  pcVar13 = *param_4;
  if (lVar26 == 0) {
    local_1dc = 0;
  }
  else {
    FUN_1446dd670(&local_1e8,local_1e0,0);
    memcpy(local_1e8,pcVar13,lVar26 * 2);
  }
  local_340 = 0xffffffff;
  local_348 = 0;
  iVar4 = FUN_1447ee042(&local_1e8,L"Texture2D\'",10,1);
  if (iVar4 == -1) {
    local_340 = 0xffffffff;
    local_348 = 0;
    iVar4 = FUN_1447ee042(&local_1e8,L"TextureRenderTarget2D\'",0x16,1);
    if (iVar4 != -1) goto LAB_140ba7dfa;
    puVar11 = local_1e8;
    if (local_1e0 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    lVar26 = 7;
    lVar18 = 0;
    while( true ) {
      uVar22 = *(ushort *)((longlong)puVar11 + lVar18);
      uVar27 = (ulonglong)uVar22;
      uVar23 = *(ushort *)((longlong)&DAT_149e41626 + lVar18);
      if (uVar22 != uVar23) break;
      if (uVar22 == 0) goto LAB_140ba7f98;
LAB_140ba7e8e:
      lVar26 = lVar26 + -1;
      if (lVar26 == 0) goto LAB_140ba7f98;
      lVar18 = lVar18 + 2;
    }
    if ((uVar23 | uVar22) < 0x80) {
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
      uVar21 = (ulonglong)uVar23;
      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      if ((&DAT_149e05da0)[uVar27] == (&DAT_149e05da0)[uVar21]) goto LAB_140ba7e8e;
    }
    if (uVar22 != uVar23) {
      lVar26 = 8;
      lVar18 = 0;
      goto LAB_140ba7ed5;
    }
LAB_140ba7f98:
    *param_3 = 2;
  }
  else {
LAB_140ba7dfa:
    *param_3 = 1;
  }
  uVar27 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
LAB_140ba7e03:
  if (local_1e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27 & 0xffffffff;
LAB_140ba7ed5:
  uVar22 = *(ushort *)((longlong)puVar11 + lVar18);
  uVar27 = (ulonglong)uVar22;
  uVar23 = *(ushort *)((longlong)&DAT_149e41636 + lVar18);
  if (uVar22 != uVar23) {
    if ((uVar23 | uVar22) < 0x80) {
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
      uVar21 = (ulonglong)uVar23;
      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      if ((&DAT_149e05da0)[uVar27] == (&DAT_149e05da0)[uVar21]) goto LAB_140ba7eee;
    }
    if (uVar22 != uVar23) {
      _Str = (char *)(**(code **)(*param_2 + 0x40))(param_2,"protocol");
      puVar11 = local_1e8;
      local_1f8 = (code *)0x0;
      uStack_1f0 = 0;
      local_208 = (code *)0x0;
      lVar26 = (longlong)(int)local_1e0;
      uStack_200 = CONCAT44(uStack_200._4_4_,local_1e0);
      if (lVar26 == 0) {
        uStack_200 = (ulonglong)local_1e0;
      }
      else {
        FUN_1446dd670(&local_208,local_1e0,0);
        memcpy(local_208,puVar11,lVar26 * 2);
      }
      if (_Str != (char *)0x0) {
        local_68 = 0;
        sVar12 = strlen(_Str);
        FUN_1446e6fe8(&local_168,_Str,sVar12 & 0xffffffff,1);
        FUN_14020fad6(&local_1f8,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        FUN_140b127b8(&local_1f8,&DAT_149e3579e,3,1);
      }
      FUN_1400b22c2(&local_168,&DAT_14b451e0d);
      pcVar13 = local_168;
      if ((int)uStack_160 == 0) {
        pcVar13 = (code *)&DAT_149dfb77a;
      }
      local_340 = 0xffffffff;
      local_348 = 0;
      uVar5 = FUN_1447ee042(&local_1e8,pcVar13);
      if (local_168 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (uVar5 != 0xffffffff) {
        if ((int)uStack_1f0 < 2) {
          if ((int)uVar5 < 0) {
            local_168 = (code *)0x0;
            uStack_160 = 0;
          }
          else {
            iVar4 = local_1e0 - 1;
            if (local_1e0 == 0) {
              iVar4 = 0;
            }
            uVar27 = (longlong)iVar4;
            if ((longlong)(ulonglong)uVar5 < (longlong)iVar4) {
              uVar27 = (ulonglong)uVar5;
            }
            uVar21 = 0;
            if (0 < (longlong)uVar27) {
              uVar21 = uVar27;
            }
            puVar11 = local_1e8;
            if (local_1e0 == 0) {
              puVar11 = &DAT_149dfb77a;
            }
            FUN_14006620a(&local_168,puVar11,uVar21);
          }
          if (local_1f8 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_1f8 = local_168;
          uStack_1f0 = uStack_160;
        }
        uVar20 = local_1e0 - 1;
        puVar11 = local_1e8;
        if (local_1e0 == 0) {
          uVar20 = 0;
          puVar11 = &DAT_149dfb77a;
        }
        uVar25 = uVar5 + 3;
        if ((int)uVar20 <= (int)(uVar5 + 3)) {
          uVar25 = uVar20;
        }
        uVar27 = (ulonglong)uVar25;
        if ((int)uVar25 < 1) {
          uVar27 = 0;
        }
        FUN_14006620a(&local_168,puVar11 + uVar27,uVar20 - (int)uVar27);
        if (local_208 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_208 = local_168;
        uStack_200 = uStack_160;
      }
      local_2e0 = (int)uStack_1f0;
      if (1 < (int)uStack_1f0) {
        lVar26 = (longlong)(int)((longlong *)param_1[0x49])[1];
        if (lVar26 == 0) {
          uVar27 = 0;
          goto LAB_140ba92a1;
        }
        local_2f0 = *(longlong *)param_1[0x49];
        lVar26 = lVar26 * 0x68 + local_2f0;
        uVar27 = 0;
        goto LAB_140ba828f;
      }
      *param_3 = 0;
      iVar4 = (int)uStack_200 + -1;
      if ((int)uStack_200 == 0) {
        iVar4 = 0;
      }
      uVar5 = *(uint *)(param_1[0x48] + 0x18);
      iVar6 = iVar4 + 1 + (uint)((longlong)(int)uVar5 == 0);
      local_168 = (code *)0x0;
      pvVar3 = *(void **)(param_1[0x48] + 0x10);
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar5);
      if (iVar6 == 0 && uVar5 == 0) {
        uStack_160 = (ulonglong)uVar5;
      }
      else {
        iVar17 = iVar6 + uVar5;
        if (iVar6 < 0) goto LAB_140ba9607;
        FUN_1446dd670(&local_168,iVar17,0);
        if (uVar5 != 0) {
          memcpy(local_168,pvVar3,(longlong)(int)uVar5 * 2);
        }
      }
      FUN_1401aebe8(&local_168,local_208,iVar4);
      local_218 = local_168;
      uStack_210 = uStack_160;
      local_2f0 = 0;
      goto LAB_140ba846d;
    }
    goto LAB_140ba7f98;
  }
  if (uVar22 == 0) goto LAB_140ba7f98;
LAB_140ba7eee:
  lVar26 = lVar26 + -1;
  if (lVar26 == 0) goto LAB_140ba7f98;
  lVar18 = lVar18 + 2;
  goto LAB_140ba7ed5;
LAB_140ba828f:
  if ((int)uStack_1f0 == *(int *)(local_2f0 + 0x10)) {
    lVar18 = 0;
    do {
      uVar22 = *(ushort *)(local_1f8 + lVar18);
      uVar21 = (ulonglong)uVar22;
      uVar23 = *(ushort *)(*(longlong *)(local_2f0 + 8) + lVar18);
      if (uVar22 == uVar23) {
        if (uVar22 == 0) goto LAB_140ba8311;
      }
      else {
        if (0x7f < (uVar23 | uVar22)) goto LAB_140ba82e5;
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
        uVar24 = (ulonglong)uVar23;
        uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
        if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[uVar24]) goto LAB_140ba82e5;
      }
      lVar18 = lVar18 + 2;
    } while( true );
  }
  if (*(int *)(local_2f0 + 0x10) + (int)uStack_1f0 != 1) goto LAB_140ba82ed;
  goto LAB_140ba8311;
LAB_140ba82e5:
  if (uVar22 != uVar23) {
LAB_140ba82ed:
    local_2f0 = local_2f0 + 0x68;
    if (local_2f0 == lVar26) goto LAB_140ba92a1;
    goto LAB_140ba828f;
  }
LAB_140ba8311:
  uVar27 = 0;
  if (local_2f0 == 0) goto LAB_140ba92a1;
  *param_3 = 0;
  local_218 = (code *)0x0;
  uStack_210 = 0;
  uVar21 = (ulonglong)(*(int *)(local_2f0 + 0x30) - 1);
  if (*(int *)(local_2f0 + 0x30) == 0) {
    uVar21 = uVar27;
  }
  uVar5 = *(uint *)(local_2f0 + 0x50);
  iVar4 = (int)uVar21 + 1 + (uint)((longlong)(int)uVar5 == 0);
  local_1d8 = (code *)0x0;
  pvVar3 = *(void **)(local_2f0 + 0x48);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar5);
  if (iVar4 == 0 && uVar5 == 0) {
    uStack_1d0 = (ulonglong)uVar5;
  }
  else {
    iVar17 = iVar4 + uVar5;
    if (iVar4 < 0) goto LAB_140ba9607;
    FUN_1446dd670(&local_1d8,iVar17,0);
    if (uVar5 != 0) {
      memcpy(local_1d8,pvVar3,(longlong)(int)uVar5 * 2);
    }
  }
  FUN_1401aebe8(&local_1d8,*(undefined8 *)(local_2f0 + 0x28),uVar21);
  iVar4 = (int)uStack_200 + -1;
  if ((int)uStack_200 == 0) {
    iVar4 = 0;
  }
  iVar6 = (int)uStack_1d0;
  iVar7 = iVar4 + 1 + (uint)((int)uStack_1d0 == 0);
  local_168 = local_1d8;
  local_1d8 = (code *)0x0;
  iVar8 = uStack_1d0._4_4_;
  uStack_160 = uStack_1d0;
  uStack_1d0 = 0;
  iVar17 = iVar7 + iVar6;
  if (iVar17 < iVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar7);
  }
  if (iVar17 < 0) goto LAB_140ba9607;
  if (iVar8 < iVar17) {
    FUN_1446f8c06(&local_168);
  }
  FUN_1401aebe8(&local_168,local_208,iVar4);
  local_218 = local_168;
  uStack_210 = uStack_160;
  local_168 = (code *)0x0;
  uStack_160 = 0;
  if (local_1d8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140ba846d:
  FUN_144a06df0(&local_168,&local_208,1);
  uVar5 = (int)uStack_160 - 1;
  if ((int)uStack_160 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    uVar27 = 0;
    do {
      *(ushort *)(local_168 + uVar27 * 2) =
           (ushort)(*(ushort *)(local_168 + uVar27 * 2) - 0x41 < 0x1a) * 0x20 +
           *(ushort *)(local_168 + uVar27 * 2);
      uVar27 = uVar27 + 1;
    } while (uVar5 != uVar27);
  }
  local_2d8 = local_168;
  local_2dc = (int)uStack_160;
  local_2d0 = (code *)&DAT_149dfb77a;
  local_2e8 = local_168;
  if ((int)uStack_160 == 0) {
    local_2e8 = (code *)&DAT_149dfb77a;
  }
  lVar26 = 0;
  while( true ) {
    uVar22 = *(ushort *)(local_2e8 + lVar26);
    uVar27 = (ulonglong)uVar22;
    uVar23 = *(ushort *)((longlong)&DAT_149eca162 + lVar26);
    if (uVar22 != uVar23) break;
    if (uVar22 == 0) goto LAB_140ba8679;
LAB_140ba8551:
    lVar26 = lVar26 + 2;
  }
  if ((uVar23 | uVar22) < 0x80) {
    uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
    uVar21 = (ulonglong)uVar23;
    uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
    if ((&DAT_149e05da0)[uVar27] == (&DAT_149e05da0)[uVar21]) goto LAB_140ba8551;
  }
  if (uVar22 != uVar23) {
    lVar26 = 0;
    goto LAB_140ba8589;
  }
LAB_140ba8679:
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_168 = FUN_1449e2820;
    local_300 = FUN_14081d0ea;
    local_308 = FUN_14081d0ea;
    local_318 = &LAB_1489c8acb;
    local_320 = &LAB_146027b0e;
    local_328 = L"Engine";
    local_330 = 0;
    local_338 = 0x10000006;
    local_340 = 8;
    local_348 = 0x128;
    local_310 = &local_168;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar15 = DAT_14cb907b8;
  lVar26 = DAT_14cb907b8[0x22];
  if (lVar26 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar26 = plVar15[0x22];
  }
  FUN_1400b22c2(&local_168,"uiresources/");
  iVar4 = (int)uStack_160 + -1;
  pcVar13 = local_168;
  if ((int)uStack_160 == 0) {
    pcVar13 = (code *)&DAT_149dfb77a;
    iVar4 = 0;
  }
  local_340 = 0xffffffff;
  local_348 = 0;
  iVar4 = FUN_1447ee042(&local_208,pcVar13,iVar4,1);
  if (local_168 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (iVar4 != -1) {
    pcVar13 = local_208;
    if ((int)uStack_200 == 0) {
      pcVar13 = (code *)&DAT_149dfb77a;
    }
    uVar5 = (int)uStack_200 - 1;
    if ((int)uStack_200 == 0) {
      uVar5 = 0;
    }
    uVar20 = iVar4 + 0xcU;
    if ((int)uVar5 <= (int)(iVar4 + 0xcU)) {
      uVar20 = uVar5;
    }
    uVar27 = (ulonglong)uVar20;
    if ((int)uVar20 < 1) {
      uVar27 = 0;
    }
    FUN_14006620a(&local_1d8,pcVar13 + uVar27 * 2,uVar5 - (int)uVar27);
    iVar4 = (int)uStack_1d0 + -1;
    if ((int)uStack_1d0 == 0) {
      iVar4 = 0;
    }
    uVar5 = *(uint *)(lVar26 + 0xd8);
    iVar6 = iVar4 + 1 + (uint)((longlong)(int)uVar5 == 0);
    local_168 = (code *)0x0;
    pvVar3 = *(void **)(lVar26 + 0xd0);
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar5);
    if (iVar6 == 0 && uVar5 == 0) {
      uStack_160 = (ulonglong)uVar5;
    }
    else {
      iVar17 = iVar6 + uVar5;
      if (iVar6 < 0) goto LAB_140ba9607;
      FUN_1446dd670(&local_168,iVar17,0);
      if (uVar5 != 0) {
        memcpy(local_168,pvVar3,(longlong)(int)uVar5 * 2);
      }
    }
    FUN_1401aebe8(&local_168,local_1d8,iVar4);
    if (local_208 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_208 = local_168;
    uStack_200 = uStack_160;
    local_168 = (code *)0x0;
    uStack_160 = 0;
    if (local_1d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_2e0 < 2) {
    FUN_140056680(&local_168,&DAT_149dfb77a);
  }
  else {
    local_168 = (code *)0x0;
    uVar5 = *(uint *)(local_2f0 + 0x20);
    pvVar3 = *(void **)(local_2f0 + 0x18);
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      uStack_160 = (ulonglong)uVar5;
    }
    else {
      FUN_1446dd670(&local_168,uVar5,0);
      memcpy(local_168,pvVar3,(longlong)(int)uVar5 * 2);
    }
  }
  pcVar13 = local_168;
  iVar4 = (int)uStack_200 + -1;
  if ((int)uStack_200 == 0) {
    iVar4 = 0;
  }
  iVar6 = (int)uStack_160;
  lVar18 = (longlong)(int)uStack_160;
  iVar8 = iVar4 + 1 + (uint)(lVar18 == 0);
  local_228 = (code *)0x0;
  uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_160);
  if (iVar8 == 0 && (int)uStack_160 == 0) {
    uStack_220 = uStack_160 & 0xffffffff;
  }
  else {
    iVar17 = iVar8 + (int)uStack_160;
    if (iVar8 < 0) goto LAB_140ba9607;
    FUN_1446dd670(&local_228,iVar17,0);
    if (iVar6 != 0) {
      memcpy(local_228,pcVar13,lVar18 * 2);
    }
  }
  FUN_1401aebe8(&local_228,local_208,iVar4);
  if (local_168 != (code *)0x0) {
    FUN_1400020a8();
  }
  iVar4 = local_2dc + -1;
  if (local_2dc == 0) {
    iVar4 = 0;
  }
  FUN_140b127b8(&local_228,local_2e8,iVar4,1);
  FUN_144a06ecc(&local_238,&local_228);
  FUN_140b1283a(&local_258,&DAT_149e065c6,&local_228);
  iVar4 = (int)uStack_250;
  iVar8 = ((int)uStack_250 == 0) + 1;
  local_1d8 = local_258;
  local_258 = (code *)0x0;
  iVar6 = uStack_250._4_4_;
  uStack_1d0 = uStack_250;
  uStack_250 = 0;
  iVar17 = iVar8 + iVar4;
  if (iVar17 < iVar4) goto LAB_140ba960e;
  if (iVar17 < 0) goto LAB_140ba9607;
  if (iVar6 < iVar17) {
    FUN_1446f8c06(&local_1d8);
  }
  ppcVar19 = &local_1d8;
  FUN_1400020e8(ppcVar19,&DAT_149e0635c,1);
  uVar27 = uStack_1d0;
  pvVar3 = local_238;
  iVar4 = (int)uStack_1d0;
  if ((int)uStack_1d0 < 2) {
    local_168 = (code *)0x0;
    uStack_160 = CONCAT44(uStack_160._4_4_,local_230);
    if ((longlong)(int)local_230 == 0) {
      uStack_160 = (ulonglong)local_230;
    }
    else {
      FUN_1446dd670(&local_168,local_230,0);
      memcpy(local_168,pvVar3,(longlong)(int)local_230 * 2);
    }
  }
  else {
    iVar17 = local_230 - 1;
    if (local_230 == 0) {
      iVar17 = 0;
    }
    local_168 = local_1d8;
    iVar8 = uStack_1d0._4_4_;
    local_1d8 = (code *)0x0;
    uStack_1d0 = 0;
    uStack_160 = uVar27;
    iVar6 = iVar17 + iVar4;
    if (iVar6 < iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar17);
    }
    if (iVar8 < iVar6) {
      FUN_1446f8c06(&local_168);
    }
    FUN_1400020e8(&local_168,local_238,iVar17);
  }
  if (local_228 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_228 = local_168;
  uStack_220 = uStack_160;
  local_168 = (code *)0x0;
  uStack_160 = 0;
  if (local_1d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_258 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_258 = (code *)0x0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_168 = local_228;
  iVar4 = (int)uStack_220 + -1;
  if ((int)uStack_220 == 0) {
    iVar4 = 0;
  }
  uStack_160 = CONCAT44(uStack_160._4_4_,iVar4);
  FUN_14475bf92(&local_258,&local_168);
  lVar14 = FUN_140ba769e(param_1 + 0x22,&local_228);
  lVar18 = DAT_14cb90c00;
  if (lVar14 != 0) {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar4 == 0x40000002) {
      uVar27 = 0;
    }
    else {
      bVar28 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
        if (iVar4 == 1) {
          uVar9 = FUN_140ad26c0();
          local_2e8 = (code *)CONCAT44(local_2e8._4_4_,uVar9);
          DVar10 = GetCurrentThreadId();
          bVar28 = (DWORD)local_2e8 == DVar10;
        }
        else {
          bVar28 = false;
        }
      }
      uVar27 = (ulonglong)(bVar28 ^ 1);
    }
    if (*(char *)(lVar18 + uVar27) != '\x01') goto LAB_140ba8ca6;
    *param_3 = 1;
    FUN_140b1283a(&local_1d8,L"Texture2D\'",&local_228);
    iVar4 = (int)uStack_1d0;
    iVar8 = ((int)uStack_1d0 == 0) + 1;
    local_168 = local_1d8;
    local_1d8 = (code *)0x0;
    iVar6 = uStack_1d0._4_4_;
    uStack_160 = uStack_1d0;
    uStack_1d0 = 0;
    iVar17 = iVar8 + iVar4;
    if (iVar17 < iVar4) goto LAB_140ba960e;
    if (iVar17 < 0) goto LAB_140ba9607;
    if (iVar6 < iVar17) {
      FUN_1446f8c06(&local_168);
    }
    FUN_1400020e8(&local_168,&DAT_149e0208a,1);
    if (&local_168 == param_4) {
      if (local_168 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != (code *)0x0) {
        FUN_1400020a8();
      }
      *param_4 = local_168;
      local_168 = (code *)0x0;
      *(int *)(param_4 + 1) = (int)uStack_160;
      *(undefined4 *)((longlong)param_4 + 0xc) = uStack_160._4_4_;
      uStack_160 = 0;
    }
    pcVar13 = local_1d8;
    if (local_1d8 != (code *)0x0) goto LAB_140ba8ef9;
    goto LAB_140ba923e;
  }
LAB_140ba8ca6:
  local_168 = (code *)0x149fca2ba;
  uStack_160 = CONCAT35(uStack_160._5_3_,0xd);
  uVar9 = FUN_14001a6c0(&local_168,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar15 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar9,&local_168,1);
  plVar16 = (longlong *)(**(code **)(*plVar15 + 0x40))(plVar15);
  local_348 = CONCAT31(local_348._1_3_,1);
  (**(code **)(*plVar16 + 0x98))(plVar16,&local_168,&local_258,1);
  if ((local_168 != (code *)0x0) && (local_158 != 0)) {
    *param_3 = 1;
    FUN_140b1283a(&local_278,L"Texture2D\'",&local_228);
    iVar4 = (int)uStack_270;
    iVar8 = ((int)uStack_270 == 0) + 1;
    local_1d8 = local_278;
    local_278 = (code *)0x0;
    iVar6 = uStack_270._4_4_;
    uStack_1d0 = uStack_270;
    uStack_270 = 0;
    iVar17 = iVar8 + iVar4;
    if (iVar17 < iVar4) goto LAB_140ba960e;
    if (iVar17 < 0) goto LAB_140ba9607;
    if (iVar6 < iVar17) {
      FUN_1446f8c06(&local_1d8);
    }
    FUN_1400020e8(ppcVar19,&DAT_149e0208a,1);
    if (ppcVar19 == param_4) {
      pcVar13 = local_278;
      if (local_1d8 != (code *)0x0) {
        FUN_1400020a8();
        pcVar13 = local_278;
      }
    }
    else {
      if (*param_4 != (code *)0x0) {
        FUN_1400020a8();
      }
      *param_4 = local_1d8;
      local_1d8 = (code *)0x0;
      *(int *)(param_4 + 1) = (int)uStack_1d0;
      *(int *)((longlong)param_4 + 0xc) = uStack_1d0._4_4_;
      uStack_1d0 = 0;
      pcVar13 = local_278;
    }
    goto LAB_140ba91c5;
  }
  if ((((*(char *)(lVar26 + 0xca) == '\0') &&
       (iVar4 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar4 != 0x40000002)) && (iVar4 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar18 = DAT_14cb90be8;
  if (*(char *)(lVar26 + 0xc9) == '\x01') {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar4 == 0x40000002) {
      uVar27 = 0;
    }
    else {
      bVar28 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
        if (iVar4 == 1) {
          uVar5 = FUN_140ad26c0();
          ppcVar19 = (code **)(ulonglong)uVar5;
          DVar10 = GetCurrentThreadId();
          bVar28 = uVar5 == DVar10;
        }
        else {
          bVar28 = false;
        }
      }
      uVar27 = (ulonglong)(bVar28 ^ 1);
    }
    if (*(char *)(lVar18 + uVar27) == '\x01') goto LAB_140ba8f2e;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_118 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
    if ((local_128 & 1) == 0) {
      if (CONCAT62(uStack_126,local_128) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT62(uStack_126,local_128) + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) &&
           (plVar15 = (longlong *)CONCAT62(uStack_126,local_128), plVar15 != (longlong *)0x0)) {
          FUN_140958ed1(*plVar15,(int)plVar15[1]);
          if (*plVar15 != 0) {
            FUN_1400020a8();
          }
          goto LAB_140ba9506;
        }
      }
    }
    else {
      plVar15 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)(local_128 & 0xfffffffc) * 2);
      LOCK();
      plVar16 = plVar15 + 0x18;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if (plVar15 != (longlong *)0x0 && (int)*plVar16 == 0) {
        FUN_14587a8e6(plVar15);
LAB_140ba9506:
        FUN_1400020a8(plVar15);
      }
    }
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_228 != (code *)0x0) {
      FUN_1400020a8();
    }
LAB_140ba9315:
    plVar16 = (longlong *)FUN_1400dbadc();
    plVar15 = (longlong *)*plVar16;
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)FUN_140e92164();
      *plVar16 = (longlong)plVar15;
    }
    FUN_144a06ecc(&local_168,&local_218);
    if (1 < (int)uStack_160) {
      if ((int)uStack_210 != 0) {
        local_2d0 = local_218;
      }
      uVar27 = (**(code **)(*plVar15 + 0x78))(plVar15,local_2d0);
      ppcVar19 = (code **)(uVar27 & 0xffffffff);
      if (local_168 != (code *)0x0) {
        FUN_1400020a8();
      }
      if ((char)ppcVar19 == '\0') goto LAB_140ba93c5;
      iVar4 = (int)uStack_210 + -1;
      if ((int)uStack_210 == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(param_4,local_218,iVar4);
      goto LAB_140ba9274;
    }
    if (local_168 != (code *)0x0) {
      FUN_1400020a8();
    }
LAB_140ba93c5:
    uVar27 = 0;
    if (0 < *(int *)(param_4 + 3)) {
      iVar4 = *(int *)(param_4[2] + 8);
      uVar21 = (ulonglong)(iVar4 - 1);
      if (iVar4 == 0) {
        uVar21 = uVar27;
      }
      FUN_1402980a2(param_4,*(undefined8 *)param_4[2],uVar21);
      pcVar13 = param_4[2];
      if (*(longlong *)pcVar13 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 3) + -1 == 0) {
        iVar4 = 0;
      }
      else {
        memmove(pcVar13,pcVar13 + 0x10,(longlong)(*(int *)(param_4 + 3) + -1) << 4);
        iVar4 = *(int *)(param_4 + 3) + -1;
      }
      *(int *)(param_4 + 3) = iVar4;
      FUN_140b12644(param_4 + 2);
      uVar5 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_4);
      uVar27 = (ulonglong)uVar5;
    }
  }
  else {
LAB_140ba8f2e:
    local_278 = (code *)0x0;
    uStack_270 = 0;
    local_268 = (code *)0x0;
    uStack_260 = 0;
    local_1d8 = (code *)0x14b451e1e;
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x40);
    FUN_14475bf92(&local_278);
    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x40))(plVar15);
    local_348 = CONCAT31(local_348._1_3_,1);
    (**(code **)(*plVar15 + 0x98))(plVar15,&local_1d8,&local_278,1);
    *param_3 = 1;
    FUN_1468fc08c(local_2c8,local_1d8,local_1c8);
    FUN_14475cc44(local_2c8,local_2a8);
    FUN_140ba7826(&local_298,L"Texture2D\'",local_2a8);
    iVar4 = (int)local_290;
    iVar8 = ((int)local_290 == 0) + 1;
    local_288 = local_298;
    local_298 = (code *)0x0;
    iVar6 = local_290._4_4_;
    local_280 = local_290;
    local_290 = 0;
    iVar17 = iVar8 + iVar4;
    if (iVar17 < iVar4) {
LAB_140ba960e:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if (iVar17 < 0) {
LAB_140ba9607:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    if (iVar6 < iVar17) {
      FUN_1446f8c06(&local_288);
    }
    FUN_1400020e8(&local_288,&DAT_149e0208a,1);
    if (&local_288 == param_4) {
      if (local_288 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != (code *)0x0) {
        FUN_1400020a8();
      }
      *param_4 = local_288;
      local_288 = (code *)0x0;
      *(undefined4 *)(param_4 + 1) = (undefined4)local_280;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_280._4_4_;
      local_280 = 0;
    }
    if (local_298 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_2a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_188 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_188 + 0x10))(local_188);
        }
      }
    }
    pcVar13 = local_268;
    if ((local_198 & 1) == 0) {
      if (CONCAT62(uStack_196,local_198) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT62(uStack_196,local_198) + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) &&
           (plVar15 = (longlong *)CONCAT62(uStack_196,local_198), plVar15 != (longlong *)0x0)) {
          FUN_140958ed1(*plVar15,(int)plVar15[1]);
          if (*plVar15 != 0) {
            FUN_1400020a8();
          }
          goto LAB_140ba94c2;
        }
      }
    }
    else {
      plVar15 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)(local_198 & 0xfffffffc) * 2);
      LOCK();
      plVar16 = plVar15 + 0x18;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if (plVar15 != (longlong *)0x0 && (int)*plVar16 == 0) {
        FUN_14587a8e6(plVar15);
LAB_140ba94c2:
        FUN_1400020a8(plVar15);
        pcVar13 = local_268;
      }
    }
LAB_140ba91c5:
    if (pcVar13 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_118 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
    if ((local_128 & 1) == 0) {
      if (CONCAT62(uStack_126,local_128) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT62(uStack_126,local_128) + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) &&
           (pcVar13 = (code *)CONCAT62(uStack_126,local_128), pcVar13 != (code *)0x0)) {
          FUN_140958ed1(*(longlong *)pcVar13,*(undefined4 *)(pcVar13 + 8));
          if (*(longlong *)pcVar13 != 0) {
            FUN_1400020a8();
          }
          goto LAB_140ba8ef9;
        }
      }
    }
    else {
      pcVar13 = *(code **)(&DAT_14c927ae8 + (ulonglong)(local_128 & 0xfffffffc) * 2);
      LOCK();
      pcVar2 = pcVar13 + 0xc0;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (pcVar13 != (code *)0x0 && *(int *)pcVar2 == 0) {
        FUN_14587a8e6(pcVar13);
LAB_140ba8ef9:
        FUN_1400020a8(pcVar13);
      }
    }
LAB_140ba923e:
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_228 != (code *)0x0) {
      FUN_1400020a8();
    }
LAB_140ba9274:
    uVar27 = CONCAT71((int7)((ulonglong)ppcVar19 >> 8),1);
  }
  if (local_2d8 != (code *)0x0) {
    FUN_1400020a8(local_2d8);
  }
  if (local_218 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140ba92a1:
  if (local_208 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_1f8 != (code *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_140ba7e03;
LAB_140ba8589:
  uVar22 = *(ushort *)(local_2e8 + lVar26);
  uVar27 = (ulonglong)uVar22;
  uVar23 = *(ushort *)((longlong)&DAT_149eca16c + lVar26);
  if (uVar22 != uVar23) {
    if ((uVar23 | uVar22) < 0x80) {
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
      uVar21 = (ulonglong)uVar23;
      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      if ((&DAT_149e05da0)[uVar27] == (&DAT_149e05da0)[uVar21]) goto LAB_140ba85a8;
    }
    if (uVar22 != uVar23) {
      lVar26 = 0;
      goto LAB_140ba85e0;
    }
    goto LAB_140ba8679;
  }
  if (uVar22 == 0) goto LAB_140ba8679;
LAB_140ba85a8:
  lVar26 = lVar26 + 2;
  goto LAB_140ba8589;
LAB_140ba85e0:
  uVar22 = *(ushort *)(local_2e8 + lVar26);
  uVar27 = (ulonglong)uVar22;
  uVar23 = *(ushort *)((longlong)&DAT_149f28984 + lVar26);
  if (uVar22 != uVar23) {
    if ((uVar23 | uVar22) < 0x80) {
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
      uVar21 = (ulonglong)uVar23;
      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      if ((&DAT_149e05da0)[uVar27] == (&DAT_149e05da0)[uVar21]) goto LAB_140ba85fb;
    }
    if (uVar22 != uVar23) {
      lVar26 = 0;
      goto LAB_140ba862f;
    }
    goto LAB_140ba8679;
  }
  if (uVar22 == 0) goto LAB_140ba8679;
LAB_140ba85fb:
  lVar26 = lVar26 + 2;
  goto LAB_140ba85e0;
LAB_140ba862f:
  uVar22 = *(ushort *)(local_2e8 + lVar26);
  uVar27 = (ulonglong)uVar22;
  uVar23 = *(ushort *)((longlong)&DAT_149f28964 + lVar26);
  if (uVar22 != uVar23) {
    if ((uVar23 | uVar22) < 0x80) {
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
      uVar21 = (ulonglong)uVar23;
      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
      if ((&DAT_149e05da0)[uVar27] == (&DAT_149e05da0)[uVar21]) goto LAB_140ba864a;
    }
    if (uVar22 != uVar23) goto LAB_140ba9315;
    goto LAB_140ba8679;
  }
  if (uVar22 == 0) goto LAB_140ba8679;
LAB_140ba864a:
  lVar26 = lVar26 + 2;
  goto LAB_140ba862f;
}



// FUNCTION 140ba97ca FUN_140ba97ca body=842 status=ok
// SIG undefined FUN_140ba97ca(void)

undefined8 FUN_140ba97ca(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t **ppwVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  wchar_t *local_188;
  int local_180;
  undefined2 *local_178;
  int local_170;
  wchar_t *local_168;
  int local_160;
  wchar_t *local_158;
  undefined8 uStack_150;
  wchar_t **local_58;
  wchar_t **local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_1 = 0;
  *param_2 = 0xffffffffffffffff;
  pcVar4 = (char *)(**(code **)(*param_3 + 0x40))(param_3,"Range");
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    uVar6 = 0;
  }
  else {
    FUN_140056680(&local_168,L"bytes=");
    pcVar4 = (char *)(**(code **)(*param_3 + 0x40))(param_3);
    local_58 = (wchar_t **)0x0;
    if (pcVar4 == (char *)0x0) {
      local_50 = (wchar_t **)0x0;
      local_48 = 0;
    }
    else {
      sVar5 = strlen(pcVar4);
      iVar1 = (int)sVar5;
      uVar11 = iVar1 + 1;
      local_48 = iVar1;
      if (uVar11 < 0x81) {
        ppwVar9 = (wchar_t **)0x0;
      }
      else {
        FUN_1446efa72(&local_58,0,uVar11,2);
        ppwVar9 = local_58;
      }
      if (ppwVar9 == (wchar_t **)0x0) {
        ppwVar9 = &local_158;
      }
      local_50 = ppwVar9;
      if (-1 < iVar1) {
        uVar7 = 0;
        do {
          *(short *)((longlong)ppwVar9 + uVar7 * 2) = (short)pcVar4[uVar7];
          uVar7 = uVar7 + 1;
        } while (uVar11 != uVar7);
      }
    }
    FUN_140056680(&local_178,local_50);
    if (local_58 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    pwVar8 = local_168;
    if (local_160 == 0) {
      pwVar8 = L"";
    }
    if (pwVar8 != (wchar_t *)0x0) {
      sVar5 = wcslen(pwVar8);
      local_190 = 0xffffffff;
      local_198 = 0;
      iVar1 = FUN_1447ee042(&local_178,pwVar8,sVar5 & 0xffffffff,1);
      if ((iVar1 != -1) && ((longlong)local_170 != 0)) {
        lVar13 = 0;
        iVar1 = 0;
        do {
          if (*(short *)((longlong)local_178 + lVar13) == 0x2d) {
            if (iVar1 != 1) {
              uVar11 = local_160 - 1;
              if (local_160 == 0) {
                uVar11 = 0;
              }
              uVar15 = ((uint)(local_160 != 0) - local_160) - iVar1;
              if ((int)uVar15 < 0) {
                local_158 = (wchar_t *)0x0;
                uStack_150 = 0;
LAB_140ba9a2b:
                pwVar8 = L"";
              }
              else {
                uVar2 = local_170 - 1;
                if (local_170 == 0) {
                  uVar2 = 0;
                }
                uVar3 = uVar2;
                if ((int)uVar11 < (int)uVar2) {
                  uVar3 = uVar11;
                }
                uVar7 = (ulonglong)uVar3;
                if ((int)uVar3 < 1) {
                  uVar7 = 0;
                }
                uVar14 = (longlong)(int)uVar11 + (ulonglong)uVar15;
                if ((longlong)(int)uVar2 <= (longlong)uVar14) {
                  uVar14 = (longlong)(int)uVar2;
                }
                if ((longlong)uVar14 < (longlong)uVar7) {
                  uVar14 = uVar7;
                }
                FUN_14006620a(&local_158,local_178 + uVar7,(int)uVar14 - (int)uVar7);
                pwVar8 = local_158;
                if ((int)uStack_150 == 0) goto LAB_140ba9a2b;
              }
              uVar7 = _wcstoui64(pwVar8,(wchar_t **)0x0,10);
              *param_1 = uVar7;
              iVar12 = local_170 + -1;
              if (local_170 == 0) {
                iVar12 = 0;
              }
              uVar11 = 1 - iVar1;
              if ((int)uVar11 < iVar12) {
                puVar10 = &DAT_149dfb77a;
                if (local_170 != 0) {
                  puVar10 = local_178;
                }
                if ((int)uVar11 < 1) {
                  uVar11 = 0;
                }
                FUN_14006620a(&local_188,puVar10 + uVar11,iVar12 - uVar11);
                pwVar8 = L"";
                if (local_180 != 0) {
                  pwVar8 = local_188;
                }
                uVar7 = _wcstoui64(pwVar8,(wchar_t **)0x0,10);
                *param_2 = uVar7;
                if (local_188 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_158 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          iVar1 = iVar1 + -1;
          lVar13 = lVar13 + 2;
        } while ((longlong)local_170 * 2 != lVar13);
      }
    }
    if (local_178 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_168 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba9b16 FUN_140ba9b16 body=560 status=ok
// SIG undefined FUN_140ba9b16(void)

void FUN_140ba9b16(longlong param_1,ulonglong param_2,longlong param_3,char param_4,
                  longlong *param_5)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_128 [32];
  longlong local_108;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  wchar_t *local_e0;
  int local_d8;
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_4 != '\0') {
    (**(code **)(*param_5 + 0x38))(param_5,"Accept-Ranges","bytes");
    local_108 = param_1;
    FUN_140002266(&local_e0,L"bytes %d-%d/%d",param_3,param_2 + param_3 + -1);
    pwVar3 = local_e0;
    if (local_d8 == 0) {
      pwVar3 = L"";
    }
    local_50 = 0;
    if (pwVar3 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar1 = wcslen(pwVar3);
      FUN_1449b853c(local_d0,pwVar3,sVar1 & 0xffffffff,1);
    }
    (**(code **)(*param_5 + 0x38))(param_5,"Content-Range",local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_f8 = (wchar_t *)0x0;
    uStack_f0 = 0;
    FUN_144a83b10(&local_f8,param_2 & 0xffffffff);
    pwVar3 = local_f8;
    if ((int)uStack_f0 == 0) {
      pwVar3 = L"";
    }
    local_50 = 0;
    if (pwVar3 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar1 = wcslen(pwVar3);
      FUN_1449b853c(local_d0,pwVar3,sVar1 & 0xffffffff,1);
    }
    (**(code **)(*param_5 + 0x38))(param_5,"Content-Length",local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0x1a0;
    if (param_3 < param_1) {
      uVar2 = 0xce;
    }
    (**(code **)(*param_5 + 0x28))(param_5,uVar2);
    if (local_f8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_e0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
  }
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000140ba9b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x28))(param_5,200);
  return;
}



// FUNCTION 140ba9d5a FUN_140ba9d5a body=543 status=ok
// SIG undefined FUN_140ba9d5a(void)

void FUN_140ba9d5a(longlong *param_1)

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
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
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
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140ba9f30;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140ba9f30:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ba9f7a FUN_140ba9f7a body=63 status=ok
// SIG undefined FUN_140ba9f7a(void)

undefined1 FUN_140ba9f7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140ba9fba(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 140ba9fba FUN_140ba9fba body=146 status=ok
// SIG undefined FUN_140ba9fba(void)

void FUN_140ba9fba(undefined8 *param_1,undefined8 *param_2)

{
  (**(code **)(param_1[4] + 0x20))(param_1 + 4,param_1[5]);
  *param_1 = *param_2;
  (**(code **)(param_1[4] + 0x20))(param_1 + 4,0);
  param_1[5] = param_2[5];
  FUN_1406022fe(param_1 + 6,param_2 + 6);
  FUN_140baa04c(param_1 + 8,param_2 + 8);
  FUN_140baa04c(param_1 + 0x12,param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0xe1) = *(undefined1 *)((longlong)param_2 + 0xe1);
  FUN_14097db76(param_1,param_2 + 1);
  return;
}



// FUNCTION 140baa04c FUN_140baa04c body=154 status=ok
// SIG undefined FUN_140baa04c(void)

longlong FUN_140baa04c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140baa078;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140baa078:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140baa0e6(param_1,param_2);
  return param_1;
}



// FUNCTION 140baa0e6 FUN_140baa0e6 body=482 status=ok
// SIG undefined FUN_140baa0e6(void)

longlong * FUN_140baa0e6(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_140485a52(param_1,(ulonglong)uVar3);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar3) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar7 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar10 = 0x80;
      if (0x80 < (int)uVar7) {
        uVar10 = uVar7;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar10;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar4 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar4;
    if (iVar4 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar3) {
      lVar6 = *param_1;
      lVar5 = *param_2;
      lVar11 = 0;
      uVar12 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar12 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar12 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar6 + lVar11) = *(undefined4 *)(lVar5 + lVar11);
          *(undefined4 *)(lVar6 + 4 + lVar11) = *(undefined4 *)(lVar5 + 4 + lVar11);
        }
        else {
          *(undefined8 *)(lVar6 + lVar11) = *(undefined8 *)(lVar5 + lVar11);
          *(undefined4 *)(lVar6 + 8 + lVar11) = *(undefined4 *)(lVar5 + 8 + lVar11);
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar6 + 0x20 + lVar11) = 0;
          *(undefined8 *)(lVar6 + 0x10 + lVar11) = *(undefined8 *)(lVar5 + 0x10 + lVar11);
          uVar9 = FUN_14477b664(*(undefined8 *)(lVar5 + 0x18 + lVar11));
          uVar9 = FUN_14477b664(uVar9);
          *(undefined8 *)(lVar6 + 0x18 + lVar11) = uVar9;
          *(undefined8 *)(lVar6 + 0x20 + lVar11) = *(undefined8 *)(lVar5 + 0x20 + lVar11);
          puVar1 = (undefined8 *)(lVar5 + 0x28 + lVar11);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x28 + lVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          *(undefined8 *)(lVar6 + 0x38 + lVar11) = *(undefined8 *)(lVar5 + 0x38 + lVar11);
          *(undefined4 *)(lVar6 + 0x40 + lVar11) = *(undefined4 *)(lVar5 + 0x40 + lVar11);
          *(undefined8 *)(lVar6 + 0x48 + lVar11) = 0;
          *(undefined4 *)(lVar6 + 0x50 + lVar11) = *(undefined4 *)(lVar5 + 0x50 + lVar11);
          *(undefined8 *)(lVar6 + 0x58 + lVar11) = *(undefined8 *)(lVar5 + 0x58 + lVar11);
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x60;
      } while (uVar3 != uVar12);
    }
  }
  return param_1;
}



// FUNCTION 140baa2c8 FUN_140baa2c8 body=40 status=ok
// SIG undefined FUN_140baa2c8(void)

undefined8 FUN_140baa2c8(undefined8 param_1,int param_2)

{
  FUN_140baa2f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140baa2f0 FUN_140baa2f0 body=792 status=ok
// SIG undefined FUN_140baa2f0(void)

void FUN_140baa2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b69fc10;
  param_1[0x72] = &PTR_FUN_14b6a0280;
  param_1[0x73] = &PTR_FUN_14b6a02a0;
  param_1[0x74] = &PTR_FUN_14b6a02d0;
  param_1[0x75] = &PTR_FUN_14b6a02e0;
  param_1[0x76] = &PTR_FUN_14b6a0350;
  param_1[0x77] = &PTR_FUN_14b6a0380;
  param_1[0x78] = &PTR_FUN_14b6a03b0;
  param_1[0x7f] = &PTR_FUN_14b6a0460;
  param_1[0x80] = &PTR_FUN_14b6a04d0;
  param_1[0x81] = &PTR_FUN_14b6a0540;
  param_1[0x82] = &PTR_FUN_14b6a0570;
  param_1[0x83] = &PTR_FUN_14b6a05b0;
  param_1[0x84] = &PTR_FUN_14b6a0650;
  param_1[0x85] = &PTR_FUN_14b6a0670;
  param_1[0x89] = &PTR_FUN_14b6a0690;
  param_1[0x8a] = &PTR_FUN_14b6a0750;
  param_1[0x8b] = &PTR_FUN_14b6a07d0;
  param_1[0x8c] = &PTR_FUN_14b6a0820;
  param_1[0x8d] = &PTR_FUN_14b6a0860;
  param_1[0x8e] = &PTR_FUN_14b6a0880;
  param_1[0x8f] = &PTR_FUN_14b6a08a0;
  param_1[0x90] = &PTR_FUN_14b6a08c0;
  param_1[0x91] = &PTR_FUN_14b6a08e0;
  param_1[0x92] = &PTR_FUN_14b6a0900;
  param_1[0x93] = &PTR_FUN_14b6a0920;
  param_1[0x94] = &PTR_FUN_14b6a0940;
  param_1[0x95] = &PTR_FUN_14b6a0960;
  param_1[0x96] = &PTR_FUN_14b6a0980;
  param_1[0x34b] = &PTR_FUN_14b6a09a0;
  param_1[0x352] = &PTR_FUN_14b6a09b0;
  param_1[0x353] = &PTR_FUN_14b6a09f0;
  param_1[0x354] = &PTR_FUN_14b6a0a30;
  param_1[0x355] = &PTR_FUN_14b6a0a80;
  param_1[0x356] = &PTR_FUN_14b6a0ab0;
  param_1[0x359] = &PTR_FUN_14b6a0af0;
  param_1[0x35a] = &PTR_FUN_14b6a0b00;
  param_1[0x35b] = &PTR_FUN_14b6a0b30;
  param_1[0x35c] = &PTR_FUN_14b6a0bd0;
  param_1[0x4bf] = &PTR_FUN_14b6a0bf0;
  param_1[0x4c0] = &PTR_FUN_14b6a0c30;
  FUN_140771728(param_1[0x525],*(undefined4 *)(param_1 + 0x526));
  if (param_1[0x525] != 0) {
    FUN_1400020a8();
  }
  FUN_140771728(param_1[0x523],*(undefined4 *)(param_1 + 0x524));
  if (param_1[0x523] != 0) {
    FUN_1400020a8();
  }
  FUN_14086a01a(param_1 + 0x51f,1);
  param_1[0x4d4] = &PTR_FUN_14b6a0e80;
  if (param_1[0x4dc] != 0) {
    FUN_140872868(param_1 + 0x4d4);
  }
  FUN_140639928(param_1 + 0x4d4);
  if (param_1[0x4c7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c1] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 140baa608 FUN_140baa608 body=313 status=ok
// SIG undefined FUN_140baa608(void)

void FUN_140baa608(longlong param_1,longlong param_2,longlong param_3,int param_4,byte *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_338 [792];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((((lVar2 != 0) && (lVar3 = (longlong)*(int *)(lVar2 + 0x18), lVar3 != -1)) &&
      (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) &&
     (((*param_5 & 0x80) != 0 &&
      (_Src = (void *)((longlong)param_4 * 0x310 + *(longlong *)(param_3 + 0x70)),
      _Src != (void *)0x0)))) {
    if (*(char *)(*(longlong *)(lVar2 + 0xe8) + 0xf8 + lVar3 * 0x310) !=
        *(char *)((longlong)_Src + 0xf8)) {
      if (*(char *)((longlong)_Src + 0xf8) == '\0') {
        FUN_1405427b8(*(longlong *)(param_2 + 0x9c8) + 0xdb0,
                      *(undefined8 *)(*(longlong *)(lVar2 + 0xf8) + lVar3 * 0x10),
                      *(undefined8 *)(*(longlong *)(lVar2 + 0xf8) + 8 + lVar3 * 0x10));
      }
      else {
        FUN_146d47824();
      }
    }
    memcpy(local_338,_Src,0x310);
    puVar1 = (undefined4 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 0xf8) +
             (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x18) * 0x10);
    local_348 = *puVar1;
    uStack_344 = puVar1[1];
    uStack_340 = puVar1[2];
    uStack_33c = puVar1[3];
    FUN_140baaacb(param_1 + 0x50,&local_348,local_338);
    FUN_140baa742(*(undefined8 *)(param_1 + 0x48),local_338);
  }
  if ((local_20 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140baa742 FUN_140baa742 body=404 status=ok
// SIG undefined FUN_140baa742(void)

void FUN_140baa742(longlong param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(lVar3 + 0xe8);
  lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x310;
  local_28 = *(undefined8 *)(lVar4 + 0x1b8 + lVar5);
  puVar1 = (undefined8 *)(lVar4 + 0x1a8 + lVar5);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  puVar1 = (undefined8 *)(lVar4 + 0x230 + lVar5);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  puVar1 = (undefined8 *)(lVar4 + 0x240 + lVar5);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  if ((*(char *)(param_1 + 0x20) == '\0') &&
     (1e-08 < ABS(*(double *)((longlong)param_2 + 0x2d0) + -3.4028234663852886e+38))) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if ((*(char *)(param_1 + 0x21) == '\0') &&
     (1e-08 < ABS(*(double *)((longlong)param_2 + 0x2f8) + -3.4028234663852886e+38))) {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  memcpy((void *)(*(longlong *)(lVar3 + 0xe8) + lVar5),param_2,0x310);
  FUN_140baa8d8(lVar5 + *(longlong *)(lVar3 + 0xe8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe8);
    lVar4 = (longlong)*(int *)(param_1 + 0x18) * 0x310;
    *(undefined8 *)(lVar3 + 0x1b8 + lVar4) = local_28;
    puVar2 = (undefined4 *)(lVar3 + 0x1a8 + lVar4);
    *puVar2 = (undefined4)local_38;
    puVar2[1] = local_38._4_4_;
    puVar2[2] = (undefined4)uStack_30;
    puVar2[3] = uStack_30._4_4_;
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe8);
    lVar4 = (longlong)*(int *)(param_1 + 0x18) * 0x310;
    puVar1 = (undefined8 *)(lVar3 + 0x240 + lVar4);
    *puVar1 = local_48;
    puVar1[1] = uStack_40;
    puVar2 = (undefined4 *)(lVar3 + 0x230 + lVar4);
    *puVar2 = (undefined4)local_58;
    puVar2[1] = local_58._4_4_;
    puVar2[2] = (undefined4)uStack_50;
    puVar2[3] = uStack_50._4_4_;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140baa8d8 FUN_140baa8d8 body=499 status=ok
// SIG undefined FUN_140baa8d8(void)

void FUN_140baa8d8(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0xfc) == 2) && (*(int *)(param_1 + 0x100) == 2)) &&
     (*(int *)(param_1 + 0x104) == 2)) {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x139) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x118);
  if ((iVar2 == 2) && (*(int *)(param_1 + 0x114) == 2)) {
    *(undefined1 *)(param_1 + 0x13a) = 0;
  }
  if (((*(int *)(param_1 + 0xfc) != 1) && (*(int *)(param_1 + 0x100) != 1)) &&
     (*(int *)(param_1 + 0x104) != 1)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (iVar1 != 1) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (iVar2 != 1) {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x114);
  if (iVar3 != 1) {
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if ((iVar1 == 1) &&
     (iVar1 = 1,
     *(double *)(param_1 + 0x120) <= 0.009999999776482582 &&
     *(double *)(param_1 + 0x120) != 0.009999999776482582)) {
    if (*(char *)(param_1 + 0x139) == '\x01') {
      *(undefined8 *)(param_1 + 0x120) = 0x3f847ae140000000;
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 2;
      iVar1 = 2;
    }
  }
  if ((iVar2 == 1) &&
     (iVar2 = 1,
     *(double *)(param_1 + 0x130) <= 0.009999999776482582 &&
     *(double *)(param_1 + 0x130) != 0.009999999776482582)) {
    if (*(char *)(param_1 + 0x13a) == '\x01') {
      *(undefined8 *)(param_1 + 0x130) = 0x3f847ae140000000;
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = 2;
      iVar2 = 2;
    }
  }
  if ((iVar3 == 1) &&
     (iVar3 = 1,
     *(double *)(param_1 + 0x128) <= 0.009999999776482582 &&
     *(double *)(param_1 + 0x128) != 0.009999999776482582)) {
    if (*(char *)(param_1 + 0x13a) == '\x01') {
      *(undefined8 *)(param_1 + 0x128) = 0x3f847ae140000000;
    }
    else {
      *(undefined4 *)(param_1 + 0x114) = 2;
      iVar3 = 2;
    }
  }
  if (((*(char *)(param_1 + 0x268) != '\0') || (*(char *)(param_1 + 0x269) == '\x01')) &&
     ((iVar2 == 2 || iVar1 == 2) || iVar3 == 2)) {
    *(undefined2 *)(param_1 + 0x268) = 0;
  }
  return;
}



// FUNCTION 140baaacb FUN_140baaacb body=2690 status=ok
// SIG undefined FUN_140baaacb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140baaacb(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  bool bVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_348 [40];
  double local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar12 = 0;
  uVar41 = 0;
  uVar42 = 0x3ff00000;
  uVar43 = 0;
  uVar44 = 0x3ff00000;
  bVar10 = true;
  do {
    bVar17 = bVar10;
    plVar2 = *(longlong **)(param_1 + lVar12 * 8);
    if ((plVar2 != (longlong *)0x0) &&
       (plVar3 = *(longlong **)(param_2 + lVar12 * 8), plVar3 != plVar2 && plVar3 != (longlong *)0x0
       )) {
      lVar14 = (longlong)(int)plVar2[1];
      lVar4 = *(longlong *)(*plVar2 + 0x28);
      lVar5 = *(longlong *)(*plVar2 + 0x48);
      lVar15 = lVar14 * 0x10;
      dVar19 = (double)*(float *)(lVar5 + 0xc + lVar15);
      dStack_170 = (double)*(float *)(lVar5 + 4 + lVar15);
      local_178 = (double)*(float *)(lVar5 + lVar15);
      local_168._8_4_ = SUB84(dVar19,0);
      local_168._0_8_ = (double)*(float *)(lVar5 + 8 + lVar15);
      local_168._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      pdVar16 = (double *)(lVar4 + lVar14 * 0x18);
      local_158 = *pdVar16;
      dStack_150 = pdVar16[1];
      local_148 = *(double *)(lVar4 + 0x10 + lVar14 * 0x18);
      uStack_140 = 0;
      local_138 = (double)CONCAT44(uVar42,uVar41);
      uStack_130 = (double)CONCAT44(uVar44,uVar43);
      local_128 = 1.0;
      uStack_120 = 0;
      lVar14 = (longlong)(int)plVar3[1];
      lVar4 = *(longlong *)(*plVar3 + 0x28);
      lVar5 = *(longlong *)(*plVar3 + 0x48);
      lVar15 = lVar14 * 0x10;
      dVar19 = (double)*(float *)(lVar5 + 0xc + lVar15);
      dStack_1f0 = (double)*(float *)(lVar5 + 4 + lVar15);
      local_1f8 = (double)*(float *)(lVar5 + lVar15);
      local_1e8._8_4_ = SUB84(dVar19,0);
      local_1e8._0_8_ = (double)*(float *)(lVar5 + 8 + lVar15);
      local_1e8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      local_1d8 = *(undefined1 (*) [16])(lVar4 + lVar14 * 0x18);
      local_1c8 = *(double *)(lVar4 + 0x10 + lVar14 * 0x18);
      uStack_1c0 = 0;
      local_1b8 = (double)CONCAT44(uVar42,uVar41);
      uStack_1b0 = (double)CONCAT44(uVar44,uVar43);
      local_1a8 = 1.0;
      uStack_1a0 = 0;
      pdVar16 = &local_178;
      FUN_1449437a2(&local_178,&local_2f8,&local_1f8);
      lVar12 = lVar12 * 0x60;
      pauVar1 = (undefined1 (*) [16])(param_3 + lVar12);
      dVar19 = local_2b8._0_8_;
      dVar6 = local_2b8._8_8_;
      dVar28 = local_2a8._0_8_;
      dVar25 = local_2a8._8_8_;
      auVar26 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar12);
      dVar39 = auVar26._0_8_;
      dVar23 = auVar26._8_8_;
      auVar37 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar12);
      dVar24 = auVar37._0_8_;
      auVar26 = minpd(auVar26,local_2b8);
      auVar29 = minpd(auVar37,local_2a8);
      auVar30._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
      auVar30._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
      iVar11 = movmskpd((int)lVar12,auVar30);
      auVar26._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      uVar13 = movmskpd((int)pdVar16,auVar26);
      if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
        dVar34 = *(double *)*pauVar1;
        dVar36 = *(double *)(*pauVar1 + 8);
        dVar40 = *(double *)pauVar1[1];
        dVar9 = *(double *)(pauVar1[1] + 8);
        auVar32._0_8_ =
             dVar9 * local_2e8 * 1.0 +
             ((local_2f8 * dVar36 * 1.0 + dVar40 * dStack_2e0) - dVar34 * dStack_2f0);
        auVar32._8_8_ =
             dVar40 * local_2e8 * -1.0 +
             ((local_2f8 * dVar34 * -1.0 + dVar9 * dStack_2e0) - dVar36 * dStack_2f0);
        dVar47 = *(double *)pauVar1[2] * dVar19;
        dVar48 = *(double *)(pauVar1[2] + 8) * dVar6;
        dVar45 = *(double *)pauVar1[3] * dVar28;
        dVar46 = *(double *)(pauVar1[3] + 8) * dVar25;
        dVar33 = dVar48 * local_2f8 - dStack_2f0 * dVar47;
        dVar35 = dVar45 * dStack_2f0 - local_2e8 * dVar48;
        dVar20 = dVar47 * local_2e8 - local_2f8 * dVar45;
        dVar38 = dVar46 * dStack_2e0 - dStack_2e0 * dVar46;
        dVar35 = dVar35 + dVar35;
        dVar20 = dVar20 + dVar20;
        dVar33 = dVar33 + dVar33;
        dVar38 = dVar38 + dVar38;
        uVar41 = 0;
        uVar42 = 0x3ff00000;
        uVar43 = 0;
        uVar44 = 0x3ff00000;
        dVar48 = (dVar35 * local_2e8 - dVar33 * local_2f8) + dStack_2e0 * dVar20 + dVar48 +
                 dStack_2d0;
        *(double *)*pauVar1 =
             dVar36 * local_2e8 * -1.0 +
             dVar40 * dStack_2f0 + dVar9 * local_2f8 * 1.0 + dVar34 * dStack_2e0;
        *(double *)(*pauVar1 + 8) =
             dVar34 * local_2e8 * 1.0 +
             dVar9 * dStack_2f0 + dVar40 * local_2f8 * -1.0 + dVar36 * dStack_2e0;
        pauVar1[1] = auVar32;
        auVar29._8_4_ = SUB84(dVar48,0);
        auVar29._0_8_ =
             (dVar33 * dStack_2f0 - local_2e8 * dVar20) + dStack_2e0 * dVar35 + dVar47 + local_2d8;
        auVar29._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        pauVar1[2] = auVar29;
        *(double *)pauVar1[3] =
             (dVar20 * local_2f8 - dStack_2f0 * dVar35) + dStack_2e0 * dVar33 + dVar45 + local_2c8;
        *(double *)(pauVar1[3] + 8) =
             (dVar38 * dStack_2e0 - dVar38 * dStack_2e0) + dStack_2e0 * dVar38 + dVar46 + dStack_2c0
        ;
        dVar39 = dVar39 * dVar19;
        dVar23 = dVar23 * dVar6;
        dVar24 = dVar24 * dVar28;
        dVar25 = auVar37._8_8_ * dVar25;
      }
      else {
        dVar33 = dStack_2f0 + dStack_2f0;
        dVar20 = local_2e8 + local_2e8;
        dVar35 = local_2f8 * (local_2f8 + local_2f8);
        local_1a8 = (1.0 - (dVar35 + dStack_2f0 * dVar33)) * dVar28;
        dVar38 = (local_2f8 + local_2f8) * dStack_2e0;
        local_1b8 = (dVar33 * dStack_2e0 + local_2f8 * dVar20) * dVar28;
        dVar25 = dVar25 * auVar37._8_8_;
        local_308._8_4_ = SUB84(dVar25,0);
        local_308._0_8_ = dVar28 * dVar24;
        local_308._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        uStack_1b0 = (dVar20 * dStack_2f0 - dVar38) * dVar28;
        local_1f8 = ((double)CONCAT44(uVar42,uVar41) - (local_2e8 * dVar20 + dStack_2f0 * dVar33)) *
                    dVar19;
        dVar28 = ((double)CONCAT44(uVar44,uVar43) - (local_2e8 * dVar20 + dVar35)) * dVar6;
        dStack_1f0 = (dVar33 * local_2f8 + dVar20 * dStack_2e0) * dVar19;
        local_1c8 = (dVar20 * dStack_2f0 + dVar38) * dVar6;
        local_1e8._8_8_ = 0;
        local_1e8._0_8_ = (local_2f8 * dVar20 - dVar33 * dStack_2e0) * dVar19;
        local_1d8._8_4_ = SUB84(dVar28,0);
        local_1d8._0_8_ = (dVar33 * local_2f8 - dVar20 * dStack_2e0) * dVar6;
        local_1d8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_2d8;
        dStack_190 = dStack_2d0;
        local_188 = local_2c8;
        uStack_180 = 0x3ff0000000000000;
        dVar33 = *(double *)*pauVar1;
        dVar35 = *(double *)(*pauVar1 + 8);
        dVar48 = *(double *)pauVar1[1];
        dVar34 = dVar35 + dVar35;
        dVar25 = dVar48 + dVar48;
        dVar36 = dVar33 * (dVar33 + dVar33);
        local_228 = (1.0 - (dVar36 + dVar35 * dVar34)) * dVar24;
        dVar40 = *(double *)*pauVar1 * dVar25;
        dVar28 = *(double *)(pauVar1[1] + 8);
        dVar20 = dVar25 * dVar28;
        dVar38 = (dVar33 + dVar33) * *(double *)(pauVar1[1] + 8);
        dVar28 = dVar34 * dVar28;
        local_238 = (dVar28 + dVar40) * dVar24;
        local_258 = (dVar34 * dVar33 - dVar20) * dVar23;
        dStack_230 = (dVar25 * dVar35 - dVar38) * dVar24;
        local_318._8_4_ = SUB84(dVar6 * dVar23,0);
        local_318._0_8_ = dVar19 * dVar39;
        local_318._12_4_ = (int)((ulonglong)(dVar6 * dVar23) >> 0x20);
        local_278 = ((double)CONCAT44(uVar42,uVar41) - (dVar48 * dVar25 + dVar35 * dVar34)) * dVar39
        ;
        dStack_250 = ((double)CONCAT44(uVar44,uVar43) - (dVar48 * dVar25 + dVar36)) * dVar23;
        dStack_270 = (dVar34 * dVar33 + dVar20) * dVar39;
        local_248 = (dVar25 * dVar35 + dVar38) * dVar23;
        local_268 = (dVar40 - dVar28) * dVar39;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)pauVar1[2];
        uStack_210 = *(undefined8 *)(pauVar1[2] + 8);
        local_208 = *(undefined4 *)pauVar1[3];
        uStack_204 = *(undefined4 *)(pauVar1[3] + 4);
        uStack_200 = 0;
        uStack_1fc = 0x3ff00000;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        auVar26 = _DAT_149934d80;
        local_320 = (double)local_168._0_8_;
        dVar19 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                 local_178 * local_178 + dStack_170 * dStack_170;
        dVar28 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
        dVar39 = local_128 * local_128 + local_138 * local_138 + uStack_130 * uStack_130;
        uVar18 = -(ulonglong)(0.0 <= dVar19 + -9.99999993922529e-09);
        dVar19 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar19)) & uVar18);
        uVar18 = -(ulonglong)(0.0 <= dVar28 + -9.99999993922529e-09);
        dVar28 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar28)) & uVar18);
        uVar41 = (undefined4)DAT_149934d80;
        uVar42 = DAT_149934d80._4_4_;
        uVar43 = DAT_149934d80._8_4_;
        uVar44 = DAT_149934d80._12_4_;
        dVar24 = (double)local_308._0_8_;
        dVar25 = (double)local_308._8_8_;
        uVar18 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
        dVar6 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar39)) & uVar18);
        dVar39 = (double)local_318._0_8_;
        dVar23 = (double)local_318._8_8_;
        auVar21._8_8_ = -(ulonglong)(0.0 <= (double)local_318._8_8_);
        auVar21._0_8_ = -(ulonglong)(0.0 <= (double)local_318._0_8_);
        auVar37 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
        dVar20 = (double)(~-(ulonglong)(0.0 <= (double)local_308._0_8_) & 0xbff0000000000000 |
                         (ulonglong)
                         ((uint)(-(ulonglong)(0.0 <= (double)local_308._0_8_) >> 0x20) & 0x3ff00000)
                         << 0x20);
        dVar38 = auVar37._0_8_;
        local_178 = local_178 * dVar19 * dVar38;
        dStack_170 = dStack_170 * dVar19 * dVar38;
        local_168._0_8_ = dVar19 * (double)local_168._0_8_ * dVar38;
        dVar19 = auVar37._8_8_;
        local_148 = dVar28 * local_148 * dVar19;
        dStack_150 = dStack_150 * dVar28 * dVar19;
        local_158 = dVar19 * local_158 * dVar28;
        local_128 = dVar6 * local_128 * dVar20;
        uStack_130 = uStack_130 * dVar6 * dVar20;
        local_138 = dVar20 * local_138 * dVar6;
        FUN_14481fd10(&local_298,&local_178);
        dVar19 = local_288 * local_288 + local_298 * local_298;
        dVar28 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar27._0_8_ = dVar19 + dVar28;
        auVar27._8_8_ = dVar19 + dVar28;
        auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
        auVar37 = sqrtpd(auVar27,auVar27);
        auVar30 = divpd(auVar26,auVar37);
        auVar31._0_8_ = auVar30._0_8_ * local_288;
        auVar31._8_8_ = auVar30._8_8_ * dStack_280;
        uVar18 = (ulonglong)(dStack_290 * auVar30._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
        auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar22);
        auVar37._8_4_ = (int)uVar18;
        auVar37._0_8_ =
             (ulonglong)(local_298 * auVar30._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
        auVar37._12_4_ = (int)(uVar18 >> 0x20);
        *pauVar1 = auVar37;
        pauVar1[1] = auVar26;
        *(undefined8 *)pauVar1[2] = local_118;
        *(undefined8 *)(pauVar1[2] + 8) = uStack_110;
        *(undefined8 *)pauVar1[3] = local_108;
        *(undefined8 *)(pauVar1[3] + 8) = 0;
      }
      auVar8._8_4_ = SUB84(dVar23,0);
      auVar8._0_8_ = dVar39;
      auVar8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      pauVar1[4] = auVar8;
      auVar7._8_4_ = SUB84(dVar25,0);
      auVar7._0_8_ = dVar24;
      auVar7._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      pauVar1[5] = auVar7;
    }
    lVar12 = 1;
    bVar10 = false;
  } while (bVar17);
  if ((local_f0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bab54e FUN_140bab54e body=1154 status=ok
// SIG undefined FUN_140bab54e(void)

void FUN_140bab54e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_140bab639;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_140bab639:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
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
            goto LAB_140bab706;
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
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
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
LAB_140bab706:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140bab9d2(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bab9d2 FUN_140bab9d2 body=1212 status=ok
// SIG undefined FUN_140bab9d2(void)

void FUN_140bab9d2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  code cVar12;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  PSRWLOCK local_128;
  code *local_120;
  longlong *local_118;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_140babd04;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar10) == 0) goto LAB_140babd04;
      lVar10 = lVar10 + 8;
    } while ((longlong)*(int *)(param_1 + 0x80) * 8 != lVar10);
  }
  lVar10 = param_1 + 0x68;
  FUN_140bad218(param_1,&local_120,lVar10);
  lVar4 = param_1 + 0x140;
  FUN_140a6a9d4(lVar4);
  FUN_140368b56(&local_120);
  if (*(longlong *)(param_1 + 0x140) == 0) {
LAB_140babd32:
    FUN_140bb44d4(param_1);
    goto LAB_140babd04;
  }
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    lVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x150) + lVar11) == 0) goto LAB_140babd32;
      lVar11 = lVar11 + 8;
    } while ((longlong)*(int *)(param_1 + 0x158) * 8 != lVar11);
  }
  lVar11 = *(longlong *)(param_1 + 0x20);
  iVar7 = -1;
  if (lVar11 == 0) {
LAB_140babe44:
    lVar11 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_120 = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1459f2e4c;
      local_148 = &LAB_148c39de3;
      local_150 = &LAB_1457a9eb2;
      local_158 = &DAT_149e063b2;
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = 0x3de0;
      local_140 = &local_120;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140babe44;
    uVar9 = FUN_1401e6c61();
    iVar7 = FUN_140df7d8e(lVar11,uVar9);
    cVar6 = FUN_14030d5d4(lVar11);
    if (cVar6 != '\0') goto LAB_140babd04;
  }
  FUN_140bb46a8(param_1,&local_120);
  pcVar5 = local_120;
  local_128 = (PSRWLOCK)(local_120 + 0x638);
  AcquireSRWLockExclusive(local_128);
  plVar2 = local_118;
  *(int *)(pcVar5 + 0x630) = *(int *)(pcVar5 + 0x630) + 1;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  cVar12 = (code)0x0;
  FUN_140babe90(pcVar5,lVar4,0);
  FUN_140bafb3c(pcVar5,lVar10,0);
  if (-1 < iVar7) {
    cVar12 = (code)(iVar7 < *(int *)(pcVar5 + 0x44));
  }
  if (cVar12 == pcVar5[0x400]) {
    if (*(int *)(pcVar5 + 0x404) == 0) {
      iVar8 = 1;
      goto LAB_140babd41;
    }
  }
  else {
    iVar8 = *(int *)(pcVar5 + 0x404) + 1;
LAB_140babd41:
    pcVar5[0x400] = cVar12;
    *(int *)(pcVar5 + 0x404) = iVar8;
  }
  FUN_140bac216(param_1,&local_120);
  FUN_140bac58e(pcVar5,&local_120);
  if (local_120 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140babf00(pcVar5,lVar11);
  if ((*(double *)(pcVar5 + 0x440) != 80.0) || (NAN(*(double *)(pcVar5 + 0x440)))) {
LAB_140babd6e:
    *(undefined8 *)(pcVar5 + 0x440) = 0x4054000000000000;
    *(undefined8 *)(pcVar5 + 0x448) = 0x4054000000000000;
    *(undefined8 *)(pcVar5 + 0x450) = 0;
    *(int *)(pcVar5 + 0x458) = *(int *)(pcVar5 + 0x458) + 1;
  }
  else {
    if ((*(double *)(pcVar5 + 0x448) != 80.0) || (NAN(*(double *)(pcVar5 + 0x448))))
    goto LAB_140babd6e;
    if (((*(double *)(pcVar5 + 0x450) != 0.0) || (NAN(*(double *)(pcVar5 + 0x450)))) ||
       (*(int *)(pcVar5 + 0x458) == 0)) goto LAB_140babd6e;
  }
  *(int *)(pcVar5 + 0x200) = *(int *)(pcVar5 + 0x200) + 1;
  FUN_140d128b6(param_1,&local_120);
  pcVar5 = local_120;
  SRWLock = (PSRWLOCK)(local_120 + 0x638);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(pcVar5 + 0x630) = *(int *)(pcVar5 + 0x630) + 1;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_118 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar3 = (int *)((longlong)local_118 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  cVar12 = (code)0x0;
  FUN_140babe90(pcVar5,lVar10,0);
  FUN_140bafb3c(pcVar5,lVar4,0);
  if (-1 < iVar7) {
    cVar12 = (code)(iVar7 < *(int *)(pcVar5 + 0x44));
  }
  if (cVar12 == pcVar5[0x400]) {
    if (*(int *)(pcVar5 + 0x404) == 0) {
      iVar7 = 1;
      goto LAB_140babd5b;
    }
  }
  else {
    iVar7 = *(int *)(pcVar5 + 0x404) + 1;
LAB_140babd5b:
    pcVar5[0x400] = cVar12;
    *(int *)(pcVar5 + 0x404) = iVar7;
  }
  FUN_140bac216(param_1,&local_120);
  FUN_140bac58e(pcVar5,&local_120);
  if (local_120 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140babf00(pcVar5,lVar11);
  *(int *)(pcVar5 + 0x200) = *(int *)(pcVar5 + 0x200) + 1;
  ReleaseSRWLockExclusive(SRWLock);
  ReleaseSRWLockExclusive(local_128);
LAB_140babd04:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140babe90 FUN_140babe90 body=111 status=ok
// SIG undefined FUN_140babe90(void)

void FUN_140babe90(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  wchar_t *pwStack_88;
  undefined8 uStack_80;
  wchar_t *pwStack_78;
  undefined8 uStack_70;
  ulonglong uStack_60;
  
  if (*param_2 == 0) {
LAB_140babefb:
    bVar16 = false;
  }
  else {
    if ((longlong)(int)param_2[3] != 0) {
      lVar14 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar14) == 0) goto LAB_140babefb;
        lVar14 = lVar14 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar14);
    }
    bVar16 = (*(byte *)(*param_2 + 0x46c) & 2) == 0;
  }
  if (bVar16 != (bool)*(char *)(param_1 + 0x430)) {
    iVar6 = *(int *)(param_1 + 0x434) + 1;
LAB_140babee4:
    *(bool *)(param_1 + 0x430) = bVar16;
    *(int *)(param_1 + 0x434) = iVar6;
    FUN_140baca80();
    return;
  }
  if (*(int *)(param_1 + 0x434) == 0) {
    iVar6 = 1;
    goto LAB_140babee4;
  }
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 == 0) {
LAB_140bad054:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uStack_60 ^ (ulonglong)auStack_c8);
  }
  if ((longlong)(int)param_2[3] != 0) {
    lVar14 = 0;
    do {
      if (*(longlong *)(param_2[2] + lVar14) == 0) goto LAB_140bad054;
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)param_2[3] * 8 != lVar14);
  }
  FUN_140bad930(param_1,param_2);
  lVar14 = FUN_14087dee0(param_2);
  if (lVar14 == 0) {
    FUN_145780fe4(param_1 + 0x498,&DAT_149e62e78);
  }
  else {
    pwStack_88 = *(wchar_t **)(lVar14 + 0xd8);
    uStack_80 = *(undefined8 *)(lVar14 + 0xe0);
    FUN_140bad172(&pwStack_78);
    FUN_140775538(param_1 + 0x498,&pwStack_78);
    if (pwStack_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(&pwStack_78,L"Unknown");
  FUN_140775538(param_1 + 0x468,&pwStack_78);
  if (pwStack_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar14 = *param_2;
  if ((lVar14 != 0) && (lVar3 = FUN_14001d26e(lVar14), lVar3 != 0)) {
    lVar14 = FUN_14001d26e(lVar14);
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar14 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar14 + 8);
    }
    pwStack_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    FUN_1400b2348(puVar7,&pwStack_88,1);
    uStack_70 = uStack_80;
    uVar9 = (int)uStack_80 - 1;
    if ((int)uStack_80 == 0) {
      uVar9 = 0;
    }
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        pwStack_88[uVar10] =
             (ushort)((ushort)pwStack_88[uVar10] - 0x41 < 0x1a) * 0x20 + pwStack_88[uVar10];
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
    }
    pwStack_78 = pwStack_88;
    pwStack_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    FUN_140775538(param_1 + 0x468,&pwStack_78);
    if (pwStack_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (pwStack_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  lStack_90 = param_1 + 0x550;
  FUN_140bad112(lStack_90,&DAT_149dfb77a);
  lStack_98 = param_1 + 0x568;
  FUN_140bad112(lStack_98,&DAT_149dfb77a);
  if (((*(char *)(param_1 + 0x1c0) != '\0') || (*(char *)(param_1 + 0x1c8) == '\x01')) &&
     ((longlong)*(int *)(param_1 + 0x418) != 0)) {
    plVar13 = *(longlong **)(param_1 + 0x410);
    plVar11 = plVar13 + (longlong)*(int *)(param_1 + 0x418) * 3;
    do {
      if (*plVar13 != 0) {
        puVar7 = *(undefined4 **)(*plVar13 + 8);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = &DAT_14c9485f0;
        }
        pwStack_78 = (wchar_t *)0x0;
        uStack_70 = 0;
        FUN_1400b2348(puVar7,&pwStack_78,1);
        pwVar4 = pwStack_78;
        if ((int)uStack_70 == 0) {
          pwVar4 = L"";
        }
        lVar14 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)pwVar4 + lVar14);
          uVar15 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)L"Element" + lVar14);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140bacd85;
            }
            iVar6 = uVar15 - uVar9;
            goto LAB_140bacdb1;
          }
          if (uVar1 == 0) break;
LAB_140bacd85:
          lVar14 = lVar14 + 2;
        }
        iVar6 = 0;
LAB_140bacdb1:
        if (pwStack_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (iVar6 == 0) {
          if ((plVar13 != (longlong *)0x0) && (iVar6 = (int)plVar13[2], 0 < iVar6)) {
            lVar14 = 0;
            goto LAB_140bacdf1;
          }
          break;
        }
      }
      plVar13 = plVar13 + 3;
    } while (plVar13 != plVar11);
  }
  goto LAB_140bacc7b;
LAB_140bacdf1:
  do {
    lVar3 = plVar13[1];
    lVar12 = lVar14 * 0x60;
    if (*(char *)(lVar3 + 0x5c + lVar12) == '\x01') {
      if (*(longlong *)(lVar3 + lVar12) == 0) {
LAB_140baced1:
        pwStack_78 = L"value";
        uStack_70 = CONCAT35(uStack_70._5_3_,5);
        uVar9 = FUN_14001a6c0(&pwStack_78,1);
        lVar8 = lStack_90;
        if (*(int *)(lVar3 + 0x10 + lVar12) != *(int *)(lVar3 + 0x3c + lVar12)) {
          lVar3 = lVar3 + lVar12;
          lVar12 = lVar3 + 0x40;
          if (*(longlong *)(lVar3 + 0x48) != 0) {
            lVar12 = *(longlong *)(lVar3 + 0x48);
          }
          iVar6 = *(int *)(lVar12 + (ulonglong)
                                    (*(int *)(lVar3 + 0x50) - 1U &
                                    (uVar9 << 0x10 | uVar9 & 0xffff) + ((uVar9 & 0xffff) >> 4) +
                                    ((uVar9 >> 0x10) << 0x13 | uVar9 >> 0x10)) * 4);
          if (iVar6 != -1) {
            do {
              lVar12 = *(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20;
              if (*(ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20) ==
                  (ulonglong)uVar9) break;
              iVar6 = *(int *)(lVar12 + 0x18);
              lVar12 = 0;
            } while (iVar6 != -1);
            goto LAB_140bacf7a;
          }
        }
        lVar12 = 0;
      }
      else {
        puVar7 = *(undefined4 **)(*(longlong *)(lVar3 + lVar12) + 8);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = &DAT_14c9485f0;
        }
        pwStack_78 = (wchar_t *)0x0;
        uStack_70 = 0;
        FUN_1400b2348(puVar7,&pwStack_78,1);
        FUN_1400b22c2(&pwStack_88,"mode02");
        pwVar4 = pwStack_88;
        if ((int)uStack_80 == 0) {
          pwVar4 = L"";
        }
        if (pwVar4 == (wchar_t *)0x0) {
          bVar16 = false;
        }
        else {
          sVar5 = wcslen(pwVar4);
          uStack_a0 = 0xffffffff;
          uStack_a8 = 0;
          iVar6 = FUN_1447ee042(&pwStack_78,pwVar4,sVar5 & 0xffffffff,1);
          bVar16 = iVar6 != -1;
        }
        if (pwStack_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (pwStack_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar3 = plVar13[1];
        if (!bVar16) goto LAB_140baced1;
        pwStack_78 = L"value";
        uStack_70 = CONCAT35(uStack_70._5_3_,5);
        uVar9 = FUN_14001a6c0(&pwStack_78,1);
        if (*(int *)(lVar3 + 0x10 + lVar12) == *(int *)(lVar3 + 0x3c + lVar12)) {
LAB_140bad0e0:
          lVar12 = 0;
          lVar8 = lStack_98;
        }
        else {
          lVar3 = lVar3 + lVar12;
          lVar12 = lVar3 + 0x40;
          if (*(longlong *)(lVar3 + 0x48) != 0) {
            lVar12 = *(longlong *)(lVar3 + 0x48);
          }
          iVar6 = *(int *)(lVar12 + (ulonglong)
                                    (*(int *)(lVar3 + 0x50) - 1U &
                                    (uVar9 << 0x10 | uVar9 & 0xffff) + ((uVar9 & 0xffff) >> 4) +
                                    ((uVar9 >> 0x10) << 0x13 | uVar9 >> 0x10)) * 4);
          if (iVar6 == -1) goto LAB_140bad0e0;
          do {
            lVar12 = *(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20;
            lVar8 = lStack_98;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20) ==
                (ulonglong)uVar9) break;
            iVar6 = *(int *)(lVar12 + 0x18);
            lVar12 = 0;
            lVar8 = lStack_98;
          } while (iVar6 != -1);
        }
      }
LAB_140bacf7a:
      FUN_140775496(lVar8,lVar12 + 8);
      iVar6 = (int)plVar13[2];
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 < iVar6);
LAB_140bacc7b:
  lVar14 = FUN_140b47a16(param_2,&DAT_14cbcb7b0);
  if ((lVar14 == 0) || (*(char *)(lVar14 + 8) != '\0')) {
    bVar16 = false;
  }
  else {
    bVar16 = *(longlong *)(lVar14 + 0x28) != 0;
  }
  if ((bool)*(char *)(param_1 + 0x4d0) == bVar16) {
    if (*(int *)(param_1 + 0x4d4) != 0) goto LAB_140baccbf;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x4d4) + 1;
  }
  *(bool *)(param_1 + 0x4d0) = bVar16;
  *(int *)(param_1 + 0x4d4) = iVar6;
LAB_140baccbf:
  if ((uStack_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140babf00 FUN_140babf00 body=354 status=ok
// SIG undefined FUN_140babf00(void)

void FUN_140babf00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong *local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  cVar1 = FUN_140bac064(param_1 + 0x218);
  if ((cVar1 == '\0') && (DAT_14cbd5800 != '\x01')) {
    if (*(char *)(param_1 + 0x3f8) == '\0') {
      if (*(int *)(param_1 + 0x3fc) != 0) goto LAB_140babf54;
      iVar3 = 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x3fc) + 1;
    }
    *(undefined1 *)(param_1 + 0x3f8) = 0;
    *(int *)(param_1 + 0x3fc) = iVar3;
    goto LAB_140babf54;
  }
  cVar2 = FUN_14125be1e(param_2,local_28);
  iVar3 = 1;
  cVar1 = DAT_14cbd5800;
  if (cVar2 == '\0') {
    cVar1 = '\x01';
  }
  if (cVar1 == *(char *)(param_1 + 0x3f8)) {
    if (*(int *)(param_1 + 0x3fc) == 0) goto LAB_140babfc1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3fc) + 1;
LAB_140babfc1:
    *(char *)(param_1 + 0x3f8) = cVar1;
    *(int *)(param_1 + 0x3fc) = iVar3;
  }
  if (local_28 == 0) {
    FUN_1400b22c2(local_48,"Downloadable Content");
    FUN_140233b1a(local_38,local_48);
    FUN_14003c038(param_1 + 0x3e0,local_38);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar1 = FUN_144a7c5f6(local_28 + 0x28);
    if (cVar1 == '\0') {
      lVar4 = local_28 + 0x28;
    }
    else {
      lVar4 = local_28 + 0x18;
    }
    FUN_1410e88ee(param_1 + 0x3e0,lVar4);
  }
LAB_140babf54:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bac064 FUN_140bac064 body=432 status=ok
// SIG undefined FUN_140bac064(void)

ulonglong FUN_140bac064(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar8 = 0;
  }
  else {
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b406f80;
    local_50 = FUN_144116a30;
    local_78[0] = &LAB_140255cce;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    uVar8 = 0;
    FUN_140255853(0,0,local_78,&local_88);
    if ((longlong)(int)uStack_80 != 0) {
      plVar10 = local_88 + (longlong)(int)uStack_80 * 2;
      plVar9 = local_88;
      do {
        plVar2 = (longlong *)*plVar9;
        plVar3 = (longlong *)plVar9[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (plVar2 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar5 = FUN_1418c3a38();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            uVar6 = FUN_141563480(plVar2 + 6);
            *param_2 = uVar6;
            uVar8 = CONCAT71((int7)((ulonglong)(plVar2 + 6) >> 8),1);
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar3 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
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
            break;
          }
        }
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
        plVar9 = plVar9 + 2;
        uVar8 = 0;
      } while (plVar9 != plVar10);
    }
    FUN_140255aed(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (undefined1 *)0x0) {
      pppuVar7 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar7 = &local_58;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140bac216 FUN_140bac216 body=569 status=ok
// SIG undefined FUN_140bac216(void)

undefined8 * FUN_140bac216(longlong param_1,undefined8 *param_2)

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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
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
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0xa08), lVar1 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        FUN_140bac450(lVar1,&local_28);
        FUN_1400021e4(&local_28,param_2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140bac450 FUN_140bac450 body=316 status=ok
// SIG undefined FUN_140bac450(void)

undefined8 * FUN_140bac450(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x5e8))();
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
      lVar1 = FUN_1403b0700(lVar1);
      uVar2 = *(undefined8 *)(lVar1 + 0x38);
      goto LAB_140bac4be;
    }
  }
  uVar2 = 0;
LAB_140bac4be:
  *param_2 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bac58e FUN_140bac58e body=1265 status=ok
// SIG undefined FUN_140bac58e(void)

void FUN_140bac58e(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0xf8) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0xf0);
  }
  lVar5 = 0;
  do {
    uVar2 = puVar3[lVar5];
    bVar1 = "classmod"[lVar5];
    iVar6 = (uint)uVar2 - (uint)bVar1;
    if (iVar6 == 0) {
      if (uVar2 == 0) goto LAB_140bac62b;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac5f5;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) break;
    }
    lVar5 = lVar5 + 1;
  } while( true );
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac5f5:
  if (iVar6 == 0) {
LAB_140bac62b:
    iVar6 = *(int *)(param_1 + 0x88);
    if (iVar6 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x80);
    }
    lVar5 = 0;
    do {
      uVar2 = puVar3[lVar5];
      bVar1 = "classmod_dark_siren"[lVar5];
      iVar4 = (uint)uVar2 - (uint)bVar1;
      if (iVar4 == 0) {
        if (uVar2 == 0) goto LAB_140bac68a;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac686;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac684;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
  goto LAB_140bac5fa;
LAB_140bac684:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac686:
  if (iVar4 == 0) {
LAB_140bac68a:
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar5 = 0;
    do {
      uVar2 = puVar3[lVar5];
      bVar1 = "Char_DarkSiren"[lVar5];
      iVar4 = (uint)uVar2 - (uint)bVar1;
      if (iVar4 == 0) {
        if (uVar2 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac6db;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac6d9;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_140bac6e6:
  if (iVar6 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x80);
  }
  lVar5 = 0;
  do {
    uVar2 = puVar3[lVar5];
    bVar1 = "classmod_exo_soldier"[lVar5];
    iVar4 = (uint)uVar2 - (uint)bVar1;
    if (iVar4 == 0) {
      if (uVar2 == 0) goto LAB_140bac73e;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac73a;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac738;
    }
    lVar5 = lVar5 + 1;
  } while( true );
LAB_140bac6d9:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac6db:
  bVar7 = true;
  if (iVar4 == 0) goto LAB_140bac6e6;
  goto LAB_140bac5fd;
LAB_140bac738:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac73a:
  if (iVar4 == 0) {
LAB_140bac73e:
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar5 = 0;
    do {
      uVar2 = puVar3[lVar5];
      bVar1 = "Char_ExoSoldier"[lVar5];
      iVar4 = (uint)uVar2 - (uint)bVar1;
      if (iVar4 == 0) {
        if (uVar2 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac78f;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac78d;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_140bac79a:
  if (iVar6 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x80);
  }
  lVar5 = 0;
  do {
    uVar2 = puVar3[lVar5];
    bVar1 = "classmod_gravitar"[lVar5];
    iVar4 = (uint)uVar2 - (uint)bVar1;
    if (iVar4 == 0) {
      if (uVar2 == 0) goto LAB_140bac7f2;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac7ee;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac7ec;
    }
    lVar5 = lVar5 + 1;
  } while( true );
LAB_140bac78d:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac78f:
  bVar7 = true;
  if (iVar4 == 0) goto LAB_140bac79a;
  goto LAB_140bac5fd;
LAB_140bac7ec:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac7ee:
  if (iVar4 == 0) {
LAB_140bac7f2:
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar5 = 0;
    do {
      uVar2 = puVar3[lVar5];
      bVar1 = "Char_Gravitar"[lVar5];
      iVar4 = (uint)uVar2 - (uint)bVar1;
      if (iVar4 == 0) {
        if (uVar2 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac843;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac841;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_140bac84e:
  if (iVar6 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x80);
  }
  lVar5 = 0;
  do {
    uVar2 = puVar3[lVar5];
    bVar1 = "classmod_paladin"[lVar5];
    iVar4 = (uint)uVar2 - (uint)bVar1;
    if (iVar4 == 0) {
      if (uVar2 == 0) goto LAB_140bac8a6;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac8a2;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac8a0;
    }
    lVar5 = lVar5 + 1;
  } while( true );
LAB_140bac841:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac843:
  bVar7 = true;
  if (iVar4 == 0) goto LAB_140bac84e;
  goto LAB_140bac5fd;
LAB_140bac8a0:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac8a2:
  if (iVar4 == 0) {
LAB_140bac8a6:
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar5 = 0;
    do {
      uVar2 = puVar3[lVar5];
      bVar1 = "Char_Paladin"[lVar5];
      iVar4 = (uint)uVar2 - (uint)bVar1;
      if (iVar4 == 0) {
        if (uVar2 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac8f7;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac8f5;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_140bac902:
  if (iVar6 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x80);
  }
  lVar5 = 0;
  do {
    uVar2 = puVar3[lVar5];
    bVar1 = "classmod_robodealer"[lVar5];
    iVar4 = (uint)uVar2 - (uint)bVar1;
    if (iVar4 == 0) {
      if (uVar2 == 0) goto LAB_140bac95a;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac956;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac954;
    }
    lVar5 = lVar5 + 1;
  } while( true );
LAB_140bac8f5:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac8f7:
  bVar7 = true;
  if (iVar4 == 0) goto LAB_140bac902;
  goto LAB_140bac5fd;
LAB_140bac954:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac956:
  if (iVar4 == 0) {
LAB_140bac95a:
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar5 = 0;
    do {
      uVar2 = puVar3[lVar5];
      bVar1 = "Char_RoboDealer"[lVar5];
      iVar4 = (uint)uVar2 - (uint)bVar1;
      if (iVar4 == 0) {
        if (uVar2 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140bac9ab;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140bac9a9;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_140bac9b6:
  if (iVar6 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x80);
  }
  lVar5 = 0;
  do {
    uVar2 = puVar3[lVar5];
    bVar1 = "classmod_corpohacker"[lVar5];
    iVar6 = (uint)uVar2 - (uint)bVar1;
    if (iVar6 == 0) {
      if (uVar2 == 0) goto LAB_140baca17;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140baca0e;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140baca0b;
    }
    lVar5 = lVar5 + 1;
  } while( true );
LAB_140bac9a9:
  iVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140bac9ab:
  bVar7 = true;
  if (iVar4 == 0) goto LAB_140bac9b6;
  goto LAB_140bac5fd;
LAB_140baca70:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140baca73:
  bVar7 = iVar6 != 0;
  goto LAB_140bac5fd;
LAB_140baca0b:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_140baca0e:
  if (iVar6 == 0) {
LAB_140baca17:
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar5 = 0;
    do {
      uVar2 = puVar3[lVar5];
      bVar1 = "Char_CorpoHacker"[lVar5];
      iVar6 = (uint)uVar2 - (uint)bVar1;
      if (iVar6 == 0) {
        iVar6 = 0;
        if (uVar2 == 0) goto LAB_140baca73;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_140baca73;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_140baca70;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_140bac5fa:
  bVar7 = false;
LAB_140bac5fd:
  if (bVar7 == (bool)*(char *)(param_1 + 0x408)) {
    if (*(int *)(param_1 + 0x40c) != 0) {
      return;
    }
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x40c) + 1;
  }
  *(bool *)(param_1 + 0x408) = bVar7;
  *(int *)(param_1 + 0x40c) = iVar6;
  return;
}



// FUNCTION 140baca80 FUN_140baca80 body=1648 status=ok
// SIG undefined FUN_140baca80(void)

void FUN_140baca80(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 == 0) {
LAB_140bad054:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
  if ((longlong)(int)param_2[3] != 0) {
    lVar10 = 0;
    do {
      if (*(longlong *)(param_2[2] + lVar10) == 0) goto LAB_140bad054;
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)param_2[3] * 8 != lVar10);
  }
  FUN_140bad930(param_1,param_2);
  lVar10 = FUN_14087dee0(param_2);
  if (lVar10 == 0) {
    FUN_145780fe4(param_1 + 0x498,&DAT_149e62e78);
  }
  else {
    local_88 = *(wchar_t **)(lVar10 + 0xd8);
    uStack_80 = *(undefined8 *)(lVar10 + 0xe0);
    FUN_140bad172(&local_78);
    FUN_140775538(param_1 + 0x498,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(&local_78,L"Unknown");
  FUN_140775538(param_1 + 0x468,&local_78);
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar10 = *param_2;
  if ((lVar10 != 0) && (lVar3 = FUN_14001d26e(lVar10), lVar3 != 0)) {
    lVar10 = FUN_14001d26e(lVar10);
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar10 + 8);
    }
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    FUN_1400b2348(puVar7,&local_88,1);
    uStack_70 = uStack_80;
    uVar9 = (int)uStack_80 - 1;
    if ((int)uStack_80 == 0) {
      uVar9 = 0;
    }
    if (0 < (int)uVar9) {
      uVar11 = 0;
      do {
        local_88[uVar11] =
             (ushort)((ushort)local_88[uVar11] - 0x41 < 0x1a) * 0x20 + local_88[uVar11];
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
    }
    local_78 = local_88;
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    FUN_140775538(param_1 + 0x468,&local_78);
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  local_90 = param_1 + 0x550;
  FUN_140bad112(local_90,&DAT_149dfb77a);
  local_98 = param_1 + 0x568;
  FUN_140bad112(local_98,&DAT_149dfb77a);
  if (((*(char *)(param_1 + 0x1c0) != '\0') || (*(char *)(param_1 + 0x1c8) == '\x01')) &&
     ((longlong)*(int *)(param_1 + 0x418) != 0)) {
    plVar14 = *(longlong **)(param_1 + 0x410);
    plVar12 = plVar14 + (longlong)*(int *)(param_1 + 0x418) * 3;
    do {
      if (*plVar14 != 0) {
        puVar7 = *(undefined4 **)(*plVar14 + 8);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = &DAT_14c9485f0;
        }
        local_78 = (wchar_t *)0x0;
        uStack_70 = 0;
        FUN_1400b2348(puVar7,&local_78,1);
        pwVar4 = local_78;
        if ((int)uStack_70 == 0) {
          pwVar4 = L"";
        }
        lVar10 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)pwVar4 + lVar10);
          uVar15 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)L"Element" + lVar10);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140bacd85;
            }
            iVar6 = uVar15 - uVar9;
            goto LAB_140bacdb1;
          }
          if (uVar1 == 0) break;
LAB_140bacd85:
          lVar10 = lVar10 + 2;
        }
        iVar6 = 0;
LAB_140bacdb1:
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (iVar6 == 0) {
          if ((plVar14 != (longlong *)0x0) && (iVar6 = (int)plVar14[2], 0 < iVar6)) {
            lVar10 = 0;
            goto LAB_140bacdf1;
          }
          break;
        }
      }
      plVar14 = plVar14 + 3;
    } while (plVar14 != plVar12);
  }
  goto LAB_140bacc7b;
LAB_140bacdf1:
  do {
    lVar3 = plVar14[1];
    lVar13 = lVar10 * 0x60;
    if (*(char *)(lVar3 + 0x5c + lVar13) == '\x01') {
      if (*(longlong *)(lVar3 + lVar13) == 0) {
LAB_140baced1:
        local_78 = L"value";
        uStack_70 = CONCAT35(uStack_70._5_3_,5);
        uVar9 = FUN_14001a6c0(&local_78,1);
        lVar8 = local_90;
        if (*(int *)(lVar3 + 0x10 + lVar13) != *(int *)(lVar3 + 0x3c + lVar13)) {
          lVar3 = lVar3 + lVar13;
          lVar13 = lVar3 + 0x40;
          if (*(longlong *)(lVar3 + 0x48) != 0) {
            lVar13 = *(longlong *)(lVar3 + 0x48);
          }
          iVar6 = *(int *)(lVar13 + (ulonglong)
                                    (*(int *)(lVar3 + 0x50) - 1U &
                                    (uVar9 << 0x10 | uVar9 & 0xffff) + ((uVar9 & 0xffff) >> 4) +
                                    ((uVar9 >> 0x10) << 0x13 | uVar9 >> 0x10)) * 4);
          if (iVar6 != -1) {
            do {
              lVar13 = *(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20;
              if (*(ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20) ==
                  (ulonglong)uVar9) break;
              iVar6 = *(int *)(lVar13 + 0x18);
              lVar13 = 0;
            } while (iVar6 != -1);
            goto LAB_140bacf7a;
          }
        }
        lVar13 = 0;
      }
      else {
        puVar7 = *(undefined4 **)(*(longlong *)(lVar3 + lVar13) + 8);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = &DAT_14c9485f0;
        }
        local_78 = (wchar_t *)0x0;
        uStack_70 = 0;
        FUN_1400b2348(puVar7,&local_78,1);
        FUN_1400b22c2(&local_88,"mode02");
        pwVar4 = local_88;
        if ((int)uStack_80 == 0) {
          pwVar4 = L"";
        }
        if (pwVar4 == (wchar_t *)0x0) {
          bVar16 = false;
        }
        else {
          sVar5 = wcslen(pwVar4);
          local_a0 = 0xffffffff;
          local_a8 = 0;
          iVar6 = FUN_1447ee042(&local_78,pwVar4,sVar5 & 0xffffffff,1);
          bVar16 = iVar6 != -1;
        }
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar3 = plVar14[1];
        if (!bVar16) goto LAB_140baced1;
        local_78 = L"value";
        uStack_70 = CONCAT35(uStack_70._5_3_,5);
        uVar9 = FUN_14001a6c0(&local_78,1);
        if (*(int *)(lVar3 + 0x10 + lVar13) == *(int *)(lVar3 + 0x3c + lVar13)) {
LAB_140bad0e0:
          lVar13 = 0;
          lVar8 = local_98;
        }
        else {
          lVar3 = lVar3 + lVar13;
          lVar13 = lVar3 + 0x40;
          if (*(longlong *)(lVar3 + 0x48) != 0) {
            lVar13 = *(longlong *)(lVar3 + 0x48);
          }
          iVar6 = *(int *)(lVar13 + (ulonglong)
                                    (*(int *)(lVar3 + 0x50) - 1U &
                                    (uVar9 << 0x10 | uVar9 & 0xffff) + ((uVar9 & 0xffff) >> 4) +
                                    ((uVar9 >> 0x10) << 0x13 | uVar9 >> 0x10)) * 4);
          if (iVar6 == -1) goto LAB_140bad0e0;
          do {
            lVar13 = *(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20;
            lVar8 = local_98;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x20) ==
                (ulonglong)uVar9) break;
            iVar6 = *(int *)(lVar13 + 0x18);
            lVar13 = 0;
            lVar8 = local_98;
          } while (iVar6 != -1);
        }
      }
LAB_140bacf7a:
      FUN_140775496(lVar8,lVar13 + 8);
      iVar6 = (int)plVar14[2];
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 < iVar6);
LAB_140bacc7b:
  lVar10 = FUN_140b47a16(param_2,&DAT_14cbcb7b0);
  if ((lVar10 == 0) || (*(char *)(lVar10 + 8) != '\0')) {
    bVar16 = false;
  }
  else {
    bVar16 = *(longlong *)(lVar10 + 0x28) != 0;
  }
  if ((bool)*(char *)(param_1 + 0x4d0) == bVar16) {
    if (*(int *)(param_1 + 0x4d4) != 0) goto LAB_140baccbf;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x4d4) + 1;
  }
  *(bool *)(param_1 + 0x4d0) = bVar16;
  *(int *)(param_1 + 0x4d4) = iVar6;
LAB_140baccbf:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bad112 FUN_140bad112 body=95 status=ok
// SIG undefined FUN_140bad112(void)

undefined8 FUN_140bad112(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28);
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bad172 FUN_140bad172 body=166 status=ok
// SIG undefined FUN_140bad172(void)

undefined8 FUN_140bad172(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[2];
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  fVar2 = *param_2;
  fVar3 = param_2[1];
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  FUN_140002266(param_1,L"rgba(%d, %d, %d, %.2f)",(int)(fVar2 * 255.0 + 0.5) & 0xff,
                (int)(fVar3 * 255.0 + 0.5) & 0xff,(int)(fVar1 * 255.0 + 0.5) & 0xff,
                (double)param_2[3]);
  return param_1;
}



// FUNCTION 140bad218 FUN_140bad218 body=1627 status=ok
// SIG undefined FUN_140bad218(void)

void * FUN_140bad218(longlong param_1,void *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  code *local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = FUN_1400d7050(param_1 + 0x30);
  if (lVar6 == 0) {
LAB_140bad4f1:
    memset(param_2,0,0xd8);
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0x80;
    *(undefined4 *)((longlong)param_2 + 0x70) = 0xffffffff;
    *(undefined8 *)((longlong)param_2 + 0x90) = 0;
    *(undefined8 *)((longlong)param_2 + 0x98) = 0;
    *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
    *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
    *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
    *(undefined8 *)((longlong)param_2 + 0xb8) = 0xf;
    *(undefined1 *)((longlong)param_2 + 0xc0) = 1;
    *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  if (DAT_14cbadd90 == 0) {
    local_b0 = &local_98;
    local_98 = FUN_141030f22;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1459f2e4c;
    local_b8 = &LAB_148c39de3;
    local_c0 = &LAB_1457a9eb2;
    local_c8 = L"Game";
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 0x10;
    local_e8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (lVar6 = *(longlong *)(lVar6 + 0x3e0), lVar6 == 0)) goto LAB_140bad4f1;
  if (DAT_14cba8288 == 0) {
    local_b0 = &local_98;
    local_98 = FUN_141864c34;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1464cee30;
    local_b8 = &LAB_148bfac22;
    local_c0 = &LAB_140f21842;
    local_c8 = L"Game";
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 0x10;
    local_e8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140bad4f1;
  lVar3 = *param_3;
  if (DAT_14cbbd498 == 0) {
    local_b0 = &local_98;
    local_98 = FUN_140940982;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_146572ba2;
    local_b8 = &LAB_148ca13ba;
    local_c0 = &LAB_140e51436;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = 8;
    local_e8 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    uStack_80 = 0;
    local_78 = 0;
    if (DAT_14cbbd498 != 0) goto LAB_140bad2fb;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    local_88 = 0;
  }
  else {
LAB_140bad2fb:
    lVar10 = DAT_14cbbd498;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98 = (code *)0x0;
    FUN_1400bbfc4(&local_68,DAT_14cbbd498);
    uStack_90 = CONCAT44(uStack_64,local_68);
    local_88 = CONCAT44(uStack_5c,uStack_60);
    if (uStack_80 != 0) {
      FUN_1400020a8();
    }
    uStack_80 = CONCAT44(uStack_54,local_58);
    local_78 = CONCAT44(uStack_4c,uStack_50);
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    uVar5 = *(uint *)(lVar10 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
        local_98 = (code *)0x0;
        goto LAB_140bad385;
      }
    }
    local_98 = (code *)CONCAT44(local_98._4_4_,uVar5);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar8;
      }
    }
    local_98 = (code *)CONCAT44(iVar7,(undefined4)local_98);
  }
LAB_140bad385:
  if ((*(longlong *)(lVar3 + 0x78) == uStack_90) && (*(longlong *)(lVar3 + 0x80) == local_88)) {
    iVar7 = *(int *)(lVar3 + 0x90);
    if (iVar7 == (int)local_78) {
      bVar11 = true;
      if (iVar7 < 2) goto LAB_140bad397;
      lVar10 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x88) + lVar10);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)(uStack_80 + lVar10);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140bad4c5;
          }
          iVar7 = uVar5 - uVar9;
          goto LAB_140bad5e0;
        }
        if (uVar1 == 0) break;
LAB_140bad4c5:
        lVar10 = lVar10 + 2;
      }
      iVar7 = 0;
    }
    else {
      iVar7 = (int)local_78 + iVar7 + -1;
    }
LAB_140bad5e0:
    bVar11 = iVar7 == 0;
  }
  else {
    bVar11 = false;
  }
LAB_140bad397:
  if (uStack_80 != 0) {
    FUN_1400020a8();
  }
  if (bVar11) {
    uVar5 = FUN_14042831e();
  }
  else {
    uVar5 = FUN_140bad87a(lVar6);
  }
  if ((((((int)uVar5 < 0) || (*(int *)(lVar6 + 0x78f0) <= (int)uVar5)) ||
       (lVar6 = (ulonglong)uVar5 * 0x48 + *(longlong *)(lVar6 + 0x78e8), lVar6 == 0)) ||
      ((*(longlong *)(lVar6 + 0x20) == 0 || (*(longlong **)(lVar6 + 0x28) == (longlong *)0x0)))) ||
     (lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 8))(), lVar6 == 0)) {
    memset(param_2,0,0xd8);
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0x80;
    *(undefined4 *)((longlong)param_2 + 0x70) = 0xffffffff;
    *(undefined8 *)((longlong)param_2 + 0x90) = 0;
    *(undefined8 *)((longlong)param_2 + 0x98) = 0;
    *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
    *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
    *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
    *(undefined8 *)((longlong)param_2 + 0xb8) = 0xf;
    *(undefined1 *)((longlong)param_2 + 0xc0) = 1;
    *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  }
  else {
    FUN_1406fd608(param_2,lVar6 + 0x3f0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140bad87a FUN_140bad87a body=181 status=ok
// SIG undefined FUN_140bad87a(void)

ulonglong FUN_140bad87a(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*param_2 != 0) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar3) == 0) {
          return 0xffffffff;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar3);
    }
    cVar1 = FUN_1449ce79a(param_1);
    lVar3 = *param_2;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else if (((cVar1 == '\0') || (lVar2 = *(longlong *)(lVar3 + 0xa0), lVar2 == 0)) &&
            (lVar2 = *(longlong *)(lVar3 + 0x98), lVar2 == 0)) {
      lVar2 = *(longlong *)(lVar3 + 0x3c);
    }
    if (0 < (longlong)*(int *)(param_1 + 0x78f0)) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x78e8) + 0x14);
      uVar5 = 0;
      do {
        if ((lVar2 == *plVar4) && (*(char *)((longlong)plVar4 + -4) != '\x01')) {
          return uVar5 & 0xffffffff;
        }
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 9;
      } while ((longlong)*(int *)(param_1 + 0x78f0) != uVar5);
    }
  }
  return 0xffffffff;
}



// FUNCTION 140bad930 FUN_140bad930 body=5969 status=ok
// SIG undefined FUN_140bad930(void)

void FUN_140bad930(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  void *pvVar4;
  longlong ****pppplVar5;
  longlong ****pppplVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *****ppppplVar13;
  longlong *****ppppplVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ushort uVar26;
  ulonglong uVar27;
  ushort uVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong ****local_c8;
  longlong *plStack_c0;
  longlong ****local_b8;
  longlong *plStack_b0;
  ushort local_a0;
  byte local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  ushort local_70;
  undefined6 uStack_6e;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar7 = FUN_140baf082(param_1 + 0x218);
  if (cVar7 == '\0') goto LAB_140bad973;
  FUN_140baf5f0(param_2,&local_88);
  local_f0 = param_1 + 0xb8;
  FUN_140775538(local_f0,&local_88);
  if (local_88 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140baf434(param_2,&local_88);
  FUN_140775538(param_1 + 0xd0,&local_88);
  if (local_88 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
  *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
  uVar24 = 0;
  FUN_140baf362(param_2);
  iVar9 = *(int *)(param_1 + 0x1f8);
  iVar19 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar19 = 0;
  }
  if (0 < iVar19) {
    if (iVar9 == 0) {
      puVar18 = &DAT_149dfb77a;
    }
    else {
      puVar18 = *(undefined2 **)(param_1 + 0x1f0);
    }
    lVar21 = 0;
    uVar24 = 0;
    do {
      uVar23 = ((uint)(0x19 < (ushort)puVar18[lVar21] - 0x61) * 0x20 + (uint)(ushort)puVar18[lVar21]
               ) - 0x20;
      uVar24 = uVar24 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar24 ^ uVar23) & 0xff) * 4);
      uVar24 = uVar24 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar24 & 0xff ^ uVar23 >> 8 & 0xff) * 4);
      lVar21 = lVar21 + 1;
    } while (iVar19 != (int)lVar21);
  }
  iVar9 = *(int *)(param_1 + 0x20c);
  if (uVar24 == *(uint *)(param_1 + 0x208)) {
    if (iVar9 == 0) {
      iVar9 = 0;
      goto LAB_140badab3;
    }
  }
  else {
LAB_140badab3:
    *(uint *)(param_1 + 0x208) = uVar24;
    *(int *)(param_1 + 0x20c) = iVar9 + 1;
  }
  lVar21 = FUN_140b47a16(param_2,&DAT_14cb843e8);
  if ((lVar21 == 0) || (*(char *)(lVar21 + 8) != '\0')) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)*(undefined8 *)(lVar21 + 0x28);
  }
  iVar19 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x44) == iVar9) {
    if (iVar19 == 0) {
      iVar19 = 0;
      goto LAB_140badaf3;
    }
  }
  else {
LAB_140badaf3:
    *(int *)(param_1 + 0x44) = iVar9;
    *(int *)(param_1 + 0x48) = iVar19 + 1;
  }
  lVar21 = *param_2;
  if (lVar21 != 0) {
    iVar9 = *(int *)(param_1 + 0xb4);
    if ((*(int *)(lVar21 + 0x468) != *(int *)(param_1 + 0xb0)) ||
       (bVar29 = iVar9 == 0, iVar9 = 0, bVar29)) {
      *(int *)(param_1 + 0xb0) = *(int *)(lVar21 + 0x468);
      *(int *)(param_1 + 0xb4) = iVar9 + 1;
    }
    local_c8 = *(longlong *****)(lVar21 + 0xa0);
    if (((longlong *****)local_c8 == (longlong *****)0x0) &&
       (local_c8 = *(longlong *****)(lVar21 + 0x98), (longlong *****)local_c8 == (longlong *****)0x0
       )) {
      local_c8 = *(longlong *****)(lVar21 + 0x3c);
    }
    FUN_1400021e4(&local_c8,&local_b8);
    uVar24 = (int)plStack_b0 - 1;
    if ((int)plStack_b0 == 0) {
      uVar24 = 0;
    }
    if (0 < (int)uVar24) {
      uVar22 = 0;
      do {
        uVar26 = *(ushort *)((longlong)local_b8 + uVar22 * 2);
        *(ushort *)((longlong)local_b8 + uVar22 * 2) =
             (ushort)(uVar26 - 0x41 < 0x1a) * 0x20 + uVar26;
        uVar22 = uVar22 + 1;
      } while (uVar24 != uVar22);
    }
    local_88 = (longlong *****)local_b8;
    local_b8 = (longlong ****)0x0;
    plStack_b0 = (longlong *)0x0;
    FUN_140775538(param_1 + 0xf0,&local_88);
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *****)local_b8 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    FUN_140baf52e(lVar21,&local_88);
    FUN_140775538(param_1 + 0x98,&local_88);
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(lVar21 + 0x3c,&local_b8);
    uStack_80 = plStack_b0;
    uVar24 = (int)plStack_b0 - 1;
    if ((int)plStack_b0 == 0) {
      uVar24 = 0;
    }
    if (0 < (int)uVar24) {
      uVar22 = 0;
      do {
        uVar26 = *(ushort *)((longlong)local_b8 + uVar22 * 2);
        *(ushort *)((longlong)local_b8 + uVar22 * 2) =
             (ushort)(uVar26 - 0x41 < 0x1a) * 0x20 + uVar26;
        uVar22 = uVar22 + 1;
      } while (uVar24 != uVar22);
    }
    local_88 = (longlong *****)local_b8;
    local_b8 = (longlong ****)0x0;
    plStack_b0 = (longlong *)0x0;
    puVar1 = (undefined8 *)(param_1 + 0x68);
    FUN_140775538(puVar1,&local_88);
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *****)local_b8 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    bVar8 = *(byte *)(lVar21 + 0x368) >> 4 & 1;
    iVar9 = *(int *)(param_1 + 0xec);
    if (bVar8 == *(byte *)(param_1 + 0xe8)) {
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_140badce0;
      }
    }
    else {
LAB_140badce0:
      *(byte *)(param_1 + 0xe8) = bVar8;
      *(int *)(param_1 + 0xec) = iVar9 + 1;
    }
    uVar10 = FUN_140231a4a(lVar21);
    FUN_1402315da(uVar10,&local_88);
    if (local_88 == (longlong *****)0x0) {
      uVar10 = FUN_140231a4a(lVar21);
      FUN_140baf30e(uVar10,&local_b8);
      if ((longlong *****)local_b8 == (longlong *****)0x0) {
        uVar10 = FUN_140231a4a(lVar21);
        FUN_140fb43ee(uVar10,&local_c8);
        if ((longlong *****)local_c8 == (longlong *****)0x0) {
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
          if (*(int *)(param_1 + 0x70) == 0) {
            puVar18 = &DAT_149dfb77a;
          }
          else {
            puVar18 = (undefined2 *)*puVar1;
          }
          lVar11 = 0;
          while( true ) {
            uVar26 = *(ushort *)((longlong)puVar18 + lVar11);
            uVar22 = (ulonglong)uVar26;
            uVar28 = *(ushort *)((longlong)L"classmod" + lVar11);
            if (uVar26 != uVar28) break;
            if (uVar26 == 0) goto LAB_140baeae9;
LAB_140bae9e0:
            lVar11 = lVar11 + 2;
          }
          if ((uVar28 | uVar26) < 0x80) {
            uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
            uVar27 = (ulonglong)uVar28;
            uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
            if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar27]) goto LAB_140bae9e0;
          }
          if (uVar26 != uVar28) {
            FUN_140bb4432(param_1 + 0x80,puVar1);
            goto LAB_140baeb9a;
          }
LAB_140baeae9:
          puVar20 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar21 + 8) != (undefined4 *)0x0) {
            puVar20 = *(undefined4 **)(lVar21 + 8);
          }
          local_e8 = 0;
          uStack_e0 = 0;
          FUN_1400b2348(puVar20,&local_e8);
          local_d0 = (int)uStack_e0;
          uVar24 = (int)uStack_e0 - 1;
          if ((int)uStack_e0 == 0) {
            uVar24 = 0;
          }
          if (0 < (int)uVar24) {
            uVar22 = 0;
            do {
              uVar26 = *(ushort *)(local_e8 + uVar22 * 2);
              *(ushort *)(local_e8 + uVar22 * 2) = (ushort)(uVar26 - 0x41 < 0x1a) * 0x20 + uVar26;
              uVar22 = uVar22 + 1;
            } while (uVar24 != uVar22);
          }
          local_d8 = local_e8;
          local_cc = uStack_e0._4_4_;
          local_e8 = 0;
          uStack_e0 = 0;
          FUN_140775538(param_1 + 0x80,&local_d8);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_14577fe66(param_1 + 0x80);
        }
LAB_140baeb9a:
        plVar15 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar16 = plStack_c0 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        FUN_14577fdfe(param_1 + 0x80);
      }
      plVar15 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_b0 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    else {
      uVar10 = FUN_140baf213();
      FUN_1401cfad2(uVar10,&local_c8);
      plStack_b0 = plStack_c0;
      uVar24 = (int)plStack_c0 - 1;
      if ((int)plStack_c0 == 0) {
        uVar24 = 0;
      }
      if (0 < (int)uVar24) {
        uVar22 = 0;
        do {
          uVar26 = *(ushort *)((longlong)local_c8 + uVar22 * 2);
          *(ushort *)((longlong)local_c8 + uVar22 * 2) =
               (ushort)(uVar26 - 0x41 < 0x1a) * 0x20 + uVar26;
          uVar22 = uVar22 + 1;
        } while (uVar24 != uVar22);
      }
      local_b8 = local_c8;
      local_c8 = (longlong ****)0x0;
      plStack_c0 = (longlong *)0x0;
      FUN_140775538(param_1 + 0x80,&local_b8);
      if ((longlong *****)local_b8 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if ((longlong *****)local_c8 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
    }
    plVar15 = uStack_80;
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_80 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_80)(uStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  iVar9 = *(int *)(param_1 + 0x5c);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1408be2c4(param_1 + 0x50,0);
  }
  iVar9 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x60) = iVar9;
  local_f8 = param_2;
  if (lVar21 != 0) {
    lVar11 = lVar21;
    do {
      puVar20 = *(undefined4 **)(lVar11 + 8);
      if (puVar20 == (undefined4 *)0x0) {
        puVar20 = &DAT_14c9485f0;
      }
      local_b8 = (longlong ****)0x0;
      plStack_b0 = (longlong *)0x0;
      FUN_1400b2348(puVar20,&local_b8);
      uStack_80 = plStack_b0;
      uVar24 = (int)plStack_b0 - 1;
      if ((int)plStack_b0 == 0) {
        uVar24 = 0;
      }
      if (0 < (int)uVar24) {
        uVar22 = 0;
        do {
          uVar26 = *(ushort *)((longlong)local_b8 + uVar22 * 2);
          *(ushort *)((longlong)local_b8 + uVar22 * 2) =
               (ushort)(uVar26 - 0x41 < 0x1a) * 0x20 + uVar26;
          uVar22 = uVar22 + 1;
        } while (uVar24 != uVar22);
      }
      local_88 = (longlong *****)local_b8;
      local_b8 = (longlong ****)0x0;
      plStack_b0 = (longlong *)0x0;
      FUN_140baf0c4(param_1 + 0x50,&local_88);
      if (local_88 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if ((longlong *****)local_b8 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      cVar7 = FUN_140baf132(lVar11);
    } while ((cVar7 == '\0') && (lVar11 = FUN_14001d26e(lVar11), lVar11 != 0));
    iVar9 = *(int *)(param_1 + 0x60);
  }
  plVar15 = local_f8;
  *(int *)(param_1 + 0x60) = iVar9 + 1;
  uVar24 = *(uint *)(param_1 + 0x58);
  if (1 < (longlong)(int)uVar24) {
    lVar11 = *(longlong *)(param_1 + 0x50);
    lVar12 = (longlong)(int)uVar24 << 4;
    lVar25 = 0;
    do {
      lVar12 = lVar12 + -0x10;
      ppppplVar14 = *(longlong ******)(lVar11 + lVar25);
      plVar16 = (longlong *)((undefined8 *)(lVar11 + lVar25))[1];
      uVar10 = ((undefined8 *)(lVar11 + lVar12))[1];
      *(undefined8 *)(lVar11 + lVar25) = *(undefined8 *)(lVar11 + lVar12);
      ((undefined8 *)(lVar11 + lVar25))[1] = uVar10;
      local_88._0_4_ = SUB84(ppppplVar14,0);
      local_88._4_4_ = (undefined4)((ulonglong)ppppplVar14 >> 0x20);
      uStack_80._0_4_ = (uint)plVar16;
      uStack_80._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
      puVar20 = (undefined4 *)(lVar11 + lVar12);
      *puVar20 = (float)local_88;
      puVar20[1] = local_88._4_4_;
      puVar20[2] = (uint)uStack_80;
      puVar20[3] = uStack_80._4_4_;
      lVar25 = lVar25 + 0x10;
      local_88 = ppppplVar14;
      uStack_80 = plVar16;
    } while ((ulonglong)(uVar24 >> 1) << 4 != lVar25);
  }
  lVar11 = FUN_14087dee0(local_f8);
  if (lVar11 != 0) {
    FUN_140baf24c(lVar11,&local_88);
    FUN_140775538(param_1 + 0x108,&local_88);
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(lVar11 + 0x1c,&local_b8);
    uStack_80 = plStack_b0;
    uVar24 = (int)plStack_b0 - 1;
    if ((int)plStack_b0 == 0) {
      uVar24 = 0;
    }
    if (0 < (int)uVar24) {
      uVar22 = 0;
      do {
        uVar26 = *(ushort *)((longlong)local_b8 + uVar22 * 2);
        *(ushort *)((longlong)local_b8 + uVar22 * 2) =
             (ushort)(uVar26 - 0x41 < 0x1a) * 0x20 + uVar26;
        uVar22 = uVar22 + 1;
      } while (uVar24 != uVar22);
    }
    local_88 = (longlong *****)local_b8;
    local_b8 = (longlong ****)0x0;
    plStack_b0 = (longlong *)0x0;
    FUN_140775538(param_1 + 0x120,&local_88);
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *****)local_b8 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    iVar9 = *(int *)(param_1 + 0x13c);
    if (*(int *)(lVar11 + 0x140) == *(int *)(param_1 + 0x138)) {
      if (iVar9 != 0) goto LAB_140bae066;
      iVar9 = 0;
    }
    *(int *)(param_1 + 0x138) = *(int *)(lVar11 + 0x140);
    *(int *)(param_1 + 0x13c) = iVar9 + 1;
  }
LAB_140bae066:
  if ((lVar21 == 0) || (lVar21 = FUN_140a2d0dc(lVar21), lVar21 == 0)) {
    FUN_140bad112(param_1 + 0x140,&DAT_149dfb77a);
    FUN_140bad112(param_1 + 0x158,&DAT_149dfb77a);
    FUN_140bad112(param_1 + 0x170,&DAT_149dfb77a);
    iVar9 = *(int *)(param_1 + 0x18c);
    if ((*(int *)(param_1 + 0x188) != 0) || (bVar29 = iVar9 == 0, iVar9 = 0, bVar29)) {
      *(undefined4 *)(param_1 + 0x188) = 0;
      *(int *)(param_1 + 0x18c) = iVar9 + 1;
    }
  }
  else {
    plVar16 = *(longlong **)(lVar21 + 0xb8);
    if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
      plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
    }
    FUN_1447a1fc0(plVar16);
    plVar16 = *(longlong **)(lVar21 + 0xb8);
    pcVar3 = *(code **)(*plVar16 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar17 = plVar16 + 3;
      if (plVar16[5] != 0) {
        plVar17 = (longlong *)(plVar16[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar17 = plVar16 + 2;
    }
    else {
      plVar17 = (longlong *)(*pcVar3)(plVar16);
    }
    local_88 = (longlong *****)0x0;
    uVar24 = *(uint *)(plVar17 + 1);
    pvVar4 = (void *)*plVar17;
    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar24);
    if ((longlong)(int)uVar24 == 0) {
      uStack_80 = (longlong *)(ulonglong)uVar24;
    }
    else {
      FUN_1446dd670(&local_88,uVar24,0);
      memcpy(local_88,pvVar4,(longlong)(int)uVar24 * 2);
    }
    FUN_140775538(param_1 + 0x140,&local_88);
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    plVar16 = *(longlong **)(lVar21 + 200);
    if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
      plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
    }
    FUN_1447a1fc0(plVar16);
    plVar16 = *(longlong **)(lVar21 + 200);
    pcVar3 = *(code **)(*plVar16 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar17 = plVar16 + 3;
      if (plVar16[5] != 0) {
        plVar17 = (longlong *)(plVar16[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar17 = plVar16 + 2;
    }
    else {
      plVar17 = (longlong *)(*pcVar3)(plVar16);
    }
    local_88 = (longlong *****)0x0;
    uVar24 = *(uint *)(plVar17 + 1);
    pvVar4 = (void *)*plVar17;
    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar24);
    if ((longlong)(int)uVar24 == 0) {
      uStack_80 = (longlong *)(ulonglong)uVar24;
    }
    else {
      FUN_1446dd670(&local_88,uVar24,0);
      memcpy(local_88,pvVar4,(longlong)(int)uVar24 * 2);
    }
    FUN_140775538(param_1 + 0x158,&local_88);
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    iVar9 = *(int *)(param_1 + 0x18c);
    if (*(int *)(lVar21 + 0xd8) == *(int *)(param_1 + 0x188)) {
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_140bae211;
      }
    }
    else {
LAB_140bae211:
      *(int *)(param_1 + 0x188) = *(int *)(lVar21 + 0xd8);
      *(int *)(param_1 + 0x18c) = iVar9 + 1;
    }
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
    puVar20 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar21 + 8) != (undefined4 *)0x0) {
      puVar20 = *(undefined4 **)(lVar21 + 8);
    }
    local_88 = (longlong *****)0x0;
    uStack_80 = (longlong *)0x0;
    FUN_1400b2348(puVar20,&local_88,1);
    if ((undefined8 *)(param_1 + 0x170) == &local_88) {
      if (local_88 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x170) != 0) {
        FUN_1400020a8();
      }
      *(longlong ******)(param_1 + 0x170) = local_88;
      local_88 = (longlong *****)0x0;
      *(uint *)(param_1 + 0x178) = (uint)uStack_80;
      *(undefined4 *)(param_1 + 0x17c) = uStack_80._4_4_;
    }
    uVar24 = *(int *)(param_1 + 0x178) - 1;
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar24 = 0;
    }
    if (0 < (int)uVar24) {
      lVar21 = *(longlong *)(param_1 + 0x170);
      uVar22 = 0;
      do {
        uVar26 = *(ushort *)(lVar21 + uVar22 * 2);
        *(ushort *)(lVar21 + uVar22 * 2) = (ushort)(uVar26 - 0x41 < 0x1a) * 0x20 + uVar26;
        uVar22 = uVar22 + 1;
      } while (uVar24 != uVar22);
    }
    FUN_1407753c8((undefined8 *)(param_1 + 0x170));
  }
  lVar21 = param_1 + 400;
  FUN_140bad112(lVar21,&DAT_149dfb77a);
  FUN_140bad112(param_1 + 0x1a8,&DAT_149dfb77a);
  iVar9 = *(int *)(param_1 + 0x1c4);
  if ((*(char *)(param_1 + 0x1c0) != '\0') || (bVar29 = iVar9 == 0, iVar9 = 0, bVar29)) {
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    *(int *)(param_1 + 0x1c4) = iVar9 + 1;
  }
  iVar9 = *(int *)(param_1 + 0x1cc);
  if ((*(char *)(param_1 + 0x1c8) != '\0') || (bVar29 = iVar9 == 0, iVar9 = 0, bVar29)) {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    *(int *)(param_1 + 0x1cc) = iVar9 + 1;
  }
  FUN_140c65c56(plVar15,&local_c8);
  pppplVar6 = local_c8;
  if ((longlong *****)local_c8 != (longlong *****)0x0) {
    uVar10 = FUN_140082ff6();
    cVar7 = FUN_1448093f4(pppplVar6,uVar10);
    plVar15 = plStack_c0;
    pppplVar6 = local_c8;
    if (cVar7 == '\0') {
      plVar15 = (longlong *)(*(code *)(*local_c8)[0xb])(local_c8);
      plVar16 = local_f8;
      if (plVar15 != (longlong *)0x0) {
        cVar7 = (**(code **)(*plVar15 + 0x18))(plVar15);
        iVar9 = *(int *)(param_1 + 0x1c4);
        if (*(char *)(param_1 + 0x1c0) == cVar7) {
          if (iVar9 == 0) {
            iVar9 = 0;
            goto LAB_140baea5a;
          }
        }
        else {
LAB_140baea5a:
          *(char *)(param_1 + 0x1c0) = cVar7;
          *(int *)(param_1 + 0x1c4) = iVar9 + 1;
        }
        FUN_144a2b0a4(plVar15 + 5);
        if (*(char *)(param_1 + 0x1c0) == '\0') {
          ppppplVar14 = local_88;
          if ((uint)uStack_80 == 0) {
            ppppplVar14 = (longlong *****)&DAT_149dfb77a;
          }
          lVar11 = 0;
          while( true ) {
            uVar26 = *(ushort *)((longlong)ppppplVar14 + lVar11);
            uVar22 = (ulonglong)uVar26;
            uVar28 = *(ushort *)((longlong)L"impact" + lVar11);
            plVar16 = local_f8;
            if (uVar26 != uVar28) break;
            if (uVar26 == 0) goto LAB_140baea89;
LAB_140baf049:
            lVar11 = lVar11 + 2;
          }
          if ((uVar28 | uVar26) < 0x80) {
            uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
            uVar27 = (ulonglong)uVar28;
            uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
            if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar27]) goto LAB_140baf049;
          }
          if (uVar26 != uVar28) goto LAB_140baea9f;
        }
LAB_140baea89:
        FUN_1449a0272(lVar21,&local_88);
LAB_140baea9f:
        if (local_88 != (longlong *****)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      if (((longlong *****)local_c8 != (longlong *****)0x0) &&
         (iVar9 = *(int *)(local_c8 + 0x50), 0 < iVar9)) {
        ppppplVar14 = (longlong *****)(local_c8 + 0x41);
        ppppplVar13 = (longlong *****)local_c8[0x4f];
        if ((longlong *****)local_c8[0x4f] == (longlong *****)0x0) {
          ppppplVar13 = ppppplVar14;
        }
        if ((*(char *)ppppplVar13 == '\x01') &&
           (pppplVar5 = ppppplVar13[5], pppplVar5 != (longlong ****)0x0)) {
          cVar7 = (*(code *)(*pppplVar5)[3])(pppplVar5);
          iVar9 = *(int *)(param_1 + 0x1c4);
          if (*(char *)(param_1 + 0x1c0) == cVar7) {
            if (iVar9 == 0) {
              iVar9 = 0;
              goto LAB_140baef6a;
            }
          }
          else {
LAB_140baef6a:
            *(char *)(param_1 + 0x1c0) = cVar7;
            *(int *)(param_1 + 0x1c4) = iVar9 + 1;
          }
          FUN_144a2b0a4(pppplVar5 + 5);
          if (*(char *)(param_1 + 0x1c0) == '\0') {
            ppppplVar13 = local_88;
            if ((uint)uStack_80 == 0) {
              ppppplVar13 = (longlong *****)&DAT_149dfb77a;
            }
            lVar11 = 0;
            while( true ) {
              uVar26 = *(ushort *)((longlong)ppppplVar13 + lVar11);
              uVar22 = (ulonglong)uVar26;
              uVar28 = *(ushort *)((longlong)L"impact" + lVar11);
              if (uVar26 != uVar28) break;
              if (uVar26 == 0) goto LAB_140bae49a;
LAB_140bae46f:
              lVar11 = lVar11 + 2;
            }
            if ((uVar28 | uVar26) < 0x80) {
              uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
              uVar27 = (ulonglong)uVar28;
              uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
              if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar27]) goto LAB_140bae46f;
            }
            if (uVar26 != uVar28) goto LAB_140bae4b0;
          }
LAB_140bae49a:
          FUN_1449a0272(lVar21,&local_88);
LAB_140bae4b0:
          if (local_88 != (longlong *****)0x0) {
            FUN_1400020a8();
          }
          iVar9 = *(int *)(pppplVar6 + 0x50);
        }
        if (1 < iVar9) {
          ppppplVar13 = (longlong *****)pppplVar6[0x4f];
          if (ppppplVar13 != (longlong *****)0x0) {
            ppppplVar14 = ppppplVar13;
          }
          if ((*(char *)(ppppplVar14 + 7) == '\x01') &&
             (pppplVar6 = ppppplVar14[0xc], pppplVar6 != (longlong ****)0x0)) {
            cVar7 = (*(code *)(*pppplVar6)[3])(pppplVar6);
            iVar9 = *(int *)(param_1 + 0x1cc);
            if (*(char *)(param_1 + 0x1c8) == cVar7) {
              if (iVar9 == 0) {
                iVar9 = 0;
                goto LAB_140baefaa;
              }
            }
            else {
LAB_140baefaa:
              *(char *)(param_1 + 0x1c8) = cVar7;
              *(int *)(param_1 + 0x1cc) = iVar9 + 1;
            }
            FUN_144a2b0a4(pppplVar6 + 5);
            if (*(char *)(param_1 + 0x1c8) == '\0') {
              ppppplVar14 = local_88;
              if ((uint)uStack_80 == 0) {
                ppppplVar14 = (longlong *****)&DAT_149dfb77a;
              }
              lVar21 = 0;
              while( true ) {
                uVar26 = *(ushort *)((longlong)ppppplVar14 + lVar21);
                uVar22 = (ulonglong)uVar26;
                uVar28 = *(ushort *)((longlong)L"impact" + lVar21);
                if (uVar26 != uVar28) break;
                if (uVar26 == 0) goto LAB_140bae595;
LAB_140bae56a:
                lVar21 = lVar21 + 2;
              }
              if ((uVar28 | uVar26) < 0x80) {
                uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                uVar27 = (ulonglong)uVar28;
                uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
                if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar27]) goto LAB_140bae56a;
              }
              if (uVar26 != uVar28) goto LAB_140bae5ab;
            }
LAB_140bae595:
            FUN_1449a0272(param_1 + 0x1a8,&local_88);
LAB_140bae5ab:
            if (local_88 != (longlong *****)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      plVar16 = local_f8;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar15 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    iVar9 = *(int *)(param_1 + 0x38);
    if (*(int *)(local_c8 + 8) == *(int *)(param_1 + 0x34)) {
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_140bae5de;
      }
    }
    else {
LAB_140bae5de:
      *(int *)(param_1 + 0x34) = *(int *)(local_c8 + 8);
      *(int *)(param_1 + 0x38) = iVar9 + 1;
    }
    FUN_140baf1c0();
    ppppplVar14 = local_88;
    if ((uint)uStack_80 == 0) {
      ppppplVar14 = (longlong *****)&DAT_149dfb77a;
    }
    lVar21 = 0;
    while( true ) {
      uVar26 = *(ushort *)((longlong)ppppplVar14 + lVar21);
      uVar24 = (uint)uVar26;
      uVar28 = *(ushort *)((longlong)&DAT_149dfb77a + lVar21);
      uVar23 = (uint)uVar28;
      if (uVar26 != uVar28) {
        if ((uVar28 | uVar26) < 0x80) {
          uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar26];
          uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar28];
          if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar28]) goto LAB_140bae620;
        }
        iVar9 = uVar24 - uVar23;
        goto LAB_140bae64b;
      }
      if (uVar26 == 0) break;
LAB_140bae620:
      lVar21 = lVar21 + 2;
    }
    iVar9 = 0;
LAB_140bae64b:
    if (local_88 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if (iVar9 != 0) {
      FUN_140baf1c0(local_c8,&local_88);
      FUN_140775538(local_f0,&local_88);
      plVar16 = local_f8;
      if (local_88 != (longlong *****)0x0) {
        FUN_1400020a8();
        plVar16 = local_f8;
      }
    }
    FUN_14000bbd8(&local_88,&DAT_14cbd4130,0);
    lVar21 = FUN_1448fdc6e(&local_88);
    if (CONCAT62(uStack_6e,local_70) != 0) {
      FUN_1400020a8();
    }
    if (lVar21 == 0) {
      plVar16 = local_f8;
      if ((*(float *)(param_1 + 0x210) != 0.0) || (NAN(*(float *)(param_1 + 0x210)))) {
        iVar9 = *(int *)(param_1 + 0x214) + 1;
LAB_140baee71:
        *(undefined4 *)(param_1 + 0x210) = 0;
        *(int *)(param_1 + 0x214) = iVar9;
      }
      else if (*(int *)(param_1 + 0x214) == 0) {
        iVar9 = 1;
        goto LAB_140baee71;
      }
    }
    else {
      local_108 = 0;
      (*(code *)(*local_c8)[4])(local_c8,&local_b8,lVar21);
      if (local_98 == 3) {
        fVar30 = local_b8._0_4_;
      }
      else {
        FUN_1400b56fe(&local_88,&local_b8,3);
        fVar30 = 0.0;
        if (local_68 != 0) {
          fVar30 = (float)local_88;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppplVar14 = (longlong *****)&local_88;
          if (0x18 < local_70) {
            ppppplVar14 = local_88;
          }
          (*pcVar3)(ppppplVar14);
          plVar16 = local_f8;
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88);
        }
      }
      if ((fVar30 != *(float *)(param_1 + 0x210)) ||
         (NAN(fVar30) || NAN(*(float *)(param_1 + 0x210)))) {
        iVar9 = *(int *)(param_1 + 0x214) + 1;
LAB_140bae6df:
        *(float *)(param_1 + 0x210) = fVar30;
        *(int *)(param_1 + 0x214) = iVar9;
      }
      else if (*(int *)(param_1 + 0x214) == 0) {
        iVar9 = 1;
        goto LAB_140bae6df;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppplVar14 = &local_b8;
        if (0x18 < local_a0) {
          ppppplVar14 = (longlong *****)local_b8;
        }
        (*pcVar3)(ppppplVar14);
        plVar16 = local_f8;
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(local_b8);
      }
    }
    iVar9 = *(int *)(param_1 + 0x41c);
    FUN_140bb299f(*(undefined8 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x418));
    *(undefined4 *)(param_1 + 0x418) = 0;
    if ((iVar9 < 0) && (*(int *)(param_1 + 0x41c) != 0)) {
      FUN_148e23372(param_1 + 0x410);
    }
    FUN_140bb182a(plVar16,param_1 + 0x410,0);
    if ((longlong)*(int *)(param_1 + 0x418) != 0) {
      plVar16 = *(longlong **)(param_1 + 0x410);
      plVar15 = plVar16 + (longlong)*(int *)(param_1 + 0x418) * 3;
      do {
        FUN_1400b22c2(&local_88,&DAT_149e62dd2);
        uVar24 = *(uint *)(param_1 + 0x1e0);
        if (uVar24 == (uint)uStack_80) {
          if (1 < (int)uVar24) {
            lVar21 = 0;
            while( true ) {
              uVar26 = *(ushort *)(*(longlong *)(param_1 + 0x1d8) + lVar21);
              uVar22 = (ulonglong)uVar26;
              uVar28 = *(ushort *)((longlong)local_88 + lVar21);
              if (uVar26 != uVar28) break;
              if (uVar26 == 0) goto LAB_140bae813;
LAB_140bae7db:
              lVar21 = lVar21 + 2;
            }
            if ((uVar28 | uVar26) < 0x80) {
              uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
              uVar27 = (ulonglong)uVar28;
              uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
              if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar27]) goto LAB_140bae7db;
            }
            if (uVar26 != uVar28) goto LAB_140bae8cf;
          }
LAB_140bae813:
          bVar29 = false;
        }
        else {
          if ((uint)uStack_80 + uVar24 == 1) goto LAB_140bae813;
LAB_140bae8cf:
          bVar29 = 1 < uVar24;
        }
        if (local_88 != (longlong *****)0x0) {
          FUN_1400020a8();
        }
        if (bVar29) break;
        if (((*plVar16 != 0) && (*(char *)(*plVar16 + 0x18) == '\x05')) &&
           ((longlong)(int)plVar16[2] != 0)) {
          lVar21 = plVar16[1];
          lVar11 = 0;
          do {
            lVar12 = *(longlong *)(lVar21 + lVar11);
            if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x98) != 0)) {
              *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
              FUN_140390f7a(*(longlong *)(lVar21 + lVar11) + 0x90,(longlong *)(param_1 + 0x1d8));
              if (*(int *)(param_1 + 0x1d4) == 0 || *(char *)(param_1 + 0x1d0) == '\0') {
                *(undefined1 *)(param_1 + 0x1d0) = 1;
                *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
              }
              break;
            }
            lVar11 = lVar11 + 0x60;
          } while ((longlong)(int)plVar16[2] * 0x60 != lVar11);
        }
        plVar16 = plVar16 + 3;
      } while (plVar16 != plVar15);
    }
  }
  plVar15 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_c0 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
LAB_140bad973:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140baf082 FUN_140baf082 body=66 status=ok
// SIG undefined FUN_140baf082(void)

undefined8 FUN_140baf082(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_140991644(param_2,param_1);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0xd8) == 0)) {
    FUN_1407b25f0(param_1,param_2);
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140baf0c4 FUN_140baf0c4 body=110 status=ok
// SIG undefined FUN_140baf0c4(void)

undefined8 FUN_140baf0c4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),iVar1 != -1);
}



// FUNCTION 140baf132 FUN_140baf132 body=141 status=ok
// SIG undefined FUN_140baf132(void)

ulonglong FUN_140baf132(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar5 = param_1;
  if (lVar4 == 0) {
    lVar5 = FUN_14042c486();
    lVar4 = FUN_14477b664(lVar5);
    *(longlong *)(param_1 + 0x60) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    plVar3 = (longlong *)0x0;
    goto LAB_140baf14e;
  }
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  if ((*(longlong *)(param_1 + 0x58) == 0) || (lVar4 == 0)) goto LAB_140baf14e;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_140baf1bb:
    lVar4 = 0;
  }
  else {
    plVar3 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_140baf1bb;
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(plVar3,(longlong *)(param_1 + 0x58));
  }
  *(longlong *)(param_1 + 0x68) = lVar4;
  plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),lVar4 == 0);
LAB_140baf14e:
  return (ulonglong)plVar3 & 0xffffffff;
}



// FUNCTION 140baf1c0 FUN_140baf1c0 body=83 status=ok
// SIG undefined FUN_140baf1c0(void)

undefined8 * FUN_140baf1c0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
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



// FUNCTION 140baf213 FUN_140baf213 body=57 status=ok
// SIG undefined FUN_140baf213(void)

void FUN_140baf213(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd6a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd6a8 = FUN_14171c317(FUN_14660f998,uVar1,L"EWeaponType");
  }
  return;
}



// FUNCTION 140baf24c FUN_140baf24c body=194 status=ok
// SIG undefined FUN_140baf24c(void)

undefined8 * FUN_140baf24c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
  }
  FUN_1447a1fc0(plVar3);
  plVar3 = *(longlong **)(param_1 + 0x28);
  pcVar2 = *(code **)(*plVar3 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar4 = plVar3 + 3;
    if (plVar3[5] != 0) {
      plVar4 = (longlong *)(plVar3[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar4 = plVar3 + 2;
  }
  else {
    plVar4 = (longlong *)(*pcVar2)(plVar3);
  }
  *param_2 = 0;
  iVar1 = (int)plVar4[1];
  _Src = (void *)*plVar4;
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



// FUNCTION 140baf30e FUN_140baf30e body=83 status=ok
// SIG undefined FUN_140baf30e(void)

longlong * FUN_140baf30e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140e1c186();
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



// FUNCTION 140baf362 FUN_140baf362 body=209 status=ok
// SIG undefined FUN_140baf362(void)

undefined4 FUN_140baf362(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xf;
  uVar1 = FUN_140cd1ba8(0,&local_48);
  if ((char)uVar1 != '\0') {
    pppuVar2 = &local_48;
    if (0xf < local_30) {
      pppuVar2 = (undefined8 ***)local_48;
    }
    FUN_1400b22c2(&local_58,pppuVar2);
    if (&local_58 == param_2) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
  }
  FUN_1401d9a90(&local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140baf434 FUN_140baf434 body=249 status=ok
// SIG undefined FUN_140baf434(void)

longlong * FUN_140baf434(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    FUN_1400b22c2(param_2,&DAT_149e02088);
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x40);
    _Src = *(void **)(lVar2 + 0x38);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  if (((int)param_2[1] < 2) && (*param_1 != 0)) {
    FUN_140baf52e(*param_1,&local_38);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      *(undefined4 *)(param_2 + 1) = local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140baf52e FUN_140baf52e body=194 status=ok
// SIG undefined FUN_140baf52e(void)

undefined8 * FUN_140baf52e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
  }
  FUN_1447a1fc0(plVar3);
  plVar3 = *(longlong **)(param_1 + 0x48);
  pcVar2 = *(code **)(*plVar3 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar4 = plVar3 + 3;
    if (plVar3[5] != 0) {
      plVar4 = (longlong *)(plVar3[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar4 = plVar3 + 2;
  }
  else {
    plVar4 = (longlong *)(*pcVar2)(plVar3);
  }
  *param_2 = 0;
  iVar1 = (int)plVar4[1];
  _Src = (void *)*plVar4;
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



// FUNCTION 140baf5f0 FUN_140baf5f0 body=1354 status=ok
// SIG undefined FUN_140baf5f0(void)

undefined8 * FUN_140baf5f0(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  undefined2 *puVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  ushort *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_4a8 [32];
  longlong *local_488;
  undefined8 *local_480;
  void *local_478;
  uint local_470;
  undefined4 local_46c;
  undefined2 *local_468;
  undefined2 *local_460;
  ulonglong *local_458;
  char local_450;
  undefined2 local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  lVar12 = *param_1;
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x148) == '\x01') {
      plVar8 = *(longlong **)(lVar12 + 0x150);
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar8 = *(longlong **)(lVar12 + 0x150);
      pcVar2 = *(code **)(*plVar8 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar9 = plVar8 + 3;
        if (plVar8[5] != 0) {
          plVar9 = (longlong *)(plVar8[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar9 = plVar8 + 2;
      }
      else {
        plVar9 = (longlong *)(*pcVar2)(plVar8);
      }
      *param_2 = 0;
      iVar7 = (int)plVar9[1];
      pvVar3 = (void *)*plVar9;
      *(int *)(param_2 + 1) = iVar7;
      if ((longlong)iVar7 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        goto LAB_140bafb0d;
      }
      FUN_1446dd670(param_2,iVar7,0);
      memcpy((void *)*param_2,pvVar3,(longlong)iVar7 * 2);
      goto LAB_140bafaaf;
    }
    if ((int)param_1[7] != 0) {
      local_468 = local_448;
      local_450 = '\0';
      local_458 = &local_48;
      local_460 = local_468;
      if (0 < (int)param_1[7]) {
        lVar12 = 0x10;
        uVar11 = 0;
        local_488 = param_1;
        local_480 = param_2;
        do {
          lVar13 = param_1[6];
          plVar8 = *(longlong **)(lVar13 + -0x10 + lVar12);
          if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
            plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
          }
          FUN_1447a1fc0(plVar8);
          plVar8 = *(longlong **)(lVar13 + -0x10 + lVar12);
          pcVar2 = *(code **)(*plVar8 + 0x28);
          if (pcVar2 == FUN_14482841c) {
            plVar9 = plVar8 + 3;
            if (plVar8[5] != 0) {
              plVar9 = (longlong *)(plVar8[5] + 8);
            }
          }
          else if (pcVar2 == (code *)&LAB_14010c34c) {
            plVar9 = plVar8 + 2;
          }
          else {
            plVar9 = (longlong *)(*pcVar2)(plVar8);
          }
          if (1 < (int)plVar9[1]) {
            plVar8 = *(longlong **)(lVar13 + -0x10 + lVar12);
            if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
              plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
            }
            FUN_1447a1fc0(plVar8);
            plVar8 = *(longlong **)(lVar13 + -0x10 + lVar12);
            pcVar2 = *(code **)(*plVar8 + 0x28);
            if (pcVar2 == FUN_14482841c) {
              plVar9 = plVar8 + 3;
              if (plVar8[5] != 0) {
                plVar9 = (longlong *)(plVar8[5] + 8);
              }
            }
            else if (pcVar2 == (code *)&LAB_14010c34c) {
              plVar9 = plVar8 + 2;
            }
            else {
              plVar9 = (longlong *)(*pcVar2)(plVar8);
            }
            local_478 = (void *)0x0;
            local_470 = *(uint *)(plVar9 + 1);
            lVar13 = (longlong)(int)local_470;
            pvVar3 = (void *)*plVar9;
            if (lVar13 == 0) {
              local_46c = 0;
            }
            else {
              FUN_1446dd670(&local_478,local_470,0);
              memcpy(local_478,pvVar3,lVar13 * 2);
            }
            if (uVar11 == (int)param_1[7] - 1) {
              cVar6 = FUN_144a38768(&local_478,&DAT_149e1419a,1,1);
LAB_140baf863:
              bVar14 = false;
            }
            else {
              lVar13 = param_1[6];
              cVar6 = FUN_144a38768(&local_478,&DAT_149e1419a,1,1);
              plVar8 = (longlong *)(lVar13 + lVar12);
              if (plVar8 == (longlong *)0x0) goto LAB_140baf863;
              plVar9 = (longlong *)*plVar8;
              if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
                plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
              }
              FUN_1447a1fc0(plVar9);
              plVar8 = (longlong *)*plVar8;
              pcVar2 = *(code **)(*plVar8 + 0x28);
              if (pcVar2 == FUN_14482841c) {
                plVar9 = plVar8 + 3;
                if (plVar8[5] != 0) {
                  plVar9 = (longlong *)(plVar8[5] + 8);
                }
              }
              else if (pcVar2 == (code *)&LAB_14010c34c) {
                plVar9 = plVar8 + 2;
              }
              else {
                plVar9 = (longlong *)(*pcVar2)(plVar8);
              }
              puVar10 = &DAT_149dfb77a;
              if ((int)plVar9[1] != 0) {
                puVar10 = (ushort *)*plVar9;
              }
              uVar1 = *puVar10;
              iVar7 = 0;
              if (uVar1 != 0x2d) {
                if (uVar1 < 0x80) {
                  iVar7 = (byte)(&DAT_149e05da0)[uVar1] - 0x2d;
                }
                else {
                  iVar7 = uVar1 - 0x2d;
                }
              }
              bVar14 = iVar7 == 0;
            }
            FUN_140c540b4(&local_478,&DAT_149e1419a,1,1);
            FUN_140b127b8(&local_478,&DAT_149e1419a,1,1);
            uVar4 = local_470;
            pvVar3 = local_478;
            iVar7 = local_470 - 1;
            if (local_470 == 0) {
              iVar7 = 0;
            }
            lVar13 = (longlong)iVar7;
            if (local_458 <= local_460 + lVar13) {
              FUN_140213274(&local_468,lVar13);
            }
            puVar5 = local_460;
            if (1 < uVar4) {
              memcpy(local_460,pvVar3,lVar13 * 2);
              local_460 = puVar5 + lVar13;
            }
            param_1 = local_488;
            if (cVar6 == '\0' && !bVar14) {
              if (local_458 <= local_460 + 1) {
                FUN_140213274(&local_468,1);
              }
              *local_460 = 0x20;
            }
            else {
              if (local_458 <= local_460 + 1) {
                FUN_140213274(&local_468,1);
              }
              *local_460 = 0x2d;
            }
            local_460 = local_460 + 1;
            if (local_478 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x10;
          param_2 = local_480;
        } while ((longlong)uVar11 < (longlong)(int)param_1[7]);
      }
      *local_460 = 0;
      FUN_140056680(param_2,local_468);
      if (local_450 == '\x01') {
        FUN_1400020a8(local_468);
      }
LAB_140bafb0d:
      if ((local_48 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  FUN_140baf434(param_1,param_2);
LAB_140bafaaf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_4a8);
}



// FUNCTION 140bafb3c FUN_140bafb3c body=4332 status=ok
// SIG undefined FUN_140bafb3c(void)

void FUN_140bafb3c(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  void *pvVar15;
  char *pcVar16;
  byte *pbVar17;
  ushort uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ushort uVar24;
  longlong *plVar25;
  byte *pbVar26;
  longlong lVar27;
  longlong *plVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  longlong local_188 [2];
  longlong *local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong **local_158;
  undefined8 local_150;
  int iStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int local_110;
  undefined1 local_108;
  undefined4 local_104;
  void *local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_140bb133e();
  iVar5 = *(int *)(param_1 + 0x4cc);
  if (*(char *)(param_1 + 0x4c8) == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_140bb09eb;
    }
  }
  else {
LAB_140bb09eb:
    *(undefined1 *)(param_1 + 0x4c8) = 0;
    *(int *)(param_1 + 0x4cc) = iVar5 + 1;
  }
  lVar20 = *param_2;
  if (lVar20 != 0) {
    local_168 = *(void **)(lVar20 + 0xa0);
    if ((local_168 == (void *)0x0) &&
       (local_168 = *(void **)(lVar20 + 0x98), local_168 == (void *)0x0)) {
      local_168 = *(void **)(lVar20 + 0x3c);
    }
    FUN_1400021e4(&local_168,&local_158);
    if ((int)local_150 == *(int *)(param_1 + 0xf8)) {
      if (1 < (int)local_150) {
        lVar20 = 0;
        while( true ) {
          uVar18 = *(ushort *)((longlong)local_158 + lVar20);
          uVar22 = (uint)uVar18;
          uVar24 = *(ushort *)(*(longlong *)(param_1 + 0xf0) + lVar20);
          uVar21 = (uint)uVar24;
          if (uVar18 != uVar24) {
            if ((uVar24 | uVar18) < 0x80) {
              uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar18];
              uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar24];
              if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar24]) goto LAB_140bafc1c;
            }
            iVar5 = uVar22 - uVar21;
            goto LAB_140bafc49;
          }
          if (uVar18 == 0) break;
LAB_140bafc1c:
          lVar20 = lVar20 + 2;
        }
        iVar5 = 0;
        goto LAB_140bafc49;
      }
      bVar29 = true;
    }
    else {
      iVar5 = *(int *)(param_1 + 0xf8) + (int)local_150 + -1;
LAB_140bafc49:
      bVar29 = iVar5 == 0;
    }
    iVar5 = *(int *)(param_1 + 0x4cc);
    if (*(byte *)(param_1 + 0x4c8) == (bVar29 ^ 1U)) {
      if (iVar5 == 0) {
        iVar5 = 0;
        goto LAB_140bb0b77;
      }
    }
    else {
LAB_140bb0b77:
      *(byte *)(param_1 + 0x4c8) = bVar29 ^ 1U;
      *(int *)(param_1 + 0x4cc) = iVar5 + 1;
    }
    if (local_158 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  plVar8 = (longlong *)(param_1 + 0x420);
  iVar5 = *(int *)(param_1 + 0x42c);
  FUN_140bb299f(*(undefined8 *)(param_1 + 0x420));
  *(undefined4 *)(param_1 + 0x428) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x42c) != 0)) {
    FUN_148e23372(plVar8);
  }
  iVar5 = *(int *)(param_1 + 0x4f4);
  if (*(char *)(param_1 + 0x4f0) == '\0') {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_140bafcbb;
    }
  }
  else {
LAB_140bafcbb:
    *(undefined1 *)(param_1 + 0x4f0) = 0;
    *(int *)(param_1 + 0x4f4) = iVar5 + 1;
  }
  if (*param_2 != 0) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar20 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar20) == 0) goto LAB_140bafd23;
        lVar20 = lVar20 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar20);
    }
    FUN_140bb182a(param_2,plVar8,param_3);
    iVar5 = *(int *)(param_1 + 0x4f4);
    if (*(char *)(param_1 + 0x4f0) != '\0') {
      if (iVar5 != 0) goto LAB_140bafd23;
      iVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x4f0) = 1;
    *(int *)(param_1 + 0x4f4) = iVar5 + 1;
  }
LAB_140bafd23:
  plVar9 = (longlong *)(param_1 + 0x410);
  iVar5 = *(int *)(param_1 + 0x41c);
  FUN_140bb299f();
  *(undefined4 *)(param_1 + 0x418) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x41c) != 0)) {
    FUN_148e23372();
  }
  local_198 = (longlong *)(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    if ((longlong)*(int *)(param_1 + 0x230) != 0) {
      lVar20 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x228) + lVar20) == 0) goto LAB_140baffb8;
        lVar20 = lVar20 + 8;
      } while ((longlong)*(int *)(param_1 + 0x230) * 8 != lVar20);
    }
    cVar2 = FUN_140bb182a(local_198,plVar9,0);
    if (cVar2 != '\0') {
      iVar5 = *(int *)(param_1 + 0x418);
      uVar6 = (ulonglong)iVar5;
      uVar14 = uVar6;
      if (0 < (longlong)uVar6) {
        lVar20 = 0;
        lVar27 = 0;
        do {
          if (((lVar27 < *(int *)(param_1 + 0x428)) && (*(longlong *)(*plVar8 + lVar20) != 0)) &&
             (*(longlong *)(*plVar8 + lVar20) == *(longlong *)(*plVar9 + lVar20))) {
            FUN_140bb0c2a(*plVar9 + lVar20);
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x418);
          }
          lVar27 = lVar27 + 1;
          iVar5 = (int)uVar6;
          lVar20 = lVar20 + 0x18;
          uVar14 = (longlong)iVar5;
        } while (lVar27 < iVar5);
      }
      if (iVar5 != 0) {
        plVar9 = (longlong *)*plVar9;
        local_190 = plVar9 + uVar14 * 3;
        plVar8 = (longlong *)(param_1 + 0x500);
        piVar1 = (int *)(param_1 + 0x538);
        do {
          if (*plVar9 != 0) {
            if ((*(char *)(*plVar9 + 0x18) == '\x04') && (0 < (int)plVar9[2])) {
              if ((*(longlong *)(*(longlong *)plVar9[1] + 0x80) != *(longlong *)(param_1 + 0x620))
                 || (*(int *)(param_1 + 0x628) == 0)) {
                *(longlong *)(param_1 + 0x620) = *(longlong *)(*(longlong *)plVar9[1] + 0x80);
                *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
              }
            }
            if ((longlong)(int)plVar9[2] != 0) {
              plVar25 = (longlong *)plVar9[1];
              plVar28 = plVar25 + (longlong)(int)plVar9[2] * 0xc;
              do {
                if (*plVar25 != 0) {
                  if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
                    piVar12 = *(int **)(param_1 + 0x540);
                    if (*(int **)(param_1 + 0x540) == (int *)0x0) {
                      piVar12 = piVar1;
                    }
                    iVar5 = *piVar12;
                    if (iVar5 != -1) {
                      do {
                        if (*(char *)(*plVar8 + (longlong)iVar5 * 0x28) == '\0') goto LAB_140bafeab;
                        iVar5 = *(int *)(*plVar8 + (longlong)iVar5 * 0x28 + 0x20);
                      } while (iVar5 != -1);
                    }
                  }
                  local_178 = (longlong *)((ulonglong)local_178 & 0xffffffffffffff00);
                  local_158 = &local_178;
                  FUN_1457807f0(plVar8,&local_168,&local_158);
LAB_140bafeab:
                  lVar20 = *plVar9;
                  if (lVar20 == 0) {
                    if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
                      piVar12 = *(int **)(param_1 + 0x540);
                      if (*(int **)(param_1 + 0x540) == (int *)0x0) {
                        piVar12 = piVar1;
                      }
                      iVar5 = *piVar12;
                      if (iVar5 != -1) {
                        do {
                          pcVar11 = (char *)(*plVar8 + (longlong)iVar5 * 0x28);
                          if (*pcVar11 == '\0') goto LAB_140bb0a2f;
                          iVar5 = *(int *)(pcVar11 + 0x20);
                        } while (iVar5 != -1);
                      }
                    }
                    pcVar11 = (char *)0x0;
LAB_140bb0a2f:
                    pbVar26 = (byte *)(pcVar11 + 8);
                    *(int *)(pcVar11 + 0x18) = *(int *)(pcVar11 + 0x18) + 1;
                    iVar5 = *(int *)(pcVar11 + 0x10);
                    *(uint *)(pcVar11 + 0x10) = iVar5 + 1U;
                    if (*(uint *)(pcVar11 + 0x14) < iVar5 + 1U) goto LAB_140bb0a48;
                  }
                  else {
                    iVar5 = *(int *)(param_1 + 0x508);
                    iVar13 = *(int *)(param_1 + 0x534);
                    if (iVar5 != iVar13) {
                      bVar3 = *(byte *)(lVar20 + 0x18);
                      piVar12 = *(int **)(param_1 + 0x540);
                      if (*(int **)(param_1 + 0x540) == (int *)0x0) {
                        piVar12 = piVar1;
                      }
                      iVar19 = piVar12[*(int *)(param_1 + 0x548) - 1U & (uint)bVar3];
                      if (iVar19 != -1) {
                        do {
                          if (*(byte *)(*plVar8 + (longlong)iVar19 * 0x28) == bVar3)
                          goto LAB_140baff10;
                          iVar19 = *(int *)(*plVar8 + (longlong)iVar19 * 0x28 + 0x20);
                        } while (iVar19 != -1);
                      }
                    }
                    local_158 = (longlong **)(lVar20 + 0x18);
                    FUN_145780432(plVar8,&local_168,&local_158);
                    bVar3 = *(byte *)(*plVar9 + 0x18);
                    iVar5 = *(int *)(param_1 + 0x508);
                    iVar13 = *(int *)(param_1 + 0x534);
LAB_140baff10:
                    if (iVar5 == iVar13) {
LAB_140bb0a18:
                      pbVar17 = (byte *)0x0;
                    }
                    else {
                      piVar12 = *(int **)(param_1 + 0x540);
                      if (*(int **)(param_1 + 0x540) == (int *)0x0) {
                        piVar12 = piVar1;
                      }
                      iVar5 = piVar12[*(int *)(param_1 + 0x548) - 1U & (uint)bVar3];
                      if (iVar5 == -1) goto LAB_140bb0a18;
                      do {
                        pbVar17 = (byte *)(*plVar8 + (longlong)iVar5 * 0x28);
                        if (*pbVar17 == bVar3) break;
                        iVar5 = *(int *)(pbVar17 + 0x20);
                        pbVar17 = (byte *)0x0;
                      } while (iVar5 != -1);
                    }
                    pbVar26 = pbVar17 + 8;
                    *(int *)(pbVar17 + 0x18) = *(int *)(pbVar17 + 0x18) + 1;
                    iVar5 = *(int *)(pbVar17 + 0x10);
                    *(uint *)(pbVar17 + 0x10) = iVar5 + 1U;
                    if (*(uint *)(pbVar17 + 0x14) < iVar5 + 1U) {
LAB_140bb0a48:
                      FUN_14577ff56(pbVar26);
                    }
                  }
                  memset((void *)((longlong)iVar5 * 0xe0 + *(longlong *)pbVar26),0,0xe0);
                  FUN_140bb0d6e();
                }
                plVar25 = plVar25 + 0xc;
              } while (plVar25 != plVar28);
            }
          }
          plVar9 = plVar9 + 3;
        } while (plVar9 != local_190);
      }
    }
  }
LAB_140baffb8:
  if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
    lVar20 = *(longlong *)(param_1 + 0x540);
    if (*(longlong *)(param_1 + 0x540) == 0) {
      lVar20 = param_1 + 0x538;
    }
    iVar5 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x548) - 1U & 4) * 4);
    if (iVar5 != -1) {
      bVar3 = *(byte *)(param_1 + 0x10);
      lVar20 = *(longlong *)(param_1 + 0x500);
      iVar13 = iVar5;
      do {
        if (*(char *)(lVar20 + (longlong)iVar13 * 0x28) == '\x04') goto LAB_140bb07b6;
        iVar13 = *(int *)(lVar20 + (longlong)iVar13 * 0x28 + 0x20);
      } while (iVar13 != -1);
    }
  }
  goto LAB_140bafff2;
  while (iVar5 = *(int *)(pcVar11 + 0x20), iVar5 != -1) {
LAB_140bb0199:
    pcVar11 = (char *)(lVar20 + (longlong)iVar5 * 0x28);
    if (*pcVar11 == '\0') goto LAB_140bb01ad;
  }
  pcVar11 = (char *)0x0;
LAB_140bb01ad:
  iVar5 = *(int *)(pcVar11 + 0x14);
  FUN_140bb1538(*(undefined8 *)(pcVar11 + 8),*(undefined4 *)(pcVar11 + 0x10));
  pcVar11[0x10] = '\0';
  pcVar11[0x11] = '\0';
  pcVar11[0x12] = '\0';
  pcVar11[0x13] = '\0';
  if ((iVar5 < 0) && (*(int *)(pcVar11 + 0x14) != 0)) {
    FUN_148e233a2(pcVar11 + 8);
  }
  *(int *)(pcVar11 + 0x18) = *(int *)(pcVar11 + 0x18) + 1;
  if ((longlong)(int)uStack_170 != 0) {
    local_198 = local_178 + (longlong)(int)uStack_170 * 2;
    plVar8 = local_178;
LAB_140bb020c:
    if (*(int *)(param_1 + 0x508) == *(int *)(param_1 + 0x534)) {
LAB_140bb0a6c:
      pcVar11 = (char *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x540);
      if (*(longlong **)(param_1 + 0x540) == (longlong *)0x0) {
        plVar9 = local_190;
      }
      iVar5 = (int)*plVar9;
      if (iVar5 == -1) goto LAB_140bb0a6c;
      do {
        pcVar11 = (char *)(*(longlong *)(param_1 + 0x500) + (longlong)iVar5 * 0x28);
        if (*pcVar11 == '\0') break;
        iVar5 = *(int *)(pcVar11 + 0x20);
        pcVar11 = (char *)0x0;
      } while (iVar5 != -1);
    }
    lVar20 = *(longlong *)(pcVar11 + 8);
    *(int *)(pcVar11 + 0x18) = *(int *)(pcVar11 + 0x18) + 2;
    if ((longlong)*(int *)(pcVar11 + 0x10) != 0) {
      lVar27 = (longlong)*(int *)(pcVar11 + 0x10) * 0xe0 + lVar20;
      iVar5 = (int)plVar8[1];
LAB_140bb0278:
      if (*(int *)(lVar20 + 0x10) != iVar5) {
        if (*(int *)(lVar20 + 0x10) + iVar5 == 1) goto LAB_140bb05c6;
        goto LAB_140bb02ea;
      }
      if (1 < iVar5) {
        lVar23 = 0;
        do {
          uVar18 = *(ushort *)(*(longlong *)(lVar20 + 8) + lVar23);
          uVar14 = (ulonglong)uVar18;
          uVar24 = *(ushort *)(*plVar8 + lVar23);
          if (uVar18 == uVar24) {
            if (uVar18 == 0) break;
          }
          else {
            if (0x7f < (uVar24 | uVar18)) goto LAB_140bb05ba;
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            uVar6 = (ulonglong)uVar24;
            uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[uVar6]) goto LAB_140bb05ba;
          }
          lVar23 = lVar23 + 2;
        } while( true );
      }
      goto LAB_140bb05c6;
    }
LAB_140bb02f6:
    local_158 = (longlong **)CONCAT71(local_158._1_7_,1);
    local_158 = (longlong **)((ulonglong)local_158 & 0xffffffff);
    FUN_140056680(&local_168,&DAT_149dfb77a);
    local_150 = local_168;
    iStack_148 = (int)uStack_160;
    iStack_144 = uStack_160._4_4_;
    local_140 = 0;
    FUN_140056680(&local_168,&DAT_149dfb77a);
    local_138 = (undefined4)local_168;
    uStack_134 = local_168._4_4_;
    uStack_130 = (int)uStack_160;
    uStack_12c = uStack_160._4_4_;
    local_128 = 0;
    FUN_140056680(&local_168,&DAT_149dfb77a);
    local_120 = (undefined4)local_168;
    uStack_11c = local_168._4_4_;
    uStack_118 = (int)uStack_160;
    uStack_114 = uStack_160._4_4_;
    local_110 = 0;
    local_108 = 0;
    local_104 = 0;
    FUN_1446f470e(&local_168,&DAT_149dfb77a,1);
    local_100 = local_168;
    local_f8 = 0;
    FUN_140056680(&local_168,&DAT_149dfb77a);
    local_f0 = (undefined4)local_168;
    uStack_ec = local_168._4_4_;
    uStack_e8 = (int)uStack_160;
    uStack_e4 = uStack_160._4_4_;
    local_e0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_d8 = 0x13f800000;
    local_140 = local_140 + 1;
    if (&local_150 != plVar8) {
      iVar5 = (int)plVar8[1];
      pvVar15 = (void *)*plVar8;
      iStack_148 = iVar5;
      if (iVar5 == 0 && iStack_144 == 0) {
        iStack_144 = 0;
      }
      else {
        FUN_1446dd670(&local_150,iVar5);
        if (iVar5 != 0) {
          memcpy(local_150,pvVar15,(longlong)iVar5 * 2);
        }
      }
    }
    FUN_1400b22c2(&local_168,&DAT_14b9a4dc4);
    local_110 = local_110 + 1;
    if (CONCAT44(uStack_11c,local_120) != 0) {
      FUN_1400020a8();
    }
    local_120 = (undefined4)local_168;
    uStack_11c = local_168._4_4_;
    uStack_118 = (int)uStack_160;
    uStack_114 = uStack_160._4_4_;
    FUN_1400b22c2(&local_168,"MissingIcon");
    local_128 = local_128 + 1;
    if (CONCAT44(uStack_134,local_138) != 0) {
      FUN_1400020a8();
    }
    local_138 = (undefined4)local_168;
    uStack_134 = local_168._4_4_;
    uStack_130 = (int)uStack_160;
    uStack_12c = uStack_160._4_4_;
    if (*(int *)(param_1 + 0x508) == *(int *)(param_1 + 0x534)) {
LAB_140bb0ad9:
      pcVar11 = (char *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x540);
      if (*(longlong **)(param_1 + 0x540) == (longlong *)0x0) {
        plVar9 = local_190;
      }
      iVar5 = (int)*plVar9;
      if (iVar5 == -1) goto LAB_140bb0ad9;
      do {
        pcVar11 = (char *)(*(longlong *)(param_1 + 0x500) + (longlong)iVar5 * 0x28);
        if (*pcVar11 == '\0') break;
        iVar5 = *(int *)(pcVar11 + 0x20);
        pcVar11 = (char *)0x0;
      } while (iVar5 != -1);
    }
    iVar5 = *(int *)(pcVar11 + 0x10);
    *(uint *)(pcVar11 + 0x10) = iVar5 + 1U;
    if (*(uint *)(pcVar11 + 0x14) < iVar5 + 1U) {
      FUN_14577ff56(pcVar11 + 8,iVar5);
    }
    FUN_140bb15ba((longlong)iVar5 * 0xe0 + *(longlong *)(pcVar11 + 8),&local_158);
    if (iVar5 != -1) {
      *(int *)(pcVar11 + 0x18) = *(int *)(pcVar11 + 0x18) + 1;
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(&uStack_c8);
    if (CONCAT44(uStack_ec,local_f0) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_11c,local_120) != 0) {
      FUN_1400020a8();
    }
    pvVar15 = local_150;
    if (CONCAT44(uStack_134,local_138) != 0) {
      FUN_1400020a8();
      pvVar15 = local_150;
    }
    goto LAB_140bb06ee;
  }
  goto LAB_140bb0707;
LAB_140bb05ba:
  if (uVar18 != uVar24) {
LAB_140bb02ea:
    lVar20 = lVar20 + 0xe0;
    if (lVar20 == lVar27) goto LAB_140bb02f6;
    goto LAB_140bb0278;
  }
LAB_140bb05c6:
  *(int *)(lVar20 + 0x84) = *(int *)(lVar20 + 0x84) + 1;
  fVar30 = *(float *)(lVar20 + 0x80) + 1.0;
  *(float *)(lVar20 + 0x80) = fVar30;
  iVar19 = (int)fVar30;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  lVar23 = 0xf;
  iVar13 = 0x10;
  lVar27 = 0x1000000000;
  iVar5 = iVar19;
  do {
    lVar27 = lVar27 + -0x100000000;
    *(undefined2 *)((longlong)&local_158 + lVar23 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar5 % 10) * 2);
    uVar22 = iVar5 + 9;
    lVar23 = lVar23 + -1;
    iVar13 = iVar13 + -1;
    iVar5 = iVar5 / 10;
  } while (0x12 < uVar22);
  if (iVar19 < 0) {
    iVar13 = (int)lVar23;
    lVar27 = (longlong)iVar13;
    *(undefined2 *)((longlong)&local_158 + lVar27 * 2) = 0x2d;
  }
  else {
    lVar27 = lVar27 >> 0x20;
  }
  FUN_1400020e8(&local_168,(longlong)&local_158 + lVar27 * 2,0x10 - iVar13);
  FUN_1400b22c2(local_188,&DAT_14a1846a3);
  FUN_1401c7f3e(&local_158,local_188,&local_168);
  *(int *)(lVar20 + 0x48) = *(int *)(lVar20 + 0x48) + 1;
  if ((longlong ***)(lVar20 + 0x38) == &local_158) {
    if (local_158 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar20 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(longlong ***)(lVar20 + 0x38) = local_158;
    local_158 = (longlong **)0x0;
    *(int *)(lVar20 + 0x40) = (int)local_150;
    *(undefined4 *)(lVar20 + 0x44) = local_150._4_4_;
    local_150 = (void *)0x0;
  }
  pvVar15 = local_168;
  if (local_188[0] != 0) {
    FUN_1400020a8();
    pvVar15 = local_168;
  }
LAB_140bb06ee:
  if (pvVar15 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar8 = plVar8 + 2;
  if (plVar8 == local_198) goto LAB_140bb0707;
  goto LAB_140bb020c;
  while (iVar5 = *(int *)(pcVar11 + 0x20), iVar5 != -1) {
LAB_140bb07b6:
    pcVar11 = (char *)(lVar20 + (longlong)iVar5 * 0x28);
    if (*pcVar11 == '\x04') goto LAB_140bb07ca;
  }
  pcVar11 = (char *)0x0;
LAB_140bb07ca:
  if (0 < *(int *)(pcVar11 + 0x10)) {
    plVar8 = (longlong *)(param_1 + 0x5d0);
    iVar5 = *(int *)(param_1 + 0xf8);
    if (iVar5 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0xf0);
    }
    iVar13 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar13 = 0;
    }
    uVar4 = FUN_144a49b4a(iVar13,puVar10);
    iVar5 = FUN_14128acc0(plVar8,uVar4,param_1 + 0xf0);
    if (iVar5 != -1) {
      iVar5 = *(int *)(param_1 + 0xf8);
      if (iVar5 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0xf0);
      }
      pcVar11 = (char *)0x0;
      pcVar16 = (char *)(ulonglong)(iVar5 - 1);
      if (iVar5 == 0) {
        pcVar16 = pcVar11;
      }
      uVar4 = FUN_144a49b4a(pcVar16,puVar10);
      iVar5 = FUN_14128acc0(plVar8,uVar4);
      if (iVar5 == -1) {
        lVar20 = 0;
      }
      else {
        lVar20 = (longlong)iVar5 * 0x20 + *plVar8;
      }
      cVar2 = (bVar3 & 1) * '\x02' + '\x03';
      if (*(longlong *)(lVar20 + 0x10) == *(longlong *)(param_1 + 0x620)) {
        cVar2 = '\0';
      }
      if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
        lVar20 = param_1 + 0x538;
        if (*(longlong *)(param_1 + 0x540) != 0) {
          lVar20 = *(longlong *)(param_1 + 0x540);
        }
        iVar5 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x548) - 1U & 4) * 4);
        if (iVar5 == -1) {
          pcVar11 = (char *)0x0;
        }
        else {
          do {
            pcVar11 = (char *)(*(longlong *)(param_1 + 0x500) + (longlong)iVar5 * 0x28);
            if (*pcVar11 == '\x04') break;
            iVar5 = *(int *)(pcVar11 + 0x20);
            pcVar11 = (char *)0x0;
          } while (iVar5 != -1);
        }
      }
      lVar20 = *(longlong *)(pcVar11 + 8);
      *(int *)(pcVar11 + 0x18) = *(int *)(pcVar11 + 0x18) + 2;
      iVar5 = *(int *)(pcVar11 + 0x10);
      if ((longlong)iVar5 != 0) {
        lVar27 = 0;
        do {
          iVar13 = *(int *)(lVar20 + 0x54 + lVar27);
          if (cVar2 == *(char *)(lVar20 + 0x50 + lVar27)) {
            if (iVar13 == 0) {
              iVar13 = 0;
              goto LAB_140bb09da;
            }
          }
          else {
LAB_140bb09da:
            *(char *)(lVar20 + 0x50 + lVar27) = cVar2;
            *(int *)(lVar20 + 0x54 + lVar27) = iVar13 + 1;
          }
          lVar27 = lVar27 + 0xe0;
        } while ((longlong)iVar5 * 0xe0 - lVar27 != 0);
      }
    }
  }
LAB_140bafff2:
  if (*(int *)(param_1 + 0x88) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = *(undefined2 **)(param_1 + 0x80);
  }
  lVar20 = 0;
  while( true ) {
    uVar18 = *(ushort *)((longlong)puVar10 + lVar20);
    uVar14 = (ulonglong)uVar18;
    uVar24 = *(ushort *)((longlong)&DAT_14b9a4da6 + lVar20);
    if (uVar18 != uVar24) break;
    if (uVar18 == 0) goto LAB_140bb0057;
LAB_140bb0024:
    lVar20 = lVar20 + 2;
  }
  if ((uVar24 | uVar18) < 0x80) {
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
    uVar6 = (ulonglong)uVar24;
    uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar6]) goto LAB_140bb0024;
  }
  if (uVar18 != uVar24) goto LAB_140bb00d0;
LAB_140bb0057:
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  FUN_14577fee4(local_198,&local_168,&DAT_14cbc8e60);
  FUN_14000bbd8(&local_158,&local_168,0);
  uVar7 = FUN_14577fece(&local_158);
  if (CONCAT44(uStack_13c,local_140) != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14577ffea(param_1,uVar7);
LAB_140bb00d0:
  if (*(int *)(param_1 + 0x70) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = *(undefined2 **)(param_1 + 0x68);
  }
  lVar20 = 0;
  while( true ) {
    uVar18 = *(ushort *)((longlong)puVar10 + lVar20);
    uVar14 = (ulonglong)uVar18;
    uVar24 = *(ushort *)((longlong)L"classmod" + lVar20);
    if (uVar18 != uVar24) break;
    if (uVar18 == 0) goto LAB_140bb0133;
LAB_140bb00fc:
    lVar20 = lVar20 + 2;
  }
  if ((uVar24 | uVar18) < 0x80) {
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
    uVar6 = (ulonglong)uVar24;
    uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar6]) goto LAB_140bb00fc;
  }
  if (uVar18 != uVar24) goto LAB_140bb0724;
LAB_140bb0133:
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  FUN_140bb11aa(local_198);
  if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
    local_190 = (longlong *)(param_1 + 0x538);
    plVar8 = *(longlong **)(param_1 + 0x540);
    if (*(longlong **)(param_1 + 0x540) == (longlong *)0x0) {
      plVar8 = local_190;
    }
    iVar5 = (int)*plVar8;
    if (iVar5 != -1) {
      lVar20 = *(longlong *)(param_1 + 0x500);
      iVar13 = iVar5;
      do {
        if (*(char *)(lVar20 + (longlong)iVar13 * 0x28) == '\0') goto LAB_140bb0199;
        iVar13 = *(int *)(lVar20 + (longlong)iVar13 * 0x28 + 0x20);
      } while (iVar13 != -1);
    }
  }
LAB_140bb0707:
  FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140bb0724:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bb0c2a FUN_140bb0c2a body=141 status=ok
// SIG undefined FUN_140bb0c2a(void)

void FUN_140bb0c2a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x10) * 0xc;
    do {
      *(undefined1 *)((longlong)plVar2 + 0x5e) = 1;
      if ((*(char *)((longlong)plVar2 + 0x5c) == '\x01') &&
         ((longlong)*(int *)(param_2 + 0x10) != 0)) {
        plVar1 = *(longlong **)(param_2 + 8);
        lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x60;
        do {
          if (((*(longlong *)(*plVar2 + 0x68) == *(longlong *)(*plVar1 + 0x68)) &&
              (*(int *)(*plVar2 + 0x70) == *(int *)(*plVar1 + 0x70))) &&
             (*(char *)((longlong)plVar1 + 0x5c) == '\x01')) {
            FUN_140bb0cb8(plVar2,plVar1);
          }
          plVar1 = plVar1 + 0xc;
          lVar4 = lVar4 + -0x60;
        } while (lVar4 != 0);
      }
      plVar2 = plVar2 + 0xc;
    } while (plVar2 != plVar3);
  }
  return;
}



// FUNCTION 140bb0cb8 FUN_140bb0cb8 body=182 status=ok
// SIG undefined FUN_140bb0cb8(void)

void FUN_140bb0cb8(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  
  if ((((*param_1 == 0) || (*param_2 == 0)) || (*(char *)((longlong)param_1 + 0x5d) != '\0')) ||
     (*(char *)((longlong)param_2 + 0x5d) == '\x01')) {
    *(undefined1 *)((longlong)param_1 + 0x5e) = 1;
    return;
  }
  cVar3 = *(char *)(*param_1 + 0x88);
  if (cVar3 == *(char *)(*param_2 + 0x88)) {
    fVar1 = *(float *)(param_1 + 0xb);
    fVar2 = *(float *)(param_2 + 0xb);
    if (cVar3 == '\0') {
      fVar5 = fVar2 - fVar1;
    }
    else {
      fVar5 = fVar1 - fVar2;
    }
    fVar4 = ABS(fVar5);
    if (fVar4 < 1e-08) {
      *(undefined1 *)((longlong)param_1 + 0x5e) = 2;
      return;
    }
    if (fVar5 <= 0.0) {
      cVar3 = (ABS(fVar2 * 0.2) < fVar4) + '\x05';
    }
    else {
      cVar3 = (ABS(fVar1 * 0.2) < fVar4) + '\x03';
    }
    *(char *)((longlong)param_1 + 0x5e) = cVar3;
  }
  return;
}



// FUNCTION 140bb0d6e FUN_140bb0d6e body=1082 status=ok
// SIG undefined FUN_140bb0d6e(void)

void FUN_140bb0d6e(char *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_2;
  if (lVar2 == 0) goto LAB_140bb107f;
  *(longlong *)(param_1 + 0x88) = lVar2;
  iVar5 = *(int *)(param_1 + 4);
  if ((*(char *)((longlong)param_2 + 0x5c) != *param_1) || (bVar13 = iVar5 == 0, iVar5 = 0, bVar13))
  {
    *param_1 = *(char *)((longlong)param_2 + 0x5c);
    *(int *)(param_1 + 4) = iVar5 + 1;
  }
  fVar1 = *(float *)(lVar2 + 0x60);
  iVar5 = *(int *)(param_1 + 0x84);
  if (((fVar1 != *(float *)(param_1 + 0x80)) || (NAN(fVar1) || NAN(*(float *)(param_1 + 0x80)))) ||
     (bVar13 = iVar5 == 0, iVar5 = 0, bVar13)) {
    *(float *)(param_1 + 0x80) = fVar1;
    *(int *)(param_1 + 0x84) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x54);
  if ((*(char *)((longlong)param_2 + 0x5e) != param_1[0x50]) ||
     (bVar13 = iVar5 == 0, iVar5 = 0, bVar13)) {
    param_1[0x50] = *(char *)((longlong)param_2 + 0x5e);
    *(int *)(param_1 + 0x54) = iVar5 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x60);
  if ((*(longlong *)(lVar2 + 0x80) != *(longlong *)(param_1 + 0x58)) ||
     (bVar13 = iVar5 == 0, iVar5 = 0, bVar13)) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(lVar2 + 0x80);
    *(int *)(param_1 + 0x60) = iVar5 + 1;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_140390f7a(lVar2 + 0x90,param_1 + 0x20);
  plVar11 = (longlong *)(param_1 + 0x90);
  FUN_140bb2e20(plVar11,param_2 + 1);
  iVar5 = *(int *)(param_1 + 0x98);
  iVar4 = *(int *)(param_1 + 0xc4);
  if (iVar5 != iVar4) {
    uVar3 = (uint)((ulonglong)DAT_14cbd5970 >> 0x10);
    uVar7 = (uint)DAT_14cbd5970 & 0xffff;
    pcVar10 = param_1 + 200;
    pcVar8 = *(char **)(param_1 + 0xd0);
    if (*(char **)(param_1 + 0xd0) == (char *)0x0) {
      pcVar8 = pcVar10;
    }
    iVar6 = *(int *)(pcVar8 + (ulonglong)
                              (*(int *)(param_1 + 0xd8) - 1U &
                              (int)((ulonglong)DAT_14cbd5970 >> 0x20) +
                              ((uint)DAT_14cbd5970 << 0x10 | uVar7) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = *plVar11;
      iVar12 = iVar6;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar12 * 0x20) == DAT_14cbd5970) goto LAB_140bb0ee7;
        iVar12 = *(int *)((longlong)iVar12 * 0x20 + lVar2 + 0x18);
      } while (iVar12 != -1);
    }
    goto LAB_140bb0f11;
  }
  goto LAB_140bb1036;
  while (iVar6 = *(int *)(lVar9 + 0x18), iVar6 != -1) {
LAB_140bb0ee7:
    lVar9 = lVar2 + (longlong)iVar6 * 0x20;
    if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x20) == DAT_14cbd5970) goto LAB_140bb0ef8;
  }
  lVar9 = 0;
LAB_140bb0ef8:
  FUN_140775496(param_1 + 8,lVar9 + 8);
  iVar5 = *(int *)(param_1 + 0x98);
  iVar4 = *(int *)(param_1 + 0xc4);
LAB_140bb0f11:
  if (iVar5 != iVar4) {
    uVar3 = (uint)((ulonglong)DAT_14cbd5978 >> 0x10);
    uVar7 = (uint)DAT_14cbd5978 & 0xffff;
    pcVar8 = *(char **)(param_1 + 0xd0);
    if (*(char **)(param_1 + 0xd0) == (char *)0x0) {
      pcVar8 = pcVar10;
    }
    iVar6 = *(int *)(pcVar8 + (ulonglong)
                              (*(int *)(param_1 + 0xd8) - 1U &
                              (int)((ulonglong)DAT_14cbd5978 >> 0x20) +
                              ((uint)DAT_14cbd5978 << 0x10 | uVar7) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = *plVar11;
      iVar12 = iVar6;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar12 * 0x20) == DAT_14cbd5978) goto LAB_140bb0f8c;
        iVar12 = *(int *)((longlong)iVar12 * 0x20 + lVar2 + 0x18);
      } while (iVar12 != -1);
    }
    goto LAB_140bb0fba;
  }
  goto LAB_140bb1036;
  while (iVar6 = *(int *)(lVar9 + 0x18), iVar6 != -1) {
LAB_140bb0f8c:
    lVar9 = lVar2 + (longlong)iVar6 * 0x20;
    if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x20) == DAT_14cbd5978) goto LAB_140bb0fa1;
  }
  lVar9 = 0;
LAB_140bb0fa1:
  FUN_140775496(param_1 + 0x38,lVar9 + 8);
  iVar5 = *(int *)(param_1 + 0x98);
  iVar4 = *(int *)(param_1 + 0xc4);
LAB_140bb0fba:
  if (iVar5 != iVar4) {
    uVar3 = (uint)((ulonglong)DAT_14cbd5980 >> 0x10);
    uVar7 = (uint)DAT_14cbd5980 & 0xffff;
    if (*(char **)(param_1 + 0xd0) != (char *)0x0) {
      pcVar10 = *(char **)(param_1 + 0xd0);
    }
    iVar5 = *(int *)(pcVar10 +
                    (ulonglong)
                    (*(int *)(param_1 + 0xd8) - 1U &
                    (int)((ulonglong)DAT_14cbd5980 >> 0x20) + ((uint)DAT_14cbd5980 << 0x10 | uVar7)
                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar2 = *plVar11;
      iVar4 = iVar5;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x20) == DAT_14cbd5980) goto LAB_140bb117a;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  goto LAB_140bb1036;
  while (iVar5 = *(int *)(lVar9 + 0x18), iVar5 != -1) {
LAB_140bb117a:
    lVar9 = lVar2 + (longlong)iVar5 * 0x20;
    if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x20) == DAT_14cbd5980) goto LAB_140bb118b;
  }
  lVar9 = 0;
LAB_140bb118b:
  FUN_140775496(param_1 + 0x68,lVar9 + 8);
LAB_140bb1036:
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x100) == '\x01') {
    FUN_140474144(local_38,param_1 + 0x38,param_1 + 0x68);
    FUN_140775538(param_1 + 0x68,local_38);
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x100) != '\x02') goto LAB_140bb107f;
    FUN_1400b22c2(local_58,"[newline]");
    FUN_1407ec8fc(local_48,param_1 + 0x38,local_58);
    FUN_144a7dea0(local_38,local_48,param_1 + 0x68);
    FUN_140775538(param_1 + 0x68,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    local_38[0] = local_58[0];
    if (local_48[0] != 0) {
      FUN_1400020a8();
      local_38[0] = local_58[0];
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_140bb107f:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bb11aa FUN_140bb11aa body=402 status=ok
// SIG undefined FUN_140bb11aa(void)

bool FUN_140bb11aa(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c65c56(param_1,&local_58);
  local_70 = local_58;
  if (local_58 != 0) {
    iVar4 = *(int *)(local_58 + 0x10);
    if ((longlong)iVar4 != 0) {
      lVar6 = *(longlong *)(local_58 + 8);
      lVar10 = 0;
      do {
        local_68 = (void *)0x0;
        local_60 = *(int *)(lVar6 + 8 + lVar10);
        lVar8 = (longlong)local_60;
        pvVar7 = *(void **)(lVar6 + lVar10);
        if (lVar8 == 0) {
          local_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,pvVar7,lVar8 * 2);
        }
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_1447a1bd6(param_2,iVar5);
        }
        pvVar7 = local_68;
        lVar8 = *param_2;
        lVar9 = (longlong)iVar5 * 0x10;
        puVar3 = (undefined8 *)(lVar8 + lVar9);
        *(undefined8 *)(lVar8 + lVar9) = 0;
        lVar11 = (longlong)local_60;
        *(int *)(lVar8 + 8 + lVar9) = local_60;
        if (lVar11 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar3,local_60,0);
          memcpy((void *)*puVar3,pvVar7,lVar11 * 2);
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 0x10;
      } while ((longlong)iVar4 * 0x10 != lVar10);
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_70 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb133e FUN_140bb133e body=506 status=ok
// SIG undefined FUN_140bb133e(void)

void FUN_140bb133e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0x528);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x520);
    if (*(uint **)(param_1 + 0x520) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x510);
    }
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar10 = *(longlong *)(param_1 + 0x500) + (longlong)iVar4 * 0x28;
      iVar4 = *(int *)(lVar10 + 0x14);
      FUN_140bb1538(*(undefined8 *)(lVar10 + 8),*(undefined4 *)(lVar10 + 0x10));
      *(undefined4 *)(lVar10 + 0x10) = 0;
      if ((iVar4 < 0) && (*(int *)(lVar10 + 0x14) != 0)) {
        FUN_148e233a2((undefined8 *)(lVar10 + 8));
      }
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar5 = *(uint **)(param_1 + 0x520);
      if (*(uint **)(param_1 + 0x520) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x510);
      }
      iVar3 = *(int *)(param_1 + 0x528);
      iVar4 = (int)uVar14;
      lVar10 = (longlong)iVar4;
      uVar8 = puVar5[lVar10] & uVar13;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar11 = 0;
          do {
            uVar8 = puVar5[lVar10 + lVar11 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar11 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140bb149b;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar7 - lVar10 != lVar11);
          uVar13 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_140bb149b:
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 140bb1538 FUN_140bb1538 body=130 status=ok
// SIG undefined FUN_140bb1538(void)

void FUN_140bb1538(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x90;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(param_1);
      if (*(longlong *)(param_1 + -0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x58) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x70) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x88) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0xe0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bb15ba FUN_140bb15ba body=623 status=ok
// SIG undefined FUN_140bb15ba(void)

undefined1 * FUN_140bb15ba(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
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
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar1 = *(int *)(param_2 + 0x28);
    pvVar2 = *(void **)(param_2 + 0x20);
    *(int *)(param_1 + 0x28) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x20,iVar1,0);
      memcpy(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
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
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x50] = param_2[0x50];
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x70);
    pvVar2 = *(void **)(param_2 + 0x68);
    *(int *)(param_1 + 0x70) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x68,iVar1,0);
      memcpy(*(void **)(param_1 + 0x68),pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_140bb2e20(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 140bb182a FUN_140bb182a body=4303 status=ok
// SIG undefined FUN_140bb182a(void)

undefined8 FUN_140bb182a(longlong param_1,ulonglong *param_2,undefined1 param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined3 uVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  undefined *puVar24;
  int *piVar25;
  uint *puVar26;
  ulonglong uVar27;
  int iVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong lVar35;
  longlong *plVar36;
  longlong *plVar37;
  longlong *plVar38;
  longlong lVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  longlong *plVar43;
  ulonglong uVar44;
  ulonglong *puVar45;
  ulonglong uVar46;
  int iVar47;
  ulonglong uVar48;
  longlong *plVar49;
  bool bVar50;
  float fVar51;
  undefined1 auStack_428 [39];
  undefined1 local_401;
  longlong local_400;
  ulonglong *local_3f8;
  longlong *local_3f0;
  ulonglong local_3e8;
  int local_3e0;
  uint local_3dc;
  ulonglong local_3d8;
  uint *local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398 [188];
  longlong local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_400 = param_1;
  puVar18 = (undefined8 *)FUN_140bb3c30();
  local_3a8 = 0;
  uStack_3a0 = 0;
  DAT_14cb830a0 = DAT_14cb830a0 + 1;
  if (DAT_14cb830a0 == 0) {
    FUN_1488d1d8e();
  }
  uVar16 = FUN_1447addd0(puVar18,0x10);
  iVar17 = FUN_140bb3162(uVar16,puVar18);
  iVar23 = DAT_14cb83080;
  iVar28 = DAT_14cb83058;
  local_3f8 = param_2;
  if ((iVar17 != -1) && (DAT_14cb83050 + (longlong)iVar17 * 0x30 != 0)) {
    lVar39 = DAT_14cb83050 + (longlong)iVar17 * 0x30;
    goto LAB_140bb18c6;
  }
  if (DAT_14cb83084 == 0) {
    iVar23 = DAT_14cb83058 + 1;
    bVar50 = DAT_14cb8305c == DAT_14cb83058;
    DAT_14cb83058 = iVar23;
    if (bVar50) {
      FUN_140044672(&DAT_14cb83050,iVar28);
    }
    lVar39 = (longlong)iVar28;
    iVar23 = FUN_144a54ea4(&DAT_14cb83060,1);
    puVar26 = DAT_14cb83070;
    if (DAT_14cb83070 == (uint *)0x0) {
      puVar26 = &DAT_14cb83060;
    }
    iVar17 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar17 = iVar23;
    }
    bVar14 = (byte)iVar23 & 0x1f;
    puVar26[iVar17 >> 5] = puVar26[iVar17 >> 5] & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    lVar39 = (longlong)DAT_14cb83080;
    DAT_14cb83080 = *(int *)(DAT_14cb83050 + 4 + lVar39 * 0x30);
    DAT_14cb83084 = DAT_14cb83084 + -1;
    iVar28 = iVar23;
    if (DAT_14cb83084 != 0) {
      *(undefined4 *)(DAT_14cb83050 + (longlong)DAT_14cb83080 * 0x30) = 0xffffffff;
    }
  }
  iVar23 = 1;
  puVar26 = &DAT_14cb83060;
  if (DAT_14cb83070 != (uint *)0x0) {
    puVar26 = DAT_14cb83070;
  }
  iVar17 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar17 = iVar28;
  }
  puVar26[iVar17 >> 5] = puVar26[iVar17 >> 5] | 1 << ((byte)iVar28 & 0x1f);
  lVar30 = DAT_14cb83050;
  lVar39 = lVar39 * 0x30;
  puVar2 = (undefined4 *)(DAT_14cb83050 + lVar39);
  uVar20 = puVar18[1];
  puVar3 = (undefined8 *)(DAT_14cb83050 + lVar39);
  *puVar3 = *puVar18;
  puVar3[1] = uVar20;
  puVar18 = (undefined8 *)(lVar30 + 0x10 + lVar39);
  *puVar18 = 0;
  puVar18[1] = 0;
  *(undefined8 *)(lVar30 + 0x20 + lVar39) = 0;
  FUN_140bb299f(0,0);
  *(undefined4 *)(lVar30 + 0x28 + lVar39) = 0xffffffff;
  uVar22 = DAT_14cb83058 - DAT_14cb83084;
  if (uVar22 == 1) {
LAB_140bb1a55:
    if (((int)uVar22 < 1) || (iVar23 <= DAT_14cb83098)) {
      uVar16 = DAT_14cb83098 - 1U & uVar16;
      puVar2[0xb] = uVar16;
      puVar24 = DAT_14cb83090;
      if (DAT_14cb83090 == (undefined *)0x0) {
        puVar24 = &DAT_14cb83088;
      }
      puVar2[10] = *(undefined4 *)
                    (puVar24 + ((longlong)DAT_14cb83098 - 1U & (longlong)(int)uVar16) * 4);
      puVar24 = DAT_14cb83090;
      if (DAT_14cb83090 == (undefined *)0x0) {
        puVar24 = &DAT_14cb83088;
      }
      *(int *)(puVar24 + ((longlong)DAT_14cb83098 - 1U & (longlong)(int)uVar16) * 4) = iVar28;
    }
    else {
      DAT_14cb83098 = iVar23;
      FUN_140bb4242();
    }
  }
  else {
    iVar17 = FUN_140bb3162(uVar16,puVar2);
    lVar39 = DAT_14cb83050;
    if (iVar17 == -1) {
      if (3 < uVar22) {
        uVar44 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
        lVar39 = 0x3f;
        if (uVar44 != 0) {
          for (; uVar44 >> lVar39 == 0; lVar39 = lVar39 + -1) {
          }
        }
        iVar23 = 1 << ((byte)lVar39 & 0x1f);
      }
      goto LAB_140bb1a55;
    }
    lVar30 = (longlong)iVar17 * 0x30;
    puVar4 = (undefined4 *)(DAT_14cb83050 + lVar30);
    FUN_140bb299f(*(undefined8 *)(DAT_14cb83050 + 0x10 + lVar30),
                  *(undefined4 *)(DAT_14cb83050 + 0x18 + lVar30));
    if (*(longlong *)(lVar39 + 0x10 + lVar30) != 0) {
      FUN_1400020a8();
    }
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    uVar9 = puVar2[4];
    uVar10 = puVar2[5];
    uVar11 = puVar2[6];
    uVar12 = puVar2[7];
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar2 + 8);
    puVar4[4] = uVar9;
    puVar4[5] = uVar10;
    puVar4[6] = uVar11;
    puVar4[7] = uVar12;
    *puVar4 = uVar5;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    FUN_140bb3ea0(iVar28);
  }
  lVar39 = DAT_14cb83050 + (longlong)iVar28 * 0x30;
LAB_140bb18c6:
  puVar45 = local_3f8;
  lVar30 = DAT_14cb83050;
  local_3c0 = lVar39 + 0x10;
  *(ulonglong *)(lVar39 + 0x20) = (ulonglong)DAT_14cb830a0;
  iVar28 = 0;
  iVar23 = 0;
  iVar17 = 0;
  iVar42 = 0;
  if (10 < DAT_14cb83058 - DAT_14cb83084) {
    if (DAT_14cb83078 == 0) {
      uVar44 = 1;
      uVar48 = 0;
      iVar47 = 0;
      iVar41 = 0;
    }
    else {
      puVar26 = &DAT_14cb83060;
      if (DAT_14cb83070 != (uint *)0x0) {
        puVar26 = DAT_14cb83070;
      }
      uVar16 = *puVar26;
      if (uVar16 == 0) {
        iVar23 = DAT_14cb83078 + 0x1e;
        if (-1 < DAT_14cb83078 + -1) {
          iVar23 = DAT_14cb83078 + -1;
        }
        iVar28 = 0;
        uVar44 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar44 = 0;
        }
        uVar48 = 0;
        iVar41 = 0;
        do {
          if (uVar44 == uVar48) {
            iVar42 = 0;
            iVar23 = 0;
            iVar17 = 0;
            goto LAB_140bb1903;
          }
          iVar41 = iVar41 + 0x20;
          uVar16 = puVar26[uVar48 + 1];
          uVar48 = uVar48 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar48 = 0;
        iVar41 = 0;
      }
      uVar44 = (ulonglong)(-uVar16 & uVar16);
      uVar46 = uVar44 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      iVar47 = (iVar41 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
      if (DAT_14cb83078 <= iVar47) {
        iVar47 = DAT_14cb83078;
      }
    }
    iVar28 = 0;
    iVar23 = 0;
    iVar17 = 0;
    iVar42 = 0;
    if (iVar47 != DAT_14cb83078) {
      puVar26 = &DAT_14cb83060;
      if (DAT_14cb83070 != (uint *)0x0) {
        puVar26 = DAT_14cb83070;
      }
      iVar28 = DAT_14cb83078 + 0x1e;
      if (-1 < DAT_14cb83078 + -1) {
        iVar28 = DAT_14cb83078 + -1;
      }
      iVar28 = iVar28 >> 5;
      uVar16 = 0xffffffff;
      uVar22 = 0xffffffff;
      do {
        uVar46 = *(ulonglong *)(lVar30 + 0x20 + (longlong)iVar47 * 0x30);
        if (uVar46 < uVar16) {
          plVar49 = (longlong *)((longlong)iVar47 * 0x30 + lVar30);
          local_3a8 = *plVar49;
          uStack_3a0 = plVar49[1];
          uVar16 = (uint)uVar46;
        }
        uVar22 = uVar22 & ~(uint)uVar44;
        iVar23 = (int)uVar48;
        lVar39 = (longlong)iVar23;
        uVar40 = puVar26[lVar39] & uVar22;
        if (uVar40 == 0) {
          iVar17 = iVar28;
          if (iVar28 < iVar23) {
            iVar17 = iVar23;
          }
          if (iVar28 <= iVar23) break;
          lVar35 = 0;
          while( true ) {
            iVar41 = iVar41 + 0x20;
            uVar40 = puVar26[lVar39 + lVar35 + 1];
            if (uVar40 != 0) break;
            lVar35 = lVar35 + 1;
            if (iVar17 - lVar39 == lVar35) goto LAB_140bb23b6;
          }
          uVar48 = (ulonglong)(iVar23 + (int)lVar35 + 1);
          uVar22 = 0xffffffff;
        }
        uVar44 = (ulonglong)(-uVar40 & uVar40);
        uVar46 = uVar44 * 2 + 1;
        lVar39 = 0x3f;
        if (uVar46 != 0) {
          for (; uVar46 >> lVar39 == 0; lVar39 = lVar39 + -1) {
          }
        }
        iVar47 = (iVar41 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
      } while (iVar47 < DAT_14cb83078);
LAB_140bb23b6:
      iVar28 = (int)uStack_3a0;
      iVar23 = local_3a8._4_4_;
      iVar17 = (int)local_3a8;
      iVar42 = uStack_3a0._4_4_;
      local_401 = param_3;
    }
  }
LAB_140bb1903:
  if ((DAT_14cb83058 != DAT_14cb83084) &&
     ((iVar23 != 0 || iVar17 != 0) || (iVar28 != 0 || iVar42 != 0))) {
    iVar28 = FUN_1447addd0(&local_3a8,0x10);
    puVar24 = &DAT_14cb83088;
    if (DAT_14cb83090 != (undefined *)0x0) {
      puVar24 = DAT_14cb83090;
    }
    iVar28 = *(int *)(puVar24 + ((longlong)iVar28 & (longlong)DAT_14cb83098 - 1U) * 4);
    if (iVar28 != -1) {
LAB_140bb205f:
      lVar30 = (longlong)iVar28 * 0x30;
      lVar39 = DAT_14cb83050 + lVar30;
      if ((((*(int *)(DAT_14cb83050 + lVar30) != (int)local_3a8) ||
           (*(int *)(DAT_14cb83050 + 4 + lVar30) != local_3a8._4_4_)) ||
          (*(int *)(DAT_14cb83050 + 8 + lVar30) != (int)uStack_3a0)) ||
         (*(int *)(DAT_14cb83050 + 0xc + lVar30) != uStack_3a0._4_4_)) goto LAB_140bb208d;
      iVar23 = *(int *)(puVar24 + (longlong)*(int *)(lVar39 + 0x2c) * 4);
      if (iVar23 == iVar28) {
        piVar25 = (int *)(puVar24 + (longlong)*(int *)(lVar39 + 0x2c) * 4);
      }
      else {
        do {
          piVar25 = (int *)((longlong)iVar23 * 0x30 + DAT_14cb83050 + 0x28);
          iVar23 = *piVar25;
        } while (iVar23 != iVar28);
      }
      *piVar25 = *(int *)(lVar39 + 0x28);
      lVar39 = DAT_14cb83050;
      FUN_140bb299f(*(undefined8 *)(DAT_14cb83050 + 0x10 + lVar30),
                    *(undefined4 *)(DAT_14cb83050 + 0x18 + lVar30));
      if (*(longlong *)(lVar39 + 0x10 + lVar30) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb3ea0(iVar28);
    }
  }
LAB_140bb1914:
  if (*(int *)(local_3c0 + 8) == 0) {
    local_401 = param_3;
    FUN_140c65c56();
    if (local_3b8 != 0) {
      puVar26 = (uint *)(local_3b8 + 0x158);
      uVar16 = *(uint *)(local_3b8 + 0x170);
      if (uVar16 == 0) {
        uVar48 = 1;
        uVar44 = 0;
        uVar22 = 0;
        iVar28 = 0;
      }
      else {
        puVar19 = *(uint **)(local_3b8 + 0x168);
        if (*(uint **)(local_3b8 + 0x168) == (uint *)0x0) {
          puVar19 = puVar26;
        }
        uVar22 = *puVar19;
        if (uVar22 == 0) {
          iVar28 = uVar16 + 0x1e;
          if (-1 < (int)(uVar16 - 1)) {
            iVar28 = uVar16 - 1;
          }
          uVar44 = 0;
          uVar48 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar48 = uVar44;
          }
          iVar28 = 0;
          do {
            if (uVar48 == uVar44) goto LAB_140bb1dfe;
            iVar28 = iVar28 + 0x20;
            uVar22 = puVar19[uVar44 + 1];
            uVar44 = uVar44 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar44 = 0;
          iVar28 = 0;
        }
        uVar48 = (ulonglong)(-uVar22 & uVar22);
        uVar46 = uVar48 * 2 + 1;
        lVar39 = 0x3f;
        if (uVar46 != 0) {
          for (; uVar46 >> lVar39 == 0; lVar39 = lVar39 + -1) {
          }
        }
        uVar22 = (iVar28 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
        if ((int)uVar16 <= (int)uVar22) {
          uVar22 = uVar16;
        }
      }
      if (uVar22 != uVar16) {
        uVar40 = 0xffffffff;
        local_3c8 = local_3b8;
        local_3d8 = (ulonglong)uVar16;
        local_3d0 = puVar26;
        do {
          lVar39 = *(longlong *)(*(longlong *)(local_3b8 + 0x148) + (longlong)(int)uVar22 * 0x10);
          lVar30 = local_3b8;
          if (lVar39 != 0) {
            lVar30 = *(longlong *)(lVar39 + 0x20);
            local_3e8 = uVar44;
            local_3dc = uVar40;
            if (lVar30 == 0) {
              uVar20 = FUN_145ce1c26();
              lVar30 = FUN_14477b664(uVar20);
              *(longlong *)(lVar39 + 0x20) = lVar30;
            }
            lVar35 = *(longlong *)(lVar39 + 0x28);
            local_3f0 = (longlong *)CONCAT44(local_3f0._4_4_,iVar28);
            if (lVar35 == 0) {
              if ((lVar30 != 0) && (*(longlong *)(lVar39 + 0x18) != 0)) {
                plVar49 = *(longlong **)(lVar30 + 0xb8);
                if ((plVar49 == (longlong *)0x0) ||
                   (cVar15 = (**(code **)(*plVar49 + 0x108))(plVar49), cVar15 == '\0')) {
                  *(undefined8 *)(lVar39 + 0x28) = 0;
                }
                else {
                  uVar20 = (**(code **)(*plVar49 + 0x110))(plVar49);
                  lVar35 = FUN_144aff482(uVar20,(longlong *)(lVar39 + 0x18));
                  *(longlong *)(lVar39 + 0x28) = lVar35;
                  if (lVar35 != 0) goto LAB_140bb1bee;
                }
              }
              if ((int)puVar45[1] == 0) {
                FUN_1488cbd9c(local_3f8);
              }
              uVar44 = *local_3f8;
              puVar45 = local_3f8;
            }
            else {
LAB_140bb1bee:
              bVar14 = (byte)*(undefined4 *)(lVar35 + 0x18);
              if (0x31 < bVar14) {
                bVar14 = 0x32;
              }
              iVar28 = (int)puVar45[1];
              if (iVar28 <= (int)(uint)bVar14) {
                local_3e0 = bVar14 + 1;
                iVar23 = -iVar28;
                do {
                  iVar17 = (int)puVar45[1];
                  *(int *)(puVar45 + 1) = iVar17 + 1;
                  if (*(int *)((longlong)puVar45 + 0xc) == iVar17) {
                    FUN_140bb3f32(puVar45,iVar17);
                  }
                  lVar30 = (longlong)iVar28 * 0x18;
                  memmove((void *)(*puVar45 + lVar30 + 0x18),(void *)(*puVar45 + lVar30),
                          (ulonglong)(uint)(iVar17 + iVar23) * 0x18);
                  puVar45 = local_3f8;
                  FUN_140bb28fa(lVar30 + *local_3f8);
                  iVar28 = iVar28 + 1;
                  iVar23 = iVar23 + -1;
                } while (local_3e0 != iVar28);
              }
              *(longlong *)(*puVar45 + (ulonglong)bVar14 * 0x18) = lVar35;
              uVar44 = (ulonglong)bVar14 * 0x18 + *puVar45;
            }
            lVar30 = local_3c8;
            puVar26 = local_3d0;
            iVar23 = *(int *)(uVar44 + 0x10);
            *(uint *)(uVar44 + 0x10) = iVar23 + 1U;
            iVar28 = (int)local_3f0;
            if (*(uint *)(uVar44 + 0x14) < iVar23 + 1U) {
              FUN_140bb3812((longlong *)(uVar44 + 8),iVar23);
            }
            lVar35 = *(longlong *)(uVar44 + 8);
            FUN_140bb2909(lVar35 + (longlong)iVar23 * 0x60);
            *(longlong *)(lVar35 + (longlong)iVar23 * 0x60) = lVar39;
            uVar16 = *(uint *)(lVar30 + 0x170);
            uVar44 = local_3e8;
            uVar40 = local_3dc;
          }
          uVar40 = uVar40 & ~(uint)uVar48;
          puVar19 = *(uint **)(lVar30 + 0x168);
          if (*(uint **)(lVar30 + 0x168) == (uint *)0x0) {
            puVar19 = puVar26;
          }
          iVar23 = (int)uVar44;
          lVar39 = (longlong)iVar23;
          uVar22 = puVar19[lVar39] & uVar40;
          if (uVar22 == 0) {
            iVar17 = uVar16 + 0x1e;
            if (-1 < (int)(uVar16 - 1)) {
              iVar17 = uVar16 - 1;
            }
            iVar17 = iVar17 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar42 = iVar17;
            if (iVar17 < iVar23) {
              iVar42 = iVar23;
            }
            if (iVar23 < iVar17) {
              lVar35 = 0;
              do {
                uVar22 = puVar19[lVar39 + lVar35 + 1];
                if (uVar22 != 0) {
                  uVar44 = (ulonglong)(iVar23 + (int)lVar35 + 1);
                  uVar40 = 0xffffffff;
                  goto LAB_140bb1ce1;
                }
                iVar28 = iVar28 + 0x20;
                lVar35 = lVar35 + 1;
              } while (iVar42 - lVar39 != lVar35);
              uVar40 = 0xffffffff;
              lVar39 = (longlong)iVar42;
            }
            uVar44 = lVar39 + 1U & 0xffffffff;
            local_3b8 = local_3c8;
            puVar45 = local_3f8;
            puVar26 = local_3d0;
            uVar22 = uVar16;
          }
          else {
LAB_140bb1ce1:
            uVar48 = (ulonglong)(-uVar22 & uVar22);
            uVar46 = uVar48 * 2 + 1;
            lVar39 = 0x3f;
            if (uVar46 != 0) {
              for (; uVar46 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            uVar22 = (iVar28 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
            local_3b8 = lVar30;
            if ((int)uVar16 <= (int)uVar22) {
              uVar22 = uVar16;
            }
          }
        } while (uVar22 != (uint)local_3d8);
      }
    }
LAB_140bb1dfe:
    uVar44 = CONCAT71((int7)((ulonglong)local_3b8 >> 8),local_401);
    if ((longlong)(int)puVar45[1] != 0) {
      uVar46 = *local_3f8;
      uVar48 = uVar46 + (longlong)(int)puVar45[1] * 0x18;
      lVar39 = local_400;
      do {
        puVar18 = &local_3a8;
        iVar28 = *(int *)(uVar46 + 0x10);
        if (1 < (longlong)iVar28) {
          lVar39 = *(longlong *)(uVar46 + 8);
          memset(local_398,0,0x2f0);
          uStack_3a0 = (longlong)iVar28 * 0x60 + lVar39 + -0x60;
          local_3a8 = lVar39;
          fVar51 = logf((float)iVar28);
          local_398[0] = (int)(longlong)(fVar51 + fVar51);
          do {
            plVar49 = (longlong *)*puVar18;
            plVar32 = (longlong *)puVar18[1];
            iVar28 = *(int *)(puVar18 + 2);
            iVar23 = (int)((ulonglong)((longlong)plVar32 - (longlong)plVar49) >> 5) * -0x55555555;
            uVar44 = (ulonglong)(iVar23 + 1);
            plVar31 = plVar32;
            plVar36 = plVar49;
            if (iVar28 != 0) {
LAB_140bb1f04:
              if (8 < (int)(uint)uVar44) {
                plVar33 = plVar49 + (ulonglong)((uint)uVar44 >> 1) * 0xc;
                plVar21 = local_a8;
                for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                  *plVar21 = *plVar33;
                  plVar33 = plVar33 + 1;
                  plVar21 = plVar21 + 1;
                }
                plVar33 = plVar49;
                plVar21 = plVar49 + (ulonglong)((uint)uVar44 >> 1) * 0xc;
                for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                  *plVar21 = *plVar33;
                  plVar33 = plVar33 + 1;
                  plVar21 = plVar21 + 1;
                }
                plVar33 = local_a8;
                plVar21 = plVar49;
                for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                  *plVar21 = *plVar33;
                  plVar33 = plVar33 + 1;
                  plVar21 = plVar21 + 1;
                }
                plVar33 = plVar32 + 0xc;
                plVar21 = plVar49;
                do {
                  plVar34 = plVar21 + 0xc;
                  plVar37 = plVar21 + 0xc;
                  do {
                    plVar43 = plVar37;
                    plVar21 = plVar34;
                    if (((plVar32 < plVar21) || (*plVar49 == 0)) || (*plVar21 == 0)) break;
                    fVar51 = *(float *)(*plVar21 + 0x60);
                    pfVar1 = (float *)(*plVar49 + 0x60);
                    plVar34 = plVar21 + 0xc;
                    plVar37 = plVar43 + 0xc;
                  } while (fVar51 < *pfVar1 || fVar51 == *pfVar1);
                  plVar34 = plVar33 + -0x18;
                  do {
                    plVar37 = plVar33;
                    plVar29 = plVar34;
                    plVar33 = plVar37 + -0xc;
                    if (((plVar33 <= plVar49) || (*plVar33 == 0)) || (*plVar49 == 0)) break;
                    fVar51 = *(float *)(*plVar49 + 0x60);
                    pfVar1 = (float *)(*plVar33 + 0x60);
                    plVar34 = plVar29 + -0xc;
                  } while (fVar51 < *pfVar1 || fVar51 == *pfVar1);
                  if (plVar33 < plVar21) goto LAB_140bb277c;
                  plVar34 = plVar21;
                  plVar37 = local_a8;
                  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                    *plVar37 = *plVar34;
                    plVar34 = plVar34 + 1;
                    plVar37 = plVar37 + 1;
                  }
                  plVar34 = plVar33;
                  plVar37 = plVar21;
                  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                    *plVar37 = *plVar34;
                    plVar34 = plVar34 + 1;
                    plVar37 = plVar37 + 1;
                  }
                  plVar34 = local_a8;
                  plVar37 = plVar33;
                  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                    *plVar37 = *plVar34;
                    plVar34 = plVar34 + 1;
                    plVar37 = plVar37 + 1;
                  }
                } while( true );
              }
              uVar13 = (undefined3)((uint)iVar28 >> 8);
              if (plVar49 < plVar32) {
                uVar44 = (ulonglong)CONCAT31(uVar13,local_401);
                plVar36 = plVar49;
                plVar31 = plVar49;
                do {
                  while (plVar31 = plVar31 + 0xc, plVar31 <= plVar32) {
                    if (((*plVar36 == 0) || (*plVar31 == 0)) ||
                       (fVar51 = *(float *)(*plVar31 + 0x60), pfVar1 = (float *)(*plVar36 + 0x60),
                       *pfVar1 <= fVar51 && fVar51 != *pfVar1)) {
                      plVar36 = plVar31;
                    }
                  }
                  plVar33 = plVar32 + -0xc;
                  plVar31 = plVar36;
                  plVar21 = local_a8;
                  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                    *plVar21 = *plVar31;
                    plVar31 = plVar31 + 1;
                    plVar21 = plVar21 + 1;
                  }
                  plVar31 = plVar32;
                  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                    *plVar36 = *plVar31;
                    plVar31 = plVar31 + 1;
                    plVar36 = plVar36 + 1;
                  }
                  plVar31 = local_a8;
                  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                    *plVar32 = *plVar31;
                    plVar31 = plVar31 + 1;
                    plVar32 = plVar32 + 1;
                  }
                  plVar36 = plVar49;
                  plVar31 = plVar49;
                  plVar32 = plVar33;
                } while (plVar49 < plVar33);
              }
              else {
                uVar44 = (ulonglong)CONCAT31(uVar13,local_401);
              }
              goto LAB_140bb1f98;
            }
LAB_140bb2407:
            uVar27 = 0;
            iVar28 = (int)uVar44;
            if (iVar28 != 0) {
              iVar17 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
              iVar23 = iVar17;
joined_r0x000140bb2433:
              do {
                iVar42 = iVar23 * 2 + 1;
                if (iVar42 < iVar28) {
                  iVar47 = iVar23 * 2 + 2;
                  if (((iVar28 <= iVar47) || (plVar49[(longlong)iVar47 * 0xc] == 0)) ||
                     ((plVar49[(longlong)iVar42 * 0xc] == 0 ||
                      (fVar51 = *(float *)(plVar49[(longlong)iVar42 * 0xc] + 0x60),
                      pfVar1 = (float *)(plVar49[(longlong)iVar47 * 0xc] + 0x60),
                      *pfVar1 <= fVar51 && fVar51 != *pfVar1)))) {
                    iVar47 = iVar42;
                  }
                  plVar32 = plVar49 + (longlong)iVar47 * 0xc;
                  if (((plVar49[(longlong)iVar23 * 0xc] == 0) || (*plVar32 == 0)) ||
                     (fVar51 = *(float *)(*plVar32 + 0x60),
                     pfVar1 = (float *)(plVar49[(longlong)iVar23 * 0xc] + 0x60),
                     *pfVar1 <= fVar51 && fVar51 != *pfVar1)) {
                    plVar31 = plVar49 + (longlong)iVar23 * 0xc;
                    plVar36 = local_a8;
                    for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                      *plVar36 = *plVar31;
                      plVar31 = plVar31 + 1;
                      plVar36 = plVar36 + 1;
                    }
                    plVar31 = plVar32;
                    plVar36 = plVar49 + (longlong)iVar23 * 0xc;
                    for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                      *plVar36 = *plVar31;
                      plVar31 = plVar31 + 1;
                      plVar36 = plVar36 + 1;
                    }
                    plVar31 = local_a8;
                    for (lVar39 = 0xc; iVar23 = iVar47, lVar39 != 0; lVar39 = lVar39 + -1) {
                      *plVar32 = *plVar31;
                      plVar31 = plVar31 + 1;
                      plVar32 = plVar32 + 1;
                    }
                    goto joined_r0x000140bb2433;
                  }
                }
                bVar50 = iVar17 != 0;
                iVar17 = iVar17 + -1;
                iVar23 = iVar17;
              } while (bVar50);
              uVar27 = 0xffffffff;
              if (1 < iVar28) {
                uVar27 = uVar44 - 1;
                plVar32 = plVar49;
                plVar31 = local_a8;
                for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                  *plVar31 = *plVar32;
                  plVar32 = plVar32 + 1;
                  plVar31 = plVar31 + 1;
                }
                plVar32 = plVar49 + uVar27 * 0xc;
                plVar31 = plVar49;
                for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                  *plVar31 = *plVar32;
                  plVar32 = plVar32 + 1;
                  plVar31 = plVar31 + 1;
                }
                plVar32 = local_a8;
                plVar31 = plVar49 + uVar27 * 0xc;
                for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                  *plVar31 = *plVar32;
                  plVar32 = plVar32 + 1;
                  plVar31 = plVar31 + 1;
                }
                uVar44 = uVar27;
                if (iVar28 != 2) {
                  do {
                    iVar28 = 0;
                    iVar17 = 1;
                    iVar23 = 0;
                    do {
                      iVar42 = iVar28 + 2;
                      if ((((longlong)uVar44 <= (longlong)iVar42) ||
                          (plVar49[(longlong)iVar42 * 0xc] == 0)) ||
                         ((plVar49[(longlong)iVar17 * 0xc] == 0 ||
                          (fVar51 = *(float *)(plVar49[(longlong)iVar17 * 0xc] + 0x60),
                          pfVar1 = (float *)(plVar49[(longlong)iVar42 * 0xc] + 0x60),
                          *pfVar1 <= fVar51 && fVar51 != *pfVar1)))) {
                        iVar42 = iVar17;
                      }
                      plVar32 = plVar49 + (longlong)iVar42 * 0xc;
                      if (((plVar49[(longlong)iVar23 * 0xc] != 0) && (*plVar32 != 0)) &&
                         (fVar51 = *(float *)(*plVar32 + 0x60),
                         pfVar1 = (float *)(plVar49[(longlong)iVar23 * 0xc] + 0x60),
                         fVar51 < *pfVar1 || fVar51 == *pfVar1)) break;
                      plVar31 = plVar49 + (longlong)iVar23 * 0xc;
                      plVar36 = local_a8;
                      for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                        *plVar36 = *plVar31;
                        plVar31 = plVar31 + 1;
                        plVar36 = plVar36 + 1;
                      }
                      plVar31 = plVar32;
                      plVar36 = plVar49 + (longlong)iVar23 * 0xc;
                      for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                        *plVar36 = *plVar31;
                        plVar31 = plVar31 + 1;
                        plVar36 = plVar36 + 1;
                      }
                      plVar31 = local_a8;
                      for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                        *plVar32 = *plVar31;
                        plVar31 = plVar31 + 1;
                        plVar32 = plVar32 + 1;
                      }
                      iVar28 = iVar42 * 2;
                      iVar17 = iVar42 * 2 + 1;
                      iVar23 = iVar42;
                    } while ((longlong)iVar17 < (longlong)uVar44);
                    uVar27 = uVar44 - 1;
                    plVar32 = plVar49;
                    plVar31 = local_a8;
                    for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                      *plVar31 = *plVar32;
                      plVar32 = plVar32 + 1;
                      plVar31 = plVar31 + 1;
                    }
                    plVar32 = plVar49 + uVar27 * 0xc;
                    plVar31 = plVar49;
                    for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                      *plVar31 = *plVar32;
                      plVar32 = plVar32 + 1;
                      plVar31 = plVar31 + 1;
                    }
                    plVar32 = local_a8;
                    plVar31 = plVar49 + uVar27 * 0xc;
                    for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
                      *plVar31 = *plVar32;
                      plVar32 = plVar32 + 1;
                      plVar31 = plVar31 + 1;
                    }
                    bVar50 = 2 < uVar44;
                    uVar44 = uVar27;
                  } while (bVar50);
                }
              }
            }
            uVar44 = CONCAT71((int7)(uVar27 >> 8),local_401);
LAB_140bb1f98:
            puVar18 = puVar18 + -3;
          } while (&local_3a8 <= puVar18);
          iVar28 = *(int *)(uVar46 + 0x10);
          lVar39 = local_400;
        }
        if (iVar28 != 0) {
          lVar30 = *(longlong *)(uVar46 + 8);
          lVar35 = (longlong)iVar28 * 0x60;
          do {
            FUN_140bb2c4c(lVar30,*(undefined8 *)(lVar39 + 0x90),uVar44 & 0xffffffff);
            lVar30 = lVar30 + 0x60;
            lVar35 = lVar35 + -0x60;
          } while (lVar35 != 0);
        }
        uVar46 = uVar46 + 0x18;
      } while (uVar46 != uVar48);
    }
    FUN_140bb2942(local_3c0,local_3f8);
    if (local_3b0 != (longlong *)0x0) {
      LOCK();
      plVar49 = local_3b0 + 1;
      *(int *)plVar49 = (int)*plVar49 + -1;
      UNLOCK();
      if ((int)*plVar49 == 0) {
        (**(code **)*local_3b0)(local_3b0);
        LOCK();
        piVar25 = (int *)((longlong)local_3b0 + 0xc);
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (*piVar25 == 0) {
          (**(code **)(*local_3b0 + 0x10))(local_3b0);
        }
      }
    }
  }
  else {
    FUN_140bb2942(puVar45);
  }
  if ((local_48 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140bb208d:
  iVar28 = *(int *)(lVar39 + 0x28);
  if (iVar28 == -1) goto LAB_140bb1914;
  goto LAB_140bb205f;
LAB_140bb277c:
  plVar34 = plVar49;
  plVar38 = local_a8;
  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
    *plVar38 = *plVar34;
    plVar34 = plVar34 + 1;
    plVar38 = plVar38 + 1;
  }
  plVar34 = plVar33;
  plVar38 = plVar49;
  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
    *plVar38 = *plVar34;
    plVar34 = plVar34 + 1;
    plVar38 = plVar38 + 1;
  }
  plVar34 = local_a8;
  plVar38 = plVar33;
  for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
    *plVar38 = *plVar34;
    plVar34 = plVar34 + 1;
    plVar38 = plVar38 + 1;
  }
  iVar28 = iVar28 + -1;
  plVar37 = plVar37 + -0x18;
  local_3e8 = uVar48;
  if ((longlong)plVar29 - (longlong)plVar36 < (longlong)plVar31 - (longlong)plVar43) {
    if (plVar21 < plVar32) {
      *puVar18 = plVar21;
      puVar18[1] = plVar32;
      *(int *)(puVar18 + 2) = iVar28;
      puVar18 = puVar18 + 3;
    }
    local_3f0 = plVar49;
    if (plVar33 <= plVar49 + 0xc) {
LAB_140bb283f:
      uVar44 = (ulonglong)CONCAT31((int3)((uint)iVar28 >> 8),local_401);
      local_3f0 = plVar43;
      goto LAB_140bb1f98;
    }
  }
  else {
    if (plVar49 + 0xc < plVar33) {
      *puVar18 = plVar49;
      puVar18[1] = plVar37;
      *(int *)(puVar18 + 2) = iVar28;
      puVar18 = puVar18 + 3;
    }
    plVar49 = plVar21;
    plVar29 = plVar32;
    plVar37 = plVar32;
    local_3f0 = plVar43;
    if (plVar32 <= plVar21) goto LAB_140bb283f;
  }
  iVar23 = (int)((ulonglong)((longlong)plVar29 - (longlong)local_3f0) >> 5) * -0x55555555;
  uVar44 = (ulonglong)(iVar23 + 1);
  plVar32 = plVar37;
  plVar31 = plVar29;
  plVar36 = local_3f0;
  if (iVar28 == 0) goto LAB_140bb2407;
  goto LAB_140bb1f04;
}



// FUNCTION 140bb28fa FUN_140bb28fa body=15 status=ok
// SIG undefined FUN_140bb28fa(void)

void FUN_140bb28fa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 140bb2909 FUN_140bb2909 body=57 status=ok
// SIG undefined FUN_140bb2909(void)

void FUN_140bb2909(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5e) = 0;
  return;
}



// FUNCTION 140bb2942 FUN_140bb2942 body=93 status=ok
// SIG undefined FUN_140bb2942(void)

undefined8 * FUN_140bb2942(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140bb299f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140bb3404(param_1,iVar1);
      FUN_140bb2cf7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140bb299f FUN_140bb299f body=58 status=ok
// SIG undefined FUN_140bb299f(void)

void FUN_140bb299f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140bb29d9(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bb29d9 FUN_140bb29d9 body=65 status=ok
// SIG undefined FUN_140bb29d9(void)

void FUN_140bb29d9(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(puVar1 + -0x12);
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bb2a1a FUN_140bb2a1a body=55 status=ok
// SIG undefined FUN_140bb2a1a(void)

void FUN_140bb2a1a(longlong *param_1)

{
  FUN_140bb2a52(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bb2a52 FUN_140bb2a52 body=506 status=ok
// SIG undefined FUN_140bb2a52(void)

void FUN_140bb2a52(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140bb2b37;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140bb2b37;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140bb2b37:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140bb2c4c FUN_140bb2c4c body=170 status=ok
// SIG undefined FUN_140bb2c4c(void)

void FUN_140bb2c4c(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 **local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  if ((param_2 != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    local_38 = &local_28;
    local_40 = &local_38;
    local_48 = FUN_143da233e;
    local_30 = param_1;
    (**(code **)(*(longlong *)*param_1 + 0x18))();
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_28,param_3);
    *(undefined4 *)(param_1 + 0xb) = uVar2;
    uVar1 = FUN_140bb31e6(*param_1 + 0x30,local_28);
    *(undefined1 *)((longlong)param_1 + 0x5c) = uVar1;
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,param_3);
    *(undefined1 *)((longlong)param_1 + 0x5d) = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb2cf7 FUN_140bb2cf7 body=137 status=ok
// SIG undefined FUN_140bb2cf7(void)

void FUN_140bb2cf7(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      *(undefined8 *)(param_1 + 8 + lVar3) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar3);
      uVar2 = *(undefined8 *)(param_2 + 8 + lVar3);
      *(int *)(param_1 + 0x10 + lVar3) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar3) = 0;
      }
      else {
        FUN_140bb3078(param_1 + 8 + lVar3,iVar1,0);
        FUN_140bb2d80(*(undefined8 *)(param_1 + 8 + lVar3),uVar2);
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140bb2d80 FUN_140bb2d80 body=159 status=ok
// SIG undefined FUN_140bb2d80(void)

void FUN_140bb2d80(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar4);
      puVar2 = (undefined8 *)(param_1 + 8 + lVar4);
      puVar2[-1] = *puVar1;
      puVar2[4] = 0;
      *(undefined4 *)(puVar2 + 5) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
      puVar2[8] = 0;
      *(undefined4 *)(puVar2 + 9) = 0;
      FUN_140bb2e20(puVar2,puVar1 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x5b);
      *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(puVar1 + 0xb);
      *(undefined4 *)((longlong)puVar2 + 0x53) = uVar3;
      lVar4 = lVar4 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140bb2e20 FUN_140bb2e20 body=154 status=ok
// SIG undefined FUN_140bb2e20(void)

longlong FUN_140bb2e20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140bb2e8a;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140bb2e8a:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140bb2eba(param_1,param_2);
  return param_1;
}



// FUNCTION 140bb2eba FUN_140bb2eba body=332 status=ok
// SIG undefined FUN_140bb2eba(void)

undefined8 * FUN_140bb2eba(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *_Dst;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140bb2a52(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_140bb3006(puVar7,puVar8);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 8;
        puVar7 = puVar7 + 8;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 140bb3006 FUN_140bb3006 body=113 status=ok
// SIG undefined FUN_140bb3006(void)

undefined8 * FUN_140bb3006(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 140bb3078 FUN_140bb3078 body=233 status=ok
// SIG undefined FUN_140bb3078(void)

void FUN_140bb3078(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140bb3162 FUN_140bb3162 body=131 status=ok
// SIG undefined FUN_140bb3162(void)

int FUN_140bb3162(uint param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14cb83058 != DAT_14cb83084) {
    puVar2 = &DAT_14cb83088;
    if (DAT_14cb83090 != (undefined *)0x0) {
      puVar2 = DAT_14cb83090;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14cb83098 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(DAT_14cb83050 + lVar3) == *param_2) &&
             (*(int *)(DAT_14cb83050 + 4 + lVar3) == param_2[1])) &&
            (*(int *)(DAT_14cb83050 + 8 + lVar3) == param_2[2])) &&
           (*(int *)(DAT_14cb83050 + 0xc + lVar3) == param_2[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + DAT_14cb83050 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140bb31e6 FUN_140bb31e6 body=448 status=ok
// SIG undefined FUN_140bb31e6(void)

ulonglong FUN_140bb31e6(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 ****ppppuVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 ***local_90 [3];
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  undefined6 uStack_4e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    local_90[0] = *(undefined8 ****)(param_1 + 8);
    FUN_1446dcdd4(&local_68);
    lVar3 = FUN_1448fdc6e(&local_68);
    if (CONCAT62(uStack_4e,local_50) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = lVar3;
  }
  local_98 = uVar7;
  (**(code **)(*param_2 + 0x20))(param_2,local_90,lVar3,0);
  if (local_70 == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1 + 0x2c));
    goto LAB_140bb3246;
  }
  if (local_70 == 3) {
    uVar7 = local_90[0]._0_4_;
LAB_140bb32b0:
    uVar2 = FUN_140bb33a8(param_1,uVar7);
  }
  else {
    if (local_70 != 1) {
      puVar5 = &local_68;
      FUN_1400b56fe(puVar5,local_90,3);
      uVar7 = 0;
      if (local_48 != 0) {
        uVar7 = local_68;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_50) {
          puVar5 = (undefined4 *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar1)(puVar5);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
      goto LAB_140bb32b0;
    }
    uVar2 = FUN_144a7fca4(local_90);
  }
  uVar4 = (ulonglong)uVar2;
LAB_140bb3246:
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar6 = local_90;
    if (0x18 < local_78) {
      ppppuVar6 = (undefined8 ****)local_90[0];
    }
    (*pcVar1)(ppppuVar6);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(local_90[0]);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb33a8 FUN_140bb33a8 body=91 status=ok
// SIG undefined FUN_140bb33a8(void)

ulonglong FUN_140bb33a8(longlong param_1,float param_2)

{
  float fVar1;
  undefined7 uVar2;
  bool bVar3;
  
  uVar2 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_140bb33c0::switchdataD_14b41153c +
           (longlong)(int)(&switchD_140bb33c0::switchdataD_14b41153c)[*(byte *)(param_1 + 0x24)]) >>
          8);
  switch(*(byte *)(param_1 + 0x24)) {
  case 0:
    bVar3 = param_2 == *(float *)(param_1 + 0x28);
    break;
  case 1:
    bVar3 = param_2 != *(float *)(param_1 + 0x28);
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x28);
    bVar3 = param_2 < *(float *)(param_1 + 0x28);
    goto LAB_140bb33c6;
  case 3:
    bVar3 = param_2 < *(float *)(param_1 + 0x28);
    goto LAB_140bb33d2;
  case 4:
    fVar1 = *(float *)(param_1 + 0x28);
    bVar3 = fVar1 < param_2;
LAB_140bb33c6:
    return CONCAT71(uVar2,!bVar3 && fVar1 != param_2);
  case 5:
    bVar3 = *(float *)(param_1 + 0x28) < param_2;
LAB_140bb33d2:
    return CONCAT71(uVar2,!bVar3);
  default:
    return (ulonglong)*(byte *)(param_1 + 0x2c);
  }
  return (ulonglong)(-(uint)bVar3 & 1);
}



// FUNCTION 140bb3404 FUN_140bb3404 body=334 status=ok
// SIG undefined FUN_140bb3404(void)

void FUN_140bb3404(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bb3476;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140bb3476:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140bb3552 FUN_140bb3552 body=703 status=ok
// SIG undefined FUN_140bb3552(void)

void FUN_140bb3552(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0xc0);
    if (plVar4 == (longlong *)0x0) {
      FUN_1446ddc76(&local_40,"label",1);
      (*(code *)*param_2)(param_2[1],&local_40,lVar3);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      local_38 = "label";
      local_30 = 5;
      local_2c = 0;
      uVar5 = FUN_14001a6c0(&local_38,1);
      local_40 = (ulonglong)uVar5;
      (*(code *)*param_2)(param_2[1],&local_40,lVar3);
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
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0xd8);
    if (plVar4 == (longlong *)0x0) {
      FUN_1446ddc76(&local_40,"value",1);
      (*(code *)*param_2)(param_2[1],&local_40,lVar3);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      local_38 = "value";
      local_30 = 5;
      local_2c = 0;
      uVar5 = FUN_14001a6c0(&local_38,1);
      local_40 = (ulonglong)uVar5;
      (*(code *)*param_2)(param_2[1],&local_40,lVar3);
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
  lVar3 = *(longlong *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0xf0);
    if (plVar4 == (longlong *)0x0) {
      FUN_1446ddc76(&local_38,"description",1);
      (*(code *)*param_2)(param_2[1],&local_38,lVar3);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      FUN_1446ddc76(&local_38,"description",1);
      (*(code *)*param_2)(param_2[1],&local_38,lVar3);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb3812 FUN_140bb3812 body=275 status=ok
// SIG undefined FUN_140bb3812(void)

void FUN_140bb3812(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140bb3926 FUN_140bb3926 body=719 status=ok
// SIG undefined FUN_140bb3926(void)

ulonglong FUN_140bb3926(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 ***local_90 [3];
  ushort local_78;
  byte local_70;
  uint local_68;
  undefined4 uStack_64;
  ushort local_50;
  undefined6 uStack_4e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(param_1 + 0x78);
  if (lVar8 == 0) {
    local_90[0] = *(undefined8 ****)(param_1 + 0x68);
    FUN_1446dcdd4(&local_68);
    lVar8 = FUN_1448fdc6e(&local_68);
    if (CONCAT62(uStack_4e,local_50) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x78) = lVar8;
    uVar12 = 0;
    if (lVar8 == 0) goto LAB_140bb39bb;
  }
  local_98 = 0;
  (**(code **)(*param_2 + 0x20))(param_2,local_90,lVar8,0);
  if (local_70 == 3) {
    uVar6 = 3;
    uVar12 = (uint)local_90[0];
  }
  else {
    puVar9 = &local_68;
    FUN_1400b56fe(puVar9,local_90,3);
    uVar12 = 0;
    if (local_48 != 0) {
      uVar12 = local_68;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar9 = (uint *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar3)(puVar9);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar6 = (uint)local_70;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar10 = local_90;
    if (0x18 < local_78) {
      ppppuVar10 = (undefined8 ****)local_90[0];
    }
    (*pcVar3)(ppppuVar10);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(local_90[0]);
  }
LAB_140bb39bb:
  lVar8 = *(longlong *)(param_1 + 0xd0);
  uVar11 = (ulonglong)uVar12;
  if (lVar8 != 0) {
    plVar4 = *(longlong **)(param_1 + 0xd8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    uVar7 = FUN_140bb3bf6();
    cVar5 = FUN_1448093f4(lVar8,uVar7);
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
    uVar11 = (ulonglong)uVar12;
    if (cVar5 != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0xd0);
      plVar4 = *(longlong **)(param_1 + 0xd8);
      if (plVar4 == (longlong *)0x0) {
        uVar11 = FUN_140b41f32(uVar7,uVar12);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
        uVar11 = FUN_140b41f32(uVar7,uVar12);
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
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 140bb3bf6 FUN_140bb3bf6 body=57 status=ok
// SIG undefined FUN_140bb3bf6(void)

void FUN_140bb3bf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6db18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6db18 = FUN_140002ddd(FUN_146537bfd,uVar1,L"NumericDisplayValue");
  }
  return;
}



// FUNCTION 140bb3c30 FUN_140bb3c30 body=622 status=ok
// SIG undefined FUN_140bb3c30(void)

undefined8 * FUN_140bb3c30(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_108 [48];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((((int)param_1[0x19] == 0 && *(int *)((longlong)param_1 + 0xc4) == 0) &&
       *(int *)((longlong)param_1 + 0xcc) == 0) && (int)param_1[0x1a] == 0) && (*param_1 != 0)) {
    if ((longlong)(int)param_1[3] != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar8) == 0) goto LAB_140bb3c76;
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar8);
    }
    *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    lVar8 = FUN_140b47a16(param_1,&DAT_14cb843e8);
    uVar6 = 0;
    if ((lVar8 != 0) && (uVar6 = 0, *(char *)(lVar8 + 8) == '\0')) {
      uVar6 = *(undefined4 *)(lVar8 + 0x28);
    }
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar6;
    uVar1 = param_1[1];
    uVar7 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    *(uint *)(param_1 + 0x19) = uVar7 >> 0x10 ^ uVar7;
    if (uVar1 != 0) {
      uVar7 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      *(uint *)((longlong)param_1 + 0xcc) = uVar7 >> 0x10 ^ uVar7;
    }
    uVar1 = param_1[3];
    if (0 < (longlong)(int)uVar1) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0x2000000000;
      uVar2 = param_1[2];
      lVar8 = 0;
      do {
        uVar4 = local_50;
        uVar3 = *(ulonglong *)(uVar2 + lVar8);
        if (uVar3 != 0) {
          lVar9 = (longlong)(int)local_50;
          uVar7 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar7);
          if (local_50._4_4_ < uVar7) {
            FUN_140724a48(local_d8,uVar4 & 0xffffffff);
          }
          uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_d8;
          }
          *(uint *)(puVar5 + lVar9 * 4) = uVar7 >> 0x10 ^ uVar7;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)uVar1 * 8 != lVar8);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_d8;
      }
      FUN_1449e0cb6(puVar5,local_50 & 0xffffffff);
      puVar5 = local_d8;
      if (local_58 != (undefined1 *)0x0) {
        puVar5 = local_58;
      }
      if ((longlong)(int)local_50 != 0) {
        uVar7 = (uint)param_1[0x1a];
        lVar8 = 0;
        do {
          uVar7 = uVar7 ^ *(int *)(puVar5 + lVar8) + (uVar7 >> 2) + uVar7 * 0x40 + 0x9e3779b9;
          *(uint *)(param_1 + 0x1a) = uVar7;
          lVar8 = lVar8 + 4;
        } while ((longlong)(int)local_50 * 4 != lVar8);
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140bb3c76:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return (undefined8 *)((longlong)param_1 + 0xc4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb3ea0 FUN_140bb3ea0 body=145 status=ok
// SIG undefined FUN_140bb3ea0(void)

void FUN_140bb3ea0(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lVar2 = DAT_14cb83050;
  if (DAT_14cb83084 != 0) {
    *(int *)(DAT_14cb83050 + (longlong)DAT_14cb83080 * 0x30) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x30) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb83084) {
    iVar3 = DAT_14cb83080;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x30 + 4) = iVar3;
  DAT_14cb83084 = DAT_14cb83084 + 1;
  puVar4 = &DAT_14cb83060;
  if (DAT_14cb83070 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb83070;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb83080 = param_1;
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 140bb3f32 FUN_140bb3f32 body=363 status=ok
// SIG undefined FUN_140bb3f32(void)

void FUN_140bb3f32(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bb3fc8;
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
LAB_140bb3fc8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140bb409e FUN_140bb409e body=419 status=ok
// SIG undefined FUN_140bb409e(void)

void FUN_140bb409e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0x28);
        *(uint *)(lVar2 + 0x24 + lVar5 * 0x28) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 140bb4242 FUN_140bb4242 body=495 status=ok
// SIG undefined FUN_140bb4242(void)

void FUN_140bb4242(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb83090 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb83090,0,0,4);
  }
  uVar2 = DAT_14cb83098;
  uVar3 = local_60;
  if (DAT_14cb83098 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14cb83088,0,DAT_14cb83098,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14cb83090;
        if (DAT_14cb83090 == (undefined *)0x0) {
          puVar7 = &DAT_14cb83088;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb83098 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cb83060;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cb83078 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14cb83050;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < (int)local_48[6]) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x30;
        iVar5 = FUN_1447addd0(lVar1 + lVar9,0x10);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14cb83098 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x2c + lVar9) = iVar5;
        puVar7 = DAT_14cb83090;
        if (DAT_14cb83090 == (undefined *)0x0) {
          puVar7 = &DAT_14cb83088;
        }
        *(undefined4 *)(lVar1 + 0x28 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cb83098 - 1U & uVar6) * 4);
        puVar7 = DAT_14cb83090;
        if (DAT_14cb83090 == (undefined *)0x0) {
          puVar7 = &DAT_14cb83088;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14cb83098 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < (int)local_68[6]);
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bb4432 FUN_140bb4432 body=161 status=ok
// SIG undefined FUN_140bb4432(void)

undefined8 FUN_140bb4432(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_140775538(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb44d4 FUN_140bb44d4 body=467 status=ok
// SIG undefined FUN_140bb44d4(void)

void FUN_140bb44d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140bb46a8(param_1,&local_40);
  pcVar3 = local_40;
  SRWLock = (PSRWLOCK)(local_40 + 0x638);
  AcquireSRWLockExclusive(SRWLock);
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
  if (pcVar3[0x430] == (code)0x0) {
    if (*(int *)(pcVar3 + 0x434) != 0) goto LAB_140bb4548;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x434) + 1;
  }
  pcVar3[0x430] = (code)0x0;
  *(int *)(pcVar3 + 0x434) = iVar4;
LAB_140bb4548:
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_140c125e6(lVar5 + 0xd98,&DAT_14cbd9600);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140bb45c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb46a8 FUN_140bb46a8 body=143 status=ok
// SIG undefined FUN_140bb46a8(void)

undefined8 * FUN_140bb46a8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
  *param_2 = *(undefined8 *)(local_28 + 0xf0);
  lVar3 = *(longlong *)(local_28 + 0xf8);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb4750 FUN_140bb4750 body=38 status=ok
// SIG undefined FUN_140bb4750(void)

undefined8 FUN_140bb4750(undefined8 param_1,int param_2)

{
  FUN_140bb4776();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bb4776 FUN_140bb4776 body=72 status=ok
// SIG undefined FUN_140bb4776(void)

void FUN_140bb4776(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149e17400;
  if (DAT_14c8443b8 != 0) {
    FUN_140316a74(DAT_14c8443b8,param_1 + 1);
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bb47ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140bb47be FUN_140bb47be body=335 status=ok
// SIG undefined FUN_140bb47be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bb47be(longlong param_1,longlong *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_2 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) goto LAB_140bb48ac;
  *(undefined1 *)((longlong)param_3 + 0x69) = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x8a);
  local_40 = 0;
  uVar7 = *(undefined8 *)(*param_2 + 0x508);
  uVar4 = FUN_1409a8112(*param_2,0);
  local_68 = &local_40;
  FUN_140bb490e(param_1 + -0x620,&local_58,uVar4,uVar7);
  *param_3 = 15.0;
  *(undefined1 *)((longlong)param_3 + 0xb) = 0;
  *(undefined1 *)((longlong)param_3 + 9) = 0;
  if (*(char *)(param_1 + 99) == '\x01') {
    pcVar5 = (char *)(param_1 + 0x62);
LAB_140bb4869:
    if (*pcVar5 != '\0') {
      *param_3 = (float)SQRT((double)CONCAT44(uStack_54,local_58) *
                             (double)CONCAT44(uStack_54,local_58) +
                             (double)CONCAT44(uStack_4c,uStack_50) *
                             (double)CONCAT44(uStack_4c,uStack_50)) + 15.0;
      goto LAB_140bb48ac;
    }
    lVar6 = *(longlong *)(param_1 + 0x18);
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      pcVar5 = (char *)(*(longlong *)(param_1 + 0x18) + 0x88);
      goto LAB_140bb4869;
    }
    lVar6 = 0;
  }
  uVar1 = DAT_149931e80._4_4_;
  uVar2 = DAT_149931e80._8_4_;
  uVar3 = DAT_149931e80._12_4_;
  if (*(char *)(lVar6 + 0x89) == '\0') {
    uVar7 = CONCAT44((uint)((ulonglong)local_48 >> 0x20) ^ uVar1,
                     (uint)local_48 ^ (uint)DAT_149931e80);
  }
  else {
    uVar7 = 0x8000000000000000;
  }
  param_3[4] = (float)(local_58 ^ (uint)DAT_149931e80);
  param_3[5] = (float)(uStack_54 ^ uVar1);
  param_3[6] = (float)(uStack_50 ^ uVar2);
  param_3[7] = (float)(uStack_4c ^ uVar3);
  *(undefined8 *)(param_3 + 8) = uVar7;
  *(undefined2 *)(param_3 + 10) = 0x100;
LAB_140bb48ac:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb490e FUN_140bb490e body=185 status=ok
// SIG undefined FUN_140bb490e(void)

undefined8 *
FUN_140bb490e(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    lVar2 = (**(code **)(*param_3 + 0x288))(param_3,uVar1);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      uVar1 = FUN_1407ca880();
      lVar3 = FUN_144718840(lVar2,uVar1);
      lVar4 = 0;
      if (lVar2 != lVar3) {
        lVar4 = lVar3;
      }
    }
    lVar2 = FUN_140bb4cf4(param_1,param_3);
    if ((lVar4 != 0) && (lVar2 != 0)) {
      FUN_140bb49c8(lVar2,param_2,lVar4,param_4,param_5);
      return param_2;
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 140bb49c8 FUN_140bb49c8 body=489 status=ok
// SIG undefined FUN_140bb49c8(void)

undefined1 (*) [16]
FUN_140bb49c8(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  float local_148;
  float local_138;
  float local_134;
  double local_118;
  double dStack_110;
  double local_108;
  undefined1 local_d0 [8];
  longlong local_c8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140bb5078(param_1 + 0xd8,local_d0,param_3,&DAT_14cb8d438);
  if ((local_c8 != 0) && (lVar7 = FUN_1402576f0(), local_c8 != 0)) {
    lVar9 = 0;
    if ((lVar7 == 0) || (lVar1 = *(longlong *)(local_c8 + 0x10), lVar1 == 0)) goto LAB_140bb4a78;
    if (*(int *)(lVar7 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        lVar9 = local_c8;
      }
      goto LAB_140bb4a78;
    }
  }
  lVar9 = 0;
LAB_140bb4a78:
  if (param_5 != (longlong *)0x0) {
    *param_5 = lVar9;
  }
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x179) != '\0')) {
    fVar12 = (float)param_4;
    fVar6 = (float)((ulonglong)param_4 >> 0x20);
    plVar8 = (longlong *)FUN_140bb4bb2(param_3);
    if ((plVar8 != (longlong *)0x0) && ((fVar12 <= 0.0 || (fVar6 <= 0.0)))) {
      (**(code **)(*plVar8 + 0xd28))(plVar8,&local_138);
      fVar6 = local_134;
      fVar12 = local_138;
    }
    if (lVar9 == 0) {
      puVar10 = &DAT_14c846480;
      pfVar11 = &local_138;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined8 *)pfVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        pfVar11 = pfVar11 + 2;
      }
    }
    else {
      local_148 = fVar6;
      FUN_1449432a4(lVar9,&local_138,0,0x7f7fffff);
      dVar13 = (double)fVar12;
      local_118 = dVar13 * local_118;
      dStack_110 = dVar13 * dStack_110;
      local_108 = dVar13 * local_108;
    }
    auVar2._8_4_ = SUB84(dStack_110,0);
    auVar2._0_8_ = local_118;
    auVar2._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
    *param_2 = auVar2;
    *(double *)param_2[1] = local_108;
  }
  else {
    *(undefined8 *)param_2[1] = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)*param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(*param_2 + 4) = uVar3;
    *(undefined4 *)(*param_2 + 8) = uVar4;
    *(undefined4 *)(*param_2 + 0xc) = uVar5;
  }
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140bb4bb2 FUN_140bb4bb2 body=304 status=ok
// SIG undefined FUN_140bb4bb2(void)

undefined8 FUN_140bb4bb2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
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
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x50))();
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_14cacf818 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463b216c;
      local_38 = &LAB_1479977e3;
      local_40 = &LAB_1463b2171;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) != DAT_14cacf818 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x428);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb4cf4 FUN_140bb4cf4 body=899 status=ok
// SIG undefined FUN_140bb4cf4(void)

longlong FUN_140bb4cf4(longlong param_1,longlong param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x6a8);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x690) == param_2)) goto LAB_140bb4d29;
  if (*(longlong *)(param_1 + 0x638) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(longlong *)(*(longlong *)(param_1 + 0x638) + 0x30);
  }
  lVar2 = FUN_1409639d4(param_2);
  if (lVar2 == 0) {
LAB_140bb4dc0:
    lVar3 = FUN_14090a81a(param_2);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x20) != *(int *)(lVar3 + 0x4c)) {
        uVar1 = (uint)((ulonglong)local_38 >> 0x10);
        uVar5 = (uint)local_38 & 0xffff;
        lVar2 = lVar3 + 0x50;
        if (*(longlong *)(lVar3 + 0x58) != 0) {
          lVar2 = *(longlong *)(lVar3 + 0x58);
        }
        iVar4 = *(int *)(lVar2 + (ulonglong)
                                 (*(int *)(lVar3 + 0x60) - 1U &
                                 (int)((ulonglong)local_38 >> 0x20) +
                                 ((uint)local_38 << 0x10 | uVar5) + (uVar1 << 0x13 | uVar1 & 0xffff)
                                 + (uVar5 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            lVar2 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar4 * 0x38;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar4 * 0x38) == local_38) {
              if (((lVar2 != 0) && (lVar2 != -8)) && (lVar2 = FUN_140963a30(), lVar2 != 0))
              goto LAB_140bb4e7d;
              break;
            }
            iVar4 = *(int *)(lVar2 + 0x30);
          } while (iVar4 != -1);
        }
      }
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      lVar2 = FUN_14892b25c(lVar2,lVar3,&local_38);
      if (lVar2 != 0) goto LAB_140bb4e7d;
    }
  }
  else {
    if (*(int *)(lVar2 + 0x78) != *(int *)(lVar2 + 0xa4)) {
      uVar1 = (uint)((ulonglong)local_38 >> 0x10);
      uVar5 = (uint)local_38 & 0xffff;
      lVar3 = lVar2 + 0xa8;
      if (*(longlong *)(lVar2 + 0xb0) != 0) {
        lVar3 = *(longlong *)(lVar2 + 0xb0);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(lVar2 + 0xb8) - 1U &
                               (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar5)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar3 = *(longlong *)(lVar2 + 0x70) + (longlong)iVar4 * 0x38;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar4 * 0x38) == local_38) {
            if (lVar3 != 0) {
              local_68 = *(undefined8 *)(lVar3 + 8);
              uStack_60 = *(undefined8 *)(lVar3 + 0x10);
              local_58 = *(undefined8 *)(lVar3 + 0x18);
              pvStack_50 = (void *)0x0;
              uVar1 = *(uint *)(lVar3 + 0x28);
              _Src = *(void **)(lVar3 + 0x20);
              local_48 = CONCAT44(local_48._4_4_,uVar1);
              if ((longlong)(int)uVar1 == 0) {
                local_48 = (ulonglong)uVar1;
              }
              else {
                FUN_1446dd670(&pvStack_50,uVar1,0);
                memcpy(pvStack_50,_Src,(longlong)(int)uVar1 * 2);
              }
              goto LAB_140bb4d9a;
            }
            break;
          }
          iVar4 = *(int *)(lVar3 + 0x30);
        } while (iVar4 != -1);
      }
    }
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0;
LAB_140bb4d9a:
    lVar2 = FUN_140963a30(&local_68);
    if (pvStack_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (lVar2 == 0) goto LAB_140bb4dc0;
LAB_140bb4e7d:
    lVar3 = FUN_140bb554a();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_140bb4d29;
    lVar3 = FUN_140bb5692();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
      }
      lVar2 = FUN_140bb5630(lVar2,lVar3);
      if (lVar2 != 0) {
        lVar3 = FUN_140bb554a();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_140bb4d29;
      }
    }
  }
  lVar2 = 0;
LAB_140bb4d29:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140bb5078 FUN_140bb5078 body=914 status=ok
// SIG undefined FUN_140bb5078(void)

undefined8 *
FUN_140bb5078(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  char local_78 [16];
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1403dcede();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0x3f800000;
  *(undefined4 *)(param_2 + 3) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined4 *)(param_2 + 7) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined1 *)(param_2 + 0xb) = 0;
  param_2[0xc] = 0;
  param_2[0xf] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar13 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0xd) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar13;
  *(undefined4 *)(param_2 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x74) = uVar3;
  if ((longlong)(int)param_1[1] != 0) {
    local_80 = param_2 + 8;
    plVar12 = (longlong *)(*param_1 + 4);
    lVar9 = 0;
    do {
      if (*plVar12 == *param_4) {
        lVar9 = *param_1 - lVar9;
        if (lVar9 != 0) {
          lVar5 = (**(code **)(*param_3 + 0x58))(param_3,param_4);
          if (lVar5 == 0) {
            lVar5 = FUN_140312a30(param_3,param_4);
          }
          lVar11 = *(longlong *)((longlong)plVar12 + 0x14);
          if (lVar11 == 0) {
            if (lVar5 != 0) {
              lVar11 = FUN_1404dcd0c(lVar5 + 0x1288,lVar9 + 0x10);
              goto LAB_140bb5161;
            }
            lVar11 = 0;
          }
          else {
LAB_140bb5161:
            if ((lVar11 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar11);
            }
          }
          param_2[1] = lVar11;
          *(char *)((longlong)param_2 + 0x1c) = (char)plVar12[6];
          *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)plVar12 + 0x2c);
          lVar5 = *(longlong *)((longlong)plVar12 + 0x34);
          if (DAT_14c950c29 == 1) {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = *(longlong *)((longlong)plVar12 + 0x34);
            }
          }
          bVar4 = DAT_14c950c29;
          param_2[4] = lVar5;
          lVar5 = *(longlong *)((longlong)plVar12 + 0x3c);
          if ((bVar4 & 1) != 0) {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = *(longlong *)((longlong)plVar12 + 0x3c);
              bVar4 = DAT_14c950c29;
            }
          }
          param_2[5] = lVar5;
          *(undefined1 *)(param_2 + 6) = *(undefined1 *)((longlong)plVar12 + 0x44);
          *(char *)((longlong)param_2 + 0x3c) = (char)plVar12[10];
          *(undefined4 *)(param_2 + 7) = *(undefined4 *)((longlong)plVar12 + 0x4c);
          lVar5 = *(longlong *)((longlong)plVar12 + 0x54);
          if ((bVar4 & 1) != 0) {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = *(longlong *)((longlong)plVar12 + 0x54);
              bVar4 = DAT_14c950c29;
            }
          }
          *local_80 = lVar5;
          lVar5 = *(longlong *)((longlong)plVar12 + 0x5c);
          if ((bVar4 & 1) != 0) {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = *(longlong *)((longlong)plVar12 + 0x5c);
            }
          }
          param_2[9] = lVar5;
          *(undefined1 *)(param_2 + 10) = *(undefined1 *)((longlong)plVar12 + 100);
          puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3);
          local_78[0] = '\0';
          local_50 = 0;
          FUN_1456bb102(local_78,*puVar6);
          uVar13 = FUN_140bb540c(lVar9,local_78);
          *(undefined4 *)(param_2 + 2) = uVar13;
          lVar9 = DAT_14c9a3da0;
          if ((longlong)local_50 != 0) {
            lVar11 = (longlong)local_50 + -1;
            lVar5 = lVar11 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar5),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar5));
            if (*(longlong *)(lVar9 + lVar5) != 0) {
              FUN_1400020a8();
            }
            lVar9 = DAT_14c9a3da0;
            iVar10 = (int)lVar11;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
            }
            *(undefined4 *)(lVar9 + lVar5) = 0xffffffff;
            iVar7 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar7 = DAT_14c9a3dd0;
            }
            *(int *)(lVar9 + 4 + lVar5) = iVar7;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar8 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar8 = DAT_14c9a3dc0;
            }
            iVar7 = iVar10 + 0x1f;
            if (-1 < iVar10) {
              iVar7 = iVar10;
            }
            bVar4 = (byte)lVar11 & 0x1f;
            DAT_14c9a3dd0 = iVar10;
            *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
                 *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
                 (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            local_50 = 0;
          }
          if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
          *param_2 = *(undefined8 *)((longlong)plVar12 + 0x24);
        }
        break;
      }
      lVar9 = lVar9 + -0xf0;
      plVar12 = plVar12 + 0x1e;
    } while ((longlong)(int)param_1[1] * -0xf0 - lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140bb540c FUN_140bb540c body=316 status=ok
// SIG undefined FUN_140bb540c(void)

undefined4 FUN_140bb540c(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_80;
  FUN_1447c3578(param_1 + 0x70,puVar3,param_2);
  if (local_60 == 3) {
    uVar2 = 3;
    uVar5 = local_80;
  }
  else {
    puVar4 = &local_58;
    FUN_1400b56fe(puVar4,&local_80,3);
    uVar5 = local_58;
    if (local_38 == 0) {
      uVar5 = 0x3f800000;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar4 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar2 = (uint)local_60;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar3 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140bb554a FUN_140bb554a body=228 status=ok
// SIG undefined FUN_140bb554a(void)

longlong FUN_140bb554a(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb68508 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458993e0;
    local_38 = &LAB_1487449a5;
    local_40 = &LAB_140e9e5e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_Perch",&DAT_14cb68508,&DAT_1487449a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68508;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb5630 FUN_140bb5630 body=97 status=ok
// SIG undefined FUN_140bb5630(void)

longlong FUN_140bb5630(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140ce3450((longlong *)(param_1 + 0x98),param_2,0xbf800000);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xa0) <= (int)uVar1)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + (ulonglong)uVar1 * 0x10);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
  }
  return lVar2;
}



// FUNCTION 140bb5692 FUN_140bb5692 body=228 status=ok
// SIG undefined FUN_140bb5692(void)

longlong FUN_140bb5692(void)

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
  if (DAT_14cb685e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60de;
    local_38 = &LAB_1487449f1;
    local_40 = FUN_14185adff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick_Random",&DAT_14cb685e0,&DAT_1487449f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb685e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb5777 FUN_140bb5777 body=121 status=ok
// SIG undefined FUN_140bb5777(void)

void FUN_140bb5777(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bb57f0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b60ee50;
  *(undefined2 *)(puVar1 + 0x23) = 0;
  *(undefined1 *)(puVar1 + 0x25) = 0;
  *(undefined1 *)(puVar1 + 0x27) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  *(undefined4 *)(puVar1 + 0x2e) = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *(undefined1 *)(puVar1 + 0x33) = 0;
  return;
}



// FUNCTION 140bb57f0 FUN_140bb57f0 body=216 status=ok
// SIG undefined FUN_140bb57f0(void)

undefined8 * FUN_140bb57f0(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x200000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xba) = 0;
  *param_1 = &PTR_FUN_14b1294e0;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 140bb58c8 FUN_140bb58c8 body=257 status=ok
// SIG undefined FUN_140bb58c8(void)

void FUN_140bb58c8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x28);
  uVar7 = 0;
  if ((longlong)iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar6 + 0x18 + lVar8);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) != 0)) {
        puVar4 = *(undefined8 **)(lVar3 + 0x18);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72((longlong *)(lVar3 + 0x18),0,0,0x10);
          *(undefined4 *)(lVar3 + 0x20) = 0;
        }
      }
      lVar8 = lVar8 + 0x90;
    } while ((longlong)iVar2 * 0x90 != lVar8);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x20);
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  FUN_140bb5a16(lVar6,uVar5);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_140bb5aba(plVar1,0);
    uVar7 = *(undefined4 *)(param_1 + 0x28);
  }
  FUN_140bb5a16(*plVar1,uVar7);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb59c9(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bb59c9 FUN_140bb59c9 body=77 status=ok
// SIG undefined FUN_140bb59c9(void)

void FUN_140bb59c9(longlong param_1,int param_2)

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



// FUNCTION 140bb5a16 FUN_140bb5a16 body=164 status=ok
// SIG undefined FUN_140bb5a16(void)

void FUN_140bb5a16(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x80);
    do {
      *puVar4 = 0;
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(puVar4 + -0x12);
      if (*(char *)(puVar4 + -0x15) == '\x01') {
        *(undefined1 *)(puVar4 + -0x15) = 0;
      }
      plVar3 = *(longlong **)(puVar4 + -0x18);
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
      plVar3 = *(longlong **)(puVar4 + -0x1c);
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
      puVar4 = puVar4 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bb5aba FUN_140bb5aba body=113 status=ok
// SIG undefined FUN_140bb5aba(void)

void FUN_140bb5aba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 140bb5b2c FUN_140bb5b2c body=136 status=ok
// SIG undefined FUN_140bb5b2c(void)

void FUN_140bb5b2c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x298);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x290);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      uVar4 = *(undefined8 *)(lVar2 + 8 + lVar5);
      FUN_140486538(param_2,uVar3);
      FUN_14048646a(param_2 + 0x20,uVar3,uVar4,0);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000140bb5b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x378))(*(longlong **)(param_1 + 0x40),param_2);
  return;
}



// FUNCTION 140bb5bc6 FUN_140bb5bc6 body=1079 status=ok
// SIG undefined FUN_140bb5bc6(void)

void FUN_140bb5bc6(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x79) == param_2) goto LAB_140bb5f14;
  *(char *)(param_1 + 0x79) = param_2;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x90) = DAT_14c8464f0;
    uVar9 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x80) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    uVar3 = DAT_14c8462c8._4_4_;
    uVar2 = (undefined4)DAT_14c8462c8;
    uVar16 = DAT_14c8462c0._4_4_;
    *(undefined4 *)(param_1 + 0x98) = (undefined4)DAT_14c8462c0;
    *(undefined4 *)(param_1 + 0x9c) = uVar16;
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
    *(undefined8 *)(param_1 + 0xa8) = DAT_14c8462d0;
  }
  plVar1 = (longlong *)(*(longlong **)(param_1 + 0xe0))[0x39d];
  if (plVar1 == (longlong *)0x0) goto LAB_140bb5f14;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  if (lVar6 != 0) {
    puVar14 = (undefined8 *)(lVar6 + 0x480);
    if (*(char *)(param_1 + 0x79) != '\0') {
      puVar14 = (undefined8 *)(lVar6 + 0x468);
    }
    uVar9 = *puVar14;
    uVar7 = FUN_14477b664(puVar14[1]);
    uVar8 = FUN_14477b664(uVar7);
    uVar7 = puVar14[2];
    local_98[0] = 0;
    local_94 = 0;
    local_88 = uVar9;
    uVar9 = FUN_14477b664(uVar8);
    local_80 = FUN_14477b664(uVar9);
    local_70 = 0;
    local_b8 = 0;
    local_78 = uVar7;
    FUN_140b32deb(&local_68,plVar1,local_98,0);
    local_68 = 0;
    local_60 = 0xffffffffffffffff;
    if ((local_70 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_70 + 0x50));
    }
    if (*(char *)(param_1 + 0x79) == '\0') {
      cVar5 = FUN_1404da3f8(param_1);
      if (cVar5 == '\0') {
        (**(code **)(*plVar1 + 0x808))(plVar1);
      }
      if (*(char *)(param_1 + 0xd8) == '\x01') {
        uVar9 = *(undefined8 *)(lVar6 + 0x450);
        uVar7 = FUN_14477b664(*(undefined8 *)(lVar6 + 0x458));
        uVar8 = FUN_14477b664(uVar7);
        uVar7 = *(undefined8 *)(lVar6 + 0x460);
        local_98[0] = 0;
        local_94 = 0;
        local_88 = uVar9;
        uVar9 = FUN_14477b664(uVar8);
        local_80 = FUN_14477b664(uVar9);
        local_70 = 0;
        local_b8 = 0;
        local_78 = uVar7;
        FUN_140b32deb(&local_b0,plVar1,local_98,0);
        local_b0 = 0;
        local_a8 = 0xffffffffffffffff;
        if ((local_70 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_70 + 0x50));
        }
        *(undefined1 *)(param_1 + 0xd8) = 0;
      }
    }
  }
  plVar15 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x1d8);
  if (plVar15 == (longlong *)0x0) goto LAB_140bb5f14;
  cVar5 = (**(code **)(*plVar15 + 0x700))();
  if (cVar5 == '\0') goto LAB_140bb5f14;
  lVar6 = FUN_1449e3f1e();
  if (lVar6 == 0) goto LAB_140bb5f14;
  lVar10 = FUN_1447210f0(plVar1);
  lVar4 = DAT_14cb259f8;
  if (DAT_14cb259f8 == 0) goto LAB_140bb5f14;
  if (DAT_14cb25ab0 == '\x01') {
    lVar12 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
    if (lVar12 != 0) {
      plVar15 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
      plVar13 = plVar15 + lVar12 * 2;
      do {
        lVar12 = *plVar15;
        if (((lVar12 != 0) && (*(longlong *)(lVar12 + 8) == lVar10)) &&
           (*(longlong *)(lVar12 + 0xf0) == plVar1[0x78])) {
          if (*(char *)(param_1 + 0x79) == '\0') {
            uVar16 = 0;
          }
          else {
            uVar16 = 0x3f800000;
          }
          lVar10 = *(longlong *)(lVar6 + 0x3f0);
          if (lVar10 == 0) {
            uVar9 = FUN_1407f787c();
            lVar10 = FUN_14477b664(uVar9);
            *(longlong *)(lVar6 + 0x3f0) = lVar10;
          }
          lVar11 = *(longlong *)(lVar6 + 0x3f8);
          if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*(longlong *)(lVar6 + 1000) != 0)) {
            plVar1 = *(longlong **)(lVar10 + 0xb8);
            if (plVar1 == (longlong *)0x0) {
LAB_140bb5ffa:
              lVar11 = 0;
            }
            else {
              cVar5 = (**(code **)(*plVar1 + 0x108))(plVar1);
              if (cVar5 == '\0') goto LAB_140bb5ffa;
              uVar9 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar6 + 1000));
            }
            *(longlong *)(lVar6 + 0x3f8) = lVar11;
          }
          local_b8 = local_b8 & 0xffffffffffffff00;
          FUN_1447997cc(lVar12,lVar11,uVar16,0);
          break;
        }
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar13);
    }
  }
  if (*(char *)(param_1 + 0x79) == '\0') {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x3f800000;
  }
  lVar10 = *(longlong *)(lVar6 + 0x2f0);
  if (lVar10 == 0) {
    uVar9 = FUN_1407f787c();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(lVar6 + 0x2f0) = lVar10;
  }
  lVar12 = *(longlong *)(lVar6 + 0x2f8);
  if (((lVar12 == 0) && (lVar12 = 0, lVar10 != 0)) && (*(longlong *)(lVar6 + 0x2e8) != 0)) {
    plVar1 = *(longlong **)(lVar10 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_140bb5ff3:
      lVar12 = 0;
    }
    else {
      cVar5 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar5 == '\0') goto LAB_140bb5ff3;
      uVar9 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar12 = FUN_144aff482(uVar9,(longlong *)(lVar6 + 0x2e8));
    }
    *(longlong *)(lVar6 + 0x2f8) = lVar12;
  }
  FUN_1447eec96(lVar4,lVar12,uVar16,0);
LAB_140bb5f14:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb5ffe FUN_140bb5ffe body=181 status=ok
// SIG undefined FUN_140bb5ffe(void)

longlong FUN_140bb5ffe(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FUN_1400021e4(param_2,&local_38);
    FUN_14021219d(param_1,&local_38);
  }
  else {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_14021219d(param_1,&local_38);
    puVar1 = local_38;
    if ((int)uStack_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar1,1);
    *param_2 = local_40;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140bb60bc FUN_140bb60bc body=193 status=ok
// SIG undefined FUN_140bb60bc(void)

void FUN_140bb60bc(longlong param_1)

{
  FUN_140bb61a8(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb617d(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb62a4((longlong *)(param_1 + 0x30),0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bb617d FUN_140bb617d body=43 status=ok
// SIG undefined FUN_140bb617d(void)

void FUN_140bb617d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c9ce7c(param_1);
    param_1 = param_1 + 0x278;
  }
  return;
}



// FUNCTION 140bb61a8 FUN_140bb61a8 body=71 status=ok
// SIG undefined FUN_140bb61a8(void)

void FUN_140bb61a8(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x98;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb61f0(param_1);
      param_1 = param_1 + 0xe8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bb61f0 FUN_140bb61f0 body=55 status=ok
// SIG undefined FUN_140bb61f0(void)

void FUN_140bb61f0(longlong *param_1)

{
  FUN_140bb6228(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bb6228 FUN_140bb6228 body=123 status=ok
// SIG undefined FUN_140bb6228(void)

void FUN_140bb6228(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14152de66(param_1,param_2);
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



// FUNCTION 140bb62a4 FUN_140bb62a4 body=507 status=ok
// SIG undefined FUN_140bb62a4(void)

void FUN_140bb62a4(longlong *param_1,int param_2)

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
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar5 = (int)local_60[3];
  iVar7 = local_58._4_4_;
  iVar14 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar7 * 0x38) != 0) {
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
          if (iVar3 - lVar12 == lVar9) goto LAB_140bb631f;
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
LAB_140bb631f:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar6 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb64a0 FUN_140bb64a0 body=40 status=ok
// SIG undefined FUN_140bb64a0(void)

undefined8 FUN_140bb64a0(undefined8 param_1,int param_2)

{
  FUN_140bb64c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bb64c8 FUN_140bb64c8 body=273 status=ok
// SIG undefined FUN_140bb64c8(void)

void FUN_140bb64c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae83d60;
  param_1[5] = &PTR_FUN_14ae848e0;
  param_1[6] = &PTR_LAB_14ae84920;
  param_1[0x55] = &PTR_FUN_14ae84970;
  param_1[0x56] = &PTR_FUN_14ae849f0;
  param_1[0x57] = &PTR_FUN_14ae84a00;
  if (param_1[0x332] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x321] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x215] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb65d9(param_1[0x20e],*(undefined4 *)(param_1 + 0x20f));
  if (param_1[0x20e] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb660a(param_1[0x20c],*(undefined4 *)(param_1 + 0x20d));
  if (param_1[0x20c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1de] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1cd] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140bb65d9 FUN_140bb65d9 body=49 status=ok
// SIG undefined FUN_140bb65d9(void)

void FUN_140bb65d9(longlong param_1,int param_2)

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



// FUNCTION 140bb660a FUN_140bb660a body=49 status=ok
// SIG undefined FUN_140bb660a(void)

void FUN_140bb660a(longlong param_1,int param_2)

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



// FUNCTION 140bb663c FUN_140bb663c body=25 status=ok
// SIG undefined FUN_140bb663c(void)

void FUN_140bb663c(longlong param_1)

{
  FUN_140bb6656();
  *(int *)(param_1 + 0x51c) = *(int *)(param_1 + 0x51c) + 1;
  return;
}



// FUNCTION 140bb6656 FUN_140bb6656 body=390 status=ok
// SIG undefined FUN_140bb6656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bb6656(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  
  auVar8 = pblendw(ZEXT416(CONCAT13(*(undefined1 *)(param_1 + 0x41e),
                                    CONCAT12(*(undefined1 *)(param_1 + 0x41a),
                                             CONCAT11(*(undefined1 *)(param_1 + 0x416),
                                                      *(undefined1 *)(param_1 + 0x412))))) &
                   _DAT_14a9e5460,(undefined1  [16])0x0,0xfc);
  auVar8 = psadbw(auVar8,(undefined1  [16])0x0);
  fVar9 = 0.0;
  if (auVar8._0_4_ != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         (ulonglong)*(uint *)(param_1 + 0x410) & 0xffffffff0000ffff |
         (ulonglong)*(ushort *)(param_1 + 0x414) << 0x10 |
         (ulonglong)*(ushort *)(param_1 + 0x418) << 0x20 |
         (ulonglong)*(ushort *)(param_1 + 0x41c) << 0x30;
    auVar10 = pmovzxwd(auVar10 & _DAT_14a9e5470,auVar10 & _DAT_14a9e5470);
    auVar10 = phaddd(auVar10,auVar10);
    auVar10 = phaddd(auVar10,auVar10);
    fVar9 = (float)auVar10._0_4_ / (float)auVar8._0_4_;
  }
  *(float *)(param_1 + 0x3d8) = fVar9;
  if (((*(byte *)(param_1 + 0x39a) & 1) != 0) || (*(char *)(param_1 + 0x178) != '\x03')) {
    iVar6 = 0xff;
    if ((int)(fVar9 * 0.25) < 0xff) {
      iVar6 = (int)(fVar9 * 0.25);
    }
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xd);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar4 = *(uint **)(lVar2 + 0x18);
          if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
            puVar4 = (uint *)(lVar2 + 8);
          }
          *puVar4 = *puVar4 | 0x2000;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
    *(char *)(param_1 + 0x398) = (char)iVar6;
  }
  return;
}



// FUNCTION 140bb67e2 FUN_140bb67e2 body=57 status=ok
// SIG undefined FUN_140bb67e2(void)

void FUN_140bb67e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23868 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23868 = FUN_140002ddd(FUN_14643f8a2,uVar1,L"GpsTest_TraceArc");
  }
  return;
}



// FUNCTION 140bb6824 FUN_140bb6824 body=381 status=ok
// SIG undefined FUN_140bb6824(void)

void FUN_140bb6824(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_140bb6906;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_140bb6906:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x210))(param_2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,1);
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)param_1[2]);
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bb69b0 FUN_140bb69b0 body=31 status=ok
// SIG undefined FUN_140bb69b0(void)

undefined8 FUN_140bb69b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bb69d8 FUN_140bb69d8 body=153 status=ok
// SIG undefined FUN_140bb69d8(void)

undefined8 * FUN_140bb69d8(undefined8 *param_1)

{
  FUN_140bb6a72();
  *param_1 = &PTR_FUN_14b9508c0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3f40000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcd) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3f4000003f800000;
  FUN_14020a6cc((longlong)param_1 + 0xbc,1);
  *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) & 0xf0;
  return param_1;
}



// FUNCTION 140bb6a72 FUN_140bb6a72 body=109 status=ok
// SIG undefined FUN_140bb6a72(void)

undefined8 * FUN_140bb6a72(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b4a6120;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  return param_1;
}



// FUNCTION 140bb6ae0 FUN_140bb6ae0 body=305 status=ok
// SIG undefined FUN_140bb6ae0(void)

undefined4 *
FUN_140bb6ae0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
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
  FUN_1405dc782(param_1,local_58);
  puVar1 = (undefined4 *)param_4[1];
  *local_50 = *(undefined4 *)*param_4;
  local_50[1] = *puVar1;
  local_50[2] = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_140263f5a(param_1,param_3,local_50,local_58);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
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
      local_50[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_50[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb6c22 FUN_140bb6c22 body=524 status=ok
// SIG undefined FUN_140bb6c22(void)

void FUN_140bb6c22(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar5;
    if (uVar9 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140bb6d7e;
        iVar10 = iVar10 + 0x20;
        uVar9 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar9 = 0xffffffff;
    do {
      if (*(char *)(*param_1 + 0x38 + (longlong)iVar4 * 0x48) != '\x03') {
        lVar11 = *param_1 + (longlong)iVar4 * 0x48;
        lVar12 = lVar11 + 8;
        if (*(char *)(lVar11 + 0x30) == '\0') {
          FUN_14044066a(local_80,10,3);
          FUN_1403719a4(lVar12,local_80);
          FUN_144a2da94(local_80);
        }
        else {
          FUN_145781132(lVar12,3,0);
        }
      }
      uVar9 = uVar9 & ~(uint)uVar14;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar8 = puVar5[lVar11] & uVar9;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar12 = 0;
          do {
            uVar8 = puVar5[lVar11 + lVar12 + 1];
            if (uVar8 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar9 = 0xffffffff;
              goto LAB_140bb6d4f;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar9 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_140bb6d4f:
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_140bb6d7e:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bb6e30 FUN_140bb6e30 body=113 status=ok
// SIG undefined FUN_140bb6e30(void)

void FUN_140bb6e30(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  uVar3 = (uint)bVar1 * 0x120;
  if (((&DAT_14c9a8514)[uVar3] & 0x20) == 0) {
    iVar2 = *(int *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x30) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x34) < iVar2 + 1U) {
      FUN_142b3d46e(param_2,iVar2);
    }
    lVar4 = *(longlong *)(param_2 + 0x28);
    if (*(longlong *)(param_2 + 0x28) == 0) {
      lVar4 = param_2;
    }
    *(byte *)(lVar4 + iVar2) = bVar1;
  }
  else if (*(code **)(&DAT_14c9a8590 + uVar3) != (code *)0x0) {
                    /* WARNING: Jumptable at 0x000140bb6e95 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14c9a8590 + uVar3))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140bb6eaa FUN_140bb6eaa body=126 status=ok
// SIG undefined FUN_140bb6eaa(void)

undefined8 * FUN_140bb6eaa(undefined8 *param_1)

{
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
  *param_1 = &PTR_FUN_14ac8a840;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xc;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  return param_1;
}



// FUNCTION 140bb6f28 FUN_140bb6f28 body=366 status=ok
// SIG undefined FUN_140bb6f28(void)

void FUN_140bb6f28(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140bb70aa(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140bb7104(param_1);
  return;
}



// FUNCTION 140bb70aa FUN_140bb70aa body=90 status=ok
// SIG undefined FUN_140bb70aa(void)

void FUN_140bb70aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 140bb7104 FUN_140bb7104 body=663 status=ok
// SIG undefined FUN_140bb7104(void)

void FUN_140bb7104(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140bb7177;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140bb7177:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x40;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x3c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x38 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140bb739c FUN_140bb739c body=126 status=ok
// SIG undefined FUN_140bb739c(void)

void FUN_140bb739c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b02d230;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb741a(param_1);
  return;
}



// FUNCTION 140bb741a FUN_140bb741a body=223 status=ok
// SIG undefined FUN_140bb741a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bb741a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b02dd20;
  param_1[0xc] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140115c12(param_1 + 0xe,0);
  }
  param_1[0xd] = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140bb74d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140bb74fa FUN_140bb74fa body=310 status=ok
// SIG undefined FUN_140bb74fa(void)

undefined8 FUN_140bb74fa(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140bb762a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140bb762a;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
  }
  else {
LAB_140bb762a:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140bb75d1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140bb75d1;
    }
  }
  uVar6 = 0;
LAB_140bb75d1:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb7632 FUN_140bb7632 body=1021 status=ok
// SIG undefined FUN_140bb7632(void)

void FUN_140bb7632(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar13 = *(longlong *)(param_1 + 0xb0);
  if (((lVar13 == 0) && (lVar13 = FUN_1448abda6(param_1), lVar13 == 0)) ||
     (cVar6 = FUN_140bb7a30(param_1,1), cVar6 == '\0')) goto LAB_140bb78b2;
  if (((*(char *)(param_1 + 0x684) != '\x01') || (*(longlong *)(param_1 + 0x720) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), lVar9 == 0)) {
    lVar9 = param_1;
  }
  uVar2 = *(undefined8 *)(lVar9 + 0x270);
  uVar1 = *(undefined4 *)(lVar9 + 0x264);
  uVar4 = *(undefined4 *)(lVar9 + 0x268);
  uVar5 = *(undefined4 *)(lVar9 + 0x26c);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(lVar9 + 0x260);
  *(undefined4 *)(param_1 + 0x70c) = uVar1;
  *(undefined4 *)(param_1 + 0x710) = uVar4;
  *(undefined4 *)(param_1 + 0x714) = uVar5;
  *(undefined8 *)(param_1 + 0x718) = uVar2;
  if (*(longlong *)(lVar13 + 0x1f0) == 0) {
    plVar7 = (longlong *)(lVar13 + 0x458);
  }
  else {
    plVar7 = (longlong *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
  }
  lVar9 = *(longlong *)(param_1 + 0x6e8);
  if (lVar9 != 0) {
    lVar3 = *plVar7;
    uVar10 = (uint)lVar9;
    if ((int)(uVar10 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
      lVar12 = lVar3 + 0x18;
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        lVar12 = *(longlong *)(lVar3 + 0x28);
      }
      if ((*(uint *)(lVar12 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >> (uVar10 & 0x1f) & 1) !=
          0) {
        lVar3 = *(longlong *)(lVar3 + 8);
        lVar12 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
        if (((lVar3 + lVar12 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar12) == lVar9)) &&
           (*(char *)(lVar3 + 1 + lVar12) != '\x04')) {
          FUN_1405a424c();
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  if (*(longlong *)(lVar13 + 0x1f0) == 0) {
    puVar8 = (undefined8 *)(lVar13 + 0x458);
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
  }
  uVar2 = *puVar8;
  uVar1 = *(undefined4 *)(param_1 + 0x694);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar8 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_c0[2] = lVar9;
  *local_c0 = &PTR_FUN_14aba48f0;
  local_c0[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar10 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_c0 + 3) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar14;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar14;
      }
    }
  }
  *(int *)((longlong)puVar8 + 0x1c) = iVar11;
  puVar8[4] = &LAB_141104638;
  *(undefined4 *)(puVar8 + 5) = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 0;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar2,(undefined8 *)(param_1 + 0x6e8),&local_a8,uVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  if (local_b8 == 0) {
LAB_140bb7883:
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_c0 != (undefined8 *)0x0) {
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_140bb7883;
  }
  cVar6 = FUN_140bb7a30(param_1,0);
  if (cVar6 != '\0') {
    cVar6 = *(char *)(param_1 + 0x685);
    *(undefined1 *)(param_1 + 0x685) = 2;
    if (cVar6 != '\x02') {
      if (((cVar6 == '\0') && (*(char *)(param_1 + 0x683) == '\x02')) &&
         (*(undefined1 *)(param_1 + 0x683) = 1, *(char *)(param_1 + 0x680) != '\0')) {
        *(undefined1 *)(param_1 + 0x680) = 0;
        FUN_140acee66(param_1);
      }
      FUN_140acf01e(param_1);
    }
  }
LAB_140bb78b2:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bb7a30 FUN_140bb7a30 body=253 status=ok
// SIG undefined FUN_140bb7a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140bb7a30(longlong param_1,char param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = 0x708;
  if (param_2 == '\0') {
    lVar2 = 0x6f0;
  }
  dVar1 = *(double *)(param_1 + lVar2);
  if ((dVar1 == _DAT_14cb1ce10) && (!NAN(dVar1) && !NAN(_DAT_14cb1ce10))) {
    dVar5 = *(double *)(param_1 + 8 + lVar2);
    if ((dVar5 == DAT_14cb1ce18) && (!NAN(dVar5) && !NAN(DAT_14cb1ce18))) {
      dVar5 = *(double *)(param_1 + 0x10 + lVar2);
      if ((dVar5 == DAT_14cb1ce20) && (!NAN(dVar5) && !NAN(DAT_14cb1ce20))) {
        return 0;
      }
    }
  }
  lVar3 = param_1;
  if (*(char *)(param_1 + 0x684) == '\x01') {
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar7 = 0.0;
    if ((*(longlong *)(param_1 + 0x720) == 0) ||
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), lVar3 == 0))
    goto LAB_140bb7a74;
  }
  dVar6 = *(double *)(lVar3 + 0x260);
  dVar7 = *(double *)(lVar3 + 0x268);
  dVar5 = *(double *)(lVar3 + 0x270);
LAB_140bb7a74:
  dVar5 = dVar5 - *(double *)(param_1 + 0x10 + lVar2);
  dVar7 = dVar7 - *(double *)(param_1 + 8 + lVar2);
  if (param_2 == '\0') {
    fVar4 = *(float *)(param_1 + 0x690);
  }
  else {
    fVar4 = 1.0;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                  fVar4 * fVar4 <=
                  (float)(dVar5 * dVar5 + (dVar6 - dVar1) * (dVar6 - dVar1) + dVar7 * dVar7));
}



// FUNCTION 140bb7b2e FUN_140bb7b2e body=212 status=ok
// SIG undefined FUN_140bb7b2e(void)

undefined4
FUN_140bb7b2e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    FUN_140bb7c14(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  (**(code **)(*param_1 + 8))(param_1,local_70);
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = FUN_140bb7c14(param_3,param_2,local_70,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_80);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb7c14 FUN_140bb7c14 body=157 status=ok
// SIG undefined FUN_140bb7c14(void)

undefined8 FUN_140bb7c14(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14014e996(param_1,local_48,1,0);
  local_58 = 0;
  uStack_50 = 0;
  FUN_1400b2348(local_48,&local_58,1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb7cbe FUN_140bb7cbe body=379 status=ok
// SIG undefined FUN_140bb7cbe(void)

undefined8 FUN_140bb7cbe(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  cVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    lVar6 = (longlong)iVar1;
    if (lVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if ((longlong)*(int *)(lVar2 + 0x20) == 0) {
        bVar14 = true;
      }
      else {
        lVar5 = 0;
        do {
          bVar14 = *(char *)(*(longlong *)(lVar2 + 0x18) + lVar5) == '\0';
          if (!bVar14) break;
          bVar15 = (longlong)*(int *)(lVar2 + 0x20) * 0x58 + -0x58 != lVar5;
          lVar5 = lVar5 + 0x58;
        } while (bVar15);
      }
      iVar13 = 0;
      iVar4 = 0;
LAB_140bb7d37:
      do {
        lVar5 = (longlong)iVar4;
        iVar8 = iVar4 + 1;
        if (iVar4 + 1 < iVar1) {
          iVar8 = iVar1;
        }
        lVar10 = lVar5 + 1;
        if (lVar10 < lVar6) {
          bVar15 = true;
          do {
            lVar11 = (longlong)*(int *)(lVar2 + 0x20 + lVar10 * 0x28);
            iVar7 = (int)lVar10;
            if (lVar11 == 0) {
              if (!bVar14) {
                iVar9 = iVar7 - iVar4;
                iVar8 = iVar7;
                goto LAB_140bb7ddb;
              }
            }
            else {
              lVar12 = 0;
              do {
                cVar3 = *(char *)(*(longlong *)(lVar2 + 0x18 + lVar10 * 0x28) + lVar12);
                if (cVar3 != '\0') break;
                bVar16 = lVar11 * 0x58 + -0x58 != lVar12;
                lVar12 = lVar12 + 0x58;
              } while (bVar16);
              if ((bool)(cVar3 == '\0' ^ bVar14)) break;
            }
            lVar10 = lVar10 + 1;
            bVar15 = lVar10 < lVar6;
            iVar7 = iVar8;
          } while (lVar10 != lVar6);
          iVar9 = iVar7 - iVar4;
          iVar8 = iVar7;
          if (bVar14) {
            FUN_14028f404(lVar2 + lVar5 * 0x28,iVar9);
            bVar14 = false;
            iVar4 = iVar7;
            if (!bVar15) break;
            goto LAB_140bb7d37;
          }
        }
        else {
          iVar9 = iVar8 - iVar4;
          if (bVar14) {
            FUN_14028f404(lVar2 + lVar5 * 0x28,iVar9);
            break;
          }
          bVar15 = false;
        }
LAB_140bb7ddb:
        if (iVar13 != iVar4) {
          memmove((void *)(lVar2 + (longlong)iVar13 * 0x28),(void *)(lVar2 + lVar5 * 0x28),
                  (longlong)iVar9 * 0x28);
        }
        iVar13 = iVar13 + iVar9;
        bVar14 = true;
        iVar4 = iVar8;
      } while (bVar15);
      *(int *)(param_1 + 0x18) = iVar13;
    }
  }
  return 0;
}



// FUNCTION 140bb7e3a FUN_140bb7e3a body=65 status=ok
// SIG undefined FUN_140bb7e3a(void)

undefined8 * FUN_140bb7e3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a493f70;
  FUN_140bb7e7c(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bb7e7c FUN_140bb7e7c body=246 status=ok
// SIG undefined FUN_140bb7e7c(void)

void FUN_140bb7e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46e9c0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0xc4) != 0) {
    FUN_14472eb64(param_1 + 0x17,0);
  }
  param_1[0x1d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xe4)) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
    FUN_1446efbd8(param_1 + 0x19,0);
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 140bb7f80 FUN_140bb7f80 body=31 status=ok
// SIG undefined FUN_140bb7f80(void)

undefined8 FUN_140bb7f80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bb7fa0 FUN_140bb7fa0 body=427 status=ok
// SIG undefined FUN_140bb7fa0(void)

void FUN_140bb7fa0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar5 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar4 = *(longlong *)(param_2 + 0x30);
  iVar3 = **(int **)(param_2 + 0x20);
  *(int **)(param_2 + 0x20) = *(int **)(param_2 + 0x20) + 1;
  local_50 = *(undefined8 *)(param_2 + 0x38);
  local_30 = *(undefined1 *)(lVar4 + 0x98);
  local_60 = *(undefined8 *)(lVar4 + 0x70);
  uStack_58 = *(undefined8 *)(lVar4 + 0x78);
  local_48 = *(undefined4 *)(lVar4 + 0x80);
  uStack_44 = *(undefined4 *)(lVar4 + 0x84);
  uStack_40 = *(undefined4 *)(lVar4 + 0x88);
  uStack_3c = *(undefined4 *)(lVar4 + 0x8c);
  local_38 = *(undefined8 *)(lVar4 + 0x90);
  FUN_140458a4e(&local_60,iVar3);
  if (0 < iVar3) {
    FUN_140bb81f0(&local_70,*(undefined8 *)(lVar4 + 0x70));
    FUN_140bb81f0(&local_80,*(undefined8 *)(lVar4 + 0x78));
    pbVar5 = *(byte **)(param_2 + 0x20);
    if (*pbVar5 != 0x3c) {
      do {
        *(byte **)(param_2 + 0x20) = pbVar5 + 1;
        (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2,local_70);
        pbVar5 = *(byte **)(param_2 + 0x20);
        *(byte **)(param_2 + 0x20) = pbVar5 + 1;
        (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2,local_80);
        FUN_140bb828e(&local_60,local_70,local_80);
        pbVar5 = *(byte **)(param_2 + 0x20);
      } while (*pbVar5 != 0x3c);
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb814c FUN_140bb814c body=47 status=ok
// SIG undefined FUN_140bb814c(void)

void FUN_140bb814c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if ((*(byte *)((longlong)plVar1 + 0x3c) & 0x10) == 0) {
    (**(code **)(*plVar1 + 0x148))(plVar1,uVar2);
  }
  FUN_1400020a8(uVar2);
  return;
}



// FUNCTION 140bb817c FUN_140bb817c body=116 status=ok
// SIG undefined FUN_140bb817c(void)

void FUN_140bb817c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar3 = *(undefined4 **)(param_2 + 0x20);
  uVar1 = *puVar3;
  uVar2 = puVar3[2];
  *(undefined4 **)(param_2 + 0x20) = puVar3 + 3;
  uVar5 = *(undefined8 *)(puVar3 + 3);
  *(undefined4 **)(param_2 + 0x20) = puVar3 + 5;
  lVar4 = FUN_14477b664(uVar5);
  if (*param_3 != CONCAT44(uVar2,uVar1)) {
    param_3[2] = 0;
  }
  *param_3 = CONCAT44(uVar2,uVar1);
  if (param_3[1] != lVar4) {
    param_3[2] = 0;
  }
  uVar5 = FUN_14477b664(lVar4);
  lVar4 = FUN_14477b664(uVar5);
  param_3[1] = lVar4;
  param_3[2] = 0;
  return;
}



// FUNCTION 140bb81f0 FUN_140bb81f0 body=157 status=ok
// SIG undefined FUN_140bb81f0(void)

undefined8 * FUN_140bb81f0(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x178))(param_2);
  _Dst = (void *)FUN_14001cc68((longlong)*(int *)((longlong)param_2 + 0x34) *
                               (longlong)(int)param_2[6],uVar1);
  *param_1 = _Dst;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20);
  puVar2[2] = param_2;
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149ead8b0;
  puVar2[3] = _Dst;
  param_1[1] = puVar2;
  if ((*(byte *)((longlong)param_2 + 0x39) & 2) == 0) {
    (**(code **)(*param_2 + 0x160))(param_2,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)(int)param_2[6] * (longlong)*(int *)((longlong)param_2 + 0x34));
  }
  return param_1;
}



// FUNCTION 140bb828e FUN_140bb828e body=430 status=ok
// SIG undefined FUN_140bb828e(void)

void FUN_140bb828e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_178 [32];
  undefined1 **local_158;
  undefined1 **local_150;
  code **local_148;
  code **local_140;
  undefined1 **local_138;
  undefined1 **local_130;
  undefined1 **local_128;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_100 = *param_1;
  local_f8 = param_1[1];
  local_118 = param_1;
  local_110 = param_2;
  local_108 = param_3;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    local_38 = &local_48;
    local_128 = &local_40;
    local_40 = &LAB_140bb8a50;
    local_50 = &local_60;
    local_130 = &local_58;
    local_58 = &LAB_140bb8a70;
    local_68 = &local_80;
    local_138 = &local_70;
    local_70 = &LAB_1468ca1d4;
    local_88 = &local_a0;
    local_140 = &local_90;
    local_90 = FUN_140bb8966;
    local_a8 = &local_c0;
    local_148 = &local_b0;
    local_b0 = FUN_140bb8910;
    local_c8 = &local_d8;
    local_150 = &local_d0;
    local_d0 = &LAB_140bb879c;
    local_e0 = &local_f0;
    local_158 = &local_e8;
    local_e8 = &LAB_140bb869a;
    local_f0 = local_100;
    local_d8 = local_100;
    local_c0 = local_100;
    local_b8 = param_2;
    local_a0 = local_f8;
    local_98 = param_3;
    local_80 = local_f8;
    local_78 = param_3;
    local_60 = local_100;
    local_48 = local_f8;
    FUN_140bb843e(param_1[2],param_2,param_3,param_1 + 3);
  }
  else {
    FUN_1468c96f2(&local_118,param_1[2]);
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb843e FUN_140bb843e body=329 status=ok
// SIG undefined FUN_140bb843e(void)

void FUN_140bb843e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  code **local_f0;
  code **local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  code *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_70 = *param_10;
  local_30 = &local_70;
  local_68 = param_10[1];
  local_60 = *param_11;
  local_58 = param_11[1];
  local_50 = *param_4;
  uStack_48 = param_4[1];
  local_40 = param_4[2];
  local_e8 = &local_38;
  local_38 = FUN_140bb89ee;
  local_b8 = *param_7;
  local_78 = &local_b8;
  local_b0 = param_7[1];
  local_a8 = *param_8;
  local_a0 = param_8[1];
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = param_4[2];
  local_f0 = &local_80;
  local_80 = FUN_140bb88ae;
  local_c8 = *param_6;
  local_f8 = &local_c8;
  local_c0 = param_6[1];
  local_d8 = *param_5;
  local_d0 = param_5[1];
  FUN_140bb8588(local_98,param_2,(undefined4 *)((longlong)param_4 + 4),&local_d8);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb8588 FUN_140bb8588 body=272 status=ok
// SIG undefined FUN_140bb8588(void)

void FUN_140bb8588(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = param_2;
  uVar1 = (*(code *)*param_4)(param_4[1]);
  local_58 = *param_5;
  local_88 = &local_58;
  local_50 = param_5[1];
  iVar2 = FUN_140bb86ae(param_1,param_2,param_3,uVar1);
  if (iVar2 == -1) {
    local_68 = *param_6;
    local_88 = &local_68;
    local_60 = param_6[1];
    local_78 = *param_4;
    local_70 = param_4[1];
    FUN_140bb87b6(param_1,param_3,&local_78,uVar1);
  }
  else {
    lVar3 = (longlong)iVar2 * (longlong)*(int *)(param_3 + 0x10) + *param_1;
    local_48 = lVar3;
    (*(code *)*param_7)(param_7[1],&local_48);
    local_48 = lVar3;
    (*(code *)*param_6)(param_6[1],&local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb86ae FUN_140bb86ae body=236 status=ok
// SIG undefined FUN_140bb86ae(void)

int FUN_140bb86ae(longlong *param_1,undefined8 param_2,int *param_3,int param_4,undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + ((longlong)param_4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      pcVar1 = (code *)*param_5;
      uVar2 = param_5[1];
      local_60 = param_2;
      do {
        lVar6 = (longlong)iVar5 * (longlong)param_3[4] + *param_1;
        local_58 = local_60;
        local_50 = lVar6;
        cVar3 = (*pcVar1)(uVar2,&local_58,&local_50);
        if (cVar3 != '\0') goto LAB_140bb8771;
        iVar5 = *(int *)(lVar6 + *param_3);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_140bb8771:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb87b6 FUN_140bb87b6 body=246 status=ok
// SIG undefined FUN_140bb87b6(void)

int FUN_140bb87b6(longlong *param_1,int *param_2,undefined8 *param_3,uint param_4,
                 undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = FUN_14491444c(param_1,param_2 + 3);
  lVar8 = (longlong)iVar3 * (longlong)param_2[4] + *param_1;
  local_48 = lVar8;
  (*(code *)*param_5)(param_5[1]);
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar4) {
    uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar1 = (int)param_1[9];
  if ((iVar1 == 0) || (iVar1 < iVar6)) {
    local_58 = *param_3;
    local_50 = param_3[1];
    FUN_1449b1504(param_1,param_2);
  }
  else {
    param_4 = iVar1 - 1U & param_4;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    *(uint *)(lVar8 + param_2[1]) = param_4;
    *(undefined4 *)(lVar8 + *param_2) =
         *(undefined4 *)((longlong)plVar7 + (longlong)(int)param_4 * 4);
    *(int *)((longlong)plVar7 + (longlong)(int)param_4 * 4) = iVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb88ae FUN_140bb88ae body=97 status=ok
// SIG undefined FUN_140bb88ae(void)

void FUN_140bb88ae(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  local_28 = lVar1;
  (*(code *)*param_1)(param_1[1],&local_28);
  local_28 = *(int *)(param_1 + 4) + lVar1;
  (*(code *)param_1[2])(param_1[3],&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb8910 FUN_140bb8910 body=86 status=ok
// SIG undefined FUN_140bb8910(void)

void FUN_140bb8910(longlong *param_1,undefined8 *param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = (void *)*param_2;
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x000140bb894b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,_Dst,param_1[1]);
  return;
}



// FUNCTION 140bb8966 FUN_140bb8966 body=86 status=ok
// SIG undefined FUN_140bb8966(void)

void FUN_140bb8966(longlong *param_1,undefined8 *param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = (void *)*param_2;
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x000140bb89a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,_Dst,param_1[1]);
  return;
}



// FUNCTION 140bb89ee FUN_140bb89ee body=97 status=ok
// SIG undefined FUN_140bb89ee(void)

void FUN_140bb89ee(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  local_28 = *(int *)(param_1 + 4) + lVar1;
  (*(code *)param_1[2])(param_1[3],&local_28);
  local_28 = lVar1;
  (*(code *)*param_1)(param_1[1],&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb8a90 FUN_140bb8a90 body=511 status=ok
// SIG undefined FUN_140bb8a90(void)

void FUN_140bb8a90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_1b8 [40];
  undefined **local_190 [17];
  undefined ***local_108;
  undefined ***local_100;
  undefined2 local_f8;
  undefined **local_f0 [5];
  byte local_c8;
  byte local_c7;
  longlong *local_98;
  longlong local_78;
  undefined ***local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar1 = *(longlong **)(param_2 + 0x20);
  lVar2 = *plVar1;
  *(longlong **)(param_2 + 0x20) = plVar1 + 1;
  lVar5 = (longlong)(int)plVar1[1];
  *(longlong *)(param_2 + 0x20) = (longlong)plVar1 + 0xc;
  if (*(longlong *)(param_2 + 0x40) == 0 && *(longlong *)(param_2 + 0x38) == 0) {
    lVar5 = lVar5 + (longlong)plVar1 + 0xc;
  }
  else {
    plVar1 = *(longlong **)(lVar2 + 0xb8);
    cVar4 = (**(code **)(*plVar1 + 0x138))(plVar1);
    if (cVar4 != '\0') {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      FUN_144869430(local_f0);
      local_58 = 0;
      local_48 = '\0';
      local_c8 = local_c8 | 1;
      local_c7 = local_c7 & 0xfe;
      local_f0[0] = &PTR_FUN_149e447c0;
      local_60 = uVar3;
      local_50 = lVar5;
      FUN_1407134c4(local_190,local_f0);
      local_108 = local_68;
      local_190[0] = &PTR_FUN_149eae6c0;
      local_f8 = 0;
      local_100 = local_f0;
      local_68 = local_190;
      (**(code **)(*plVar1 + 0x140))(plVar1,local_190,param_3);
      FUN_14041e0ea(local_190);
      if (local_48 == '\x01') {
        FUN_1400020a8(local_60);
        local_60 = 0;
      }
      local_f0[0] = &PTR__purecall_149e35f70;
      if (local_98 != (longlong *)0x0) {
        if (*local_98 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_98);
      }
      if (local_78 != 0) {
        if (*(longlong *)(local_78 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_78);
      }
    }
    lVar5 = lVar5 + *(longlong *)(param_2 + 0x20);
    *(longlong *)(param_2 + 0x20) = lVar5;
    if ((*(byte *)(lVar2 + 0xb2) & 0x20) != 0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,param_3);
      lVar5 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) = (lVar5 + 1) - (ulonglong)(lVar5 == 0);
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb8ccc FUN_140bb8ccc body=500 status=ok
// SIG undefined FUN_140bb8ccc(void)

undefined8 FUN_140bb8ccc(undefined2 *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar4 = (iVar1 / 2) % 3;
  uVar6 = iVar1 / 6 & 0x80000001;
  bVar15 = (iVar1 / 0xc & 0x80000001U) == 1;
  bVar16 = (iVar1 / 0x18 & 0x80000001U) == 1;
  bVar17 = (iVar1 / 0x30 & 0x80000001U) == 1;
  bVar18 = (iVar1 / 0x60 & 0x80000001U) == 1;
  uVar8 = iVar1 / 0xc0 & 0x80000001;
  bVar19 = uVar8 == 1;
  uVar11 = iVar1 / 0x180 & 0x80000001;
  bVar20 = uVar11 == 1;
  bVar12 = bVar15;
  bVar13 = bVar16;
  bVar14 = bVar17;
  bVar9 = bVar18;
  if (iVar4 == 2) {
    if (uVar6 == 1) {
      return 0;
    }
  }
  else {
    if (iVar4 != 1) {
      bVar10 = bVar20;
      bVar7 = bVar19;
      if (iVar4 == 0) {
        bVar14 = false;
      }
      goto LAB_140bb8dbf;
    }
    bVar13 = false;
    bVar12 = false;
    bVar14 = false;
    bVar9 = false;
  }
  bVar10 = false;
  bVar7 = false;
LAB_140bb8dbf:
  bVar2 = uVar8 == 1;
  if (uVar6 != 1) {
    bVar2 = bVar7 != bVar19;
  }
  bVar19 = uVar11 == 1;
  if (bVar12 == false) {
    bVar19 = bVar10 != bVar20;
  }
  if (((((bVar12 == bVar15) && (bVar13 == bVar16)) && (bVar14 == bVar17)) &&
      ((bVar9 == bVar18 && (!bVar2)))) &&
     ((!bVar19 &&
      ((iVar4 != 2 || param_2 != 1 && (cVar3 = FUN_144880847(*param_1,0), cVar3 != '\0')))))) {
    uVar5 = FUN_140bb8ec0(param_1,param_2);
    return uVar5;
  }
  return 0;
}



// FUNCTION 140bb8ec0 FUN_140bb8ec0 body=80 status=ok
// SIG undefined FUN_140bb8ec0(void)

ulonglong FUN_140bb8ec0(ushort *param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined *puVar4;
  
  uVar1 = *param_1;
  if (param_2 != 1) {
    uVar3 = FUN_14019108b();
    return uVar3;
  }
  lVar2 = (ulonglong)uVar1 * 0x3c;
  if ((*(byte *)((longlong)&DAT_14ca814c8 + lVar2 + 2) & 0x40) != 0) {
    puVar4 = &DAT_14ca96ce8;
    if (DAT_14ca96d38 != (undefined *)0x0) {
      puVar4 = DAT_14ca96d38;
    }
    if ((*(uint *)(puVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                      *(undefined1 *)((longlong)&DAT_14ca814d0 + lVar2 + 7)) & 0xffffffffffffff01;
    }
  }
  return 0;
}



// FUNCTION 140bb8f10 FUN_140bb8f10 body=116 status=ok
// SIG undefined FUN_140bb8f10(void)

void FUN_140bb8f10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bb8f84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b208a60;
  puVar1[0xd] = &PTR_FUN_14b208de0;
  puVar1[0x16] = &PTR_FUN_14b208e20;
  puVar1[0x17] = &PTR_FUN_14b208e40;
  puVar1[0x18] = &PTR_FUN_14b208e58;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  return;
}



// FUNCTION 140bb8f84 FUN_140bb8f84 body=121 status=ok
// SIG undefined FUN_140bb8f84(void)

undefined8 * FUN_140bb8f84(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1409dad0c();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  *param_1 = &PTR_FUN_14b19be70;
  param_1[0xd] = &PTR_FUN_14b19c1f0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar1 = FUN_140316ff8();
    *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)(lVar1 + 0x668);
  }
  return param_1;
}



// FUNCTION 140bb900c FUN_140bb900c body=143 status=ok
// SIG undefined FUN_140bb900c(void)

undefined8 * FUN_140bb900c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bb909c FUN_140bb909c body=96 status=ok
// SIG undefined FUN_140bb909c(void)

ulonglong FUN_140bb909c(longlong param_1)

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
LAB_140bb90df:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140bb90df;
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



// FUNCTION 140bb9115 FUN_140bb9115 body=182 status=ok
// SIG undefined FUN_140bb9115(void)

void FUN_140bb9115(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x40), lVar3 != 0)) &&
     (lVar2 = *(longlong *)(param_2 + 0x38), lVar2 != 0)) {
    local_68[0] = *param_3;
    local_58[0] = 0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
      lVar2 = *(longlong *)(param_2 + 0x38);
      lVar3 = *(longlong *)(param_2 + 0x40);
    }
    FUN_140bb91cc(param_1,lVar2,lVar3,local_68);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb91cc FUN_140bb91cc body=1888 status=ok
// SIG undefined FUN_140bb91cc(void)

void FUN_140bb91cc(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  char local_89;
  longlong local_88;
  int local_80 [2];
  longlong local_78;
  char *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_140bb9865;
  local_88 = 0;
  local_80[0] = FUN_144830b78(local_80,&DAT_14cb42160);
  lVar13 = local_78;
  iVar1 = *(int *)(param_3 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar14 = *(longlong *)(param_3 + 0x30);
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(lVar14 + lVar9);
      if (((lVar10 != 0) && (lVar10 == lVar13)) &&
         (plVar6 = (longlong *)FUN_1412149de(param_3), plVar6 != (longlong *)0x0)) {
        local_80[0] = (int)plVar6[1];
        local_88 = *plVar6;
        break;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  local_89 = '\x01';
  pcVar2 = *(char **)(param_2 + 0xd8);
  uVar5 = *(uint *)(pcVar2 + 0x2f8);
  if ((int)*(uint *)(pcVar2 + 0x390) < (int)*(uint *)(pcVar2 + 0x2f8)) {
    uVar5 = *(uint *)(pcVar2 + 0x390);
  }
  local_b8 = param_2;
  if (0 < (int)uVar5) {
    local_b0 = *(ulonglong *)(pcVar2 + 0x388);
    local_a0 = *(longlong *)(pcVar2 + 0x2f0);
    local_a8 = (ulonglong)uVar5;
    uVar11 = 0;
    do {
      lVar13 = *(longlong *)(local_b0 + 0x40 + uVar11 * 0x50);
      if ((lVar13 != 0) &&
         ((lVar13 == local_78 ||
          (((local_88 != 0 && (plVar6 = (longlong *)FUN_144741050(local_80), *plVar6 != 0)) &&
           ((lVar13 = uVar11 * 0x50 + local_b0, *(longlong *)(lVar13 + 0x20) == local_88 &&
            (*(int *)(lVar13 + 0x28) == local_80[0])))))))) {
        lVar13 = (longlong)*(int *)(local_a0 + 0x30 + uVar11 * 0x38);
        if (lVar13 != 0) {
          lVar14 = *(longlong *)(local_a0 + 0x28 + uVar11 * 0x38);
          lVar13 = lVar13 * 0x50;
          do {
            pcVar3 = (code *)*param_4;
            plVar6 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar6 = param_4 + 4;
            }
            local_70 = pcVar2;
            uVar7 = (**(code **)(*plVar6 + 8))();
            cVar4 = (*pcVar3)(uVar7,&local_70,lVar14);
            if (cVar4 == '\0') goto LAB_140bb947c;
            lVar14 = lVar14 + 0x50;
            lVar13 = lVar13 + -0x50;
          } while (lVar13 != 0);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != local_a8);
    if (local_89 == '\0') goto LAB_140bb9481;
  }
  pcVar2 = *(char **)(local_b8 + 0xe0);
  uVar5 = *(uint *)(pcVar2 + 0x2f8);
  if ((int)*(uint *)(pcVar2 + 0x390) < (int)*(uint *)(pcVar2 + 0x2f8)) {
    uVar5 = *(uint *)(pcVar2 + 0x390);
  }
  if (0 < (int)uVar5) {
    local_b0 = *(ulonglong *)(pcVar2 + 0x388);
    local_a0 = *(longlong *)(pcVar2 + 0x2f0);
    local_a8 = (ulonglong)uVar5;
    uVar11 = 0;
    do {
      lVar13 = *(longlong *)(local_b0 + 0x40 + uVar11 * 0x50);
      if ((lVar13 != 0) &&
         ((lVar13 == local_78 ||
          (((local_88 != 0 && (plVar6 = (longlong *)FUN_144741050(local_80), *plVar6 != 0)) &&
           ((lVar13 = uVar11 * 0x50 + local_b0, *(longlong *)(lVar13 + 0x20) == local_88 &&
            (*(int *)(lVar13 + 0x28) == local_80[0])))))))) {
        lVar13 = (longlong)*(int *)(local_a0 + 0x30 + uVar11 * 0x38);
        if (lVar13 != 0) {
          lVar14 = *(longlong *)(local_a0 + 0x28 + uVar11 * 0x38);
          lVar13 = lVar13 * 0x50;
          do {
            pcVar3 = (code *)*param_4;
            plVar6 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar6 = param_4 + 4;
            }
            local_70 = pcVar2;
            uVar7 = (**(code **)(*plVar6 + 8))();
            cVar4 = (*pcVar3)(uVar7,&local_70,lVar14);
            if (cVar4 == '\0') goto LAB_140bb947c;
            lVar14 = lVar14 + 0x50;
            lVar13 = lVar13 + -0x50;
          } while (lVar13 != 0);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != local_a8);
  }
LAB_140bb9481:
  if ((longlong)*(int *)(local_b8 + 0xc0) != 0) {
    lVar13 = *(longlong *)(local_b8 + 0xb8);
    local_98 = lVar13 + (longlong)*(int *)(local_b8 + 0xc0) * 0x48;
    plVar6 = param_4 + 4;
LAB_140bb94ae:
    if ((*(char *)(lVar13 + 0x20) == '\x01') && (uVar11 = FUN_14040f60c(lVar13), uVar11 != 0)) {
      local_70 = &local_89;
      local_68 = &local_78;
      local_60 = &local_88;
      local_a0 = lVar13;
      local_58 = param_4;
      if (local_89 != '\0') {
        lVar13 = *(longlong *)(uVar11 + 0x118);
        uVar5 = *(uint *)(lVar13 + 0x2f8);
        if ((int)*(uint *)(lVar13 + 0x390) < (int)*(uint *)(lVar13 + 0x2f8)) {
          uVar5 = *(uint *)(lVar13 + 0x390);
        }
        local_a8 = uVar11;
        if (0 < (int)uVar5) {
          lVar14 = *(longlong *)(lVar13 + 0x388);
          local_b8 = *(longlong *)(lVar13 + 0x2f0);
          local_b0 = (ulonglong)uVar5;
          uVar11 = 0;
          do {
            lVar9 = *(longlong *)(lVar14 + 0x40 + uVar11 * 0x50);
            if ((lVar9 != 0) &&
               ((lVar9 == local_78 ||
                ((((local_88 != 0 && (plVar8 = (longlong *)FUN_144741050(local_80), *plVar8 != 0))
                  && (lVar9 = uVar11 * 0x50 + lVar14, *(longlong *)(lVar9 + 0x20) == local_88)) &&
                 (*(int *)(lVar9 + 0x28) == local_80[0])))))) {
              lVar9 = (longlong)*(int *)(local_b8 + 0x30 + uVar11 * 0x38);
              if (lVar9 != 0) {
                lVar10 = *(longlong *)(local_b8 + 0x28 + uVar11 * 0x38);
                lVar9 = lVar9 * 0x50;
                do {
                  pcVar3 = (code *)*param_4;
                  plVar8 = (longlong *)param_4[2];
                  if ((longlong *)param_4[2] == (longlong *)0x0) {
                    plVar8 = plVar6;
                  }
                  local_50 = lVar13;
                  uVar7 = (**(code **)(*plVar8 + 8))();
                  cVar4 = (*pcVar3)(uVar7,&local_50,lVar10);
                  if (cVar4 == '\0') goto LAB_140bb9837;
                  lVar10 = lVar10 + 0x50;
                  lVar9 = lVar9 + -0x50;
                } while (lVar9 != 0);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != local_b0);
          uVar11 = local_a8;
          if (local_89 == '\0') goto LAB_140bb9841;
        }
        lVar13 = *(longlong *)(local_a8 + 0xf0);
        uVar5 = *(uint *)(lVar13 + 0x2f8);
        if ((int)*(uint *)(lVar13 + 0x390) < (int)*(uint *)(lVar13 + 0x2f8)) {
          uVar5 = *(uint *)(lVar13 + 0x390);
        }
        if ((int)uVar5 < 1) {
          cVar4 = '\x01';
        }
        else {
          lVar14 = *(longlong *)(lVar13 + 0x388);
          local_b8 = *(longlong *)(lVar13 + 0x2f0);
          local_b0 = (ulonglong)uVar5;
          uVar11 = 0;
          do {
            lVar9 = *(longlong *)(lVar14 + 0x40 + uVar11 * 0x50);
            if ((lVar9 != 0) &&
               ((lVar9 == local_78 ||
                (((local_88 != 0 && (plVar8 = (longlong *)FUN_144741050(local_80), *plVar8 != 0)) &&
                 ((lVar9 = uVar11 * 0x50 + lVar14, *(longlong *)(lVar9 + 0x20) == local_88 &&
                  (*(int *)(lVar9 + 0x28) == local_80[0])))))))) {
              lVar9 = (longlong)*(int *)(local_b8 + 0x30 + uVar11 * 0x38);
              if (lVar9 != 0) {
                lVar10 = *(longlong *)(local_b8 + 0x28 + uVar11 * 0x38);
                lVar9 = lVar9 * 0x50;
                do {
                  pcVar3 = (code *)*param_4;
                  plVar8 = (longlong *)param_4[2];
                  if ((longlong *)param_4[2] == (longlong *)0x0) {
                    plVar8 = plVar6;
                  }
                  local_50 = lVar13;
                  uVar7 = (**(code **)(*plVar8 + 8))();
                  cVar4 = (*pcVar3)(uVar7,&local_50,lVar10);
                  if (cVar4 == '\0') goto LAB_140bb9837;
                  lVar10 = lVar10 + 0x50;
                  lVar9 = lVar9 + -0x50;
                } while (lVar9 != 0);
              }
            }
            uVar11 = uVar11 + 1;
            cVar4 = local_89;
          } while (uVar11 != local_b0);
        }
        lVar13 = *(longlong *)(local_a8 + 0x268);
        uVar11 = local_a8;
        if ((lVar13 != 0) && (cVar4 != '\0')) {
          uVar5 = *(uint *)(lVar13 + 0x2f8);
          if ((int)*(uint *)(lVar13 + 0x390) < (int)*(uint *)(lVar13 + 0x2f8)) {
            uVar5 = *(uint *)(lVar13 + 0x390);
          }
          if (0 < (int)uVar5) {
            lVar14 = *(longlong *)(lVar13 + 0x388);
            local_b8 = *(longlong *)(lVar13 + 0x2f0);
            local_b0 = (ulonglong)uVar5;
            uVar12 = 0;
            do {
              lVar9 = *(longlong *)(lVar14 + 0x40 + uVar12 * 0x50);
              if ((lVar9 != 0) &&
                 ((lVar9 == local_78 ||
                  ((((local_88 != 0 && (plVar8 = (longlong *)FUN_144741050(local_80), *plVar8 != 0))
                    && (lVar9 = uVar12 * 0x50 + lVar14, *(longlong *)(lVar9 + 0x20) == local_88)) &&
                   (*(int *)(lVar9 + 0x28) == local_80[0])))))) {
                lVar9 = (longlong)*(int *)(local_b8 + 0x30 + uVar12 * 0x38);
                if (lVar9 != 0) {
                  lVar10 = *(longlong *)(local_b8 + 0x28 + uVar12 * 0x38);
                  lVar9 = lVar9 * 0x50;
                  do {
                    pcVar3 = (code *)*param_4;
                    plVar8 = (longlong *)param_4[2];
                    if ((longlong *)param_4[2] == (longlong *)0x0) {
                      plVar8 = plVar6;
                    }
                    local_50 = lVar13;
                    uVar7 = (**(code **)(*plVar8 + 8))();
                    cVar4 = (*pcVar3)(uVar7,&local_50,lVar10);
                    if (cVar4 == '\0') goto LAB_140bb9837;
                    lVar10 = lVar10 + 0x50;
                    lVar9 = lVar9 + -0x50;
                  } while (lVar9 != 0);
                }
              }
              uVar12 = uVar12 + 1;
              uVar11 = local_a8;
            } while (uVar12 != local_b0);
          }
        }
      }
      goto LAB_140bb9841;
    }
    goto LAB_140bb9856;
  }
LAB_140bb9865:
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140bb947c:
  local_89 = '\0';
  goto LAB_140bb9481;
LAB_140bb9837:
  local_89 = '\0';
  uVar11 = local_a8;
LAB_140bb9841:
  lVar13 = local_a0;
  iVar1 = *(int *)(uVar11 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar14 = *(longlong *)(uVar11 + 0x80);
    lVar9 = 0;
    do {
      FUN_140bb992e(&local_70,*(undefined8 *)(lVar14 + lVar9));
      lVar9 = lVar9 + 0x58;
    } while ((longlong)iVar1 * 0x58 - lVar9 != 0);
  }
LAB_140bb9856:
  lVar13 = lVar13 + 0x48;
  if (lVar13 == local_98) goto LAB_140bb9865;
  goto LAB_140bb94ae;
}



// FUNCTION 140bb992e FUN_140bb992e body=356 status=ok
// SIG undefined FUN_140bb992e(void)

void FUN_140bb992e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)*param_1 != '\0') {
    uVar5 = *(uint *)(param_2 + 0x2f8);
    if ((int)*(uint *)(param_2 + 0x390) < (int)*(uint *)(param_2 + 0x2f8)) {
      uVar5 = *(uint *)(param_2 + 0x390);
    }
    if (0 < (int)uVar5) {
      lVar1 = *(longlong *)(param_2 + 0x388);
      local_60 = *(longlong *)(param_2 + 0x2f0);
      local_58 = (ulonglong)uVar5;
      uVar8 = 0;
      do {
        lVar9 = *(longlong *)(lVar1 + 0x40 + uVar8 * 0x50);
        if (lVar9 != 0) {
          if (lVar9 == *(longlong *)param_1[1]) {
LAB_140bb99f5:
            lVar9 = (longlong)*(int *)(local_60 + 0x30 + uVar8 * 0x38);
            if (lVar9 != 0) {
              lVar10 = *(longlong *)(local_60 + 0x28 + uVar8 * 0x38);
              lVar9 = lVar9 * 0x50;
              do {
                puVar2 = (undefined8 *)param_1[3];
                pcVar3 = (code *)*puVar2;
                plVar6 = puVar2 + 4;
                if ((longlong *)puVar2[2] != (longlong *)0x0) {
                  plVar6 = (longlong *)puVar2[2];
                }
                local_50 = param_2;
                uVar7 = (**(code **)(*plVar6 + 8))();
                cVar4 = (*pcVar3)(uVar7,&local_50,lVar10);
                if (cVar4 == '\0') {
                  *(undefined1 *)*param_1 = 0;
                  goto LAB_140bb9a6b;
                }
                lVar10 = lVar10 + 0x50;
                lVar9 = lVar9 + -0x50;
              } while (lVar9 != 0);
            }
          }
          else if ((*(longlong *)param_1[2] != 0) &&
                  (plVar6 = (longlong *)FUN_144741050((longlong *)param_1[2] + 1), *plVar6 != 0)) {
            lVar9 = uVar8 * 0x50 + lVar1;
            if ((*(longlong *)(lVar9 + 0x20) == *(longlong *)param_1[2]) &&
               (*(int *)(lVar9 + 0x28) == (int)((longlong *)param_1[2])[1])) goto LAB_140bb99f5;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_58);
    }
  }
LAB_140bb9a6b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bb9a93 FUN_140bb9a93 body=370 status=ok
// SIG undefined FUN_140bb9a93(void)

undefined8 *
FUN_140bb9a93(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_5c [12];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (longlong)(int)param_2[1];
  if (ABS(*(double *)(*(longlong *)(*param_2 + 0x3c8) + lVar2 * 8)) <= 1e-08) {
LAB_140bb9bf0:
    *param_1 = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 1) = 0x3f800000;
  }
  else {
    lVar1 = *(longlong *)(*param_2 + 0x380);
    if (ABS(*(float *)(lVar1 + lVar2 * 0xc)) <= 0.0001) {
      lVar1 = lVar1 + lVar2 * 0xc;
      if ((ABS(*(float *)(lVar1 + 4)) <= 0.0001) && (ABS(*(float *)(lVar1 + 8)) <= 0.0001))
      goto LAB_140bb9bf0;
    }
    FUN_140bb9e8a(local_5c,param_2);
    local_68 = param_5;
    local_78 = param_3;
    local_70 = param_4;
    FUN_140bb9c06(param_1,(float)*(double *)
                                  (*(longlong *)(*param_2 + 0x3c8) + (longlong)(int)param_2[1] * 8),
                  (longlong)(int)param_2[1] * 0xc + *(longlong *)(*param_2 + 0x380),local_5c);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bb9c06 FUN_140bb9c06 body=644 status=ok
// SIG undefined FUN_140bb9c06(void)

void FUN_140bb9c06(float *param_1,float param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float param_7)

{
  float fVar1;
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
  
  *(undefined1 **)param_1 = &DAT_3f8000003f800000;
  param_1[2] = 1.0;
  fVar10 = param_4[2];
  fVar8 = *param_4;
  fVar1 = param_4[1];
  fVar11 = fVar8;
  if (fVar1 <= fVar8) {
    fVar11 = fVar1;
  }
  if (fVar10 <= fVar11) {
    fVar11 = fVar10;
  }
  if (1e-08 < fVar11) {
    fVar9 = fVar10 * fVar10;
    fVar3 = fVar1 * fVar1;
    fVar6 = fVar8 * fVar8;
    fVar11 = param_3[2];
    fVar14 = fVar11 / param_2;
    fVar5 = *param_3;
    fVar2 = param_3[1];
    fVar13 = fVar2 / param_2;
    param_2 = fVar5 / param_2;
    fVar12 = fVar6 * fVar13;
    fVar7 = fVar6 * fVar14;
    fVar14 = fVar14 * fVar3;
    fVar4 = fVar3 * param_2;
    param_2 = param_2 * fVar9;
    fVar13 = fVar13 * fVar9;
    if (0.0 < param_5) {
      if (fVar8 <= fVar1) {
        fVar8 = fVar1;
      }
      if (fVar8 <= fVar10) {
        fVar8 = fVar10;
      }
      fVar8 = fVar8 / param_5;
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      param_6 = param_6 * fVar8;
    }
    if (fVar7 <= fVar14) {
      fVar7 = fVar14;
    }
    if (fVar7 <= fVar9 * 0.0) {
      fVar7 = fVar9 * 0.0;
    }
    if (fVar12 <= fVar3 * 0.0) {
      fVar12 = fVar3 * 0.0;
    }
    if (fVar12 <= fVar13) {
      fVar12 = fVar13;
    }
    fVar10 = fVar6 * 0.0;
    if (fVar6 * 0.0 <= fVar4) {
      fVar10 = fVar4;
    }
    if (fVar10 <= param_2) {
      fVar10 = param_2;
    }
    fVar7 = param_6 / fVar7;
    fVar12 = param_6 / fVar12;
    param_6 = param_6 / fVar10;
    if (1.0 <= param_6) {
      param_6 = 1.0;
    }
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    *param_1 = param_6;
    param_1[1] = fVar12;
    param_1[2] = fVar7;
    if (1.0 < param_7) {
      fVar11 = fVar11 * fVar7;
      fVar2 = fVar2 * fVar12;
      fVar5 = fVar5 * param_6;
      fVar10 = fVar5;
      if (fVar2 <= fVar5) {
        fVar10 = fVar2;
      }
      if (fVar11 <= fVar10) {
        fVar10 = fVar11;
      }
      fVar10 = fVar10 * param_7;
      fVar1 = (float)(~-(uint)(fVar10 < fVar5) & (uint)param_6 |
                     (uint)(fVar10 / fVar5) & -(uint)(fVar10 < fVar5));
      fVar8 = (float)(~-(uint)(fVar10 < fVar2) & (uint)fVar12 |
                     (uint)(fVar10 / fVar2) & -(uint)(fVar10 < fVar2));
      fVar10 = (float)(~-(uint)(fVar10 < fVar11) & (uint)fVar7 |
                      (uint)(fVar10 / fVar11) & -(uint)(fVar10 < fVar11));
      if (1.0 <= fVar1) {
        fVar1 = 1.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      *param_1 = fVar1;
      param_1[1] = fVar8;
      param_1[2] = fVar10;
    }
  }
  return;
}



// FUNCTION 140bb9e8a FUN_140bb9e8a body=1199 status=ok
// SIG undefined FUN_140bb9e8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140bb9e8a(float *param_1,longlong *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  longlong *local_f0 [2];
  ulonglong local_e0;
  
  auVar10 = _DAT_149934d80;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar11 = *param_2;
  lVar14 = (longlong)(int)param_2[1];
  pdVar1 = (double *)(*(longlong *)(lVar11 + 0x3f8) + lVar14 * 0x20);
  local_158 = *pdVar1;
  dStack_150 = pdVar1[1];
  pdVar1 = (double *)(*(longlong *)(lVar11 + 0x3f8) + 0x10 + lVar14 * 0x20);
  local_148 = *pdVar1;
  dStack_140 = pdVar1[1];
  pdVar1 = (double *)(*(longlong *)(lVar11 + 0x3e0) + lVar14 * 0x18);
  local_138 = *pdVar1;
  dStack_130 = pdVar1[1];
  local_128 = *(double *)(*(longlong *)(lVar11 + 0x3e0) + 0x10 + lVar14 * 0x18);
  dStack_120 = 0.0;
  local_118 = _DAT_149934d80;
  local_108 = 1.0;
  uStack_100 = 0;
  FUN_1449c5bc8(lVar14 * 0x30 + *(longlong *)(lVar11 + 0x110),&local_188);
  lVar11 = (longlong)(int)param_2[1] * 0x10;
  lVar14 = (longlong)*(int *)(*(longlong *)(*param_2 + 0x1b8) + 8 + lVar11);
  dVar9 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  if (lVar14 != 0) {
    plVar16 = *(longlong **)(*(longlong *)(*param_2 + 0x1b8) + lVar11);
    plVar2 = plVar16 + lVar14;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    do {
      lVar11 = *plVar16;
      dVar19 = 0.0;
      dVar20 = 0.0;
      dVar5 = 0.0;
      if (*(longlong *)(lVar11 + 8) != 0) {
        plVar15 = (longlong *)(*(longlong *)(lVar11 + 8) + 8);
        plVar12 = (longlong *)FUN_140f61df0();
        do {
          if (*plVar12 == *plVar15) {
            dVar19 = 0.0;
            dVar20 = 0.0;
            dVar5 = 0.0;
            if (lVar11 != 0) {
              FUN_140bba352(lVar11,local_f0);
              bVar17 = local_f0[0] != param_2;
              lVar11 = FUN_140bba33a(lVar11);
              uVar13 = (ulonglong)(((uint)bVar17 * 2 + (uint)bVar17) * 0x20);
              pdVar1 = (double *)(lVar11 + 0x20 + uVar13);
              pdVar3 = (double *)(lVar11 + 0x30 + uVar13);
              dVar20 = *pdVar1 - local_138;
              dVar19 = pdVar1[1] - dStack_130;
              dVar4 = *pdVar3 - local_128;
              dVar5 = pdVar3[1] - dStack_120;
              local_198._8_4_ = SUB84(dVar5,0);
              local_198._0_8_ = dVar4;
              local_198._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
              local_1a8 = local_158;
              dStack_1a0 = dStack_150;
              local_1b8 = -local_158;
              dStack_1b0 = -dStack_150;
              dVar23 = local_148 * -1.0;
              dVar25 = dStack_140 * 1.0;
              local_1c8._8_4_ = SUB84(dVar19,0);
              local_1c8._0_8_ = dVar20;
              local_1c8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
              local_1d8._8_4_ = SUB84(dVar23,0);
              local_1d8._0_8_ = dStack_1b0;
              local_1d8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
              dVar26 = dVar20 * dVar23 - local_1b8 * dVar4;
              dVar5 = dVar19 * local_1b8 - dVar20 * dStack_1b0;
              dVar6 = dVar4 * dStack_1b0 - (double)local_1c8._8_8_ * dVar23;
              dVar6 = dVar6 + dVar6;
              dVar26 = dVar26 + dVar26;
              dVar5 = dVar5 + dVar5;
              auVar24 = divpd(auVar10,local_118);
              dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118._0_8_)) &
                               auVar24._0_8_) *
                       ((dVar5 * dStack_1b0 - dVar26 * (double)local_1d8._8_8_) +
                       dVar25 * dVar6 + dVar20);
              dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118._8_8_)) &
                               auVar24._8_8_) *
                       (local_158 * dVar5 + dVar23 * dVar6 +
                       dVar25 * dVar26 + (double)local_1c8._8_8_);
              dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_108)) &
                              (ulonglong)(1.0 / local_108)) *
                      (dVar25 * dVar5 + dVar4 + (dVar26 * local_1b8 - dVar6 * dStack_1b0));
            }
            goto LAB_140bba309;
          }
          plVar15 = (longlong *)plVar15[1];
        } while (plVar15 != (longlong *)0x0);
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar5 = 0.0;
      }
LAB_140bba309:
      if (dVar7 <= ABS(dVar5)) {
        dVar7 = ABS(dVar5);
      }
      if (dVar8 <= ABS(dVar20)) {
        dVar8 = ABS(dVar20);
      }
      if (dVar9 <= ABS(dVar19)) {
        dVar9 = ABS(dVar19);
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar2);
  }
  fVar18 = (float)((local_170 - local_188) * 0.5);
  fVar21 = (float)((local_168 - local_180) * 0.5);
  fVar22 = (float)((local_160 - local_178) * 0.5);
  if ((double)fVar22 <= dVar7) {
    fVar22 = (float)dVar7;
  }
  if ((double)fVar21 <= dVar8) {
    fVar21 = (float)dVar8;
  }
  if ((double)fVar18 <= dVar9) {
    fVar18 = (float)dVar9;
  }
  *param_1 = fVar18;
  param_1[1] = fVar21;
  param_1[2] = fVar22;
  if ((local_e0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140bba33a FUN_140bba33a body=23 status=ok
// SIG undefined FUN_140bba33a(void)

longlong FUN_140bba33a(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0x18) * 0x310 +
         *(longlong *)(*(longlong *)(param_1 + 8) + 0xe8);
}



// FUNCTION 140bba352 FUN_140bba352 body=30 status=ok
// SIG undefined FUN_140bba352(void)

void FUN_140bba352(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0xf8) +
           (longlong)*(int *)(param_1 + 0x18) * 0x10);
  uVar2 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 140bba370 FUN_140bba370 body=38 status=ok
// SIG undefined FUN_140bba370(void)

undefined8 FUN_140bba370(undefined8 param_1,int param_2)

{
  FUN_140bba396();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bba396 FUN_140bba396 body=162 status=ok
// SIG undefined FUN_140bba396(void)

void FUN_140bba396(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b32b680;
  FUN_1403e0ff1(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  param_1[0x32] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
    FUN_140115c12(param_1 + 0x34,0);
  }
  param_1[0x33] = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bba438 FUN_140bba438 body=2227 status=ok
// SIG undefined FUN_140bba438(void)

undefined8
FUN_140bba438(undefined8 param_1,longlong *param_2,undefined8 param_3,char *param_4,int *param_5)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined8 *puVar11;
  int iVar12;
  bool bVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_88 [39];
  byte local_61;
  undefined8 local_60;
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    local_61 = *(byte *)((longlong)param_5 + 0xad) & 3;
LAB_140bba50d:
    bVar10 = 0;
  }
  else {
    if ((((*(double *)(param_5 + 10) != *(double *)(param_5 + 4)) ||
         (NAN(*(double *)(param_5 + 10)) || NAN(*(double *)(param_5 + 4)))) ||
        (*(double *)(param_5 + 0xc) != *(double *)(param_5 + 6))) ||
       (NAN(*(double *)(param_5 + 0xc)) || NAN(*(double *)(param_5 + 6)))) {
      bVar16 = false;
    }
    else {
      bVar16 = *(double *)(param_5 + 8) == *(double *)(param_5 + 0xe);
    }
    if (((*(double *)(param_5 + 0x16) != *(double *)(param_5 + 0x10)) ||
        (NAN(*(double *)(param_5 + 0x16)) || NAN(*(double *)(param_5 + 0x10)))) ||
       ((*(double *)(param_5 + 0x18) != *(double *)(param_5 + 0x12) ||
        (NAN(*(double *)(param_5 + 0x18)) || NAN(*(double *)(param_5 + 0x12)))))) {
      bVar13 = false;
    }
    else {
      bVar13 = *(double *)(param_5 + 0x14) == *(double *)(param_5 + 0x1a);
    }
    local_61 = *(byte *)((longlong)param_5 + 0xad) & 3;
    if (bVar16) {
      local_61 = local_61 | 4;
    }
    if (bVar13) {
      local_61 = local_61 | 8;
    }
    if (param_5[0x2a] == -1) {
      local_61 = local_61 | 0x10;
    }
    if (*param_5 == -1) {
      local_61 = local_61 | 0x20;
    }
    if (((float)param_5[0x28] != 0.0) || (NAN((float)param_5[0x28]))) goto LAB_140bba50d;
    bVar10 = 0x40;
  }
  local_61 = local_61 | bVar10;
  (**(code **)(*param_2 + 0x178))(param_2,&local_61,8);
  bVar10 = local_61;
  *(byte *)((longlong)param_5 + 0xad) = local_61 & 3 | *(byte *)((longlong)param_5 + 0xad) & 0xfc;
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_5[1] = *piVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  *param_4 = '\x01';
  cVar5 = FUN_1401b2392(param_5 + 4,param_2);
  cVar6 = *param_4;
  if (cVar5 == '\0') {
    cVar6 = '\0';
  }
  *param_4 = cVar6;
  cVar5 = FUN_1406076b2(param_5 + 0x10,param_2);
  cVar6 = *param_4;
  if (cVar5 == '\0') {
    cVar6 = '\0';
  }
  *param_4 = cVar6;
  if ((bVar10 & 4) == 0) {
    cVar5 = FUN_1401b2392(param_5 + 10,param_2);
    cVar6 = '\0';
    if (cVar5 != '\0') {
      cVar6 = *param_4;
    }
    *param_4 = cVar6;
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_5 + 0xe) = *(undefined8 *)(param_5 + 8);
    param_5[10] = param_5[4];
    param_5[0xb] = param_5[5];
    param_5[0xc] = param_5[6];
    param_5[0xd] = param_5[7];
  }
  if ((bVar10 & 8) == 0) {
    cVar5 = FUN_1406076b2(param_5 + 0x16);
    cVar6 = '\0';
    if (cVar5 != '\0') {
      cVar6 = *param_4;
    }
    *param_4 = cVar6;
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_5 + 0x1a) = *(undefined8 *)(param_5 + 0x14);
    param_5[0x16] = param_5[0x10];
    param_5[0x17] = param_5[0x11];
    param_5[0x18] = param_5[0x12];
    param_5[0x19] = param_5[0x13];
  }
  cVar5 = FUN_1401b2392(param_5 + 0x1c,param_2);
  cVar6 = *param_4;
  if (cVar5 == '\0') {
    cVar6 = '\0';
  }
  *param_4 = cVar6;
  cVar5 = FUN_1401b2392(param_5 + 0x22,param_2);
  cVar6 = *param_4;
  if (cVar5 == '\0') {
    cVar6 = '\0';
  }
  *param_4 = cVar6;
  if ((bVar10 & 0x40) == 0) {
    piVar2 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_5 + 0x28,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_5[0x28] = *piVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_5[0x28] = 0;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (*param_4 == '\x01')) {
    param_5[2] = (int)(float)SQRT((*(double *)(param_5 + 0xe) - *(double *)(param_5 + 0x20)) *
                                  (*(double *)(param_5 + 0xe) - *(double *)(param_5 + 0x20)) +
                                  (*(double *)(param_5 + 10) - *(double *)(param_5 + 0x1c)) *
                                  (*(double *)(param_5 + 10) - *(double *)(param_5 + 0x1c)) +
                                  (*(double *)(param_5 + 0xc) - *(double *)(param_5 + 0x1e)) *
                                  (*(double *)(param_5 + 0xc) - *(double *)(param_5 + 0x1e)));
  }
  if ((bVar10 & 0x10) == 0) {
    piVar2 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_5 + 0x2a,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_5[0x2a] = *piVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_5[0x2a] = -1;
  }
  (**(code **)(*param_2 + 0x120))(param_2,param_5 + 0x2c);
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (uVar7 = (**(code **)(*param_2 + 0x48))(param_2), uVar7 < 0x13)) {
    local_58 = 0;
    (**(code **)(*param_2 + 0x150))(param_2,&local_58);
    FUN_140871de8(param_5 + 0x2e,local_58);
    goto LAB_140bba8d2;
  }
  piVar2 = param_5 + 0x2e;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3c9a0);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3c9a0);
  if (iVar8 < 7) {
    (**(code **)(*param_2 + 0x120))(param_2,piVar2);
    local_48 = 0;
    (**(code **)(*param_2 + 0x120))(param_2,&local_48);
    local_60 = FUN_14479d2ce(&local_48);
    FUN_147a912f4(&local_58);
    param_5[0x30] = (uint)local_58;
    param_5[0x31] = local_58._4_4_;
    param_5[0x32] = iStack_50;
    param_5[0x33] = iStack_4c;
    piVar2 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_5 + 0x34,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_5[0x34] = *piVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    goto LAB_140bba8d2;
  }
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    FUN_145781618(piVar2);
  }
  (**(code **)(*param_2 + 0x120))(param_2,piVar2);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5 + 0x34,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_5[0x34] = *piVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = (uint *)(param_5 + 0x30);
  if ((((param_5[0x31] == 0) || (uVar7 = *puVar1, (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7))
     || (((plVar14 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
          plVar14 == (longlong *)0x0 || ((int)plVar14[2] != param_5[0x31])) ||
         (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (*plVar14 == 0)))))) {
    local_48._0_4_ = 0;
    iVar8 = 0;
    uVar7 = (uint)local_48;
  }
  else {
    uVar7 = *(uint *)(*plVar14 + 0xc);
    local_48 = (ulonglong)uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar8 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar7 = (uint)local_48;
      if (bVar16) {
        iVar8 = iVar12;
      }
    }
  }
  local_48._0_4_ = uVar7;
  local_48 = CONCAT44(iVar8,(uint)local_48);
  (**(code **)(*param_2 + 0x120))();
  if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_140bba8d2;
  if (local_48._4_4_ == 0) {
LAB_140bbaa44:
    local_60 = 0;
  }
  else {
    local_60 = 0;
    if ((-1 < (int)(uint)local_48) && ((int)(uint)local_48 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)(((uint)local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_48 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != local_48._4_4_ || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))
         ) goto LAB_140bbaa44;
      local_60 = *puVar11;
    }
  }
  FUN_140bbacec(&local_58);
  *puVar1 = (uint)local_58;
  param_5[0x31] = local_58._4_4_;
  param_5[0x32] = iStack_50;
  param_5[0x33] = iStack_4c;
  if (*(longlong *)(param_5 + 0x32) != 0) {
    cVar6 = FUN_144729dda(puVar1);
    if (cVar6 == '\0') {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = *(longlong **)(param_5 + 0x32);
    }
    if ((plVar14 != (longlong *)0x0) && (param_5[0x34] != -1)) {
      uVar9 = FUN_14479d2ce(puVar1);
      cVar6 = FUN_1409d2f40(piVar2,uVar9);
      if (cVar6 != '\0') {
        *(undefined1 *)(param_5 + 0x35) = 0;
        param_5[0x2e] = 0;
        param_5[0x2f] = 0;
        uVar9 = (**(code **)(*plVar14 + 0x18))(plVar14,piVar2);
        FUN_14485c47a(piVar2,uVar9);
      }
    }
  }
  *(undefined1 *)(param_5 + 0x35) = 1;
LAB_140bba8d2:
  (**(code **)(*param_2 + 0x120))(param_2,param_5 + 0x36);
  (**(code **)(*param_2 + 0x160))(param_2,param_5 + 0x3c);
  if ((bVar10 & 0x20) == 0) {
    piVar2 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_5,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_5);
      }
    }
    else {
      *param_5 = *piVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *param_5 = -1;
  }
  if ((char)bVar10 < '\0') {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_5 + 0x2b) = 0xff;
    }
  }
  else {
    puVar4 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5 + 0x2b,1);
    }
    else {
      *(undefined1 *)(param_5 + 0x2b) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140bbacec FUN_140bbacec body=76 status=ok
// SIG undefined FUN_140bbacec(void)

undefined8 * FUN_140bbacec(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_144a87850();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 140bbad38 FUN_140bbad38 body=301 status=ok
// SIG undefined FUN_140bbad38(void)

void FUN_140bbad38(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_508 [32];
  undefined1 local_4e8 [1216];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_508;
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_140bbb1b6(uVar3,&DAT_14cb94c28,*(longlong *)(param_1 + 0x48) + 0x540);
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar4 = *(longlong *)(param_1 + 0x48);
      FUN_140bbae66(local_4e8);
      FUN_140c175ce(uVar3,local_4e8,lVar4 + 0x540);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        FUN_14480f766(lVar4 + 0x28);
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbae66 FUN_140bbae66 body=650 status=ok
// SIG undefined FUN_140bbae66(void)

undefined4 * FUN_140bbae66(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0x3f800000;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0x3f800000;
  param_1[0x40] = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x52] = 0x3f800000;
  param_1[0x56] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  param_1[100] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x68] = 0x3f800000;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  param_1[0x7a] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0x3f800000;
  param_1[0x82] = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  param_1[0x90] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  param_1[0x94] = 0x3f800000;
  param_1[0x98] = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  param_1[0xa6] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  param_1[0xaa] = 0x3f800000;
  param_1[0xae] = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  param_1[0xbc] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  param_1[0xc0] = 0x3f800000;
  param_1[0xc4] = 0;
  *(undefined8 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  param_1[0xd2] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  param_1[0xd6] = 0x3f800000;
  param_1[0xda] = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe2) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xde) = 0;
  param_1[0xe8] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  param_1[0xec] = 0x3f800000;
  param_1[0xee] = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf6) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  param_1[0xfc] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0xfe) = 0;
  param_1[0x100] = 0x3f800000;
  param_1[0x104] = 0;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  param_1[0x112] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  param_1[0x116] = 0x3f800000;
  param_1[0x11a] = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x126) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  param_1[0x128] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x12a) = 0;
  param_1[300] = 0x3f800000;
  FUN_140bbb0f0(param_1);
  return param_1;
}



// FUNCTION 140bbb0f0 FUN_140bbb0f0 body=197 status=ok
// SIG undefined FUN_140bbb0f0(void)

void FUN_140bbb0f0(undefined4 *param_1)

{
  param_1[0x56] = 0x40a00000;
  param_1[0x6c] = 0x3f800000;
  param_1[0x82] = 0x40a00000;
  param_1[0x98] = 0x3e4ccccd;
  param_1[0xae] = 0x40000000;
  param_1[0xc4] = 0x3e800000;
  param_1[0xee] = 0x3f000000;
  param_1[0xda] = 0x3f800000;
  param_1[0x104] = 0x3f800000;
  param_1[0x11a] = 0x40400000;
  *param_1 = 0x459c4000;
  param_1[0x14] = 0x447a0000;
  param_1[0x2a] = 0x44fa0000;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1aa) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  return;
}



// FUNCTION 140bbb1b6 FUN_140bbb1b6 body=159 status=ok
// SIG undefined FUN_140bbb1b6(void)

void FUN_140bbb1b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bbb256(param_1,0);
  FUN_140c17710(param_1,&local_40,param_3);
  lVar1 = local_40;
  if ((longlong)local_38 != 0) {
    lVar2 = 0;
    do {
      FUN_140c171fe(param_1,param_2,0,*(undefined4 *)(lVar1 + lVar2));
      lVar2 = lVar2 + 4;
    } while ((longlong)local_38 * 4 != lVar2);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bbb256 FUN_140bbb256 body=255 status=ok
// SIG undefined FUN_140bbb256(void)

undefined4 FUN_140bbb256(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar7 = FUN_1447210f0();
    FUN_140a702f6(&local_40,uVar7);
    if (local_38 != (longlong *)0x0) {
      iVar5 = (int)local_38[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(local_38 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_38;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_40 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          cVar4 = FUN_140bbb356(local_40,param_1 + 0x88,*(undefined8 *)(param_1 + 0x40),0);
          if (cVar4 != '\0') {
            uVar6 = FUN_14119101a(local_40,param_1 + 0x88,*(undefined8 *)(param_1 + 0x40),0);
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        goto LAB_140bbb2ee;
      }
    }
  }
  uVar6 = 0;
LAB_140bbb2ee:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140bbb356 FUN_140bbb356 body=410 status=ok
// SIG undefined FUN_140bbb356(void)

bool FUN_140bbb356(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 ***local_90;
  undefined1 local_88 [40];
  undefined4 local_60 [2];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *param_2;
  if (*(char *)((longlong)param_2 + 0x7a) == '\x01') {
    local_88[0] = 0;
    if (param_4 == 0) {
      local_60[0] = 0;
      FUN_1456bb102(local_88,param_3);
    }
    else {
      FUN_1447f8f6a(local_88,param_4);
      FUN_1447f8ea6(local_60,param_4 + 0x28);
    }
    FUN_1447c3578(param_2 + 0x10,local_58,local_88);
    uVar5 = FUN_14030a32e(local_58);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar6 = local_58;
      if (0x18 < local_40) {
        ppppuVar6 = (undefined8 ****)local_58[0];
      }
      (*pcVar2)(ppppuVar6);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  else {
    uVar5 = 0;
  }
  FUN_140a70e7e(param_1,local_88,param_3);
  local_98 = uVar5;
  lVar4 = FUN_140a71094(param_1,uVar1,param_3,local_88);
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    local_90 = (undefined8 ****)0x0;
    FUN_14485c47a(&local_90,param_3);
    local_58[0] = local_90;
    iVar3 = FUN_14105fa9c(lVar4 + 0x30,(uint)((ulonglong)local_90 >> 0x20) ^ (uint)local_90);
    bVar7 = iVar3 != -1;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbb4fa FUN_140bbb4fa body=372 status=ok
// SIG undefined FUN_140bbb4fa(void)

ulonglong * FUN_140bbb4fa(ulonglong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x500000000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (ulonglong)&DAT_14a171d50;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = (ulonglong)&DAT_14a171d50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x11) = 8;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0xb;
  uVar2 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar2 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x13) = uVar2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x18) = 8;
  *(undefined1 *)(param_1 + 0x19) = 0xb;
  uVar2 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar2 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x1a) = uVar2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 8;
  *(undefined1 *)(param_1 + 0x20) = 0xb;
  uVar2 = 0xb;
  if ((DAT_14c9a9174 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_28 = "NewChoice";
  local_20 = 9;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  *param_1 = (ulonglong)uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 7,0);
  }
  param_1[6] = (ulonglong)&DAT_14cb70058;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_140115c12(param_1 + 0xb,0);
  }
  param_1[10] = (ulonglong)&DAT_14cb70058;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbb670 FUN_140bbb670 body=462 status=ok
// SIG undefined FUN_140bbb670(void)

void FUN_140bbb670(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2d0);
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  param_2[0x1d] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0xffffffff;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x144) = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_2 + 0x174) = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_2 + 0x17c) = 0x3ff00000;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x34] = 0x3ff0000000000000;
  param_2[0x35] = 0x3ff0000000000000;
  param_2[0x36] = 0x3ff0000000000000;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  param_2[0x39] = 0;
  *param_2 = &PTR_FUN_14ada5720;
  param_2[0x49] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) | 0xf;
  *(undefined4 *)((longlong)param_2 + 0x254) = 0;
  param_2[0x3a] = &PTR_LAB_14adc1560;
  param_2[0x4f] = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined8 *)((longlong)param_2 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x28c) = 0;
  param_2[0x53] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x57] = 0;
  param_2[0x58] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  return;
}



// FUNCTION 140bbb840 FUN_140bbb840 body=320 status=ok
// SIG undefined FUN_140bbb840(void)

void FUN_140bbb840(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    plStack_30 = *(longlong **)(param_1 + 0x40);
    if (plStack_30 == (longlong *)0x0) {
LAB_140bbb933:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar8 = true;
    }
    else {
      iVar7 = (int)plStack_30[1];
      do {
        if (iVar7 == 0) goto LAB_140bbb933;
        LOCK();
        iVar6 = (int)plStack_30[1];
        bVar8 = iVar7 == iVar6;
        if (bVar8) {
          *(int *)(plStack_30 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar8);
      local_38 = *(undefined8 *)(param_1 + 0x38);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar8 = false;
    }
    plVar5 = plStack_30;
    FUN_140bbb982(lVar4,&local_38);
    plVar2 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (!bVar8) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    plVar5 = *(longlong **)(param_1 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bbb982 FUN_140bbb982 body=111 status=ok
// SIG undefined FUN_140bbb982(void)

void FUN_140bbb982(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0xf1) & 4) == 0) {
    local_20 = param_2;
    iVar1 = FUN_140bbb9f2(param_1 + 0x48);
    if (0 < iVar1) {
      FUN_140bbbaf2(param_1,param_2);
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_140327036(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bbb9f2 FUN_140bbb9f2 body=255 status=ok
// SIG undefined FUN_140bbb9f2(void)

int FUN_140bbb9f2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar6 = iVar3 + 1;
      if (iVar3 + 1 < iVar7) {
        iVar6 = iVar7;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar4 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar6;
        if (lVar8 <= lVar11) break;
        lVar2 = *plVar9;
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 2;
        iVar5 = iVar4;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar6 = iVar5 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar6 << 4);
        }
        iVar13 = iVar13 + iVar6;
      }
      else {
        FUN_140bef143(plVar1 + lVar10 * 2,iVar6);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar5;
    } while (lVar11 < lVar8);
    *(int *)(param_1 + 1) = iVar13;
    iVar7 = iVar7 - iVar13;
  }
  return iVar7;
}



// FUNCTION 140bbbaf2 FUN_140bbbaf2 body=717 status=ok
// SIG undefined FUN_140bbbaf2(void)

void FUN_140bbbaf2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x58) + 0x40;
    lVar12 = (longlong)*(int *)(param_1 + 0x60) * 0x78;
    do {
      (**(code **)(*(longlong *)*param_2 + 8))
                ((longlong *)*param_2,&local_d0,*(undefined8 *)(lVar11 + -0x40));
      lVar7 = local_d0;
      if (local_d0 != 0) {
        local_a8 = (undefined ***)0x0;
        local_98 = &PTR_LAB_14b430880;
        local_b8 = FUN_143e4e618;
        local_e0 = local_d0;
        local_d8 = local_c8;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
          UNLOCK();
        }
        puVar1 = (undefined8 *)(lVar11 + -0x10);
        local_90 = param_1;
        if (*(int *)(lVar11 + -8) < 1) {
          local_c0 = &local_e0;
          FUN_140bbbed0(puVar1,&local_c0);
        }
        else {
          lVar4 = *(longlong *)*puVar1;
          local_c0 = &local_e0;
          FUN_140bbbed0(puVar1,&local_c0);
          if (lVar4 == lVar7) {
            if (*(longlong *)(lVar11 + 0x18) != 0) {
              FUN_14480f766(local_e0 + 0x10);
            }
            *(undefined8 *)(lVar11 + 0x18) = 0;
          }
        }
        pcVar8 = local_b8;
        if (*(int *)(lVar11 + -8) < 1) {
          *(undefined1 *)(lVar11 + 0x20) = 0;
          *(undefined8 *)(lVar11 + 0x24) = 0;
          FUN_140327094(lVar11,lVar11 + 0x20);
          *(ulonglong *)(lVar11 + 0x30) =
               ((ulonglong)*(byte *)(lVar11 + 0x20) + (longlong)*(int *)(lVar11 + 0x24) * 2 &
               *(ulonglong *)(lVar11 + -0x30)) << (*(byte *)(lVar11 + -0x28) & 0x3f);
        }
        else {
          uVar5 = *(undefined8 *)(lVar11 + -0x10);
          pppuVar10 = local_a8;
          if (local_a8 == (undefined ***)0x0) {
            pppuVar10 = &local_98;
          }
          uVar9 = (*(code *)(*pppuVar10)[1])();
          (*pcVar8)(&local_c0,uVar9,uVar5);
          *(longlong **)(lVar11 + 0x18) = local_c0;
          (**(code **)(*(longlong *)**(undefined8 **)(lVar11 + -0x10) + 0x18))
                    ((longlong *)**(undefined8 **)(lVar11 + -0x10),&local_c0);
          fVar13 = 0.0;
          if (local_c0._4_1_ == '\x01') {
            fVar13 = (float)local_c0;
            if (1.0 <= (float)local_c0) {
              fVar13 = 1.0;
            }
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
          }
          FUN_140c5f260(lVar11 + -0x40,fVar13);
        }
        if (local_b8 != (code *)0x0) {
          pppuVar10 = local_a8;
          if (local_a8 == (undefined ***)0x0) {
            pppuVar10 = &local_98;
          }
          (*(code *)(*pppuVar10)[2])();
        }
        plVar6 = local_d8;
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_d8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        FUN_140c5f474(param_1);
      }
      plVar6 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_c8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar11 = lVar11 + 0x78;
      lVar12 = lVar12 + -0x78;
    } while (lVar12 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bbbdc0 FUN_140bbbdc0 body=116 status=ok
// SIG undefined FUN_140bbbdc0(void)

undefined8 * FUN_140bbbdc0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_3 != 0) && ((longlong)*(int *)(param_1 + 0x98) != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) << 4;
    do {
      lVar1 = (**(code **)(*(longlong *)*puVar2 + 8))();
      if (lVar1 == param_3) {
        if (puVar2 != (undefined8 *)0x0) {
          *param_2 = *puVar2;
          lVar3 = puVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        break;
      }
      puVar2 = puVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140bbbe48 FUN_140bbbe48 body=136 status=ok
// SIG undefined FUN_140bbbe48(void)

void FUN_140bbbe48(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar4 = FUN_145cd9fe6();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    return;
  }
  return;
}



// FUNCTION 140bbbed0 FUN_140bbbed0 body=240 status=ok
// SIG undefined FUN_140bbbed0(void)

void FUN_140bbbed0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      lVar10 = (longlong)iVar6;
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar8 = iVar6;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar7 = iVar4;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 2;
        iVar7 = iVar8;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar7 - iVar6;
      if (bVar5 == false) {
        if (iVar12 != iVar6) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar4 << 4);
        }
        iVar12 = iVar12 + iVar4;
      }
      else {
        FUN_140e2ea73(plVar2 + lVar10 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar6 = iVar7;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}


