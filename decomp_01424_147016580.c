// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147016580 FUN_147016580 body=848 status=ok
// SIG undefined FUN_147016580(void)

void FUN_147016580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined2 *local_a0;
  int local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x110);
  FUN_140212e80(param_2,L"%s\r\n",L"Dumping runtime dependency map contents...");
  if (*(int *)(param_1 + 0x144) < *(int *)(param_1 + 0x118)) {
    lVar2 = param_1 + 0x120;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0x138) == 0) {
      local_c4 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_c4 = *(int *)(param_1 + 0x138);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_c0 = lVar2;
    local_90 = plVar1;
    if ((local_78._4_4_ != local_c4) || (local_78 = uVar4, uStack_60 != lVar2)) {
      do {
        local_78 = uVar4;
        lVar2 = *local_90;
        lVar10 = (longlong)iVar5 * 0x20;
        uVar3 = *(undefined4 *)(lVar2 + 0x10 + lVar10);
        puVar6 = (undefined4 *)FUN_147020fb8(param_1,*(undefined4 *)(lVar2 + lVar10));
        local_b8 = *puVar6;
        uStack_b4 = puVar6[1];
        uStack_b0 = puVar6[2];
        uStack_ac = puVar6[3];
        local_a8 = puVar6[4];
        FUN_147015f28(&local_b8,&local_68);
        FUN_147021ac6(&local_68,&local_a0);
        puVar9 = local_a0;
        if (local_98 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        FUN_140212e80(param_2,L"%s [Num=%d]:\r\n",puVar9,uVar3);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = (longlong)*(int *)(lVar2 + lVar10 + 0x10);
        if (lVar8 < 1) {
          FUN_140212e80(param_2,&DAT_149e02010);
        }
        else {
          lVar2 = *(longlong *)(lVar2 + lVar10 + 8);
          lVar10 = 0;
          do {
            iVar5 = *(int *)(lVar2 + lVar10);
            if ((((longlong)iVar5 < 0) || (*(int *)(param_1 + 0x108) <= iVar5)) ||
               (puVar6 = (undefined4 *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x100)),
               puVar6 == (undefined4 *)0x0)) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = (undefined4 *)FUN_147020fb8(param_1,*puVar6);
            }
            local_a8 = puVar6[4];
            local_b8 = *puVar6;
            uStack_b4 = puVar6[1];
            uStack_b0 = puVar6[2];
            uStack_ac = puVar6[3];
            FUN_147015f28(&local_b8,&local_68);
            FUN_147021ac6(&local_68,&local_a0);
            puVar9 = local_a0;
            if (local_98 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            FUN_140212e80(param_2,L"\t%s\r\n",puVar9);
            if (local_a0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar10 = lVar10 + 4;
          } while (lVar8 * 4 != lVar10);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != local_c4));
    }
  }
  else {
    pwVar7 = *(wchar_t **)(param_2 + 8);
    if (*(wchar_t **)(param_2 + 0x10) <= pwVar7 + 0xb) {
      FUN_140213274(param_2,0xb);
      pwVar7 = *(wchar_t **)(param_2 + 8);
    }
    builtin_wcsncpy(pwVar7,L"Empty map\r\n",0xb);
    *(wchar_t **)(param_2 + 8) = pwVar7 + 0xb;
  }
  FUN_140212e80(param_2,L"Total Num = %u\r\n",*(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x144))
  ;
  local_90 = (longlong *)0x0;
  FUN_142ae56c8(plVar1,&local_90);
  FUN_140212e80(param_2,L"%s = %u KB\r\n",L"Total Size",(ulonglong)local_90 >> 10);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470168d2 FUN_1470168d2 body=848 status=ok
// SIG undefined FUN_1470168d2(void)

void FUN_1470168d2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined2 *local_a0;
  int local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x160);
  FUN_140212e80(param_2,L"%s\r\n",L"Dumping runtime referencer map contents...");
  if (*(int *)(param_1 + 0x194) < *(int *)(param_1 + 0x168)) {
    lVar2 = param_1 + 0x170;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0x188) == 0) {
      local_c4 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_c4 = *(int *)(param_1 + 0x188);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_c0 = lVar2;
    local_90 = plVar1;
    if ((local_78._4_4_ != local_c4) || (local_78 = uVar4, uStack_60 != lVar2)) {
      do {
        local_78 = uVar4;
        lVar2 = *local_90;
        lVar10 = (longlong)iVar5 * 0x20;
        uVar3 = *(undefined4 *)(lVar2 + 0x10 + lVar10);
        puVar6 = (undefined4 *)FUN_147020fb8(param_1,*(undefined4 *)(lVar2 + lVar10));
        local_b8 = *puVar6;
        uStack_b4 = puVar6[1];
        uStack_b0 = puVar6[2];
        uStack_ac = puVar6[3];
        local_a8 = puVar6[4];
        FUN_147015f28(&local_b8,&local_68);
        FUN_147021ac6(&local_68,&local_a0);
        puVar9 = local_a0;
        if (local_98 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        FUN_140212e80(param_2,L"%s [Num=%d]:\r\n",puVar9,uVar3);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = (longlong)*(int *)(lVar2 + lVar10 + 0x10);
        if (lVar8 < 1) {
          FUN_140212e80(param_2,&DAT_149e02010);
        }
        else {
          lVar2 = *(longlong *)(lVar2 + lVar10 + 8);
          lVar10 = 0;
          do {
            iVar5 = *(int *)(lVar2 + lVar10);
            if ((((longlong)iVar5 < 0) || (*(int *)(param_1 + 0x108) <= iVar5)) ||
               (puVar6 = (undefined4 *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x100)),
               puVar6 == (undefined4 *)0x0)) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = (undefined4 *)FUN_147020fb8(param_1,*puVar6);
            }
            local_a8 = puVar6[4];
            local_b8 = *puVar6;
            uStack_b4 = puVar6[1];
            uStack_b0 = puVar6[2];
            uStack_ac = puVar6[3];
            FUN_147015f28(&local_b8,&local_68);
            FUN_147021ac6(&local_68,&local_a0);
            puVar9 = local_a0;
            if (local_98 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            FUN_140212e80(param_2,L"\t%s\r\n",puVar9);
            if (local_a0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar10 = lVar10 + 4;
          } while (lVar8 * 4 != lVar10);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != local_c4));
    }
  }
  else {
    pwVar7 = *(wchar_t **)(param_2 + 8);
    if (*(wchar_t **)(param_2 + 0x10) <= pwVar7 + 0xb) {
      FUN_140213274(param_2,0xb);
      pwVar7 = *(wchar_t **)(param_2 + 8);
    }
    builtin_wcsncpy(pwVar7,L"Empty map\r\n",0xb);
    *(wchar_t **)(param_2 + 8) = pwVar7 + 0xb;
  }
  FUN_140212e80(param_2,L"Total Num = %u\r\n",*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x194))
  ;
  local_90 = (longlong *)0x0;
  FUN_142ae56c8(plVar1,&local_90);
  FUN_140212e80(param_2,L"%s = %u KB\r\n",L"Total Size",(ulonglong)local_90 >> 10);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147016c24 FUN_147016c24 body=849 status=ok
// SIG undefined FUN_147016c24(void)

void FUN_147016c24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined2 *local_a0;
  int local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0xb0);
  FUN_140212e80(param_2,L"%s\r\n",L"Dumping runtime reentrancy map contents...");
  if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xb8)) {
    lVar2 = param_1 + 0xc0;
    local_68 = (undefined2 *)0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar2;
    if (*(int *)(param_1 + 0xd8) == 0) {
      local_c4 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_c4 = *(int *)(param_1 + 0xd8);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (int)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_c0 = lVar2;
    local_90 = plVar1;
    if ((local_78._4_4_ != local_c4) || (local_78 = uVar4, uStack_60 != lVar2)) {
      do {
        local_78 = uVar4;
        lVar2 = *local_90;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar3 = *(undefined4 *)(lVar2 + 0x10 + lVar11);
        puVar7 = (undefined4 *)FUN_147020fb8(param_1,*(undefined4 *)(lVar2 + lVar11));
        local_b8 = *puVar7;
        uStack_b4 = puVar7[1];
        uStack_b0 = puVar7[2];
        uStack_ac = puVar7[3];
        local_a8 = puVar7[4];
        FUN_147015f28(&local_b8,&local_68);
        FUN_147021ac6(&local_68,&local_a0);
        puVar10 = local_a0;
        if (local_98 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        FUN_140212e80(param_2,L"%s [Num=%d]:\r\n",puVar10,uVar3);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar9 = (longlong)*(int *)(lVar2 + lVar11 + 0x10);
        if (lVar9 < 1) {
          FUN_140212e80(param_2,&DAT_149e02010);
        }
        else {
          lVar2 = *(longlong *)(lVar2 + lVar11 + 8);
          lVar11 = 0;
          do {
            lVar8 = (longlong)*(int *)(lVar2 + lVar11);
            local_68 = *(undefined2 **)(*(longlong *)(param_1 + 0xa0) + 4 + lVar8 * 0xc);
            uStack_60 = CONCAT44(uStack_60._4_4_,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar8 * 0xc));
            local_58 = 0;
            FUN_14041ecbc(&local_68,&local_b8);
            FUN_1400021e4(&local_b8,&local_68);
            puVar10 = local_68;
            if ((int)uStack_60 == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            FUN_140212e80(param_2,L"\t%s\r\n",puVar10);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar11 = lVar11 + 4;
          } while (lVar9 * 4 != lVar11);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != local_c4));
    }
  }
  else {
    pwVar6 = *(wchar_t **)(param_2 + 8);
    if (*(wchar_t **)(param_2 + 0x10) <= pwVar6 + 0xb) {
      FUN_140213274(param_2,0xb);
      pwVar6 = *(wchar_t **)(param_2 + 8);
    }
    builtin_wcsncpy(pwVar6,L"Empty map\r\n",0xb);
    *(wchar_t **)(param_2 + 8) = pwVar6 + 0xb;
  }
  FUN_140212e80(param_2,L"Total Num = %u\r\n",*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xe4));
  local_90 = (longlong *)0x0;
  FUN_142ae56c8(plVar1,&local_90);
  FUN_140212e80(param_2,L"%s = %u KB\r\n",L"Total Size",(ulonglong)local_90 >> 10);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147016f76 FUN_147016f76 body=888 status=ok
// SIG undefined FUN_147016f76(void)

void FUN_147016f76(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar3 = *(uint *)(param_1 + 0x48);
  lVar7 = param_1 + 0x10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  local_60 = lVar7;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x28);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if ((iStack_54 != iVar6) || (local_60 != lVar7)) {
    do {
      do {
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar6);
    } while ((local_80 != lVar7) || (local_90 != param_1));
  }
  iVar6 = 0;
  lVar7 = (longlong)(int)uVar3 << 2;
  if (uVar3 < 2) {
    lVar7 = 0;
  }
  local_98 = param_2;
  FUN_140212e80(param_2,L"%s = %u KB\r\n",L"Runtime Identifier Map",
                lVar7 + (longlong)iVar1 * 0x20 + (ulonglong)(iVar2 + 0x1fU >> 5) * 4 >> 10);
  uVar5 = param_1 + 0x50;
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar3 = *(uint *)(param_1 + 0x98);
  lVar7 = param_1 + 0x60;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar7;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x78);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = uVar5;
  if ((iStack_54 != iVar6) || (local_60 != lVar7)) {
    do {
      do {
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar6);
    } while ((local_80 != lVar7) || (local_90 != uVar5));
  }
  uVar4 = local_98;
  lVar7 = (longlong)(int)uVar3 << 2;
  if (uVar3 < 2) {
    lVar7 = 0;
  }
  FUN_140212e80(local_98,L"%s = %u KB\r\n",L"Runtime Inverse Identifier Map",
                lVar7 + (longlong)iVar1 * 0x20 + (ulonglong)(iVar2 + 0x1fU >> 5) * 4 >> 10);
  FUN_140212e80(uVar4,L"%s = %u KB\r\n",L"Runtime Dependency List",
                (ulonglong)(longlong)*(int *)(param_1 + 0x10c) >> 7 & 0x3fffffffffffff);
  FUN_140212e80(uVar4,L"%s = %u KB\r\n",L"Runtime Reentrancy List",
                (ulonglong)((longlong)*(int *)(param_1 + 0xac) * 0xc) >> 10);
  local_90 = 0;
  FUN_142ae56c8(param_1 + 0x110,&local_90);
  FUN_140212e80(uVar4,L"%s = %u KB\r\n",L"Runtime Dependency Map",local_90 >> 10);
  local_90 = 0;
  FUN_142ae56c8(param_1 + 0x160,&local_90);
  FUN_140212e80(uVar4,L"%s = %u KB\r\n",L"Runtime Referencer Map",local_90 >> 10);
  local_90 = 0;
  FUN_142ae56c8(param_1 + 0xb0,&local_90);
  FUN_140212e80(uVar4,L"%s = %u KB\r\n",L"Runtime Reentrancy Map",local_90 >> 10);
  local_90 = 0;
  FUN_142ae5880(param_1 + 0x1b0,&local_90);
  FUN_140212e80(uVar4,L"%s = %u KB\r\n",L"Runtime Package Map",local_90 >> 10);
  uVar5 = FUN_147016450(param_1);
  FUN_140212e80(uVar4,L"%s = %u KB\r\n",L"Runtime Total",uVar5 >> 10);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470172f0 FUN_1470172f0 body=534 status=ok
// SIG undefined FUN_1470172f0(void)

ulonglong FUN_1470172f0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_898 [40];
  undefined8 local_870;
  undefined4 local_864 [2];
  int local_85c;
  longlong local_858;
  undefined1 local_84e [2050];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_898;
  local_858 = 0;
  FUN_1408383eb(param_1,&local_858);
  lVar8 = local_858;
  lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar8 <= lVar6) {
    uVar11 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    if (local_858 < 1) goto LAB_14701733f;
    uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)(*(longlong *)param_1[0x12] + 0x1a0))((longlong *)param_1[0x12],local_858);
    local_85c = 0;
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_85c,4);
      }
      else {
        FUN_14572512c(param_1,&local_85c);
      }
    }
    else {
      local_85c = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    if (((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) && (-1 < local_85c)) {
      local_870 = uVar7;
      lVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      lVar8 = (**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = lVar6 - lVar8;
      lVar8 = lVar6 + 3;
      if (-1 < lVar6) {
        lVar8 = lVar6;
      }
      uVar9 = lVar8 >> 2;
      if ((longlong)local_85c < lVar8 >> 2) {
        uVar9 = (longlong)local_85c;
      }
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar9 & 0xffffffff);
      }
      plVar2 = param_1 + 0x13;
      if (*(int *)((longlong)param_1 + 0xa4) < (int)uVar9) {
        FUN_1468bbe0e(plVar2);
      }
      if (0 < local_85c) {
        iVar10 = 0;
        do {
          local_84e[0] = 0;
          local_4c = 0;
          FUN_14279233f(param_1,local_84e);
          if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) goto LAB_14701733d;
          FUN_144aa133a(local_864,local_84e);
          uVar5 = local_864[0];
          iVar3 = (int)param_1[0x14];
          *(uint *)(param_1 + 0x14) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar3 + 1U) {
            FUN_1468bbe6e(plVar2,iVar3);
          }
          *(undefined4 *)(*plVar2 + (longlong)iVar3 * 4) = uVar5;
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_85c);
      }
      (**(code **)(*(longlong *)param_1[0x12] + 0x1a0))((longlong *)param_1[0x12],local_870);
      goto LAB_14701733f;
    }
  }
LAB_14701733d:
  uVar11 = 0;
LAB_14701733f:
  if ((local_48 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 147017508 FUN_147017508 body=70 status=ok
// SIG undefined FUN_147017508(void)

void FUN_147017508(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x170))();
  if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x29) & 2) == 0) {
    return;
  }
  *(undefined **)(param_1 + 0x90) = &DAT_14c99df70;
  FUN_14572541c(param_1);
  return;
}



// FUNCTION 1470175d2 FUN_1470175d2 body=114 status=ok
// SIG undefined FUN_1470175d2(void)

void FUN_1470175d2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140958c40(0,&local_38);
  FUN_145739258(param_2,&local_38);
  FUN_140958ed1(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147017646 FUN_147017646 body=114 status=ok
// SIG undefined FUN_147017646(void)

void FUN_147017646(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140958c40(0,&local_38);
  FUN_145739258(param_2,&local_38);
  FUN_140958ed1(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470176ba FUN_1470176ba body=1394 status=ok
// SIG undefined FUN_1470176ba(void)

void FUN_1470176ba(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0xc0);
  local_e8 = param_2;
  FUN_147017c2e(plVar1,(int)param_4[1] + (int)param_3[1]);
  uVar6 = *(uint *)(param_3 + 1);
  local_e0 = param_3;
  if (0 < (int)uVar6) {
    uVar9 = 0;
    do {
      if (0 < (int)uVar6) {
        uVar18 = uVar9;
        uVar8 = uVar6;
        do {
          if (uVar6 <= (uint)uVar18) break;
          uVar3 = *(uint *)(*param_3 + 8 + uVar18 * 0x38);
          if (uVar3 == 0) {
            uVar12 = *(undefined8 *)(*param_3 + uVar18 * 0x38);
            goto LAB_147017757;
          }
          if (-1 < (int)uVar3) break;
          uVar18 = (ulonglong)~uVar3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar12 = 0;
LAB_147017757:
      lVar7 = *(longlong *)(param_6 + 0x10);
      if (*(longlong *)(param_6 + 0x10) == 0) {
        lVar7 = param_6;
      }
      uVar6 = *(uint *)(lVar7 + (uVar9 >> 5) * 4);
      iVar14 = *(int *)(param_1 + 200);
      *(uint *)(param_1 + 200) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar14 + 1U) {
        FUN_147002066(plVar1,iVar14);
        param_3 = local_e0;
      }
      lVar7 = *plVar1;
      *(undefined8 *)(lVar7 + (longlong)iVar14 * 0xc) = uVar12;
      *(char *)(lVar7 + 8 + (longlong)iVar14 * 0xc) =
           ((uVar6 >> ((uint)uVar9 & 0x1f) & 1) != 0) * '\x02' + '\x01';
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = *(uint *)(param_3 + 1);
    } while ((int)uVar8 < (int)uVar6);
  }
  FUN_147021dd4(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  uVar9 = (ulonglong)*(int *)(param_1 + 200);
  if (1 < (longlong)uVar9) {
    plVar4 = *(longlong **)(param_1 + 0xc0);
    lVar7 = uVar9 * 0xc + -0xc;
    plVar10 = plVar4;
    plVar15 = plVar4;
    do {
      if (((*plVar15 != *(longlong *)((longlong)plVar10 + 0xc)) ||
          (plVar16 = plVar15, (char)plVar15[1] != *(char *)((longlong)plVar10 + 0x14))) &&
         (plVar16 = (longlong *)((longlong)plVar15 + 0xc), plVar10 != plVar15)) {
        *(undefined4 *)((longlong)plVar15 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x14);
        *plVar16 = *(longlong *)((longlong)plVar10 + 0xc);
      }
      lVar7 = lVar7 + -0xc;
      plVar10 = (longlong *)((longlong)plVar10 + 0xc);
      plVar15 = plVar16;
    } while (lVar7 != 0);
    uVar9 = (ulonglong)
            (uint)((int)((ulonglong)((longlong)plVar16 + (0xc - (longlong)plVar4)) >> 2) *
                  -0x55555555);
  }
  FUN_147017c58(plVar1,uVar9);
  if (0 < (int)param_4[1]) {
    uVar9 = 0;
    do {
      uVar12 = *(undefined8 *)(*param_4 + uVar9 * 8);
      lVar7 = *(longlong *)(param_7 + 0x10);
      if (*(longlong *)(param_7 + 0x10) == 0) {
        lVar7 = param_7;
      }
      uVar6 = *(uint *)(lVar7 + (uVar9 >> 5 & 0x7ffffff) * 4);
      iVar14 = *(int *)(param_1 + 200);
      *(uint *)(param_1 + 200) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar14 + 1U) {
        FUN_147002066(plVar1,iVar14);
      }
      lVar7 = *plVar1;
      *(undefined8 *)(lVar7 + (longlong)iVar14 * 0xc) = uVar12;
      *(char *)(lVar7 + 8 + (longlong)iVar14 * 0xc) =
           ((uVar6 >> ((uint)uVar9 & 0x1f) & 1) != 0) * '\x02';
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)(int)param_4[1]);
  }
  lVar7 = param_8[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar5 = *param_8;
    lVar17 = 0;
    do {
      bVar2 = *(byte *)(lVar5 + 8 + lVar17);
      uVar12 = *(undefined8 *)(lVar5 + lVar17);
      iVar14 = *(int *)(param_1 + 200);
      *(uint *)(param_1 + 200) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar14 + 1U) {
        FUN_147002066(plVar1,iVar14);
      }
      lVar13 = *plVar1;
      *(undefined8 *)(lVar13 + (longlong)iVar14 * 0xc) = uVar12;
      *(byte *)(lVar13 + 8 + (longlong)iVar14 * 0xc) = (bVar2 & 1) << 2;
      lVar17 = lVar17 + 0xc;
    } while ((longlong)(int)lVar7 * 0xc != lVar17);
  }
  local_d8 = (longlong *)(param_1 + 0xd0);
  FUN_147017cb8();
  local_d0 = param_5 + 2;
  local_80 = (undefined2 *)0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_78 = local_d0;
  if ((int)param_5[5] == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar14 = (int)param_5[5];
  }
  lVar7 = local_e8;
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_a0 = (undefined4)local_80;
  uStack_9c = local_80._4_4_;
  uStack_98 = (int)uStack_78;
  uStack_94 = uStack_78._4_4_;
  local_a8 = param_5;
  if ((iStack_6c != iVar14) || (uStack_78 != local_d0)) {
    local_e8 = CONCAT44(local_e8._4_4_,iVar14);
    do {
      lVar5 = *local_a8;
      lVar17 = (longlong)iStack_8c;
      uVar6 = *(uint *)(lVar5 + lVar17 * 0x20);
      if ((int)uVar6 < 1) {
        if ((int)uVar6 < 0) {
          uVar6 = ~uVar6;
          uVar8 = *(uint *)(local_e0 + 1);
          if ((int)uVar6 < (int)uVar8) {
            lVar13 = *local_e0;
            if (*(int *)(lVar13 + 8 + (ulonglong)uVar6 * 0x38) == 0) {
              uVar9 = 0;
              uVar18 = 0;
            }
            else {
              uVar9 = *(ulonglong *)((ulonglong)uVar6 * 0x38 + lVar13);
              uVar18 = uVar9 & 0xffffffff00000000;
            }
            iVar14 = 1;
            while( true ) {
              uVar3 = *(uint *)(lVar13 + 8 + (ulonglong)uVar6 * 0x38);
              if (uVar3 == 0) break;
              if ((-1 < (int)uVar3) || ((int)uVar8 <= iVar14)) goto LAB_147017ad7;
              uVar6 = ~uVar3;
              iVar14 = iVar14 + 1;
              if (uVar8 <= uVar6) goto LAB_147017ad7;
            }
            lVar13 = *(longlong *)(lVar13 + (ulonglong)uVar6 * 0x38);
            if (lVar13 != 0) goto LAB_147017a7d;
          }
        }
      }
      else {
        local_b0 = lVar7;
        FUN_1400021e4(&local_b0,local_c8);
        FUN_141090af6(&local_80,local_c8);
        puVar11 = &DAT_149dfb77a;
        if ((int)uStack_78 != 0) {
          puVar11 = local_80;
        }
        FUN_1446f470e(&local_b8,puVar11,1);
        uVar9 = local_b8;
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        uVar18 = uVar9 & 0xffffffff00000000;
        lVar13 = lVar7;
LAB_147017a7d:
        iVar14 = *(int *)(param_1 + 0xd8);
        *(uint *)(param_1 + 0xd8) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0xdc) < iVar14 + 1U) {
          FUN_1470023d2(local_d8,iVar14);
        }
        plVar1 = (longlong *)(*local_d8 + (longlong)iVar14 * 0x20);
        plVar1[2] = 0;
        plVar1[3] = 0;
        *plVar1 = lVar13;
        plVar1[1] = uVar18 | uVar9 & 0xffffffff;
        FUN_1406fa324(plVar1 + 2,lVar5 + lVar17 * 0x20 + 8);
      }
LAB_147017ad7:
      local_90 = local_90 & ~uStack_9c;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != param_5 ||
             ((longlong *)CONCAT44(uStack_94,uStack_98) != local_d0 || iStack_8c != (int)local_e8));
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147017c2e FUN_147017c2e body=41 status=ok
// SIG undefined FUN_147017c2e(void)

void FUN_147017c2e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147001fe0();
  return;
}



// FUNCTION 147017c58 FUN_147017c58 body=95 status=ok
// SIG undefined FUN_147017c58(void)

void FUN_147017c58(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147002066(param_1,iVar1);
    }
    FUN_147002051((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147017cb8 FUN_147017cb8 body=61 status=ok
// SIG undefined FUN_147017cb8(void)

void FUN_147017cb8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1470022e4(param_1);
    return;
  }
  FUN_146ffaaf5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 147017cf6 FUN_147017cf6 body=148 status=ok
// SIG undefined FUN_147017cf6(void)

longlong * FUN_147017cf6(longlong *param_1)

{
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_149fcb300;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1468c528a(param_1 + 0x17);
  memset(param_1 + 0x3e,0,0x88);
  param_1[0x4f] = -1;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  (**(code **)(*param_1 + 0xb0))(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,1);
  return param_1;
}



// FUNCTION 147017d8a FUN_147017d8a body=298 status=ok
// SIG undefined FUN_147017d8a(void)

void FUN_147017d8a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149fcb300;
  puVar1 = (undefined8 *)param_1[0x16];
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((longlong)param_1 + 0x284) == '\x01')) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_1468baaa5(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1468b903c(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_146875c70(param_1 + 0x17);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 147017eb4 FUN_147017eb4 body=77 status=ok
// SIG undefined FUN_147017eb4(void)

void FUN_147017eb4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = 0;
  uStack_20 = 0;
  FUN_147017f02();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147017f02 FUN_147017f02 body=185 status=ok
// SIG undefined FUN_147017f02(void)

void FUN_147017f02(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402980a2(param_1 + 0x90,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_1402980a2((undefined8 *)(param_1 + 0xa0),*param_3,*(undefined4 *)(param_3 + 1));
  plVar1 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 0xa8) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0xa0);
  }
  uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,puVar3,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined1 *)(param_1 + 0x284) = 1;
  local_29 = 0;
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &local_29;
  }
  FUN_142ae5fae(param_1,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147017fbc FUN_147017fbc body=215 status=ok
// SIG undefined FUN_147017fbc(void)

void FUN_147017fbc(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined1 *)(param_1 + 0x284) = 0;
  FUN_144a7e010(param_1 + 0x90);
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(*(longlong **)(param_1 + 0xb0),&local_30);
  if ((ulonglong *)(param_1 + 0xa0) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(param_1 + 0xa0) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0xa8) = local_28;
    *(undefined4 *)(param_1 + 0xac) = local_24;
  }
  local_30 = local_30 & 0xffffffffffffff00;
  puVar1 = &local_30;
  if (param_3 != (ulonglong *)0x0) {
    puVar1 = param_3;
  }
  FUN_142ae5fae(param_1,puVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147018094 FUN_147018094 body=76 status=ok
// SIG undefined FUN_147018094(void)

undefined8 * FUN_147018094(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x98) < 2) {
    FUN_140f11842(param_1 + 0xa0,param_2,0,0);
  }
  else {
    FUN_144a787a6(param_2,param_1 + 0x90);
  }
  return param_2;
}



// FUNCTION 1470180e0 FUN_1470180e0 body=79 status=ok
// SIG undefined FUN_1470180e0(void)

bool FUN_1470180e0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  
  if ((param_2 < 1) || (param_1[0x4e] < param_2)) {
    bVar1 = false;
  }
  else {
    FUN_1468216da(param_1);
    FUN_1468216da(param_1[0x16]);
    (**(code **)(*param_1 + 0x1a0))(param_1,param_2);
    bVar1 = (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
  }
  return bVar1;
}



// FUNCTION 147018130 FUN_147018130 body=85 status=ok
// SIG undefined FUN_147018130(void)

undefined8 * FUN_147018130(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147022446(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 147018186 FUN_147018186 body=85 status=ok
// SIG undefined FUN_147018186(void)

undefined8 * FUN_147018186(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470224b6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x68);
      }
    }
  }
  return param_1;
}



// FUNCTION 1470185c6 FUN_1470185c6 body=787 status=ok
// SIG undefined FUN_1470185c6(void)

char FUN_1470185c6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined4 local_120;
  char local_115;
  undefined4 local_114;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8 [3];
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_115 = FUN_142ae7016();
  if ((local_115 != '\0') && ((longlong)*(int *)(param_1 + 0x268) != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x260);
    lVar6 = (longlong)*(int *)(param_1 + 0x268) * 0x18;
    local_110 = param_2;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_b8[2] = 0;
      uStack_a0 = 0;
      local_b8[0] = 0;
      local_b8[1] = 0;
      FUN_1400021e4(lVar7,&local_70);
      local_138 = local_b8;
      local_130 = (undefined8 *)CONCAT71(local_130._1_7_,1);
      FUN_1468713d2(&local_70,&local_88,&local_98,local_b8 + 2);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_140d2be42(&local_c8,&local_98);
      uVar4 = FUN_14001cc68(0x70,0x10);
      local_114 = *(undefined4 *)(param_1 + 0xd8);
      local_d8 = *(undefined8 *)(param_1 + 0x1c0);
      local_d0 = *(undefined4 *)(param_1 + 0x1c8);
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_70 = local_88;
      local_68 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        local_68 = 0;
      }
      FUN_1468fe3e4(&local_108,&local_70);
      iVar5 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar5 = 0;
      }
      FUN_1446f82e2(&local_70,iVar5,local_b8[2],1);
      lVar2 = local_70;
      iVar5 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar5 = 0;
      }
      FUN_1446f82e2(&local_70,iVar5,local_c8,1);
      lVar3 = local_70;
      iVar5 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iVar5 = 0;
      }
      FUN_1446f82e2(&local_70,iVar5,local_98,1);
      local_120 = local_114;
      local_128 = &local_d8;
      local_130 = &local_f8;
      local_138 = &local_108;
      FUN_146857b14(uVar4,local_70,lVar3,lVar2);
      plVar1 = local_110;
      iVar5 = (int)local_110[1];
      *(uint *)(local_110 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)local_110 + 0xc) < iVar5 + 1U) {
        FUN_1407de694(local_110,iVar5);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar5 * 8) = uVar4;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return local_115;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470188da FUN_1470188da body=537 status=ok
// SIG undefined FUN_1470188da(void)

ulonglong FUN_1470188da(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  uint uVar8;
  longlong *unaff_RDI;
  uint uVar9;
  
  if (param_1[1] == -1) {
    *(int *)(param_1 + 7) = (int)param_1[2];
    uVar8 = (int)param_1[2] + 0x1f;
    uVar6 = 0xffffffffffffffff;
    if (0x1f < uVar8) {
      unaff_RDI = param_1 + 4;
      uVar9 = uVar8 >> 5;
      uVar5 = 0xffffffffffffffff;
      if (*(int *)((longlong)param_1 + 0x3c) + 0x1fU >> 5 < uVar9) {
        uVar5 = 0;
        FUN_14499171c(unaff_RDI,0,uVar9,4);
        *(uint *)((longlong)param_1 + 0x3c) = uVar8 & 0xffffffe0;
      }
      plVar3 = (longlong *)param_1[6];
      if ((longlong *)param_1[6] == (longlong *)0x0) {
        plVar3 = unaff_RDI;
      }
      uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
      if (uVar8 < 0x120) {
        uVar9 = uVar8 >> 3 & 0x3c;
        iVar4 = (int)CONCAT71(uVar7,0xff);
      }
      else {
        uVar9 = uVar9 << 2;
        iVar4 = (int)CONCAT71(uVar7,0xff);
      }
      memset(plVar3,iVar4,(ulonglong)uVar9);
      uVar8 = *(uint *)(param_1 + 7);
      uVar9 = uVar8 + 0x1f;
      if (-1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar6 = (ulonglong)(uVar9 & 0xffffffe0);
      if ((int)uVar8 % 0x20 != 0) {
        if ((longlong *)param_1[6] != (longlong *)0x0) {
          unaff_RDI = (longlong *)param_1[6];
        }
        bVar2 = -(char)((int)uVar8 % 0x20);
        uVar8 = (uint)(*(int *)((longlong)unaff_RDI + (longlong)((int)uVar9 >> 5) * 4) <<
                      (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
        uVar6 = (ulonglong)uVar8;
        *(uint *)((longlong)unaff_RDI + (longlong)((int)uVar9 >> 5) * 4) = uVar8;
      }
    }
    *(int *)(param_1 + 0xb) = *(int *)((longlong)param_1 + 0x14);
    uVar8 = *(int *)((longlong)param_1 + 0x14) + 0x1f;
    if (0x1f < uVar8) {
      unaff_RDI = param_1 + 8;
      uVar9 = uVar8 >> 5;
      if (*(int *)((longlong)param_1 + 0x5c) + 0x1fU >> 5 < uVar9) {
        uVar6 = 0;
        FUN_14499171c(unaff_RDI,0,uVar9,4);
        *(uint *)((longlong)param_1 + 0x5c) = uVar8 & 0xffffffe0;
      }
      plVar3 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar3 = unaff_RDI;
      }
      uVar7 = (undefined7)(uVar6 >> 8);
      if (uVar8 < 0x120) {
        uVar9 = uVar8 >> 3 & 0x3c;
        iVar4 = (int)CONCAT71(uVar7,0xff);
      }
      else {
        uVar9 = uVar9 << 2;
        iVar4 = (int)CONCAT71(uVar7,0xff);
      }
      memset(plVar3,iVar4,(ulonglong)uVar9);
      iVar4 = (int)param_1[0xb];
      iVar1 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar1 = iVar4;
      }
      if (iVar4 % 0x20 != 0) {
        if ((longlong *)param_1[10] != (longlong *)0x0) {
          unaff_RDI = (longlong *)param_1[10];
        }
        bVar2 = -(char)(iVar4 % 0x20);
        *(uint *)((longlong)unaff_RDI + (longlong)(iVar1 >> 5) * 4) =
             (uint)(*(int *)((longlong)unaff_RDI + (longlong)(iVar1 >> 5) * 4) << (bVar2 & 0x1f)) >>
             (bVar2 & 0x1f);
      }
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(int *)((longlong)param_1 + 0x6c) != 0) {
      FUN_147022994(param_1 + 0xc);
    }
  }
  else {
    plVar3 = (longlong *)*param_1;
    (**(code **)(*plVar3 + 0x1a0))(plVar3);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 2) == 0) {
      FUN_146897be2(param_1 + 4,plVar3);
      FUN_146897be2(param_1 + 8,plVar3);
      if (*(int *)((longlong)param_1 + 0x1c) < 0x3f5) {
        *(undefined4 *)(param_1 + 0xd) = 0;
        if (*(int *)((longlong)param_1 + 0x6c) != 0) {
          FUN_147022994(param_1 + 0xc);
        }
      }
      else {
        FUN_1470229c4(plVar3,param_1 + 0xc);
      }
      if (((int)param_1[7] == (int)param_1[2]) &&
         ((int)param_1[0xb] == *(int *)((longlong)param_1 + 0x14))) {
        uVar6 = CONCAT71((int7)((ulonglong)plVar3 >> 8),
                         (*(byte *)((longlong)plVar3 + 0x29) & 2) == 0);
        goto LAB_14701890b;
      }
    }
    uVar6 = 0;
  }
LAB_14701890b:
  return uVar6 & 0xffffffff;
}



// FUNCTION 147018af4 FUN_147018af4 body=62 status=ok
// SIG undefined FUN_147018af4(void)

void FUN_147018af4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147018b32 FUN_147018b32 body=192 status=ok
// SIG undefined FUN_147018b32(void)

void FUN_147018b32(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1470180e0(param_1,*(undefined8 *)(param_1 + 0x1e0));
  if (cVar1 == '\0') {
    *(byte *)(param_2 + 0xb0) = *(byte *)(param_2 + 0xb0) & 0xfd;
  }
  else {
    local_48 = 0xffffffffffffffff;
    local_40 = 0;
    local_38 = 0xffffffff;
    local_34 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar1 = FUN_1468c73c6(&local_48,param_1);
    if (cVar1 == '\0') {
      *(byte *)(param_2 + 0xb0) = *(byte *)(param_2 + 0xb0) & 0xfd;
    }
    else {
      iVar2 = FUN_1468c76f8(&local_48,3);
      *(uint *)(param_2 + 0xb0) = (*(uint *)(param_2 + 0xb0) & 0xfffffffd) + (uint)(0 < iVar2) * 2;
    }
    if (CONCAT44(uStack_24,uStack_28) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147018bf4 FUN_147018bf4 body=916 status=ok
// SIG undefined FUN_147018bf4(void)

ulonglong FUN_147018bf4(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148 [3];
  int local_130;
  undefined2 *local_128;
  undefined8 uStack_120;
  undefined8 local_118 [2];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  undefined8 *puVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_128 = (undefined2 *)0x0;
  uStack_120 = 0;
  if (*(int *)(param_1 + 0x98) < 2) {
    uVar5 = 0;
    cVar1 = FUN_140f11842(param_1 + 0xa0,&local_128,0,0);
    if (cVar1 == '\0') goto LAB_147018f46;
  }
  else {
    FUN_144a787a6(&local_128,param_1 + 0x90);
  }
  puVar4 = local_128;
  if ((int)uStack_120 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  puVar6 = &local_d8;
  FUN_1446f470e(puVar6,puVar4,1);
  *param_2 = local_d8;
  if ((param_3 & 3) == 0) {
LAB_147018cce:
    uVar5 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
  }
  else {
    cVar1 = FUN_142ae62ba(param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_142ae644c(param_1), cVar1 != '\0')) {
      if ((param_3 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x1c) = 1;
        param_2[0x12] = *(undefined8 *)(param_1 + 0x270);
        local_f8 = *(undefined8 *)(param_1 + 200);
        local_f0 = *(undefined4 *)(param_1 + 0xd0);
        FUN_146858852(&local_d8);
        *(undefined4 *)(param_2 + 0x15) = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_2 + 0xac) = local_d8._4_4_;
        *(undefined4 *)(param_2 + 0x16) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_2 + 0xb4) = uStack_d0._4_4_;
        param_2[0x13] = *(undefined8 *)(param_1 + 0xbc);
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0xc4);
        bVar2 = FUN_14680fe9e(param_1 + 0x160);
        *(uint *)(param_2 + 0x17) = (uint)bVar2 | *(uint *)(param_2 + 0x17) & 0xfffffffe;
        local_148[2] = *(undefined8 *)(param_1 + 0xa0);
        puVar6 = (undefined8 *)0x0;
        uVar5 = 0;
        local_130 = *(int *)(param_1 + 0xa8) + -1;
        if (*(int *)(param_1 + 0xa8) == 0) {
          local_130 = 0;
        }
        uVar3 = FUN_146874e64(local_148 + 2,0);
        *(undefined1 *)((longlong)param_2 + 0xbc) = uVar3;
        cVar1 = FUN_142ae76a8(param_1,param_1 + 0x200,param_2 + 0x10);
        if (cVar1 == '\0') goto LAB_147018f46;
        FUN_147018b32(param_1,param_2 + 1);
      }
      if ((param_3 & 2) == 0) goto LAB_147018cce;
      *(undefined1 *)((longlong)param_2 + 0xe1) = 1;
      cVar1 = FUN_142ae6ad4(param_1);
      uVar5 = 0;
      if (cVar1 == '\0') goto LAB_147018f46;
      local_78 = 0;
      local_70 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      cVar1 = FUN_142ae9676(param_1);
      if (cVar1 != '\0') {
        local_e8 = 0;
        local_e0 = 0x8000000000;
        puVar6 = local_118;
        local_108 = 0;
        local_100 = 0x8000000000;
        local_148[0] = 0;
        local_148[1] = 0;
        cVar1 = FUN_142ae93c0(param_1,&local_f8,puVar6,local_148);
        if (cVar1 != '\0') {
          local_178 = &local_98;
          local_158 = *(undefined8 *)(param_1 + 0x200);
          local_150 = *(undefined4 *)(param_1 + 0x208);
          local_170 = &local_f8;
          local_168 = puVar6;
          local_160 = local_148;
          FUN_1470176ba(param_2,*param_2,&local_158,param_1 + 0x230);
          if (local_148[0] != 0) {
            FUN_1400020a8();
          }
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          FUN_1468b626c(&local_d8);
          goto LAB_147018cce;
        }
        if (local_148[0] != 0) {
          FUN_1400020a8();
        }
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1468b626c(&local_d8);
    }
    uVar5 = 0;
  }
LAB_147018f46:
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147018f8a FUN_147018f8a body=41 status=ok
// SIG undefined FUN_147018f8a(void)

void FUN_147018f8a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147022666();
  return;
}



// FUNCTION 147018fb4 FUN_147018fb4 body=200 status=ok
// SIG undefined FUN_147018fb4(void)

undefined8 FUN_147018fb4(undefined8 *param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  if ((*(int *)(param_3 + 4) < 0x209) || (*(int *)(param_3 + 0x20) < 0)) {
    *param_1 = 0xffffffffffffffff;
  }
  else {
    FUN_1408383eb(param_2,param_1);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  piVar4 = (int *)(param_1 + 1);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar4,4);
    }
    else {
      FUN_14572512c(param_2,piVar4);
    }
  }
  else {
    *piVar4 = *piVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  lVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) && (-1 < *piVar4)) {
    lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    if (*piVar4 + lVar3 <= lVar2) {
      return 1;
    }
  }
  *param_4 = 1;
  return 0;
}



// FUNCTION 14701907c FUN_14701907c body=56 status=ok
// SIG undefined FUN_14701907c(void)

void FUN_14701907c(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x170))();
  if ((*(byte *)(*(longlong *)(param_1 + 0xb0) + 0x29) & 2) == 0) {
    return;
  }
  FUN_14572541c(param_1);
  return;
}



// FUNCTION 1470190c8 FUN_1470190c8 body=56 status=ok
// SIG undefined FUN_1470190c8(void)

void FUN_1470190c8(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x1a0))();
  if ((*(byte *)(*(longlong *)(param_1 + 0xb0) + 0x29) & 2) == 0) {
    return;
  }
  FUN_14572541c(param_1);
  return;
}



// FUNCTION 14701911c FUN_14701911c body=181 status=ok
// SIG undefined FUN_14701911c(void)

undefined8 FUN_14701911c(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  lVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_14021219d(param_2,param_1);
  FUN_14021219d(param_2,param_1 + 0x10);
  piVar4 = (int *)(param_1 + 0x20);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar4,4);
    }
    else {
      FUN_14572512c(param_2,piVar4);
    }
  }
  else {
    *piVar4 = *piVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) && (-1 < *piVar4)) {
    lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    if (*piVar4 + lVar3 <= lVar2) {
      return 1;
    }
  }
  *param_3 = 2;
  return 0;
}



// FUNCTION 1470191d2 FUN_1470191d2 body=38 status=ok
// SIG undefined FUN_1470191d2(void)

undefined8 FUN_1470191d2(undefined8 param_1,int param_2)

{
  FUN_14700acd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470191f8 FUN_1470191f8 body=38 status=ok
// SIG undefined FUN_1470191f8(void)

undefined8 FUN_1470191f8(undefined8 param_1,int param_2)

{
  FUN_145a4210a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14701921e FUN_14701921e body=68 status=ok
// SIG undefined FUN_14701921e(void)

undefined8 * FUN_14701921e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149fcb0a0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147019262 FUN_147019262 body=38 status=ok
// SIG undefined FUN_147019262(void)

undefined8 FUN_147019262(undefined8 param_1,int param_2)

{
  FUN_147017d8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147019288 FUN_147019288 body=89 status=ok
// SIG undefined FUN_147019288(void)

undefined8 * FUN_147019288(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xa8);
  _Src = *(void **)(param_1 + 0xa0);
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



// FUNCTION 1470192e2 FUN_1470192e2 body=132 status=ok
// SIG undefined FUN_1470192e2(void)

undefined8 * FUN_1470192e2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_144881636();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_144881636(param_1 + 10,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147019366 FUN_147019366 body=116 status=ok
// SIG undefined FUN_147019366(void)

void FUN_147019366(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140393d0c(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14682e058(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1470193dc FUN_1470193dc body=60 status=ok
// SIG undefined FUN_1470193dc(void)

void FUN_1470193dc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14577537e(param_1 + 8);
  return;
}



// FUNCTION 147019418 FUN_147019418 body=52 status=ok
// SIG undefined FUN_147019418(void)

void FUN_147019418(longlong *param_1)

{
  FUN_14701944c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14701944c FUN_14701944c body=312 status=ok
// SIG undefined FUN_14701944c(void)

void FUN_14701944c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147019586 FUN_147019586 body=52 status=ok
// SIG undefined FUN_147019586(void)

void FUN_147019586(longlong *param_1)

{
  FUN_1470195ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470195ba FUN_1470195ba body=89 status=ok
// SIG undefined FUN_1470195ba(void)

void FUN_1470195ba(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140cbb3a0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147019614 FUN_147019614 body=52 status=ok
// SIG undefined FUN_147019614(void)

void FUN_147019614(longlong *param_1)

{
  FUN_147019648();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147019648 FUN_147019648 body=89 status=ok
// SIG undefined FUN_147019648(void)

void FUN_147019648(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1470196a2 FUN_1470196a2 body=52 status=ok
// SIG undefined FUN_1470196a2(void)

void FUN_1470196a2(longlong *param_1)

{
  FUN_1470196d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470196d6 FUN_1470196d6 body=89 status=ok
// SIG undefined FUN_1470196d6(void)

void FUN_1470196d6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147019730 FUN_147019730 body=86 status=ok
// SIG undefined FUN_147019730(void)

void FUN_147019730(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147019786 FUN_147019786 body=132 status=ok
// SIG undefined FUN_147019786(void)

void FUN_147019786(longlong param_1,int param_2)

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



// FUNCTION 14701980c FUN_14701980c body=86 status=ok
// SIG undefined FUN_14701980c(void)

void FUN_14701980c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147019862 FUN_147019862 body=132 status=ok
// SIG undefined FUN_147019862(void)

void FUN_147019862(longlong param_1,int param_2)

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



// FUNCTION 1470198e8 FUN_1470198e8 body=133 status=ok
// SIG undefined FUN_1470198e8(void)

void FUN_1470198e8(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14701996e(param_1,param_2,iVar1 - param_2);
    FUN_1470199d0(param_1);
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  uVar2 = param_2 - iVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_141499410(param_1,iVar1);
  }
  if (uVar2 != 0) {
    memset((void *)((longlong)iVar1 * 0x18 + *param_1),0,(ulonglong)uVar2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 14701996e FUN_14701996e body=98 status=ok
// SIG undefined FUN_14701996e(void)

void FUN_14701996e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1401a56c2(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1470199d0 FUN_1470199d0 body=62 status=ok
// SIG undefined FUN_1470199d0(void)

void FUN_1470199d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147019a0e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147019a0e FUN_147019a0e body=112 status=ok
// SIG undefined FUN_147019a0e(void)

ulonglong FUN_147019a0e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147019a48;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147019a48:
  return param_2 & 0xffffffff;
}



// FUNCTION 147019a7e FUN_147019a7e body=128 status=ok
// SIG undefined FUN_147019a7e(void)

void FUN_147019a7e(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1401d5364(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_147019b00(param_1);
  return;
}



// FUNCTION 147019b00 FUN_147019b00 body=62 status=ok
// SIG undefined FUN_147019b00(void)

void FUN_147019b00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147019b3e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 147019b3e FUN_147019b3e body=93 status=ok
// SIG undefined FUN_147019b3e(void)

ulonglong FUN_147019b3e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147019b9c FUN_147019b9c body=129 status=ok
// SIG undefined FUN_147019b9c(void)

undefined8 * FUN_147019b9c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined8 local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  local_28 = local_40;
  local_20 = local_38 + -1;
  if (local_38 == 0) {
    local_20 = 0;
  }
  FUN_1468fe3e4(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147019c1e FUN_147019c1e body=172 status=ok
// SIG undefined FUN_147019c1e(void)

void FUN_147019c1e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  FUN_140ba791a(param_1 + 0x20,&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_140002184(param_2,0x20);
  FUN_147019ccc(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147019ccc FUN_147019ccc body=195 status=ok
// SIG undefined FUN_147019ccc(void)

void FUN_147019ccc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_888 [32];
  longlong local_868;
  int local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  undefined1 *local_848;
  char local_840;
  undefined1 local_838 [2070];
  undefined1 local_22 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_858 = local_838;
  local_840 = '\0';
  local_848 = local_22;
  local_850 = local_858;
  FUN_146857ee0(param_1,&local_858);
  FUN_14006620a(&local_868,local_858,(ulonglong)((longlong)local_850 - (longlong)local_858) >> 1);
  iVar1 = local_860 + -1;
  if (local_860 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_868,iVar1);
  if (local_868 != 0) {
    FUN_1400020a8(local_868);
  }
  if (local_840 == '\x01') {
    FUN_1400020a8(local_858);
  }
  if ((local_20 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147019d90 FUN_147019d90 body=404 status=ok
// SIG undefined FUN_147019d90(void)

longlong FUN_147019d90(longlong *param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined2 *local_a0;
  int local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [80];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = 0;
    if (param_1[2] == 0) goto LAB_147019edd;
    uVar4 = FUN_144a7a812();
    local_b0 = 0;
    local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffff00000000);
    lVar5 = FUN_140be85e0(uVar4,0,lVar5,0);
    if (lVar5 != 0) {
      cVar3 = FUN_140ebe022(lVar5);
      lVar6 = 0;
      if (cVar3 != '\0') {
        lVar6 = lVar5;
      }
    }
    if (param_2 == '\x01' && lVar6 == 0) {
      FUN_144a87124(local_80,param_3);
      FUN_1427f3a60(local_90,local_80);
      FUN_1400021e4(param_1,&local_a0);
      puVar7 = local_a0;
      if (local_98 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      local_b8 = local_90;
      lVar6 = FUN_1402791b4(0,puVar7,0,0);
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
          }
        }
      }
    }
    if (lVar6 != 0) {
      lVar5 = param_1[2];
      uVar4 = FUN_1446f8646();
      local_b0 = 0;
      local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffff00000000);
      lVar6 = FUN_140be85e0(uVar4,lVar6,lVar5,0);
      goto LAB_147019edd;
    }
  }
  lVar6 = 0;
LAB_147019edd:
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_3);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 147019f26 FUN_147019f26 body=184 status=ok
// SIG undefined FUN_147019f26(void)

void FUN_147019f26(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  FUN_140ba791a(param_1 + 0x20,&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_140002184(param_2,0x27);
  FUN_147019ccc(param_1,param_2);
  FUN_140002184(param_2,0x27);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147019fe0 FUN_147019fe0 body=293 status=ok
// SIG undefined FUN_147019fe0(void)

undefined4 * FUN_147019fe0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14701a106(param_1,local_48);
  local_40[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *local_40 = *param_3;
  local_40[1] = uVar1;
  local_40[2] = uVar2;
  local_40[3] = uVar3;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_14498da01(local_40);
  cVar4 = FUN_14701a202(param_1,uVar5,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[6] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14701a36a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701a106 FUN_14701a106 body=251 status=ok
// SIG undefined FUN_14701a106(void)

int * FUN_14701a106(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 14701a202 FUN_14701a202 body=98 status=ok
// SIG undefined FUN_14701a202(void)

undefined8 FUN_14701a202(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14701a264(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14701a2ea(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14701a264 FUN_14701a264 body=133 status=ok
// SIG undefined FUN_14701a264(void)

int FUN_14701a264(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((((((*(byte *)(lVar2 + 8 + lVar3) ^ *(byte *)(param_3 + 1)) & 7) == 0) &&
             (plVar4 = (longlong *)(lVar2 + lVar3), *plVar4 == *param_3)) &&
            (*(short *)((longlong)plVar4 + 10) == *(short *)((longlong)param_3 + 10))) &&
           (*(longlong *)((longlong)plVar4 + 0xc) == *(longlong *)((longlong)param_3 + 0xc))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14701a2ea FUN_14701a2ea body=128 status=ok
// SIG undefined FUN_14701a2ea(void)

void FUN_14701a2ea(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 14701a36a FUN_14701a36a body=448 status=ok
// SIG undefined FUN_14701a36a(void)

void FUN_14701a36a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = FUN_14498da01(lVar3 + lVar4);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14701a52c FUN_14701a52c body=198 status=ok
// SIG undefined FUN_14701a52c(void)

void FUN_14701a52c(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x2c) < param_2) {
    FUN_14700a3ca(param_1 + 0x20,param_2);
  }
  FUN_1456bd906(param_1 + 0x60,param_2 * 5);
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  if (*(int *)(param_1 + 0x3c) < param_3) {
    FUN_14700a3ca(param_1 + 0x30,param_3);
  }
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (*(int *)(param_1 + 0x4c) < param_4) {
    FUN_14700a3ca(param_1 + 0x40,param_4);
  }
  FUN_1456bd906(param_1 + 0x80,param_4);
  if (-1 < param_5) {
    if (param_5 <= *(int *)(param_1 + 0x5c)) {
      return;
    }
    FUN_14700a3ca(param_1 + 0x50,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_5);
}



// FUNCTION 14701a5f4 FUN_14701a5f4 body=52 status=ok
// SIG undefined FUN_14701a5f4(void)

void FUN_14701a5f4(longlong *param_1)

{
  FUN_14701a628();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14701a628 FUN_14701a628 body=89 status=ok
// SIG undefined FUN_14701a628(void)

void FUN_14701a628(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14701a682 FUN_14701a682 body=67 status=ok
// SIG undefined FUN_14701a682(void)

void FUN_14701a682(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701a6c6 FUN_14701a6c6 body=52 status=ok
// SIG undefined FUN_14701a6c6(void)

void FUN_14701a6c6(longlong *param_1)

{
  FUN_14701a6fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14701a6fa FUN_14701a6fa body=89 status=ok
// SIG undefined FUN_14701a6fa(void)

void FUN_14701a6fa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14701a754 FUN_14701a754 body=52 status=ok
// SIG undefined FUN_14701a754(void)

void FUN_14701a754(longlong *param_1)

{
  FUN_14701a788();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14701a788 FUN_14701a788 body=89 status=ok
// SIG undefined FUN_14701a788(void)

void FUN_14701a788(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14701a7e2 FUN_14701a7e2 body=52 status=ok
// SIG undefined FUN_14701a7e2(void)

void FUN_14701a7e2(longlong *param_1)

{
  FUN_14701a816();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14701a816 FUN_14701a816 body=89 status=ok
// SIG undefined FUN_14701a816(void)

void FUN_14701a816(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14701a870 FUN_14701a870 body=114 status=ok
// SIG undefined FUN_14701a870(void)

void FUN_14701a870(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14701a8e2 FUN_14701a8e2 body=76 status=ok
// SIG undefined FUN_14701a8e2(void)

void FUN_14701a8e2(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_140f8aa92(param_1);
  return;
}



// FUNCTION 14701a92e FUN_14701a92e body=98 status=ok
// SIG undefined FUN_14701a92e(void)

ulonglong FUN_14701a92e(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if (((*(longlong *)(param_1 + lVar3) != *(longlong *)(param_2 + lVar3)) ||
          (*(int *)(param_1 + 0x10 + lVar3) != *(int *)(param_2 + 0x10 + lVar3))) ||
         (cVar1 = FUN_14701a990(*(undefined8 *)(param_1 + 8 + lVar3),
                                *(undefined8 *)(param_2 + 8 + lVar3)), cVar1 == '\0')) {
        uVar2 = 0;
        break;
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14701a990 FUN_14701a990 body=46 status=ok
// SIG undefined FUN_14701a990(void)

undefined8 FUN_14701a990(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(longlong *)(param_1 + lVar1) != *(longlong *)(param_2 + lVar1)) ||
         (*(longlong *)(param_1 + 8 + lVar1) != *(longlong *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 14701a9be FUN_14701a9be body=136 status=ok
// SIG undefined FUN_14701a9be(void)

void FUN_14701a9be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((int)param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
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



// FUNCTION 14701aa48 FUN_14701aa48 body=132 status=ok
// SIG undefined FUN_14701aa48(void)

void FUN_14701aa48(longlong param_1,int param_2)

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



// FUNCTION 14701aace FUN_14701aace body=95 status=ok
// SIG undefined FUN_14701aace(void)

void FUN_14701aace(longlong param_1,uint param_2)

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



// FUNCTION 14701ab2e FUN_14701ab2e body=476 status=ok
// SIG undefined FUN_14701ab2e(void)

void FUN_14701ab2e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 14701ad0c FUN_14701ad0c body=114 status=ok
// SIG undefined FUN_14701ad0c(void)

undefined8 * FUN_14701ad0c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1447bda9e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 14701ad7e FUN_14701ad7e body=38 status=ok
// SIG undefined FUN_14701ad7e(void)

undefined8 FUN_14701ad7e(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14701ada4 FUN_14701ada4 body=132 status=ok
// SIG undefined FUN_14701ada4(void)

void FUN_14701ada4(longlong param_1,int param_2)

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



// FUNCTION 14701ae2a FUN_14701ae2a body=188 status=ok
// SIG undefined FUN_14701ae2a(void)

longlong FUN_14701ae2a(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  int *local_30;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_14701aec9;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_14701aee8(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_14701aec9:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 14701aee8 FUN_14701aee8 body=286 status=ok
// SIG undefined FUN_14701aee8(void)

undefined4 * FUN_14701aee8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146865448(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_14686552e(param_1,param_3,local_40,local_48);
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
      local_40[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_146865648(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701b008 FUN_14701b008 body=31 status=ok
// SIG undefined FUN_14701b008(void)

undefined8 FUN_14701b008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14701b044 FUN_14701b044 body=93 status=ok
// SIG undefined FUN_14701b044(void)

void FUN_14701b044(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fcb800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14701b0a2 FUN_14701b0a2 body=126 status=ok
// SIG undefined FUN_14701b0a2(void)

void FUN_14701b0a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149fcb800;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014701b111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14701b120 FUN_14701b120 body=21 status=ok
// SIG undefined FUN_14701b120(void)

undefined8 FUN_14701b120(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14701b18a FUN_14701b18a body=64 status=ok
// SIG undefined FUN_14701b18a(void)

void FUN_14701b18a(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0x10))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701b1cc FUN_14701b1cc body=91 status=ok
// SIG undefined FUN_14701b1cc(void)

undefined8 FUN_14701b1cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c9485b8 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    local_18 = *param_3;
    local_10 = param_3[1];
    uVar1 = (**(code **)(*DAT_14c9485b8 + 0x70))(DAT_14c9485b8,param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701b228 FUN_14701b228 body=62 status=ok
// SIG undefined FUN_14701b228(void)

void FUN_14701b228(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14701b266(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14701b266 FUN_14701b266 body=93 status=ok
// SIG undefined FUN_14701b266(void)

ulonglong FUN_14701b266(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14701b2c4 FUN_14701b2c4 body=48 status=ok
// SIG undefined FUN_14701b2c4(void)

void FUN_14701b2c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14701b2f4 FUN_14701b2f4 body=445 status=ok
// SIG undefined FUN_14701b2f4(void)

void FUN_14701b2f4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_147008ecb(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14701b4b2 FUN_14701b4b2 body=473 status=ok
// SIG undefined FUN_14701b4b2(void)

void FUN_14701b4b2(longlong *param_1)

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



// FUNCTION 14701b68c FUN_14701b68c body=413 status=ok
// SIG undefined FUN_14701b68c(void)

void FUN_14701b68c(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 14701b82a FUN_14701b82a body=295 status=ok
// SIG undefined FUN_14701b82a(void)

undefined4 * FUN_14701b82a(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14701b952(param_1,local_48);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  local_40[4] = param_3[4];
  local_40[5] = uVar5;
  local_40[6] = uVar6;
  local_40[7] = uVar7;
  *local_40 = uVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = FUN_147008ecb(local_40);
  cVar8 = FUN_14701ba38(param_1,uVar9,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar8 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar10) {
      uVar11 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      local_40[9] = uVar9;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
      ;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_14701bb6e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701b952 FUN_14701b952 body=230 status=ok
// SIG undefined FUN_14701b952(void)

int * FUN_14701b952(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14701ba38 FUN_14701ba38 body=93 status=ok
// SIG undefined FUN_14701ba38(void)

undefined8 FUN_14701ba38(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_14701ba96(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14701bafc(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 14701ba96 FUN_14701ba96 body=101 status=ok
// SIG undefined FUN_14701ba96(void)

int FUN_14701ba96(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(longlong *)(lVar3 + lVar5 * 0x28) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x28, *(longlong *)(lVar1 + 0x10) == param_3[2])) &&
           (*(longlong *)(lVar1 + 0x18) == param_3[3])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x20 + lVar5 * 0x28);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 14701bafc FUN_14701bafc body=114 status=ok
// SIG undefined FUN_14701bafc(void)

void FUN_14701bafc(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14701bb6e FUN_14701bb6e body=438 status=ok
// SIG undefined FUN_14701bb6e(void)

void FUN_14701bb6e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_147008ecb(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14701bd26 FUN_14701bd26 body=418 status=ok
// SIG undefined FUN_14701bd26(void)

void FUN_14701bd26(longlong *param_1,uint param_2)

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



// FUNCTION 14701bec8 FUN_14701bec8 body=307 status=ok
// SIG undefined FUN_14701bec8(void)

undefined4 * FUN_14701bec8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14701bffc(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  local_40[4] = puVar1[4];
  local_40[5] = uVar7;
  local_40[6] = uVar8;
  local_40[7] = uVar9;
  *local_40 = uVar3;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  *(undefined8 *)(local_40 + 8) = *puVar2;
  local_40[10] = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = FUN_147008ecb(local_40);
  cVar10 = FUN_14701c0ea(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar12) {
      uVar13 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_40[0xb] = uVar11;
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      local_40[10] = *(undefined4 *)
                      (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) *
                                4);
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar14;
      FUN_14701b2f4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701bffc FUN_14701bffc body=238 status=ok
// SIG undefined FUN_14701bffc(void)

int * FUN_14701bffc(longlong *param_1,int *param_2)

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



// FUNCTION 14701c0ea FUN_14701c0ea body=106 status=ok
// SIG undefined FUN_14701c0ea(void)

undefined8 FUN_14701c0ea(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_147008e62(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(lVar2 + 0x20 + lVar12) = *(undefined8 *)(param_3 + 8);
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14701c154(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 14701c154 FUN_14701c154 body=122 status=ok
// SIG undefined FUN_14701c154(void)

void FUN_14701c154(longlong *param_1,int param_2)

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



// FUNCTION 14701c1ce FUN_14701c1ce body=138 status=ok
// SIG undefined FUN_14701c1ce(void)

void FUN_14701c1ce(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14701c258 FUN_14701c258 body=142 status=ok
// SIG undefined FUN_14701c258(void)

void FUN_14701c258(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_147008ecb(param_2);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar2 * 0x30;
        if (((*(longlong *)(*param_1 + (longlong)iVar2 * 0x30) == *param_2) &&
            (*(longlong *)(lVar1 + 0x10) == param_2[2])) &&
           (*(longlong *)(lVar1 + 0x18) == param_2[3])) {
          FUN_14701c2e6(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14701c2e6 FUN_14701c2e6 body=95 status=ok
// SIG undefined FUN_14701c2e6(void)

void FUN_14701c2e6(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_14701c154();
  return;
}



// FUNCTION 14701c346 FUN_14701c346 body=403 status=ok
// SIG undefined FUN_14701c346(void)

void FUN_14701c346(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
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
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14701c4da FUN_14701c4da body=474 status=ok
// SIG undefined FUN_14701c4da(void)

void FUN_14701c4da(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14701c6b6 FUN_14701c6b6 body=324 status=ok
// SIG undefined FUN_14701c6b6(void)

undefined4 * FUN_14701c6b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  FUN_14701c7fc(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14701c8e2(param_1,uVar4,local_40,&local_4c);
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
      FUN_14701c4da(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701c7fc FUN_14701c7fc body=230 status=ok
// SIG undefined FUN_14701c7fc(void)

int * FUN_14701c7fc(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14701c8e2 FUN_14701c8e2 body=128 status=ok
// SIG undefined FUN_14701c8e2(void)

undefined8 FUN_14701c8e2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14701c962((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14701c962 FUN_14701c962 body=114 status=ok
// SIG undefined FUN_14701c962(void)

void FUN_14701c962(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14701c9d4 FUN_14701c9d4 body=405 status=ok
// SIG undefined FUN_14701c9d4(void)

void FUN_14701c9d4(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
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
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14701cb6a FUN_14701cb6a body=477 status=ok
// SIG undefined FUN_14701cb6a(void)

void FUN_14701cb6a(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 14701cd48 FUN_14701cd48 body=312 status=ok
// SIG undefined FUN_14701cd48(void)

undefined4 * FUN_14701cd48(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14701ce82(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14701cf68(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14701cb6a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701ce82 FUN_14701ce82 body=229 status=ok
// SIG undefined FUN_14701ce82(void)

int * FUN_14701ce82(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14701cf68 FUN_14701cf68 body=124 status=ok
// SIG undefined FUN_14701cf68(void)

undefined8 FUN_14701cf68(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14701cfe4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14701cfe4 FUN_14701cfe4 body=114 status=ok
// SIG undefined FUN_14701cfe4(void)

void FUN_14701cfe4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14701d056 FUN_14701d056 body=91 status=ok
// SIG undefined FUN_14701d056(void)

undefined8 * FUN_14701d056(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  _Src = *(void **)((longlong)param_2 + 0x50);
  if (*(void **)((longlong)param_2 + 0x50) == (void *)0x0) {
    _Src = param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0x58);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14701d1f0(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_1;
}



// FUNCTION 14701d0b2 FUN_14701d0b2 body=74 status=ok
// SIG undefined FUN_14701d0b2(void)

void FUN_14701d0b2(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x5c)) {
    return;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  FUN_14701d0fc(param_1,*(undefined4 *)(param_1 + 0x58));
  return;
}



// FUNCTION 14701d0fc FUN_14701d0fc body=132 status=ok
// SIG undefined FUN_14701d0fc(void)

void FUN_14701d0fc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,8);
  return;
}



// FUNCTION 14701d180 FUN_14701d180 body=110 status=ok
// SIG undefined FUN_14701d180(void)

void FUN_14701d180(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x5c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    FUN_14701d0fc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14701d1f0 FUN_14701d1f0 body=98 status=ok
// SIG undefined FUN_14701d1f0(void)

void FUN_14701d1f0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14701d252 FUN_14701d252 body=119 status=ok
// SIG undefined FUN_14701d252(void)

void FUN_14701d252(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0xac)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_145782e58(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14701d2ca FUN_14701d2ca body=93 status=ok
// SIG undefined FUN_14701d2ca(void)

void FUN_14701d2ca(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = (int)plVar1[1];
  iVar3 = ~*(uint *)(param_1 + 1) + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*plVar1 + (longlong)(int)*(uint *)(param_1 + 1) * 8),
            (void *)(*plVar1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
    iVar2 = (int)plVar1[1];
  }
  *(int *)(plVar1 + 1) = iVar2 + -1;
  FUN_145782e1a(plVar1);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 14701d328 FUN_14701d328 body=118 status=ok
// SIG undefined FUN_14701d328(void)

void FUN_14701d328(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14701ada4(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_145782e1a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14701d3a0 FUN_14701d3a0 body=62 status=ok
// SIG undefined FUN_14701d3a0(void)

void FUN_14701d3a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar1 = param_1;
  }
  FUN_14701d889(lVar1,*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14701d3de FUN_14701d3de body=83 status=ok
// SIG undefined FUN_14701d3de(void)

void FUN_14701d3de(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
  iVar1 = (int)(uVar2 >> 4);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0xac)) {
    return;
  }
  *(int *)(param_1 + 0xac) = iVar3;
  FUN_14701d432(param_1,*(undefined4 *)(param_1 + 0xa8));
  return;
}



// FUNCTION 14701d432 FUN_14701d432 body=141 status=ok
// SIG undefined FUN_14701d432(void)

void FUN_14701d432(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x10);
  return;
}



// FUNCTION 14701d4c0 FUN_14701d4c0 body=119 status=ok
// SIG undefined FUN_14701d4c0(void)

void FUN_14701d4c0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0xac)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_14701d432(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14701d538 FUN_14701d538 body=565 status=ok
// SIG undefined FUN_14701d538(void)

void FUN_14701d538(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      puVar2 = (ulonglong *)*plVar8;
      puVar9 = (ulonglong *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 3);
      puVar7 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_14701d5fb:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar6 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar6 + -2;
            do {
              puVar10 = puVar6;
              puVar15 = puVar1;
              puVar6 = puVar10 + -1;
              if (puVar6 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar6);
            if (puVar6 < puVar3) goto LAB_14701d679;
            uVar12 = *puVar3;
            *puVar3 = *puVar6;
            *puVar6 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar7 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                if (uVar12 < *puVar13) {
                  puVar7 = puVar13;
                  uVar12 = *puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_14701d74c;
      }
LAB_14701d761:
      FUN_14701d76e(puVar2);
LAB_14701d74c:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14701d679:
  uVar12 = *puVar2;
  *puVar2 = *puVar6;
  *puVar6 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar6 <= puVar2 + 1) goto LAB_14701d74c;
  }
  else {
    if (puVar2 + 1 < puVar6) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_14701d74c;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 3);
  puVar7 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_14701d761;
  goto LAB_14701d5fb;
}



// FUNCTION 14701d76e FUN_14701d76e body=283 status=ok
// SIG undefined FUN_14701d76e(void)

void FUN_14701d76e(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x00014701d78f:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar4 = param_1[iVar3];
        if (uVar4 < (ulonglong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar4;
          iVar3 = iVar6;
          goto joined_r0x00014701d78f;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar2 = param_1[iVar8];
            if ((ulonglong)param_1[iVar7] <= uVar2) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar2;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 14701d889 FUN_14701d889 body=43 status=ok
// SIG undefined FUN_14701d889(void)

void FUN_14701d889(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14701d8b4 FUN_14701d8b4 body=114 status=ok
// SIG undefined FUN_14701d8b4(void)

void FUN_14701d8b4(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14701d926 FUN_14701d926 body=96 status=ok
// SIG undefined FUN_14701d926(void)

void FUN_14701d926(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 14701d986 FUN_14701d986 body=132 status=ok
// SIG undefined FUN_14701d986(void)

void FUN_14701d986(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14701da0b FUN_14701da0b body=47 status=ok
// SIG undefined FUN_14701da0b(void)

void FUN_14701da0b(longlong param_1,int param_2)

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



// FUNCTION 14701da3a FUN_14701da3a body=103 status=ok
// SIG undefined FUN_14701da3a(void)

undefined8 FUN_14701da3a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x28)) {
    uVar4 = uVar2 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,8);
  }
  return uVar3;
}



// FUNCTION 14701daa2 FUN_14701daa2 body=147 status=ok
// SIG undefined FUN_14701daa2(void)

void FUN_14701daa2(longlong param_1,int param_2)

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



// FUNCTION 14701db36 FUN_14701db36 body=104 status=ok
// SIG undefined FUN_14701db36(void)

uint FUN_14701db36(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  if (uVar2 == uVar3) {
    uVar3 = *param_2;
    uVar2 = *param_1;
    if (uVar2 != uVar3) goto LAB_14701db72;
    uVar3 = param_2[2];
    uVar2 = param_1[2];
    if (uVar2 != uVar3) goto LAB_14701db72;
    if ((uint)param_1[3] == (uint)param_2[3]) {
      uVar1 = *(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_2 + 0x1c);
      goto LAB_14701db81;
    }
    uVar2 = (ulonglong)(uint)param_1[3];
    uVar3 = (ulonglong)(uint)param_2[3];
  }
  else {
LAB_14701db72:
    if ((int)uVar2 == (int)uVar3) {
      uVar1 = (int)(uVar2 >> 0x20) - (int)(uVar3 >> 0x20);
      goto LAB_14701db81;
    }
    uVar2 = uVar2 & 0xffffffff;
    uVar3 = uVar3 & 0xffffffff;
  }
  uVar1 = FUN_14002c2bd(uVar2,uVar3);
LAB_14701db81:
  return uVar1 >> 0x1f;
}



// FUNCTION 14701db9e FUN_14701db9e body=403 status=ok
// SIG undefined FUN_14701db9e(void)

void FUN_14701db9e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
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
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14701dd32 FUN_14701dd32 body=474 status=ok
// SIG undefined FUN_14701dd32(void)

void FUN_14701dd32(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14701df0e FUN_14701df0e body=324 status=ok
// SIG undefined FUN_14701df0e(void)

undefined4 * FUN_14701df0e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14701e054(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14701e13a(param_1,uVar4,local_40,&local_4c);
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
      FUN_14701dd32(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701e054 FUN_14701e054 body=230 status=ok
// SIG undefined FUN_14701e054(void)

int * FUN_14701e054(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14701e13a FUN_14701e13a body=128 status=ok
// SIG undefined FUN_14701e13a(void)

undefined8 FUN_14701e13a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14701e1ba((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14701e1ba FUN_14701e1ba body=114 status=ok
// SIG undefined FUN_14701e1ba(void)

void FUN_14701e1ba(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14701e22c FUN_14701e22c body=331 status=ok
// SIG undefined FUN_14701e22c(void)

longlong * FUN_14701e22c(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 != 0) {
    FUN_14701e37a(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      puVar6 = (undefined4 *)((longlong)iStack_54 * 0x18 + *local_70);
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_14701e3da(param_2,iVar5);
      }
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
      *puVar1 = *puVar6;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14701e37a FUN_14701e37a body=95 status=ok
// SIG undefined FUN_14701e37a(void)

void FUN_14701e37a(longlong param_1,uint param_2)

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



// FUNCTION 14701e3da FUN_14701e3da body=132 status=ok
// SIG undefined FUN_14701e3da(void)

void FUN_14701e3da(longlong param_1,int param_2)

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



// FUNCTION 14701e46c FUN_14701e46c body=132 status=ok
// SIG undefined FUN_14701e46c(void)

void FUN_14701e46c(longlong param_1,int param_2)

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



// FUNCTION 14701e4f2 FUN_14701e4f2 body=411 status=ok
// SIG undefined FUN_14701e4f2(void)

void FUN_14701e4f2(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 14701e68e FUN_14701e68e body=335 status=ok
// SIG undefined FUN_14701e68e(void)

undefined4 * FUN_14701e68e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14701e7de(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14701e8c4(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14701b4b2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701e7de FUN_14701e7de body=230 status=ok
// SIG undefined FUN_14701e7de(void)

int * FUN_14701e7de(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14701e8c4 FUN_14701e8c4 body=128 status=ok
// SIG undefined FUN_14701e8c4(void)

undefined8 FUN_14701e8c4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14701e944((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14701e944 FUN_14701e944 body=114 status=ok
// SIG undefined FUN_14701e944(void)

void FUN_14701e944(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14701e9b6 FUN_14701e9b6 body=326 status=ok
// SIG undefined FUN_14701e9b6(void)

undefined4 * FUN_14701e9b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14701eafe(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14701ebe4(param_1,uVar4,local_40,&local_4c);
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
      FUN_14701ecd6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701eafe FUN_14701eafe body=230 status=ok
// SIG undefined FUN_14701eafe(void)

int * FUN_14701eafe(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14701ebe4 FUN_14701ebe4 body=128 status=ok
// SIG undefined FUN_14701ebe4(void)

undefined8 FUN_14701ebe4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14701ec64((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14701ec64 FUN_14701ec64 body=114 status=ok
// SIG undefined FUN_14701ec64(void)

void FUN_14701ec64(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14701ecd6 FUN_14701ecd6 body=474 status=ok
// SIG undefined FUN_14701ecd6(void)

void FUN_14701ecd6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14701eeb2 FUN_14701eeb2 body=114 status=ok
// SIG undefined FUN_14701eeb2(void)

void FUN_14701eeb2(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14701ef24 FUN_14701ef24 body=114 status=ok
// SIG undefined FUN_14701ef24(void)

void FUN_14701ef24(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 14701ef96 FUN_14701ef96 body=116 status=ok
// SIG undefined FUN_14701ef96(void)

void FUN_14701ef96(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 14701f00a FUN_14701f00a body=122 status=ok
// SIG undefined FUN_14701f00a(void)

void FUN_14701f00a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 14701f084 FUN_14701f084 body=90 status=ok
// SIG undefined FUN_14701f084(void)

void FUN_14701f084(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14701a870();
  return;
}



// FUNCTION 14701f0de FUN_14701f0de body=209 status=ok
// SIG undefined FUN_14701f0de(void)

void FUN_14701f0de(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar2 = (longlong)(int)uVar1;
  if (lVar2 != 0) {
    plVar9 = (longlong *)param_1[1];
    if ((longlong *)param_1[1] == (longlong *)0x0) {
      plVar9 = param_1;
    }
    uVar3 = 0;
    bVar10 = *plVar9 == *(longlong *)*param_2;
    uVar6 = 0;
    do {
      uVar4 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar1) {
        uVar4 = uVar1;
      }
      uVar7 = uVar6;
      uVar5 = (ulonglong)uVar6;
      do {
        uVar5 = uVar5 + 1;
        uVar8 = uVar4;
        if (lVar2 <= (longlong)uVar5) break;
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
      } while (bVar10 == (plVar9[uVar5] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar3 != uVar6) {
          memmove(plVar9 + (int)uVar3,plVar9 + uVar6,(longlong)(int)(uVar8 - uVar6) << 3);
        }
        uVar3 = uVar3 + (uVar8 - uVar6);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar6 = uVar8;
    } while ((longlong)uVar5 < lVar2);
    *(uint *)(param_1 + 2) = uVar3;
  }
  return;
}



// FUNCTION 14701f1b0 FUN_14701f1b0 body=201 status=ok
// SIG undefined FUN_14701f1b0(void)

void FUN_14701f1b0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 14701f27a FUN_14701f27a body=90 status=ok
// SIG undefined FUN_14701f27a(void)

void FUN_14701f27a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14701a870();
  return;
}



// FUNCTION 14701f2d4 FUN_14701f2d4 body=58 status=ok
// SIG undefined FUN_14701f2d4(void)

void FUN_14701f2d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14701f30e(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_140899a74(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,8);
  return;
}



// FUNCTION 14701f30e FUN_14701f30e body=108 status=ok
// SIG undefined FUN_14701f30e(void)

ulonglong FUN_14701f30e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14701f37a FUN_14701f37a body=132 status=ok
// SIG undefined FUN_14701f37a(void)

void FUN_14701f37a(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x28) == param_2) {
          FUN_14701f3fe(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14701f3fe FUN_14701f3fe body=87 status=ok
// SIG undefined FUN_14701f3fe(void)

void FUN_14701f3fe(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_14701f456();
  return;
}



// FUNCTION 14701f456 FUN_14701f456 body=52 status=ok
// SIG undefined FUN_14701f456(void)

void FUN_14701f456(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14701eeb2(param_1,param_2);
  return;
}



// FUNCTION 14701f48a FUN_14701f48a body=62 status=ok
// SIG undefined FUN_14701f48a(void)

void FUN_14701f48a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14701f4c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14701f4c8 FUN_14701f4c8 body=93 status=ok
// SIG undefined FUN_14701f4c8(void)

ulonglong FUN_14701f4c8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14701f526 FUN_14701f526 body=141 status=ok
// SIG undefined FUN_14701f526(void)

longlong FUN_14701f526(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147008e62();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x30;
    if (lVar3 + lVar2 != 0) goto LAB_14701f563;
  }
  local_30 = param_3;
  FUN_14701f5b4(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x30;
LAB_14701f563:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701f5b4 FUN_14701f5b4 body=286 status=ok
// SIG undefined FUN_14701f5b4(void)

undefined4 * FUN_14701f5b4(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14701bffc(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  local_40[4] = puVar1[4];
  local_40[5] = uVar6;
  local_40[6] = uVar7;
  local_40[7] = uVar8;
  *local_40 = uVar2;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 8) = 0;
  local_40[10] = 0xffffffff;
  cVar9 = FUN_14701c0ea(param_1,param_3,local_40,local_48);
  if (cVar9 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar10) {
      uVar11 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0xb] = param_3;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      local_40[10] = *(undefined4 *)
                      (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) *
                                4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_14701b2f4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701f6d4 FUN_14701f6d4 body=180 status=ok
// SIG undefined FUN_14701f6d4(void)

longlong * FUN_14701f6d4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14701f76b;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14701f78a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_14701f76b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14701f78a FUN_14701f78a body=278 status=ok
// SIG undefined FUN_14701f78a(void)

undefined4 * FUN_14701f78a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14701e7de(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_14701e8c4(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14701b4b2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701f8a2 FUN_14701f8a2 body=132 status=ok
// SIG undefined FUN_14701f8a2(void)

void FUN_14701f8a2(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_14701f926(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14701f926 FUN_14701f926 body=87 status=ok
// SIG undefined FUN_14701f926(void)

void FUN_14701f926(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14701e944();
  return;
}



// FUNCTION 14701f97e FUN_14701f97e body=427 status=ok
// SIG undefined FUN_14701f97e(void)

void FUN_14701f97e(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  uint local_5c;
  undefined8 local_58;
  undefined1 local_4b;
  byte local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar1 = *(byte *)param_1[4];
  bVar2 = *(byte *)param_1[3];
  bVar3 = ((byte *)param_1[3])[1];
  uVar4 = *(undefined8 *)(*(longlong *)param_1[1] + (longlong)param_2 * 8);
  local_5c = 0;
  lVar13 = *(longlong *)(*(longlong *)param_1[5] + 0x10);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)param_1[5];
  }
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,5);
  FUN_14493566c(&local_5c,0,lVar13);
  if ((ulonglong)local_5c < 8) {
    puVar16 = &DAT_14c75f4e0 + (ulonglong)local_5c * 4;
    lVar13 = 1;
  }
  else {
    if (local_5c - 9 < 10) {
      puVar16 = (&PTR_DAT_149fcbc50)[local_5c - 9];
    }
    else {
      puVar16 = &DAT_14c75f500;
    }
    lVar13 = (ulonglong)(local_5c - 0x11 < 2) + 2;
  }
  lVar12 = 0;
  uVar17 = 0;
  do {
    bVar8 = (**(code **)param_1[6])(puVar16[lVar12 * 4]);
    if (((byte)(bVar2 & bVar1 & ~bVar8) == 0) && ((bVar1 & bVar3 & bVar8) == 0)) {
      lVar5 = param_1[3];
      lVar10 = lVar5 + 8;
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        lVar10 = *(longlong *)(lVar5 + 0x10);
      }
      if ((longlong)*(int *)(lVar5 + 0x18) != 0) {
        lVar14 = 0;
        do {
          bVar15 = *(byte *)(lVar10 + lVar14) & *(byte *)param_1[4];
          if ((bVar15 != 0) && ((bVar15 & bVar8) == 0)) goto LAB_14701faf6;
          lVar14 = lVar14 + 1;
        } while (*(int *)(lVar5 + 0x18) != lVar14);
      }
      puVar6 = (undefined8 *)*param_1;
      local_4b = *(undefined1 *)param_1[2];
      pcVar7 = (code *)*puVar6;
      plVar11 = puVar6 + 4;
      if ((longlong *)puVar6[2] != (longlong *)0x0) {
        plVar11 = (longlong *)puVar6[2];
      }
      local_58 = uVar4;
      local_4a = bVar8;
      local_49 = uVar17;
      uVar9 = (**(code **)(*plVar11 + 8))();
      local_68 = &local_49;
      (*pcVar7)(uVar9,&local_58,&local_4b);
      uVar17 = 1;
    }
LAB_14701faf6:
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar13) {
      if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14701fb2a FUN_14701fb2a body=312 status=ok
// SIG undefined FUN_14701fb2a(void)

void FUN_14701fb2a(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auStack_78 [32];
  byte *local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined1 local_3b;
  byte local_3a [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar11 = *(byte *)param_1[4];
  bVar1 = *(byte *)param_1[3];
  bVar2 = ((byte *)param_1[3])[1];
  uVar6 = *(undefined8 *)(*(longlong *)param_1[1] + (longlong)param_2 * 8);
  lVar9 = *(longlong *)(*(longlong *)param_1[5] + 0x10);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)param_1[5];
  }
  local_58 = (byte *)CONCAT44(local_58._4_4_,1);
  FUN_14493566c(local_4c,0,lVar9);
  bVar5 = (**(code **)param_1[6])(local_4c[0]);
  if (((byte)(bVar1 & bVar11 & ~bVar5) == 0) && ((bVar11 & bVar2 & bVar5) == 0)) {
    lVar9 = param_1[3];
    lVar7 = lVar9 + 8;
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      lVar7 = *(longlong *)(lVar9 + 0x10);
    }
    if ((longlong)*(int *)(lVar9 + 0x18) != 0) {
      lVar10 = 0;
      do {
        bVar11 = *(byte *)(lVar7 + lVar10) & *(byte *)param_1[4];
        if ((bVar11 != 0) && ((bVar11 & bVar5) == 0)) goto LAB_14701fc3f;
        lVar10 = lVar10 + 1;
      } while (*(int *)(lVar9 + 0x18) != lVar10);
    }
    puVar3 = (undefined8 *)*param_1;
    local_3b = *(undefined1 *)param_1[2];
    local_3a[1] = 0;
    pcVar4 = (code *)*puVar3;
    plVar8 = puVar3 + 4;
    if ((longlong *)puVar3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)puVar3[2];
    }
    local_48 = uVar6;
    local_3a[0] = bVar5;
    uVar6 = (**(code **)(*plVar8 + 8))();
    local_58 = local_3a + 1;
    (*pcVar4)(uVar6,&local_48,&local_3b,local_3a);
  }
LAB_14701fc3f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701fc64 FUN_14701fc64 body=147 status=ok
// SIG undefined FUN_14701fc64(void)

void FUN_14701fc64(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14701fcf8 FUN_14701fcf8 body=147 status=ok
// SIG undefined FUN_14701fcf8(void)

void FUN_14701fcf8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14701fd8c FUN_14701fd8c body=118 status=ok
// SIG undefined FUN_14701fd8c(void)

void FUN_14701fd8c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14700a186(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14700a42a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14701fe04 FUN_14701fe04 body=336 status=ok
// SIG undefined FUN_14701fe04(void)

void FUN_14701fe04(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_98 [42];
  byte local_6e;
  byte local_6d;
  int local_6c;
  int local_68;
  int local_64;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    puVar2 = (undefined8 *)*param_1;
    local_50 = *puVar2;
    pcVar3 = (code *)*param_2;
    plVar8 = (longlong *)param_2[2];
    if ((longlong *)param_2[2] == (longlong *)0x0) {
      plVar8 = param_2 + 4;
    }
    local_60 = param_1;
    uVar6 = (**(code **)(*plVar8 + 8))();
    bVar4 = (*pcVar3)(uVar6,&local_50);
    iVar10 = 0;
    iVar11 = 0;
    do {
      local_6d = bVar4;
      local_6e = local_6d ^ 1;
      lVar7 = (longlong)iVar11;
      local_64 = iVar11 + 1;
      if (iVar11 + 1 < iVar1) {
        local_64 = iVar1;
      }
      bVar4 = local_6d & 1;
      local_6c = iVar10;
      local_68 = iVar11;
      local_58 = lVar7;
      do {
        lVar7 = lVar7 + 1;
        iVar10 = local_64;
        if (lVar12 <= lVar7) break;
        local_50 = puVar2[lVar7];
        pcVar3 = (code *)*param_2;
        plVar8 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar8 = param_2 + 4;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        bVar5 = (*pcVar3)(uVar6,&local_50);
        iVar11 = iVar11 + 1;
        iVar10 = iVar11;
      } while (bVar4 == bVar5);
      iVar11 = iVar10;
      iVar10 = local_6c;
      if ((local_6d & 1) == 0) {
        iVar9 = iVar11 - local_68;
        if (local_6c != local_68) {
          memmove(puVar2 + local_6c,puVar2 + local_58,(longlong)iVar9 << 3);
        }
        iVar10 = iVar10 + iVar9;
      }
      bVar4 = local_6e;
    } while (lVar7 < lVar12);
    *(int *)(local_60 + 1) = iVar10;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14701ff56 FUN_14701ff56 body=327 status=ok
// SIG undefined FUN_14701ff56(void)

void FUN_14701ff56(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (int)param_1[1]) {
    lVar8 = 0;
    bVar7 = false;
    do {
      while( true ) {
        local_50 = *(undefined8 *)(*param_1 + lVar8 * 8);
        pcVar1 = (code *)*param_2;
        plVar5 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar5 = param_2 + 4;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        cVar2 = (*pcVar1)(uVar4,&local_50);
        if (cVar2 == '\0') break;
        do {
          iVar3 = (int)param_1[1];
          if (iVar3 - 1U != (uint)lVar8) {
            iVar6 = iVar3 + ~(uint)lVar8;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            memmove((void *)(*param_1 + lVar8 * 8),
                    (void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),(longlong)iVar6 << 3);
            iVar3 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar3 + -1;
          if (iVar3 + -1 <= lVar8) goto LAB_147020094;
          local_50 = *(undefined8 *)(*param_1 + lVar8 * 8);
          pcVar1 = (code *)*param_2;
          plVar5 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar5 = param_2 + 4;
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar2 = (*pcVar1)(uVar4,&local_50);
        } while (cVar2 != '\0');
        lVar8 = lVar8 + 1;
        bVar7 = true;
        if ((int)param_1[1] <= lVar8) goto LAB_147020094;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[1]);
    if (!bVar7) goto LAB_14702006c;
LAB_147020094:
    FUN_14700a42a(param_1);
  }
LAB_14702006c:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14702009e FUN_14702009e body=89 status=ok
// SIG undefined FUN_14702009e(void)

void FUN_14702009e(longlong param_1,int param_2)

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



// FUNCTION 1470200f8 FUN_1470200f8 body=72 status=ok
// SIG undefined FUN_1470200f8(void)

int FUN_1470200f8(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *param_1;
  if (param_2 != 1) {
    if (param_2 == 2) {
      if (iVar1 == 3) {
        return param_1[1] + 9;
      }
      if (iVar1 == 2) {
        return param_1[1] + 7;
      }
      bVar2 = iVar1 == 1;
      iVar1 = 0x10;
      if (bVar2) {
        return (param_1[1] - 2U >> 1) + 8;
      }
    }
    else {
      iVar1 = (iVar1 != 1) + 0x11;
    }
  }
  return iVar1;
}



// FUNCTION 147020140 FUN_147020140 body=384 status=ok
// SIG undefined FUN_147020140(void)

void FUN_147020140(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  undefined local_60 [12];
  undefined local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *param_1;
  if ((ulonglong)uVar4 < 8) {
    puVar6 = &DAT_14c75f4e0 + (ulonglong)uVar4 * 4;
    iVar7 = 1;
  }
  else {
    uVar4 = uVar4 - 9;
    if (uVar4 < 10) {
      iVar7 = *(int *)(&DAT_149fcbbd4 + (ulonglong)uVar4 * 4);
      puVar6 = (&PTR_DAT_149fcbc50)[uVar4];
    }
    else {
      puVar6 = &DAT_14c75f500;
      iVar7 = 2;
    }
  }
  uVar4 = *param_2;
  if ((ulonglong)uVar4 < 8) {
    puVar5 = (uint *)(&DAT_14c75f4e0 + (ulonglong)uVar4 * 4);
    lVar9 = 1;
  }
  else {
    uVar4 = uVar4 - 9;
    if (uVar4 < 10) {
      lVar9 = *(longlong *)(&DAT_149fcbc00 + (ulonglong)uVar4 * 8);
      puVar5 = (uint *)(&PTR_DAT_149fcbc50)[uVar4];
    }
    else {
      puVar5 = (uint *)&DAT_14c75f500;
      lVar9 = 2;
    }
  }
  puVar1 = puVar5 + lVar9;
  puVar10 = local_54;
  do {
    uVar4 = *puVar5;
    iVar8 = 0;
    if (iVar7 == 0) {
LAB_1470201b0:
      *(uint *)(puVar10 + (longlong)iVar8 * 4) = uVar4;
      iVar7 = iVar8 + 1;
    }
    else {
      lVar9 = 0;
      bVar3 = false;
      iVar8 = 0;
      do {
        uVar2 = *(uint *)(puVar6 + lVar9);
        puVar11 = puVar10;
        if ((uVar2 & uVar4) == uVar4) goto LAB_1470201c8;
        if ((uVar4 < uVar2) && (!bVar3)) {
          lVar12 = (longlong)iVar8;
          iVar8 = iVar8 + 1;
          *(uint *)(puVar10 + lVar12 * 4) = uVar4;
          bVar3 = true;
        }
        if ((uVar2 & uVar4) != uVar2) {
          lVar12 = (longlong)iVar8;
          iVar8 = iVar8 + 1;
          *(uint *)(puVar10 + lVar12 * 4) = uVar2;
        }
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar7 * 4 != lVar9);
      iVar7 = iVar8;
      if (!bVar3) goto LAB_1470201b0;
    }
    puVar6 = puVar10;
    puVar11 = local_54;
    if (puVar10 == local_54) {
      puVar11 = local_60;
    }
LAB_1470201c8:
    puVar5 = puVar5 + 1;
    puVar10 = puVar11;
    if (puVar5 == puVar1) {
      uVar4 = FUN_1470200f8();
      *param_1 = uVar4;
      if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1470202c1 FUN_1470202c1 body=649 status=ok
// SIG undefined FUN_1470202c1(void)

void FUN_1470202c1(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  undefined1 auStack_378 [40];
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar4 = &local_348;
    do {
      piVar3 = (int *)*plVar4;
      piVar8 = (int *)plVar4[1];
      iVar10 = (int)plVar4[2];
      uVar6 = (int)((ulonglong)((longlong)piVar8 - (longlong)piVar3) >> 2) + 1;
      piVar12 = piVar8;
      piVar11 = piVar3;
      local_350 = plVar4;
      if (iVar10 != 0) {
LAB_14702038c:
        if (8 < (int)uVar6) {
          iVar1 = piVar3[uVar6 >> 1];
          piVar3[uVar6 >> 1] = *piVar3;
          *piVar3 = iVar1;
          piVar7 = piVar8 + 1;
          piVar5 = piVar3;
          do {
            piVar2 = piVar5 + 1;
            piVar9 = piVar5 + 1;
            do {
              piVar13 = piVar9;
              piVar5 = piVar2;
              if (piVar8 < piVar5) break;
              piVar2 = piVar5 + 1;
              piVar9 = piVar13 + 1;
            } while (*(ulonglong *)(*param_3 + (longlong)*piVar5 * 8) <=
                     *(ulonglong *)(*param_3 + (longlong)*piVar3 * 8));
            piVar2 = piVar7 + -2;
            do {
              piVar9 = piVar7;
              piVar14 = piVar2;
              piVar7 = piVar9 + -1;
              if (piVar7 <= piVar3) break;
              piVar2 = piVar14 + -1;
            } while (*(ulonglong *)(*param_3 + (longlong)*piVar3 * 8) <=
                     *(ulonglong *)(*param_3 + (longlong)*piVar7 * 8));
            if (piVar7 < piVar5) goto LAB_147020420;
            iVar1 = *piVar5;
            *piVar5 = *piVar7;
            *piVar7 = iVar1;
          } while( true );
        }
        if (piVar3 < piVar8) {
          do {
            piVar12 = piVar3;
            if (piVar3 + 1 <= piVar8) {
              iVar10 = *piVar3;
              piVar11 = piVar3 + 1;
              piVar7 = piVar3;
              do {
                piVar12 = piVar11;
                iVar1 = *piVar11;
                if (*(ulonglong *)(*param_3 + (longlong)*piVar11 * 8) <=
                    *(ulonglong *)(*param_3 + (longlong)iVar10 * 8)) {
                  piVar12 = piVar7;
                  iVar1 = iVar10;
                }
                iVar10 = iVar1;
                piVar11 = piVar11 + 1;
                piVar7 = piVar12;
              } while (piVar11 <= piVar8);
            }
            iVar10 = *piVar12;
            *piVar12 = *piVar8;
            *piVar8 = iVar10;
            piVar8 = piVar8 + -1;
          } while (piVar3 < piVar8);
        }
        goto LAB_14702051c;
      }
LAB_14702053b:
      FUN_14702054b(piVar3,uVar6,param_3);
LAB_14702051c:
      plVar4 = local_350 + -3;
    } while (&local_348 <= plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147020420:
  iVar1 = *piVar3;
  *piVar3 = *piVar7;
  *piVar7 = iVar1;
  iVar10 = iVar10 + -1;
  piVar9 = piVar9 + -2;
  if ((longlong)piVar14 - (longlong)piVar11 < (longlong)piVar12 - (longlong)piVar13) {
    if (piVar5 < piVar8) {
      *local_350 = (longlong)piVar5;
      local_350[1] = (longlong)piVar8;
      *(int *)(local_350 + 2) = iVar10;
      local_350 = local_350 + 3;
    }
    piVar13 = piVar3;
    if (piVar7 <= piVar3 + 1) goto LAB_14702051c;
  }
  else {
    if (piVar3 + 1 < piVar7) {
      *local_350 = (longlong)piVar3;
      local_350[1] = (longlong)piVar9;
      *(int *)(local_350 + 2) = iVar10;
      local_350 = local_350 + 3;
    }
    piVar3 = piVar5;
    piVar9 = piVar8;
    piVar14 = piVar8;
    if (piVar8 <= piVar5) goto LAB_14702051c;
  }
  uVar6 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar13) >> 2) + 1;
  piVar8 = piVar9;
  piVar12 = piVar14;
  piVar11 = piVar13;
  if (iVar10 == 0) goto LAB_14702053b;
  goto LAB_14702038c;
}



// FUNCTION 14702054b FUN_14702054b body=327 status=ok
// SIG undefined FUN_14702054b(void)

void FUN_14702054b(undefined4 *param_1,uint param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147020570:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        lVar2 = *param_3;
        if ((iVar7 < (int)param_2) &&
           (*(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar6] * 8) <=
            *(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar7] * 8))) {
          iVar6 = iVar7;
        }
        iVar7 = param_1[iVar3];
        if (*(ulonglong *)(lVar2 + (longlong)iVar7 * 8) <
            *(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar6] * 8)) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = iVar7;
          iVar3 = iVar6;
          goto joined_r0x000147020570;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            lVar2 = *param_3;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               (*(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar6] * 8) <=
                *(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar3] * 8))) {
              iVar7 = iVar3;
            }
            iVar3 = param_1[iVar8];
            if (*(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar7] * 8) <=
                *(ulonglong *)(lVar2 + (longlong)iVar3 * 8)) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = iVar3;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147020692 FUN_147020692 body=649 status=ok
// SIG undefined FUN_147020692(void)

void FUN_147020692(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  undefined1 auStack_378 [40];
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar4 = &local_348;
    do {
      piVar3 = (int *)*plVar4;
      piVar8 = (int *)plVar4[1];
      iVar10 = (int)plVar4[2];
      uVar6 = (int)((ulonglong)((longlong)piVar8 - (longlong)piVar3) >> 2) + 1;
      piVar12 = piVar8;
      piVar11 = piVar3;
      local_350 = plVar4;
      if (iVar10 != 0) {
LAB_14702075d:
        if (8 < (int)uVar6) {
          iVar1 = piVar3[uVar6 >> 1];
          piVar3[uVar6 >> 1] = *piVar3;
          *piVar3 = iVar1;
          piVar7 = piVar8 + 1;
          piVar5 = piVar3;
          do {
            piVar2 = piVar5 + 1;
            piVar9 = piVar5 + 1;
            do {
              piVar13 = piVar9;
              piVar5 = piVar2;
              if (piVar8 < piVar5) break;
              piVar2 = piVar5 + 1;
              piVar9 = piVar13 + 1;
            } while (*(ulonglong *)(*param_3 + (longlong)*piVar5 * 8) <=
                     *(ulonglong *)(*param_3 + (longlong)*piVar3 * 8));
            piVar2 = piVar7 + -2;
            do {
              piVar9 = piVar7;
              piVar14 = piVar2;
              piVar7 = piVar9 + -1;
              if (piVar7 <= piVar3) break;
              piVar2 = piVar14 + -1;
            } while (*(ulonglong *)(*param_3 + (longlong)*piVar3 * 8) <=
                     *(ulonglong *)(*param_3 + (longlong)*piVar7 * 8));
            if (piVar7 < piVar5) goto LAB_1470207f1;
            iVar1 = *piVar5;
            *piVar5 = *piVar7;
            *piVar7 = iVar1;
          } while( true );
        }
        if (piVar3 < piVar8) {
          do {
            piVar12 = piVar3;
            if (piVar3 + 1 <= piVar8) {
              iVar10 = *piVar3;
              piVar11 = piVar3 + 1;
              piVar7 = piVar3;
              do {
                piVar12 = piVar11;
                iVar1 = *piVar11;
                if (*(ulonglong *)(*param_3 + (longlong)*piVar11 * 8) <=
                    *(ulonglong *)(*param_3 + (longlong)iVar10 * 8)) {
                  piVar12 = piVar7;
                  iVar1 = iVar10;
                }
                iVar10 = iVar1;
                piVar11 = piVar11 + 1;
                piVar7 = piVar12;
              } while (piVar11 <= piVar8);
            }
            iVar10 = *piVar12;
            *piVar12 = *piVar8;
            *piVar8 = iVar10;
            piVar8 = piVar8 + -1;
          } while (piVar3 < piVar8);
        }
        goto LAB_1470208ed;
      }
LAB_14702090c:
      FUN_14702091c(piVar3,uVar6,param_3);
LAB_1470208ed:
      plVar4 = local_350 + -3;
    } while (&local_348 <= plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1470207f1:
  iVar1 = *piVar3;
  *piVar3 = *piVar7;
  *piVar7 = iVar1;
  iVar10 = iVar10 + -1;
  piVar9 = piVar9 + -2;
  if ((longlong)piVar14 - (longlong)piVar11 < (longlong)piVar12 - (longlong)piVar13) {
    if (piVar5 < piVar8) {
      *local_350 = (longlong)piVar5;
      local_350[1] = (longlong)piVar8;
      *(int *)(local_350 + 2) = iVar10;
      local_350 = local_350 + 3;
    }
    piVar13 = piVar3;
    if (piVar7 <= piVar3 + 1) goto LAB_1470208ed;
  }
  else {
    if (piVar3 + 1 < piVar7) {
      *local_350 = (longlong)piVar3;
      local_350[1] = (longlong)piVar9;
      *(int *)(local_350 + 2) = iVar10;
      local_350 = local_350 + 3;
    }
    piVar3 = piVar5;
    piVar9 = piVar8;
    piVar14 = piVar8;
    if (piVar8 <= piVar5) goto LAB_1470208ed;
  }
  uVar6 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar13) >> 2) + 1;
  piVar8 = piVar9;
  piVar12 = piVar14;
  piVar11 = piVar13;
  if (iVar10 == 0) goto LAB_14702090c;
  goto LAB_14702075d;
}



// FUNCTION 14702091c FUN_14702091c body=327 status=ok
// SIG undefined FUN_14702091c(void)

void FUN_14702091c(undefined4 *param_1,uint param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147020941:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        lVar2 = *param_3;
        if ((iVar7 < (int)param_2) &&
           (*(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar6] * 8) <=
            *(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar7] * 8))) {
          iVar6 = iVar7;
        }
        iVar7 = param_1[iVar3];
        if (*(ulonglong *)(lVar2 + (longlong)iVar7 * 8) <
            *(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar6] * 8)) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = iVar7;
          iVar3 = iVar6;
          goto joined_r0x000147020941;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            lVar2 = *param_3;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               (*(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar6] * 8) <=
                *(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar3] * 8))) {
              iVar7 = iVar3;
            }
            iVar3 = param_1[iVar8];
            if (*(ulonglong *)(lVar2 + (longlong)(int)param_1[iVar7] * 8) <=
                *(ulonglong *)(lVar2 + (longlong)iVar3 * 8)) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = iVar3;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147020a63 FUN_147020a63 body=565 status=ok
// SIG undefined FUN_147020a63(void)

void FUN_147020a63(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      puVar2 = (ulonglong *)*plVar8;
      puVar9 = (ulonglong *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 3);
      puVar7 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_147020b26:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar6 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar6 + -2;
            do {
              puVar10 = puVar6;
              puVar15 = puVar1;
              puVar6 = puVar10 + -1;
              if (puVar6 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar6);
            if (puVar6 < puVar3) goto LAB_147020ba4;
            uVar12 = *puVar3;
            *puVar3 = *puVar6;
            *puVar6 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar7 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                if (uVar12 < *puVar13) {
                  puVar7 = puVar13;
                  uVar12 = *puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_147020c77;
      }
LAB_147020c8c:
      FUN_147020c99(puVar2);
LAB_147020c77:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147020ba4:
  uVar12 = *puVar2;
  *puVar2 = *puVar6;
  *puVar6 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar6 <= puVar2 + 1) goto LAB_147020c77;
  }
  else {
    if (puVar2 + 1 < puVar6) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_147020c77;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 3);
  puVar7 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_147020c8c;
  goto LAB_147020b26;
}



// FUNCTION 147020c99 FUN_147020c99 body=283 status=ok
// SIG undefined FUN_147020c99(void)

void FUN_147020c99(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147020cba:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar4 = param_1[iVar3];
        if (uVar4 < (ulonglong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar4;
          iVar3 = iVar6;
          goto joined_r0x000147020cba;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar2 = param_1[iVar8];
            if ((ulonglong)param_1[iVar7] <= uVar2) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar2;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147020db4 FUN_147020db4 body=147 status=ok
// SIG undefined FUN_147020db4(void)

void FUN_147020db4(longlong param_1,int param_2)

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



// FUNCTION 147020e48 FUN_147020e48 body=81 status=ok
// SIG undefined FUN_147020e48(void)

void FUN_147020e48(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_147020e9a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147020e9a FUN_147020e9a body=90 status=ok
// SIG undefined FUN_147020e9a(void)

void FUN_147020e9a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147020ef4();
  return;
}



// FUNCTION 147020ef4 FUN_147020ef4 body=58 status=ok
// SIG undefined FUN_147020ef4(void)

void FUN_147020ef4(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_147020f2e(param_1,param_2,1);
  return;
}



// FUNCTION 147020f2e FUN_147020f2e body=138 status=ok
// SIG undefined FUN_147020f2e(void)

void FUN_147020f2e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147020fb8 FUN_147020fb8 body=102 status=ok
// SIG undefined FUN_147020fb8(void)

longlong FUN_147020fb8(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar2 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0x20) == param_2)
        goto LAB_147020fc5;
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_147020fc5:
  lVar1 = lVar2 + 4;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14702101e FUN_14702101e body=132 status=ok
// SIG undefined FUN_14702101e(void)

void FUN_14702101e(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_1470210a2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1470210a2 FUN_1470210a2 body=90 status=ok
// SIG undefined FUN_1470210a2(void)

void FUN_1470210a2(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1470210fc();
  return;
}



// FUNCTION 1470210fc FUN_1470210fc body=166 status=ok
// SIG undefined FUN_1470210fc(void)

void FUN_1470210fc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1470211a2 FUN_1470211a2 body=329 status=ok
// SIG undefined FUN_1470211a2(void)

void FUN_1470211a2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 1470212ec FUN_1470212ec body=369 status=ok
// SIG undefined FUN_1470212ec(void)

longlong * FUN_1470212ec(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14701aace(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14702145e(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14701aace(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14702152e(param_2);
        FUN_14702145e(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14702145e FUN_14702145e body=207 status=ok
// SIG undefined FUN_14702145e(void)

longlong * FUN_14702145e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 5),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 5) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 14702152e FUN_14702152e body=59 status=ok
// SIG undefined FUN_14702152e(void)

longlong FUN_14702152e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147021576(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_147021569(lVar2);
  return lVar2;
}



// FUNCTION 147021569 FUN_147021569 body=13 status=ok
// SIG undefined FUN_147021569(void)

void FUN_147021569(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined2 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 147021576 FUN_147021576 body=132 status=ok
// SIG undefined FUN_147021576(void)

void FUN_147021576(longlong param_1,int param_2)

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



// FUNCTION 1470215fc FUN_1470215fc body=131 status=ok
// SIG undefined FUN_1470215fc(void)

longlong FUN_1470215fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14702167f();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14701ab2e(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14702167f FUN_14702167f body=652 status=ok
// SIG undefined FUN_14702167f(void)

longlong * FUN_14702167f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_1447a84cc(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1403fa8ea(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_14702190c(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_1447a84cc(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14702190c FUN_14702190c body=229 status=ok
// SIG undefined FUN_14702190c(void)

int * FUN_14702190c(longlong *param_1,int *param_2)

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



// FUNCTION 1470219f2 FUN_1470219f2 body=98 status=ok
// SIG undefined FUN_1470219f2(void)

void FUN_1470219f2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147021a54 FUN_147021a54 body=114 status=ok
// SIG undefined FUN_147021a54(void)

void FUN_147021a54(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 147021ac6 FUN_147021ac6 body=149 status=ok
// SIG undefined FUN_147021ac6(void)

undefined8 FUN_147021ac6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_146857984(param_1,&local_238);
  FUN_14006620a(param_2,local_238,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147021b5c FUN_147021b5c body=631 status=ok
// SIG undefined FUN_147021b5c(void)

void FUN_147021b5c(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar8;
joined_r0x000147021b91:
    do {
      iVar12 = iVar8 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar8 * 2 + 2;
        if (iVar13 < (int)param_2) {
          iVar10 = *(int *)(param_1 + (longlong)iVar13 * 3) -
                   *(int *)(param_1 + (longlong)iVar12 * 3);
          if (*(int *)(param_1 + (longlong)iVar13 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3) ==
              0) {
            iVar10 = *(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 4) -
                     *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 4);
          }
          if (-1 < iVar10) {
            iVar12 = iVar13;
          }
        }
        lVar11 = (longlong)iVar8;
        lVar15 = (longlong)iVar12;
        iVar8 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3);
        if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3) == 0) {
          iVar8 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                  *(int *)((longlong)param_1 + lVar15 * 0x18 + 4);
        }
        if (iVar8 < 0) {
          puVar2 = param_1 + lVar11 * 3;
          puVar3 = param_1 + lVar15 * 3;
          local_28 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar8 = iVar12;
          local_38 = uVar4;
          uStack_30 = uVar5;
          goto joined_r0x000147021b91;
        }
      }
      bVar16 = iVar14 != 0;
      iVar8 = iVar14 + -1;
      iVar14 = iVar8;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_28 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_28;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            lVar11 = (longlong)(iVar8 + 2);
            iVar13 = iVar12;
            if (lVar11 < (longlong)uVar9) {
              iVar10 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3);
              if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + (longlong)iVar12 * 3) == 0) {
                iVar10 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                         *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 4);
              }
              if (-1 < iVar10) {
                iVar13 = iVar8 + 2;
              }
            }
            lVar11 = (longlong)iVar14;
            lVar15 = (longlong)iVar13;
            iVar8 = *(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3);
            if (*(int *)(param_1 + lVar11 * 3) - *(int *)(param_1 + lVar15 * 3) == 0) {
              iVar8 = *(int *)((longlong)param_1 + lVar11 * 0x18 + 4) -
                      *(int *)((longlong)param_1 + lVar15 * 0x18 + 4);
            }
            if (-1 < iVar8) break;
            puVar2 = param_1 + lVar11 * 3;
            puVar3 = param_1 + lVar15 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_28 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_28;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar9;
          uVar9 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147021dd4 FUN_147021dd4 body=914 status=ok
// SIG undefined FUN_147021dd4(void)

void FUN_147021dd4(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar13 = &local_358;
    do {
      piVar4 = (int *)*plVar13;
      piVar14 = (int *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar12 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar4) >> 2);
      piVar11 = piVar14;
      piVar9 = piVar4;
      if (iVar16 != 0) {
LAB_147021ea3:
        uVar6 = iVar12 * -0x55555555 + 1;
        if (8 < (int)uVar6) {
          uVar7 = (ulonglong)(uVar6 >> 1);
          iVar12 = piVar4[uVar7 * 3 + 2];
          uVar1 = *(undefined8 *)(piVar4 + uVar7 * 3);
          piVar4[uVar7 * 3 + 2] = piVar4[2];
          *(undefined8 *)(piVar4 + uVar7 * 3) = *(undefined8 *)piVar4;
          piVar4[2] = iVar12;
          *(undefined8 *)piVar4 = uVar1;
          piVar8 = piVar14 + 3;
          piVar5 = piVar4;
          do {
            piVar3 = piVar5 + 3;
            piVar15 = piVar5 + 3;
            do {
              piVar5 = piVar15;
              piVar10 = piVar3;
              if (piVar14 < piVar5) break;
              iVar12 = *piVar4 - *piVar5;
              if (*piVar4 - *piVar5 == 0) {
                iVar12 = piVar4[1] - piVar5[1];
              }
              bVar2 = *(byte *)(piVar4 + 2) < *(byte *)(piVar5 + 2);
              if (iVar12 != 0) {
                bVar2 = iVar12 < 0;
              }
              piVar3 = piVar10 + 3;
              piVar15 = piVar5 + 3;
            } while (!bVar2);
            piVar3 = piVar8 + -6;
            do {
              piVar15 = piVar8;
              piVar17 = piVar3;
              piVar8 = piVar15 + -3;
              if (piVar8 <= piVar4) break;
              iVar12 = *piVar8 - *piVar4;
              if (*piVar8 - *piVar4 == 0) {
                iVar12 = piVar15[-2] - piVar4[1];
              }
              bVar2 = *(byte *)(piVar15 + -1) < *(byte *)(piVar4 + 2);
              if (iVar12 != 0) {
                bVar2 = iVar12 < 0;
              }
              piVar3 = piVar17 + -3;
            } while (!bVar2);
            if (piVar8 < piVar5) goto LAB_147021fd2;
            iVar12 = piVar5[2];
            uVar1 = *(undefined8 *)piVar5;
            piVar5[2] = piVar15[-1];
            *(undefined8 *)piVar5 = *(undefined8 *)piVar8;
            piVar15[-1] = iVar12;
            *(undefined8 *)piVar8 = uVar1;
          } while( true );
        }
        if (piVar4 < piVar14) {
          do {
            piVar11 = piVar4;
            if (piVar4 + 3 <= piVar14) {
              iVar16 = *piVar4;
              piVar9 = piVar4 + 3;
              piVar8 = piVar4;
              do {
                iVar12 = iVar16 - *piVar9;
                if (iVar12 == 0) {
                  iVar12 = piVar8[1] - piVar9[1];
                }
                bVar2 = *(byte *)(piVar8 + 2) < *(byte *)(piVar9 + 2);
                if (iVar12 != 0) {
                  bVar2 = iVar12 < 0;
                }
                piVar11 = piVar9;
                iVar12 = *piVar9;
                if (!bVar2) {
                  piVar11 = piVar8;
                  iVar12 = iVar16;
                }
                iVar16 = iVar12;
                piVar9 = piVar9 + 3;
                piVar8 = piVar11;
              } while (piVar9 <= piVar14);
            }
            local_50 = piVar11[2];
            local_58 = *(undefined8 *)piVar11;
            piVar11[2] = piVar14[2];
            *(undefined8 *)piVar11 = *(undefined8 *)piVar14;
            piVar14[2] = local_50;
            *(undefined8 *)piVar14 = local_58;
            piVar14 = piVar14 + -3;
          } while (piVar4 < piVar14);
        }
        goto LAB_147022145;
      }
LAB_14702215a:
      FUN_147022167(piVar4);
LAB_147022145:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147021fd2:
  local_50 = piVar4[2];
  local_58 = *(undefined8 *)piVar4;
  piVar4[2] = piVar15[-1];
  *(undefined8 *)piVar4 = *(undefined8 *)piVar8;
  piVar15[-1] = local_50;
  *(undefined8 *)piVar8 = local_58;
  iVar16 = iVar16 + -1;
  piVar15 = piVar15 + -6;
  if ((longlong)piVar17 - (longlong)piVar9 < (longlong)piVar11 - (longlong)piVar10) {
    if (piVar5 < piVar14) {
      *plVar13 = (longlong)piVar5;
      plVar13[1] = (longlong)piVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar10 = piVar4;
    if (piVar8 <= piVar4 + 3) goto LAB_147022145;
  }
  else {
    if (piVar4 + 3 < piVar8) {
      *plVar13 = (longlong)piVar4;
      plVar13[1] = (longlong)piVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar4 = piVar5;
    piVar15 = piVar14;
    piVar17 = piVar14;
    if (piVar14 <= piVar5) goto LAB_147022145;
  }
  iVar12 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar10) >> 2);
  piVar14 = piVar15;
  piVar11 = piVar17;
  piVar9 = piVar10;
  if (iVar16 == 0) goto LAB_14702215a;
  goto LAB_147021ea3;
}



// FUNCTION 147022167 FUN_147022167 body=733 status=ok
// SIG undefined FUN_147022167(void)

void FUN_147022167(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar13 = iVar6;
joined_r0x00014702219d:
    do {
      iVar8 = iVar6 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar12 = iVar6 * 2 + 2;
        if (iVar12 < (int)param_2) {
          lVar11 = (longlong)iVar12;
          lVar9 = (longlong)iVar8;
          iVar10 = *(int *)((longlong)param_1 + lVar11 * 0xc) -
                   *(int *)((longlong)param_1 + lVar9 * 0xc);
          if (iVar10 == 0) {
            iVar10 = *(int *)((longlong)param_1 + lVar11 * 0xc + 4) -
                     *(int *)((longlong)param_1 + lVar9 * 0xc + 4);
          }
          bVar14 = *(byte *)((longlong)param_1 + lVar11 * 0xc + 8) <
                   *(byte *)((longlong)param_1 + lVar9 * 0xc + 8);
          if (iVar10 != 0) {
            bVar14 = iVar10 < 0;
          }
          if (!bVar14) {
            iVar8 = iVar12;
          }
        }
        lVar9 = (longlong)iVar6;
        lVar11 = (longlong)iVar8;
        iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                *(int *)((longlong)param_1 + lVar11 * 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                  *(int *)((longlong)param_1 + lVar11 * 0xc + 4);
        }
        bVar14 = *(byte *)((longlong)param_1 + lVar9 * 0xc + 8) <
                 *(byte *)((longlong)param_1 + lVar11 * 0xc + 8);
        if (iVar6 != 0) {
          bVar14 = iVar6 < 0;
        }
        if (bVar14) {
          puVar2 = (undefined8 *)((longlong)param_1 + lVar9 * 0xc);
          puVar3 = (undefined8 *)((longlong)param_1 + lVar11 * 0xc);
          local_28 = *(undefined4 *)(puVar2 + 1);
          local_30 = *puVar2;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = local_28;
          *puVar3 = local_30;
          iVar6 = iVar8;
          goto joined_r0x00014702219d;
        }
      }
      bVar14 = iVar13 != 0;
      iVar6 = iVar13 + -1;
      iVar13 = iVar6;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2 - 1;
      local_28 = *(undefined4 *)(param_1 + 1);
      local_30 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar7 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8) = local_28;
      *(undefined8 *)((longlong)param_1 + uVar7 * 0xc) = local_30;
      if (param_2 != 2) {
        do {
          iVar6 = 0;
          iVar8 = 1;
          iVar13 = 0;
          do {
            lVar9 = (longlong)(iVar6 + 2);
            iVar12 = iVar8;
            if (lVar9 < (longlong)uVar7) {
              lVar11 = (longlong)iVar8;
              iVar8 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                      *(int *)((longlong)param_1 + lVar11 * 0xc);
              if (iVar8 == 0) {
                iVar8 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                        *(int *)((longlong)param_1 + lVar11 * 0xc + 4);
              }
              bVar14 = *(byte *)((longlong)param_1 + lVar9 * 0xc + 8) <
                       *(byte *)((longlong)param_1 + lVar11 * 0xc + 8);
              if (iVar8 != 0) {
                bVar14 = iVar8 < 0;
              }
              if (!bVar14) {
                iVar12 = iVar6 + 2;
              }
            }
            lVar9 = (longlong)iVar13;
            lVar11 = (longlong)iVar12;
            iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc) -
                    *(int *)((longlong)param_1 + lVar11 * 0xc);
            if (iVar6 == 0) {
              iVar6 = *(int *)((longlong)param_1 + lVar9 * 0xc + 4) -
                      *(int *)((longlong)param_1 + lVar11 * 0xc + 4);
            }
            bVar14 = *(byte *)((longlong)param_1 + lVar9 * 0xc + 8) <
                     *(byte *)((longlong)param_1 + lVar11 * 0xc + 8);
            if (iVar6 != 0) {
              bVar14 = iVar6 < 0;
            }
            if (!bVar14) break;
            puVar2 = (undefined8 *)((longlong)param_1 + lVar9 * 0xc);
            puVar3 = (undefined8 *)((longlong)param_1 + lVar11 * 0xc);
            uVar4 = *(undefined4 *)(puVar2 + 1);
            uVar5 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar2 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = uVar4;
            *puVar3 = uVar5;
            iVar6 = iVar12 * 2;
            iVar8 = iVar12 * 2 + 1;
            iVar13 = iVar12;
          } while ((longlong)iVar8 < (longlong)uVar7);
          uVar1 = uVar7 - 1;
          local_28 = *(undefined4 *)(param_1 + 1);
          local_30 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_28;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_30;
          bVar14 = 2 < uVar7;
          uVar7 = uVar1;
        } while (bVar14);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147022446 FUN_147022446 body=111 status=ok
// SIG undefined FUN_147022446(void)

void FUN_147022446(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470224b6 FUN_1470224b6 body=111 status=ok
// SIG undefined FUN_1470224b6(void)

void FUN_1470224b6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147022526 FUN_147022526 body=75 status=ok
// SIG undefined FUN_147022526(void)

void FUN_147022526(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x28),
              (longlong)*(int *)((longlong)param_1 + 0x30) << 3);
      FUN_1446efa72((longlong)param_1 + 0x28,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147022572 FUN_147022572 body=132 status=ok
// SIG undefined FUN_147022572(void)

void FUN_147022572(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,8);
  return;
}



// FUNCTION 1470225f6 FUN_1470225f6 body=110 status=ok
// SIG undefined FUN_1470225f6(void)

void FUN_1470225f6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_2 <= (int)uVar1) {
    iVar5 = 5;
    if (5 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x34)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x34) = iVar5;
    FUN_147022572(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147022666 FUN_147022666 body=112 status=ok
// SIG undefined FUN_147022666(void)

void FUN_147022666(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1470226d6 FUN_1470226d6 body=230 status=ok
// SIG undefined FUN_1470226d6(void)

longlong *
FUN_1470226d6(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (longlong)(param_1 + 4);
  param_1[1] = (longlong)(param_1 + 4);
  param_1[2] = (longlong)param_1 + 0x836;
  iVar3 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar3 = 0;
  }
  lVar1 = FUN_1449668a2(param_1,*param_2,iVar3);
  puVar2 = *(undefined2 **)(lVar1 + 8);
  if (*(undefined2 **)(lVar1 + 0x10) <= puVar2 + 1) {
    FUN_140213274(lVar1,1);
    puVar2 = *(undefined2 **)(lVar1 + 8);
  }
  *puVar2 = 0x20;
  *(undefined2 **)(lVar1 + 8) = puVar2 + 1;
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  lVar1 = FUN_1449668a2(lVar1,*param_3,iVar3);
  puVar2 = *(undefined2 **)(lVar1 + 8);
  if (*(undefined2 **)(lVar1 + 0x10) <= puVar2 + 1) {
    FUN_140213274(lVar1,1);
    puVar2 = *(undefined2 **)(lVar1 + 8);
  }
  *puVar2 = 0x2e;
  *(undefined2 **)(lVar1 + 8) = puVar2 + 1;
  iVar3 = *(int *)(param_4 + 1) + -1;
  if (*(int *)(param_4 + 1) == 0) {
    iVar3 = 0;
  }
  FUN_1449668a2(lVar1,*param_4,iVar3);
  return param_1;
}



// FUNCTION 1470227bc FUN_1470227bc body=147 status=ok
// SIG undefined FUN_1470227bc(void)

void FUN_1470227bc(longlong param_1,int param_2)

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



// FUNCTION 147022850 FUN_147022850 body=323 status=ok
// SIG undefined FUN_147022850(void)

void FUN_147022850(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  if ((int)uVar1 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar5 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar5 >> 1) + uVar8;
      iVar4 = *(int *)(lVar3 + (ulonglong)uVar7 * 0x18) - *param_2;
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar3 + 4 + (ulonglong)uVar7 * 0x18) - param_2[1];
      }
      uVar6 = (uint)uVar5;
      if (iVar4 < 0) {
        uVar8 = uVar7 + (uVar6 & 1);
      }
      uVar5 = uVar5 >> 1;
    } while (1 < uVar6);
    if ((int)uVar8 < (int)uVar1) {
      uVar5 = (ulonglong)uVar8;
      iVar4 = *param_2 - *(int *)(lVar3 + uVar5 * 0x18);
      if (iVar4 == 0) {
        iVar4 = param_2[1] - *(int *)(lVar3 + 4 + uVar5 * 0x18);
      }
      if (-1 < iVar4) {
        puVar9 = (undefined8 *)(lVar3 + uVar5 * 0x18);
        FUN_140958ed1(puVar9,1);
        goto LAB_14702292e;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140af6a9a(param_1,uVar1);
    lVar3 = *param_1;
  }
  lVar2 = (ulonglong)uVar8 * 0x18;
  memmove((void *)(lVar3 + lVar2 + 0x18),(void *)(lVar3 + lVar2),(ulonglong)(uVar1 - uVar8) * 0x18);
  puVar9 = (undefined8 *)(lVar2 + *param_1);
LAB_14702292e:
  *puVar9 = *(undefined8 *)param_2;
  puVar9[1] = 0;
  iVar4 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(puVar9 + 2) = iVar4;
  if ((longlong)iVar4 != 0) {
    FUN_1446dd670(puVar9 + 1,iVar4,0);
    memcpy((void *)puVar9[1],_Src,(longlong)iVar4 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
  return;
}



// FUNCTION 147022994 FUN_147022994 body=48 status=ok
// SIG undefined FUN_147022994(void)

void FUN_147022994(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1470229c4 FUN_1470229c4 body=575 status=ok
// SIG undefined FUN_1470229c4(void)

longlong * FUN_1470229c4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1468f9e52(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar6 = 8;
    lVar7 = 0;
    do {
      puVar4 = (undefined4 *)(*param_2 + lVar6);
      (**(code **)(*param_1 + 0x160))(param_1,*param_2 + lVar6 + -8);
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
        }
        else {
          FUN_14572512c(param_1,puVar4);
        }
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_1468f9e52(param_2), 0 < (int)local_3c)) {
      iVar5 = 0;
      do {
        lVar6 = FUN_147022c04(param_2);
        (**(code **)(*param_1 + 0x160))(param_1,lVar6);
        puVar4 = (undefined4 *)(lVar6 + 8);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
          }
          else {
            FUN_14572512c(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147022c04 FUN_147022c04 body=68 status=ok
// SIG undefined FUN_147022c04(void)

longlong FUN_147022c04(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468f9ec4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_1468f9f58(lVar2,1);
  return lVar2;
}



// FUNCTION 147022c48 FUN_147022c48 body=201 status=ok
// SIG undefined FUN_147022c48(void)

void FUN_147022c48(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar3 = uVar1 + param_2;
  if (uVar1 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_147023a94(param_1,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar1 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar2)) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_144a550a6(param_1);
    }
  }
  uVar1 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84);
  uVar3 = param_2 + uVar1;
  if (uVar1 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1461f8d8e(param_1 + 0x50,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar1 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0x98) < iVar2)) {
      *(int *)(param_1 + 0x98) = iVar2;
      FUN_140906920(param_1 + 0x50);
      return;
    }
  }
  return;
}



// FUNCTION 147022d12 FUN_147022d12 body=2515 status=ok
// SIG undefined FUN_147022d12(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_147022d12(longlong *param_1,code ***param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  code **ppcVar4;
  code **ppcVar5;
  code ****ppppcVar6;
  code ***pppcVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  code ****ppppcVar15;
  longlong lVar16;
  int iVar17;
  code ***pppcVar18;
  code ***pppcVar19;
  code ***pppcVar20;
  ulonglong uVar21;
  code ***pppcVar22;
  uint uVar23;
  int iVar24;
  code ***pppcVar25;
  code ***pppcVar26;
  code ***pppcVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_968 [40];
  code ****local_940;
  longlong *local_938;
  int local_92c;
  undefined8 *local_928;
  longlong *local_920;
  code ***local_918;
  code ***local_910;
  code ***local_908;
  code **local_900;
  code ***local_8f8;
  undefined8 uStack_8f0;
  code *local_8e8 [2];
  undefined8 local_8d8;
  int local_8d0;
  undefined8 local_8cc;
  int local_8c4;
  longlong local_8b8;
  undefined4 local_8b0;
  code ****local_8a8;
  undefined8 local_8a0;
  code **local_898;
  undefined8 local_890;
  undefined4 local_888;
  undefined4 local_884;
  code *local_72;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_968;
  local_908 = param_2;
  if (param_2 != (code ***)0x0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar23 = (uint)((ulonglong)param_2 >> 0x10);
      uVar13 = (uint)param_2 & 0xffff;
      uVar23 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar13) +
               (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar13 >> 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
      if (iVar8 != -1) {
        while (lVar28 = *param_1 + (longlong)iVar8 * 0x60,
              *(code ****)(*param_1 + (longlong)iVar8 * 0x60) != param_2) {
          iVar8 = *(int *)(lVar28 + 0x58);
          if (iVar8 == -1) goto LAB_147022d4c;
        }
        if ((lVar28 + 8U & 0xfffffffffffffff7) == 0) goto LAB_147022d4c;
        local_68 = &local_8f8;
        local_8d8 = 0;
        local_8d0 = 0;
        local_8f8 = (code ***)0x0;
        uStack_8f0 = 0;
        local_8cc = 0xffffffff00000080;
        local_8c4 = 0;
        local_8b8 = 0;
        local_8b0 = 0;
        local_8a0 = (code ***)&local_68;
        local_8a8 = (code ****)FUN_142aebfee;
        local_938 = param_1;
        local_920 = param_1 + 7;
        FUN_140e3dee2(param_1,param_2,&local_8a8,CONCAT71((uint7)(uint3)(uVar23 >> 8),1));
        if (local_8c4 < (int)uStack_8f0) {
          FUN_147023c46(&local_8f8);
          pppcVar26 = local_8f8;
          uVar23 = (int)uStack_8f0 - local_8c4;
          if (1 < (int)uVar23) {
            local_928 = param_3;
            memset(&local_898,0,0x2f0);
            local_8a8 = (code ****)pppcVar26;
            local_8a0 = pppcVar26 + (ulonglong)uVar23 * 2 + -2;
            fVar30 = logf((float)(int)uVar23);
            local_898 = (code **)CONCAT44(local_898._4_4_,(int)(longlong)(fVar30 + fVar30));
            ppppcVar15 = (code ****)&local_8a8;
            do {
              pppcVar18 = *ppppcVar15;
              pppcVar25 = ppppcVar15[1];
              iVar8 = *(int *)(ppppcVar15 + 2);
              iVar14 = (int)((ulonglong)((longlong)pppcVar25 - (longlong)pppcVar18) >> 4);
              uVar23 = iVar14 + 1;
              pppcVar20 = pppcVar18;
              pppcVar26 = pppcVar25;
              local_940 = ppppcVar15;
              if (iVar8 != 0) {
LAB_147022f5f:
                if (8 < (int)uVar23) {
                  ppcVar3 = pppcVar18[(ulonglong)(uVar23 >> 1) * 2];
                  ppcVar4 = (pppcVar18 + (ulonglong)(uVar23 >> 1) * 2)[1];
                  ppcVar5 = pppcVar18[1];
                  pppcVar18[(ulonglong)(uVar23 >> 1) * 2] = *pppcVar18;
                  (pppcVar18 + (ulonglong)(uVar23 >> 1) * 2)[1] = ppcVar5;
                  local_68._0_4_ = SUB84(ppcVar3,0);
                  local_68._4_4_ = (undefined4)((ulonglong)ppcVar3 >> 0x20);
                  uStack_60._0_4_ = SUB84(ppcVar4,0);
                  uStack_60._4_4_ = (undefined4)((ulonglong)ppcVar4 >> 0x20);
                  *(undefined4 *)pppcVar18 = (undefined4)local_68;
                  *(undefined4 *)((longlong)pppcVar18 + 4) = local_68._4_4_;
                  *(undefined4 *)(pppcVar18 + 1) = (undefined4)uStack_60;
                  *(undefined4 *)((longlong)pppcVar18 + 0xc) = uStack_60._4_4_;
                  pppcVar22 = pppcVar26 + 2;
                  pppcVar19 = pppcVar18;
                  local_92c = iVar8;
                  local_918 = pppcVar20;
                  local_910 = pppcVar25;
                  uStack_60 = ppcVar4;
                  do {
                    pppcVar25 = pppcVar19 + 2;
                    pppcVar7 = pppcVar19 + 2;
                    do {
                      pppcVar19 = pppcVar7;
                      pppcVar20 = pppcVar25;
                      if (pppcVar26 < pppcVar19) break;
                      local_900 = *pppcVar19;
                      local_68 = (code ****)*pppcVar18;
                      iVar8 = FUN_144a78538(&local_68,&local_900);
                      pppcVar25 = pppcVar20 + 2;
                      pppcVar7 = pppcVar19 + 2;
                    } while (iVar8 < 1);
                    pppcVar7 = pppcVar22 + -4;
                    do {
                      pppcVar27 = pppcVar22;
                      pppcVar25 = pppcVar7;
                      pppcVar22 = pppcVar27 + -2;
                      if (pppcVar22 <= pppcVar18) break;
                      local_900 = *pppcVar18;
                      local_68 = (code ****)*pppcVar22;
                      iVar8 = FUN_144a78538(&local_68,&local_900);
                      pppcVar7 = pppcVar25 + -2;
                    } while (iVar8 < 1);
                    if (pppcVar22 < pppcVar19) goto LAB_14702304a;
                    ppcVar3 = *pppcVar19;
                    ppcVar4 = pppcVar19[1];
                    ppcVar5 = pppcVar27[-1];
                    *pppcVar19 = *pppcVar22;
                    pppcVar19[1] = ppcVar5;
                    local_68._0_4_ = SUB84(ppcVar3,0);
                    local_68._4_4_ = (undefined4)((ulonglong)ppcVar3 >> 0x20);
                    uStack_60._0_4_ = SUB84(ppcVar4,0);
                    uStack_60._4_4_ = (undefined4)((ulonglong)ppcVar4 >> 0x20);
                    *(undefined4 *)pppcVar22 = (undefined4)local_68;
                    *(undefined4 *)((longlong)pppcVar27 + -0xc) = local_68._4_4_;
                    *(undefined4 *)(pppcVar27 + -1) = (undefined4)uStack_60;
                    *(undefined4 *)((longlong)pppcVar27 + -4) = uStack_60._4_4_;
                    uStack_60 = ppcVar4;
                  } while( true );
                }
                for (; ppppcVar15 = local_940, pppcVar20 = pppcVar18, pppcVar25 = pppcVar18,
                    pppcVar18 < pppcVar26;
                    pppcVar26 = (code ***)((longlong)pppcVar26 + 0xfffffffffffffff0)) {
                  while (pppcVar25 = pppcVar25 + 2, pppcVar25 <= pppcVar26) {
                    local_900 = *pppcVar25;
                    local_68 = (code ****)*pppcVar20;
                    iVar8 = FUN_144a78538(&local_68,&local_900);
                    if (0 < iVar8) {
                      pppcVar20 = pppcVar25;
                    }
                  }
                  local_68 = (code ****)*pppcVar20;
                  uStack_60 = pppcVar20[1];
                  ppppcVar15 = local_68;
                  ppcVar4 = uStack_60;
                  ppcVar3 = *(code ***)((longlong)pppcVar26 + 8);
                  *pppcVar20 = *pppcVar26;
                  pppcVar20[1] = ppcVar3;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  *(undefined4 *)pppcVar26 = (undefined4)local_68;
                  *(undefined4 *)((longlong)pppcVar26 + 4) = local_68._4_4_;
                  *(undefined4 *)((longlong)pppcVar26 + 8) = (undefined4)uStack_60;
                  *(undefined4 *)((longlong)pppcVar26 + 0xc) = uStack_60._4_4_;
                  local_68 = ppppcVar15;
                  uStack_60 = ppcVar4;
                }
                goto LAB_1470233af;
              }
LAB_14702310b:
              ppppcVar15 = local_940;
              if (uVar23 != 0) {
                iVar8 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
                iVar14 = iVar8;
joined_r0x00014702312a:
                do {
                  iVar17 = iVar8 * 2 + 1;
                  if (iVar17 < (int)uVar23) {
                    iVar24 = iVar8 * 2 + 2;
                    if (iVar24 < (int)uVar23) {
                      local_900 = pppcVar18[(longlong)iVar17 * 2];
                      local_68 = (code ****)pppcVar18[(longlong)iVar24 * 2];
                      iVar9 = FUN_144a78538(&local_68,&local_900);
                      if (iVar9 < 1) {
                        iVar17 = iVar24;
                      }
                    }
                    local_900 = pppcVar18[(longlong)iVar17 * 2];
                    local_68 = (code ****)pppcVar18[(longlong)iVar8 * 2];
                    iVar24 = FUN_144a78538(&local_68,&local_900);
                    if (0 < iVar24) {
                      pppcVar26 = pppcVar18 + (longlong)iVar8 * 2;
                      pppcVar25 = pppcVar18 + (longlong)iVar17 * 2;
                      local_68 = (code ****)*pppcVar26;
                      uStack_60 = pppcVar26[1];
                      ppppcVar15 = local_68;
                      ppcVar4 = uStack_60;
                      ppcVar3 = pppcVar25[1];
                      *pppcVar26 = *pppcVar25;
                      pppcVar26[1] = ppcVar3;
                      local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                      *(undefined4 *)pppcVar25 = (undefined4)local_68;
                      *(undefined4 *)((longlong)pppcVar25 + 4) = local_68._4_4_;
                      *(undefined4 *)(pppcVar25 + 1) = (undefined4)uStack_60;
                      *(undefined4 *)((longlong)pppcVar25 + 0xc) = uStack_60._4_4_;
                      iVar8 = iVar17;
                      local_68 = ppppcVar15;
                      uStack_60 = ppcVar4;
                      goto joined_r0x00014702312a;
                    }
                  }
                  bVar29 = iVar14 != 0;
                  iVar8 = iVar14 + -1;
                  iVar14 = iVar8;
                } while (bVar29);
                ppppcVar15 = local_940;
                if (1 < (int)uVar23) {
                  uVar21 = (ulonglong)uVar23 - 1;
                  local_68 = (code ****)*pppcVar18;
                  uStack_60 = pppcVar18[1];
                  ppppcVar6 = local_68;
                  ppcVar4 = uStack_60;
                  ppcVar3 = (pppcVar18 + uVar21 * 2)[1];
                  *pppcVar18 = pppcVar18[uVar21 * 2];
                  pppcVar18[1] = ppcVar3;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  pppcVar26 = pppcVar18 + uVar21 * 2;
                  *(undefined4 *)pppcVar26 = (undefined4)local_68;
                  *(undefined4 *)((longlong)pppcVar26 + 4) = local_68._4_4_;
                  *(undefined4 *)(pppcVar26 + 1) = (undefined4)uStack_60;
                  *(undefined4 *)((longlong)pppcVar26 + 0xc) = uStack_60._4_4_;
                  local_68 = ppppcVar6;
                  uStack_60 = ppcVar4;
                  if (uVar23 != 2) {
                    do {
                      iVar14 = 0;
                      iVar8 = 1;
                      iVar17 = 0;
                      do {
                        iVar14 = iVar14 + 2;
                        iVar24 = iVar8;
                        if ((longlong)iVar14 < (longlong)uVar21) {
                          local_900 = pppcVar18[(longlong)iVar8 * 2];
                          local_68 = (code ****)pppcVar18[(longlong)iVar14 * 2];
                          iVar8 = FUN_144a78538(&local_68,&local_900);
                          if (iVar8 < 1) {
                            iVar24 = iVar14;
                          }
                        }
                        local_900 = pppcVar18[(longlong)iVar24 * 2];
                        local_68 = (code ****)pppcVar18[(longlong)iVar17 * 2];
                        iVar8 = FUN_144a78538(&local_68,&local_900);
                        if (iVar8 < 1) break;
                        pppcVar26 = pppcVar18 + (longlong)iVar17 * 2;
                        pppcVar25 = pppcVar18 + (longlong)iVar24 * 2;
                        ppcVar3 = *pppcVar26;
                        ppcVar4 = pppcVar26[1];
                        ppcVar5 = pppcVar25[1];
                        *pppcVar26 = *pppcVar25;
                        pppcVar26[1] = ppcVar5;
                        local_68._0_4_ = SUB84(ppcVar3,0);
                        local_68._4_4_ = (undefined4)((ulonglong)ppcVar3 >> 0x20);
                        uStack_60._0_4_ = SUB84(ppcVar4,0);
                        uStack_60._4_4_ = (undefined4)((ulonglong)ppcVar4 >> 0x20);
                        *(undefined4 *)pppcVar25 = (undefined4)local_68;
                        *(undefined4 *)((longlong)pppcVar25 + 4) = local_68._4_4_;
                        *(undefined4 *)(pppcVar25 + 1) = (undefined4)uStack_60;
                        *(undefined4 *)((longlong)pppcVar25 + 0xc) = uStack_60._4_4_;
                        iVar14 = iVar24 * 2;
                        iVar8 = iVar24 * 2 + 1;
                        uStack_60 = ppcVar4;
                        iVar17 = iVar24;
                      } while ((longlong)iVar8 < (longlong)uVar21);
                      uVar1 = uVar21 - 1;
                      local_68 = (code ****)*pppcVar18;
                      uStack_60 = pppcVar18[1];
                      ppppcVar6 = local_68;
                      ppcVar4 = uStack_60;
                      ppcVar3 = (pppcVar18 + uVar1 * 2)[1];
                      *pppcVar18 = pppcVar18[uVar1 * 2];
                      pppcVar18[1] = ppcVar3;
                      local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                      pppcVar26 = pppcVar18 + uVar1 * 2;
                      *(undefined4 *)pppcVar26 = (undefined4)local_68;
                      *(undefined4 *)((longlong)pppcVar26 + 4) = local_68._4_4_;
                      *(undefined4 *)(pppcVar26 + 1) = (undefined4)uStack_60;
                      *(undefined4 *)((longlong)pppcVar26 + 0xc) = uStack_60._4_4_;
                      bVar29 = 2 < uVar21;
                      ppppcVar15 = local_940;
                      uVar21 = uVar1;
                      local_68 = ppppcVar6;
                      uStack_60 = ppcVar4;
                    } while (bVar29);
                  }
                }
              }
LAB_1470233af:
              ppppcVar15 = ppppcVar15 + -3;
              param_3 = local_928;
            } while (&local_8a8 <= ppppcVar15);
          }
        }
        FUN_144869b4a(&local_8f8);
        local_68 = (code ****)&DAT_100000000;
        uStack_60 = local_8e8;
        local_58 = 0xffffffff;
        local_50 = 0;
        iVar8 = 0;
        if (local_8d0 != 0) {
          FUN_1449c0562(&local_68);
          iVar8 = local_8d0;
        }
        local_890 = local_58;
        uVar21 = local_890;
        local_888 = local_50;
        local_884 = local_4c;
        local_8a0 = (code ***)local_68;
        local_898 = uStack_60;
        local_8a8 = &local_8f8;
        local_890._4_4_ = (int)(local_58 >> 0x20);
        if ((local_890._4_4_ != iVar8) || (uStack_60 != local_8e8)) {
          plVar10 = local_938 + 10;
          iVar14 = local_890._4_4_;
          local_890 = uVar21;
          do {
            pppcVar26 = *local_8a8;
            lVar28 = (longlong)iVar14;
            FUN_147023d98(local_938,pppcVar26[lVar28 * 2]);
            FUN_14021bc82(plVar10,pppcVar26[lVar28 * 2]);
            local_68 = (code ****)pppcVar26[lVar28 * 2];
            (*(code *)*param_3)(param_3[1],&local_68);
            local_890 = CONCAT44(local_890._4_4_,(uint)local_890 & ~local_8a0._4_4_);
            FUN_1449c0562(&local_8a0);
            iVar14 = local_890._4_4_;
            uVar21 = local_890;
          } while (local_8a8 != &local_8f8 || (local_898 != local_8e8 || local_890._4_4_ != iVar8));
        }
        local_890 = uVar21;
        plVar10 = local_938 + 10;
        if ((int)local_938[0xb] != *(int *)((longlong)local_938 + 0x84)) {
          uVar23 = (uint)((ulonglong)local_908 >> 0x10);
          uVar13 = (uint)local_908 & 0xffff;
          plVar11 = local_938 + 0x11;
          if ((longlong *)local_938[0x12] != (longlong *)0x0) {
            plVar11 = (longlong *)local_938[0x12];
          }
          iVar8 = *(int *)((longlong)plVar11 +
                          (ulonglong)
                          ((int)local_938[0x13] - 1U &
                          (int)((ulonglong)local_908 >> 0x20) + ((uint)local_908 << 0x10 | uVar13) +
                          (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar13 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              puVar2 = (undefined8 *)(*plVar10 + (longlong)iVar8 * 0x18);
              if ((code ***)*puVar2 == local_908) {
                if (puVar2 + 1 != (longlong *)0x0 && puVar2 != (undefined8 *)0x0) {
                  if ((int)local_938[1] == *(int *)((longlong)local_938 + 0x34)) {
LAB_1470236a0:
                    lVar16 = 0;
                  }
                  else {
                    lVar28 = puVar2[1];
                    uVar23 = (uint)((ulonglong)lVar28 >> 0x10);
                    uVar13 = (uint)lVar28 & 0xffff;
                    plVar11 = local_920;
                    if ((longlong *)local_938[8] != (longlong *)0x0) {
                      plVar11 = (longlong *)local_938[8];
                    }
                    iVar8 = *(int *)((longlong)plVar11 +
                                    (ulonglong)
                                    ((int)local_938[9] - 1U &
                                    (int)((ulonglong)lVar28 >> 0x20) +
                                    ((uint)lVar28 << 0x10 | uVar13) +
                                    (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar13 >> 4)) * 4);
                    if (iVar8 == -1) goto LAB_1470236a0;
                    while (lVar16 = *local_938 + (longlong)iVar8 * 0x60,
                          *(longlong *)(*local_938 + (longlong)iVar8 * 0x60) != lVar28) {
                      iVar8 = *(int *)(lVar16 + 0x58);
                      if (iVar8 == -1) goto LAB_1470236a0;
                    }
                  }
                  lVar28 = lVar16 + 8;
                  if (lVar16 == 0) {
                    lVar28 = 0;
                  }
                  FUN_144a8b5fe(lVar28,local_908);
                }
                break;
              }
              iVar8 = *(int *)(puVar2 + 2);
            } while (iVar8 != -1);
          }
        }
        pppcVar26 = local_908;
        FUN_147023d98(local_938,local_908);
        FUN_14021bc82(plVar10,pppcVar26);
        local_8a8 = (code ****)pppcVar26;
        (*(code *)*param_3)(param_3[1]);
        local_8b0 = 0;
        if (local_8b8 != 0) {
          FUN_1400020a8();
        }
        FUN_14472eaf0(&local_8f8);
        uVar12 = 1;
        goto LAB_147022d8d;
      }
    }
LAB_147022d4c:
    local_8a8 = (code ****)&local_888;
    local_890 = local_890 & 0xffffffffffffff00;
    local_898 = &local_72;
    local_8a0 = (code ***)local_8a8;
    FUN_14005eb5c(&local_908,&local_8a8);
    if ((char)local_890 == '\x01') {
      FUN_1400020a8(local_8a8);
    }
  }
  uVar12 = 0;
LAB_147022d8d:
  if ((local_48 ^ (ulonglong)auStack_968) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
LAB_14702304a:
  local_68 = (code ****)*pppcVar18;
  uStack_60 = pppcVar18[1];
  ppppcVar15 = local_68;
  ppcVar4 = uStack_60;
  ppcVar3 = pppcVar27[-1];
  *pppcVar18 = *pppcVar22;
  pppcVar18[1] = ppcVar3;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)pppcVar22 = (undefined4)local_68;
  *(undefined4 *)((longlong)pppcVar27 + -0xc) = local_68._4_4_;
  *(undefined4 *)(pppcVar27 + -1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)pppcVar27 + -4) = uStack_60._4_4_;
  iVar8 = local_92c + -1;
  pppcVar27 = pppcVar27 + -4;
  local_68 = ppppcVar15;
  uStack_60 = ppcVar4;
  if ((longlong)pppcVar25 - (longlong)local_918 < (longlong)local_910 - (longlong)pppcVar20) {
    if (pppcVar19 < pppcVar26) {
      *local_940 = pppcVar19;
      local_940[1] = pppcVar26;
      *(int *)(local_940 + 2) = iVar8;
      local_940 = local_940 + 3;
    }
    ppppcVar15 = local_940;
    pppcVar20 = pppcVar18;
    if (pppcVar22 <= pppcVar18 + 2) goto LAB_1470233af;
  }
  else {
    ppppcVar15 = local_940;
    if (pppcVar18 + 2 < pppcVar22) {
      *local_940 = pppcVar18;
      local_940[1] = pppcVar27;
      *(int *)(local_940 + 2) = iVar8;
      ppppcVar15 = local_940 + 3;
    }
    pppcVar18 = pppcVar19;
    pppcVar25 = pppcVar26;
    pppcVar27 = pppcVar26;
    if (pppcVar26 <= pppcVar19) goto LAB_1470233af;
  }
  local_940 = ppppcVar15;
  iVar14 = (int)((ulonglong)((longlong)pppcVar25 - (longlong)pppcVar20) >> 4);
  uVar23 = iVar14 + 1;
  pppcVar26 = pppcVar27;
  if (iVar8 == 0) goto LAB_14702310b;
  goto LAB_147022f5f;
}



// FUNCTION 1470236e6 FUN_1470236e6 body=501 status=ok
// SIG undefined FUN_1470236e6(void)

ulonglong FUN_1470236e6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar2 = (uint)((ulonglong)param_2 >> 0x10);
      uVar4 = (uint)param_2 & 0xffff;
      plVar3 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[8];
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar5 * 0x60;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x60) == param_2) {
            uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
            if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) goto LAB_14702376a;
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x58);
        } while (iVar5 != -1);
      }
    }
    FUN_1400021e4(&local_28,&local_38);
    uVar7 = 0;
    iVar5 = local_30 + -1;
    if (local_30 == 0) {
      iVar5 = 0;
    }
    if (local_38[(longlong)iVar5 + -1] == 0x2f) {
      uVar7 = 0;
      FUN_145825fe6(&local_38,iVar5 + -1,0);
      puVar6 = local_38;
      if (local_30 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar6,1);
      local_28 = local_40;
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        uVar2 = (uint)((ulonglong)local_40 >> 0x10);
        uVar4 = (uint)local_40 & 0xffff;
        plVar3 = param_1 + 7;
        if ((longlong *)param_1[8] != (longlong *)0x0) {
          plVar3 = (longlong *)param_1[8];
        }
        iVar5 = *(int *)((longlong)plVar3 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)local_40 >> 0x20) + ((uint)local_40 << 0x10 | uVar4) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *param_1 + (longlong)iVar5 * 0x60;
            if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x60) == local_40) {
              uVar7 = (ulonglong)(lVar1 != 0);
              goto LAB_147023832;
            }
            iVar5 = *(int *)(lVar1 + 0x58);
          } while (iVar5 != -1);
        }
        uVar7 = 0;
      }
    }
LAB_147023832:
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14702376a:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1470238dc FUN_1470238dc body=288 status=ok
// SIG undefined FUN_1470238dc(void)

void FUN_1470238dc(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_1;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x60);
      cVar2 = (*(code *)*param_2)(param_2[1],&local_58);
      if (cVar2 == '\0') break;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_1 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470239fe FUN_1470239fe body=150 status=ok
// SIG undefined FUN_1470239fe(void)

void FUN_1470239fe(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


