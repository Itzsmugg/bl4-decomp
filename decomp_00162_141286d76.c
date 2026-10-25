// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141286d76 FUN_141286d76 body=309 status=ok
// SIG undefined FUN_141286d76(void)

void FUN_141286d76(longlong *param_1)

{
  FUN_1447a1747(param_1[0x1b],(int)param_1[0x1c]);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_141286ed4(param_1[0x19],(int)param_1[0x1a]);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_141286eab(param_1[0x17],(int)param_1[0x18]);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1407dde2a(param_1[0x10],(int)param_1[0x11]);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407dde2a(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141286e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141286eab FUN_141286eab body=41 status=ok
// SIG undefined FUN_141286eab(void)

void FUN_141286eab(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141286efe(param_1);
    param_1 = param_1 + 0x430;
  }
  return;
}



// FUNCTION 141286ed4 FUN_141286ed4 body=41 status=ok
// SIG undefined FUN_141286ed4(void)

void FUN_141286ed4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140368b56(param_1);
    param_1 = param_1 + 0xd8;
  }
  return;
}



// FUNCTION 141286efe FUN_141286efe body=437 status=ok
// SIG undefined FUN_141286efe(void)

void FUN_141286efe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b81b980;
  FUN_140bb299f(param_1[0x84],*(undefined4 *)(param_1 + 0x85));
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb299f(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x7c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x7c] + 0x10))();
  }
  FUN_1407dde54(param_1 + 0x5f);
  FUN_140368b56(param_1 + 0x43);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1412870b4 FUN_1412870b4 body=1325 status=ok
// SIG undefined FUN_1412870b4(void)

void FUN_1412870b4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  wchar_t *local_1c0;
  uint local_1b8;
  undefined8 *local_1b0;
  uint local_1a8;
  void *local_1a0;
  uint local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined4 *local_180;
  undefined ***local_178;
  char local_170;
  undefined **local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if ((lVar7 == 0) || (plVar8 = *(longlong **)(lVar7 + 0x1f0), plVar8 == (longlong *)0x0))
  goto LAB_1412875a2;
  lVar7 = FUN_1403ca142();
  if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_1412875a2;
  if (*(code **)(*plVar8 + 0x498) == (code *)&LAB_14015c36e) {
    cVar5 = (char)plVar8[0x42];
  }
  else {
    cVar5 = (**(code **)(*plVar8 + 0x498))(plVar8);
  }
  if (((cVar5 != '\b') || (lVar7 = FUN_140495e96(param_1 + 6), lVar7 == 0)) ||
     (lVar7 = FUN_140cee904(lVar7), lVar7 == 0)) goto LAB_1412875a2;
  FUN_140056680(&local_1a0,L"inventory.rewards.");
  local_1e0 = lVar7;
  plVar8 = (longlong *)FUN_1409801a0(lVar7);
  lVar7 = *plVar8;
  AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0x28));
  FUN_1442a6a5c(lVar7,&local_188,&local_1a0);
  FUN_1442a6952(lVar7,&local_1b0,&local_188);
  ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0x28));
  uVar13 = (ulonglong)(int)local_1a8;
  if (0 < (longlong)uVar13) {
    if ((longlong)(int)param_2[1] != 0) {
      lVar7 = *param_2;
      local_1e8 = (longlong)(int)param_2[1] * 0x50 + lVar7;
LAB_141287220:
      uVar1 = local_198;
      pvVar2 = local_1a0;
      local_170 = '\0';
      local_188 = &local_168;
      local_178 = &local_68;
      lVar9 = 0;
      do {
        *(short *)((longlong)&local_168 + lVar9 * 2) = (short)"character."[lVar9];
        lVar9 = lVar9 + 1;
      } while (lVar9 != 10);
      local_180 = &uStack_154;
      iVar6 = local_198 - 1;
      if (local_198 == 0) {
        iVar6 = 0;
      }
      lVar9 = (longlong)iVar6;
      if (0x75 < iVar6) {
        FUN_140213274(&local_188,lVar9);
      }
      puVar4 = local_180;
      if (1 < uVar1) {
        memcpy(local_180,pvVar2,lVar9 * 2);
        local_180 = (undefined4 *)(lVar9 * 2 + (longlong)puVar4);
      }
      local_190 = *(undefined8 *)(lVar7 + 0x18);
      FUN_1400021e4(&local_190,&local_1c0);
      uVar1 = local_1b8;
      pwVar3 = local_1c0;
      iVar6 = local_1b8 - 1;
      if (local_1b8 == 0) {
        iVar6 = 0;
      }
      lVar9 = (longlong)iVar6;
      if (local_178 <= (undefined ***)((longlong)local_180 + lVar9 * 2)) {
        FUN_140213274(&local_188,lVar9);
      }
      puVar4 = local_180;
      if (1 < uVar1) {
        memcpy(local_180,pwVar3,lVar9 * 2);
        local_180 = (undefined4 *)((longlong)puVar4 + lVar9 * 2);
      }
      if (local_1c0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      *(undefined2 *)local_180 = 0;
      FUN_140056680(&local_1c0,local_188);
      if (0 < (int)local_1a8) {
        uVar15 = 0;
        uVar13 = 0;
LAB_14128737d:
        uVar1 = local_1b8;
        pwVar3 = local_1c0;
        uVar15 = (ulonglong)(int)uVar15;
        lVar9 = (longlong)(int)local_1a8;
        puVar17 = (uint *)(local_1b0 + uVar15 * 2 + 1);
        local_1d8 = uVar13;
        do {
          if (uVar1 == *puVar17) {
            if (((int)uVar1 < 2) || (iVar6 = wcscmp(pwVar3,*(wchar_t **)(puVar17 + -2)), iVar6 == 0)
               ) goto LAB_1412873d5;
          }
          else if (*puVar17 + uVar1 == 1) goto LAB_1412873d5;
          uVar15 = uVar15 + 1;
          puVar17 = puVar17 + 4;
          if (lVar9 <= (longlong)uVar15) {
            if ((local_1d8 & 1) == 0) break;
            goto LAB_1412873f6;
          }
        } while( true );
      }
      goto LAB_141287400;
    }
    goto LAB_141287471;
  }
LAB_141287578:
  FUN_1447a1747(local_1b0,uVar13 & 0xffffffff);
  if (local_1b0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1412875a2:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1412873d5:
  ppuVar11 = &local_1b0;
  FUN_146294fd6(ppuVar11,uVar15 & 0xffffffff);
  uVar13 = CONCAT71((int7)((ulonglong)ppuVar11 >> 8),1);
  if ((int)local_1a8 <= (int)uVar15) goto LAB_1412873f6;
  goto LAB_14128737d;
LAB_1412873f6:
  FUN_140b12644(&local_1b0);
LAB_141287400:
  if (local_1c0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_170 == '\x01') {
    FUN_1400020a8(local_188);
  }
  lVar7 = lVar7 + 0x50;
  if (lVar7 == local_1e8) goto LAB_141287463;
  goto LAB_141287220;
LAB_141287463:
  uVar13 = (ulonglong)(int)local_1a8;
  if (uVar13 == 0) {
    uVar13 = 0;
  }
  else {
LAB_141287471:
    lVar7 = local_1e0;
    puVar14 = local_1b0 + uVar13 * 2;
    puVar16 = local_1b0;
    do {
      local_1d0 = (void *)0x0;
      uVar1 = *(uint *)(puVar16 + 1);
      pvVar2 = (void *)*puVar16;
      uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_1c8 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_1d0,uVar1,0);
        memcpy(local_1d0,pvVar2,(longlong)(int)uVar1 * 2);
      }
      puVar10 = (undefined8 *)FUN_1409801a0(lVar7);
      local_158 = (undefined4)local_1d0;
      uStack_154 = local_1d0._4_4_;
      uStack_150 = (undefined4)uStack_1c8;
      uStack_14c = uStack_1c8._4_4_;
      local_1d0 = (void *)0x0;
      uStack_1c8 = 0;
      local_178 = (undefined ***)0x0;
      local_168 = &PTR_FUN_14b9b7d40;
      local_160 = lVar7;
      local_188 = (undefined ***)FUN_1442a886e;
      FUN_140980216(*puVar10,&local_188);
      if (local_188 != (undefined ***)0x0) {
        pppuVar12 = local_178;
        if (local_178 == (undefined ***)0x0) {
          pppuVar12 = &local_168;
        }
        (*(code *)(*pppuVar12)[2])();
      }
      if (local_1d0 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar16 = puVar16 + 2;
    } while (puVar16 != puVar14);
    uVar13 = (ulonglong)local_1a8;
  }
  goto LAB_141287578;
}



// FUNCTION 1412875ea FUN_1412875ea body=1952 status=ok
// SIG undefined FUN_1412875ea(void)

undefined8 * FUN_1412875ea(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b486c90;
  FUN_140bbae66(param_1 + 0x33);
  param_1[0xcd] = 0;
  param_1[0xcb] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0xd1) = 4;
  *(undefined4 *)(param_1 + 0xce) = 0x43c80000;
  *(undefined1 *)(param_1 + 0xd2) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0xd3) = cVar1;
  param_1[0xd4] = 0;
  *(undefined2 *)(param_1 + 0xd8) = 4;
  *(undefined4 *)(param_1 + 0xd5) = 0x447a0000;
  *(undefined1 *)(param_1 + 0xd9) = 3;
  *(char *)(param_1 + 0xda) = cVar1;
  param_1[0xdb] = 0;
  *(undefined2 *)(param_1 + 0xdf) = 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 3;
  *(char *)(param_1 + 0xe1) = cVar1;
  param_1[0xe2] = 0;
  *(undefined2 *)(param_1 + 0xe6) = 4;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 3;
  *(char *)(param_1 + 0xe8) = cVar1;
  param_1[0xe9] = 0;
  *(undefined2 *)(param_1 + 0xed) = 4;
  *(undefined4 *)(param_1 + 0xea) = 0x447a0000;
  *(undefined1 *)(param_1 + 0xee) = 3;
  *(char *)(param_1 + 0xef) = cVar1;
  param_1[0xf0] = 0;
  *(undefined2 *)(param_1 + 0xf4) = 4;
  *(undefined4 *)(param_1 + 0xf1) = 0x40800000;
  *(undefined1 *)(param_1 + 0xf5) = 3;
  *(char *)(param_1 + 0xf6) = cVar1;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined2 *)(param_1 + 0xfd) = 4;
  *(undefined4 *)(param_1 + 0xfa) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xfe) = 3;
  *(char *)(param_1 + 0xff) = cVar1;
  param_1[0x100] = 0;
  *(undefined2 *)(param_1 + 0x104) = 4;
  *(undefined4 *)(param_1 + 0x101) = 0;
  *(undefined1 *)(param_1 + 0x105) = 3;
  *(char *)(param_1 + 0x106) = cVar1;
  *(undefined2 *)(param_1 + 0x107) = 0;
  *(undefined1 *)((longlong)param_1 + 0x83a) = 0;
  param_1[0x108] = 0;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x10f) = 0x404;
  *(undefined1 *)((longlong)param_1 + 0x87a) = 1;
  local_60 = "DE_Callout_Advancing";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  param_1[0x110] = (ulonglong)uVar2;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  local_60 = "DE_Callout_Repositioning";
  local_58 = 0x18;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  param_1[0x113] = (ulonglong)uVar2;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  *(undefined1 *)(param_1 + 0x116) = 1;
  param_1[0x117] = 0;
  *(undefined2 *)(param_1 + 0x11b) = 4;
  *(undefined4 *)(param_1 + 0x118) = 0x44160000;
  *(undefined1 *)(param_1 + 0x11c) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x11d) = cVar1;
  param_1[0x11e] = 0;
  *(undefined2 *)(param_1 + 0x122) = 4;
  *(undefined4 *)(param_1 + 0x11f) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x123) = 3;
  *(char *)(param_1 + 0x124) = cVar1;
  param_1[0x125] = 0;
  *(undefined2 *)(param_1 + 0x129) = 4;
  *(undefined4 *)(param_1 + 0x126) = 0x41200000;
  *(undefined1 *)(param_1 + 0x12a) = 3;
  *(char *)(param_1 + 299) = cVar1;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x994) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x99c) = 0;
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x136) = 0;
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9ec) = 0;
  param_1[0x13f] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0xffffffff00000000;
  param_1[0x147] = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x14d) = 0;
  *(undefined4 *)(param_1 + 0x152) = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0x200000000;
  param_1[0x15a] = 0;
  *(undefined4 *)(param_1 + 0x15b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xadc) = 0x20;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xae4) = 0;
  param_1[0x15e] = 0;
  *(undefined4 *)(param_1 + 0x15f) = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0x200000000;
  param_1[0x167] = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb44) = 0x20;
  *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4c) = 0;
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0x200000000;
  param_1[0x174] = 0;
  *(undefined4 *)(param_1 + 0x175) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbac) = 0x20;
  *(undefined4 *)(param_1 + 0x176) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0;
  param_1[0x178] = 0;
  *(undefined4 *)(param_1 + 0x179) = 0;
  param_1[0x180] = 0;
  *(undefined4 *)(param_1 + 0x181) = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc14) = 0;
  param_1[0x184] = 0;
  *(undefined4 *)(param_1 + 0x185) = 0;
  param_1[0x18a] = 0;
  *(undefined4 *)(param_1 + 0x18b) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc64) = 0;
  param_1[0x18e] = 0;
  *(undefined4 *)(param_1 + 399) = 0;
  param_1[400] = 0;
  param_1[0x191] = 0xffffffff00000000;
  param_1[0x196] = 0;
  *(undefined4 *)(param_1 + 0x197) = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc4) = 0;
  param_1[0x19a] = 0;
  *(undefined4 *)(param_1 + 0x19b) = 0;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0x200000000;
  param_1[0x1a9] = 0;
  *(undefined4 *)(param_1 + 0x1aa) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd54) = 0x20;
  *(undefined4 *)(param_1 + 0x1ab) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd5c) = 0;
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0x200000000;
  param_1[0x1b6] = 0;
  *(undefined4 *)(param_1 + 0x1b7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdbc) = 0x20;
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc4) = 0;
  param_1[0x1ba] = 0;
  *(undefined4 *)(param_1 + 0x1bb) = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0x200000000;
  param_1[0x1c3] = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe24) = 0x20;
  *(undefined4 *)(param_1 + 0x1c5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe2c) = 0;
  param_1[0x1c7] = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  param_1[0x1cf] = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe8c) = 0;
  param_1[0x1d3] = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  param_1[0x1d9] = 0;
  *(undefined4 *)(param_1 + 0x1da) = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  *(undefined8 *)((longlong)param_1 + 0xed4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xedc) = 0;
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0xffffffff00000000;
  param_1[0x1e5] = 0;
  *(undefined4 *)(param_1 + 0x1e6) = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf3c) = 0;
  param_1[0x1e9] = 0;
  *(undefined4 *)(param_1 + 0x1ea) = 0;
  *(undefined1 *)(param_1 + 0x1eb) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0x200000000;
  param_1[0x1f8] = 0;
  *(undefined4 *)(param_1 + 0x1f9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfcc) = 0x20;
  *(undefined4 *)(param_1 + 0x1fa) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfd4) = 0;
  param_1[0x1fc] = 0;
  *(undefined4 *)(param_1 + 0x1fd) = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0x200000000;
  param_1[0x205] = 0;
  *(undefined4 *)(param_1 + 0x206) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1034) = 0x20;
  *(undefined4 *)(param_1 + 0x207) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x103c) = 0;
  param_1[0x209] = 0;
  *(undefined4 *)(param_1 + 0x20a) = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0x200000000;
  param_1[0x212] = 0;
  *(undefined4 *)(param_1 + 0x213) = 0;
  *(undefined4 *)((longlong)param_1 + 0x109c) = 0x20;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10a4) = 0;
  param_1[0x216] = 0;
  *(undefined4 *)(param_1 + 0x217) = 0;
  param_1[0x21e] = 0;
  *(undefined4 *)(param_1 + 0x21f) = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1104) = 0;
  param_1[0x222] = 0;
  *(undefined4 *)(param_1 + 0x223) = 0;
  param_1[0x228] = 0;
  *(undefined4 *)(param_1 + 0x229) = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1154) = 0;
  param_1[0x22c] = 0;
  *(undefined4 *)(param_1 + 0x22d) = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0xffffffff00000000;
  param_1[0x234] = 0;
  *(undefined4 *)(param_1 + 0x235) = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11b4) = 0;
  param_1[0x238] = 0;
  *(undefined4 *)(param_1 + 0x239) = 0;
  *(undefined1 *)(param_1 + 0x23a) = 0;
  *(undefined4 *)(param_1 + 0x23f) = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0x200000000;
  param_1[0x247] = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1244) = 0x20;
  *(undefined4 *)(param_1 + 0x249) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124c) = 0;
  param_1[0x24b] = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0x200000000;
  param_1[0x254] = 0;
  *(undefined4 *)(param_1 + 0x255) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12ac) = 0x20;
  *(undefined4 *)(param_1 + 0x256) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x12b4) = 0;
  param_1[600] = 0;
  *(undefined4 *)(param_1 + 0x259) = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0x200000000;
  param_1[0x261] = 0;
  *(undefined4 *)(param_1 + 0x262) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1314) = 0x20;
  *(undefined4 *)(param_1 + 0x263) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x131c) = 0;
  param_1[0x265] = 0;
  *(undefined4 *)(param_1 + 0x266) = 0;
  param_1[0x267] = 0;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141287d8c FUN_141287d8c body=1601 status=ok
// SIG undefined FUN_141287d8c(void)

void FUN_141287d8c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c75f1c8 < *(int *)(param_1 + 0x10)) {
    local_b8 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
    FUN_14128841c(&local_68,(longlong *)(param_1 + 8),param_2);
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1412883ce(&local_78,*(undefined4 *)(param_1 + 0x10),1);
    FUN_140bfb9f0(&local_88,*(undefined4 *)(param_1 + 0x10));
    iVar14 = *(int *)(param_1 + 0x10);
    iVar4 = (int)uStack_90;
    uVar7 = iVar14 - (int)uStack_90;
    if ((int)uStack_90 < iVar14) {
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar14);
      if ((uint)(uStack_90._4_4_ - iVar4) < uVar7) {
        FUN_14475e4ac(&local_98);
      }
    }
    else {
      if (iVar14 < 0) goto LAB_141288378;
      if (iVar14 < (int)uStack_90) {
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar14);
        FUN_1401fef06(&local_98);
      }
    }
    iVar14 = *(int *)(param_1 + 0x10);
    iVar4 = (int)uStack_a0;
    uVar7 = iVar14 - (int)uStack_a0;
    if ((int)uStack_a0 < iVar14) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar14);
      if ((uint)(uStack_a0._4_4_ - iVar4) < uVar7) {
        FUN_1446f48e2(&local_a8);
      }
    }
    else {
      if (iVar14 < 0) {
LAB_141288378:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
      if (iVar14 < (int)uStack_a0) {
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar14);
        FUN_14479f406(&local_a8);
      }
    }
    if (local_60 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_60 + 1);
    }
    plVar1 = (longlong *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (*(int *)(param_1 + 300) <= local_60) {
      FUN_14481578e(plVar1);
    }
    if (local_60 == 0) {
      iVar14 = 0;
    }
    else {
      plVar11 = local_68 + (longlong)local_60 * 2;
      iVar14 = 0;
      plVar10 = local_68;
      do {
        iVar4 = *(int *)(param_1 + 0x128);
        *(uint *)(param_1 + 0x128) = iVar4 + 1U;
        if (*(uint *)(param_1 + 300) < iVar4 + 1U) {
          FUN_1446f48e2(plVar1,iVar4);
        }
        *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar14;
        lVar8 = plVar10[1];
        if ((longlong)(int)lVar8 != 0) {
          lVar5 = *plVar10;
          lVar9 = (longlong)iVar14 << 2;
          lVar12 = 0;
          do {
            lVar13 = (longlong)*(int *)(lVar5 + lVar12);
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar13 * 0x10);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(local_78 + lVar9 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            *(undefined8 *)(local_88 + lVar9 * 2) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8);
            *(undefined4 *)(local_98 + lVar9) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + lVar13 * 4);
            *(int *)(local_a8 + lVar13 * 4) = iVar14;
            iVar14 = iVar14 + 1;
            lVar9 = lVar9 + 4;
            lVar12 = lVar12 + 4;
          } while ((longlong)(int)lVar8 * 4 != lVar12);
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar11);
    }
    iVar4 = *(int *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = iVar4 + 1U;
    if (*(uint *)(param_1 + 300) < iVar4 + 1U) {
      FUN_1446f48e2(plVar1,iVar4);
    }
    *(int *)(*plVar1 + (longlong)iVar4 * 4) = iVar14;
    if ((longlong *)(param_1 + 8) != &local_78) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x14) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if ((longlong *)(param_1 + 0x18) != &local_88) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_88;
      local_88 = 0;
      *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x24) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    if ((longlong *)(param_1 + 0xf8) != &local_98) {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xf8) = local_98;
      local_98 = 0;
      *(int *)(param_1 + 0x100) = (int)uStack_90;
      *(int *)(param_1 + 0x104) = uStack_90._4_4_;
      uStack_90 = 0;
    }
    if (*(int *)(param_1 + 0x40) == (int)uStack_a0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140393c76(&local_58,*(int *)(param_1 + 0x40),1);
      if (0 < (int)uStack_a0) {
        lVar8 = 0;
        do {
          *(undefined1 *)(local_58 + *(int *)(local_a8 + lVar8 * 4)) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x38) + lVar8);
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uStack_a0);
      }
      if ((longlong *)(param_1 + 0x38) == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x38) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x38) = local_58;
        *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_50;
        *(undefined4 *)(param_1 + 0x44) = uStack_50._4_4_;
      }
    }
    iVar14 = (int)uStack_a0;
    if (*(int *)(param_1 + 0x88) == (int)uStack_a0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140393c76(&local_58,(int)uStack_a0,1);
      if (0 < (int)uStack_a0) {
        lVar8 = 0;
        do {
          *(undefined1 *)(local_58 + *(int *)(local_a8 + lVar8 * 4)) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x80) + lVar8);
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uStack_a0);
      }
      if ((longlong *)(param_1 + 0x80) == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x80) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x80) = local_58;
        *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_50;
        *(undefined4 *)(param_1 + 0x8c) = uStack_50._4_4_;
      }
      iVar14 = (int)uStack_a0;
    }
    if (*(int *)(param_1 + 0xc0) == iVar14) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140393c76(&local_58,iVar14,1);
      if (0 < (int)uStack_a0) {
        lVar8 = 0;
        do {
          *(undefined1 *)(local_58 + *(int *)(local_a8 + lVar8 * 4)) =
               *(undefined1 *)(*(longlong *)(param_1 + 0xb8) + lVar8);
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uStack_a0);
      }
      if ((longlong *)(param_1 + 0xb8) == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0xb8) = local_58;
        *(undefined4 *)(param_1 + 0xc0) = (undefined4)uStack_50;
        *(undefined4 *)(param_1 + 0xc4) = uStack_50._4_4_;
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_68,local_60);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412883ce FUN_1412883ce body=77 status=ok
// SIG undefined FUN_1412883ce(void)

void FUN_1412883ce(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403412ae();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8b55a();
      return;
    }
  }
  return;
}



// FUNCTION 14128841c FUN_14128841c body=4001 status=ok
// SIG undefined FUN_14128841c(void)

longlong *
FUN_14128841c(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 *puVar12;
  int *piVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 uVar24;
  longlong lVar25;
  int *piVar26;
  undefined1 auStack_188 [44];
  uint local_15c;
  uint local_158;
  uint local_154;
  uint *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  int *local_128;
  int *local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong local_108;
  int *local_100;
  int *local_f8;
  undefined1 local_f0 [4];
  uint local_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *param_1 = 0;
  param_1[1] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_140 = param_3;
  local_118 = param_1;
  FUN_140bfc3e2(&local_c8,param_5 - param_4);
  FUN_1412893be(&local_d8,(int)param_2[1]);
  local_138 = (longlong)(int)param_4;
  lVar18 = local_138 * -0x68 + local_c8;
  local_15c = param_4;
  if (0 < (int)param_2[1]) {
    lVar19 = 0xc;
    lVar16 = 0;
    lVar25 = 0;
    do {
      lVar10 = *param_2;
      *(undefined4 *)(local_d8 + lVar16) = *(undefined4 *)(lVar10 + -0xc + lVar19);
      *(undefined4 *)(local_d8 + 4 + lVar16) = *(undefined4 *)(lVar10 + -8 + lVar19);
      *(undefined4 *)(local_d8 + 0xc + lVar16) = *(undefined4 *)(lVar10 + -4 + lVar19);
      *(undefined4 *)(local_d8 + 0x10 + lVar16) = *(undefined4 *)(lVar10 + lVar19);
      lVar9 = (longlong)*(int *)(lVar10 + -0xc + lVar19) * 0x68;
      lVar22 = lVar18 + lVar9;
      iVar2 = *(int *)(lVar18 + 0x28 + lVar9);
      *(uint *)(lVar18 + 0x28 + lVar9) = iVar2 + 1U;
      if (*(uint *)(lVar18 + 0x2c + lVar9) < iVar2 + 1U) {
        FUN_1400cc390(lVar22,iVar2);
      }
      lVar9 = *(longlong *)(lVar22 + 0x20);
      if (*(longlong *)(lVar22 + 0x20) == 0) {
        lVar9 = lVar22;
      }
      uVar24 = (undefined4)lVar25;
      *(undefined4 *)(lVar9 + (longlong)iVar2 * 4) = uVar24;
      lVar9 = (longlong)*(int *)(lVar10 + -8 + lVar19) * 0x68;
      lVar22 = lVar18 + lVar9;
      iVar2 = *(int *)(lVar18 + 0x28 + lVar9);
      *(uint *)(lVar18 + 0x28 + lVar9) = iVar2 + 1U;
      if (*(uint *)(lVar18 + 0x2c + lVar9) < iVar2 + 1U) {
        FUN_1400cc390(lVar22,iVar2);
      }
      lVar9 = *(longlong *)(lVar22 + 0x20);
      if (*(longlong *)(lVar22 + 0x20) == 0) {
        lVar9 = lVar22;
      }
      *(undefined4 *)(lVar9 + (longlong)iVar2 * 4) = uVar24;
      lVar9 = (longlong)*(int *)(lVar10 + -4 + lVar19) * 0x68;
      lVar22 = lVar18 + lVar9;
      iVar2 = *(int *)(lVar18 + 0x28 + lVar9);
      *(uint *)(lVar18 + 0x28 + lVar9) = iVar2 + 1U;
      if (*(uint *)(lVar18 + 0x2c + lVar9) < iVar2 + 1U) {
        FUN_1400cc390(lVar22,iVar2);
      }
      lVar9 = *(longlong *)(lVar22 + 0x20);
      if (*(longlong *)(lVar22 + 0x20) == 0) {
        lVar9 = lVar22;
      }
      *(undefined4 *)(lVar9 + (longlong)iVar2 * 4) = uVar24;
      lVar10 = (longlong)*(int *)(lVar10 + lVar19) * 0x68;
      lVar22 = lVar18 + lVar10;
      iVar2 = *(int *)(lVar18 + 0x28 + lVar10);
      *(uint *)(lVar18 + 0x28 + lVar10) = iVar2 + 1U;
      if (*(uint *)(lVar18 + 0x2c + lVar10) < iVar2 + 1U) {
        FUN_1400cc390(lVar22,iVar2);
      }
      lVar10 = *(longlong *)(lVar22 + 0x20);
      if (*(longlong *)(lVar22 + 0x20) == 0) {
        lVar10 = lVar22;
      }
      *(undefined4 *)(lVar10 + (longlong)iVar2 * 4) = uVar24;
      lVar25 = lVar25 + 1;
      lVar16 = lVar16 + 0x14;
      lVar19 = lVar19 + 0x10;
    } while (lVar25 < (int)param_2[1]);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  plVar21 = local_118;
  if ((int)local_15c < param_5) {
    local_110 = 0xffffffff;
    lVar16 = local_138;
    do {
      fVar1 = *(float *)(*(longlong *)(local_140 + 0x90) + lVar16 * 4);
      uVar8 = (uint)lVar16;
      lVar19 = local_138;
      if ((int)uStack_b0 != local_84) {
        puVar12 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar12 = local_80;
        }
        for (iVar2 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & uVar8) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == uVar8) goto LAB_141288708;
        }
      }
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        if (uStack_e0._4_4_ == 0) {
          FUN_1446f48e2(&local_e8,0);
        }
        *local_e8 = uVar8;
        lVar25 = lVar16;
        lVar19 = local_138;
        uVar14 = uStack_e0;
        while (local_138 = lVar25, bVar7 = (int)uStack_e0 != 0, uStack_e0 = uVar14, bVar7) {
          iVar2 = (int)uStack_e0 + -1;
          local_ec = local_e8[iVar2];
          lVar19 = (longlong)(int)local_ec;
          uStack_e0._4_4_ = (uint)(uVar14 >> 0x20);
          if (SBORROW4(0,(int)uStack_e0)) {
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar2);
            if (uStack_e0._4_4_ != 0x7fffffff) {
              FUN_1446f48e2(&local_e8);
            }
            memset(local_e8 + -0x80000000,0,0xfffffffffffffffc);
          }
          else {
            if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar2);
            }
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar2);
          }
          piVar20 = (int *)(lVar19 * 0x68 + lVar18);
          FUN_1447cbafe(&local_b8,local_f0,&local_ec,0);
          piVar26 = *(int **)(piVar20 + 8);
          if (*(int **)(piVar20 + 8) == (int *)0x0) {
            piVar26 = piVar20;
          }
          if ((longlong)piVar20[10] != 0) {
            piVar15 = piVar26 + piVar20[10];
            do {
              iVar2 = *piVar26;
              if (*(int *)(local_d8 + 8 + (longlong)iVar2 * 0x14) < 0) {
                local_150 = (uint *)(local_d8 + (longlong)iVar2 * 0x14);
                uVar8 = *local_150;
                uVar3 = local_150[1];
                uVar4 = local_150[3];
                local_154 = 0xffffffff;
                local_158 = 0xffffffff;
                local_15c = 0xffffffff;
                if (uVar8 == local_ec) {
                  local_154 = local_150[4];
                  local_158 = uVar3;
                  local_15c = uVar4;
                }
                uVar5 = local_150[4];
                if (uVar3 == local_ec) {
                  local_158 = uVar8;
                  local_154 = uVar5;
                  local_15c = uVar4;
                }
                if (uVar4 == local_ec) {
                  local_154 = uVar5;
                }
                if (uVar5 == local_ec) {
                  local_154 = uVar4;
                }
                if (uVar5 == local_ec || uVar4 == local_ec) {
                  local_158 = uVar8;
                  local_15c = uVar3;
                }
                piVar17 = piVar20 + 0xe;
                piVar11 = *(int **)(piVar20 + 0x16);
                piVar13 = piVar11;
                if (piVar11 == (int *)0x0) {
                  piVar13 = piVar17;
                }
                iVar6 = piVar20[0x18];
                lVar16 = (longlong)iVar6;
                if (lVar16 != 0) {
                  uVar8 = piVar20[0xc];
                  do {
                    lVar19 = 0;
                    while (*(uint *)((longlong)piVar13 + lVar19) != uVar8) {
                      lVar19 = lVar19 + 4;
                      if (lVar16 * 4 - lVar19 == 0) goto LAB_1412888b9;
                    }
                    uVar8 = uVar8 + 1;
                    piVar20[0xc] = uVar8;
                  } while( true );
                }
                uVar8 = piVar20[0xc];
LAB_1412888b9:
                local_130 = (longlong)(int)local_158;
                if ((local_158 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_140 + 0x90) + local_130 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar19 = lVar18 + local_130 * 0x68;
                  lVar25 = *(longlong *)(lVar19 + 0x58);
                  if (*(longlong *)(lVar19 + 0x58) == 0) {
                    lVar25 = lVar19 + 0x38;
                  }
                  while( true ) {
                    if (*(int *)(lVar19 + 0x60) != 0) {
                      lVar22 = 0;
                      do {
                        if (*(uint *)(lVar25 + lVar22) == uVar8) goto LAB_141288941;
                        lVar22 = lVar22 + 4;
                      } while ((longlong)*(int *)(lVar19 + 0x60) << 2 != lVar22);
                    }
                    if (iVar6 == 0) break;
                    lVar22 = 0;
                    while (*(uint *)((longlong)piVar13 + lVar22) != uVar8) {
                      lVar22 = lVar22 + 4;
                      if (lVar16 * 4 - lVar22 == 0) goto LAB_141288950;
                    }
LAB_141288941:
                    uVar8 = uVar8 + 1;
                  }
                }
LAB_141288950:
                local_148 = (longlong)(int)local_15c;
                if ((local_15c != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_140 + 0x90) + local_148 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar19 = local_148 * 0x68 + lVar18;
                  if (local_158 == 0xffffffff) {
                    lVar25 = lVar19 + 0x38;
                    if (*(longlong *)(lVar19 + 0x58) != 0) {
                      lVar25 = *(longlong *)(lVar19 + 0x58);
                    }
                    while( true ) {
                      if (*(int *)(lVar19 + 0x60) != 0) {
                        lVar22 = 0;
                        do {
                          if (*(uint *)(lVar25 + lVar22) == uVar8) goto LAB_141289219;
                          lVar22 = lVar22 + 4;
                        } while ((longlong)*(int *)(lVar19 + 0x60) << 2 != lVar22);
                      }
                      if (iVar6 == 0) break;
                      lVar22 = 0;
                      while (*(uint *)((longlong)piVar13 + lVar22) != uVar8) {
                        lVar22 = lVar22 + 4;
                        if (lVar16 * 4 - lVar22 == 0) goto LAB_141288a4d;
                      }
LAB_141289219:
                      uVar8 = uVar8 + 1;
                    }
                  }
                  else {
                    lVar25 = lVar19 + 0x38;
                    if (*(longlong *)(lVar19 + 0x58) != 0) {
                      lVar25 = *(longlong *)(lVar19 + 0x58);
                    }
                    lVar22 = local_130 * 0x68 + lVar18;
                    while( true ) {
                      if (*(int *)(lVar19 + 0x60) != 0) {
                        lVar10 = 0;
                        do {
                          if (*(uint *)(lVar25 + lVar10) == uVar8) goto LAB_141288a27;
                          lVar10 = lVar10 + 4;
                        } while ((longlong)*(int *)(lVar19 + 0x60) << 2 != lVar10);
                      }
                      lVar10 = *(longlong *)(lVar22 + 0x58);
                      if (*(longlong *)(lVar22 + 0x58) == 0) {
                        lVar10 = lVar22 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar22 + 0x60) != 0) {
                        lVar9 = 0;
                        do {
                          if (*(uint *)(lVar10 + lVar9) == uVar8) goto LAB_141288a27;
                          lVar9 = lVar9 + 4;
                        } while ((longlong)*(int *)(lVar22 + 0x60) * 4 != lVar9);
                      }
                      if (iVar6 == 0) break;
                      lVar10 = 0;
                      while (*(uint *)((longlong)piVar13 + lVar10) != uVar8) {
                        lVar10 = lVar10 + 4;
                        if (lVar16 * 4 - lVar10 == 0) goto LAB_141288a4d;
                      }
LAB_141288a27:
                      uVar8 = uVar8 + 1;
                    }
                  }
                }
LAB_141288a4d:
                local_108 = (longlong)(int)local_154;
                if ((local_154 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_140 + 0x90) + local_108 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar19 = local_108 * 0x68 + lVar18;
                  if ((local_158 & local_15c) == 0xffffffff) {
                    lVar25 = lVar19 + 0x38;
                    if (*(longlong *)(lVar19 + 0x58) != 0) {
                      lVar25 = *(longlong *)(lVar19 + 0x58);
                    }
                    while( true ) {
                      if (*(int *)(lVar19 + 0x60) != 0) {
                        lVar22 = 0;
                        do {
                          if (*(uint *)(lVar25 + lVar22) == uVar8) goto LAB_141289276;
                          lVar22 = lVar22 + 4;
                        } while ((longlong)*(int *)(lVar19 + 0x60) << 2 != lVar22);
                      }
                      if (iVar6 == 0) break;
                      lVar22 = 0;
                      while (*(uint *)((longlong)piVar13 + lVar22) != uVar8) {
                        lVar22 = lVar22 + 4;
                        if (lVar16 * 4 - lVar22 == 0) goto LAB_141288b93;
                      }
LAB_141289276:
                      uVar8 = uVar8 + 1;
                    }
                  }
                  else if (local_158 == 0xffffffff) {
                    lVar25 = lVar19 + 0x38;
                    if (*(longlong *)(lVar19 + 0x58) != 0) {
                      lVar25 = *(longlong *)(lVar19 + 0x58);
                    }
                    lVar22 = local_148 * 0x68 + lVar18;
                    while( true ) {
                      if (*(int *)(lVar19 + 0x60) != 0) {
                        lVar10 = 0;
                        do {
                          if (*(uint *)(lVar25 + lVar10) == uVar8) goto LAB_14128930c;
                          lVar10 = lVar10 + 4;
                        } while ((longlong)*(int *)(lVar19 + 0x60) << 2 != lVar10);
                      }
                      lVar10 = *(longlong *)(lVar22 + 0x58);
                      if (*(longlong *)(lVar22 + 0x58) == 0) {
                        lVar10 = lVar22 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar22 + 0x60) != 0) {
                        lVar9 = 0;
                        do {
                          if (*(uint *)(lVar10 + lVar9) == uVar8) goto LAB_14128930c;
                          lVar9 = lVar9 + 4;
                        } while ((longlong)*(int *)(lVar22 + 0x60) * 4 != lVar9);
                      }
                      if (iVar6 == 0) break;
                      lVar10 = 0;
                      while (*(uint *)((longlong)piVar13 + lVar10) != uVar8) {
                        lVar10 = lVar10 + 4;
                        if (lVar16 * 4 - lVar10 == 0) goto LAB_141288b93;
                      }
LAB_14128930c:
                      uVar8 = uVar8 + 1;
                    }
                  }
                  else {
                    local_128 = piVar20;
                    if (local_15c == 0xffffffff) {
                      lVar25 = lVar19 + 0x38;
                      if (*(longlong *)(lVar19 + 0x58) != 0) {
                        lVar25 = *(longlong *)(lVar19 + 0x58);
                      }
                      lVar22 = local_130 * 0x68 + lVar18;
                      while( true ) {
                        if (*(int *)(lVar19 + 0x60) != 0) {
                          lVar10 = 0;
                          do {
                            if (*(uint *)(lVar25 + lVar10) == uVar8) goto LAB_14128939d;
                            lVar10 = lVar10 + 4;
                          } while ((longlong)*(int *)(lVar19 + 0x60) << 2 != lVar10);
                        }
                        lVar10 = *(longlong *)(lVar22 + 0x58);
                        if (*(longlong *)(lVar22 + 0x58) == 0) {
                          lVar10 = lVar22 + 0x38;
                        }
                        if ((longlong)*(int *)(lVar22 + 0x60) != 0) {
                          lVar9 = 0;
                          do {
                            if (*(uint *)(lVar10 + lVar9) == uVar8) goto LAB_14128939d;
                            lVar9 = lVar9 + 4;
                          } while ((longlong)*(int *)(lVar22 + 0x60) * 4 != lVar9);
                        }
                        if (iVar6 == 0) break;
                        lVar10 = 0;
                        while (*(uint *)((longlong)piVar13 + lVar10) != uVar8) {
                          lVar10 = lVar10 + 4;
                          if (lVar16 * 4 - lVar10 == 0) goto LAB_141288b93;
                        }
LAB_14128939d:
                        uVar8 = uVar8 + 1;
                      }
                    }
                    else {
                      lVar25 = lVar19 + 0x38;
                      if (*(longlong *)(lVar19 + 0x58) != 0) {
                        lVar25 = *(longlong *)(lVar19 + 0x58);
                      }
                      lVar22 = lVar18 + local_130 * 0x68;
                      lVar10 = lVar18 + local_148 * 0x68;
                      while( true ) {
                        if (*(int *)(lVar19 + 0x60) != 0) {
                          lVar9 = 0;
                          do {
                            if (*(uint *)(lVar25 + lVar9) == uVar8) goto LAB_141288b6d;
                            lVar9 = lVar9 + 4;
                          } while ((longlong)*(int *)(lVar19 + 0x60) << 2 != lVar9);
                        }
                        lVar9 = *(longlong *)(lVar22 + 0x58);
                        if (*(longlong *)(lVar22 + 0x58) == 0) {
                          lVar9 = lVar22 + 0x38;
                        }
                        if ((longlong)*(int *)(lVar22 + 0x60) != 0) {
                          lVar23 = 0;
                          do {
                            if (*(uint *)(lVar9 + lVar23) == uVar8) goto LAB_141288b6d;
                            lVar23 = lVar23 + 4;
                          } while ((longlong)*(int *)(lVar22 + 0x60) * 4 != lVar23);
                        }
                        lVar9 = *(longlong *)(lVar10 + 0x58);
                        if (*(longlong *)(lVar10 + 0x58) == 0) {
                          lVar9 = lVar10 + 0x38;
                        }
                        if ((longlong)*(int *)(lVar10 + 0x60) != 0) {
                          lVar23 = 0;
                          do {
                            if (*(uint *)(lVar9 + lVar23) == uVar8) goto LAB_141288b6d;
                            lVar23 = lVar23 + 4;
                          } while ((longlong)*(int *)(lVar10 + 0x60) * 4 != lVar23);
                        }
                        if (iVar6 == 0) break;
                        lVar9 = 0;
                        while (*(uint *)((longlong)piVar13 + lVar9) != uVar8) {
                          lVar9 = lVar9 + 4;
                          if (lVar16 * 4 - lVar9 == 0) goto LAB_141288b93;
                        }
LAB_141288b6d:
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
LAB_141288b93:
                uVar14 = local_110 & 0xffffffff;
                if ((int)local_110 <= (int)uVar8) {
                  uVar14 = (ulonglong)uVar8;
                }
                piVar20[0x18] = iVar6 + 1U;
                local_120 = piVar15;
                local_100 = piVar11;
                local_f8 = piVar17;
                if ((uint)piVar20[0x19] < iVar6 + 1U) {
                  FUN_1400cc390(piVar17,iVar6);
                  piVar11 = *(int **)(piVar20 + 0x16);
                }
                plVar21 = local_118;
                uVar3 = local_154;
                if (piVar11 != (int *)0x0) {
                  piVar17 = piVar11;
                }
                piVar17[lVar16] = uVar8;
                local_150[2] = uVar8;
                if (uVar8 == piVar20[0xc]) {
                  piVar20[0xc] = uVar8 + 1;
                }
                local_110 = uVar14;
                if ((int)local_118[1] <= (int)uVar14) {
                  FUN_140bfc200(local_118,(int)uVar14 + 1,1);
                }
                lVar16 = *plVar21;
                lVar19 = (longlong)(int)local_150[2] * 0x10;
                iVar6 = *(int *)(lVar16 + 8 + lVar19);
                *(uint *)(lVar16 + 8 + lVar19) = iVar6 + 1U;
                if (*(uint *)(lVar16 + 0xc + lVar19) < iVar6 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar16 + lVar19),iVar6);
                }
                *(int *)(*(longlong *)(lVar16 + lVar19) + (longlong)iVar6 * 4) = iVar2;
                if ((local_158 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_140 + 0x90) + local_130 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar16 = lVar18 + local_130 * 0x68;
                  iVar2 = *(int *)(lVar16 + 0x60);
                  *(uint *)(lVar16 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar16 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar16 + 0x38,iVar2);
                  }
                  uVar14 = uStack_e0;
                  lVar19 = *(longlong *)(lVar16 + 0x58);
                  if (*(longlong *)(lVar16 + 0x58) == 0) {
                    lVar19 = lVar16 + 0x38;
                  }
                  *(uint *)(lVar19 + (longlong)iVar2 * 4) = local_150[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar12 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar12 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & local_158) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
                      if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == local_158)
                      goto LAB_141288d03;
                    }
                  }
                  lVar16 = (longlong)(int)uStack_e0;
                  uVar8 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
                  if (uStack_e0._4_4_ < uVar8) {
                    FUN_1446f48e2(&local_e8,uVar14 & 0xffffffff);
                  }
                  local_e8[lVar16] = local_158;
                }
LAB_141288d03:
                if ((local_15c != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_140 + 0x90) + local_148 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar16 = lVar18 + local_148 * 0x68;
                  iVar2 = *(int *)(lVar16 + 0x60);
                  *(uint *)(lVar16 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar16 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar16 + 0x38,iVar2);
                  }
                  uVar14 = uStack_e0;
                  lVar19 = *(longlong *)(lVar16 + 0x58);
                  if (*(longlong *)(lVar16 + 0x58) == 0) {
                    lVar19 = lVar16 + 0x38;
                  }
                  *(uint *)(lVar19 + (longlong)iVar2 * 4) = local_150[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar12 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar12 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & local_15c) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
                      if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == local_15c)
                      goto LAB_141288de5;
                    }
                  }
                  lVar16 = (longlong)(int)uStack_e0;
                  uVar8 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
                  if (uStack_e0._4_4_ < uVar8) {
                    FUN_1446f48e2(&local_e8,uVar14 & 0xffffffff);
                  }
                  local_e8[lVar16] = local_15c;
                }
LAB_141288de5:
                piVar15 = local_120;
                lVar16 = local_138;
                if ((uVar3 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_140 + 0x90) + local_108 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar16 = lVar18 + local_108 * 0x68;
                  iVar2 = *(int *)(lVar16 + 0x60);
                  *(uint *)(lVar16 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar16 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar16 + 0x38,iVar2);
                  }
                  uVar14 = uStack_e0;
                  lVar19 = *(longlong *)(lVar16 + 0x58);
                  if (*(longlong *)(lVar16 + 0x58) == 0) {
                    lVar19 = lVar16 + 0x38;
                  }
                  *(uint *)(lVar19 + (longlong)iVar2 * 4) = local_150[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar12 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar12 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & uVar3) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
                      piVar15 = local_120;
                      lVar16 = local_138;
                      if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == uVar3) goto LAB_1412887e6;
                    }
                  }
                  lVar16 = (longlong)(int)uStack_e0;
                  uVar8 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
                  if (uStack_e0._4_4_ < uVar8) {
                    FUN_1446f48e2(&local_e8,uVar14 & 0xffffffff);
                  }
                  local_e8[lVar16] = uVar3;
                  piVar15 = local_120;
                  lVar16 = local_138;
                }
              }
LAB_1412887e6:
              piVar26 = piVar26 + 1;
            } while (piVar26 != piVar15);
          }
          lVar25 = local_138;
          lVar19 = local_138;
          uVar14 = uStack_e0;
        }
      }
LAB_141288708:
      local_138 = lVar19;
      plVar21 = local_118;
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 != param_5);
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar14 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar14 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140bfc290(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar21;
}



// FUNCTION 1412893be FUN_1412893be body=132 status=ok
// SIG undefined FUN_1412893be(void)

void FUN_1412893be(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_141289444(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x14 + *param_1),
             (int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff),(ulonglong)uVar2 * 0x14);
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
  FUN_146d9f0e4(param_1);
  return;
}



// FUNCTION 141289444 FUN_141289444 body=370 status=ok
// SIG undefined FUN_141289444(void)

void FUN_141289444(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412894cd;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1412894cd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 1412895b6 FUN_1412895b6 body=92 status=ok
// SIG undefined FUN_1412895b6(void)

void FUN_1412895b6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141289612 FUN_141289612 body=96 status=ok
// SIG undefined FUN_141289612(void)

void FUN_141289612(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    if (DAT_14cad39b0 == 0) {
      lVar1 = FUN_14001cc68(0x60,0x10);
      FUN_1461a8102(lVar1);
      DAT_14cad39b0 = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000141289644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(DAT_14cad39b0 + 0x38) + 0xe0))
              (*(longlong **)(DAT_14cad39b0 + 0x38),param_1);
    return;
  }
  return;
}



// FUNCTION 141289672 FUN_141289672 body=204 status=ok
// SIG undefined FUN_141289672(void)

uint * FUN_141289672(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 14128973e FUN_14128973e body=137 status=ok
// SIG undefined FUN_14128973e(void)

void FUN_14128973e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      if (DAT_14c760da4 != 0) {
        uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        uVar5 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar6 * 0x10);
        do {
          FUN_1412897c8(*(undefined8 *)(lVar2 + 2000 + (ulonglong)uVar5 * 8));
          bVar3 = (byte)uVar5 & 0x1f;
          uVar4 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar4;
          if (uVar4 == 0) {
            uVar5 = 0x20;
          }
          else {
            uVar5 = 0;
            if (uVar4 != 0) {
              for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
              }
            }
          }
        } while (uVar4 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != iVar1);
  }
  return;
}



// FUNCTION 1412897c8 FUN_1412897c8 body=784 status=ok
// SIG undefined FUN_1412897c8(void)

void FUN_1412897c8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [24];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14473c118(&local_98,3);
  local_70 = (undefined1 *)0x0;
  local_68 = 0x300000000;
  lVar7 = 0;
  do {
    puVar3 = (undefined8 *)FUN_144ad3d06(0x30);
    FUN_144724502(puVar3,1);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x310,0x10);
    lVar8 = *(longlong *)(param_1 + 0x1280);
    if (*(longlong *)(param_1 + 0x1280) == 0) {
      lVar8 = param_1 + 0xb00;
    }
    puVar4[1] = lVar8 + lVar7;
    puVar4[0x35] = 0;
    puVar4[0x36] = 0x1800000000;
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3e] = 0;
    *(undefined1 *)(puVar4 + 0x4d) = 0;
    *(undefined1 *)(puVar4 + 0x4f) = 0;
    puVar4[0x5c] = 0;
    *(undefined4 *)(puVar4 + 0x5d) = 0;
    puVar4[0x39] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x37] = 0;
    puVar4[0x38] = 0;
    *(undefined2 *)(puVar4 + 0x3b) = 0;
    puVar4[0x4a] = 0;
    puVar4[0x4b] = 0;
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    puVar4[0x46] = 0;
    puVar4[0x47] = 0;
    puVar4[0x44] = 0;
    puVar4[0x45] = 0;
    puVar4[0x58] = 0;
    puVar4[0x59] = 0;
    puVar4[0x56] = 0;
    puVar4[0x57] = 0;
    puVar4[0x54] = 0;
    puVar4[0x55] = 0;
    puVar4[0x52] = 0;
    puVar4[0x53] = 0;
    puVar4[0x50] = 0;
    puVar4[0x51] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x2ec) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar4 + 0x2f4) = 0;
    puVar4[0x60] = 0;
    *(undefined4 *)(puVar4 + 0x61) = 0;
    *puVar4 = &PTR_FUN_14a349180;
    *(undefined4 *)(puVar4 + 0x49) = 1;
    FUN_14476c1d2(puVar4 + 0x48,0);
    uVar6 = uStack_90;
    *(undefined8 **)puVar4[0x48] = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar4 + 0x3b) = 1;
    lVar8 = (longlong)(int)uStack_90;
    uVar2 = (int)uStack_90 + 1;
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
    if (uStack_90._4_4_ < uVar2) {
      FUN_1447183c0(&local_98,uVar6 & 0xffffffff);
    }
    uVar6 = local_68;
    *(undefined8 **)(local_98 + lVar8 * 8) = puVar4;
    lVar8 = (longlong)(int)local_68;
    uVar2 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,uVar2);
    if (local_68._4_4_ < uVar2) {
      FUN_14737999c(local_88,uVar6 & 0xffffffff);
    }
    puVar5 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar5 = local_88;
    }
    *(undefined8 **)(puVar5 + lVar8 * 8) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    lVar7 = lVar7 + 0x280;
  } while (lVar7 != 0x780);
  FUN_14473bfcc(DAT_14ca77418,&local_98);
  puVar5 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    puVar5 = local_88;
  }
  lVar7 = (longlong)(int)local_68;
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    do {
      if ((*(byte *)(*(longlong *)(*(longlong *)(puVar5 + lVar8) + 0x28) + 0xa0) & 1) == 0) {
        FUN_1402df4ac(DAT_14ca77418,*(undefined8 *)(*(longlong *)(puVar5 + lVar8) + 0x28));
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
    uVar6 = local_68 & 0xffffffff;
  }
  puVar5 = local_88;
  if (local_70 != (undefined1 *)0x0) {
    puVar5 = local_70;
  }
  FUN_14476c499(puVar5,uVar6);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141289ada FUN_141289ada body=20 status=ok
// SIG undefined FUN_141289ada(void)

void FUN_141289ada(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 1) == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = *param_2;
  }
  return;
}



// FUNCTION 141289aee FUN_141289aee body=1874 status=ok
// SIG undefined FUN_141289aee(void)

void FUN_141289aee(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_14067a048;
      local_a0 = 0;
      local_a8 = 0x28001;
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_3c);
            goto LAB_141289bea;
          }
        }
        piVar8 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar8 != &local_3c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_3c,piVar8,(int)plVar1[6]);
          }
          else {
            memcpy(&local_3c,piVar8,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar1[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_3c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_3c,lVar2);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
LAB_141289bea:
  iVar6 = local_3c;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_14067a048;
      local_a0 = 0;
      local_a8 = 0x28001;
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_141289cc6;
          }
        }
        piVar8 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar8 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,piVar8,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,piVar8,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar1[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_141289cc6:
  iVar5 = local_40;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = DAT_14c8464e0;
  uStack_70 = DAT_14c8464e8;
  local_68 = DAT_14c8464f0;
  local_60 = (undefined4)DAT_14c8464f8;
  uStack_5c = DAT_14c8464f8._4_4_;
  uStack_58 = (undefined4)DAT_14c846500;
  uStack_54 = DAT_14c846500._4_4_;
  local_50 = DAT_14c846508;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_88);
            goto LAB_141289dca;
          }
        }
        puVar9 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar9 != &local_88) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_88,puVar9,(int)plVar1[6]);
          }
          else {
            memcpy(&local_88,puVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar1[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_88,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_88,lVar2);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar9;
        puVar9 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
LAB_141289dca:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar7 = (**(code **)(*param_1 + 0xa90))(param_1,iVar6 != 0,iVar5 != 0,&local_88);
  if (cVar7 == '\0') {
    FUN_1468998ea(L"ServerStopUsingGadget_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xa98))(param_1,iVar6 != 0,iVar5 != 0,&local_88);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128a246 FUN_14128a246 body=172 status=ok
// SIG undefined FUN_14128a246(void)

void FUN_14128a246(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar1 = FUN_1403ae46b();
    if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
        (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
       ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0)))) {
      lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
      if (lVar2 != 0) {
        uVar3 = FUN_1403ae386();
        plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x50))(plVar4,param_4);
          FUN_1407afb5c(param_1,param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14128a2f2 FUN_14128a2f2 body=1159 status=ok
// SIG undefined FUN_14128a2f2(void)

void FUN_14128a2f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_14128a3d9;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_14128a3d9:
  local_2a = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2a);
            goto LAB_14128a4a2;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_2a) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2a,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2a,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2a,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2a,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
LAB_14128a4a2:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14128a77a(param_1,local_29,local_2a);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128a77a FUN_14128a77a body=176 status=ok
// SIG undefined FUN_14128a77a(void)

void FUN_14128a77a(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_14128a795;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x130);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x60));
  *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + 1;
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
  if (*(char *)(lVar3 + 0x50) == '\0') {
    iVar4 = *(int *)(lVar3 + 0x54) + 1;
LAB_14128a7f5:
    *(undefined1 *)(lVar3 + 0x50) = 1;
    *(int *)(lVar3 + 0x54) = iVar4;
  }
  else if (*(int *)(lVar3 + 0x54) == 0) {
    iVar4 = 1;
    goto LAB_14128a7f5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x60));
LAB_14128a795:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128a82c FUN_14128a82c body=144 status=ok
// SIG undefined FUN_14128a82c(void)

void FUN_14128a82c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_145879996(param_1);
    plVar1 = (longlong *)(param_1 + 0x2650);
    lVar4 = 0;
    do {
      if (lVar4 < *(int *)(param_1 + 0x2658)) {
        lVar3 = *plVar1;
        plVar2 = *(longlong **)(lVar3 + lVar4 * 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
          lVar3 = *plVar1;
        }
        *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    *(undefined4 *)(param_1 + 0x2658) = 0;
    if (*(int *)(param_1 + 0x265c) != 0) {
      FUN_145879966(plVar1);
    }
  }
  FUN_140d6119a(param_1,param_2);
  return;
}



// FUNCTION 14128a8bc FUN_14128a8bc body=90 status=ok
// SIG undefined FUN_14128a8bc(void)

void FUN_14128a8bc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 14128a916 FUN_14128a916 body=251 status=ok
// SIG undefined FUN_14128a916(void)

void FUN_14128a916(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14119010c();
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar5 = **(longlong **)(param_1 + 0x168);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) {
      return;
    }
    lVar3 = FUN_14128aa12();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar3 = FUN_1476d2ff2(param_1);
      lVar4 = FUN_1433335b4(param_1);
      lVar5 = *(longlong *)(lVar4 + 0x30);
      if (DAT_14c950c29 == 1) {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_1456cec3c(lVar5);
          lVar5 = *(longlong *)(lVar4 + 0x30);
        }
      }
      bVar2 = DAT_14c950c29;
      *(longlong *)(lVar3 + 0x30) = lVar5;
      if (lVar3 != 0 && (~bVar2 & 1) == 0) {
        FUN_1456cec3c(lVar3);
        bVar2 = DAT_14c950c29;
      }
      *(longlong *)(lVar5 + 0x30) = lVar3;
      plVar1 = *(longlong **)(param_1 + 0x168);
      if ((lVar3 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(lVar3);
      }
      *plVar1 = lVar3;
    }
  }
  return;
}



// FUNCTION 14128aa12 FUN_14128aa12 body=228 status=ok
// SIG undefined FUN_14128aa12(void)

longlong FUN_14128aa12(void)

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
  if (DAT_14cab71c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_1476d337b;
    local_40 = FUN_1417a95fe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/UMG",L"BorderSlot",&DAT_14cab71c8,FUN_14635156a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab71c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128aaf8 FUN_14128aaf8 body=32 status=ok
// SIG undefined FUN_14128aaf8(void)

undefined8 FUN_14128aaf8(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_1400f6f32(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 14128ab18 FUN_14128ab18 body=422 status=ok
// SIG undefined FUN_14128ab18(void)

void FUN_14128ab18(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)(param_1 + 0x5d0);
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  local_50 = param_3;
  iVar2 = FUN_14128acc0(plVar6);
  if (iVar2 == -1) {
    local_40 = &local_50;
    local_48 = param_2;
    FUN_145879fd4(plVar6,local_34);
  }
  else {
    iVar2 = *(int *)(param_2 + 1);
    uVar4 = 0;
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      if (iVar2 == 0) {
        puVar1 = &DAT_149dfb77a;
      }
      else {
        puVar1 = (undefined2 *)*param_2;
      }
      lVar7 = 0;
      uVar4 = 0;
      do {
        uVar5 = ((uint)(0x19 < (ushort)puVar1[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar7]) -
                0x20;
        uVar8 = (uint)(uVar4 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
        uVar4 = (ulonglong)
                (uVar8 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while (iVar3 != (int)lVar7);
    }
    iVar2 = FUN_14128acc0(plVar6,uVar4,param_2);
    if (iVar2 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)iVar2 * 0x20 + *plVar6;
    }
    *(undefined8 *)(lVar7 + 0x10) = param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128acc0 FUN_14128acc0 body=203 status=ok
// SIG undefined FUN_14128acc0(void)

int FUN_14128acc0(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14128ad0a:
      lVar10 = (longlong)iVar1 * 0x20;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_14128ad80;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14128ad80;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14128ad71;
    }
  }
  return -1;
LAB_14128ad80:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14128ad71:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14128ad0a;
}



// FUNCTION 14128ad8c FUN_14128ad8c body=332 status=ok
// SIG undefined FUN_14128ad8c(void)

undefined8 * FUN_14128ad8c(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x20) != 0)) &&
     (*(longlong **)(param_2 + 0x28) != (longlong *)0x0)) {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x28) + 8))();
    if (lVar2 != 0) {
      local_28 = 0;
      uStack_20 = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_2 + 0x28);
      }
      lVar2 = (**(code **)(*plVar3 + 8))();
      cVar1 = FUN_140bb182a(lVar2 + 0x3f0,&local_28,0);
      if ((cVar1 != '\0') && ((longlong)(int)uStack_20 != 0)) {
        lVar2 = 0;
        do {
          if ((*(longlong *)(local_28 + lVar2) != 0) &&
             (*(char *)(*(longlong *)(local_28 + lVar2) + 0x18) == '\x04')) {
            if (0 < *(int *)(local_28 + 0x10 + lVar2)) {
              *param_1 = *(undefined8 *)(**(longlong **)(local_28 + 8 + lVar2) + 0x80);
              goto LAB_14128ae57;
            }
            break;
          }
          lVar2 = lVar2 + 0x18;
        } while ((longlong)(int)uStack_20 * 0x18 != lVar2);
      }
      FUN_1446f470e(param_1,&DAT_149e62e78,1);
LAB_14128ae57:
      FUN_140bb299f(local_28,uStack_20 & 0xffffffff);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  FUN_1446f470e(param_1,&DAT_149e62e78,1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14128aedc FUN_14128aedc body=485 status=ok
// SIG undefined FUN_14128aedc(void)

void FUN_14128aedc(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x20;
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
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
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



// FUNCTION 14128b0c2 FUN_14128b0c2 body=209 status=ok
// SIG undefined FUN_14128b0c2(void)

void FUN_14128b0c2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  if ((*(ushort *)(param_1 + 0x40) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (plVar3 = *(longlong **)(param_1 + 0x40), plVar3 != (longlong *)0x0)) {
        FUN_140958ed1(*plVar3,(int)plVar3[1]);
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14128b147;
      }
    }
  }
  else {
    plVar3 = *(longlong **)
              (&DAT_14c927ae8 + (ulonglong)(*(ushort *)(param_1 + 0x40) & 0xfffffffc) * 2);
    LOCK();
    plVar2 = plVar3 + 0x18;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0 && (int)*plVar2 == 0) {
      FUN_14587a8e6(plVar3);
LAB_14128b147:
      FUN_1400020a8(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14128b194 FUN_14128b194 body=165 status=ok
// SIG undefined FUN_14128b194(void)

undefined4 * FUN_14128b194(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uVar12 = param_2[8];
  uVar13 = param_2[9];
  uVar14 = param_2[10];
  uVar15 = param_2[0xb];
  uVar16 = param_2[0xd];
  uVar17 = param_2[0xe];
  uVar18 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar16;
  param_1[0xe] = uVar17;
  param_1[0xf] = uVar18;
  param_1[8] = uVar12;
  param_1[9] = uVar13;
  param_1[10] = uVar14;
  param_1[0xb] = uVar15;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar11;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  FUN_14020871a(param_1 + 0x10,param_2 + 0x10);
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_2 + 0x12) = 0;
    plVar2 = *(longlong **)(param_2 + 0x14);
    plVar3 = *(longlong **)(param_1 + 0x14);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x14) = 0;
      *(longlong **)(param_1 + 0x14) = plVar2;
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
  FUN_14128b23a(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 14128b23a FUN_14128b23a body=98 status=ok
// SIG undefined FUN_14128b23a(void)

undefined8 * FUN_14128b23a(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    if (param_2[1] == 0) {
      *param_1 = *param_2;
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0x200000000;
  }
  return param_1;
}



// FUNCTION 14128b29c FUN_14128b29c body=460 status=ok
// SIG undefined FUN_14128b29c(void)

void FUN_14128b29c(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar10 = 0;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x98);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar10) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar5[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar14 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    uVar12 = 0xffffffff;
    do {
      if (*(int *)(lVar3 + 4 + (longlong)iVar6 * 0x14) == param_3) {
        FUN_144b491b0(param_2,*(undefined4 *)(lVar3 + (longlong)iVar6 * 0x14 + 8));
        FUN_14587a978((longlong *)(param_1 + 0x88),iVar6);
        return;
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0xa8);
      if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x98);
      }
      iVar6 = (int)uVar10;
      lVar4 = (longlong)iVar6;
      uVar7 = puVar5[lVar4] & uVar12;
      if (uVar7 == 0) {
        iVar8 = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          iVar8 = iVar2 + 0x1e;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = puVar5[lVar4 + lVar13 + 1];
          if (uVar7 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar4 == lVar13) {
            return;
          }
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar13 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar14 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
  return;
}



// FUNCTION 14128b468 FUN_14128b468 body=91 status=ok
// SIG undefined FUN_14128b468(void)

void FUN_14128b468(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f14cc6();
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x300);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x300) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014128b4bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14128b4c4 FUN_14128b4c4 body=270 status=ok
// SIG undefined FUN_14128b4c4(void)

undefined8 FUN_14128b4c4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14128b5cc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14128b5cc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14128b5cc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14128b57a;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_14128b57a;
    }
  }
  uVar6 = 0;
LAB_14128b57a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128b5d4 FUN_14128b5d4 body=2605 status=ok
// SIG undefined FUN_14128b5d4(void)

void FUN_14128b5d4(longlong param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int *piVar17;
  int iVar18;
  longlong lVar19;
  int *piVar20;
  undefined8 uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  undefined8 local_290;
  uint local_288;
  int local_284;
  longlong local_280;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  longlong local_260;
  undefined8 *local_258;
  ushort *local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  ushort local_1fc [2];
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined1 local_190;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  undefined5 uStack_178;
  undefined3 local_173;
  undefined5 uStack_170;
  longlong local_168 [2];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  longlong local_120;
  int local_118;
  int local_114;
  void *local_110;
  int local_108;
  undefined4 local_104;
  undefined1 local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined5 uStack_e8;
  undefined3 local_e3;
  undefined5 uStack_e0;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [40];
  undefined8 local_a8;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_280 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x458);
  lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  uVar13 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar15 = local_98;
  plVar11 = local_168;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar11 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar11 = plVar11 + 1;
  }
  plVar15 = (longlong *)(param_1 + 0x40);
  plVar11 = local_98;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar11 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar11 = plVar11 + 1;
  }
  plVar15 = local_168;
  plVar11 = (longlong *)(param_1 + 0x40);
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar11 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar11 = plVar11 + 1;
  }
  uVar16 = (ulonglong)local_70;
  if (local_70 == 0) {
    uVar23 = 1;
    iVar18 = 0;
    uVar6 = 0;
  }
  else {
    puVar5 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar5 = local_88;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar18 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar18 = local_70 - 1;
      }
      uVar13 = 0;
      uVar23 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar23 = uVar13;
      }
      iVar18 = 0;
      do {
        if (uVar23 == uVar13) goto LAB_14128b6fc;
        iVar18 = iVar18 + 0x20;
        uVar6 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar13 = 0;
      iVar18 = 0;
    }
    uVar23 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar23 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar6 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar6) {
      uVar6 = local_70;
    }
  }
  if (uVar6 != local_70) {
    local_258 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xec8);
    uVar22 = 0xffffffff;
    uVar4 = local_70;
    local_278 = uVar16;
    local_260 = lVar24;
    do {
      lVar10 = (longlong)(int)uVar6 * 0x20;
      lVar9 = (longlong)*(int *)(local_98[0] + 0x10 + lVar10);
      if (lVar9 != 0) {
        local_250 = (ushort *)(local_98[0] + lVar10);
        lVar10 = *(longlong *)(local_98[0] + 8 + lVar10);
        lVar9 = lVar9 << 6;
        piVar17 = (int *)(lVar10 + 0x24);
        local_288 = uVar22;
        local_284 = iVar18;
        local_270 = uVar23;
        local_268 = uVar13;
        do {
          lVar14 = *(longlong *)(lVar24 + 8);
          lVar19 = (ulonglong)*local_250 * 0x128;
          local_1c8 = *(undefined8 *)(lVar14 + 0x88 + lVar19);
          puVar2 = (undefined4 *)(lVar14 + 0x68 + lVar19);
          local_1e8 = *puVar2;
          uStack_1e4 = puVar2[1];
          uStack_1e0 = puVar2[2];
          uStack_1dc = puVar2[3];
          puVar2 = (undefined4 *)(lVar14 + 0x78 + lVar19);
          local_1d8 = *puVar2;
          uStack_1d4 = puVar2[1];
          uStack_1d0 = puVar2[2];
          uStack_1cc = puVar2[3];
          local_1b8 = *(undefined4 *)(lVar14 + 0x98 + lVar19);
          local_1c0 = *(undefined8 *)(lVar14 + 0x90 + lVar19);
          local_1b0 = 0;
          iVar18 = *(int *)(lVar14 + 0xa8 + lVar19);
          uVar21 = *(undefined8 *)(lVar14 + 0xa0 + lVar19);
          local_248 = lVar9;
          local_1a8 = iVar18;
          if (iVar18 == 0) {
            local_1a4 = 0;
          }
          else {
            FUN_14753cf4a(&local_1b0,iVar18,0);
            FUN_14753cfbd(local_1b0,uVar21,iVar18);
          }
          lVar14 = lVar14 + lVar19;
          local_1a0 = (void *)0x0;
          local_198 = *(int *)(lVar14 + 0xb8);
          lVar9 = (longlong)local_198;
          pvVar3 = *(void **)(lVar14 + 0xb0);
          if (lVar9 == 0) {
            local_194 = 0;
          }
          else {
            FUN_1456c5740(&local_1a0,local_198,0);
            memcpy(local_1a0,pvVar3,lVar9 << 3);
          }
          local_190 = *(undefined1 *)(lVar14 + 0xc0);
          local_188 = (void *)0x0;
          local_180 = *(int *)(lVar14 + 0xd0);
          lVar9 = (longlong)local_180;
          pvVar3 = *(void **)(lVar14 + 200);
          if (lVar9 == 0) {
            local_17c = 0;
          }
          else {
            FUN_1447bda9e(&local_188,local_180,0);
            memcpy(local_188,pvVar3,lVar9 << 2);
          }
          uStack_170 = (undefined5)((ulonglong)*(undefined8 *)(lVar14 + 0xdd) >> 0x18);
          uStack_178 = (undefined5)*(undefined8 *)(lVar14 + 0xd8);
          local_173 = (undefined3)((ulonglong)*(undefined8 *)(lVar14 + 0xd8) >> 0x28);
          local_290 = *(undefined8 *)(lVar14 + 0x100);
          plVar15 = *(longlong **)(lVar14 + 0x108);
          if (plVar15 == (longlong *)0x0) {
            local_298 = (undefined1)piVar17[5];
            piVar20 = (int *)(lVar10 + 0x24);
            iVar18 = *piVar17;
            uVar21 = *(undefined8 *)(piVar17 + -9);
            local_1f0 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            local_298 = (undefined1)piVar17[5];
            iVar18 = *piVar17;
            uVar21 = *(undefined8 *)(piVar17 + -9);
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            piVar20 = piVar17;
            local_1f0 = plVar15;
          }
          local_1f8 = local_290;
          FUN_1432db628(local_d0,&local_1f8,uVar21,iVar18);
          iVar18 = local_1a8;
          lVar9 = local_1b0;
          local_168[0] = *(longlong *)(piVar17 + -5);
          local_168[1] = *(longlong *)(piVar17 + -3);
          local_138 = local_1c8;
          local_148 = local_1d8;
          uStack_144 = uStack_1d4;
          uStack_140 = uStack_1d0;
          uStack_13c = uStack_1cc;
          local_158 = local_1e8;
          uStack_154 = uStack_1e4;
          uStack_150 = uStack_1e0;
          uStack_14c = uStack_1dc;
          local_128 = local_1b8;
          local_130 = local_1c0;
          local_120 = 0;
          local_118 = local_1a8;
          if (local_1a8 == 0) {
            local_114 = 0;
          }
          else {
            FUN_14753cf4a(&local_120,local_1a8,0);
            FUN_14753cfbd(local_120,lVar9,iVar18);
          }
          pvVar3 = local_1a0;
          local_110 = (void *)0x0;
          lVar9 = (longlong)local_198;
          local_108 = local_198;
          if (lVar9 == 0) {
            local_104 = 0;
          }
          else {
            FUN_1456c5740(&local_110,local_198,0);
            memcpy(local_110,pvVar3,lVar9 << 3);
          }
          pvVar3 = local_188;
          local_100 = local_190;
          local_f8 = (void *)0x0;
          lVar9 = (longlong)local_180;
          local_f0 = local_180;
          if (lVar9 == 0) {
            local_ec = 0;
          }
          else {
            FUN_1447bda9e(&local_f8,local_180,0);
            memcpy(local_f8,pvVar3,lVar9 << 2);
          }
          uStack_e0 = uStack_170;
          uStack_e8 = uStack_178;
          local_e3 = local_173;
          local_d8 = *piVar20;
          local_d4 = piVar17[1];
          if (((*piVar20 != DAT_14cab25c0) &&
              (plVar11 = *(longlong **)(lVar14 + 0xf0), plVar11 != (longlong *)0x0)) &&
             ((**(code **)(*plVar11 + 0x58))(plVar11,local_1fc), local_1fc[0] != 0xffff)) {
            lVar14 = *(longlong *)(lVar24 + 8);
            lVar9 = (ulonglong)local_1fc[0] * 0x128;
            lVar24 = lVar9 + lVar14;
            local_138 = *(undefined8 *)(lVar24 + 0x88);
            local_158 = *(undefined4 *)(lVar24 + 0x68);
            uStack_154 = *(undefined4 *)(lVar24 + 0x6c);
            uStack_150 = *(undefined4 *)(lVar24 + 0x70);
            uStack_14c = *(undefined4 *)(lVar24 + 0x74);
            local_148 = *(undefined4 *)(lVar24 + 0x78);
            uStack_144 = *(undefined4 *)(lVar24 + 0x7c);
            uStack_140 = *(undefined4 *)(lVar24 + 0x80);
            uStack_13c = *(undefined4 *)(lVar24 + 0x84);
            local_128 = *(undefined4 *)(lVar24 + 0x98);
            local_130 = *(undefined8 *)(lVar24 + 0x90);
            if (&local_120 != (longlong *)(lVar24 + 0xa0)) {
              FUN_1447bda9c(local_120,local_118);
              local_118 = *(int *)(lVar14 + 0xa8 + lVar9);
              lVar24 = *(longlong *)(lVar24 + 0xa0);
              if (local_118 == 0 && local_114 == 0) {
                local_114 = 0;
              }
              else {
                FUN_14753cf4a(&local_120,local_118);
                FUN_14753cfbd(local_120,lVar24);
              }
            }
            lVar9 = lVar9 + lVar14;
            FUN_140415652(&local_110,lVar9 + 0xb0);
            uStack_e8 = (undefined5)*(undefined8 *)(lVar9 + 0xd8);
            local_e3 = (undefined3)*(undefined8 *)(lVar9 + 0xdd);
            uStack_e0 = (undefined5)((ulonglong)*(undefined8 *)(lVar9 + 0xdd) >> 0x18);
            lVar24 = local_260;
          }
          lVar9 = local_248;
          switch(piVar17[4]) {
          case 0:
            if (*(longlong *)(piVar17 + -9) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(piVar17 + -7);
            }
            local_210 = local_290;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            local_208 = plVar15;
            (**(code **)(*plVar11 + 0x18))(plVar11,&local_210);
            break;
          case 1:
            if (*(longlong *)(piVar17 + -9) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(piVar17 + -7);
            }
            local_220 = local_290;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            local_218 = plVar15;
            (**(code **)(*plVar11 + 0x28))(plVar11,&local_220);
            break;
          case 2:
            if (*(longlong *)(piVar17 + -9) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(piVar17 + -7);
            }
            local_230 = local_290;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            local_228 = plVar15;
            (**(code **)(*plVar11 + 0x38))(plVar11,&local_230);
            if (local_280 != 0) {
              FUN_14755e72e(local_280,*(undefined8 *)(piVar17 + -9),piVar17[-1],*piVar20);
            }
            break;
          case 3:
            if (*(longlong *)(piVar17 + -9) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(piVar17 + -7);
            }
            local_240 = local_290;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            local_238 = plVar15;
            (**(code **)(*plVar11 + 0x48))(plVar11,&local_240);
          }
          FUN_144b1f39c(&local_110);
          FUN_1447bda9c(local_120,local_118);
          if (local_120 != 0) {
            FUN_1400020a8();
          }
          *local_258 = local_a8;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar15 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar20 = (int *)((longlong)plVar15 + 0xc);
              *piVar20 = *piVar20 + -1;
              UNLOCK();
              if (*piVar20 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          FUN_144b1f39c(&local_1a0);
          FUN_1447bda9c(local_1b0,local_1a8);
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
          lVar10 = lVar10 + 0x40;
          piVar17 = piVar17 + 0x10;
          lVar9 = lVar9 + -0x40;
          uVar13 = local_268;
          uVar16 = local_278;
          uVar23 = local_270;
          iVar18 = local_284;
          uVar4 = local_70;
          uVar22 = local_288;
        } while (lVar9 != 0);
      }
      uVar22 = uVar22 & ~(uint)uVar23;
      puVar5 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar5 = local_88;
      }
      iVar12 = (int)uVar13;
      lVar9 = (longlong)iVar12;
      uVar6 = puVar5[lVar9] & uVar22;
      if (uVar6 == 0) {
        iVar7 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar7 = uVar4 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar12) {
          iVar8 = iVar12;
        }
        if (iVar12 < iVar7) {
          lVar10 = 0;
          do {
            uVar6 = puVar5[lVar9 + lVar10 + 1];
            if (uVar6 != 0) {
              uVar13 = (ulonglong)(iVar12 + (int)lVar10 + 1);
              uVar22 = 0xffffffff;
              goto LAB_14128bfb4;
            }
            iVar18 = iVar18 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar8 - lVar9 != lVar10);
          uVar22 = 0xffffffff;
          lVar9 = (longlong)iVar8;
        }
        uVar13 = lVar9 + 1U & 0xffffffff;
        uVar6 = uVar4;
      }
      else {
LAB_14128bfb4:
        uVar23 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar23 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar6 = (iVar18 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar6) {
          uVar6 = uVar4;
        }
      }
    } while (uVar6 != (uint)uVar16);
  }
LAB_14128b6fc:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1411b5d74(local_98);
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14128c002 FUN_14128c002 body=47 status=ok
// SIG undefined FUN_14128c002(void)

void FUN_14128c002(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 2 && *(int *)(param_1 + 0x24) < 1) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x18);
  }
  *param_2 = param_1;
  *(int *)(param_2 + 1) = iVar1;
  return;
}



// FUNCTION 14128c032 FUN_14128c032 body=78 status=ok
// SIG undefined FUN_14128c032(void)

undefined8 * FUN_14128c032(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_14b0703c0;
  FUN_1447a97f4(param_1 + 1);
  FUN_1447a97f4(param_1 + 6,param_3);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x4ade3d;
  return param_1;
}



// FUNCTION 14128c080 FUN_14128c080 body=286 status=ok
// SIG undefined FUN_14128c080(void)

undefined8 FUN_14128c080(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14128c198;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14128c198;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14128c198:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14128c145;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14128c145;
    }
  }
  uVar6 = 0;
LAB_14128c145:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128c1a0 FUN_14128c1a0 body=137 status=ok
// SIG undefined FUN_14128c1a0(void)

void FUN_14128c1a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d47e6c();
  plVar1 = (longlong *)FUN_140059518(param_1 + 0x44);
  if ((((plVar1 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1), lVar2 != 0))
      && (*(longlong *)(lVar2 + 0x1f0) != 0)) &&
     ((lVar2 = FUN_148d9ae84(), lVar2 != 0 && ((longlong)*(int *)(lVar2 + 0x188) != 0)))) {
    lVar3 = 0;
    do {
      if (*(longlong **)(*(longlong *)(lVar2 + 0x180) + lVar3) == plVar1) {
        FUN_1441bb55a(lVar2,plVar1);
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x188) * 8 != lVar3);
  }
  return;
}



// FUNCTION 14128c22a FUN_14128c22a body=1021 status=ok
// SIG undefined FUN_14128c22a(void)

void FUN_14128c22a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  byte unaff_R12B;
  char cVar10;
  byte bVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = (longlong)param_1 + 0x44;
  lVar6 = FUN_1408bb964(lVar8);
  if (lVar6 == 0) {
LAB_14128c5c1:
    bVar9 = 0;
  }
  else {
    lVar7 = FUN_1403ca142();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_14128c5c1;
    unaff_R12B = 1 < *(int *)(lVar6 + 0x40);
    bVar9 = 1;
  }
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((lVar6 == 0) || (*(longlong *)(lVar6 + 0x1f0) == 0)) ||
      (lVar6 = FUN_14116599c(), lVar6 == 0)) || (lVar7 = FUN_1400f3ad8(lVar8), lVar7 == 0)) {
LAB_14128c4e7:
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14cbadd90 == 0) {
    local_80 = &local_58;
    local_58 = FUN_141030f22;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_1459f2e4c;
    local_88 = &LAB_148c39de3;
    local_90 = &LAB_1457a9eb2;
    local_98 = &DAT_149e063b2;
    local_a0 = 0;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_14128c4e7;
  lVar8 = FUN_1408bb964(lVar8);
  local_60 = lVar6;
  if (lVar8 == 0) {
LAB_14128c5c8:
    bVar11 = 0;
    cVar3 = '\0';
    bVar12 = false;
  }
  else {
    lVar6 = FUN_1403ca142();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_14128c5c8;
    if (*(int *)(lVar8 + 0x40) < 1) {
LAB_14128c518:
      bVar12 = false;
    }
    else {
      lVar6 = **(longlong **)(lVar8 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
        FUN_1456cec3c(lVar6);
      }
      else if (lVar6 == 0) goto LAB_14128c518;
      bVar12 = *(longlong *)(lVar6 + 0x30) == lVar7;
    }
    cVar3 = FUN_14128c646(lVar8);
    if (cVar3 == '\0') {
      bVar11 = 0;
    }
    else {
      bVar11 = *(byte *)(lVar8 + 0x474);
    }
  }
  FUN_1402815f4(param_1,&local_58);
  lVar8 = *(longlong *)(local_58 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x6e0));
  *(int *)(lVar8 + 0x6d8) = *(int *)(lVar8 + 0x6d8) + 1;
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
  if (bVar12) {
    lVar6 = FUN_140a68038(1);
    cVar10 = '\0';
    if ((lVar6 == 0) && (cVar4 = FUN_1441be926(local_60), cVar10 = '\0', cVar4 != '\0')) {
      cVar10 = cVar3;
    }
  }
  else {
    cVar10 = '\0';
  }
  if (cVar10 == *(char *)(lVar8 + 0x48)) {
    if (*(int *)(lVar8 + 0x4c) == 0) {
      iVar5 = 1;
      goto LAB_14128c4a7;
    }
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x4c) + 1;
LAB_14128c4a7:
    *(char *)(lVar8 + 0x48) = cVar10;
    *(int *)(lVar8 + 0x4c) = iVar5;
  }
  bVar9 = bVar9 & unaff_R12B;
  if (*(char *)(lVar8 + 0x50) == *(char *)(local_60 + 0x228)) {
    if (*(int *)(lVar8 + 0x54) == 0) {
      iVar5 = 1;
      goto LAB_14128c4b9;
    }
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x54) + 1;
LAB_14128c4b9:
    *(char *)(lVar8 + 0x50) = *(char *)(local_60 + 0x228);
    *(int *)(lVar8 + 0x54) = iVar5;
  }
  if (*(byte *)(lVar8 + 0x58) == bVar9) {
    if (*(int *)(lVar8 + 0x5c) == 0) {
      iVar5 = 1;
      goto LAB_14128c4cb;
    }
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x5c) + 1;
LAB_14128c4cb:
    *(byte *)(lVar8 + 0x58) = bVar9;
    *(int *)(lVar8 + 0x5c) = iVar5;
  }
  if (*(byte *)(lVar8 + 0x68) == (bVar9 & bVar11)) {
    if (*(int *)(lVar8 + 0x6c) != 0) goto LAB_14128c469;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar8 + 0x6c) + 1;
  }
  *(byte *)(lVar8 + 0x68) = bVar9 & bVar11;
  *(int *)(lVar8 + 0x6c) = iVar5;
LAB_14128c469:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 14128c646 FUN_14128c646 body=79 status=ok
// SIG undefined FUN_14128c646(void)

undefined4 FUN_14128c646(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  
  bVar1 = (**(code **)(*param_1 + 0x498))();
  if ((bVar1 - 7 < 2) || (bVar1 == 5)) {
    if (param_1[0xaa] != 0) {
      cVar2 = FUN_14128c696();
      if (cVar2 == '\0') goto LAB_14128c691;
    }
    uVar3 = CONCAT31((int3)((uint)(int)param_1[0xaf] >> 8),
                     *(int *)((longlong)param_1 + 0x5a4) < (int)param_1[0xaf]);
  }
  else {
LAB_14128c691:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14128c696 FUN_14128c696 body=60 status=ok
// SIG undefined FUN_14128c696(void)

undefined8 FUN_14128c696(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x140) == '\0') {
    if ((*(char *)(param_1 + 0xb0) != '\a') &&
       ((*(char *)(param_1 + 0xb0) != '\x06' ||
        ((lVar1 = FUN_14662d9fa(), lVar1 != 0 && (10 < *(int *)(lVar1 + 0x604))))))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14128c6d2 FUN_14128c6d2 body=1287 status=ok
// SIG undefined FUN_14128c6d2(void)

void FUN_14128c6d2(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *_Str;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char *pcVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_88 [40];
  longlong local_60;
  char *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb89860);
  pbVar1 = (byte *)*puVar5;
  puVar5 = &DAT_14c9a1270;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar5 = *(undefined8 **)(pbVar1 + 8);
  }
  if ((longlong)*(int *)(puVar5 + 2) == 0) {
LAB_14128cb60:
    if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar18 = (undefined8 *)*puVar5;
  puVar5 = puVar18 + (longlong)*(int *)(puVar5 + 2) * 2;
LAB_14128c74d:
  pbVar1 = (byte *)*puVar18;
  puVar16 = &DAT_14c9a1308;
  if (pbVar1 != (byte *)0x0) {
    plVar11 = &DAT_14c9a1288;
    if ((*pbVar1 & 2) != 0) {
      plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    puVar16 = &DAT_14c9a1308;
    if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
      plVar13 = plVar11 + 8;
      if ((longlong *)plVar11[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar11[9];
      }
      iVar10 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar11[10] - 1U & DAT_14cb89810) * 4);
      puVar16 = &DAT_14c9a1308;
      if (iVar10 != -1) {
        do {
          lVar7 = *plVar11 + (longlong)iVar10 * 0x40;
          if (*(uint *)(*plVar11 + (longlong)iVar10 * 0x40) == DAT_14cb89810) {
            puVar16 = &DAT_14c9a1308;
            if (lVar7 == 0) goto LAB_14128c7e7;
            puVar17 = (undefined8 *)(lVar7 + 0x28);
            puVar16 = &DAT_14c9a1308;
            if ((puVar17 == (undefined8 *)0x0) ||
               (((byte *)*puVar17 != (byte *)0x0 &&
                (puVar16 = puVar17, (*(byte *)*puVar17 & 0x40) == 0)))) goto LAB_14128c7e7;
            break;
          }
          iVar10 = *(int *)(lVar7 + 0x38);
        } while (iVar10 != -1);
        puVar16 = &DAT_14c9a1308;
      }
    }
  }
LAB_14128c7e7:
  pbVar1 = (byte *)*puVar16;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (_Str = *(char **)(pbVar1 + 8), _Str == (char *)0x0)) {
LAB_14128c7f3:
    uVar6 = 0;
    uVar22 = 0;
  }
  else {
    sVar8 = strlen(_Str);
    iVar10 = (int)sVar8;
    if (iVar10 == 0) goto LAB_14128c7f3;
    lVar7 = (longlong)iVar10;
    pcVar19 = _Str + lVar7 + -1;
    if (pcVar19 < _Str) {
      lVar21 = 0;
    }
    else {
      uVar9 = 0;
      do {
        if (9 < (byte)(*pcVar19 - 0x30U)) break;
        uVar9 = uVar9 + 1;
        pcVar19 = pcVar19 + -1;
      } while (_Str <= pcVar19);
      if ((((uVar9 == 0) || (iVar10 <= (int)uVar9)) ||
          ((10 < uVar9 || (lVar20 = -(ulonglong)uVar9, _Str[lVar20 + lVar7 + -1] != '_')))) ||
         ((uVar9 != 1 && (_Str[lVar20 + lVar7] == '0')))) {
LAB_14128ca7a:
        lVar21 = 0;
      }
      else {
        lVar23 = 0;
        do {
          lVar21 = (longlong)_Str[lVar20 + lVar7] + lVar23 * 10;
          lVar23 = lVar21 + -0x30;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0);
        if (0x7ffffffe < lVar23) goto LAB_14128ca7a;
        iVar10 = ~uVar9 + iVar10;
        lVar21 = lVar21 + -0x2f;
      }
      if (iVar10 == 0) goto LAB_14128c7f3;
    }
    local_4c = 0;
    local_58 = _Str;
    local_50 = iVar10;
    uVar9 = FUN_14001a6c0(&local_58);
    uVar22 = lVar21 << 0x20;
    uVar6 = (ulonglong)uVar9;
  }
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x138) + 0x94;
    lVar7 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
    do {
      if (*(ulonglong **)(lVar21 + -0x44) == (ulonglong *)0x0) {
        uVar15 = 0;
        uVar12 = 0;
      }
      else {
        uVar15 = **(ulonglong **)(lVar21 + -0x44);
        uVar12 = uVar15 & 0xffffffff;
        uVar15 = uVar15 & 0xffffffff00000000;
      }
      if (((uVar22 | uVar6) == *(ulonglong *)(lVar21 + -0x4c)) ||
         (((uVar12 | uVar15) != 0 && ((uVar22 | uVar6) == (uVar12 | uVar15))))) {
        lVar7 = lVar21 + -0x94;
        if ((lVar7 != 0) &&
           ((((*(int *)(lVar21 + -0x38) != 0 && (uVar9 = *(uint *)(lVar21 + -0x3c), -1 < (int)uVar9)
              ) && ((int)uVar9 < DAT_14c9647dc)) &&
            (((puVar16 = (undefined8 *)
                         ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
              puVar16 != (undefined8 *)0x0 && (*(int *)(puVar16 + 2) == *(int *)(lVar21 + -0x38)))
             && ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
            uVar14 = *puVar16;
          }
          else {
            uVar14 = 0;
          }
          cVar2 = FUN_140a30c40(uVar14);
          if (cVar2 == '\0') goto LAB_14128c996;
          pbVar1 = (byte *)*puVar18;
          puVar16 = &DAT_14c9a1308;
          if (pbVar1 == (byte *)0x0) goto LAB_14128c97e;
          plVar11 = &DAT_14c9a1288;
          if ((*pbVar1 & 2) != 0) {
            plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
          }
          puVar16 = &DAT_14c9a1308;
          if ((int)plVar11[2] == *(int *)((longlong)plVar11 + 0x3c)) goto LAB_14128c97e;
          plVar13 = plVar11 + 8;
          if ((longlong *)plVar11[9] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar11[9];
          }
          iVar10 = *(int *)((longlong)plVar13 +
                           (ulonglong)((int)plVar11[10] - 1U & DAT_14cb89900) * 4);
          puVar16 = &DAT_14c9a1308;
          if (iVar10 == -1) goto LAB_14128c97e;
          goto LAB_14128c93d;
        }
        break;
      }
      lVar21 = lVar21 + 0xa8;
      lVar7 = lVar7 + -0xa8;
    } while (lVar7 != 0);
  }
  goto LAB_14128ca02;
  while (iVar10 = *(int *)(lVar20 + 0x38), iVar10 != -1) {
LAB_14128c93d:
    lVar20 = *plVar11 + (longlong)iVar10 * 0x40;
    if (*(uint *)(*plVar11 + (longlong)iVar10 * 0x40) == DAT_14cb89900) {
      puVar16 = &DAT_14c9a1308;
      if (lVar20 == 0) goto LAB_14128c97e;
      puVar17 = (undefined8 *)(lVar20 + 0x28);
      puVar16 = &DAT_14c9a1308;
      if ((puVar17 == (undefined8 *)0x0) ||
         (((byte *)*puVar17 != (byte *)0x0 && (puVar16 = puVar17, (*(byte *)*puVar17 & 0x40) == 0)))
         ) goto LAB_14128c97e;
      break;
    }
  }
  puVar16 = &DAT_14c9a1308;
LAB_14128c97e:
  uVar4 = FUN_140e1edd4(puVar16,0);
  FUN_14128cbda(lVar7,lVar21,uVar4,1);
LAB_14128c996:
  if ((*(int *)(lVar21 + -0x38) != 0) && (uVar9 = *(uint *)(lVar21 + -0x3c), -1 < (int)uVar9)) {
    uVar14 = 0;
    if (DAT_14c9647dc <= (int)uVar9) goto LAB_14128c9f5;
    puVar16 = (undefined8 *)
              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
    if (((puVar16 != (undefined8 *)0x0) && (*(int *)(puVar16 + 2) == *(int *)(lVar21 + -0x38))) &&
       ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)) {
      uVar14 = *puVar16;
      goto LAB_14128c9f5;
    }
  }
  uVar14 = 0;
LAB_14128c9f5:
  cVar2 = FUN_140a30ba2(uVar14);
  if (cVar2 != '\0') {
    uVar14 = FUN_144a06846(puVar18,&DAT_14cb89950);
    uVar4 = FUN_140e1edd4(uVar14,0);
    local_60 = param_1;
    uVar14 = FUN_144a06846(puVar18,&DAT_14cb89928);
    cVar3 = FUN_1410c4486(uVar14,0);
    param_1 = local_60;
    cVar2 = *(char *)(lVar21 + -3);
    *(char *)(lVar21 + -3) = cVar3;
    *(undefined4 *)(lVar21 + 8) = uVar4;
    if (cVar3 != cVar2) {
      FUN_14128cdea(lVar7);
      FUN_140d10d50(lVar21 + -0x7c,lVar7);
    }
  }
LAB_14128ca02:
  puVar18 = puVar18 + 2;
  if (puVar18 == puVar5) goto LAB_14128cb60;
  goto LAB_14128c74d;
}



// FUNCTION 14128cbda FUN_14128cbda body=360 status=ok
// SIG undefined FUN_14128cbda(void)

int FUN_14128cbda(longlong param_1,int *param_2,int param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if (param_4 == '\0') {
    lVar6 = *(longlong *)(param_1 + 0x50);
    iVar7 = 0;
    iVar8 = 0;
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 8) == '\x01') {
        iVar8 = *(int *)(lVar6 + 0xc);
      }
      else {
        iVar8 = 0x7fffffff;
      }
    }
    if (*param_2 < iVar8) {
      iVar8 = *param_2;
    }
    if (param_3 < 1) {
      param_3 = 0;
    }
    *param_2 = param_3;
    lVar6 = *(longlong *)(param_1 + 0x50);
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 8) == '\x01') {
        iVar7 = *(int *)(lVar6 + 0xc);
      }
      else {
        iVar7 = 0x7fffffff;
      }
    }
    if (param_3 < iVar7) {
      iVar7 = param_3;
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x50);
    iVar3 = 0;
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 8) == '\x01') {
        iVar3 = *(int *)(lVar6 + 0xc);
      }
      else {
        iVar3 = 0x7fffffff;
      }
    }
    iVar8 = *param_2;
    if (param_3 < iVar3) {
      iVar3 = param_3;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    *param_2 = iVar7;
    lVar6 = *(longlong *)(param_1 + 0x50);
  }
  if (lVar6 == 0) {
    iVar3 = *(int *)(param_1 + 0x94);
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x94);
    if (*(char *)(lVar6 + 0x10) == '\x01') {
      if (*(char *)(lVar6 + 8) == '\0') {
        iVar5 = *(int *)(param_1 + 0x98);
        iVar4 = 0x7fffffff;
      }
      else {
        iVar4 = *(int *)(lVar6 + 0xc);
        iVar5 = *(int *)(param_1 + 0x98);
        if (iVar4 <= *(int *)(param_1 + 0x98)) {
          iVar5 = iVar4;
        }
      }
      bVar2 = iVar4 <= iVar5 + iVar3;
      goto LAB_14128cc51;
    }
    if (*(char *)(lVar6 + 8) == '\0') {
      iVar4 = 0x7fffffff;
    }
    else {
      iVar4 = *(int *)(lVar6 + 0xc);
    }
  }
  if (*(int *)(param_1 + 0x98) < iVar4) {
    iVar4 = *(int *)(param_1 + 0x98);
  }
  bVar2 = iVar4 + iVar3 != 0 && SCARRY4(iVar4,iVar3) == iVar4 + iVar3 < 0;
LAB_14128cc51:
  cVar1 = *(char *)(param_1 + 0x91);
  *(bool *)(param_1 + 0x91) = bVar2;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (bVar2 != (bool)cVar1) {
    FUN_14128cdea(param_1);
    FUN_140d10d50(param_1 + 0x18,param_1);
  }
  if (iVar8 != iVar7) {
    FUN_14128cd42(param_1);
    FUN_140d10d50(param_1 + 0x30,param_1);
  }
  return iVar8;
}



// FUNCTION 14128cd42 FUN_14128cd42 body=165 status=ok
// SIG undefined FUN_14128cd42(void)

void FUN_14128cd42(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong **)(param_1 + 0x60) != (longlong *)0x0) && (*(int *)(param_1 + 0x5c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x5c))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      if (((*(longlong **)(lVar2 + 0x188) == (longlong *)0x0) ||
          (lVar2 = **(longlong **)(lVar2 + 0x188), lVar2 == 0)) ||
         ((*(char *)(lVar2 + 0x30) == '\0' &&
          ((*(char *)(lVar2 + 0x31) == '\0' && (*(int *)(lVar2 + 0x6c) != 1)))))) {
                    /* WARNING: Could not recover jumptable at 0x00014128cdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
        return;
      }
      *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 2;
    }
  }
  return;
}



// FUNCTION 14128cdea FUN_14128cdea body=165 status=ok
// SIG undefined FUN_14128cdea(void)

void FUN_14128cdea(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong **)(param_1 + 0x60) != (longlong *)0x0) && (*(int *)(param_1 + 0x5c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x5c))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      if (((*(longlong **)(lVar2 + 0x188) == (longlong *)0x0) ||
          (lVar2 = **(longlong **)(lVar2 + 0x188), lVar2 == 0)) ||
         ((*(char *)(lVar2 + 0x30) == '\0' &&
          ((*(char *)(lVar2 + 0x31) == '\0' && (*(int *)(lVar2 + 0x6c) != 1)))))) {
                    /* WARNING: Could not recover jumptable at 0x00014128ce80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
        return;
      }
      *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 4;
    }
  }
  return;
}



// FUNCTION 14128ce90 FUN_14128ce90 body=2121 status=ok
// SIG undefined FUN_14128ce90(void)

/* WARNING: Removing unreachable block (ram,0x00014128d4ae) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffef0 : 0x00014128d1bc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14128ce90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 ****ppppuVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  longlong *plVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_150;
  longlong *local_148;
  int local_134;
  longlong local_130;
  longlong local_128 [2];
  char local_118 [8];
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  byte local_f8;
  int local_f0 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  byte local_c8;
  undefined4 local_c0 [2];
  char local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_90 [2];
  undefined8 ***local_88;
  longlong *plStack_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar7 = *(int *)(param_2 + 0x5c);
  if (((((iVar7 == 0) || (uVar11 = *(uint *)(param_2 + 0x58), (int)uVar11 < 0)) ||
       (DAT_14c9647dc <= (int)uVar11)) ||
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0 || ((int)plVar15[2] != iVar7)))) ||
     ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) {
LAB_14128d3ae:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
  }
  if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
    lVar17 = *plVar15;
  }
  else {
    lVar17 = 0;
  }
  if ((*(char *)(lVar17 + 0x180) != '\x01') || (*(char *)(param_2 + 0x91) == '\0'))
  goto LAB_14128d3ae;
  plVar15 = *(longlong **)(param_1 + 0x20);
  if (plVar15 == (longlong *)0x0) goto LAB_14128d378;
  if (*(int *)(param_1 + 0x30) == 0) {
LAB_14128cf6c:
    if (((((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) ||
        (plVar14 = (longlong *)
                   ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
        plVar14 == (longlong *)0x0)) ||
       ((((int)plVar14[2] != iVar7 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) ||
        (lVar17 = *plVar14, lVar17 == 0)))) goto LAB_14128d5d1;
    uVar8 = *(undefined8 *)(lVar17 + 0x20);
    bVar21 = false;
  }
  else {
    FUN_140e5218a(param_1);
    iVar7 = *(int *)(param_2 + 0x5c);
    if (iVar7 != 0) {
      uVar11 = *(uint *)(param_2 + 0x58);
      goto LAB_14128cf6c;
    }
LAB_14128d5d1:
    bVar21 = true;
    lVar17 = 0;
    uVar8 = 0;
  }
  local_118[0] = '\0';
  local_f0[0] = 0;
  FUN_1456bb102(local_118,uVar8);
  if ((*(longlong **)(param_2 + 0x50) == (longlong *)0x0) ||
     (local_130 = **(longlong **)(param_2 + 0x50), local_130 == 0)) {
    local_130 = *(longlong *)(param_2 + 0x48);
  }
  FUN_1400021e4(&local_130,&local_e8);
  if ((uint)local_e0 == 0) {
    puVar19 = &DAT_149dfb77a;
  }
  else {
    puVar19 = (undefined2 *)CONCAT44(uStack_e4,local_e8);
  }
  if (bVar21) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1401cd362(lVar17);
  }
  FUN_1410a642a(&local_88,uVar8);
  ppppuVar12 = (undefined8 ****)local_88;
  if ((int)plStack_80 == 0) {
    ppppuVar12 = (undefined8 ****)&DAT_149dfb77a;
  }
  FUN_140002266(local_128,L"GbxProgression.%s.%s",ppppuVar12,puVar19);
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_e4,local_e8) != 0) {
    FUN_1400020a8();
  }
  iVar7 = (int)plVar15[2];
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  plVar14 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x34) < iVar7) {
    FUN_14053e466(plVar14);
    iVar7 = (int)plVar15[2];
  }
  if (iVar7 != 0) {
    plVar20 = (longlong *)plVar15[1];
    lVar17 = (longlong)iVar7 * 0x70;
    do {
      lVar10 = plVar20[1];
      if (lVar10 == 0) {
        uVar8 = FUN_14016979c();
        lVar10 = FUN_14477b664(uVar8);
        plVar20[1] = lVar10;
      }
      lVar9 = plVar20[2];
      if (lVar9 == 0) {
        if ((lVar10 != 0) && (*plVar20 != 0)) {
          plVar15 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar5 == '\0')) {
            plVar20[2] = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar9 = FUN_144aff482(uVar8,plVar20);
            plVar20[2] = lVar9;
            if (lVar9 != 0) goto LAB_14128d13e;
          }
        }
        local_88 = (undefined8 ****)0x0;
        plStack_80 = (longlong *)0x0;
LAB_14128d328:
        plVar15 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_80)(plStack_80);
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
LAB_14128d13e:
        FUN_1448729ea(plVar20 + 4,&local_88,local_118);
        if (local_68 == 3) {
          uVar22 = local_88._0_4_;
          bVar6 = 3;
        }
        else {
          FUN_1400b56fe(&local_e8,&local_88,3);
          uVar22 = 0;
          if (local_c8 != 0) {
            uVar22 = local_e8;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
          if (pcVar3 != (code *)0x0) {
            puVar13 = &local_e8;
            if (0x18 < (ushort)local_d0) {
              puVar13 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
            }
            (*pcVar3)(puVar13);
          }
          bVar6 = local_68;
          if (0x18 < (ushort)local_d0) {
            FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
            bVar6 = local_68;
          }
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &local_88;
          if (0x18 < local_70) {
            ppppuVar12 = (undefined8 ****)local_88;
          }
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88);
        }
        lVar10 = plVar20[3];
        local_e8 = CONCAT31(local_e8._1_3_,local_118[0]);
        if (local_118[0] == '\x01') {
          local_e8 = CONCAT31(local_e8._1_3_,2);
          if (local_110 == 0) {
            local_e0._0_4_ = 0;
            iVar7 = 0;
            uVar11 = (uint)local_e0;
          }
          else {
            uVar11 = *(uint *)(local_110 + 0xc);
            local_e0 = (ulonglong)uVar11;
            if ((int)uVar11 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            iVar7 = *(int *)(lVar18 + 0x10);
            if (*(int *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar21) {
                local_134 = iVar16;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
                iVar16 = local_134;
              }
              LOCK();
              iVar7 = *(int *)(lVar18 + 0x10);
              bVar21 = iVar7 == 0;
              if (bVar21) {
                *(int *)(lVar18 + 0x10) = iVar16;
                iVar7 = 0;
              }
              UNLOCK();
              uVar11 = (uint)local_e0;
              if (bVar21) {
                iVar7 = iVar16;
              }
            }
          }
          local_e0._0_4_ = uVar11;
          local_e0 = CONCAT44(iVar7,(uint)local_e0);
        }
        else if (local_118[0] == '\x02') {
          local_e0 = local_110;
        }
        else if (local_118[0] == '\x03') {
          local_d8 = local_108;
          local_e0 = local_110;
          if (local_108 == (longlong *)0x0) {
            local_d0 = local_100;
            local_c8 = local_f8;
          }
          else {
            LOCK();
            *(int *)((longlong)local_108 + 0xc) = *(int *)((longlong)local_108 + 0xc) + 1;
            UNLOCK();
            local_d0 = local_100;
            local_c8 = local_f8;
          }
        }
        local_c0[0] = 0;
        if (local_f0[0] != 0) {
          uVar8 = FUN_1448174c4(local_c0);
          FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)local_f0[0] * 0x10 + -0x10);
        }
        local_b8 = '\0';
        local_90[0] = 0;
        local_150 = 0;
        local_158 = uVar22;
        local_148 = &local_130;
        FUN_140c40077(&local_88,lVar9,&local_e8,
                      CONCAT71((int7)((ulonglong)plVar15 >> 8),(char)lVar10) & 0xffffffff);
        FUN_1448173f8(local_90);
        if (local_b8 != '\0') {
          if (local_b8 == '\x01') {
            local_b0 = 0;
          }
          else if ((local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_a8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_a8 + 0x10))();
            }
          }
          local_b8 = '\0';
        }
        FUN_1448173f8(local_c0);
        if (((char)local_e8 == '\x03') && (local_d8 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_d8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d8 + 0x10))();
          }
        }
        pppuVar4 = local_88;
        if ((undefined8 ****)local_88 == (undefined8 ****)0x0) goto LAB_14128d328;
        iVar7 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar7 + 1U) {
          FUN_140c41468(plVar14,iVar7);
        }
        lVar10 = *plVar14;
        plVar15 = (longlong *)((longlong)iVar7 * 0x10);
        *(undefined8 ****)(lVar10 + (longlong)plVar15) = pppuVar4;
        *(longlong **)(lVar10 + 8 + (longlong)plVar15) = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
          goto LAB_14128d328;
        }
      }
      plVar20 = plVar20 + 0xe;
      lVar17 = lVar17 + -0x70;
    } while (lVar17 != 0);
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1448173f8(local_f0);
  if ((local_118[0] == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_108 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
LAB_14128d378:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128d6fe FUN_14128d6fe body=422 status=ok
// SIG undefined FUN_14128d6fe(void)

void FUN_14128d6fe(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 14128d8a6 FUN_14128d8a6 body=495 status=ok
// SIG undefined FUN_14128d8a6(void)

void FUN_14128d8a6(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x90;
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
        *(int *)(lVar3 + 0x8c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar11) =
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



// FUNCTION 14128da96 FUN_14128da96 body=98 status=ok
// SIG undefined FUN_14128da96(void)

undefined8 FUN_14128da96(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,*param_2);
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



// FUNCTION 14128dafa FUN_14128dafa body=339 status=ok
// SIG undefined FUN_14128dafa(void)

undefined8 * FUN_14128dafa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6879e0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  memset(param_1 + 0x43,0,0xac);
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 1;
  return param_1;
}



// FUNCTION 14128dc4e FUN_14128dc4e body=797 status=ok
// SIG undefined FUN_14128dc4e(void)

undefined8 * FUN_14128dc4e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  undefined8 *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_229;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  longlong *local_208;
  undefined1 local_200 [424];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_140a504fe(local_200);
  local_258 = &local_229;
  FUN_140a536a8(local_228,"SOverlay",".\\Runtime/UMG/Private/Components/Overlay.cpp",0x49);
  FUN_140a4ff16(local_228,&local_210,local_200);
  plVar4 = local_208;
  if (local_208 == (longlong *)0x0) {
    local_248 = (undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar7 = *(longlong **)(param_1 + 0x188);
    if (plVar7 == (longlong *)0x0) goto LAB_14128dd10;
    *(undefined8 *)(param_1 + 0x188) = 0;
LAB_14128de8e:
    local_248 = (undefined8 *)(param_1 + 0x180);
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14128dd10;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar7;
  }
  else {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
    local_248 = (undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x180) = local_210;
    plVar7 = *(longlong **)(param_1 + 0x188);
    if (local_208 != plVar7) {
      *(longlong **)(param_1 + 0x188) = local_208;
      if (plVar7 == (longlong *)0x0) goto LAB_14128dd10;
      goto LAB_14128de8e;
    }
    LOCK();
    plVar7 = local_208 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_14128dd10;
    (**(code **)*local_208)(local_208);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14128dd10:
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_208 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_220 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  FUN_140a54e77(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(local_200);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar8);
      if (plVar4 != (longlong *)0x0) {
        lVar6 = FUN_14128df6c();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          plVar4[5] = param_1;
          local_240 = *(undefined8 *)(param_1 + 0x180);
          local_238 = *(longlong *)(param_1 + 0x188);
          if (local_238 != 0) {
            LOCK();
            *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar4 + 0x2b0))(plVar4,&local_240);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *local_248;
  plVar4 = *(longlong **)(param_1 + 0x188);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128df6c FUN_14128df6c body=228 status=ok
// SIG undefined FUN_14128df6c(void)

longlong FUN_14128df6c(void)

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
  if (DAT_14cab8090 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_1477431cb;
    local_40 = FUN_1433345e5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/UMG",L"OverlaySlot",&DAT_14cab8090,FUN_146355b58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8090;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128e052 FUN_14128e052 body=491 status=ok
// SIG undefined FUN_14128e052(void)

void FUN_14128e052(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_e9;
  code *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8 [3];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined8 *local_a8;
  int local_a0;
  uint local_98;
  undefined1 local_94;
  uint local_90;
  undefined1 local_8c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140763f46(*param_2,local_d8,0xffffffff);
  *(undefined8 *)(param_1 + 0x38) = local_d8[0];
  local_c0 = *(undefined4 *)(param_1 + 0x40);
  uStack_bc = *(undefined4 *)(param_1 + 0x44);
  uStack_b8 = *(undefined4 *)(param_1 + 0x48);
  uStack_b4 = *(undefined4 *)(param_1 + 0x4c);
  local_b0 = 1;
  if (local_a0 != 0) {
    if (local_a8 == (undefined8 *)0x0) goto LAB_14128e0b8;
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14128e0b8:
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98 = (uint)*(byte *)(param_1 + 0x50);
  local_94 = 1;
  local_90 = (uint)*(byte *)(param_1 + 0x51);
  local_8c = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_100 = DAT_14c98dec8;
    local_f8 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_e0 = &local_e9;
    local_e8 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_100);
  }
  FUN_140a4fd40(local_d8,&local_100);
  plVar3 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1407640b6(local_d8);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128e23e FUN_14128e23e body=52 status=ok
// SIG undefined FUN_14128e23e(void)

undefined8 FUN_14128e23e(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (longlong *)0x0) && (2 < param_2)) {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
      uVar2 = FUN_144a7cdf8(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14128e272 FUN_14128e272 body=1667 status=ok
// SIG undefined FUN_14128e272(void)

void FUN_14128e272(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [4];
  float local_1e4;
  double local_190;
  double local_188;
  double local_180;
  undefined4 local_144;
  undefined4 local_118;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((float)param_2 < 1e-06) goto LAB_14128e527;
  (**(code **)(*param_1 + 0xb80))();
  if (((char)param_1[0x1f0] == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
    if ((*(byte *)((longlong)param_1 + 0x5b5) & 0x10) != 0) {
      if (((((double)param_1[0x71] == 0.0) && (!NAN((double)param_1[0x71]))) &&
          ((double)param_1[0x72] == 0.0)) && (!NAN((double)param_1[0x72]))) {
        if (((double)param_1[0x73] == 0.0) && (!NAN((double)param_1[0x73]))) {
          param_1[0x27] = (longlong)DAT_14c8464f0;
          uVar10 = DAT_14c8464e8._4_4_;
          uVar9 = (undefined4)DAT_14c8464e8;
          uVar13 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)param_1 + 300) = uVar13;
          *(undefined4 *)(param_1 + 0x26) = uVar9;
          *(undefined4 *)((longlong)param_1 + 0x134) = uVar10;
        }
      }
    }
    lVar12 = (**(code **)(*param_1 + 0x4a0))(param_1);
    fVar14 = *(float *)(lVar12 + 0x3d0);
    uVar13 = (**(code **)(*param_1 + 0x718))(param_1);
    local_238 = (undefined1 *)CONCAT44(local_238._4_4_,uVar13);
    (**(code **)(*param_1 + 0x6f0))(param_1,param_2,fVar14 * 0.5,1);
  }
  (**(code **)(*param_1 + 0xb88))(param_1,param_2);
  *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
  lVar12 = param_1[0x22];
  dVar6 = *(double *)(lVar12 + 0x260);
  dVar18 = *(double *)(lVar12 + 0x268);
  dVar1 = *(double *)(lVar12 + 0x270);
  dVar16 = (double)(float)param_2;
  local_d8 = (double)param_1[0x27] * dVar16;
  local_e0 = (double)param_1[0x26] * dVar16;
  local_e8 = (double)param_1[0x25] * dVar16;
  memset(local_1e8,0,0x100);
  local_118 = 0xffffffff;
  local_144 = 0xffffffff;
  local_1e4 = 1.0;
  local_208 = *(double *)(lVar12 + 0x240);
  dStack_200 = *(double *)(lVar12 + 0x248);
  local_1f8 = *(double *)(lVar12 + 0x250);
  uStack_1f0 = *(undefined4 *)(lVar12 + 600);
  uStack_1ec = *(undefined4 *)(lVar12 + 0x25c);
  local_230 = 0;
  local_238 = local_1e8;
  FUN_1402eda10(param_1,&local_e8,&local_208,1);
  if (local_1e4 < 1.0) {
    dVar2 = (double)param_1[0x25];
    dVar19 = (double)param_1[0x26];
    dVar15 = (double)param_1[0x27];
    dVar17 = dVar15 * dVar15 + dVar2 * dVar2 + dVar19 * dVar19;
    if ((dVar17 != 1.0) || (NAN(dVar17))) {
      if (9.99999993922529e-09 <= dVar17) {
        dVar17 = 1.0 / SQRT(dVar17);
        dVar15 = dVar15 * dVar17;
        dVar19 = dVar19 * dVar17;
        dVar2 = dVar2 * dVar17;
      }
      else {
        dVar2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar19 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar15 = DAT_14c8464f0;
      }
    }
    fVar14 = (float)(dVar15 * (double)param_1[0x48] +
                    dVar2 * (double)param_1[0x46] + dVar19 * (double)param_1[0x47]);
    if ((-0.2 < fVar14) && (fVar14 < 0.5)) {
      if (ABS((-(double)param_1[0x46] * local_190 - (double)param_1[0x47] * local_188) -
              (double)param_1[0x48] * local_180) < 0.20000000298023224) {
        cVar11 = (**(code **)(*param_1 + 0x720))(param_1,local_1e8);
        if (cVar11 != '\0') {
          lVar12 = param_1[0x22];
          dVar17 = *(double *)(lVar12 + 0x260);
          dVar7 = *(double *)(lVar12 + 0x268);
          dVar8 = *(double *)(lVar12 + 0x270);
          dVar2 = (double)param_1[0x46];
          dVar19 = (double)param_1[0x47];
          dVar15 = (double)param_1[0x48];
          local_208 = (double)(1.0 - local_1e4);
          local_1f8 = local_d8 * local_208;
          dStack_200 = local_e0 * local_208;
          local_208 = local_208 * local_e8;
          local_218 = param_1[0x48];
          local_228 = (undefined4)param_1[0x46];
          uStack_224 = *(undefined4 *)((longlong)param_1 + 0x234);
          uStack_220 = (undefined4)param_1[0x47];
          uStack_21c = *(undefined4 *)((longlong)param_1 + 0x23c);
          local_238 = (undefined1 *)0x0;
          cVar11 = (**(code **)(*param_1 + 0x728))(param_1);
          if (cVar11 != '\0') {
            lVar12 = param_1[0x22];
            dVar3 = (double)param_1[0x46];
            dVar4 = (double)param_1[0x47];
            dVar5 = (double)param_1[0x48];
            dVar2 = (((-dVar3 * dVar6 - dVar18 * dVar4) - dVar1 * dVar5) -
                    ((-dVar2 * dVar17 - dVar7 * dVar19) - dVar8 * dVar15)) +
                    ((*(double *)(lVar12 + 0x260) * -dVar3 - *(double *)(lVar12 + 0x268) * dVar4) -
                    *(double *)(lVar12 + 0x270) * dVar5);
            dVar19 = dVar6 * dVar3 + dVar18 * dVar4 + dVar1 * dVar5;
            dVar1 = (dVar1 - dVar5 * dVar19) - dVar5 * dVar2;
            dVar18 = (dVar18 - dVar4 * dVar19) - dVar4 * dVar2;
            dVar6 = (dVar6 - dVar19 * dVar3) - dVar2 * dVar3;
            goto LAB_14128e4b2;
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x4c8))(param_1,local_1e8,param_2,&local_e8);
    local_230 = 1;
    local_238 = local_1e8;
    (**(code **)(*param_1 + 0x508))(param_1,&local_e8,1.0 - local_1e4);
  }
LAB_14128e4b2:
  if ((((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) && ((char)param_1[0x1f0] == '\0')) &&
     ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
    lVar12 = param_1[0x22];
    dVar19 = *(double *)(lVar12 + 0x268);
    dVar2 = *(double *)(lVar12 + 0x270);
    dVar16 = 1.0 / dVar16;
    param_1[0x25] = (longlong)(dVar16 * (*(double *)(lVar12 + 0x260) - dVar6));
    param_1[0x26] = (longlong)((dVar19 - dVar18) * dVar16);
    param_1[0x27] = (longlong)((dVar2 - dVar1) * dVar16);
  }
LAB_14128e527:
  if ((local_d0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128e928 FUN_14128e928 body=1074 status=ok
// SIG undefined FUN_14128e928(void)

void FUN_14128e928(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0.0 < (float)param_2) && ((char)param_1[0x1f0] != '\0')) {
    (**(code **)(*param_1 + 0xba0))(param_1,&local_98,param_1 + 0x1fe,param_1 + 0x25);
    param_1[0x27] = local_88;
    *(undefined4 *)(param_1 + 0x25) = local_98;
    *(undefined4 *)((longlong)param_1 + 300) = uStack_94;
    *(undefined4 *)(param_1 + 0x26) = uStack_90;
    *(undefined4 *)((longlong)param_1 + 0x134) = uStack_8c;
    cVar7 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    if (cVar7 != '\0') {
      dVar6 = (double)param_1[0xf1] * (double)param_1[0x48] +
              (double)param_1[0xef] * (double)param_1[0x46] +
              (double)param_1[0x47] * (double)param_1[0xf0];
      param_1[0x25] =
           (longlong)
           (((double)param_1[0xef] - dVar6 * (double)param_1[0x46]) + (double)param_1[0x25]);
      param_1[0x26] =
           (longlong)
           (((double)param_1[0xf0] - (double)param_1[0x47] * dVar6) + (double)param_1[0x26]);
      param_1[0x27] =
           (longlong)
           (((double)param_1[0xf1] - (double)param_1[0x48] * dVar6) + (double)param_1[0x27]);
    }
    goto LAB_14128eab7;
  }
  plVar1 = param_1 + 0x25;
  dVar6 = (double)param_1[0x25];
  dVar2 = (double)param_1[0x26];
  dVar3 = (double)param_1[0x27];
  if ((*(byte *)(param_1 + 0x1b6) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1b6) & 1) == 0) goto LAB_14128eab7;
LAB_14128ec0a:
    param_1[0x1b9] = param_1[0x27];
    *(int *)(param_1 + 0x1b7) = (int)*plVar1;
    *(undefined4 *)((longlong)param_1 + 0xdbc) = *(undefined4 *)((longlong)param_1 + 300);
    *(int *)(param_1 + 0x1b8) = (int)param_1[0x26];
    *(undefined4 *)((longlong)param_1 + 0xdc4) = *(undefined4 *)((longlong)param_1 + 0x134);
    local_a8 = param_1;
    local_a0 = plVar1;
    FUN_147aa0094(param_1 + 0x1b1,1,param_2,param_1[0x3e]);
    *(byte *)(param_1 + 0x1b6) = *(byte *)(param_1 + 0x1b6) | 8;
  }
  else {
    local_a8 = param_1;
    local_a0 = plVar1;
    FUN_147aa0094(param_1 + 0x1b1,0,param_2,param_1[0x3e]);
    cVar7 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    if (cVar7 != '\0') {
      if ((*(byte *)(param_1 + 0x1b6) & 4) == 0) {
        dVar9 = (double)param_1[0xef];
        dVar4 = (double)param_1[0xf0];
        dVar10 = (double)param_1[0xf1];
      }
      else {
        dVar9 = (double)param_1[0xf1] * (double)param_1[0x48] +
                (double)param_1[0xef] * (double)param_1[0x46] +
                (double)param_1[0x47] * (double)param_1[0xf0];
        dVar10 = (double)param_1[0xf1] - (double)param_1[0x48] * dVar9;
        dVar4 = (double)param_1[0xf0] - (double)param_1[0x47] * dVar9;
        dVar9 = (double)param_1[0xef] - dVar9 * (double)param_1[0x46];
      }
      param_1[0x25] = (longlong)(dVar9 + (double)param_1[0x25]);
      param_1[0x26] = (longlong)(dVar4 + (double)param_1[0x26]);
      param_1[0x27] = (longlong)(dVar10 + (double)param_1[0x27]);
    }
    if ((*(byte *)(param_1 + 0x1b6) & 1) != 0) goto LAB_14128ec0a;
  }
  dVar9 = (double)param_1[0x25];
  dVar4 = (double)param_1[0x26];
  dVar10 = (double)param_1[0x27];
  dVar5 = (-(double)param_1[0x46] * (dVar9 - dVar6) - (double)param_1[0x47] * (dVar4 - dVar2)) -
          (double)param_1[0x48] * (dVar10 - dVar3);
  if ((dVar5 != 0.0) || (NAN(dVar5))) {
    cVar7 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    if (cVar7 != '\0') {
      if ((*(byte *)((longlong)param_1 + 0xdb1) & 1) == 0) {
        fVar8 = (float)(**(code **)(*param_1 + 0x478))(param_1);
        fVar8 = -fVar8 * (float)param_2;
        if (fVar8 <= 1e-08) {
          fVar8 = 1e-08;
        }
        dVar5 = (double)fVar8;
      }
      else {
        dVar5 = 9.99999993922529e-09;
      }
      if (dVar5 < ((dVar9 - dVar6) * -(double)param_1[0x46] -
                  (dVar4 - dVar2) * (double)param_1[0x47]) -
                  (dVar10 - dVar3) * (double)param_1[0x48]) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_c8);
      }
    }
  }
LAB_14128eab7:
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128eda1 FUN_14128eda1 body=56 status=ok
// SIG undefined FUN_14128eda1(void)

void FUN_14128eda1(longlong param_1,int param_2)

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
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14128edda FUN_14128edda body=141 status=ok
// SIG undefined FUN_14128edda(void)

void FUN_14128edda(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014128ee25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14128ee68 FUN_14128ee68 body=88 status=ok
// SIG undefined FUN_14128ee68(void)

void FUN_14128ee68(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14128eec0 FUN_14128eec0 body=277 status=ok
// SIG undefined FUN_14128eec0(void)

undefined8 FUN_14128eec0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14128efcf;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14128efcf;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14128efcf:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14128ef7d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14128ef7d;
    }
  }
  uVar6 = 0;
LAB_14128ef7d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128efea FUN_14128efea body=341 status=ok
// SIG undefined FUN_14128efea(void)

void FUN_14128efea(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar4 = *param_1;
      do {
        lVar9 = (longlong)iVar8 * 0xd0;
        lVar2 = lVar4 + lVar9;
        if (*(longlong *)(lVar4 + lVar9) == param_2) {
          iVar7 = *(int *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0xcc) * 4);
          if (iVar7 == iVar8) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0xcc) * 4);
          }
          else {
            do {
              piVar6 = (int *)((longlong)iVar7 * 0xd0 + lVar4 + 200);
              iVar7 = *piVar6;
            } while (iVar7 != iVar8);
          }
          *piVar6 = *(int *)(lVar2 + 200);
          lVar9 = *param_1 + lVar9;
          if (*(longlong *)(lVar9 + 0xb0) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar9 + 0xa0) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar9 + 0x90) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar9 + 0x80) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar9 + 0x78) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(lVar9 + 0x78) + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          FUN_14117c4c2(lVar9 + 0x48);
          if (*(char *)(lVar9 + 0x41) == '\x01') {
            *(undefined1 *)(lVar9 + 0x41) = 0;
          }
          FUN_14128f140(param_1,iVar8);
          return;
        }
        iVar8 = *(int *)(lVar2 + 200);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 14128f140 FUN_14128f140 body=124 status=ok
// SIG undefined FUN_14128f140(void)

void FUN_14128f140(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xd0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0 + 4) = uVar5;
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



// FUNCTION 14128f1bc FUN_14128f1bc body=56 status=ok
// SIG undefined FUN_14128f1bc(void)

int FUN_14128f1bc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 100);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((((iVar2 + -1 == 0) && (*(int *)(param_1 + 0xc) == 0)) && (param_1 != (undefined8 *)0x0)) &&
     (*(int *)(param_1 + 0xb) == 0)) {
    (**(code **)*param_1)(param_1,1);
  }
  return iVar2 + -1;
}



// FUNCTION 14128f1f4 FUN_14128f1f4 body=187 status=ok
// SIG undefined FUN_14128f1f4(void)

void FUN_14128f1f4(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[2] = 0xffffffffffffffff;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  FUN_14128f2b0(param_1,&DAT_14c844840);
  return;
}



// FUNCTION 14128f2b0 FUN_14128f2b0 body=295 status=ok
// SIG undefined FUN_14128f2b0(void)

longlong * FUN_14128f2b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_140056680(param_1 + 2,&DAT_149dfb77a);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[6] = (longlong)DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = DAT_14c844848;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0x80;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14128f3d8 FUN_14128f3d8 body=137 status=ok
// SIG undefined FUN_14128f3d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14128f3d8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
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
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14128f462 FUN_14128f462 body=40 status=ok
// SIG undefined FUN_14128f462(void)

undefined8 FUN_14128f462(undefined8 param_1,int param_2)

{
  FUN_14128f48a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14128f48a FUN_14128f48a body=732 status=ok
// SIG undefined FUN_14128f48a(void)

void FUN_14128f48a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b6e68e0;
  param_1[0x72] = &PTR_FUN_14b6e6f50;
  param_1[0x73] = &PTR_FUN_14b6e6f70;
  param_1[0x74] = &PTR_FUN_14b6e6fa0;
  param_1[0x75] = &PTR_FUN_14b6e6fb0;
  param_1[0x76] = &PTR_FUN_14b6e7020;
  param_1[0x77] = &PTR_FUN_14b6e7050;
  param_1[0x78] = &PTR_FUN_14b6e7080;
  param_1[0x7f] = &PTR_FUN_14b6e7130;
  param_1[0x80] = &PTR_FUN_14b6e71a0;
  param_1[0x81] = &PTR_FUN_14b6e7210;
  param_1[0x82] = &PTR_FUN_14b6e7240;
  param_1[0x83] = &PTR_FUN_14b6e7280;
  param_1[0x84] = &PTR_FUN_14b6e7320;
  param_1[0x85] = &PTR_FUN_14b6e7340;
  param_1[0x89] = &PTR_FUN_14b6e7360;
  param_1[0x8a] = &PTR_FUN_14b6e7420;
  param_1[0x8b] = &PTR_FUN_14b6e74a0;
  param_1[0x8c] = &PTR_FUN_14b6e74f0;
  param_1[0x8d] = &PTR_FUN_14b6e7530;
  param_1[0x8e] = &PTR_FUN_14b6e7550;
  param_1[0x8f] = &PTR_FUN_14b6e7570;
  param_1[0x90] = &PTR_FUN_14b6e7590;
  param_1[0x91] = &PTR_FUN_14b6e75b0;
  param_1[0x92] = &PTR_FUN_14b6e75d0;
  param_1[0x93] = &PTR_FUN_14b6e75f0;
  param_1[0x94] = &PTR_FUN_14b6e7610;
  param_1[0x95] = &PTR_FUN_14b6e7630;
  param_1[0x96] = &PTR_FUN_14b6e7650;
  param_1[0x34b] = &PTR_FUN_14b6e7670;
  param_1[0x352] = &PTR_FUN_14b6e7680;
  param_1[0x353] = &PTR_FUN_14b6e76c0;
  param_1[0x354] = &PTR_FUN_14b6e7700;
  param_1[0x355] = &PTR_FUN_14b6e7750;
  param_1[0x356] = &PTR_FUN_14b6e7780;
  param_1[0x359] = &PTR_FUN_14b6e77c0;
  param_1[0x35a] = &PTR_FUN_14b6e77d0;
  param_1[0x35b] = &PTR_FUN_14b6e7800;
  param_1[0x35c] = &PTR_FUN_14b6e78a0;
  *(undefined4 *)(param_1 + 0x4d9) = 0;
  if (param_1[0x4d8] != 0) {
    FUN_1400020a8();
  }
  FUN_14104debc(param_1 + 0x4d0,0);
  if (param_1[0x4d4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x4cf];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x4cb) = 0;
  if (param_1[0x4ca] != 0) {
    FUN_1400020a8();
  }
  FUN_14104e390(param_1 + 0x4c2);
  if (param_1[0x4c0] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 14128f766 FUN_14128f766 body=55 status=ok
// SIG undefined FUN_14128f766(void)

void FUN_14128f766(longlong *param_1)

{
  FUN_14128f79e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14128f79e FUN_14128f79e body=123 status=ok
// SIG undefined FUN_14128f79e(void)

void FUN_14128f79e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 14128f819 FUN_14128f819 body=47 status=ok
// SIG undefined FUN_14128f819(void)

void FUN_14128f819(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14128f848 FUN_14128f848 body=96 status=ok
// SIG undefined FUN_14128f848(void)

void FUN_14128f848(undefined8 *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    FUN_148273ad2(param_1);
    *param_1 = 0;
    param_1[1] = 0xffffffff00000000;
    param_1[4] = 0;
    param_1[5] = 0x8000000000;
    param_1[6] = 0xffffffff;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14128f8a8 FUN_14128f8a8 body=296 status=ok
// SIG undefined FUN_14128f8a8(void)

undefined8 FUN_14128f8a8(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_14128f9c9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14128f9c9;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14128f9c9:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14128f975;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_14128f975;
    }
  }
  uVar6 = 0;
LAB_14128f975:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14128f9d2 FUN_14128f9d2 body=1846 status=ok
// SIG undefined FUN_14128f9d2(void)

void FUN_14128f9d2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  int local_74;
  longlong local_70;
  longlong local_68;
  PSRWLOCK local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(char *)(param_2 + 0x128) == '\x01') && (lVar10 = FUN_140a489cc(param_3), lVar10 != 0)) &&
     (iVar7 = FUN_140a4890a(param_2,lVar10), -1 < iVar7)) {
    local_70 = param_1 + 0x44;
    local_74 = iVar7;
    local_68 = param_1;
    FUN_1448d5e3c(&local_58);
    plVar3 = *(longlong **)(local_58 + 0x40);
    local_60 = (PSRWLOCK)(plVar3 + 5);
    AcquireSRWLockExclusive(local_60);
    plVar5 = local_50;
    *(int *)(plVar3 + 4) = (int)plVar3[4] + 1;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    lVar4 = *plVar3;
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 2;
    lVar13 = plVar3[1];
    if ((longlong)(int)lVar13 != 0) {
      lVar16 = 0;
      do {
        piVar2 = (int *)(lVar4 + 0xf0 + lVar16);
        *piVar2 = *piVar2 + 1;
        lVar11 = FUN_1410a623c();
        lVar14 = *(longlong *)(lVar11 + 0x28);
        if (lVar14 == 0) {
          uVar12 = FUN_145764ed6();
          lVar14 = FUN_14477b664(uVar12);
          *(longlong *)(lVar11 + 0x28) = lVar14;
        }
        lVar15 = *(longlong *)(lVar11 + 0x30);
        if (lVar15 == 0) {
          if (lVar14 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = 0;
            if (*(longlong *)(lVar11 + 0x20) != 0) {
              plVar3 = *(longlong **)(lVar14 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar3 + 0x108))(), cVar6 == '\0')) {
                lVar15 = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar15 = FUN_144aff482(uVar12,(longlong *)(lVar11 + 0x20));
              }
              *(longlong *)(lVar11 + 0x30) = lVar15;
            }
          }
        }
        if (lVar10 == lVar15) {
          if (*(int *)(lVar4 + lVar16) != DAT_14cb790d0) goto LAB_14128fbf1;
          iVar7 = *(int *)(lVar4 + 0x9c + lVar16);
          if (local_74 == *(int *)(lVar4 + 0x98 + lVar16)) {
            if (iVar7 == 0) {
              iVar7 = 1;
              goto LAB_14128fd4e;
            }
          }
          else {
            iVar7 = iVar7 + 1;
LAB_14128fd4e:
            *(int *)(lVar4 + 0x98 + lVar16) = local_74;
            *(int *)(lVar4 + 0x9c + lVar16) = iVar7;
          }
          lVar13 = FUN_1410a623c();
          lVar10 = *(longlong *)(lVar13 + 0x28);
          if (lVar10 == 0) {
            uVar12 = FUN_145764ed6();
            lVar10 = FUN_14477b664(uVar12);
            *(longlong *)(lVar13 + 0x28) = lVar10;
          }
          lVar14 = *(longlong *)(lVar13 + 0x30);
          if (lVar14 == 0) {
            iVar9 = 0;
            iVar7 = 0;
            if ((lVar10 != 0) && (iVar7 = iVar9, *(longlong *)(lVar13 + 0x20) != 0)) {
              plVar3 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
                *(undefined8 *)(lVar13 + 0x30) = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar14 = FUN_144aff482(uVar12,(longlong *)(lVar13 + 0x20));
                *(longlong *)(lVar13 + 0x30) = lVar14;
                if (lVar14 != 0) goto LAB_14128fdd8;
              }
            }
          }
          else {
LAB_14128fdd8:
            uVar8 = FUN_140fcdefe(param_2 + 0xf0,lVar14);
            iVar7 = 0;
            if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_2 + 0x120))) {
              iVar7 = *(int *)(*(longlong *)(param_2 + 0x118) + (ulonglong)uVar8 * 4);
            }
          }
          iVar9 = *(int *)(lVar4 + 0xa4 + lVar16);
          if (iVar7 == *(int *)(lVar4 + 0xa0 + lVar16)) {
            if (iVar9 != 0) break;
            iVar9 = 1;
          }
          else {
            iVar9 = iVar9 + 1;
          }
          *(int *)(lVar4 + 0xa0 + lVar16) = iVar7;
          *(int *)(lVar4 + 0xa4 + lVar16) = iVar9;
          break;
        }
        lVar11 = FUN_1410a623c();
        lVar14 = *(longlong *)(lVar11 + 0x40);
        if (lVar14 == 0) {
          uVar12 = FUN_145764ed6();
          lVar14 = FUN_14477b664(uVar12);
          *(longlong *)(lVar11 + 0x40) = lVar14;
        }
        lVar15 = *(longlong *)(lVar11 + 0x48);
        if (lVar15 == 0) {
          if (lVar14 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = 0;
            if (*(longlong *)(lVar11 + 0x38) != 0) {
              plVar3 = *(longlong **)(lVar14 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar3 + 0x108))(), cVar6 == '\0')) {
                lVar15 = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar15 = FUN_144aff482(uVar12,(longlong *)(lVar11 + 0x38));
              }
              *(longlong *)(lVar11 + 0x48) = lVar15;
            }
          }
        }
        if ((lVar10 == lVar15) && (*(int *)(lVar4 + lVar16) == DAT_14cb790f8)) {
          iVar7 = *(int *)(lVar4 + 0x9c + lVar16);
          if (local_74 == *(int *)(lVar4 + 0x98 + lVar16)) {
            if (iVar7 == 0) {
              iVar7 = 0;
              goto LAB_14128fc6f;
            }
          }
          else {
LAB_14128fc6f:
            *(int *)(lVar4 + 0x98 + lVar16) = local_74;
            *(int *)(lVar4 + 0x9c + lVar16) = iVar7 + 1;
          }
          lVar13 = FUN_1410a623c();
          lVar10 = *(longlong *)(lVar13 + 0x40);
          if (lVar10 == 0) {
            uVar12 = FUN_145764ed6();
            lVar10 = FUN_14477b664(uVar12);
            *(longlong *)(lVar13 + 0x40) = lVar10;
          }
          lVar14 = *(longlong *)(lVar13 + 0x48);
          if (lVar14 == 0) {
            iVar9 = 0;
            iVar7 = 0;
            if ((lVar10 != 0) && (iVar7 = iVar9, *(longlong *)(lVar13 + 0x38) != 0)) {
              plVar3 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
                *(undefined8 *)(lVar13 + 0x48) = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar14 = FUN_144aff482(uVar12,(longlong *)(lVar13 + 0x38));
                *(longlong *)(lVar13 + 0x48) = lVar14;
                if (lVar14 != 0) goto LAB_14128fcfe;
              }
            }
          }
          else {
LAB_14128fcfe:
            uVar8 = FUN_140fcdefe(param_2 + 0xf0,lVar14);
            iVar7 = 0;
            if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_2 + 0x120))) {
              iVar7 = *(int *)(*(longlong *)(param_2 + 0x118) + (ulonglong)uVar8 * 4);
            }
          }
          iVar9 = *(int *)(lVar4 + 0xa4 + lVar16);
          if (iVar7 == *(int *)(lVar4 + 0xa0 + lVar16)) {
            if (iVar9 == 0) {
              iVar9 = 1;
              goto LAB_14128fe3a;
            }
          }
          else {
            iVar9 = iVar9 + 1;
LAB_14128fe3a:
            *(int *)(lVar4 + 0xa0 + lVar16) = iVar7;
            *(int *)(lVar4 + 0xa4 + lVar16) = iVar9;
          }
          lVar10 = FUN_141356c7a(local_68 + 0x30);
          if (lVar10 != 0) {
            if (DAT_14cbae3d8 == 0) {
              local_58 = FUN_141030f22;
              local_80 = FUN_14081d0ea;
              local_88 = &LAB_1464f5fc4;
              local_90 = &local_58;
              local_98 = &LAB_148c3dd26;
              local_a0 = &LAB_1459673ba;
              local_a8 = L"Engine";
              local_b0 = 0;
              local_b8 = 0x10000004;
              local_c0 = 0x10;
              local_c8 = 0x1360;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            }
            if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
              if (DAT_14cb79128 == 0) {
                if (DAT_14cb758b8 == 0) {
                  DAT_14cb79128 = 0;
                }
                else {
                  DAT_14cb79128 = FUN_144837462(DAT_14cb758b8,&DAT_14cb790f8);
                  if (DAT_14cb79128 != 0) goto LAB_14128feaa;
                }
                cVar6 = '\0';
              }
              else {
LAB_14128feaa:
                lVar10 = FUN_1409e484c(lVar10,DAT_14cb79128);
                cVar6 = *(char *)(lVar10 + 0x50);
              }
              iVar7 = *(int *)(lVar4 + 0x94 + lVar16);
              if (*(char *)(lVar4 + 0x90 + lVar16) == cVar6) {
                if (iVar7 == 0) {
                  iVar7 = 1;
                  goto LAB_14128ff06;
                }
              }
              else {
                iVar7 = iVar7 + 1;
LAB_14128ff06:
                *(char *)(lVar4 + 0x90 + lVar16) = cVar6;
                *(int *)(lVar4 + 0x94 + lVar16) = iVar7;
              }
              FUN_1448d5e3c(&local_58,local_70);
              lVar10 = *(longlong *)(local_58 + 0x600);
              AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0xa0));
              *(int *)(lVar10 + 0x98) = *(int *)(lVar10 + 0x98) + 1;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_50 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
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
              if ((*(char *)(lVar4 + 0x90 + lVar16) == '\0') &&
                 (*(int *)(lVar4 + 0x98 + lVar16) < 1)) {
                iVar7 = FUN_1412fabe8(lVar10 + 0x68,&DAT_14cbd8eb8);
                if (iVar7 != -1) {
LAB_14128ffa2:
                  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
                }
              }
              else {
                local_58 = (code *)&DAT_14cbd8eb8;
                iVar7 = FUN_140c8411c(lVar10 + 0x68);
                if (0 < iVar7) goto LAB_14128ffa2;
              }
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0xa0));
            }
          }
          break;
        }
LAB_14128fbf1:
        lVar16 = lVar16 + 0xf8;
      } while ((longlong)(int)lVar13 * 0xf8 - lVar16 != 0);
    }
    ReleaseSRWLockExclusive(local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129010a FUN_14129010a body=77 status=ok
// SIG undefined FUN_14129010a(void)

void FUN_14129010a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (param_1[2] != 0) {
    (**(code **)*param_1)(param_1,param_2,1);
    if (*(char *)(param_1 + 4) == '\x01') {
      puVar1 = (undefined8 *)param_1[2];
      if (param_1[1] != 0) {
        *(undefined8 **)(param_1[1] + 8) = puVar1;
      }
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = param_1[1];
      }
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return;
}



// FUNCTION 141290158 FUN_141290158 body=589 status=ok
// SIG undefined FUN_141290158(void)

void FUN_141290158(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_728 [32];
  undefined4 local_708;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  undefined4 local_6ec;
  longlong *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  longlong *plStack_6d0;
  undefined4 local_6c8;
  undefined8 local_6c4;
  undefined8 uStack_6bc;
  undefined8 local_6b4;
  undefined1 local_6a8 [1656];
  ulonglong local_30;
  
  cVar3 = (char)param_3;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_728;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 8) + 8) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    param_3 = *(undefined8 *)(param_1 + 8);
    *puVar1 = param_3;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(longlong *)(param_1 + -0x50) != *(longlong *)(param_1 + -8) || cVar3 != '\0') ||
     ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x15c) & 2) != 0)) {
    FUN_1407779ba(local_6a8,param_2,param_3,0);
    FUN_14178fac5(*(undefined8 *)(param_1 + -8),L"MipGeneration",param_1 + 0x68);
    uVar4 = FUN_14473c272(local_6a8,param_1 + 0x68,0);
    FUN_1447ec05f(&local_6e8,*(undefined8 *)(param_1 + -0x50));
    uVar5 = FUN_14473c272(local_6a8,&local_6e8);
    if (local_6e8 != (longlong *)0x0) {
      (**(code **)(*local_6e8 + 0x38))();
    }
    if (cVar3 != '\0') {
      if (*(longlong **)(param_1 + -8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + -8) + 8))();
      }
      local_6c4 = 0x100000000;
      uStack_6bc = 0x100000000;
      local_6e8 = (longlong *)0x0;
      uStack_6e0 = 0;
      uStack_6dc = 0;
      uStack_6d8 = *(undefined4 *)(param_1 + 0x48);
      uStack_6d4 = *(undefined4 *)(param_1 + 0x4c);
      plStack_6d0 = *(longlong **)(param_1 + 0x50);
      local_6c8 = CONCAT31(local_6c8._1_3_,1);
      FUN_1401a4871(local_6a8,uVar4);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if ((*(byte *)(lVar2 + 0x15c) & 2) != 0) {
      local_6f8 = (*(char *)(lVar2 + 0x15d) == '\x02') + 1;
      if (*(char *)(lVar2 + 0x15d) == '\0') {
        local_6f8 = 0;
      }
      local_6f4 = (*(char *)(lVar2 + 0x15e) == '\x02') + 1;
      if (*(char *)(lVar2 + 0x15e) == '\0') {
        local_6f4 = 0;
      }
      local_6f0 = (*(char *)(lVar2 + 0x15f) == '\x02') + 1;
      if (*(char *)(lVar2 + 0x15f) == '\0') {
        local_6f0 = 0;
      }
      local_6ec = 1;
      uVar6 = (uint)*(byte *)(param_1 + -0x54);
      if (*(byte *)(param_1 + -0x54) == 5) {
        uVar6 = DAT_14c760db4;
      }
      local_708 = 0;
      FUN_1431f463a(local_6a8,uVar6,uVar4,&local_6f8);
    }
    uStack_6e0 = DAT_14c9a52a0;
    local_6e8 = DAT_14c9a5298;
    uStack_6dc = SUB84(DAT_14c9a5298,0);
    uStack_6d8 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_6d4 = DAT_14c9a52a0;
    plStack_6d0 = DAT_14c9a5298;
    local_6c8 = DAT_14c9a52a0;
    local_6c4 = 0;
    uStack_6bc = 1;
    local_6b4 = 0x100000000;
    FUN_1400e8d41(local_6a8,uVar4,uVar5);
    FUN_140779360(local_6a8);
    FUN_140778010(local_6a8);
  }
  if ((local_30 ^ (ulonglong)auStack_728) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412903a6 FUN_1412903a6 body=309 status=ok
// SIG undefined FUN_1412903a6(void)

void FUN_1412903a6(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 8) + 8) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_3 != '\0') {
    local_70 = *(undefined8 *)(param_1 + -0x50);
    local_80 = 0xffffffffffffffff;
    local_78 = 0xffffffff;
    local_68 = 1;
    local_64 = 0x100000000000;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
    FUN_145d87ef6(param_2,*(undefined8 *)(param_1 + -0x50),0,0);
    local_70 = *(undefined8 *)(param_1 + -0x50);
    local_80 = 0xffffffffffffffff;
    local_78 = 0xffffffff;
    local_68 = 1;
    local_64 = 0x7000001000;
    local_5c = 0;
    local_50 = 0;
    local_88 = 1;
    local_90 = &local_80;
    FUN_144760590(param_2,&local_90,0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412904dc FUN_1412904dc body=430 status=ok
// SIG undefined FUN_1412904dc(void)

undefined8
FUN_1412904dc(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             int param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined1 uVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(*param_2 + 0x38))();
  if ((param_5 == 2) && (cVar3 == '\n')) {
LAB_141290656:
    uVar7 = 1;
    if (param_4 == (undefined1 *)0x0) goto LAB_14129054b;
    uVar9 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_144a7d136();
    lVar16 = plVar6[0x22];
    if (lVar16 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar16 = plVar6[0x22];
    }
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar4 != 0) {
      uVar11 = 0;
      do {
        if ((longlong)*(int *)(lVar16 + 0x50) != 0) {
          puVar14 = *(undefined8 **)(lVar16 + 0x48);
          puVar15 = puVar14 + (longlong)*(int *)(lVar16 + 0x50) * 2;
          do {
            uVar7 = (**(code **)(*param_2 + 0x10))(param_2,uVar11);
            FUN_1400b22c2(&local_58,uVar7);
            puVar10 = &DAT_149dfb77a;
            puVar8 = local_58;
            if (local_50 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            if (*(int *)(puVar14 + 1) != 0) {
              puVar10 = (undefined2 *)*puVar14;
            }
            lVar12 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar10 + lVar12);
              uVar5 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar8 + lVar12);
              uVar13 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1412905e6;
                }
                iVar4 = uVar5 - uVar13;
                goto LAB_141290616;
              }
              if (uVar1 == 0) break;
LAB_1412905e6:
              lVar12 = lVar12 + 2;
            }
            iVar4 = 0;
LAB_141290616:
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (iVar4 == 0 && param_5 == 2) goto LAB_141290656;
            puVar14 = puVar14 + 2;
          } while (puVar14 != puVar15);
        }
        uVar11 = uVar11 + 1;
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
      } while (uVar11 < uVar5);
    }
    uVar9 = 1;
    uVar7 = 0;
    if (param_4 == (undefined1 *)0x0) goto LAB_14129054b;
  }
  *param_4 = uVar9;
LAB_14129054b:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14129068c FUN_14129068c body=98 status=ok
// SIG undefined FUN_14129068c(void)

void FUN_14129068c(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140941f82();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1410d48d6(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412906f0 FUN_1412906f0 body=517 status=ok
// SIG undefined FUN_1412906f0(void)

void FUN_1412906f0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
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
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar5 = (longlong)iVar7;
      FUN_140c5493f(*(undefined8 *)(lVar11 + 0x10 + lVar5 * 0x28),
                    *(undefined4 *)(lVar11 + 0x18 + lVar5 * 0x28));
      if (*(longlong *)(lVar11 + 0x10 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar7 <= iVar13) break;
        lVar5 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar5 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar3 - lVar11 == lVar5) goto LAB_141290822;
        }
        iVar13 = iVar13 + (int)lVar5 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_141290822:
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
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar6 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412908f8 FUN_1412908f8 body=228 status=ok
// SIG undefined FUN_1412908f8(void)

longlong FUN_1412908f8(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6a480 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148761611;
    local_40 = &LAB_145c5b674;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickupSpawnManager",&DAT_14cb6a480,&DAT_148761610);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a480;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412909de FUN_1412909de body=994 status=ok
// SIG undefined FUN_1412909de(void)

void FUN_1412909de(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_328 [40];
  undefined8 local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  longlong *local_2d8 [2];
  longlong local_2c8 [4];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1c8 [2];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118 [12];
  char local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (*param_2 != 0) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar5) == 0) goto LAB_141290d59;
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar5);
    }
    local_248 = 0;
    local_240 = 0x8000000000;
    uStack_238 = 0xffffffff;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0xf;
    local_1e8 = 1;
    local_1e4 = 0;
    uStack_1dc = 0;
    local_1c8[0] = 0;
    local_1c8[1] = 0;
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0x3ff00000;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_188 = 0;
    uStack_184 = 0x3ff00000;
    uStack_180 = 0;
    uStack_17c = 0x3ff00000;
    local_178 = 0x3ff0000000000000;
    uStack_170 = 0;
    local_160 = (undefined4)DAT_14c8464e0;
    uStack_15c = DAT_14c8464e0._4_4_;
    uStack_158 = (undefined4)DAT_14c8464e8;
    uStack_154 = DAT_14c8464e8._4_4_;
    local_150 = DAT_14c8464f0;
    local_148 = (undefined4)DAT_14c8464e0;
    uStack_144 = DAT_14c8464e0._4_4_;
    uStack_140 = (undefined4)DAT_14c8464e8;
    uStack_13c = DAT_14c8464e8._4_4_;
    local_138 = DAT_14c8464f0;
    local_b8 = '\0';
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_58 = 2;
    local_50 = 0;
    FUN_1407b25f0(&local_2a8);
    puVar1 = local_1c8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar1 = *param_3;
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 1;
    }
    puVar1 = param_6;
    puVar4 = &local_168;
    for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    if (&local_168 != param_6) {
      if (*(char *)(param_6 + 0x16) == '\x01') {
        puVar1 = param_6 + 10;
        puVar4 = local_118;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar4 = puVar4 + 1;
        }
        local_b8 = '\x01';
      }
      else if (local_b8 == '\x01') {
        local_b8 = '\0';
      }
    }
    local_a8 = param_6[0x18];
    uStack_a0 = param_6[0x19];
    local_98 = param_6[0x1a];
    FUN_144a787a6(&uStack_90,param_6 + 0x1b);
    FUN_14485c47a(&local_78,param_4);
    FUN_14485c47a(&uStack_70,param_5);
    local_2e8 = *param_7;
    local_2d8[0] = (longlong *)0x0;
    if (local_2e8 != 0) {
      plVar3 = param_7 + 4;
      if ((longlong *)param_7[2] != (longlong *)0x0) {
        plVar3 = (longlong *)param_7[2];
      }
      (**(code **)*plVar3)(plVar3,local_2d8);
    }
    local_2f8 = (undefined8 *)0x0;
    local_2f0 = 0;
    FUN_1446efa72(&local_2f8,0,6,0x10);
    puVar1 = local_2f8;
    local_2f0 = 6;
    *local_2f8 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_2f8[2] = lVar2;
    *local_2f8 = &PTR_FUN_14b412950;
    local_2f8[3] = 0;
    FUN_14485c47a(local_2f8 + 3,param_1);
    puVar1[4] = local_2e8;
    puVar1[6] = 0;
    if (local_2e8 != 0) {
      plVar3 = local_2d8[0];
      if (local_2d8[0] == (longlong *)0x0) {
        plVar3 = local_2c8;
      }
      (**(code **)*plVar3)(plVar3,puVar1 + 6);
    }
    FUN_14490d954(&local_68,&local_300,&local_2f8);
    FUN_1449db362(&local_2f8);
    local_50 = local_300;
    if (local_2e8 != 0) {
      plVar3 = local_2d8[0];
      if (local_2d8[0] == (longlong *)0x0) {
        plVar3 = local_2c8;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0x270,0x10);
    *puVar1 = 0;
    FUN_141290dc2(puVar1 + 2,&local_2a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x40);
      *(undefined8 **)(param_1 + 0x40) = puVar1;
      *puVar4 = puVar1;
    }
    FUN_14129df96(&local_2a8);
  }
LAB_141290d59:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141290dc2 FUN_141290dc2 body=314 status=ok
// SIG undefined FUN_141290dc2(void)

longlong FUN_141290dc2(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_1406fd608();
  puVar8 = (undefined8 *)(param_2 + 0xe0);
  puVar9 = (undefined8 *)(param_1 + 0xe0);
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined8 *)(param_2 + 0x140);
  puVar9 = (undefined8 *)(param_1 + 0x140);
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  cVar1 = *(char *)(param_2 + 0x1f0);
  *(char *)(param_1 + 0x1f0) = cVar1;
  if (cVar1 == '\x01') {
    puVar8 = (undefined8 *)(param_2 + 400);
    puVar9 = (undefined8 *)(param_1 + 400);
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  uVar3 = *(undefined4 *)(param_2 + 0x20c);
  uVar4 = *(undefined4 *)(param_2 + 0x210);
  uVar5 = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = uVar3;
  *(undefined4 *)(param_1 + 0x210) = uVar4;
  *(undefined4 *)(param_1 + 0x214) = uVar5;
  *(undefined8 *)(param_1 + 0x218) = 0;
  iVar2 = *(int *)(param_2 + 0x220);
  _Src = *(void **)(param_2 + 0x218);
  *(int *)(param_1 + 0x220) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x218),iVar2,0);
    memcpy(*(void **)(param_1 + 0x218),_Src,(longlong)iVar2 * 2);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = uVar6;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 2;
  if (param_2 != param_1) {
    FUN_141290efc(param_1 + 0x240,param_2 + 0x240);
  }
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  return param_1;
}



// FUNCTION 141290efc FUN_141290efc body=385 status=ok
// SIG undefined FUN_141290efc(void)

/* WARNING: Removing unreachable block (ram,0x00014129106d) */

void FUN_141290efc(longlong *param_1,longlong *param_2)

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



// FUNCTION 14129107e FUN_14129107e body=21 status=ok
// SIG undefined FUN_14129107e(void)

undefined8 FUN_14129107e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 141291094 FUN_141291094 body=808 status=ok
// SIG undefined FUN_141291094(void)

void FUN_141291094(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [96];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_140082318();
  }
  if (*DAT_14cb0a538 != 0) {
    FUN_14371d42e(param_1);
  }
  local_58 = 0;
  local_50 = 0xc00000000;
  iVar5 = *(int *)(param_1 + 0x400);
  if (0 < iVar5) {
    lVar10 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + lVar10 * 8);
      if ((plVar2 != (longlong *)0x0) &&
         ((*plVar2 == 0 || ((*(uint *)(*plVar2 + 8) >> 0x1e & 1) != 0)))) {
        FUN_140097686(plVar2,local_b8);
        lVar6 = *(longlong *)(param_1 + 0x3f8);
        lVar3 = *(longlong *)(lVar6 + lVar10 * 8);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0xb0) = 0;
          if (*(longlong *)(lVar3 + 0xa8) != 0) {
            FUN_1400020a8();
          }
          FUN_140096ee6(lVar3 + 0x68);
          if (*(longlong *)(lVar3 + 0x58) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar3 + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140096f1e(lVar3 + 0x10);
          FUN_1400020a8(lVar3);
          lVar6 = *(longlong *)(param_1 + 0x3f8);
        }
        *(undefined8 *)(lVar6 + lVar10 * 8) = 0;
        iVar5 = *(int *)(param_1 + 0x400);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x308);
  if (0 < iVar5) {
    puVar1 = (undefined8 *)(param_1 + 0x2c0);
    uVar8 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x300);
      uVar4 = *(ulonglong *)(lVar10 + (longlong)(int)uVar8 * 8);
      if ((((uVar4 == 0) || ((*(byte *)(uVar4 + 0x9c) & 1) == 0)) ||
          ((*(uint *)(uVar4 + 8) >> 0x1e & 1) != 0)) || ((*(uint *)(uVar4 + 8) & 0x18000) != 0)) {
        iVar9 = ~uVar8 + iVar5;
        if (iVar9 != 0) {
          if (0 < iVar9) {
            iVar9 = 1;
          }
          memmove((void *)(lVar10 + (longlong)(int)uVar8 * 8),
                  (void *)(lVar10 + (longlong)(iVar5 - iVar9) * 8),(longlong)iVar9 << 3);
          iVar5 = *(int *)(param_1 + 0x308);
        }
        *(int *)(param_1 + 0x308) = iVar5 + -1;
        FUN_1402d50dc((longlong *)(param_1 + 0x300));
        *(byte *)(uVar4 + 0x2d2) = *(byte *)(uVar4 + 0x2d2) & 0x7f;
        lVar10 = *(longlong *)(param_1 + 0x2c0);
        if (*(int *)(lVar10 + 400) != *(int *)(lVar10 + 0x1bc)) {
          uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          lVar6 = lVar10 + 0x1c0;
          if (*(longlong *)(lVar10 + 0x1c8) != 0) {
            lVar6 = *(longlong *)(lVar10 + 0x1c8);
          }
          iVar5 = *(int *)(lVar6 + (ulonglong)
                                   (*(int *)(lVar10 + 0x1d0) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
          if (iVar5 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)(lVar10 + 0x188) + (longlong)iVar5 * 0x18) == uVar4) {
                if (DAT_14c761bb0 == 0) {
                  FUN_14034205c(puVar1);
                  FUN_1449e7158(*puVar1,uVar4,local_b8);
                }
                else {
                  FUN_147d5ef88(param_1 + 0x2c8);
                  FUN_144942318(*puVar1,uVar4);
                }
                break;
              }
              iVar5 = *(int *)(*(longlong *)(lVar10 + 0x188) + (longlong)iVar5 * 0x18 + 0x10);
            } while (iVar5 != -1);
          }
        }
        uVar8 = uVar8 - 1;
        *(byte *)(uVar4 + 0x2d2) = *(byte *)(uVar4 + 0x2d2) & 0xdf;
        iVar5 = *(int *)(param_1 + 0x308);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar5);
  }
  FUN_144942036(param_1,local_b8);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412913be FUN_1412913be body=107 status=ok
// SIG undefined FUN_1412913be(void)

undefined8 * FUN_1412913be(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[4] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[10] = &DAT_100000001;
  param_1[0xd] = &DAT_100000001;
  param_1[0xe] = 0;
  FUN_14471858a(param_1 + 0xb,1);
  return param_1;
}



// FUNCTION 14129142a FUN_14129142a body=118 status=ok
// SIG undefined FUN_14129142a(void)

undefined8 FUN_14129142a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 extraout_RAX;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    memset(param_1 + 7,0,0x154);
    FUN_147cbd916(param_1 + 0x32);
                    /* WARNING: Could not recover jumptable at 0x000141291499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    return extraout_RAX;
  }
  return uVar1;
}



// FUNCTION 1412914a0 FUN_1412914a0 body=169 status=ok
// SIG undefined FUN_1412914a0(void)

void FUN_1412914a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99f230;
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14129151e;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14129151e:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141291536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14129154a FUN_14129154a body=228 status=ok
// SIG undefined FUN_14129154a(void)

longlong FUN_14129154a(void)

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
  if (DAT_14cad59f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b31ae;
    local_38 = &LAB_147a55537;
    local_40 = &LAB_14606ad97;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb10;
    FUN_14081cfa3(L"/Script/Engine",L"DebugCameraController",&DAT_14cad59f0,FUN_1463c2cf2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad59f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141291630 FUN_141291630 body=67 status=ok
// SIG undefined FUN_141291630(void)

void FUN_141291630(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141291674(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1403d5084(param_1);
    return;
  }
  FUN_144a7d214(param_1);
  FUN_141291674(param_1,0);
  return;
}



// FUNCTION 141291674 FUN_141291674 body=547 status=ok
// SIG undefined FUN_141291674(void)

void FUN_141291674(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar7 = 0;
    iVar13 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_1412917c4;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_1412917c4;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1412917c4:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar8 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar8 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 141291898 FUN_141291898 body=314 status=ok
// SIG undefined FUN_141291898(void)

undefined8 FUN_141291898(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    if (iVar1 == 2) goto LAB_1412919cb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412919cb;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1412919cb:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141291970;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_141291970;
    }
  }
  uVar6 = 0;
LAB_141291970:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412919d4 FUN_1412919d4 body=80 status=ok
// SIG undefined FUN_1412919d4(void)

void FUN_1412919d4(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140281b1c(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 141291a24 FUN_141291a24 body=345 status=ok
// SIG undefined FUN_141291a24(void)

void FUN_141291a24(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [52];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x348))(param_1,*(undefined1 *)((longlong)param_1 + 0xcc),0);
  FUN_140a6f97c(param_1,param_1 + 0x5d,param_2,param_1 + 0x1b);
  uVar2 = FUN_144741050(param_1 + 0x27);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x13c);
  FUN_144830b78(local_24,uVar2);
  if ((param_2 == 0) || ((*(byte *)((longlong)param_1 + 0x145) & 2) == 0)) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2f4) = 0xffffffff;
  }
  else {
    FUN_141291c16(param_1 + 0x5e,param_2,uVar1);
  }
  FUN_141291b7e(param_1,param_1 + 0x5f,param_2,param_1 + 0x29);
  FUN_140a6f6fe(param_1,param_1 + 0x60,param_2,param_1 + 0x30);
  FUN_140a6f796(param_1,param_1 + 0x61,param_2,param_1 + 0x37);
  FUN_140a6fa14(param_1,(longlong)param_1 + 0x30c,param_2,param_1 + 0x3e);
  FUN_140a6f8e8(param_1,(longlong)param_1 + 0x314,param_2,param_1 + 0x45);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_140a6f796(param_1,param_1 + 99,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58,param_1 + 99);
}



// FUNCTION 141291b7e FUN_141291b7e body=127 status=ok
// SIG undefined FUN_141291b7e(void)

void FUN_141291b7e(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144741050(param_4 + 0x28);
  FUN_144830b78(local_2c,uVar1);
  if ((param_3 != 0) && ((*(byte *)(param_4 + 0x35) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141291c16 FUN_141291c16 body=192 status=ok
// SIG undefined FUN_141291c16(void)

void FUN_141291c16(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  local_30 = param_3;
  local_28[0] = FUN_144830b78(local_28,&DAT_14cb42190);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) == local_30) && (*(int *)(lVar2 + 8 + lVar4) == local_28[0])
         ) {
        iVar3 = (int)(lVar4 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 1;
          *(uint *)(param_1 + 4) = (uint)*(ushort *)(param_2[2] + (longlong)iVar3 * 0x20);
        }
        break;
      }
      lVar1 = lVar2 + lVar4;
      lVar4 = lVar4 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141291cd8 FUN_141291cd8 body=507 status=ok
// SIG undefined FUN_141291cd8(void)

void FUN_141291cd8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  FUN_140349a5c();
  if (DAT_14cb3e268 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1481bbd47;
    local_50 = FUN_143a7bac5;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x70;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEmitter",&DAT_14cb3e268,&DAT_1481bbd46);
  }
  lVar3 = DAT_14cb3e268;
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar3 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar2,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar3 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0));
    if ((lVar4 != 0) && ((longlong)*(int *)(param_1 + 0x2a0) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x298);
      lVar2 = (longlong)*(int *)(param_1 + 0x2a0) * 0x2c;
      do {
        FUN_140349dfc(lVar3,lVar4);
        lVar3 = lVar3 + 0x2c;
        lVar2 = lVar2 + -0x2c;
      } while (lVar2 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141291ed4 FUN_141291ed4 body=296 status=ok
// SIG undefined FUN_141291ed4(void)

int FUN_141291ed4(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar4 = FUN_141291ffc(lVar1,*param_2);
    iVar10 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar2 = iVar11 + 1;
      if (iVar11 + 1 < iVar7) {
        iVar2 = iVar7;
      }
      lVar13 = lVar1 + 8 + lVar9 * 8;
      lVar6 = lVar9;
      iVar12 = iVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar3 = iVar2;
        if (lVar8 <= lVar6) break;
        bVar5 = FUN_141291ffc(lVar13,*param_2);
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 8;
        iVar3 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar11) {
          memmove((void *)(lVar1 + (longlong)iVar10 * 8),(void *)(lVar1 + lVar9 * 8),
                  (longlong)(iVar3 - iVar11) << 3);
        }
        iVar10 = iVar10 + (iVar3 - iVar11);
      }
      iVar11 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar8);
    *(int *)(param_1 + 1) = iVar10;
    iVar7 = iVar7 - iVar10;
  }
  return iVar7;
}



// FUNCTION 141291ffc FUN_141291ffc body=55 status=ok
// SIG undefined FUN_141291ffc(void)

ulonglong FUN_141291ffc(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 141292034 FUN_141292034 body=326 status=ok
// SIG undefined FUN_141292034(void)

void FUN_141292034(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_14129217a(param_2,1);
  *param_1 = uVar2;
  param_2 = param_2 + 1;
  iVar1 = (**(code **)(*DAT_14cb02878 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[1] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb02890 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[2] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb028a8 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[3] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb028c0 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[4] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb028d8 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[5] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb028f0 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[6] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb02908 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[7] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb02920 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[8] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb02938 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[9] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb02950 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[10] = iVar1;
  iVar1 = (**(code **)(*DAT_14cb02968 + 0xb0))();
  iVar1 = iVar1 - param_2;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  param_1[0xb] = iVar1;
  return;
}



// FUNCTION 14129217a FUN_14129217a body=245 status=ok
// SIG undefined FUN_14129217a(void)

float FUN_14129217a(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  wchar_t *_Str;
  double dVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = &DAT_14c872ac8;
  FUN_140ffc60a(DAT_14c872ce0,L"ScalabilitySettings",L"PerfIndexValues_ResolutionQuality",&local_48)
  ;
  if ((int)uStack_40 == 0) {
    fVar5 = 100.0;
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    if (0 < (int)param_1) {
      uVar2 = param_1;
    }
    if (param_2 == 1) {
      uVar1 = (int)uStack_40 + ~uVar2;
    }
    else {
      uVar1 = (int)uStack_40 - 1U;
      if ((int)uVar2 < (int)((int)uStack_40 - 1U)) {
        uVar1 = uVar2;
      }
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      uVar3 = (ulonglong)uVar1;
    }
    if (*(int *)(local_48 + 8 + uVar3 * 0x10) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(local_48 + uVar3 * 0x10);
    }
    dVar4 = _wtof(_Str);
    fVar5 = (float)dVar4;
    uVar3 = uStack_40 & 0xffffffff;
  }
  FUN_1447a1747(local_48,uVar3);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141292270 FUN_141292270 body=367 status=ok
// SIG undefined FUN_141292270(void)

undefined8 * FUN_141292270(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (DAT_14c98e618 != (longlong *)0x0) {
    (**(code **)(*DAT_14c98e618 + 0x1c8))(DAT_14c98e618,&local_98);
    goto LAB_1412922d3;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 == '\x01') {
      bVar1 = DAT_14c8442b8 & 1;
      goto joined_r0x000141292370;
    }
  }
  else {
joined_r0x000141292370:
    if (bVar1 == 0) {
      FUN_140c2d49a(&local_98);
      goto LAB_1412922d3;
    }
  }
  local_98 = 0;
LAB_1412922d3:
  *param_2 = local_98;
  FUN_140ecb711(local_90,uStack_88 & 0xffffffff);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412923e0 FUN_1412923e0 body=671 status=ok
// SIG undefined FUN_1412923e0(void)

void FUN_1412923e0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_145880a68();
  uVar1 = FUN_141292688();
  plVar2 = (longlong *)FUN_141292680(uVar1);
  if (DAT_14cb9acd0 != 0) {
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*plVar2 + lVar3) == DAT_14cb9acd0) goto LAB_14129244d;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[1] * 8 != lVar3);
    }
    if ((longlong)(int)plVar2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(plVar2[2] + lVar3) == DAT_14cb9acd0) goto LAB_14129244d;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[3] * 8 != lVar3);
    }
  }
LAB_141292475:
  *(int *)(param_1 + 0x4d) = (int)param_1[0x50];
  uVar1 = FUN_141292688();
  plVar2 = (longlong *)FUN_141292680(uVar1);
  if (DAT_14cb9ad00 != 0) {
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*plVar2 + lVar3) == DAT_14cb9ad00) goto LAB_1412925ff;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[1] * 8 != lVar3);
    }
    if ((longlong)(int)plVar2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(plVar2[2] + lVar3) == DAT_14cb9ad00) goto LAB_1412925ff;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[3] * 8 != lVar3);
    }
  }
LAB_1412924eb:
  uVar1 = FUN_141292688();
  plVar2 = (longlong *)FUN_141292680(uVar1);
  if (DAT_14cb9acf8 != 0) {
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*plVar2 + lVar3) == DAT_14cb9acf8) goto LAB_141292525;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[1] * 8 != lVar3);
    }
    if ((longlong)(int)plVar2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(plVar2[2] + lVar3) == DAT_14cb9acf8) goto LAB_141292525;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[3] * 8 != lVar3);
    }
  }
LAB_14129252d:
  uVar1 = FUN_141292688();
  plVar2 = (longlong *)FUN_141292680(uVar1);
  if (DAT_14cb9acc8 != 0) {
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = (longlong)(int)plVar2[1] * 8;
      lVar4 = 0;
      do {
        if (*(longlong *)(*plVar2 + lVar4) == DAT_14cb9acc8) goto LAB_14129258d;
        lVar4 = lVar4 + 8;
      } while (lVar3 != lVar4);
    }
    if ((longlong)(int)plVar2[3] != 0) {
      lVar3 = (longlong)(int)plVar2[3] * 8;
      lVar4 = 0;
      do {
        if (*(longlong *)(plVar2[2] + lVar4) == DAT_14cb9acc8) goto LAB_14129258d;
        lVar4 = lVar4 + 8;
      } while (lVar3 != lVar4);
    }
  }
LAB_14129259b:
  uVar1 = FUN_141292688();
  plVar2 = (longlong *)FUN_141292680(uVar1);
  if (DAT_14cb9ad18 != 0) {
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*plVar2 + lVar3) == DAT_14cb9ad18) goto LAB_141292620;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[1] * 8 != lVar3);
    }
    if ((longlong)(int)plVar2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(plVar2[2] + lVar3) == DAT_14cb9ad18) {
LAB_141292620:
          *(undefined1 *)(param_1 + 0x4f) = 1;
          return;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar2[3] * 8 != lVar3);
    }
  }
  return;
LAB_14129244d:
  lVar3 = 0x27c;
  if ((0.0 < *(float *)(param_1 + 0x1c)) && (0.0 < *(float *)((longlong)param_1 + 0xe4))) {
    lVar3 = 0x260;
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,*(undefined4 *)((longlong)param_1 + lVar3));
  goto LAB_141292475;
LAB_1412925ff:
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)((longlong)param_1 + 0x294);
  FUN_145bcdd78(L"r.screenpercentage");
  goto LAB_1412924eb;
LAB_141292525:
  FUN_1458809fc(param_1);
  goto LAB_14129252d;
LAB_14129258d:
  FUN_1458809f8(param_1,CONCAT71((int7)((ulonglong)lVar3 >> 8),
                                 *(undefined1 *)((longlong)param_1 + 0x28c)));
  goto LAB_14129259b;
}



// FUNCTION 141292680 FUN_141292680 body=8 status=ok
// SIG undefined FUN_141292680(void)

longlong FUN_141292680(longlong param_1)

{
  return param_1 + 0xc0;
}



// FUNCTION 141292688 FUN_141292688 body=335 status=ok
// SIG undefined FUN_141292688(void)

void FUN_141292688(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 == DVar3) goto LAB_141292730;
      }
      FUN_1446ddc76(&local_28,"CommonUI",1);
      uVar5 = FUN_144a52528();
      plVar6 = (longlong *)FUN_1401e3324(uVar5,local_28);
      goto LAB_1412926f9;
    }
  }
LAB_141292730:
  local_20 = "CommonUI";
  local_18 = 8;
  local_14 = 0;
  uVar4 = FUN_14001a6c0(&local_20,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar6 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_20,1);
LAB_1412926f9:
  (**(code **)(*plVar6 + 0x50))(plVar6);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412927d8 FUN_1412927d8 body=3057 status=ok
// SIG undefined FUN_1412927d8(void)

longlong *
FUN_1412927d8(longlong param_1,undefined4 *param_2,longlong param_3,longlong *param_4,char param_5)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined4 *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_5c [4];
  ulonglong *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0xa4)) {
LAB_141293316:
    plVar12 = (longlong *)0x0;
  }
  else {
    lVar17 = *param_4;
    uVar25 = (uint)((ulonglong)lVar17 >> 0x10);
    uVar26 = (uint)lVar17 & 0xffff;
    lVar13 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar13 = *(longlong *)(param_1 + 0xb0);
    }
    iVar20 = *(int *)(lVar13 + (ulonglong)
                               (*(int *)(param_1 + 0xb8) - 1U &
                               (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar26) +
                               (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar26 >> 4)) * 4);
    if (iVar20 == -1) goto LAB_141293316;
    plVar12 = (longlong *)0x0;
    do {
      plVar11 = (longlong *)(*plVar1 + (longlong)iVar20 * 0x18);
      if (*plVar11 == lVar17) {
        if (plVar11 + 1 == (longlong *)0x0 || plVar11 == (longlong *)0x0) goto LAB_141293316;
        plVar12 = (longlong *)plVar11[1];
        break;
      }
      iVar20 = (int)plVar11[2];
    } while (iVar20 != -1);
  }
  puVar2 = (ulonglong *)(param_3 + 0x58);
  local_90 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a18e0) && (FUN_144b3d300(&DAT_14c9a18e0), DAT_14c9a18e0 == -1)) {
    local_58 = (ulonglong *)&DAT_14a178874;
    local_50 = (longlong **)CONCAT35(local_50._5_3_,4);
    uVar25 = FUN_14001a6c0(&local_58,1);
    DAT_14c9a18d8 = (ulonglong)uVar25;
    _Init_thread_footer(&DAT_14c9a18e0);
  }
  uVar18 = *puVar2;
  uVar23 = uVar18;
  if (uVar18 == 0) {
    uVar23 = DAT_14c9a18d8;
  }
  local_88 = param_3;
  if (*(int *)(param_1 + 0x2e0) != *(int *)(param_1 + 0x30c)) {
    uVar25 = (uint)(uVar23 >> 0x10);
    uVar26 = (uint)uVar23 & 0xffff;
    lVar17 = param_1 + 0x310;
    if (*(longlong *)(param_1 + 0x318) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x318);
    }
    iVar20 = *(int *)(lVar17 + (ulonglong)
                               (*(int *)(param_1 + 800) - 1U &
                               (int)(uVar23 >> 0x20) + ((uint)uVar23 << 0x10 | uVar26) +
                               (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar26 >> 4)) * 4);
    if (iVar20 != -1) {
      do {
        puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x2d8) + (longlong)iVar20 * 0x18);
        if (*puVar5 == uVar23) {
          if ((puVar5 + 1 != (ulonglong *)0x0 && puVar5 != (ulonglong *)0x0) &&
             (plVar11 = (longlong *)puVar5[1], plVar14 = plVar11, plVar11 != (longlong *)0x0))
          goto LAB_141292ba9;
          break;
        }
        iVar20 = (int)puVar5[2];
      } while (iVar20 != -1);
    }
  }
  plVar4 = (longlong *)(param_1 + 0x338);
  uVar26 = (uint)uVar18;
  iVar20 = (int)(uVar18 >> 0x20);
  uVar25 = (uint)(uVar18 >> 0x10);
  if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
    lVar17 = param_1 + 0x370;
    if (*(longlong *)(param_1 + 0x378) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x378);
    }
    iVar21 = *(int *)(lVar17 + (ulonglong)
                               (*(int *)(param_1 + 0x380) - 1U &
                               (uVar26 << 0x10 | uVar26 & 0xffff) + iVar20 +
                               (uVar25 << 0x13 | uVar25 & 0xffff) + ((uVar26 & 0xffff) >> 4)) * 4);
    if (iVar21 != -1) {
      do {
        puVar5 = (ulonglong *)(*plVar4 + (longlong)iVar21 * 0x18);
        if (*puVar5 == uVar18) {
          if ((puVar5 + 1 != (ulonglong *)0x0 && puVar5 != (ulonglong *)0x0) &&
             (plVar11 = (longlong *)puVar5[1], plVar14 = plVar11, plVar11 != (longlong *)0x0))
          goto LAB_141292ba9;
          break;
        }
        iVar21 = (int)puVar5[2];
      } while (iVar21 != -1);
    }
  }
  if (1 < iVar20) {
    if (*(int *)(param_1 + 0x2e0) != *(int *)(param_1 + 0x30c)) {
      lVar17 = param_1 + 0x310;
      if (*(longlong *)(param_1 + 0x318) != 0) {
        lVar17 = *(longlong *)(param_1 + 0x318);
      }
      iVar21 = *(int *)(lVar17 + (ulonglong)
                                 (*(int *)(param_1 + 800) - 1U &
                                 (uVar26 << 0x10 | uVar26 & 0xffff) + ((uVar26 & 0xffff) >> 4) +
                                 (uVar25 << 0x13 | uVar25 & 0xffff)) * 4);
      if (iVar21 != -1) {
        do {
          puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x2d8) + (longlong)iVar21 * 0x18);
          if (*puVar5 == (uVar18 & 0xffffffff)) {
            if ((puVar5 + 1 != (ulonglong *)0x0 && puVar5 != (ulonglong *)0x0) &&
               (uVar23 = puVar5[1], uVar23 != 0)) goto LAB_14129300a;
            break;
          }
          iVar21 = (int)puVar5[2];
        } while (iVar21 != -1);
      }
    }
    if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
      lVar17 = param_1 + 0x370;
      if (*(longlong *)(param_1 + 0x378) != 0) {
        lVar17 = *(longlong *)(param_1 + 0x378);
      }
      iVar21 = *(int *)(lVar17 + (ulonglong)
                                 (*(int *)(param_1 + 0x380) - 1U &
                                 (uVar26 << 0x10 | uVar26 & 0xffff) + ((uVar26 & 0xffff) >> 4) +
                                 (uVar25 << 0x13 | uVar25 & 0xffff)) * 4);
      if (iVar21 != -1) {
        do {
          puVar5 = (ulonglong *)(*plVar4 + (longlong)iVar21 * 0x18);
          if (*puVar5 == (uVar18 & 0xffffffff)) {
            if ((puVar5 + 1 != (ulonglong *)0x0 && puVar5 != (ulonglong *)0x0) &&
               (uVar23 = puVar5[1], uVar23 != 0)) goto LAB_14129300a;
            break;
          }
          iVar21 = (int)puVar5[2];
        } while (iVar21 != -1);
      }
    }
  }
  FUN_1400021e4(puVar2,&local_58);
  if (local_58 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14129294e;
LAB_14129300a:
  local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
  local_58 = (ulonglong *)((ulonglong)local_58 & 0xffffffff00000000);
  plVar14 = (longlong *)FUN_145880b83(puVar2);
  plVar11 = plVar14 + 2;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar19 = plVar14 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      local_a0 = plVar14;
      local_98 = plVar11;
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar3 = (int *)((longlong)local_a0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar14 = local_a0;
      plVar11 = local_98;
      if (*piVar3 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
        plVar14 = local_a0;
        plVar11 = local_98;
      }
    }
  }
  local_68 = plVar11;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar21 = *(int *)(param_1 + 0x330);
    *(uint *)(param_1 + 0x330) = iVar21 + 1U;
    plVar19 = (longlong *)(param_1 + 0x328);
    lVar17 = (longlong)iVar21;
    local_a0 = plVar14;
    if (*(uint *)(param_1 + 0x334) < iVar21 + 1U) {
      local_98 = plVar11;
      local_80 = (longlong *)(param_1 + 0x328);
      local_78 = (longlong)iVar21;
      FUN_145880c0e();
      plVar19 = local_80;
      lVar17 = local_78;
      plVar11 = local_98;
    }
    lVar13 = *plVar19;
    *(longlong **)(lVar13 + lVar17 * 0x10) = plVar11;
    *(longlong **)(lVar13 + 8 + lVar17 * 0x10) = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_50 = &local_68;
    local_58 = puVar2;
    FUN_145700c0c(plVar4,local_5c);
    *(int *)(uVar23 + 0x38) = *(int *)(uVar23 + 0x38) + 1;
    local_68[9] = uVar23;
    *(undefined1 *)((longlong)local_68 + 0x34) = *(undefined1 *)(uVar23 + 0x34);
    *(undefined1 *)((longlong)local_68 + 0x36) = *(undefined1 *)(uVar23 + 0x36);
    *(int *)((longlong)local_68 + 0x3c) = iVar20 + -1;
    *(int *)(local_68 + 8) = iVar20 + -1 + *(int *)(uVar23 + 8);
    *(undefined1 *)((longlong)local_68 + 0x36) = *(undefined1 *)((longlong)local_68 + 0xc);
    *(undefined1 *)((longlong)local_68 + 0x37) = *(undefined1 *)((longlong)local_68 + 0x35);
    do {
      if (*(char *)(uVar23 + 0xc) == '\0') {
        *(undefined1 *)((longlong)local_68 + 0x36) = 0;
      }
      if (*(char *)(uVar23 + 0x35) == '\0') {
        *(undefined1 *)((longlong)local_68 + 0x37) = 0;
      }
      uVar23 = *(ulonglong *)(uVar23 + 0x48);
      plVar14 = local_a0;
      plVar11 = local_68;
    } while (uVar23 != 0);
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar14 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar3 = (int *)((longlong)plVar14 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = plVar11;
  if (plVar11 != (longlong *)0x0) {
LAB_141292ba9:
    do {
      if (*(char *)((longlong)plVar11 + 0x34) != '\0') goto LAB_14129294e;
      plVar11 = (longlong *)plVar11[9];
    } while (plVar11 != (longlong *)0x0);
    local_a0 = plVar14;
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)FUN_14001cc68(0x198,0x10);
      FUN_1412933ca(plVar12,*(undefined4 *)(param_1 + 0xd0));
      *plVar12 = *param_4;
      local_70 = plVar1;
      if (*(int *)(param_1 + 0xa4) == 0) {
        iVar20 = *(int *)(param_1 + 0x78);
        *(int *)(param_1 + 0x78) = iVar20 + 1;
        if (*(int *)(param_1 + 0x7c) == iVar20) {
          FUN_14482b872(plVar1,iVar20);
        }
        iVar21 = *(int *)(param_1 + 0x98);
        if (iVar21 == 0) {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar10 = iVar21 + -1;
          }
          iVar10 = iVar10 >> 5;
        }
        lVar17 = param_1 + 0x80;
        iVar16 = iVar21 + 1;
        iVar27 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar27 = iVar21;
        }
        if (iVar27 >> 5 == iVar10) {
          *(int *)(param_1 + 0x98) = iVar16;
        }
        else {
          if (*(int *)(param_1 + 0x9c) <= iVar21) {
            if (iVar21 + 0x20U < 0xa0) {
              iVar16 = 0x80;
              iVar10 = iVar21;
            }
            else {
              uVar25 = iVar21 + 0x20U >> 5;
              local_98 = (longlong *)(ulonglong)uVar25;
              if (*(int *)(param_1 + 0x9c) + 0x1fU < 0xa0) {
                uVar26 = 4;
                if (4 < uVar25) {
                  uVar26 = uVar25;
                }
              }
              else {
                uVar26 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
              }
              uVar18 = FUN_144a3809e(uVar26 << 2,0);
              iVar10 = (int)(uVar18 >> 2);
              iVar16 = -0x20;
              if ((int)local_98 <= iVar10) {
                iVar16 = iVar10 << 5;
              }
              iVar10 = *(int *)(param_1 + 0x98);
            }
            *(int *)(param_1 + 0x9c) = iVar16;
            FUN_1446efbd8(lVar17,iVar10);
            iVar16 = *(int *)(param_1 + 0x98) + 1;
          }
          iVar10 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar10 = iVar16;
          }
          *(int *)(param_1 + 0x98) = iVar16;
          if (iVar16 % 0x20 != 0) {
            lVar13 = *(longlong *)(param_1 + 0x90);
            if (*(longlong *)(param_1 + 0x90) == 0) {
              lVar13 = lVar17;
            }
            bVar15 = -(char)(iVar16 % 0x20);
            *(uint *)(lVar13 + (longlong)(iVar10 >> 5) * 4) =
                 (uint)(*(int *)(lVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar15 & 0x1f)) >>
                 (bVar15 & 0x1f);
          }
        }
        lVar13 = (longlong)iVar20;
        if (*(longlong *)(param_1 + 0x90) != 0) {
          lVar17 = *(longlong *)(param_1 + 0x90);
        }
        bVar15 = (byte)iVar21 & 0x1f;
        puVar6 = (uint *)(lVar17 + (longlong)(iVar27 >> 5) * 4);
        *puVar6 = *puVar6 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
      }
      else {
        iVar20 = *(int *)(param_1 + 0xa0);
        lVar13 = (longlong)iVar20;
        iVar21 = *(int *)(*(longlong *)(param_1 + 0x70) + 4 + lVar13 * 0x18);
        *(int *)(param_1 + 0xa0) = iVar21;
        iVar10 = *(int *)(param_1 + 0xa4) + -1;
        *(int *)(param_1 + 0xa4) = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar21 * 0x18) = 0xffffffff;
        }
      }
      lVar17 = local_88;
      puVar24 = local_90;
      lVar22 = param_1 + 0x80;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar22 = *(longlong *)(param_1 + 0x90);
      }
      iVar21 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar21 = iVar20;
      }
      puVar6 = (uint *)(lVar22 + (longlong)(iVar21 >> 5) * 4);
      *puVar6 = *puVar6 | 1 << ((byte)iVar20 & 0x1f);
      iVar21 = 1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + lVar13 * 0x18);
      lVar13 = *param_4;
      *plVar1 = lVar13;
      plVar1[1] = (longlong)plVar12;
      *(undefined4 *)(plVar1 + 2) = 0xffffffff;
      uVar25 = (uint)((ulonglong)lVar13 >> 0x10);
      uVar26 = (uint)lVar13 & 0xffff;
      uVar25 = ((uint)lVar13 << 0x10 | uVar26) + (int)((ulonglong)lVar13 >> 0x20) +
               (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar26 >> 4);
      uVar26 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
      if ((uVar26 != 0) && (uVar26 != 1)) {
        lVar22 = param_1 + 0xa8;
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          lVar22 = *(longlong *)(param_1 + 0xb0);
        }
        iVar10 = *(int *)(lVar22 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & uVar25) * 4);
        if (iVar10 != -1) {
          do {
            plVar11 = (longlong *)(*local_70 + (longlong)iVar10 * 0x18);
            if (*plVar11 == lVar13) {
              uVar7 = *(undefined4 *)((longlong)plVar1 + 4);
              lVar13 = plVar1[1];
              uVar8 = *(undefined4 *)((longlong)plVar1 + 0xc);
              *(int *)plVar11 = (int)*plVar1;
              *(undefined4 *)((longlong)plVar11 + 4) = uVar7;
              *(int *)(plVar11 + 1) = (int)lVar13;
              *(undefined4 *)((longlong)plVar11 + 0xc) = uVar8;
              FUN_140a6c6d0(local_70,iVar20);
              goto LAB_141292dfb;
            }
            iVar10 = (int)plVar11[2];
          } while (iVar10 != -1);
        }
      }
      if (3 < uVar26) {
        uVar18 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
        lVar13 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar13 & 0x1f);
      }
      if (((int)uVar26 < 1) || (iVar21 <= *(int *)(param_1 + 0xb8))) {
        uVar25 = *(int *)(param_1 + 0xb8) - 1U & uVar25;
        *(uint *)((longlong)plVar1 + 0x14) = uVar25;
        lVar13 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar13 = param_1 + 0xa8;
        }
        *(undefined4 *)(plVar1 + 2) =
             *(undefined4 *)
              (lVar13 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (longlong)(int)uVar25) * 4);
        lVar13 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar13 = param_1 + 0xa8;
        }
        *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (longlong)(int)uVar25) * 4) =
             iVar20;
      }
      else {
        *(int *)(param_1 + 0xb8) = iVar21;
        FUN_14129368e(local_70);
      }
    }
    else {
      *(byte *)(plVar12 + 0x2c) = *(byte *)(plVar12 + 0x2c) & 0xfe;
      FUN_14709d3d4(plVar12,*(undefined4 *)(param_1 + 0xd0));
      lVar17 = local_88;
      puVar24 = local_90;
    }
LAB_141292dfb:
    *(char *)((longlong)plVar12 + 0x161) = param_5;
    if (param_5 != '\0') {
      *(undefined4 *)((longlong)plVar12 + 0x164) = *(undefined4 *)(param_1 + 0x5c);
      *(int *)(plVar12 + 0x2d) = (int)plVar12[0x2d] + 1;
    }
    if (*(int *)(lVar17 + 0x60) == (int)plVar12[0x13]) {
      if ((((*(float *)(lVar17 + 100) != *(float *)((longlong)plVar12 + 0x9c)) ||
           (NAN(*(float *)(lVar17 + 100)) || NAN(*(float *)((longlong)plVar12 + 0x9c)))) ||
          (*puVar2 != plVar12[0x12])) ||
         (cVar9 = FUN_1470a0b00(puVar24,plVar12 + 0x14), cVar9 != '\0')) goto LAB_141292e3b;
    }
    else {
LAB_141292e3b:
      *(undefined4 *)(plVar12 + 0x14) = *puVar24;
      (**(code **)(plVar12[0x15] + 0x20))(plVar12 + 0x15,0);
      plVar12[0x16] = *(longlong *)(puVar24 + 4);
      FUN_1406022fe(plVar12 + 0x17,puVar24 + 6);
      (**(code **)(plVar12[0x19] + 0x20))(plVar12 + 0x19,0);
      plVar12[0x1a] = *(longlong *)(puVar24 + 0xc);
      FUN_1406022fe(plVar12 + 0x1b,puVar24 + 0xe);
      (**(code **)(plVar12[0x1d] + 0x20))(plVar12 + 0x1d,0);
      plVar12[0x1e] = *(longlong *)(puVar24 + 0x14);
      FUN_1406022fe(plVar12 + 0x1f,puVar24 + 0x16);
      (**(code **)(plVar12[0x21] + 0x20))(plVar12 + 0x21,0);
      plVar12[0x22] = *(longlong *)(puVar24 + 0x1c);
      FUN_1406022fe(plVar12 + 0x23,puVar24 + 0x1e);
      (**(code **)(plVar12[0x25] + 0x20))(plVar12 + 0x25,0);
      plVar12[0x26] = *(longlong *)(puVar24 + 0x24);
      FUN_1406022fe(plVar12 + 0x27,puVar24 + 0x26);
      FUN_141293510(plVar12 + 7,lVar17);
      *(byte *)(plVar12 + 0x2c) = *(byte *)(plVar12 + 0x2c) | 1;
    }
    lVar17 = plVar12[0x2b];
    iVar20 = *(int *)((longlong)plVar12 + 0x15c);
    *(undefined1 *)(plVar12 + 0x2b) = 1;
    *(undefined4 *)((longlong)plVar12 + 0x15c) = 0;
    plVar12[0x2a] = (longlong)local_a0;
    cVar9 = *(char *)((longlong)local_a0 + 0x36);
    *(char *)(plVar12 + 0x2b) = cVar9;
    lVar13 = local_a0[8];
    *(int *)((longlong)plVar12 + 0x15c) = (int)lVar13;
    if (((char)lVar17 != cVar9) || (iVar20 != (int)lVar13)) {
      *(byte *)(plVar12 + 0x2c) = *(byte *)(plVar12 + 0x2c) | 1;
    }
    goto LAB_141292950;
  }
LAB_14129294e:
  plVar12 = (longlong *)0x0;
LAB_141292950:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar12;
}



// FUNCTION 1412933ca FUN_1412933ca body=325 status=ok
// SIG undefined FUN_1412933ca(void)

void * FUN_1412933ca(void *param_1,int param_2)

{
  memset(param_1,0,0x88);
  *(undefined8 *)((longlong)param_1 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3f80000000000001;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined2 **)((longlong)param_1 + 0xa8) = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined2 **)((longlong)param_1 + 200) = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined2 **)((longlong)param_1 + 0xe8) = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined2 **)((longlong)param_1 + 0x108) = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined2 **)((longlong)param_1 + 0x128) = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined1 *)((longlong)param_1 + 0x158) = 1;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(byte *)((longlong)param_1 + 0x160) = *(byte *)((longlong)param_1 + 0x160) & 0xc0;
  *(undefined1 *)((longlong)param_1 + 0x161) = 1;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(int *)((longlong)param_1 + 400) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x180) = 0;
  }
  else {
    FUN_1446f48e2((undefined8 *)((longlong)param_1 + 0x188));
    *(undefined4 *)((longlong)param_1 + 0x180) = 0;
    if (*(int *)((longlong)param_1 + 400) != 0) {
      memset(*(void **)((longlong)param_1 + 0x188),0,(longlong)param_2 << 2);
    }
  }
  return param_1;
}



// FUNCTION 141293510 FUN_141293510 body=382 status=ok
// SIG undefined FUN_141293510(void)

undefined8 * FUN_141293510(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 3);
    pvVar2 = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 2,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 5);
    pvVar2 = (void *)param_2[4];
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 4,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 7);
    pvVar2 = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 6,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 9);
    pvVar2 = (void *)param_2[8];
    *(int *)(param_1 + 9) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 8,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  param_1[0xc] = param_2[0xc];
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  return param_1;
}



// FUNCTION 14129368e FUN_14129368e body=594 status=ok
// SIG undefined FUN_14129368e(void)

void FUN_14129368e(longlong *param_1)

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
            if (iVar3 - lVar14 == lVar13) goto LAB_141293897;
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
LAB_141293897:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412938e2 FUN_1412938e2 body=1013 status=ok
// SIG undefined FUN_1412938e2(void)

void FUN_1412938e2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  byte local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
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
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_20);
    }
  }
  uStack_28 = 0;
  uStack_21 = 0;
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
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_28);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar1 = *(undefined8 *)(pbVar4 + 1);
        pbVar4 = pbVar4 + 9;
        *(byte **)(param_2 + 0x20) = pbVar4;
        uStack_28 = (undefined7)uVar1;
        uStack_21 = (undefined1)((ulonglong)uVar1 >> 0x38);
        goto LAB_141293a34;
      }
      (*pcVar2)(uVar1,param_2,&uStack_28);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
LAB_141293a34:
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_29);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_29);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
      local_29 = (byte)uVar1;
      uStack_28 = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_29);
    }
  }
  pbVar4 = &local_29;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar3 = FUN_141293cd8(local_20,CONCAT17(uStack_21,uStack_28));
  *pbVar4 = bVar3 ^ 1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141293cd8 FUN_141293cd8 body=158 status=ok
// SIG undefined FUN_141293cd8(void)

ulonglong FUN_141293cd8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141293d77(0,&local_38);
  lVar1 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      if ((param_2 != 0) &&
         (cVar2 = FUN_14064aef8(param_2,*(undefined8 *)(lVar1 + lVar5)), cVar2 != '\0')) {
        uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        goto LAB_141293d3e;
      }
      lVar5 = lVar5 + 8;
    } while (lVar3 * 8 != lVar5);
    uVar4 = 0;
  }
LAB_141293d3e:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 141293d77 FUN_141293d77 body=221 status=ok
// SIG undefined FUN_141293d77(void)

void FUN_141293d77(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x180))();
    if (lVar5 != 0) {
      iVar4 = *(int *)(lVar5 + 0x238);
      if (0 < iVar4) {
        lVar7 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar7 * 8);
          if (((iVar1 != 0) &&
              (uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) {
            plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar1)) &&
               (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
                ((*plVar6 != 0 && (lVar3 = *(longlong *)(*plVar6 + 0x3d0), lVar3 != 0)))))) {
              iVar4 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
                FUN_141886378(param_2,iVar4);
              }
              *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar3;
              iVar4 = *(int *)(lVar5 + 0x238);
            }
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < iVar4);
      }
    }
  }
  return;
}



// FUNCTION 141293e54 FUN_141293e54 body=281 status=ok
// SIG undefined FUN_141293e54(void)

/* WARNING: Removing unreachable block (ram,0x000141293f51) */
/* WARNING: Removing unreachable block (ram,0x000141293f67) */

longlong * FUN_141293e54(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140056680(&local_28,&DAT_149e0209e);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  FUN_140056680(&local_28,&DAT_149e01eac);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141293f6e FUN_141293f6e body=797 status=ok
// SIG undefined FUN_141293f6e(void)

undefined8 FUN_141293f6e(undefined8 param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined *puVar11;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c868018 != DAT_14c868044) {
    puVar11 = &DAT_14c868048;
    if (DAT_14c868050 != (undefined *)0x0) {
      puVar11 = DAT_14c868050;
    }
    for (iVar1 = *(int *)(puVar11 + (ulonglong)(DAT_14c868058 - 1U & param_2 & 0xff) * 4);
        iVar1 != -1; iVar1 = *(int *)(DAT_14c868010 + (longlong)iVar1 * 0xc + 4)) {
      if (*(char *)(DAT_14c868010 + (longlong)iVar1 * 0xc) == (char)param_2) {
        pcVar3 = (code *)*param_3;
        plVar6 = param_3 + 4;
        if ((longlong *)param_3[2] != (longlong *)0x0) {
          plVar6 = (longlong *)param_3[2];
        }
        uVar7 = (**(code **)(*plVar6 + 8))();
        (*pcVar3)(uVar7);
        goto LAB_1412940fb;
      }
    }
  }
  plVar6 = (longlong *)FUN_14129428c(param_2);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,6,0x10);
  local_40 = 6;
  *local_48 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar8;
  *local_48 = (longlong)&PTR_FUN_149e309d0;
  lVar2 = *param_3;
  local_48[4] = lVar2;
  local_48[6] = 0;
  if (lVar2 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)*plVar9)(plVar9,local_48 + 6);
  }
  if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_48 + 0x30))(), cVar4 == '\0')) {
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_1412940fb;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_1412940e5;
    }
  }
  else {
    if (*(int *)((longlong)plVar6 + 0x14) < 1) {
      iVar1 = (int)plVar6[1];
      iVar5 = (int)plVar6[2] + -1;
      *(int *)(plVar6 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar6 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar9 = *(longlong **)(*plVar6 + (longlong)iVar10 * 0x10),
                plVar9 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar9 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar6,iVar10);
              FUN_14005b248(plVar6);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar5 = (int)plVar6[1];
          } while (iVar10 < iVar5);
        }
        iVar10 = 2;
        if (2 < iVar5 * 2) {
          iVar10 = iVar5 * 2;
        }
        *(int *)(plVar6 + 2) = iVar10;
        if ((iVar10 < iVar1) && (*(int *)((longlong)plVar6 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_38);
    }
    iVar1 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(plVar6,iVar1);
    }
    lVar2 = *plVar6;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar8) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar8) = 0;
    *(longlong **)(lVar2 + lVar8) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar8) = local_40;
LAB_1412940e5:
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1412940fb:
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129428c FUN_14129428c body=152 status=ok
// SIG undefined FUN_14129428c(void)

undefined * FUN_14129428c(uint param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868398) {
    FUN_144b3d300(&DAT_14c868398);
    if (DAT_14c868398 == -1) {
      lVar1 = 0x14;
      do {
        *(undefined8 *)((longlong)&DAT_14c868278 + lVar1 + 4) = 0;
        *(undefined8 *)((longlong)&DAT_14c868284 + lVar1) = 0;
        *(undefined8 *)(lVar1 + 0x14c86828c) = 2;
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != 0x11c);
      atexit(FUN_142782e77);
      _Init_thread_footer(&DAT_14c868398);
    }
  }
  return &DAT_14c868290 + ((ulonglong)param_1 & 0xff) * 0x18;
}



// FUNCTION 14129433e FUN_14129433e body=62 status=ok
// SIG undefined FUN_14129433e(void)

bool FUN_14129433e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x84) & 2) != 0)) &&
     (cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar1 != '\0')) {
    lVar2 = FUN_144a7ba4c(param_1);
    return lVar2 != 0;
  }
  return false;
}



// FUNCTION 14129437c FUN_14129437c body=294 status=ok
// SIG undefined FUN_14129437c(void)

void FUN_14129437c(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  if (*param_3 == 0) {
    lVar2 = FUN_14008e0ae(param_2);
    local_48 = FUN_145cdf962;
    local_40 = 0;
    FUN_146649bf8(lVar2 + 0x150,&local_38,uVar1);
    *param_3 = local_38;
  }
  if (*param_4 == 0) {
    lVar2 = FUN_14008e0ae(param_2);
    local_48 = FUN_141359288;
    local_40 = 0;
    FUN_146649cf8(lVar2 + 0x138,&local_38,uVar1);
    *param_4 = local_38;
  }
  if (*param_5 == 0) {
    lVar2 = FUN_14008e0ae(param_2);
    local_48 = FUN_148e5becc;
    local_40 = 0;
    FUN_146649cf8(lVar2 + 0x2b8,&local_38,uVar1);
    *param_5 = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412944b0 FUN_1412944b0 body=486 status=ok
// SIG undefined FUN_1412944b0(void)

void FUN_1412944b0(undefined8 param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  undefined1 auVar5 [16];
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1403ae288();
  if (cVar1 == '\0') {
    if (param_2[1] == 0.0 || *param_2 != 0.0) {
      *param_2 = 0.0;
      param_2[1] = (float)((int)param_2[1] + 1);
    }
    if (param_2[5] == 0.0 || param_2[4] != 0.0) {
      param_2[4] = 0.0;
      param_2[5] = (float)((int)param_2[5] + 1);
    }
    if (param_2[7] == 0.0 || param_2[6] != 0.0) {
      param_2[6] = 0.0;
      param_2[7] = (float)((int)param_2[7] + 1);
    }
    if (param_2[0xb] == 0.0 || *(char *)(param_2 + 10) != '\x04') {
      *(undefined1 *)(param_2 + 10) = 4;
      param_2[0xb] = (float)((int)param_2[0xb] + 1);
    }
  }
  else {
    lVar2 = FUN_140280ec4(param_1);
    if (param_2[1] == 0.0 || *(float *)(lVar2 + 200) != *param_2) {
      *param_2 = *(float *)(lVar2 + 200);
      param_2[1] = (float)((int)param_2[1] + 1);
    }
    lVar2 = FUN_140280ec4(param_1);
    if ((*(longlong *)(lVar2 + 0x18) == 0) ||
       (*(char *)(*(longlong *)(lVar2 + 0x18) + 0x18) != '\x01')) {
      fVar4 = *(float *)(lVar2 + 0x30);
    }
    else {
      auVar5 = roundps(ZEXT416(*(uint *)(lVar2 + 0x30)),ZEXT416(*(uint *)(lVar2 + 0x30)),3);
      fVar4 = auVar5._0_4_;
    }
    if (param_2[5] == 0.0 || fVar4 != param_2[4]) {
      param_2[4] = fVar4;
      param_2[5] = (float)((int)param_2[5] + 1);
    }
    lVar2 = FUN_140280ec4(param_1);
    if (param_2[7] == 0.0 || *(float *)(lVar2 + 0x3c) != param_2[6]) {
      param_2[6] = *(float *)(lVar2 + 0x3c);
      param_2[7] = (float)((int)param_2[7] + 1);
    }
    local_21 = '\x04';
    uVar3 = FUN_140280ec4(param_1);
    cVar1 = FUN_140280f4a(uVar3,&local_21);
    if (cVar1 != '\0') {
      if (param_2[0xb] == 0.0 || local_21 != *(char *)(param_2 + 10)) {
        *(char *)(param_2 + 10) = local_21;
        param_2[0xb] = (float)((int)param_2[0xb] + 1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141294698 FUN_141294698 body=564 status=ok
// SIG undefined FUN_141294698(void)

byte FUN_141294698(longlong param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  
  lVar5 = FUN_1447b4020();
  if (lVar5 == 0) {
    bVar12 = false;
  }
  else {
    plVar6 = (longlong *)FUN_1447b4020(param_1);
    lVar5 = (**(code **)(*plVar6 + 0x78))(plVar6);
    bVar12 = lVar5 != 0;
  }
  cVar4 = FUN_1402bfec4(param_1,0);
  if ((((cVar4 == '\0') && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) &&
      (bVar1 = *(byte *)(param_1 + 0xc5), (int)(uint)bVar1 < (int)param_2)) &&
     ((bVar2 = *(byte *)(param_1 + 0xc3), bVar1 < bVar2 && (*(byte *)(param_1 + 0xc6) == bVar1)))) {
    uVar11 = (uint)bVar2;
    if (param_2 < bVar2) {
      uVar11 = param_2;
    }
    *(char *)(param_1 + 0xc6) = (char)uVar11;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
    if (bVar12) {
      iVar3 = *(int *)(param_1 + 0x110);
      if ((longlong)iVar3 == 0) {
        lVar10 = 0;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x108);
        lVar9 = 0;
        do {
          plVar6 = *(longlong **)(lVar5 + lVar9);
          if (plVar6 != (longlong *)0x0) {
            lVar10 = FUN_14066dd60();
            if (((*(int *)(lVar10 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                 lVar10 + 0x30)) &&
               (lVar10 = (**(code **)(*plVar6 + 0x2b8))(plVar6,param_1), lVar10 != 0)) break;
          }
          lVar9 = lVar9 + 8;
          lVar10 = 0;
        } while ((longlong)iVar3 * 8 != lVar9);
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x138,0x10);
      uVar8 = *(undefined8 *)(param_1 + 0xc0);
      puVar7[1] = uVar8;
      uVar11 = (uint)((ulonglong)uVar8 >> 0x18) & 0xff;
      *(uint *)(puVar7 + 2) = uVar11 - ((uint)((ulonglong)uVar8 >> 0x28) & 0xff);
      *(uint *)((longlong)puVar7 + 0x14) = uVar11 - ((ushort)((ulonglong)uVar8 >> 0x30) & 0xff);
      puVar7[3] = 0;
      puVar7[4] = 0;
      *puVar7 = &PTR_FUN_14aac2d40;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0xf00000000;
      puVar7[0x25] = 0;
      puVar7[0x26] = 0xf00000000;
      uVar8 = FUN_14001cc68(0x170,0x10);
      FUN_1412948cc(uVar8,param_1,param_3);
      lVar9 = FUN_14001cc68(0x470,0x10);
      FUN_141294966(lVar9,param_1,puVar7,lVar10,uVar8);
      lVar5 = *(longlong *)(param_1 + 0x38);
      if (lVar5 != lVar9) {
        *(longlong *)(param_1 + 0x38) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          FUN_14128f1bc();
        }
      }
      return *(byte *)(*(longlong *)(param_1 + 0x38) + 0x5c) ^ 1;
    }
  }
  return 0;
}



// FUNCTION 1412948cc FUN_1412948cc body=153 status=ok
// SIG undefined FUN_1412948cc(void)

void FUN_1412948cc(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  *param_1 = &PTR_LAB_14aac35b0;
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *(uint *)(param_1 + 2) = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc5);
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc6);
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14aac2df0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xf00000000;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x129) = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  if (param_2 != 0) {
    param_1[0x24] = *(undefined8 *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 141294966 FUN_141294966 body=832 status=ok
// SIG undefined FUN_141294966(void)

undefined8 *
FUN_141294966(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined ***local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1403225d8();
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14aac39d0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 2;
  param_1[0x2a] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0xf00000000;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + 0x14);
  if (param_3 != 0) {
    param_1[0x21] = param_3;
  }
  if (param_4 != 0) {
    param_1[0x22] = param_4;
  }
  uVar6 = (uint)(param_4 != 0);
  *(uint *)(param_1 + 0x25) = uVar6 + 1;
  param_1[(ulonglong)uVar6 + 0x22] = param_5;
  param_1[0x26] = (longlong)param_1 + 0x5d;
  param_1[0x27] = param_1 + 0xb;
  local_b8 = (undefined1 *)param_1[0x28];
  uStack_70 = param_1[0x29];
  local_a8 = (undefined ***)param_1[0x2a];
  uStack_60 = param_1[0x2b];
  local_58 = (undefined **)param_1[0x2c];
  puStack_50 = (undefined8 *)param_1[0x2d];
  local_48 = param_1[0x2e];
  uStack_40 = param_1[0x2f];
  uVar4 = local_48;
  uVar5 = uStack_40;
  local_68 = local_a8;
  uVar3 = uStack_60;
  local_78 = local_b8;
  uVar2 = uStack_70;
  param_1[0x2e] = CONCAT44(uStack_84,local_88);
  param_1[0x2f] = CONCAT44(uStack_7c,uStack_80);
  param_1[0x2c] = &PTR_LAB_14aaced50;
  param_1[0x2d] = param_1;
  param_1[0x2a] = 0;
  param_1[0x2b] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x28] = &LAB_143730218;
  param_1[0x29] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  puStack_90 = puStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar2;
  uStack_60 = uVar3;
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (local_b8 != (undefined1 *)0x0) {
    pppuVar7 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar7 = &local_98;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  FUN_140fdc1dc(local_e0,param_2,0);
  if (*(char *)((longlong)param_1 + 0x5c) == '\0') {
    plVar10 = param_1 + 0x22;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x24];
    }
    if ((longlong)*(int *)(param_1 + 0x25) != 0) {
      lVar8 = 0;
      do {
        if (*(int *)(*(longlong *)((longlong)plVar10 + lVar8) + 0x18) == 0) {
          iVar1 = *(int *)(*(longlong *)((longlong)plVar10 + lVar8) + 0x1c);
          uVar9 = 2;
          if (iVar1 != 0) {
            if (iVar1 != 1) goto LAB_141294c6d;
            uVar9 = 1;
          }
          local_78 = (undefined1 *)0x0;
          local_68 = (undefined ***)0x0;
          local_a8 = (undefined ***)0x0;
          local_98 = &PTR_LAB_14aaced70;
          local_b8 = &LAB_143730274;
          *(undefined4 *)(param_1 + 0xd) = uVar9;
          puStack_90 = param_1;
          FUN_141294ca8(param_1 + 0xe,&local_b8);
          *(undefined4 *)(param_1 + 0x16) = 0;
          FUN_141294ca8(param_1 + 0x18,&local_78);
          if (local_b8 != (undefined1 *)0x0) {
            pppuVar7 = &local_98;
            if (local_a8 != (undefined ***)0x0) {
              pppuVar7 = local_a8;
            }
            (*(code *)(*pppuVar7)[2])(pppuVar7);
          }
          if (local_78 != (undefined1 *)0x0) {
            pppuVar7 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar7 = &local_58;
            }
            (*(code *)(*pppuVar7)[2])();
          }
          goto LAB_141294c0d;
        }
LAB_141294c6d:
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(param_1 + 0x25) * 8 != lVar8);
    }
  }
  FUN_143726e88(param_1,local_e0);
LAB_141294c0d:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141294ca8 FUN_141294ca8 body=292 status=ok
// SIG undefined FUN_141294ca8(void)

longlong * FUN_141294ca8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141294dce FUN_141294dce body=74 status=ok
// SIG undefined FUN_141294dce(void)

void FUN_141294dce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0af950;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141294e18 FUN_141294e18 body=1154 status=ok
// SIG undefined FUN_141294e18(void)

void FUN_141294e18(undefined8 param_1,longlong param_2)

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
            goto LAB_141294f03;
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
LAB_141294f03:
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
            goto LAB_141294fd0;
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
LAB_141294fd0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14129529c(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129529c FUN_14129529c body=309 status=ok
// SIG undefined FUN_14129529c(void)

void FUN_14129529c(longlong param_1,longlong param_2,longlong param_3)

{
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == param_1) && (param_3 != 0)) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412953e6 FUN_1412953e6 body=134 status=ok
// SIG undefined FUN_1412953e6(void)

void FUN_1412953e6(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar4 = (longlong *)0x0;
  }
  (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  FUN_14020684a(param_1);
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (lVar3 = FUN_140702026(lVar2), lVar2 = param_1, lVar3 != 0)) {
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
      if ((*(uint *)(lVar2 + 8) & 0x30) != 0) {
        return;
      }
    }
    if (*(int *)(param_1 + 0x458) == -1) {
      uVar1 = FUN_14129546c(lVar3 + 200,param_1);
      *(undefined4 *)(param_1 + 0x458) = uVar1;
    }
  }
  return;
}



// FUNCTION 14129546c FUN_14129546c body=162 status=ok
// SIG undefined FUN_14129546c(void)

ulonglong FUN_14129546c(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = 0;
  FUN_141295510(param_1 + 0x68,&local_40);
  puVar1 = local_40;
  *local_38 = param_2;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    local_40 = &local_30;
    local_30 = param_2;
    FUN_14129570a(*(longlong *)(param_1 + 0xa8) + 0x80,local_24,&local_40,0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)puVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141295510 FUN_141295510 body=505 status=ok
// SIG undefined FUN_141295510(void)

int * FUN_141295510(longlong *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar3 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar3) {
      FUN_14055ddfe(param_1,iVar3);
    }
    iVar9 = (int)param_1[5];
    if (iVar9 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar2 = iVar9 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar8 = iVar9 + 1;
    iVar12 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar12 = iVar9;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar9) {
        if (iVar9 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar9;
        }
        else {
          uVar13 = iVar9 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar14,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar14;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar2 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar3;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
    lVar10 = *param_1;
  }
  else {
    iVar3 = FUN_144a784a6(param_1 + 2,0,*param_3);
    if (iVar3 != -1) {
      plVar14 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar14 = (longlong *)param_1[4];
      }
      iVar9 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar9 = iVar3;
      }
      puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar9 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
    }
    *param_3 = iVar3 + 1;
    lVar10 = *param_1;
    lVar4 = (longlong)iVar3;
    uVar13 = *(uint *)(lVar10 + 4 + lVar4 * 8);
    if ((int)param_1[6] == iVar3) {
      *(uint *)(param_1 + 6) = uVar13;
    }
    uVar7 = *(uint *)(lVar10 + lVar4 * 8);
    if (-1 < (int)uVar13) {
      *(uint *)(lVar10 + (ulonglong)uVar13 * 8) = uVar7;
    }
    if (-1 < (int)uVar7) {
      *(undefined4 *)(lVar10 + 4 + (ulonglong)uVar7 * 8) = *(undefined4 *)(lVar10 + 4 + lVar4 * 8);
    }
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  *param_2 = iVar3;
  *(longlong *)(param_2 + 2) = lVar10 + lVar4 * 8;
  return param_2;
}



// FUNCTION 14129570a FUN_14129570a body=990 status=ok
// SIG undefined FUN_14129570a(void)

int * FUN_14129570a(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
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
  undefined8 uVar18;
  undefined8 uVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  byte bVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  longlong *plVar30;
  int iVar31;
  int iVar32;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar29 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar29 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar29) {
      FUN_1406cd6a8(param_1,iVar29);
    }
    iVar32 = (int)param_1[5];
    if (iVar32 == 0) {
      iVar21 = -1;
    }
    else {
      iVar21 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar21 = iVar32 + -1;
      }
      iVar21 = iVar21 >> 5;
    }
    plVar25 = param_1 + 2;
    iVar27 = iVar32 + 1;
    iVar31 = iVar32 + 0x1f;
    if (-1 < iVar32) {
      iVar31 = iVar32;
    }
    if (iVar31 >> 5 == iVar21) {
      *(int *)(param_1 + 5) = iVar27;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar32) {
        if (iVar32 + 0x20U < 0xa0) {
          iVar27 = 0x80;
          iVar21 = iVar32;
        }
        else {
          uVar22 = iVar32 + 0x20U >> 5;
          local_70 = (ulonglong)uVar22;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar22) {
              uVar23 = uVar22;
            }
          }
          else {
            uVar23 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
          }
          uVar28 = FUN_144a3809e(uVar23 << 2,0);
          iVar21 = (int)(uVar28 >> 2);
          iVar27 = -0x20;
          if ((int)local_70 <= iVar21) {
            iVar27 = iVar21 << 5;
          }
          iVar21 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar27;
        FUN_1446efbd8(plVar25,iVar21);
        iVar27 = (int)param_1[5] + 1;
      }
      iVar21 = iVar27 + 0x1f;
      if (-1 < iVar27) {
        iVar21 = iVar27;
      }
      *(int *)(param_1 + 5) = iVar27;
      if (iVar27 % 0x20 != 0) {
        plVar30 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar30 = plVar25;
        }
        bVar26 = -(char)(iVar27 % 0x20);
        *(uint *)((longlong)plVar30 + (longlong)(iVar21 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar30 + (longlong)(iVar21 >> 5) * 4) << (bVar26 & 0x1f)) >>
             (bVar26 & 0x1f);
      }
    }
    lVar24 = (longlong)iVar29;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar25 = (longlong *)param_1[4];
    }
    bVar26 = (byte)iVar32 & 0x1f;
    puVar4 = (uint *)((longlong)plVar25 + (longlong)(iVar31 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
  }
  else {
    iVar29 = (int)param_1[6];
    lVar24 = (longlong)iVar29;
    iVar32 = *(int *)(*param_1 + 4 + lVar24 * 0x40);
    *(int *)(param_1 + 6) = iVar32;
    iVar21 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar21;
    if (iVar21 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar32 * 0x40) = 0xffffffff;
    }
  }
  plVar25 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar25 = (longlong *)param_1[4];
  }
  iVar32 = iVar29 + 0x1f;
  if (-1 < iVar29) {
    iVar32 = iVar29;
  }
  puVar4 = (uint *)((longlong)plVar25 + (longlong)(iVar32 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar29 & 0x1f);
  uVar19 = DAT_14c8463f8;
  uVar18 = DAT_14c8463f0;
  lVar5 = *param_1;
  lVar24 = lVar24 * 0x40;
  puVar1 = (undefined4 *)(lVar5 + lVar24);
  local_58 = DAT_14c8463f0;
  uStack_50 = DAT_14c8463f8;
  local_68 = DAT_14c8463f0;
  uStack_60 = DAT_14c8463f8;
  uVar28 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar5 + lVar24) = uVar28;
  *(undefined1 *)(lVar5 + 0x30 + lVar24) = 1;
  local_68._0_4_ = (undefined4)uVar18;
  local_68._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar19;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
  puVar2 = (undefined4 *)(lVar5 + 8 + lVar24);
  *puVar2 = (undefined4)local_68;
  puVar2[1] = local_68._4_4_;
  puVar2[2] = (undefined4)uStack_60;
  puVar2[3] = uStack_60._4_4_;
  puVar3 = (undefined8 *)(lVar5 + 0x18 + lVar24);
  *puVar3 = uVar18;
  puVar3[1] = uVar19;
  *(undefined1 *)(lVar5 + 0x28 + lVar24) = 0;
  *(undefined4 *)(lVar5 + 0x38 + lVar24) = 0xffffffff;
  uVar22 = ((uint)(uVar28 >> 0x14) & 0xffff ^ (uint)(uVar28 >> 4)) * -0x7a143595;
  uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
  uVar22 = uVar22 >> 0x10 ^ uVar22;
  local_68 = uVar18;
  uStack_60 = uVar19;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar25 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar25 = (longlong *)param_1[8];
    }
    iVar32 = *(int *)((longlong)plVar25 + (ulonglong)((int)param_1[9] - 1U & uVar22) * 4);
    if (iVar32 != -1) {
      do {
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar32 * 0x40);
        if (*(ulonglong *)(*param_1 + (longlong)iVar32 * 0x40) == uVar28) {
          if (*(char *)(puVar2 + 0xc) == '\x01') {
            *(undefined1 *)(puVar2 + 0xc) = 0;
          }
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          uVar10 = puVar1[4];
          uVar11 = puVar1[5];
          uVar12 = puVar1[6];
          uVar13 = puVar1[7];
          uVar14 = puVar1[8];
          uVar15 = puVar1[9];
          uVar16 = puVar1[10];
          uVar17 = puVar1[0xb];
          *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
          puVar2[8] = uVar14;
          puVar2[9] = uVar15;
          puVar2[10] = uVar16;
          puVar2[0xb] = uVar17;
          puVar2[4] = uVar10;
          puVar2[5] = uVar11;
          puVar2[6] = uVar12;
          puVar2[7] = uVar13;
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          FUN_1410052f4(param_1,iVar29,1);
          cVar20 = '\x01';
          goto LAB_1412958b6;
        }
        iVar32 = puVar2[0xe];
      } while (iVar32 != -1);
    }
  }
  cVar20 = '\0';
  iVar32 = iVar29;
LAB_1412958b6:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar20;
  }
  if (cVar20 == '\0') {
    uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar23 < 4) {
      iVar29 = 1;
    }
    else {
      uVar28 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
      lVar24 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar29 = 1 << ((byte)lVar24 & 0x1f);
    }
    if (((int)uVar23 < 1) || (iVar29 <= (int)param_1[9])) {
      uVar22 = (int)param_1[9] - 1U & uVar22;
      puVar1[0xf] = uVar22;
      plVar25 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar25 = param_1 + 7;
      }
      puVar1[0xe] = *(undefined4 *)
                     ((longlong)plVar25 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4);
      plVar25 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar25 = param_1 + 7;
      }
      *(int *)((longlong)plVar25 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4) =
           iVar32;
    }
    else {
      *(int *)(param_1 + 9) = iVar29;
      FUN_141295aea(param_1);
    }
  }
  *param_2 = iVar32;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141295aea FUN_141295aea body=603 status=ok
// SIG undefined FUN_141295aea(void)

void FUN_141295aea(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x40;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x3c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x38 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_141295ce3;
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
LAB_141295ce3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141295d46 FUN_141295d46 body=602 status=ok
// SIG undefined FUN_141295d46(void)

undefined8 *
FUN_141295d46(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88 [3];
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = *param_3;
  local_c0 = *(undefined4 *)(param_3 + 1);
  FUN_1448075d0(&local_b0);
  lVar2 = FUN_14060eaf6(&local_b0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (lVar2 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    uStack_60 = 0;
    local_5c = 1;
    local_58 = 0;
    uStack_50 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    uStack_70 = 0;
    uStack_6b = 0;
    uStack_68 = 0;
    uStack_64 = uStack_64 & 0xffffff00;
    local_b0 = *param_3;
    local_a8 = *(undefined4 *)(param_3 + 1);
    uVar1 = FUN_141295fa2(param_1);
    if ((int)local_b0 != 0) {
      local_a8 = uVar1;
    }
    if ((*(longlong *)(lVar2 + 0x4d8) == 0 & *(byte *)(lVar2 + 0x750)) == 1) {
      local_d0 = DAT_14cb88800;
      local_d8 = DAT_14cb887f8;
    }
    else {
      local_b8 = *(longlong *)(lVar2 + 0x4d8);
      FUN_1401533ba(&local_d8,&local_b8,1);
    }
    local_9c = local_d0;
    local_a4 = local_d8;
    FUN_140ffff0a(&local_98,param_4);
    FUN_1410000be(local_88,param_5);
    uStack_64 = (uint)*param_6;
    uStack_60 = (undefined4)((ulonglong)*param_6 >> 0x20);
    lVar3 = FUN_140823a6a();
    lVar2 = *(longlong *)(lVar3 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar3);
      lVar2 = *(longlong *)(lVar3 + 0x110);
    }
    local_5c = CONCAT11(*(undefined1 *)(lVar2 + 0x4c),(undefined1)local_5c);
    FUN_140ffe232(param_1,param_2,&local_b0,param_7);
    FUN_140d5a359(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14029e8dd(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141295fa2 FUN_141295fa2 body=162 status=ok
// SIG undefined FUN_141295fa2(void)

void FUN_141295fa2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = 1;
  if (*(uint *)(param_1 + 0x300) < 0x7ffffffe) {
    uVar1 = *(uint *)(param_1 + 0x300) + 1;
  }
  *(uint *)(param_1 + 0x300) = uVar1;
  if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
    lVar2 = param_1 + 0x340;
    if (*(longlong *)(param_1 + 0x348) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x348);
    }
    uVar3 = *(int *)(param_1 + 0x350) - 1;
    iVar4 = *(int *)(lVar2 + (ulonglong)(uVar1 & uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar4 * 0xc) == uVar1) {
          uVar5 = uVar1 + 1;
          bVar6 = uVar1 < 0x7ffffffe;
          uVar1 = 1;
          if (bVar6) {
            uVar1 = uVar5;
          }
          *(uint *)(param_1 + 0x300) = uVar1;
          iVar4 = *(int *)(lVar2 + (ulonglong)(uVar1 & uVar3) * 4);
        }
        else {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar4 * 0xc + 4);
        }
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 141296044 FUN_141296044 body=563 status=ok
// SIG undefined FUN_141296044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141296044(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar8 = (longlong *)*param_3;
  lVar9 = *plVar8;
  if (lVar9 == 0) {
LAB_1412961c0:
    lVar9 = 0;
LAB_1412961c3:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar5 = FUN_141296278();
    cVar4 = FUN_1448093f4(lVar9,uVar5);
    if (cVar4 == '\0') goto LAB_1412961c0;
    lVar9 = *plVar8;
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 == (longlong *)0x0) goto LAB_1412961c3;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar3 = param_3[1];
  plVar6 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b9a23e0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  *(undefined1 *)((longlong)plVar6 + 0x1c) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 2;
  plVar6[2] = (longlong)&PTR_LAB_14b42f4f0;
  plVar6[9] = *(longlong *)(lVar3 + 8);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  plVar6[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar1 = plVar6 + 2;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(byte *)(plVar6 + 0xf) = *(byte *)(plVar6 + 0xf) & 0xf0;
  plVar6[2] = (longlong)&PTR_FUN_14b9a24d0;
  plVar6[0x10] = lVar9;
  plVar6[0x11] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b9a2400;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar6[7] != 0 && (plVar6[8] != 0)) && (0 < *(int *)(plVar6[8] + 8))))) goto LAB_141296188;
  if (plVar6 == (longlong *)0x0) {
    _DAT_00000038 = 0x10;
    plVar10 = (longlong *)&DAT_00000040;
    plVar7 = _DAT_00000040;
    if (_DAT_00000040 == (longlong *)0x0) goto LAB_141296188;
LAB_1412961fa:
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *plVar10 = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_141296188;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar6[7] = (longlong)plVar1;
    if ((longlong *)plVar6[8] != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar10 = plVar6 + 8;
        plVar7 = (longlong *)plVar6[8];
        goto LAB_1412961fa;
      }
      plVar6[8] = (longlong)plVar6;
    }
  }
  LOCK();
  plVar10 = plVar6 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_141296188:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return param_2;
}



// FUNCTION 141296278 FUN_141296278 body=57 status=ok
// SIG undefined FUN_141296278(void)

void FUN_141296278(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba38e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba38e8 = FUN_140002ddd(FUN_1465ba6f3,uVar1,L"GbxStatusEffectAspectData_Slow");
  }
  return;
}



// FUNCTION 1412962b2 FUN_1412962b2 body=509 status=ok
// SIG undefined FUN_1412962b2(void)

int FUN_1412962b2(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined **local_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1446e60f4();
  }
  if (((byte *)*puVar3 == (byte *)0x0) || ((*(byte *)*puVar3 & 3) == 0)) {
    iVar6 = 0;
  }
  else {
    local_58 = &PTR_FUN_14b00be10;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    uVar4 = FUN_1412964b0();
    FUN_1446e7478(puVar3,&local_58,uVar4,1);
    lVar5 = param_3[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar1 = *param_3;
      uVar7 = 0;
      do {
        if (*(int *)(lVar1 + 0x10 + uVar7) == (int)uStack_48) {
          cVar2 = FUN_14475e0e0(*(undefined8 *)(lVar1 + 8 + uVar7));
          if ((cVar2 != '\0') && (*(int *)(lVar1 + 0x20 + uVar7) == (int)uStack_38)) {
            cVar2 = FUN_140069db1(*(undefined8 *)(lVar1 + 0x18 + uVar7));
            if (cVar2 != '\0') {
              iVar6 = (int)(uVar7 >> 3) * -0x33333333;
              if (iVar6 != -1) {
                uVar7 = uStack_38 & 0xffffffff;
                goto LAB_141296405;
              }
              break;
            }
          }
        }
        uVar7 = uVar7 + 0x28;
      } while ((longlong)(int)lVar5 * 0x28 != uVar7);
    }
    iVar6 = (int)param_3[1];
    lVar5 = (longlong)iVar6;
    *(uint *)(param_3 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
      FUN_145882ab0(param_3);
    }
    lVar1 = *param_3;
    *(undefined ***)(lVar1 + lVar5 * 0x28) = &PTR_FUN_14b00be10;
    uVar7 = 0;
    *(undefined8 *)(lVar1 + 8 + lVar5 * 0x28) = 0;
    *(longlong *)(lVar1 + 8 + lVar5 * 0x28) = local_50;
    local_50 = 0;
    *(int *)(lVar1 + 0x10 + lVar5 * 0x28) = (int)uStack_48;
    *(undefined4 *)(lVar1 + 0x14 + lVar5 * 0x28) = uStack_48._4_4_;
    uStack_48 = 0;
    *(undefined8 *)(lVar1 + 0x18 + lVar5 * 0x28) = 0;
    *(longlong *)(lVar1 + 0x18 + lVar5 * 0x28) = local_40;
    local_40 = 0;
    *(int *)(lVar1 + 0x20 + lVar5 * 0x28) = (int)uStack_38;
    *(undefined4 *)(lVar1 + 0x24 + lVar5 * 0x28) = uStack_38._4_4_;
    uStack_38 = 0;
LAB_141296405:
    local_58 = &PTR_FUN_14b00be10;
    FUN_14487da0a(local_40,uVar7);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14487da48(local_50,uStack_48 & 0xffffffff);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412964b0 FUN_1412964b0 body=57 status=ok
// SIG undefined FUN_1412964b0(void)

void FUN_1412964b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b948 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b948 = FUN_140002ddd(FUN_14185dd60,uVar1,L"MissionActionSequenceDef");
  }
  return;
}



// FUNCTION 1412964e9 FUN_1412964e9 body=312 status=ok
// SIG undefined FUN_1412964e9(void)

longlong FUN_1412964e9(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong local_28;
  int local_20;
  char local_1c;
  byte local_1b;
  byte local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_141296622(&local_30,param_1);
    plVar3 = local_30;
    lVar4 = local_28;
LAB_14129651e:
    local_28 = lVar4;
    local_30 = plVar3;
    if (local_28 != 0) {
      lVar4 = local_28;
      if (*(longlong *)(local_28 + 0x18) == param_2) goto LAB_1412965bb;
      lVar4 = *(longlong *)(local_28 + 0x28);
      plVar3 = local_30;
      local_28 = lVar4;
      if (local_30 != (longlong *)0x0) {
        do {
          lVar5 = (longlong)local_20;
          while( true ) {
            for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
              uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0xd8);
              if ((((uint)uVar1 >> 0x13 & 1) != 0) &&
                 (((-1 < (short)uVar1 || ((local_1b & 1) != 0)) ||
                  ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0)))) goto LAB_14129651e;
            }
            if ((local_1a & 1) == 0) break;
            lVar5 = lVar5 + 1;
            local_20 = (int)lVar5;
            if ((int)plVar3[0x3c] <= lVar5) break;
            lVar2 = *(longlong *)(plVar3[0x3b] + lVar5 * 0x10);
            lVar4 = 0;
            if (lVar2 != 0) {
              lVar4 = *(longlong *)(lVar2 + 0x48);
            }
          }
          if ((local_1c != '\x01') ||
             (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))(), plVar3 == (longlong *)0x0))
          goto LAB_1412965b9;
          lVar4 = plVar3[9];
          local_20 = -1;
        } while( true );
      }
      plVar3 = (longlong *)0x0;
      goto LAB_14129651e;
    }
  }
LAB_1412965b9:
  lVar4 = 0;
LAB_1412965bb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 141296622 FUN_141296622 body=628 status=ok
// SIG undefined FUN_141296622(void)

longlong * FUN_141296622(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x48);
  }
  uVar7 = (ulonglong)CONCAT31((int3)(param_3 >> 8),(byte)param_3 >> 1) & 0xffffffffffffff01;
  bVar8 = false;
  param_1[1] = lVar6;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = (byte)param_3 & 1;
  *(char *)((longlong)param_1 + 0x15) = (char)uVar7;
  if ((param_2 != 0) && ((param_3 & 4) != 0)) {
    if (DAT_14c949118 == 0) {
      local_40 = FUN_140631fbe;
      lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,CONCAT71((int7)(uVar7 >> 8),1));
      DAT_14c949118 = lVar6;
      FUN_1446f470e(local_38,L"Class",1);
      local_58 = &LAB_146891e90;
      local_60 = &LAB_146273097;
      local_70 = L"Engine";
      local_68 = 199;
      local_78 = 0x20;
      local_80 = 0x10000000;
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
      local_50 = &local_40;
      FUN_14574b4b2(lVar6);
      DAT_14c949118 = lVar6;
      uVar3 = FUN_144a7a812();
      lVar6 = DAT_14c949118;
      uVar4 = FUN_1449e2fb2();
      local_88 = L"Class";
      FUN_14574b446(uVar4,lVar6,uVar3,L"/Script/CoreUObject");
    }
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) {
      bVar8 = false;
    }
    else {
      bVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30;
    }
  }
  *(bool *)((longlong)param_1 + 0x16) = bVar8;
  plVar2 = (longlong *)*param_1;
  lVar6 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_1412966c3:
    while( true ) {
      for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x28)) {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0xd8);
        if ((((uint)uVar3 >> 0x13 & 1) != 0) &&
           (((-1 < (short)uVar3 || (*(char *)((longlong)param_1 + 0x15) != '\0')) ||
            ((*(byte *)(lVar6 + 0x3b) & 0x20) == 0)))) goto LAB_1412966ec;
      }
      if (*(char *)((longlong)param_1 + 0x16) != '\x01') break;
      lVar6 = (longlong)(int)param_1[2] + 1;
      iVar5 = (int)lVar6;
      *(int *)(param_1 + 2) = iVar5;
      if ((int)plVar2[0x3c] <= iVar5) break;
      lVar1 = *(longlong *)(plVar2[0x3b] + lVar6 * 0x10);
      lVar6 = 0;
      if (lVar1 != 0) {
        lVar6 = *(longlong *)(lVar1 + 0x48);
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_141296753;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
    if (plVar2 != (longlong *)0x0) {
      lVar6 = plVar2[9];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      goto LAB_1412966c3;
    }
    plVar2 = (longlong *)0x0;
LAB_141296753:
    lVar6 = 0;
  }
LAB_1412966ec:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar6;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141296898 FUN_141296898 body=31 status=ok
// SIG undefined FUN_141296898(void)

undefined8 FUN_141296898(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412968b8 FUN_1412968b8 body=150 status=ok
// SIG undefined FUN_1412968b8(void)

undefined8 FUN_1412968b8(void)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb547f0) {
    FUN_144b3d300(&DAT_14cb547f0);
    if (DAT_14cb547f0 == -1) {
      atexit(FUN_143c3254a);
      _Init_thread_footer(&DAT_14cb547f0);
    }
  }
  FUN_14129694f(&DAT_14cb547f8,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14cb547e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129694f FUN_14129694f body=118 status=ok
// SIG undefined FUN_14129694f(void)

void FUN_14129694f(LPINIT_ONCE param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  BVar1 = InitOnceBeginInitialize(param_1,0,&local_1c,(LPVOID *)0x0);
  if (BVar1 == 0) {
LAB_1412969c0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_1c != 0) {
    FUN_145883076(param_2);
    BVar1 = InitOnceComplete(param_1,0,(LPVOID)0x0);
    if (BVar1 == 0) {
      FUN_144d8e1c8();
      goto LAB_1412969c0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412969d0 FUN_1412969d0 body=287 status=ok
// SIG undefined FUN_1412969d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1412969d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((DAT_14c7839c0 & 1) == 0) {
    DAT_14c7839c0 = DAT_14c7839c0 | 1;
    _DAT_14c783990 = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
    atexit((_func_5014 *)&LAB_149926d20);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
  iVar2 = DAT_14c781d48;
  iVar1 = DAT_14c781cd0;
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  iVar3 = FUN_1424ff850(0,0);
  if (iVar3 != 0) goto LAB_141296a8b;
  if (DAT_14c781cd8 != 1) {
    if (DAT_14c781d00 == (code *)0x0) {
      iVar3 = -1;
      goto LAB_141296a8b;
    }
    iVar3 = (*DAT_14c781d00)();
    if (iVar3 != 0) goto LAB_141296a8b;
    DAT_14c781cd8 = 1;
  }
  DAT_14c781d48 = iVar2 + 1;
  DAT_14c781cd0 = iVar1 + 1;
LAB_141296a8b:
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  if ((DAT_14c7839c0 & 1) == 0) {
    DAT_14c7839c0 = DAT_14c7839c0 | 1;
    _DAT_14c783990 = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
    atexit((_func_5014 *)&LAB_149926d20);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
  return iVar3;
}



// FUNCTION 141296af0 FUN_141296af0 body=66 status=ok
// SIG undefined FUN_141296af0(void)

void FUN_141296af0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x328);
  *(uint *)(param_1 + 0x328) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x32c) < iVar1 + 1U) {
    FUN_141296b32((longlong *)(param_1 + 800),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 141296b32 FUN_141296b32 body=527 status=ok
// SIG undefined FUN_141296b32(void)

void FUN_141296b32(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  int *piVar9;
  ulonglong _Size;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar7 = 4;
    if (4 < uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,8);
  }
  _Src = (void *)*param_1;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_141296c72:
      piVar9 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar9);
        }
        else {
          FUN_144705e74(piVar9);
        }
      }
    }
LAB_141296cbc:
    *param_1 = _Dst;
    return;
  }
  _Size = (ulonglong)uVar8 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_141296bb6;
LAB_141296bab:
  FUN_144769a66(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_141296bb6:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (uVar8 < 0x1ff5) goto code_r0x000141296be2;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar3 + 0x10) = puVar3 + (ulonglong)uVar8 * 2 + 0x18;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_141296c38:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_141296cbc;
  uVar2 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar2 != 0) {
    if (uVar2 < _Size) {
      _Size = uVar2;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_141296c72;
code_r0x000141296be2:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar7 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar7 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_141296c38;
    }
  }
  goto LAB_141296bab;
}



// FUNCTION 141296d42 FUN_141296d42 body=177 status=ok
// SIG undefined FUN_141296d42(void)

void FUN_141296d42(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0x108) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x50));
    return;
  }
  return;
}



// FUNCTION 141296df4 FUN_141296df4 body=187 status=ok
// SIG undefined FUN_141296df4(void)

void FUN_141296df4(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141296ec2();
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar2 = FUN_140b4cdf2(param_2);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x110) + 0x10))(lVar2 + 0x110);
      if (lVar2 != 0) {
        FUN_1458831d6(lVar2,local_30,lVar2,param_1);
        if (local_28 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_28 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar1 = (int *)((longlong)local_28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141296ec2 FUN_141296ec2 body=933 status=ok
// SIG undefined FUN_141296ec2(void)

void FUN_141296ec2(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **ppuVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) goto LAB_141297104;
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 == 0) {
    uVar7 = FUN_14043db3a();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x38) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_141297104;
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar8 = FUN_144aff482(uVar7,plVar1);
    }
    *(longlong *)(param_1 + 0x40) = lVar8;
    bVar11 = lVar8 == 0;
  }
  else {
    bVar11 = false;
  }
  if (((param_3 & 1) == 0) || (bVar11)) goto LAB_141297104;
  FUN_14026e798(&local_50,param_2);
  if (local_50 == 0) {
    lVar8 = FUN_14102013a();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
         ) == lVar8 + 0x30)) {
      uVar7 = FUN_1447210f0(param_2);
      local_78 = *(undefined8 *)(param_1 + 0x48);
      local_70 = *(undefined4 *)(param_1 + 0x50);
      local_68 = 0;
      local_88 = 0;
      FUN_14078bff4(&local_60,&local_78,param_2 + 0x520,uVar7);
      plVar3 = local_48;
      plVar4 = local_58;
      local_50 = local_60;
      local_60 = 0;
      if (local_58 == local_48) {
LAB_141297228:
        plVar4 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_58 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_58)(local_58);
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
      else {
        local_58 = (longlong *)0x0;
        local_48 = plVar4;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          goto LAB_141297228;
        }
      }
      FUN_1488c71a6(param_2,&local_50,1);
    }
  }
  lVar8 = FUN_140b4cdf2(param_2);
  if (lVar8 == 0) {
    lVar8 = FUN_141284384(param_2,plVar1,0,0);
  }
  if (*(longlong *)(lVar8 + 0x138) == 0) {
    uVar7 = FUN_14043db3a();
    uVar7 = FUN_14477b664(uVar7);
    *(undefined8 *)(lVar8 + 0x138) = uVar7;
  }
  lVar9 = *(longlong *)(param_1 + 0x38);
  if (lVar9 == 0) {
    lVar9 = FUN_14043db3a();
  }
  lVar9 = FUN_14477b664(lVar9);
  if ((lVar9 != 0) && (plVar1 = *(longlong **)(lVar9 + 0xb8), plVar1 != (longlong *)0x0)) {
    lVar9 = *plVar1;
    pcVar5 = *(code **)(lVar9 + 0x108);
    if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
      cVar6 = (*pcVar5)(plVar1);
      if (cVar6 == '\0') goto LAB_141297078;
      lVar9 = *plVar1;
    }
    pcVar5 = *(code **)(lVar9 + 0x110);
    if (pcVar5 == (code *)&LAB_144783426) {
      ppuVar10 = &PTR_PTR_14c763408;
    }
    else if (pcVar5 == (code *)&LAB_144783432) {
      ppuVar10 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar10 = (undefined **)(*pcVar5)(plVar1);
    }
    FUN_144aff48c(ppuVar10);
  }
LAB_141297078:
  if ((*(longlong *)(lVar8 + 0x138) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x138) + 0xb8), plVar1 != (longlong *)0x0)) {
    lVar8 = *plVar1;
    pcVar5 = *(code **)(lVar8 + 0x108);
    if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
      cVar6 = (*pcVar5)(plVar1);
      if (cVar6 == '\0') goto LAB_1412970dd;
      lVar8 = *plVar1;
    }
    pcVar5 = *(code **)(lVar8 + 0x110);
    if (pcVar5 == (code *)&LAB_144783426) {
      ppuVar10 = &PTR_PTR_14c763408;
    }
    else if (pcVar5 == (code *)&LAB_144783432) {
      ppuVar10 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar10 = (undefined **)(*pcVar5)(plVar1);
    }
    FUN_144aff48c(ppuVar10);
  }
LAB_1412970dd:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_141297104:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129728c FUN_14129728c body=138 status=ok
// SIG undefined FUN_14129728c(void)

void FUN_14129728c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0x550) & 2) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x54c);
LAB_1412972ed:
    *(undefined4 *)(param_1 + 0x39c) = uVar4;
    return;
  }
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10c8) + 0x38))(param_1 + 0x10c8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140356032();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = (undefined4)plVar1[0x4a];
      goto LAB_1412972ed;
    }
  }
  FUN_14588354c(param_1);
  return;
}



// FUNCTION 141297316 FUN_141297316 body=4 status=ok
// SIG undefined FUN_141297316(void)

void FUN_141297316(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}



// FUNCTION 14129731a FUN_14129731a body=1522 status=ok
// SIG undefined FUN_14129731a(void)

void FUN_14129731a(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined1 local_a8 [24];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140f05dd8();
  FUN_14129796c(param_1);
  lVar15 = FUN_1447210f0(param_1);
  if (((lVar15 != 0) && (lVar15 = FUN_1400f6e0c(lVar15), lVar15 != 0)) &&
     (*(longlong *)(lVar15 + 200) != 0)) {
    if (*(char *)(param_1 + 0x2668) == '\x01') {
      FUN_14129790e(*(longlong *)(lVar15 + 200),param_1);
    }
    if ((longlong)*(int *)(param_1 + 0x2608) != 0) {
      plVar22 = *(longlong **)(param_1 + 0x2600);
      local_b0 = plVar22 + *(int *)(param_1 + 0x2608);
      plVar1 = (longlong *)(param_1 + 0x2680);
      local_c0 = param_1 + 0x2690;
      do {
        if ((*plVar22 != 0) && (lVar15 = *(longlong *)(*plVar22 + 0x3a8), lVar15 != 0)) {
          FUN_14487e4ca(lVar15,local_a8);
          lVar15 = *plVar22;
          if ((lVar15 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar15 != 0) goto LAB_14129741d;
            uVar14 = 0;
            uVar26 = 0;
          }
          else {
            FUN_1456cec3c(lVar15);
LAB_14129741d:
            uVar14 = *(uint *)(lVar15 + 0xc);
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            uVar26 = *(uint *)(lVar15 + 0x10);
            if (*(uint *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar24 = DAT_14c964868 + 1;
              UNLOCK();
              uVar19 = DAT_14c964868 + 1;
              bVar27 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar24;
              if (bVar27) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar19);
              }
              LOCK();
              uVar26 = *(uint *)(lVar15 + 0x10);
              bVar27 = uVar26 == 0;
              if (bVar27) {
                *(uint *)(lVar15 + 0x10) = uVar19;
                uVar26 = 0;
              }
              UNLOCK();
              if (bVar27) {
                uVar26 = uVar19;
              }
            }
          }
          uVar25 = CONCAT44(uVar26,uVar14);
          uVar26 = uVar26 ^ uVar14;
          iVar24 = *(int *)(param_1 + 0x2688);
          if (iVar24 != *(int *)(param_1 + 0x26b4)) {
            lVar15 = param_1 + 0x26b8;
            if (*(longlong *)(param_1 + 0x26c0) != 0) {
              lVar15 = *(longlong *)(param_1 + 0x26c0);
            }
            iVar24 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0x26c8) - 1U & uVar26) * 4);
            if (iVar24 != -1) {
              lVar15 = *plVar1;
              do {
                lVar16 = (longlong)iVar24;
                local_68 = *(undefined8 *)(lVar15 + lVar16 * 0x28);
                local_70 = uVar25;
                cVar12 = FUN_148cf94e0(&local_68,&local_70);
                lVar15 = *plVar1;
                if (cVar12 != '\0') {
                  if (lVar15 + lVar16 * 0x28 != 0) {
                    lVar15 = lVar15 + lVar16 * 0x28;
                    goto LAB_1412975bc;
                  }
                  break;
                }
                iVar24 = *(int *)(lVar15 + 0x20 + lVar16 * 0x28);
              } while (iVar24 != -1);
            }
            iVar24 = *(int *)(param_1 + 0x26b4);
          }
          if (iVar24 == 0) {
            iVar23 = *(int *)(param_1 + 0x2688);
            *(int *)(param_1 + 0x2688) = iVar23 + 1;
            if (*(int *)(param_1 + 0x268c) == iVar23) {
              FUN_140549c28(plVar1,iVar23);
            }
            iVar24 = *(int *)(param_1 + 0x26a8);
            if (iVar24 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = iVar24 + 0x1e;
              if (-1 < iVar24 + -1) {
                iVar13 = iVar24 + -1;
              }
              iVar13 = iVar13 >> 5;
            }
            iVar18 = iVar24 + 1;
            iVar21 = iVar24 + 0x1f;
            if (-1 < iVar24) {
              iVar21 = iVar24;
            }
            if (iVar21 >> 5 == iVar13) {
              *(int *)(param_1 + 0x26a8) = iVar18;
            }
            else {
              if (*(int *)(param_1 + 0x26ac) <= iVar24) {
                if (iVar24 + 0x20U < 0xa0) {
                  iVar18 = 0x80;
                  iVar13 = iVar24;
                }
                else {
                  uVar14 = iVar24 + 0x20U >> 5;
                  local_b8 = (ulonglong)uVar14;
                  if (*(int *)(param_1 + 0x26ac) + 0x1fU < 0xa0) {
                    uVar19 = 4;
                    if (4 < uVar14) {
                      uVar19 = uVar14;
                    }
                  }
                  else {
                    uVar19 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
                  }
                  uVar20 = FUN_144a3809e(uVar19 << 2,0);
                  iVar13 = (int)(uVar20 >> 2);
                  iVar18 = -0x20;
                  if ((int)local_b8 <= iVar13) {
                    iVar18 = iVar13 << 5;
                  }
                  iVar13 = *(int *)(param_1 + 0x26a8);
                }
                *(int *)(param_1 + 0x26ac) = iVar18;
                FUN_1446efbd8(local_c0,iVar13);
                iVar18 = *(int *)(param_1 + 0x26a8) + 1;
              }
              iVar13 = iVar18 + 0x1f;
              if (-1 < iVar18) {
                iVar13 = iVar18;
              }
              *(int *)(param_1 + 0x26a8) = iVar18;
              if (iVar18 % 0x20 != 0) {
                lVar15 = *(longlong *)(param_1 + 0x26a0);
                if (*(longlong *)(param_1 + 0x26a0) == 0) {
                  lVar15 = local_c0;
                }
                bVar17 = -(char)(iVar18 % 0x20);
                *(uint *)(lVar15 + (longlong)(iVar13 >> 5) * 4) =
                     (uint)(*(int *)(lVar15 + (longlong)(iVar13 >> 5) * 4) << (bVar17 & 0x1f)) >>
                     (bVar17 & 0x1f);
              }
            }
            lVar15 = (longlong)iVar23;
            lVar16 = *(longlong *)(param_1 + 0x26a0);
            if (*(longlong *)(param_1 + 0x26a0) == 0) {
              lVar16 = local_c0;
            }
            bVar17 = (byte)iVar24 & 0x1f;
            puVar2 = (uint *)(lVar16 + (longlong)(iVar21 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
          }
          else {
            iVar23 = *(int *)(param_1 + 0x26b0);
            lVar15 = (longlong)iVar23;
            iVar13 = *(int *)(*(longlong *)(param_1 + 0x2680) + 4 + lVar15 * 0x28);
            *(int *)(param_1 + 0x26b0) = iVar13;
            *(int *)(param_1 + 0x26b4) = iVar24 + -1;
            if (iVar24 + -1 != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x2680) + (longlong)iVar13 * 0x28) =
                   0xffffffff;
            }
          }
          lVar16 = *(longlong *)(param_1 + 0x26a0);
          if (*(longlong *)(param_1 + 0x26a0) == 0) {
            lVar16 = local_c0;
          }
          iVar24 = iVar23 + 0x1f;
          if (-1 < iVar23) {
            iVar24 = iVar23;
          }
          puVar2 = (uint *)(lVar16 + (longlong)(iVar24 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar23 & 0x1f);
          iVar24 = 1;
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x2680) + lVar15 * 0x28);
          *puVar3 = uVar25;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          *(undefined4 *)(puVar3 + 4) = 0xffffffff;
          if (*(int *)(param_1 + 0x2688) - *(int *)(param_1 + 0x26b4) == 1) {
            uVar14 = 1;
LAB_141297584:
            if (((int)uVar14 < 1) || (iVar24 <= *(int *)(param_1 + 0x26c8))) {
              uVar26 = *(int *)(param_1 + 0x26c8) - 1U & uVar26;
              *(uint *)((longlong)puVar3 + 0x24) = uVar26;
              lVar15 = *(longlong *)(param_1 + 0x26c0);
              if (*(longlong *)(param_1 + 0x26c0) == 0) {
                lVar15 = param_1 + 0x26b8;
              }
              *(undefined4 *)(puVar3 + 4) =
                   *(undefined4 *)
                    (lVar15 + ((longlong)*(int *)(param_1 + 0x26c8) - 1U & (longlong)(int)uVar26) *
                              4);
              lVar15 = *(longlong *)(param_1 + 0x26c0);
              if (*(longlong *)(param_1 + 0x26c0) == 0) {
                lVar15 = param_1 + 0x26b8;
              }
              *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x26c8) - 1U & (longlong)(int)uVar26)
                                * 4) = iVar23;
            }
            else {
              *(int *)(param_1 + 0x26c8) = iVar24;
              FUN_141297a5e(plVar1);
            }
          }
          else {
            local_68 = uVar25;
            iVar13 = FUN_148cf9516(plVar1,uVar26);
            if (iVar13 == -1) {
              uVar14 = *(int *)(param_1 + 0x2688) - *(int *)(param_1 + 0x26b4);
              if (3 < uVar14) {
                uVar20 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
                lVar15 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                iVar24 = 1 << ((byte)lVar15 & 0x1f);
              }
              goto LAB_141297584;
            }
            lVar15 = *plVar1;
            uVar5 = *(undefined4 *)puVar3;
            uVar6 = *(undefined4 *)((longlong)puVar3 + 4);
            uVar7 = *(undefined4 *)(puVar3 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar3 + 0xc);
            uVar9 = *(undefined4 *)((longlong)puVar3 + 0x14);
            uVar10 = *(undefined4 *)(puVar3 + 3);
            uVar11 = *(undefined4 *)((longlong)puVar3 + 0x1c);
            puVar4 = (undefined4 *)(lVar15 + 0x10 + (longlong)iVar13 * 0x28);
            *puVar4 = *(undefined4 *)(puVar3 + 2);
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            puVar4 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x28);
            *puVar4 = uVar5;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            FUN_148cf95cc(plVar1,iVar23);
          }
          lVar15 = *plVar1 + (longlong)iVar23 * 0x28;
LAB_1412975bc:
          *(undefined8 *)(lVar15 + 0x18) = local_80;
          *(undefined4 *)(lVar15 + 8) = local_90;
          *(undefined4 *)(lVar15 + 0xc) = uStack_8c;
          *(undefined4 *)(lVar15 + 0x10) = uStack_88;
          *(undefined4 *)(lVar15 + 0x14) = uStack_84;
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 != local_b0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129790e FUN_14129790e body=93 status=ok
// SIG undefined FUN_14129790e(void)

void FUN_14129790e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == param_2) {
        return;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_1458836c2((longlong *)(param_1 + 0x38),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  *(longlong *)(lVar2 + lVar4 * 8) = param_2;
  return;
}



// FUNCTION 14129796c FUN_14129796c body=241 status=ok
// SIG undefined FUN_14129796c(void)

void FUN_14129796c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((((*(longlong *)(param_1 + 0x4f0) != 0) && (*(int *)(param_1 + 0x4ec) != 0)) &&
        (uVar1 = *(uint *)(param_1 + 0x4e8), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
      ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x4ec) &&
       (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 && (DAT_14cbc46c8 != 0)))))) &&
     ((longlong)*(int *)(param_1 + 0x4e0) != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x68 + lVar3) == DAT_14cbc46c8) {
        iVar2 = (int)(lVar3 >> 3) * -0xf0f0f0f;
        if (iVar2 == -1) {
          return;
        }
        lVar3 = *(longlong *)(param_1 + 0x4d8) + (longlong)iVar2 * 0x88;
        if (lVar3 == 0) {
          return;
        }
        *(bool *)(param_1 + 0x2668) = 0 < *(int *)(lVar3 + 0x80);
        *(undefined1 *)(param_1 + 0x2669) = 1;
        return;
      }
      lVar3 = lVar3 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x4e0) * 0x88 != lVar3);
  }
  return;
}



// FUNCTION 141297a5e FUN_141297a5e body=650 status=ok
// SIG undefined FUN_141297a5e(void)

void FUN_141297a5e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_141297ac1;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_141297ac1:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x28);
      uVar16 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x24 + lVar13 * 0x28) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x20 + lVar13 * 0x28) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 141297ce8 FUN_141297ce8 body=110 status=ok
// SIG undefined FUN_141297ce8(void)

undefined8 FUN_141297ce8(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x130))(plVar1,local_40);
    uVar2 = FUN_141297d58(local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141297d58 FUN_141297d58 body=386 status=ok
// SIG undefined FUN_141297d58(void)

longlong FUN_141297d58(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_14045ceca();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 141297eda FUN_141297eda body=326 status=ok
// SIG undefined FUN_141297eda(void)

longlong * FUN_141297eda(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1407fec00();
  *param_1 = (longlong)&PTR_FUN_14b41e250;
  plVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) < 0) {
    FUN_1402191ca(plVar1,0);
  }
  lVar5 = FUN_14072ff11();
  if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x48), 1 < iVar2)) {
    iVar7 = 0;
    do {
      FUN_1401cfb1c(lVar5,&local_60,iVar7);
      puVar6 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar6 = local_60;
      }
      FUN_1446f470e(&local_50,puVar6,1);
      iVar3 = (int)param_1[0xb];
      *(uint *)(param_1 + 0xb) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5c) < iVar3 + 1U) {
        FUN_1446f84a2(plVar1,iVar3);
      }
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 8) = 0;
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 8) = local_50;
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 + -1 != iVar7);
  }
  FUN_1407fecba(param_1 + 0xc,(int)param_1[0xb],1);
  param_1[7] = 0;
  (**(code **)(*param_1 + 0xa8))(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141298022 FUN_141298022 body=20 status=ok
// SIG undefined FUN_141298022(void)

void FUN_141298022(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x44) = DAT_14cb88a18;
  return;
}



// FUNCTION 141298036 FUN_141298036 body=49 status=ok
// SIG undefined FUN_141298036(void)

longlong FUN_141298036(void)

{
  if (DAT_14c997d98 == 0) {
    FUN_140f50038(&DAT_14c997d98,&PTR_s__Script_NetCore_149f76130);
  }
  return DAT_14c997d98;
}



// FUNCTION 141298067 FUN_141298067 body=49 status=ok
// SIG undefined FUN_141298067(void)

longlong FUN_141298067(void)

{
  if (DAT_14cabbc38 == 0) {
    FUN_140f50038(&DAT_14cabbc38,&PTR_s__Script_MovieSceneCapture_14a57fe86_2_14a57fe68);
  }
  return DAT_14cabbc38;
}



// FUNCTION 141298098 FUN_141298098 body=49 status=ok
// SIG undefined FUN_141298098(void)

longlong FUN_141298098(void)

{
  if (DAT_14cb2d4d0 == 0) {
    FUN_140f50038(&DAT_14cb2d4d0,&PTR_s__Script_NiagaraShader_14ad45638);
  }
  return DAT_14cb2d4d0;
}



// FUNCTION 1412980ca FUN_1412980ca body=805 status=ok
// SIG undefined FUN_1412980ca(void)

undefined1 *
FUN_1412980ca(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             char param_5,float param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined8 local_80;
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
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 == '\0') goto LAB_1412981f1;
  lVar2 = FUN_1447262c2(param_4);
  if (lVar2 == 0) {
LAB_14129813a:
    lVar2 = FUN_140cd1640(param_4);
    if ((lVar2 == 0) || (lVar2 = FUN_14494e0ba(lVar2), lVar2 == 0)) {
LAB_141298398:
      lVar2 = 0;
    }
    else {
      if (DAT_14cbadd90 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1459f2e4c;
        local_58 = &LAB_148c39de3;
        local_60 = &LAB_1457a9eb2;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = CONCAT44(local_80._4_4_,0x10);
        local_88 = 2.21966e-41;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
      goto LAB_141298398;
    }
    lVar3 = FUN_140cd1532(param_4);
    if (lVar3 == 0) {
      if (lVar2 == 0) goto LAB_1412981f1;
    }
    else {
      lVar2 = FUN_1401b2ade(lVar3);
      if (lVar2 == 0) goto LAB_1412981f1;
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_1412981f1;
    }
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = CONCAT44(local_80._4_4_,0x10);
      local_88 = 2.21966e-41;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_14129813a;
  }
  if (*(char *)(lVar2 + 0x178) == '\x03') {
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      if (param_5 == '\x04') {
        FUN_148dba3a4(lVar2,(char)param_1[1],(int)param_6);
      }
      else if ((byte)(param_5 - 1U) < 2) {
        FUN_140a42f6a(lVar2,(char)param_1[1],(int)param_6,*(undefined1 *)((longlong)param_1 + 10));
      }
    }
    else if (*(char *)((longlong)param_1 + 9) == '\x01') {
      local_80 = param_7;
      local_88 = param_6;
      FUN_1412983f4(lVar2,param_2,(char)param_1[1]);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
LAB_1412981f1:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412983f4 FUN_1412983f4 body=153 status=ok
// SIG undefined FUN_1412983f4(void)

undefined1 *
FUN_1412983f4(longlong *param_1,undefined1 *param_2,byte param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  char cVar2;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  if ((char)param_1[0x2f] == '\x03') {
    uVar1 = (ulonglong)param_3;
    FUN_140c416e2(param_2,(longlong)param_1 + uVar1 * 0x40 + 0x2604,param_4,param_5,param_6);
    FUN_1401861f4(param_1 + uVar1 * 8 + 0x4bd,(int)param_1[uVar1 * 8 + 0x4c1]);
    cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar2 == '\0') {
      *(short *)((longlong)param_1 + (ulonglong)param_3 * 8 + 0x2752) =
           (short)param_1[uVar1 * 8 + 0x4c1];
    }
  }
  return param_2;
}



// FUNCTION 14129848d FUN_14129848d body=49 status=ok
// SIG undefined FUN_14129848d(void)

longlong FUN_14129848d(void)

{
  if (DAT_14cbf4fd8 == 0) {
    FUN_140f50038(&DAT_14cbf4fd8,&PTR_s__Script_Qos_14ba4d210);
  }
  return DAT_14cbf4fd8;
}



// FUNCTION 1412984be FUN_1412984be body=49 status=ok
// SIG undefined FUN_1412984be(void)

longlong FUN_1412984be(void)

{
  if (DAT_14cbf6de8 == 0) {
    FUN_140f50038(&DAT_14cbf6de8,&PTR_s__Script_GeometryCache_14ba83038);
  }
  return DAT_14cbf6de8;
}



// FUNCTION 1412984f0 FUN_1412984f0 body=568 status=ok
// SIG undefined FUN_1412984f0(void)

undefined8 * FUN_1412984f0(undefined8 *param_1,basic_istream<char,std::char_traits<char>_> *param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  int aiStack_78 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x10,0x10);
  plVar6[1] = 0;
  param_1[3] = plVar6;
  *plVar6 = (longlong)(param_1 + 3);
  uVar7 = FUN_144a7d36f(0x800);
  param_1[8] = uVar7;
  param_1[9] = 0;
  param_1[10] = 0;
  bVar3 = std::ios_base::fail((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  if (!bVar3) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      iVar4 = std::basic_istream<char,std::char_traits<char>_>::get(param_2);
      if (-1 < (int)uVar10) {
        aiStack_78[uVar10] = iVar4;
      }
      if (iVar4 < 0xbf) {
        if (iVar4 == -1) {
          lVar8 = 7;
        }
        else if (iVar4 == 0) {
          lVar8 = 0;
        }
        else {
          if (iVar4 != 0xbb) goto LAB_1412985d7;
          lVar8 = 1;
        }
      }
      else if (iVar4 < 0xfe) {
        if (iVar4 == 0xbf) {
          lVar8 = 2;
        }
        else if (iVar4 == 0xef) {
          lVar8 = 3;
        }
        else {
LAB_1412985d7:
          lVar8 = 7 - (ulonglong)(iVar4 - 1U < 0xfe);
        }
      }
      else if (iVar4 == 0xfe) {
        lVar8 = 4;
      }
      else {
        if (iVar4 != 0xff) goto LAB_1412985d7;
        lVar8 = 5;
      }
      lVar1 = lVar9 * 8;
      iVar4 = (&DAT_14a179b10)[lVar9 * 8 + lVar8];
      lVar9 = (longlong)iVar4;
      cVar2 = (&DAT_14a179d50)[lVar8 + lVar1];
      if ('\0' < cVar2) {
        std::basic_ios<char,std::char_traits<char>_>::clear
                  ((basic_ios<char,std::char_traits<char>_> *)
                   (param_2 + *(int *)(*(longlong *)param_2 + 4)),0,false);
        iVar11 = cVar2 + 1;
        do {
          if (0 < (int)(uVar10 + 1)) {
            if (aiStack_78[uVar10] != -1) {
              std::basic_istream<char,std::char_traits<char>_>::putback
                        (param_2,(char)aiStack_78[uVar10]);
            }
          }
          iVar11 = iVar11 + -1;
          uVar10 = uVar10 - 1;
        } while (1 < iVar11);
      }
      uVar10 = uVar10 + 1;
    } while ((&DAT_14a179af0)[lVar9] != '\x01');
    uVar10 = iVar4 - 4;
    uVar5 = 0;
    if (uVar10 < 8) {
      uVar5 = *(undefined4 *)(&DAT_14a17a0b4 + (ulonglong)uVar10 * 4);
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    if (param_1[7] == 0) {
      FUN_1448d56de(param_1,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129872a FUN_14129872a body=98 status=ok
// SIG undefined FUN_14129872a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14129872a(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (((char)param_1[1] != '\0') && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0))
  {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00014129877e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14129878c FUN_14129878c body=153 status=ok
// SIG undefined FUN_14129878c(void)

longlong FUN_14129878c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_140279a58();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x40;
    if (lVar3 + lVar2 != 0) goto LAB_1412987ca;
  }
  local_48 = 0;
  local_40 = param_3;
  local_38 = param_4;
  FUN_141298826(param_1,&local_2c,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_2c << 6;
LAB_1412987ca:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141298826 FUN_141298826 body=448 status=ok
// SIG undefined FUN_141298826(void)

undefined4 *
FUN_141298826(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ddef16(param_1,local_58);
  puVar1 = (undefined8 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  local_50[2] = 0;
  *local_50 = 0;
  local_50[1] = 0;
  *local_50 = *puVar1;
  uVar5 = FUN_14477b664(puVar1[1]);
  uVar5 = FUN_14477b664(uVar5);
  local_50[1] = uVar5;
  local_50[2] = puVar1[2];
  local_50[3] = 0;
  iVar7 = *(int *)(puVar1 + 4);
  _Src = (void *)puVar1[3];
  *(int *)(local_50 + 4) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)local_50 + 0x24) = 0;
  }
  else {
    local_5c = param_3;
    FUN_1446dd670(local_50 + 3,iVar7,0);
    param_3 = local_5c;
    memcpy((void *)local_50[3],_Src,(longlong)iVar7 * 2);
  }
  local_50[5] = puVar1[5];
  *(undefined4 *)(local_50 + 6) = *puVar2;
  *(undefined4 *)(local_50 + 7) = 0xffffffff;
  local_68 = param_5;
  cVar3 = FUN_140ddee74(param_1,param_3,local_50);
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x3c) = param_3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 7) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
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



// FUNCTION 1412989e8 FUN_1412989e8 body=565 status=ok
// SIG undefined FUN_1412989e8(void)

void FUN_1412989e8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
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
  cVar5 = (**(code **)(*param_1 + 0x10))();
  if (cVar5 == '\0') goto LAB_141298aa3;
  param_1 = param_1 + -6;
  lVar7 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar7 == 0) goto LAB_141298aa3;
  if (DAT_14cba8288 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141864c34;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1464cee30;
    local_68 = &LAB_148bfac22;
    local_70 = &LAB_140f21842;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_141298aa3;
  if (*(int *)(lVar7 + 0x6190) == 0) {
    FUN_1449027d0(param_1,&local_40);
    pcVar4 = *(char **)(local_40 + 0x220);
    AcquireSRWLockExclusive((PSRWLOCK)(pcVar4 + 0x1b8));
    *(int *)(pcVar4 + 0x1b0) = *(int *)(pcVar4 + 0x1b0) + 1;
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
    if (*pcVar4 == '\0') {
      if (*(int *)(pcVar4 + 4) == 0) {
        iVar6 = 1;
        goto LAB_141298bcf;
      }
    }
    else {
      iVar6 = *(int *)(pcVar4 + 4) + 1;
LAB_141298bcf:
      *pcVar4 = '\0';
      *(int *)(pcVar4 + 4) = iVar6;
    }
    if (pcVar4[0x28] == '\0') {
      iVar6 = *(int *)(pcVar4 + 0x2c) + 1;
LAB_141298c07:
      pcVar4[0x28] = '\x01';
      *(int *)(pcVar4 + 0x2c) = iVar6;
    }
    else if (*(int *)(pcVar4 + 0x2c) == 0) {
      iVar6 = 1;
      goto LAB_141298c07;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(pcVar4 + 0x1b8));
  }
  else if (0 < *(int *)(lVar7 + 0x6190)) {
    lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x6188) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
      FUN_1456cec3c(lVar3);
    }
    else if (lVar3 == 0) goto LAB_141298a98;
    FUN_14144956a(param_1,lVar3);
  }
LAB_141298a98:
  FUN_141298d50(param_1,lVar7);
LAB_141298aa3:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141298c1e FUN_141298c1e body=304 status=ok
// SIG undefined FUN_141298c1e(void)

undefined8 FUN_141298c1e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined7 uVar4;
  byte bVar5;
  longlong lVar6;
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
  undefined8 uVar3;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar3 = 0;
    goto LAB_141298c56;
  }
  lVar6 = param_1 + -0x30;
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x2b8))(lVar6);
  if (lVar2 == 0) {
LAB_141298c52:
    bVar5 = (byte)lVar6;
    bVar1 = 0;
    uVar4 = 0;
  }
  else {
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
    lVar6 = *(longlong *)(lVar2 + 0x10);
    if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) goto LAB_141298c52;
    lVar6 = *(longlong *)(lVar6 + 0x30);
    if (*(longlong *)(lVar6 + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)
    goto LAB_141298c52;
    bVar5 = *(byte *)(lVar2 + 0x78fc);
    uVar4 = (undefined7)((ulonglong)(DAT_14cba8288 + 0x30) >> 8);
    bVar1 = 1;
  }
  uVar3 = CONCAT71(uVar4,bVar1 & bVar5);
LAB_141298c56:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141298d50 FUN_141298d50 body=1350 status=ok
// SIG undefined FUN_141298d50(void)

void FUN_141298d50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  undefined1 uVar14;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  code **local_1e0;
  undefined1 *local_1d8;
  code *local_1d0;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  PSRWLOCK local_1a8;
  PSRWLOCK local_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_150;
  undefined1 local_148 [108];
  undefined8 local_dc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_2 != 0) {
    FUN_1449027d0(param_1,&local_180);
    lVar3 = *(longlong *)(local_180 + 0x220);
    local_1a0 = (PSRWLOCK)(lVar3 + 0x1b8);
    AcquireSRWLockExclusive(local_1a0);
    *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
    plVar4 = (longlong *)CONCAT44(uStack_174,local_178);
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
    FUN_1449027d0(param_1,&local_180);
    lVar11 = *(longlong *)(local_180 + 0x230);
    local_1a8 = (PSRWLOCK)(lVar11 + 0x20);
    AcquireSRWLockExclusive(local_1a8);
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
    plVar4 = (longlong *)CONCAT44(uStack_174,local_178);
    local_1c0 = lVar11;
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
    iVar6 = FUN_1412993ba();
    if (iVar6 != 0) {
      local_198 = (longlong *)(param_2 + 0x3be8);
      local_1b0 = lVar3 + 0x188;
      lVar12 = 8;
      lVar11 = 0;
      uVar10 = 0;
      local_1b8 = param_1;
      do {
        if (((int)uVar10 < *(int *)(param_2 + 0x78f0)) &&
           (lVar9 = *(longlong *)(param_2 + 0x78e8), lVar9 + lVar11 != 0)) {
          lVar8 = 0;
          uVar14 = 0;
          if ((*(longlong *)(lVar9 + 0x20 + lVar11) != 0) &&
             (plVar4 = *(longlong **)(lVar9 + 0x28 + lVar11), plVar4 != (longlong *)0x0)) {
            lVar8 = (**(code **)(*plVar4 + 8))();
            if (lVar8 != 0) {
              if (DAT_14cbbd498 == 0) {
                local_180 = FUN_140940982;
                local_1d0 = FUN_14081d0ea;
                local_1d8 = &LAB_146572ba2;
                local_1e0 = &local_180;
                local_1e8 = &LAB_148ca13ba;
                local_1f0 = &LAB_140e51436;
                local_1f8 = L"Engine";
                local_200 = 0;
                local_208 = 0x10000004;
                local_210 = 8;
                local_218 = CONCAT44(local_218._4_4_,0x1068);
                FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
              }
              if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
                uVar14 = *(undefined1 *)(lVar8 + 0xe39);
                goto LAB_141298ee7;
              }
            }
            goto LAB_14129919b;
          }
        }
        else {
LAB_14129919b:
          lVar8 = 0;
          uVar14 = 0;
        }
LAB_141298ee7:
        lVar9 = (**(code **)(*local_198 + 0x10))();
        if (lVar9 == 0) {
          cVar13 = '\x01';
        }
        else {
          cVar13 = *(char *)(lVar9 + 0x10);
        }
        if ((longlong)*(int *)(lVar3 + 400) <= (longlong)uVar10) {
          memset(&local_180,0,0x120);
          local_180 = (code *)CONCAT71(local_180._1_7_,1);
          FUN_1400b22c2(&local_190,&DAT_149e62dd2);
          local_178 = local_190;
          uStack_174 = uStack_18c;
          uStack_170 = uStack_188;
          uStack_16c = uStack_184;
          local_168 = 0;
          FUN_1400b22c2(&local_190);
          local_150 = 0;
          memset(local_148,0,0xd8);
          local_dc = 0xffffffff00000080;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          local_90 = 0xf;
          local_88 = 1;
          local_70 = 0;
          local_68 = 0;
          local_84 = 0;
          uStack_7c = 0;
          iVar6 = FUN_145883eec(local_1b0,&local_180,uVar10 & 0xffffffff);
          if (iVar6 != -1) {
            *(int *)(lVar3 + 0x198) = *(int *)(lVar3 + 0x198) + 1;
          }
          FUN_145846e1a(&local_180);
        }
        *(int *)(lVar3 + 0x198) = *(int *)(lVar3 + 0x198) + 1;
        lVar9 = *(longlong *)(lVar3 + 0x188);
        piVar2 = (int *)(lVar9 + 0x18 + lVar11 * 4);
        *piVar2 = *piVar2 + 1;
        FUN_141299297(uVar14,lVar9 + lVar12,1);
        uVar5 = local_1b8;
        *(int *)(lVar3 + 0x198) = *(int *)(lVar3 + 0x198) + 1;
        lVar9 = *(longlong *)(lVar3 + 0x188);
        iVar6 = *(int *)(lVar9 + 4 + lVar11 * 4);
        if (cVar13 == *(char *)(lVar9 + lVar11 * 4)) {
          if (iVar6 == 0) {
            iVar6 = 0;
            goto LAB_14129912b;
          }
        }
        else {
LAB_14129912b:
          *(char *)(lVar9 + lVar11 * 4) = cVar13;
          *(int *)(lVar9 + 4 + lVar11 * 4) = iVar6 + 1;
        }
        if ((longlong)*(int *)(local_1c0 + 8) <= (longlong)uVar10) {
          memset(&local_180,0,0x118);
          FUN_1458840f6(&local_180);
          FUN_145883fee(local_1c0,&local_180,uVar10 & 0xffffffff);
          *(int *)(local_1c0 + 0x10) = *(int *)(local_1c0 + 0x10) + 1;
          FUN_1458f93fc(&local_180);
        }
        if (cVar13 == '\0') {
          local_218 = local_1c0;
          FUN_14129967c(uVar5,lVar8,uVar10 & 0xffffffff,lVar3);
        }
        uVar10 = uVar10 + 1;
        uVar7 = FUN_1412993ba();
        lVar11 = lVar11 + 0x48;
        lVar12 = lVar12 + 0x120;
      } while (uVar10 < uVar7);
    }
    ReleaseSRWLockExclusive(local_1a8);
    ReleaseSRWLockExclusive(local_1a0);
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141299297 FUN_141299297 body=290 status=ok
// SIG undefined FUN_141299297(void)

void FUN_141299297(undefined1 param_1,longlong *param_2,char param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_1) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
  }
  FUN_1400b22c2(&local_30);
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if (param_3 != '\0') {
    uVar3 = (int)param_2[1] - 1;
    if ((int)param_2[1] == 0) {
      uVar3 = 0;
    }
    if (0 < (int)uVar3) {
      lVar2 = *param_2;
      uVar4 = 0;
      do {
        uVar1 = *(ushort *)(lVar2 + uVar4 * 2);
        *(ushort *)(lVar2 + uVar4 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412993ba FUN_1412993ba body=705 status=ok
// SIG undefined FUN_1412993ba(void)

undefined4 FUN_1412993ba(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar5 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar7 = plVar5;
  if (cVar2 == '\0') {
LAB_1412993f5:
    if (*plVar7 == 0) goto LAB_141299529;
    plVar7 = plVar5;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar7 = (longlong *)(*plVar5 + 0x30);
        goto LAB_14129940a;
      }
LAB_1412994be:
      if (((DAT_14c9a1ab0 == 0) || (*plVar5 == 0)) ||
         (plVar5 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar5 + 0x28)),
         plVar5 == (longlong *)0x0)) goto LAB_141299422;
      puVar10 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar5 + 0x2a0))(plVar5,plVar1,puVar10);
LAB_14129950e:
      if (cVar2 == '\0') goto LAB_141299422;
      goto LAB_141299573;
    }
LAB_14129940a:
    if (*plVar7 == 0) goto LAB_1412994be;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar7 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar5 != 0 &&
        (plVar5 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar5 + 0x28)),
        plVar5 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar5 + 0x2a8))(plVar5,plVar1);
      goto LAB_14129950e;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar7 = (longlong *)(*plVar5 + 0x30);
      goto LAB_1412993f5;
    }
LAB_141299529:
    lVar6 = FUN_140162146();
    if (lVar6 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446ddda2(&local_58,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_58,plVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_141299573:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_141299422:
  lVar6 = plVar1[5];
  if (lVar6 == 0) {
    uVar3 = FUN_145d8612a();
    lVar6 = FUN_14477b664(uVar3);
    plVar1[5] = lVar6;
  }
  lVar4 = plVar1[6];
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    if ((lVar6 == 0) || (uVar8 = uVar9, plVar1[4] == 0)) goto LAB_141299467;
    plVar5 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
      plVar1[6] = 0;
      goto LAB_141299467;
    }
    uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar4 = FUN_144aff482(uVar3,plVar1 + 4);
    plVar1[6] = lVar4;
    if (lVar4 == 0) goto LAB_141299467;
  }
  if ((longlong)*(int *)(lVar4 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    lVar6 = 0;
    uVar8 = 0;
    do {
      if (plVar1[0xf] == *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6)) {
        uVar8 = *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar6);
        break;
      }
      lVar6 = lVar6 + 0x38;
    } while ((longlong)*(int *)(lVar4 + 0x20) * 0x38 - lVar6 != 0);
  }
LAB_141299467:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14129967c FUN_14129967c body=3446 status=ok
// SIG undefined FUN_14129967c(void)

void FUN_14129967c(longlong *param_1,longlong param_2,uint param_3,longlong param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  ushort uVar3;
  void *pvVar4;
  char cVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  code *pcVar17;
  wchar_t *_Str;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  char *pcVar21;
  longlong *plVar22;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined2 *local_288;
  undefined1 *local_280;
  undefined1 *local_278;
  code **local_270;
  undefined1 *local_268;
  code *local_260;
  char *local_258;
  uint local_24c;
  longlong local_248;
  longlong *local_240;
  longlong local_238;
  char *local_230;
  longlong local_228;
  longlong *local_220;
  void *local_218;
  int local_210;
  undefined4 local_20c;
  undefined1 local_208 [16];
  void *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [16];
  code *local_1d8;
  longlong *plStack_1d0;
  code *local_1c0 [7];
  wchar_t *local_188;
  int local_180;
  longlong local_178 [2];
  code *local_168;
  longlong *plStack_160;
  longlong *local_158;
  ulonglong uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  int local_130;
  undefined4 local_12c;
  longlong local_128;
  int local_120;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_2 == 0) goto LAB_14129a24a;
  *(int *)(param_4 + 0x198) = *(int *)(param_4 + 0x198) + 1;
  if (((int)param_3 < 0) || (*(int *)(param_4 + 400) <= (int)param_3)) {
    lVar20 = FUN_148e69888();
  }
  else {
    lVar20 = (ulonglong)param_3 * 0x120 + *(longlong *)(param_4 + 0x188);
  }
  *(int *)(param_5 + 2) = (int)param_5[2] + 1;
  if (((int)param_3 < 0) || ((int)param_5[1] <= (int)param_3)) {
    pcVar21 = (char *)FUN_148e699c4(param_5);
  }
  else {
    pcVar21 = (char *)((ulonglong)param_3 * 0x118 + *param_5);
  }
  *(int *)(lVar20 + 0x18) = *(int *)(lVar20 + 0x18) + 1;
  FUN_141299297(*(undefined1 *)(param_2 + 0xe39),lVar20 + 8,1);
  if ((*(int *)(param_2 + 0xbf0) < 1) ||
     (lVar15 = *(longlong *)(*(longlong *)(param_2 + 0xbe8) + 0x20), lVar15 == 0)) {
LAB_14129976b:
    cVar5 = '\0';
  }
  else {
    lVar6 = FUN_14018fcd2();
    lVar15 = *(longlong *)(lVar15 + 0x10);
    if ((*(int *)(lVar15 + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_14129976b;
    cVar5 = '\x01';
  }
  iVar10 = *(int *)(pcVar21 + 4);
  if (cVar5 == *pcVar21) {
    if (iVar10 == 0) {
      iVar10 = 0;
      goto LAB_14129977c;
    }
  }
  else {
LAB_14129977c:
    *pcVar21 = cVar5;
    *(int *)(pcVar21 + 4) = iVar10 + 1;
  }
  iVar10 = *(int *)(pcVar21 + 0xcc);
  if (*(char *)(param_2 + 0xe39) == pcVar21[200]) {
    if (iVar10 == 0) {
      iVar10 = 0;
      goto LAB_1412997a3;
    }
  }
  else {
LAB_1412997a3:
    pcVar21[200] = *(char *)(param_2 + 0xe39);
    *(int *)(pcVar21 + 0xcc) = iVar10 + 1;
  }
  lVar15 = *(longlong *)(param_2 + 0x4e8);
  if (lVar15 == 0) {
    FUN_140056680(&local_138,L"Unknown");
  }
  else {
    FUN_1400021e4(lVar15 + 0x1c,&local_148);
    local_130 = (int)uStack_140;
    uVar13 = (int)uStack_140 - 1;
    if ((int)uStack_140 == 0) {
      uVar13 = 0;
    }
    if (0 < (int)uVar13) {
      uVar14 = 0;
      do {
        uVar3 = *(ushort *)(local_148 + uVar14 * 2);
        *(ushort *)(local_148 + uVar14 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
    }
    local_138 = local_148;
    local_12c = uStack_140._4_4_;
    local_148 = 0;
    uStack_140 = 0;
  }
  FUN_140775538(pcVar21 + 0xf8,&local_138);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((lVar15 != 0) && (local_148 != 0)) {
    FUN_1400020a8();
  }
  FUN_140bb4432(lVar20 + 0x20,pcVar21 + 0xf8);
  FUN_1406fd608(&local_138);
  if (local_138 != 0) {
    if ((longlong)local_120 != 0) {
      lVar15 = 0;
      do {
        if (*(longlong *)(local_128 + lVar15) == 0) goto LAB_14129a23d;
        lVar15 = lVar15 + 8;
      } while ((longlong)local_120 * 8 != lVar15);
    }
    local_158 = (longlong *)0x0;
    uStack_150 = 0;
    local_258 = pcVar21;
    local_24c = param_3;
    local_248 = param_2 + 0x3f0;
    local_240 = param_1;
    local_238 = param_2;
    local_228 = lVar20;
    cVar5 = FUN_140bb182a(&local_138,&local_158,0);
    if (cVar5 != '\0') {
      if ((longlong)(int)uStack_150 != 0) {
        local_220 = local_158 + (longlong)(int)uStack_150 * 3;
        local_230 = local_258 + 0xa8;
        plVar19 = local_158;
        do {
          if (((*plVar19 != 0) && (*(char *)(*plVar19 + 0x18) == '\0')) &&
             ((longlong)(int)plVar19[2] != 0)) {
            plVar18 = (longlong *)plVar19[1];
            plVar22 = plVar18 + (longlong)(int)plVar19[2] * 0xc;
            do {
              puVar12 = *(undefined4 **)(*plVar18 + 8);
              if (*(undefined4 **)(*plVar18 + 8) == (undefined4 *)0x0) {
                puVar12 = &DAT_14c9485f0;
              }
              local_1d8 = (code *)0x0;
              plStack_1d0 = (longlong *)0x0;
              FUN_1400b2348(puVar12,&local_1d8,1);
              FUN_1400b22c2(&local_168,"uistat_damage_and_projectile_count");
              pcVar17 = (code *)&DAT_149dfb77a;
              if ((int)plStack_160 != 0) {
                pcVar17 = local_168;
              }
              if (pcVar17 == (code *)0x0) {
LAB_141299a6b:
                puVar12 = *(undefined4 **)(*plVar18 + 8);
                if (*(undefined4 **)(*plVar18 + 8) == (undefined4 *)0x0) {
                  puVar12 = &DAT_14c9485f0;
                }
                local_178[0] = 0;
                local_178[1] = 0;
                FUN_1400b2348(puVar12,local_178,1);
                FUN_1400b22c2(&local_188,"uistat_damage");
                _Str = local_188;
                if (local_180 == 0) {
                  _Str = L"";
                }
                if (_Str == (wchar_t *)0x0) {
                  cVar5 = '\0';
                }
                else {
                  sVar7 = wcslen(_Str);
                  local_2a0 = 0xffffffff;
                  local_2a8 = 0;
                  iVar10 = FUN_1447ee042(local_178,_Str,sVar7 & 0xffffffff,1);
                  if (iVar10 == -1) {
                    cVar5 = '\0';
                  }
                  else {
                    cVar5 = *(char *)((longlong)plVar18 + 0x5c);
                  }
                }
                if (local_188 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if (local_178[0] != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                sVar7 = wcslen((wchar_t *)pcVar17);
                local_2a0 = 0xffffffff;
                local_2a8 = 0;
                iVar10 = FUN_1447ee042(&local_1d8,pcVar17,sVar7 & 0xffffffff,1);
                if (iVar10 == -1) goto LAB_141299a6b;
                cVar5 = *(char *)((longlong)plVar18 + 0x5c);
              }
              if (local_168 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_1d8 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (cVar5 != '\0') {
                local_1d8 = (code *)0x14a176d23;
                plStack_1d0 = (longlong *)CONCAT35(plStack_1d0._5_3_,5);
                uVar13 = FUN_14001a6c0(&local_1d8,1);
                if ((int)plVar18[2] != *(int *)((longlong)plVar18 + 0x3c)) {
                  plVar16 = plVar18 + 8;
                  if ((longlong *)plVar18[9] != (longlong *)0x0) {
                    plVar16 = (longlong *)plVar18[9];
                  }
                  iVar10 = *(int *)((longlong)plVar16 +
                                   (ulonglong)
                                   ((int)plVar18[10] - 1U &
                                   (uVar13 << 0x10 | uVar13 & 0xffff) + ((uVar13 & 0xffff) >> 4) +
                                   ((uVar13 >> 0x10) << 0x13 | uVar13 >> 0x10)) * 4);
                  if (iVar10 != -1) {
                    do {
                      puVar2 = (undefined1 *)(plVar18[1] + (longlong)iVar10 * 0x20);
                      if (*(ulonglong *)(plVar18[1] + (longlong)iVar10 * 0x20) == (ulonglong)uVar13)
                      {
                        if (puVar2 != &DAT_fffffffffffffff8 && puVar2 != (undefined1 *)0x0) {
                          FUN_140775496(local_230);
                          goto LAB_141299c17;
                        }
                        break;
                      }
                      iVar10 = *(int *)(puVar2 + 0x18);
                    } while (iVar10 != -1);
                  }
                }
              }
              plVar18 = plVar18 + 0xc;
            } while (plVar18 != plVar22);
          }
LAB_141299c17:
          plVar19 = plVar19 + 3;
        } while (plVar19 != local_220);
      }
    }
    FUN_1407b25f0(local_228 + 0x38,&local_138);
    FUN_140baf5f0(&local_138,&local_168);
    if ((int)plStack_160 < 2) {
      FUN_1400b22c2(&local_1d8,"DESIGNER NAME ME");
    }
    else {
      FUN_140baf5f0(&local_138,&local_1d8);
    }
    plVar19 = local_240;
    pcVar21 = local_258;
    FUN_140775538(local_258 + 0x20);
    if (local_1d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar20 = local_238;
    if (local_168 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar15 = (**(code **)(*plVar19 + 0x180))(plVar19);
    if (((lVar15 != 0) && (*(longlong *)(lVar15 + 0x1f0) != 0)) &&
       (lVar15 = FUN_1400d6ce6(), lVar15 != 0)) {
      *(int *)(pcVar21 + 0xf0) = *(int *)(pcVar21 + 0xf0) + 1;
      FUN_140baf362(&local_138,pcVar21 + 0xe0,0);
      *(int *)(param_5 + 2) = (int)param_5[2] + 1;
      FUN_1411bce66(lVar15,&local_1d8,(longlong)(int)local_24c * 0x118 + *param_5 + 0xe0,
                    &DAT_14cbe4638);
      if (local_1d8 == (code *)0x0) {
        FUN_1411bd35e(lVar15,local_1c0,pcVar21 + 0xe0,&DAT_14cbe4638);
      }
      else {
        local_168 = (code *)0x0;
        plStack_160 = (longlong *)0x0;
        FUN_1401031ac(local_1d8,0,&local_168);
        pcVar17 = local_168;
        if ((int)plStack_160 == 0) {
          pcVar17 = (code *)&DAT_149dfb77a;
        }
        FUN_140002266(&local_1d8,L"TextureRenderTarget2D\'%s\'",pcVar17);
        FUN_140775538(pcVar21 + 0x38);
        local_1c0[0] = local_168;
        if (local_1d8 != (code *)0x0) {
          FUN_1400020a8();
          local_1c0[0] = local_168;
        }
      }
      if (local_1c0[0] != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_138 == 0) {
      local_178[0] = 0;
    }
    else {
      local_178[0] = *(longlong *)(local_138 + 0xa0);
      if ((local_178[0] == 0) && (local_178[0] = *(longlong *)(local_138 + 0x98), local_178[0] == 0)
         ) {
        local_178[0] = *(longlong *)(local_138 + 0x3c);
      }
    }
    FUN_1400021e4(local_178,&local_168);
    plStack_1d0 = plStack_160;
    lVar15 = local_248;
    uVar13 = (int)plStack_160 - 1;
    if ((int)plStack_160 == 0) {
      uVar13 = 0;
    }
    if (0 < (int)uVar13) {
      uVar14 = 0;
      do {
        *(ushort *)(local_168 + uVar14 * 2) =
             (ushort)(*(ushort *)(local_168 + uVar14 * 2) - 0x41 < 0x1a) * 0x20 +
             *(ushort *)(local_168 + uVar14 * 2);
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
    }
    local_1d8 = local_168;
    local_168 = (code *)0x0;
    plStack_160 = (longlong *)0x0;
    FUN_140775538(pcVar21 + 8,&local_1d8);
    if (local_1d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_168 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140c65c56(lVar15,&local_168);
    pcVar17 = local_168;
    if (local_168 != (code *)0x0) {
      uVar8 = FUN_140082ff6();
      cVar5 = FUN_1448093f4(pcVar17,uVar8);
      plVar18 = plStack_160;
      pcVar17 = local_168;
      if (cVar5 != '\0') {
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
          UNLOCK();
        }
        pvVar4 = DAT_14cbd8c10;
        if (local_168 != (code *)0x0) {
          if (*(int *)(local_168 + 0x280) < 1) {
LAB_141299fcf:
            local_1f8 = (void *)0x0;
            lVar20 = (longlong)DAT_14cbd8c18;
            local_1f0 = DAT_14cbd8c18;
            if (lVar20 == 0) {
              local_1ec = 0;
            }
            else {
              FUN_1446dd670(&local_1f8,DAT_14cbd8c18,0);
              memcpy(local_1f8,pvVar4,lVar20 * 2);
            }
            FUN_1418f9a2e(&local_1d8,&local_1f8,0);
            FUN_141239a70(pcVar21 + 0x68,&local_1d8);
          }
          else {
            pcVar9 = local_168 + 0x208;
            if (*(code **)(local_168 + 0x278) != (code *)0x0) {
              pcVar9 = *(code **)(local_168 + 0x278);
            }
            if ((*pcVar9 != (code)0x1) || (*(longlong *)(pcVar9 + 0x28) == 0)) goto LAB_141299fcf;
            FUN_144a2b0a4(*(longlong *)(pcVar9 + 0x28) + 0x28,local_1e8);
            FUN_1418f9a2e(&local_1d8,local_1e8,1);
            FUN_141239a70(pcVar21 + 0x68,&local_1d8);
          }
          if (local_1d8 != (code *)0x0) {
            FUN_1400020a8();
          }
          pvVar4 = DAT_14cbd8c10;
          if (*(int *)(pcVar17 + 0x280) < 2) {
LAB_14129a0ed:
            local_218 = (void *)0x0;
            lVar20 = (longlong)DAT_14cbd8c18;
            local_210 = DAT_14cbd8c18;
            if (lVar20 == 0) {
              local_20c = 0;
            }
            else {
              FUN_1446dd670(&local_218,DAT_14cbd8c18,0);
              memcpy(local_218,pvVar4,lVar20 * 2);
            }
            FUN_1418f9a2e(&local_1d8,&local_218,0);
            FUN_141239a70(pcVar21 + 0x88,&local_1d8);
          }
          else {
            pcVar9 = pcVar17 + 0x208;
            if (*(code **)(pcVar17 + 0x278) != (code *)0x0) {
              pcVar9 = *(code **)(pcVar17 + 0x278);
            }
            if ((pcVar9[0x38] != (code)0x1) || (*(longlong *)(pcVar9 + 0x60) == 0))
            goto LAB_14129a0ed;
            FUN_144a2b0a4(*(longlong *)(pcVar9 + 0x60) + 0x28,local_208);
            FUN_1418f9a2e(&local_1d8,local_208,1);
            FUN_141239a70(pcVar21 + 0x88,&local_1d8);
          }
          if (local_1d8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar20 = local_238;
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar22 = plVar18 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
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
      }
      if ((0 < *(int *)(lVar20 + 0xbf0)) &&
         (lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0xbe8) + 0x10), lVar20 != 0)) {
        lVar15 = FUN_1401e5a06();
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30 &&
            (lVar15 = plVar19[4], lVar15 != 0)))) {
          if (DAT_14cbadd90 == 0) {
            local_1d8 = FUN_141030f22;
            local_260 = FUN_14081d0ea;
            local_268 = &LAB_1459f2e4c;
            local_278 = &LAB_148c39de3;
            local_280 = &LAB_1457a9eb2;
            local_288 = &DAT_149e063b2;
            local_290 = 0;
            local_298 = 0x10000004;
            local_2a0 = 0x10;
            local_2a8 = 0x3de0;
            local_270 = &local_1d8;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            lVar15 = (ulonglong)*(byte *)(lVar20 + 0x110) * 0x40 + lVar15;
            iVar10 = *(int *)(lVar15 + 0x2600);
            if (iVar10 == *(int *)(pcVar21 + 0xd0)) {
              if (*(int *)(pcVar21 + 0xd4) == 0) {
                iVar11 = 1;
                goto LAB_14129a2f3;
              }
            }
            else {
              iVar11 = *(int *)(pcVar21 + 0xd4) + 1;
LAB_14129a2f3:
              *(int *)(pcVar21 + 0xd0) = iVar10;
              *(int *)(pcVar21 + 0xd4) = iVar11;
            }
            iVar10 = *(int *)(lVar15 + 0x2608);
            if (iVar10 == *(int *)(pcVar21 + 0xd8)) {
              if (*(int *)(pcVar21 + 0xdc) != 0) goto LAB_14129a1e5;
              iVar11 = 1;
            }
            else {
              iVar11 = *(int *)(pcVar21 + 0xdc) + 1;
            }
            *(int *)(pcVar21 + 0xd8) = iVar10;
            *(int *)(pcVar21 + 0xdc) = iVar11;
          }
        }
      }
LAB_14129a1e5:
      pcVar21[0x110] = '\x01';
    }
    plVar19 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar18 = plStack_160 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    FUN_140bb299f(local_158,uStack_150 & 0xffffffff);
    if (local_158 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14129a23d:
  FUN_140368b56(&local_138);
LAB_14129a24a:
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129a3f4 FUN_14129a3f4 body=72 status=ok
// SIG undefined FUN_14129a3f4(void)

void FUN_14129a3f4(longlong *param_1,longlong *param_2)

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
  *(int *)(param_1 + 2) = (int)param_2[2];
  return;
}



// FUNCTION 14129a43c CoCreateGuid body=7 status=ok
// SIG HRESULT CoCreateGuid(GUID * pguid)

HRESULT __stdcall CoCreateGuid(GUID *pguid)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014129a43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateGuid(pguid);
  return HVar1;
}



// FUNCTION 14129a444 FUN_14129a444 body=228 status=ok
// SIG undefined FUN_14129a444(void)

longlong FUN_14129a444(void)

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
  if (DAT_14cad6058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a5299a;
    local_38 = &LAB_147a63a17;
    local_40 = &LAB_145889f07;
    local_48 = L"DeviceProfiles";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/Engine",L"DeviceProfile",&DAT_14cad6058,&DAT_147a63a16);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad6058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129a52a FUN_14129a52a body=21 status=ok
// SIG undefined FUN_14129a52a(void)

void FUN_14129a52a(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_1447ba426(param_1 + 0x140,*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_3 + 0x34));
  return;
}



// FUNCTION 14129a540 FUN_14129a540 body=359 status=ok
// SIG undefined FUN_14129a540(void)

void FUN_14129a540(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    uVar9 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar8 = (longlong)*(int *)((longlong)plVar4 + uVar9 * 4);
    if (lVar8 != -1) {
      lVar3 = *param_1;
      lVar8 = lVar8 * 0x20;
      local_48 = *(undefined8 *)(lVar3 + lVar8);
      local_50 = param_2;
      cVar2 = FUN_140b865d4();
      if (cVar2 == '\0') {
        lVar8 = lVar3 + lVar8;
        do {
          lVar3 = lVar8;
          lVar8 = (longlong)*(int *)(lVar3 + 0x18);
          if (lVar8 == -1) goto LAB_14129a61c;
          lVar6 = *param_1;
          lVar8 = lVar8 * 0x20;
          local_48 = *(undefined8 *)(lVar6 + lVar8);
          local_50 = param_2;
          cVar2 = FUN_140b865d4(&local_48,&local_50);
          lVar8 = lVar6 + lVar8;
        } while (cVar2 == '\0');
        piVar7 = (int *)(lVar3 + 0x18);
      }
      else {
        piVar7 = (int *)((longlong)plVar4 + uVar9 * 4);
      }
      iVar1 = *piVar7;
      lVar8 = *param_1;
      lVar3 = (longlong)iVar1 * 0x20;
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      lVar6 = (longlong)*(int *)(lVar8 + 0x1c + lVar3);
      iVar5 = *(int *)((longlong)plVar4 + lVar6 * 4);
      if (iVar5 == iVar1) {
        piVar7 = (int *)((longlong)plVar4 + lVar6 * 4);
      }
      else {
        do {
          piVar7 = (int *)(lVar8 + (longlong)iVar5 * 0x20 + 0x18);
          iVar5 = *piVar7;
        } while (iVar5 != iVar1);
      }
      *piVar7 = *(int *)(lVar8 + lVar3 + 0x18);
      if (*(longlong *)(*param_1 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14129a6a8(param_1,iVar1);
    }
  }
LAB_14129a61c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129a6a8 FUN_14129a6a8 body=114 status=ok
// SIG undefined FUN_14129a6a8(void)

void FUN_14129a6a8(longlong *param_1,int param_2)

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



// FUNCTION 14129a71a FUN_14129a71a body=126 status=ok
// SIG undefined FUN_14129a71a(void)

void FUN_14129a71a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2500) != 0) {
    local_20 = 0;
    local_18 = 0x7202;
    local_10 = 0;
    local_30 = 0x7201;
    local_28 = 0;
    local_40 = 0;
    local_48 = 0;
    local_38 = param_2;
    FUN_14129a79a(*(longlong *)(param_1 + 0x2500),&local_38,&local_20,0xbf800000);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129a79a FUN_14129a79a body=333 status=ok
// SIG undefined FUN_14129a79a(void)

void FUN_14129a79a(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x8d0))();
  param_1[0x74] = *param_2;
  plVar1 = param_1 + 0x738;
  FUN_1412b8006(param_1[0x738],(int)param_1[0x739]);
  *(undefined4 *)(param_1 + 0x739) = 0;
  if (*(int *)((longlong)param_1 + 0x39cc) != 0) {
    FUN_14654885a(plVar1,0);
  }
  lVar4 = *param_2;
  lVar6 = param_2[1];
  if ((lVar4 != param_1[0x735]) || ((int)lVar6 != (int)param_1[0x736])) {
    iVar3 = (int)param_1[0x739];
    lVar7 = (longlong)iVar3;
    *(uint *)(param_1 + 0x739) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x39cc) < iVar3 + 1U) {
      FUN_141874492(plVar1,iVar3);
    }
    lVar5 = *plVar1;
    *(longlong *)(lVar5 + lVar7 * 0x28) = lVar4;
    *(int *)(lVar5 + 8 + lVar7 * 0x28) = (int)lVar6;
    puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar7 * 0x28);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar5 + 0x20 + lVar7 * 0x28) = 0;
  }
  local_68 = *param_3;
  local_60 = *(undefined4 *)(param_3 + 1);
  local_58 = 0;
  FUN_141440d78(param_1,&local_68,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff);
  FUN_141440cd6(param_1 + 0x5d3,param_1[0x74]);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129a8e8 FUN_14129a8e8 body=604 status=ok
// SIG undefined FUN_14129a8e8(void)

undefined8 * FUN_14129a8e8(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_149f9fd60;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_14129aa49;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_14129aa33;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
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
        if ((iVar8 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_48;
LAB_14129aa33:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14129aa49:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129ab46 FUN_14129ab46 body=298 status=ok
// SIG undefined FUN_14129ab46(void)

ulonglong FUN_14129ab46(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  ulonglong uVar8;
  
  cVar2 = FUN_14129ac70();
  if (cVar2 != '\0') {
    cVar2 = FUN_1407a73f8(param_1[0x14] + 0x4f0,&DAT_14cbcddd8);
    if ((cVar2 != '\0') &&
       (plVar7 = (longlong *)FUN_140672052(param_1[1]), plVar7 != (longlong *)0x0)) {
      lVar3 = FUN_1406f6176();
      unaff_RDI = plVar7;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && (lVar3 = (**(code **)(*plVar7 + 0x3a8))(plVar7), lVar3 != 0)))) {
        uVar1 = *(uint *)(lVar3 + 0x170);
        unaff_RDI = (longlong *)(ulonglong)uVar1;
        lVar3 = FUN_1406d51c0();
        if (*(int *)(lVar3 + 0x238) <= (int)uVar1) goto LAB_14129ac01;
      }
    }
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((param_1[5] == 0) || (plVar7 = *(longlong **)(param_1[5] + 0x60), plVar7 == (longlong *)0x0)
       ) goto LAB_14129abb4;
    lVar3 = (**(code **)(*plVar7 + 8))(plVar7);
    lVar4 = FUN_14050caa6();
    if ((lVar4 == 0) ||
       (((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) || ((char)plVar7[0x1a] != '\x01')))) goto LAB_14129abb4;
    uVar5 = FUN_141563480(plVar7 + 0x1b);
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    cVar2 = FUN_1411d9864(uVar6,uVar5);
    if (cVar2 != '\0') goto LAB_14129abb4;
  }
LAB_14129ac01:
  uVar8 = 0;
LAB_14129abb4:
  return uVar8 & 0xffffffff;
}



// FUNCTION 14129ac70 FUN_14129ac70 body=51 status=ok
// SIG undefined FUN_14129ac70(void)

undefined8 FUN_14129ac70(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140f42f34();
  if (lVar2 != 0) {
    cVar1 = FUN_1405f61f4(lVar2);
    if (cVar1 == '\x02') {
      uVar3 = FUN_140dcc79c(param_1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14129aca4 FUN_14129aca4 body=543 status=ok
// SIG undefined FUN_14129aca4(void)

void FUN_14129aca4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
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
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar10 + 0x50 + lVar9) = 0;
      local_74 = iVar11;
      if (*(longlong *)(lVar10 + 0x48 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(lVar10 + lVar9 + 8);
      uVar12 = uVar12 & ~(uint)uVar8;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar12;
      iVar11 = local_74;
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
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar10 == lVar9) goto LAB_14129ae34;
        }
        iVar13 = iVar13 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14129ae34:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
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



// FUNCTION 14129aec6 FUN_14129aec6 body=90 status=ok
// SIG undefined FUN_14129aec6(void)

void FUN_14129aec6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14129af20 FUN_14129af20 body=212 status=ok
// SIG undefined FUN_14129af20(void)

void FUN_14129af20(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = (longlong)(int)uVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar5 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    uVar8 = 0;
    do {
      uVar3 = (ulonglong)uVar8;
      uVar9 = uVar8;
      uVar7 = uVar3;
      uVar6 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        uVar10 = uVar6;
        if (lVar4 <= (longlong)uVar7) break;
        uVar10 = uVar9 + 1;
        uVar9 = uVar10;
      } while (bVar11 == (plVar2[uVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (uVar5 != uVar8) {
          memmove(plVar2 + (int)uVar5,plVar2 + uVar3,(longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar5 = uVar5 + (uVar10 - uVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      uVar8 = uVar10;
    } while ((longlong)uVar7 < lVar4);
    *(uint *)(param_1 + 1) = uVar5;
  }
  return;
}



// FUNCTION 14129aff4 FUN_14129aff4 body=1 status=ok
// SIG undefined FUN_14129aff4(void)

void FUN_14129aff4(void)

{
  return;
}



// FUNCTION 14129aff6 FUN_14129aff6 body=57 status=ok
// SIG undefined FUN_14129aff6(void)

void FUN_14129aff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0b88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0b88 = FUN_140002ddd(FUN_1465f213a,uVar1,L"OakMissionTransaction_Tracking");
  }
  return;
}



// FUNCTION 14129b030 FUN_14129b030 body=3 status=ok
// SIG undefined FUN_14129b030(void)

undefined1 FUN_14129b030(void)

{
  return 1;
}



// FUNCTION 14129b034 FUN_14129b034 body=689 status=ok
// SIG undefined FUN_14129b034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14129b034(longlong param_1,double *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  double *pdVar13;
  double *pdVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  
  if ((((*(int *)(param_1 + 0xcc) != 0) && (uVar1 = *(uint *)(param_1 + 200), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((puVar12 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar12 != (undefined8 *)0x0 && (*(int *)(puVar12 + 2) == *(int *)(param_1 + 0xcc))) &&
      ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
      uVar11 = *puVar12;
    }
    else {
      uVar11 = 0;
    }
    plVar9 = (longlong *)FUN_14129b2e6(uVar11);
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x5f8))(plVar9);
      if (lVar10 == 0) {
        fVar15 = (float)FUN_14129b34e(plVar9);
        pdVar13 = (double *)&DAT_14c846480;
        if (plVar9[0x39] != 0) {
          pdVar13 = (double *)(plVar9[0x39] + 0x240);
        }
        pdVar14 = param_2;
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar14 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar14 = pdVar14 + 1;
        }
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (double)fVar15;
        auVar16 = divpd(auVar17 << 0x40,_DAT_1499387d0);
        auVar16 = roundpd(auVar16,auVar16,3);
        auVar17 = roundpd(in_XMM2,ZEXT816(0),3);
        dVar7 = (0.0 - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar8 = ((double)fVar15 - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar5 = (0.0 - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar6 = (0.0 - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar2 = sin(dVar7);
        dVar3 = sin(dVar8);
        dVar4 = sin(dVar5);
        sin(dVar6);
        dVar7 = cos(dVar7);
        dVar8 = cos(dVar8);
        dVar5 = cos(dVar5);
        cos(dVar6);
        dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
        *param_2 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
        param_2[1] = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
        auVar16._8_4_ = SUB84(dVar6,0);
        auVar16._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
        auVar16._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 2) = auVar16;
        return param_2;
      }
      pdVar13 = (double *)&DAT_14c846480;
      if (*(longlong *)(lVar10 + 0x1c8) != 0) {
        pdVar13 = (double *)(*(longlong *)(lVar10 + 0x1c8) + 0x240);
      }
      goto LAB_14129b2b3;
    }
  }
  pdVar13 = (double *)&DAT_14c846480;
LAB_14129b2b3:
  pdVar14 = param_2;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar14 = *pdVar13;
    pdVar13 = pdVar13 + 1;
    pdVar14 = pdVar14 + 1;
  }
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
  return param_2;
}



// FUNCTION 14129b2e6 FUN_14129b2e6 body=103 status=ok
// SIG undefined FUN_14129b2e6(void)

undefined8 FUN_14129b2e6(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x6f4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x6f0);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 != (undefined8 *)0x0) &&
         ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x6f4) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
          return *puVar3;
        }
        return 0;
      }
    }
  }
  uVar2 = FUN_1412d325c(*(undefined8 *)(param_1 + 0x408));
  return uVar2;
}



// FUNCTION 14129b34e FUN_14129b34e body=444 status=ok
// SIG undefined FUN_14129b34e(void)

void FUN_14129b34e(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  code *local_38;
  double dStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == (longlong *)0x0) {
    fVar3 = 0.0;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x700))();
    if ((cVar2 != '\0') && (plVar1 = (longlong *)param_1[0x78], plVar1 != (longlong *)0x0)) {
      if (DAT_14caf9cd0 == 0) {
        local_70 = &local_38;
        local_38 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1463c0cc2;
        local_78 = &LAB_147c9db5b;
        local_80 = &LAB_1463f9c44;
        local_88 = &DAT_149e063b2;
        local_90 = 0x2000000000;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
          DAT_14caf9cd0 + 0x30)) {
        local_28 = DAT_14c8464f0;
        local_38 = DAT_14c8464e0;
        dStack_30 = DAT_14c8464e8;
        local_48 = DAT_14c846508;
        local_58 = (undefined4)DAT_14c8464f8;
        uStack_54 = DAT_14c8464f8._4_4_;
        uStack_50 = (undefined4)DAT_14c846500;
        uStack_4c = DAT_14c846500._4_4_;
        (**(code **)(*plVar1 + 0x718))(plVar1,&local_38,&local_58);
        fVar3 = (float)(double)CONCAT44(uStack_4c,uStack_50);
        goto LAB_14129b417;
      }
    }
    (**(code **)(*param_1 + 0x720))(param_1,&local_38);
    fVar3 = (float)dStack_30;
  }
LAB_14129b417:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar3);
}



// FUNCTION 14129b50c FUN_14129b50c body=2079 status=ok
// SIG undefined FUN_14129b50c(void)

void FUN_14129b50c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_1468d96f0;
      local_c0 = 0;
      local_c8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_141710108;
      local_c0 = 0x1000000000000000;
      local_c8 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
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
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_141710108;
      local_c0 = 0x1000000000000000;
      local_c8 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  uStack_70 = 0;
  uStack_6c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_1409e12a0;
      local_c0 = 0;
      local_c8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_70);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_70);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_70);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_70 = (undefined4)uVar2;
      uStack_6c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_70);
    }
  }
  local_74 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_b8 = FUN_1446ddbd2();
      local_b0 = FUN_14067a048;
      local_c0 = 0;
      local_c8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_74);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_74);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_74 = (int)uVar2;
      uStack_70 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_74);
    }
  }
  iVar4 = local_74;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_6c,uStack_70);
  local_90 = local_68;
  uVar5 = FUN_14477b664(uStack_60);
  local_88 = FUN_14477b664(uVar5);
  local_80 = local_58;
  local_a8 = local_48;
  uVar5 = FUN_14477b664(uStack_40);
  local_a0 = FUN_14477b664(uVar5);
  local_98 = local_38;
  local_c8 = CONCAT71(local_c8._1_7_,iVar4 != 0);
  FUN_14129bd2c(local_30,&local_a8,&local_90,uVar2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129bd2c FUN_14129bd2c body=447 status=ok
// SIG undefined FUN_14129bd2c(void)

void FUN_14129bd2c(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_4;
  plVar3 = (longlong *)FUN_14114f501();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar7 = param_3[1];
    if (lVar7 == 0) {
      uVar5 = FUN_145c2bba6();
      lVar7 = FUN_14477b664(uVar5);
      param_3[1] = lVar7;
    }
    lVar6 = param_3[2];
    if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*param_3 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,param_3);
      }
      param_3[2] = lVar6;
    }
    lVar7 = param_2[1];
    if (lVar7 == 0) {
      uVar5 = FUN_140feeb70();
      lVar7 = FUN_14477b664(uVar5);
      param_2[1] = lVar7;
    }
    lVar8 = param_2[2];
    if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar8;
    }
    if (((*(byte *)(lVar4 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar4 + 0x40) != 0)) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar7);
        if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
           (*(longlong *)(lVar1 + 0xa8) == lVar8)) {
          if ((*(byte *)(lVar1 + 0x248) & 2) != 0) {
            FUN_143e3066c(lVar1 + 0x78,lVar6,&local_30,param_5);
          }
          break;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(lVar4 + 0x40) * 8 != lVar7);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129beec FUN_14129beec body=197 status=ok
// SIG undefined FUN_14129beec(void)

void FUN_14129beec(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
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
    FUN_14089a5e2(&local_38,local_30,0);
    _Dst = (void *)((longlong)&local_38 + ((longlong)local_38 >> 0x18));
    if (((ulonglong)local_38 & 1) == 0) {
      _Dst = local_38;
    }
    memcpy(_Dst,_Src,lVar1 << 2);
  }
  FUN_14129bfb2(param_1 + 0x28,&local_38);
  if (local_38 != (void *)0x0 && ((ulonglong)local_38 & 1) == 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129bfb2 FUN_14129bfb2 body=61 status=ok
// SIG undefined FUN_14129bfb2(void)

ulonglong * FUN_14129bfb2(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_14129bff0(param_1,uVar2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 14129bff0 FUN_14129bff0 body=105 status=ok
// SIG undefined FUN_14129bff0(void)

void FUN_14129bff0(ulonglong *param_1,void *param_2,int param_3,int param_4)

{
  void *_Dst;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14089a5e2(param_1,param_3,param_4);
    _Dst = (void *)*param_1;
    if (((ulonglong)_Dst & 1) != 0) {
      _Dst = (void *)((longlong)param_1 + ((longlong)_Dst >> 0x18));
    }
    if (param_3 != 0) {
      memcpy(_Dst,param_2,(longlong)param_3 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 14129c05a FUN_14129c05a body=151 status=ok
// SIG undefined FUN_14129c05a(void)

void FUN_14129c05a(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_3 + 0x108))(param_3);
  if ((cVar1 != '\0') && (DAT_14c7608e4 != 0)) {
    local_28 = param_6;
    local_40 = param_3;
    local_38 = param_2;
    local_30 = param_1;
    FUN_14129c0f2(&local_40,0);
    cVar1 = (**(code **)(*param_3 + 0x430))(param_3);
    if (cVar1 != '\0') {
      FUN_14129c0f2(&local_40,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129c0f2 FUN_14129c0f2 body=811 status=ok
// SIG undefined FUN_14129c0f2(void)

void FUN_14129c0f2(undefined8 *param_1,char param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_298 [32];
  longlong *local_278;
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  longlong lStack_250;
  undefined1 local_246 [6];
  undefined1 local_240 [216];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar5 = param_1[2];
  local_258 = 0;
  lStack_250 = 0;
  local_278 = &local_268;
  local_268 = 0;
  lStack_260 = 0;
  cVar7 = FUN_142f13d51(*param_1);
  uVar8 = DAT_14c9c0d50;
  if (cVar7 != '\0') {
    cVar7 = FUN_142ef4e7f(*param_1);
    if (cVar7 != '\0') {
      uVar8 = FUN_142ef4efd(*param_1);
    }
    uStack_e8 = DAT_14c9c0d98;
    if (param_2 != '\0') {
      uStack_e8 = FUN_142ef4da1(*param_1);
    }
    local_100 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    lStack_118 = 0;
    local_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    local_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    uStack_87 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    lVar9 = 0;
    local_68 = 0;
    local_60 = 1;
    local_58 = 0;
    local_f0 = DAT_14c9c0db0;
    local_128 = DAT_14ca94df8;
    uStack_f8 = uVar8;
    if (local_258 != 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(lStack_250 + 8) + 0x50) +
               (longlong)*(int *)(local_258 + 0xd4) * 8);
      if (lVar9 == 0) {
        lVar9 = FUN_1400bafc2(*(longlong *)(lStack_250 + 8),(longlong)*(int *)(local_258 + 0xd4),1);
      }
    }
    local_120 = lVar9;
    if (local_268 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(lStack_260 + 8) + 0x50) +
               (longlong)*(int *)(local_268 + 0xd4) * 8);
      if (lVar9 == 0) {
        lVar9 = FUN_1400bafc2(*(longlong *)(lStack_260 + 8),(longlong)*(int *)(local_268 + 0xd4),1);
      }
    }
    local_d0 = 0;
    uStack_138 = 0;
    uStack_137 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    local_13f = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    uVar8 = *(undefined8 *)(param_1[1] + 0x30);
    bVar2 = *(byte *)(param_1[1] + 0x2c);
    lStack_118 = lVar9;
    local_58 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,&local_128);
    local_cc = 1;
    uStack_c8 = (uint)bVar2;
    uStack_c4 = 0;
    uStack_c0 = (undefined4)uVar8;
    uStack_bc = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_b8 = (undefined4)local_168;
    uStack_b4 = (undefined4)((ulonglong)local_168 >> 0x20);
    uStack_b0 = (undefined4)uStack_160;
    local_ac = (undefined4)((ulonglong)uStack_160 >> 0x20);
    uStack_a8 = (undefined4)local_158;
    uStack_a4 = (undefined4)((ulonglong)local_158 >> 0x20);
    uStack_a0 = (undefined4)uStack_150;
    local_9c = (undefined4)((ulonglong)uStack_150 >> 0x20);
    uStack_98 = (undefined4)uStack_148;
    uStack_94 = (undefined4)((ulonglong)uStack_148 >> 0x20);
    uStack_90 = (undefined4)CONCAT71(local_13f,uStack_140);
    uStack_8c = (undefined4)((uint7)local_13f >> 0x18);
    local_88 = uStack_138;
    uStack_87 = uStack_137;
    local_68 = CONCAT62(local_68._2_6_,1);
    local_80 = 0;
    local_68 = local_68 & 0xffffffffffff;
    local_78 = 0;
    uStack_70 = 0;
    memcpy(local_240,&local_128,0xd8);
    uVar3 = *(uint *)(lVar5 + 8);
    plVar6 = (longlong *)param_1[3];
    iVar4 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
      FUN_14069191a(plVar6,iVar4);
    }
    puVar1 = (undefined2 *)(*plVar6 + (longlong)iVar4 * 0x130);
    *puVar1 = 0x100;
    memcpy(puVar1 + 1,local_246,0xde);
    *(undefined8 *)(puVar1 + 0x88) = 0;
    *(undefined8 *)(puVar1 + 0x8c) = 0x300000000;
    *(uint *)(puVar1 + 0x90) = uVar3 & 0x7fffffff;
    *(undefined8 *)(puVar1 + 0x94) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129c41e FUN_14129c41e body=257 status=ok
// SIG undefined FUN_14129c41e(void)

void FUN_14129c41e(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  if (((*(int *)(param_1 + 0x34) == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar6[2] != *(int *)(param_1 + 0x34)) {
    return;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
    return;
  }
  lVar2 = *plVar6;
  if (lVar2 == 0) {
    return;
  }
  cVar3 = FUN_14129c520((uint *)(lVar2 + 900),0);
  if (cVar3 != '\0') {
    return;
  }
  if (*(int *)(lVar2 + 0x388) != 0) {
    uVar1 = *(uint *)(lVar2 + 900);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14129c4ec;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)(lVar2 + 0x388) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar5;
      goto LAB_14129c4ec;
    }
  }
  uVar4 = 0;
LAB_14129c4ec:
  if (param_3 == '\0') {
    FUN_14129c610(uVar4,param_2);
    return;
  }
  FUN_14129c566();
  return;
}



// FUNCTION 14129c520 FUN_14129c520 body=70 status=ok
// SIG undefined FUN_14129c520(void)

bool FUN_14129c520(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 14129c566 FUN_14129c566 body=169 status=ok
// SIG undefined FUN_14129c566(void)

void FUN_14129c566(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 2;
  *puVar2 = &PTR_FUN_14b466580;
  puVar2[2] = *param_2;
  if (((*(int *)(param_1 + 0x84) != 0) && (uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x84))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_1409ee7a4(uVar3,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14129c610 FUN_14129c610 body=169 status=ok
// SIG undefined FUN_14129c610(void)

void FUN_14129c610(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_FUN_14b466578;
  puVar2[2] = *param_2;
  if (((*(int *)(param_1 + 0x84) != 0) && (uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x84))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_1409ee7a4(uVar3,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14129c6ba FUN_14129c6ba body=142 status=ok
// SIG undefined FUN_14129c6ba(void)

void FUN_14129c6ba(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  if (0 < (longlong)*(int *)(param_1 + 0x58)) {
    uVar4 = (longlong)*(int *)(param_1 + 0x58) + 1;
    do {
      plVar2 = *(longlong **)(*plVar1 + -0x10 + uVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        puVar3 = *(undefined8 **)(*plVar1 + -0x10 + uVar4 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14129c748(plVar1,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_14480809c(param_1 + 0x68,0);
  return;
}



// FUNCTION 14129c748 FUN_14129c748 body=317 status=ok
// SIG undefined FUN_14129c748(void)

void FUN_14129c748(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14129c7b1;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14129c7b1:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14129c886 FUN_14129c886 body=104 status=ok
// SIG undefined FUN_14129c886(void)

void FUN_14129c886(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a4952a0;
  param_1[0x1f] = &PTR_FUN_14a495610;
  lVar1 = 0x6c0;
  do {
    FUN_1404db99a((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x118;
  } while (lVar1 != 0x378);
  lVar1 = 0x378;
  do {
    FUN_1404db99a((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x118;
  } while (lVar1 != 0x30);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 14129c8ee FUN_14129c8ee body=61 status=ok
// SIG undefined FUN_14129c8ee(void)

void FUN_14129c8ee(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14129c92c FUN_14129c92c body=502 status=ok
// SIG undefined FUN_14129c92c(void)

void FUN_14129c92c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    FUN_14020fad6(param_1 + 0x348,&DAT_149dfb77a);
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined1 *)(param_1 + 0x347) = 0;
    *(undefined1 *)(lVar2 + 0xb2) = 0;
    lVar3 = *(longlong *)(param_1 + 0x288);
    if (lVar3 != 0) {
      FUN_14020fad6(lVar3 + 0x230,&DAT_149dfb77a);
      FUN_14020fad6(lVar3 + 0x240);
      *(undefined8 *)(lVar3 + 0x250) = 0;
      if (1 < *(int *)(lVar3 + 0xd8)) {
        lVar5 = *(longlong *)(lVar3 + 0xd0);
        if (*(int *)(lVar5 + 0x40) != 0) {
          lVar6 = 0x11e;
          uVar7 = 0;
          do {
            *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
            *(undefined1 *)(*(longlong *)(lVar5 + 0x38) + lVar6) = 0;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x120;
          } while (uVar7 != *(uint *)(lVar5 + 0x40));
          lVar5 = *(longlong *)(lVar3 + 0xd0);
        }
        if (*(int *)(lVar5 + 0xb8) != 0) {
          lVar6 = 0x11e;
          uVar7 = 0;
          do {
            *(int *)(lVar5 + 0xc0) = *(int *)(lVar5 + 0xc0) + 1;
            *(undefined1 *)(*(longlong *)(lVar5 + 0xb0) + lVar6) = 0;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x120;
          } while (uVar7 != *(uint *)(lVar5 + 0xb8));
        }
      }
      puVar4 = *(ushort **)(lVar3 + 0x80);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    if (((*(char *)(lVar2 + 0xb0) != '\x01') || (*(char *)(param_1 + 0x370) != '\0')) ||
       (0 < *(int *)(param_1 + 0x388))) {
      FUN_14129cb24(param_1);
    }
    puVar4 = *(ushort **)(lVar2 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
    uVar1 = *(uint *)(param_1 + 0x330);
    if (1 < (int)uVar1) {
      local_38 = (void *)0x0;
      _Src = *(void **)(param_1 + 0x328);
      local_30 = uVar1;
      FUN_1446dd670(&local_38,(ulonglong)uVar1,0);
      memcpy(local_38,_Src,(ulonglong)uVar1 * 2);
      local_40 = *(undefined8 *)(param_1 + 0x338);
      FUN_1459c72f2(param_1,&local_38);
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129cb24 FUN_14129cb24 body=346 status=ok
// SIG undefined FUN_14129cb24(void)

void FUN_14129cb24(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x346) == '\x01') {
    lVar3 = FUN_1407f4ede();
    if (lVar3 != 0) {
      lVar4 = FUN_1407f4df8();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))) {
        uVar2 = (uint)((ulonglong)DAT_14cbdf470 >> 0x10);
        uVar5 = (uint)DAT_14cbdf470 & 0xffff;
        lVar3 = param_1 + 0x110;
        if (*(longlong *)(param_1 + 0x118) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x118);
        }
        iVar6 = *(int *)(lVar3 + (ulonglong)
                                 (*(int *)(param_1 + 0x120) - 1U &
                                 (int)((ulonglong)DAT_14cbdf470 >> 0x20) +
                                 ((uint)DAT_14cbdf470 << 0x10 | uVar5) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
            if (*plVar1 == DAT_14cbdf470) {
              if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                local_20 = 0;
                FUN_14485c47a(&local_20,plVar1[1]);
                FUN_1412e3bcc(param_1,local_20);
                *(undefined1 *)(param_1 + 0x346) = 0;
              }
              break;
            }
            iVar6 = (int)plVar1[2];
          } while (iVar6 != -1);
        }
      }
    }
    if (*(char *)(param_1 + 0x345) == '\x01') {
      *(undefined1 *)(param_1 + 0x345) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129cc8e FUN_14129cc8e body=676 status=ok
// SIG undefined FUN_14129cc8e(void)

longlong FUN_14129cc8e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
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
  lVar3 = FUN_14129cf48(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 != 0) {
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_14129cd1c;
  }
  lVar3 = *(longlong *)(lVar3 + 0x168);
  if (lVar3 != 0) {
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
LAB_14129cd1c:
      uVar1 = *(uint *)(lVar3 + 0xc);
      *(uint *)(param_1 + 0x78) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar2 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar2 = *(int *)(lVar5 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar4;
        }
      }
      *(int *)(param_1 + 0x7c) = iVar2;
      if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14129cf48 FUN_14129cf48 body=98 status=ok
// SIG undefined FUN_14129cf48(void)

undefined8 FUN_14129cf48(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x17c) != 0) && (uVar1 = *(uint *)(param_1 + 0x178), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x17c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014129cfa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14129cfaa FUN_14129cfaa body=284 status=ok
// SIG undefined FUN_14129cfaa(void)

void FUN_14129cfaa(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  bVar1 = *(byte *)(param_1 + 0x172);
  if (((bVar1 & 2) == 0) && (((bVar1 & 0x20) != 0 || (param_1[0x1ac] == DAT_14cb94e30)))) {
    *(byte *)(param_1 + 0x172) = bVar1 | 2;
    if ((bVar1 & 0x20) == 0) {
      local_18 = param_1;
      FUN_1447cd2ec(param_1 + 0x137);
    }
    else if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x164] + 0x80))();
    }
    if (((char)param_1[0x2f] != '\x03') && ((longlong *)param_1[0x36] != (longlong *)0x0)) {
      cVar2 = (**(code **)(*(longlong *)param_1[0x36] + 0x700))();
      if (cVar2 != '\0') {
        uVar3 = FUN_14477b072(param_1,DAT_14cb938c8);
        (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
      }
    }
    plVar4 = (longlong *)FUN_1401654a2(param_1);
    if ((int)param_1[0x182] != 0) {
LAB_14129d0ba:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
    if ((plVar4 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x172) & 8) != 0)) {
      cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4);
      if (cVar2 != '\0') goto LAB_14129d0ba;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129d0d4 FUN_14129d0d4 body=221 status=ok
// SIG undefined FUN_14129d0d4(void)

longlong FUN_14129d0d4(void)

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
  if (DAT_14cb630c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486ed437;
    local_40 = FUN_143c634c4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSequenceActorDefObject",&DAT_14cb630c8,&DAT_1486ed436);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb630c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129d1b2 FUN_14129d1b2 body=251 status=ok
// SIG undefined FUN_14129d1b2(void)

void FUN_14129d1b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  *(undefined **)(param_1 + 0x28) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a177080;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x30),0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (0x80 < *(uint *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    FUN_1446efbd8(param_1 + 0x40,0);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1407778c7(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14129d2ae FUN_14129d2ae body=377 status=ok
// SIG undefined FUN_14129d2ae(void)

void FUN_14129d2ae(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
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
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = FUN_1447210f0();
  lVar4 = FUN_1449baec6(uVar3);
  lVar5 = *(longlong *)(param_1 + 0x430);
  if (lVar5 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar5 = *(longlong *)(param_1 + 0x430);
      if (lVar5 == 0) goto LAB_14129d358;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((lVar4 != 0 &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30)))) {
      (**(code **)(*param_2 + 8))(param_2,lVar5 + 0x1f8,lVar4);
      cVar2 = (**(code **)(*param_2 + 0x10))(param_2);
      *(byte *)(param_1 + 2000) = *(byte *)(param_1 + 2000) & 0xfd | cVar2 * '\x02';
    }
  }
LAB_14129d358:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129d428 FUN_14129d428 body=401 status=ok
// SIG undefined FUN_14129d428(void)

void FUN_14129d428(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140761b7a(param_3,&local_48);
  plVar2 = local_40;
  if (local_48 != 0) {
    if (local_40 == (longlong *)0x0) {
      local_58 = local_48;
      local_50 = (longlong *)0x0;
      FUN_140592ae6(param_2);
      local_68 = local_48;
      local_60 = (longlong *)0x0;
      FUN_140592b68(param_2,&local_68,2,0);
      local_70 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      local_58 = local_48;
      local_50 = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      FUN_140592ae6(param_2);
      local_68 = local_48;
      local_60 = plVar2;
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      FUN_140592b68(param_2,&local_68,2,0);
      local_70 = plVar2;
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    FUN_1405929ee(param_2,local_78);
    if (*(char *)(param_3 + 0x3cc) != '\x01') {
      *(undefined1 *)(param_3 + 0x3cc) = 1;
    }
    *(undefined1 *)(param_3 + 0x3c9) = 0;
    cVar4 = '\x02' - *(char *)(param_1 + 8);
    if (*(char *)(param_3 + 0x3ca) != cVar4) {
      *(char *)(param_3 + 0x3ca) = cVar4;
    }
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129d5ba FUN_14129d5ba body=15 status=ok
// SIG undefined FUN_14129d5ba(void)

void FUN_14129d5ba(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3cb) != param_2) {
    *(char *)(param_1 + 0x3cb) = param_2;
  }
  return;
}



// FUNCTION 14129d5ca FUN_14129d5ca body=180 status=ok
// SIG undefined FUN_14129d5ca(void)

void FUN_14129d5ca(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_14129d680(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129d680 FUN_14129d680 body=700 status=ok
// SIG undefined FUN_14129d680(void)

int * FUN_14129d680(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  byte bVar6;
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
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_1406cd6a8(param_1,iVar25);
    }
    lVar26 = (longlong)iVar25;
    iVar24 = FUN_144a54ea4(param_1 + 2,1);
    plVar20 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar20 = param_1 + 2;
    }
    iVar21 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar21 = iVar24;
    }
    bVar6 = (byte)iVar24 & 0x1f;
    puVar1 = (uint *)((longlong)plVar20 + (longlong)(iVar21 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar26 = (longlong)iVar25;
    iVar24 = *(int *)(*param_1 + 4 + lVar26 * 0x40);
    *(int *)(param_1 + 6) = iVar24;
    iVar21 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar21;
    if (iVar21 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar24 * 0x40) = 0xffffffff;
    }
  }
  iVar24 = 1;
  plVar20 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar20 = (longlong *)param_1[4];
  }
  iVar21 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar21 = iVar25;
  }
  puVar1 = (uint *)((longlong)plVar20 + (longlong)(iVar21 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar25 & 0x1f);
  lVar5 = *param_1;
  lVar26 = lVar26 * 0x40;
  puVar2 = (undefined4 *)(lVar26 + lVar5);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  *(undefined8 *)(lVar5 + lVar26) = *(undefined8 *)*param_3;
  puVar3 = (undefined8 *)(lVar5 + 8 + lVar26);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar5 + 0x18 + lVar26);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined4 *)(lVar5 + 0x28 + lVar26);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0xffffffff;
  puVar4[3] = 0xffffffff;
  FUN_14129d93e();
  *(undefined4 *)(lVar5 + 0x38 + lVar26) = 0xffffffff;
  lVar26 = *(longlong *)(lVar5 + lVar26);
  uVar19 = (int)((ulonglong)lVar26 >> 0x20) * 0x17 + (int)lVar26;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar23) {
    plVar20 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar20 + (ulonglong)((int)param_1[9] - 1U & uVar19) * 4);
    if (iVar21 != -1) {
      do {
        puVar4 = (undefined4 *)(*param_1 + (longlong)iVar21 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar21 * 0x40) == lVar26) {
          FUN_14129d93e(puVar4 + 2);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          uVar11 = puVar2[4];
          uVar12 = puVar2[5];
          uVar13 = puVar2[6];
          uVar14 = puVar2[7];
          uVar15 = puVar2[8];
          uVar16 = puVar2[9];
          uVar17 = puVar2[10];
          uVar18 = puVar2[0xb];
          *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
          puVar4[8] = uVar15;
          puVar4[9] = uVar16;
          puVar4[10] = uVar17;
          puVar4[0xb] = uVar18;
          puVar4[4] = uVar11;
          puVar4[5] = uVar12;
          puVar4[6] = uVar13;
          puVar4[7] = uVar14;
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          FUN_141152036(param_1,iVar25);
          goto LAB_14129d7e9;
        }
        iVar21 = puVar4[0xe];
      } while (iVar21 != -1);
    }
  }
  if (3 < uVar23) {
    uVar22 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar26 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    iVar24 = 1 << ((byte)lVar26 & 0x1f);
  }
  iVar21 = iVar25;
  if (((int)uVar23 < 1) || (iVar24 <= (int)param_1[9])) {
    uVar19 = (int)param_1[9] - 1U & uVar19;
    puVar2[0xf] = uVar19;
    plVar20 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar20 = param_1 + 7;
    }
    puVar2[0xe] = *(undefined4 *)
                   ((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar19) * 4
                   );
    plVar20 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar20 = param_1 + 7;
    }
    *(int *)((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar19) * 4) =
         iVar25;
  }
  else {
    *(int *)(param_1 + 9) = iVar24;
    FUN_145889106(param_1);
  }
LAB_14129d7e9:
  *param_2 = iVar21;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14129d93e FUN_14129d93e body=164 status=ok
// SIG undefined FUN_14129d93e(void)

void FUN_14129d93e(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_14129d9e2(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14129d9e2 FUN_14129d9e2 body=398 status=ok
// SIG undefined FUN_14129d9e2(void)

void FUN_14129d9e2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 14129db70 FUN_14129db70 body=40 status=ok
// SIG undefined FUN_14129db70(void)

undefined8 FUN_14129db70(undefined8 param_1,int param_2)

{
  FUN_14129db98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14129db98 FUN_14129db98 body=483 status=ok
// SIG undefined FUN_14129db98(void)

void FUN_14129db98(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b5300;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x31;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x35) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x34)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x34)) {
    FUN_1400020a8(*plVar1);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x26);
  plVar1 = param_1 + 0x20;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x24) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x23)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x23)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14b1b5150;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14129dd7c FUN_14129dd7c body=420 status=ok
// SIG undefined FUN_14129dd7c(void)

void FUN_14129dd7c(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined1 local_470 [528];
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_1e8;
  undefined4 local_168;
  undefined4 local_e8;
  undefined4 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (1 < param_2) goto LAB_14129debd;
  if ((param_6 == '\0') && ((char)param_1[(ulonglong)param_2 * 0x42 + 0xb] == '\x01')) {
    if ((param_3 == (undefined8 *)0x0) || (*(char *)(param_3 + 1) != '\x01')) goto LAB_14129debd;
    FUN_14129df22(&local_260);
LAB_14129dddf:
    local_258 = *(undefined4 *)(param_3 + 1);
    local_260 = *param_3;
    lVar2 = 4;
    puVar1 = &local_260;
    do {
      *(undefined2 *)((longlong)puVar1 + 0x7c) = *(undefined2 *)((longlong)param_3 + 0x7c);
      *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(puVar1 + 0x10,param_3 + 0x10);
      lVar2 = lVar2 + -1;
      param_3 = param_3 + 0x10;
      puVar1 = puVar1 + 0x10;
    } while (lVar2 != 0);
  }
  else {
    FUN_14129df22(&local_260);
    if (param_3 != (undefined8 *)0x0) goto LAB_14129dddf;
    local_1e8 = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_168 = (undefined4)param_1[8];
    local_e8 = *(undefined4 *)((longlong)param_1 + 0x44);
    local_68 = (undefined4)param_1[9];
  }
  local_478 = param_5;
  FUN_14130b975(local_470,param_1 + (ulonglong)param_2 * 0x42 + 10,&local_260,param_4);
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_470);
  FUN_140b623da(local_470);
  FUN_140b623da(&local_260);
LAB_14129debd:
  if ((local_50 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129df22 FUN_14129df22 body=116 status=ok
// SIG undefined FUN_14129df22(void)

void FUN_14129df22(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar2 = 0x80;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x48) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x40) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x68);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x34) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0x7f7fffff;
    *(undefined2 *)((longlong)param_1 + lVar2 + -4) = 0x404;
    *(undefined **)((longlong)param_1 + lVar2 + -0x70) = &DAT_14a176f00;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x280);
  return;
}



// FUNCTION 14129df96 FUN_14129df96 body=93 status=ok
// SIG undefined FUN_14129df96(void)

void FUN_14129df96(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x248));
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1f0) = 0;
  }
  FUN_140368b56(param_1);
  return;
}



// FUNCTION 14129dff4 FUN_14129dff4 body=415 status=ok
// SIG undefined FUN_14129dff4(void)

longlong FUN_14129dff4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  FUN_140a6a9d4();
  puVar12 = (undefined8 *)(param_2 + 0xe0);
  puVar13 = (undefined8 *)(param_1 + 0xe0);
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  uVar8 = *(undefined8 *)(param_2 + 0x140);
  uVar9 = *(undefined8 *)(param_2 + 0x148);
  uVar1 = *(undefined4 *)(param_2 + 0x150);
  uVar2 = *(undefined4 *)(param_2 + 0x154);
  uVar3 = *(undefined4 *)(param_2 + 0x158);
  uVar4 = *(undefined4 *)(param_2 + 0x15c);
  uVar5 = *(undefined4 *)(param_2 + 0x164);
  uVar6 = *(undefined4 *)(param_2 + 0x168);
  uVar7 = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = uVar5;
  *(undefined4 *)(param_1 + 0x168) = uVar6;
  *(undefined4 *)(param_1 + 0x16c) = uVar7;
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  *(undefined4 *)(param_1 + 0x158) = uVar3;
  *(undefined4 *)(param_1 + 0x15c) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = uVar8;
  *(undefined8 *)(param_1 + 0x148) = uVar9;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  uVar8 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = uVar8;
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
    uVar1 = *(undefined4 *)(param_2 + 0x20c);
    uVar2 = *(undefined4 *)(param_2 + 0x210);
    uVar3 = *(undefined4 *)(param_2 + 0x214);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
    *(undefined4 *)(param_1 + 0x20c) = uVar1;
    *(undefined4 *)(param_1 + 0x210) = uVar2;
    *(undefined4 *)(param_1 + 0x214) = uVar3;
    goto LAB_14129e0fd;
  }
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    puVar12 = (undefined8 *)(param_2 + 400);
    puVar13 = (undefined8 *)(param_1 + 400);
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar10 = 1;
LAB_14129e17e:
    *(undefined1 *)(param_1 + 0x1f0) = uVar10;
  }
  else if (*(char *)(param_1 + 0x1f0) != '\0') {
    uVar10 = 0;
    goto LAB_14129e17e;
  }
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  uVar1 = *(undefined4 *)(param_2 + 0x20c);
  uVar2 = *(undefined4 *)(param_2 + 0x210);
  uVar3 = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  *(undefined4 *)(param_1 + 0x214) = uVar3;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined8 *)(param_2 + 0x220) = 0;
LAB_14129e0fd:
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  FUN_14019d794(param_1 + 0x240,param_2 + 0x240);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  return param_1;
}



// FUNCTION 14129e194 FUN_14129e194 body=294 status=ok
// SIG undefined FUN_14129e194(void)

longlong * FUN_14129e194(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118 [72];
  longlong local_d0;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14129e2bb(&local_60,param_2,local_118);
  if ((longlong)local_58 == 0) {
    local_58 = 0;
  }
  else {
    lVar3 = (longlong)local_58 * 0xb8;
    lVar2 = local_60;
    do {
      FUN_140ed40b0(local_118,lVar2);
      if ((local_d0 != 0) && (*(char *)(local_d0 + 0x38) == param_3)) {
        uVar4 = FUN_14136ab98(local_118);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_1,iVar1);
        }
        *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = uVar4;
      }
      lVar2 = lVar2 + 0xb8;
      lVar3 = lVar3 + -0xb8;
    } while (lVar3 != 0);
  }
  FUN_14499183d(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14129e2bb FUN_14129e2bb body=167 status=ok
// SIG undefined FUN_14129e2bb(void)

undefined8 * FUN_14129e2bb(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_14129e363(&local_48,*(undefined8 *)(lVar1 + lVar3),param_3);
      FUN_140ed4016(param_1,&local_48);
      FUN_14499183d(local_48,local_40);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129e363 FUN_14129e363 body=746 status=ok
// SIG undefined FUN_14129e363(void)

longlong * FUN_14129e363(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined6 local_64;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar6 = FUN_14063d1f6();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = FUN_1405b04b6();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && ((longlong)(int)param_2[0x23] != 0)))) {
        plVar11 = (longlong *)param_2[0x22];
        plVar2 = plVar11 + (longlong)(int)param_2[0x23] * 5;
        do {
          lVar6 = *plVar11;
          if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x90) != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x88);
            lVar6 = (longlong)*(int *)(lVar6 + 0x90) * 0xb8;
            do {
              lVar10 = *(longlong *)(lVar9 + 0x48);
              if (lVar10 != 0) {
                lVar8 = FUN_14129e64e();
                lVar10 = *(longlong *)(lVar10 + 0x10);
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  iVar3 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                    FUN_140ed4548(param_1,iVar3);
                  }
                  FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar9);
                }
              }
              lVar9 = lVar9 + 0xb8;
              lVar6 = lVar6 + -0xb8;
            } while (lVar6 != 0);
          }
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar2);
      }
    }
    else {
      local_f0 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_b8 = 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_64 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f4 = 0x7f7fffff;
      local_f8 = 0;
      (**(code **)(*param_2 + 0x2c8))(param_2,&local_f8,&local_f4,&local_f0);
      uVar5 = uStack_e0;
      lVar6 = local_e8;
      lVar9 = (longlong)(int)uStack_e0;
      local_e8 = 0;
      uStack_e0 = 0;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          if (((*(longlong *)(lVar6 + 0x20 + lVar10) != 0) &&
              (lVar8 = *(longlong *)(lVar6 + 0x10 + lVar10), lVar8 != 0)) &&
             (lVar4 = *(longlong *)(lVar8 + 0x48), lVar4 != 0)) {
            lVar7 = FUN_14129e64e();
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              iVar3 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                FUN_140ed4548(param_1,iVar3);
              }
              FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar8);
            }
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar9 * 0x30 != lVar10);
      }
      FUN_1448262fc(lVar6,uVar5 & 0xffffffff);
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
      }
      FUN_1448262fc(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14129e64e FUN_14129e64e body=228 status=ok
// SIG undefined FUN_14129e64e(void)

longlong FUN_14129e64e(void)

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
  if (DAT_14cb9f220 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_148b7d301;
    local_40 = FUN_1418c2b3d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"AnimNotify_Vehicle",&DAT_14cb9f220,&DAT_148b7d300);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f220;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129e734 FUN_14129e734 body=515 status=ok
// SIG undefined FUN_14129e734(void)

void FUN_14129e734(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = param_2;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar9 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar9 = *(int *)(param_1 + 0x30);
  }
  lVar5 = local_60;
  iVar7 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ != iVar9 || local_60 != lVar1) {
    do {
      lVar14 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar6 * 0x28) +
                (longlong)
                (*(int *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar6 * 0x28) + -1) * 0x10);
      if (((*(byte *)(lVar14 + 0x244) & 1) != 0) &&
         (((*(char *)(lVar14 + 0x178) != '\x01' || (*(char *)(lVar14 + 0x245) != '\0')) &&
          (*(int *)(lVar14 + 0x148) != 0)))) {
        FUN_14129e938(lVar14,local_70);
      }
      uVar11 = uVar11 & ~(uint)uVar15;
      lVar14 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar14 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar12 = (longlong)iVar7;
      uVar8 = *(uint *)(lVar14 + lVar12 * 4) & uVar11;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar4 = iVar6;
        if (iVar6 < iVar7) {
          iVar4 = iVar7;
        }
        if (iVar7 < iVar6) {
          lVar13 = 0;
          do {
            uVar8 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
            if (uVar8 != 0) {
              iVar7 = iVar7 + (int)lVar13 + 1;
              uVar11 = 0xffffffff;
              goto LAB_14129e877;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar4 - lVar12 != lVar13);
          uVar11 = 0xffffffff;
          iVar7 = iVar4;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar3;
      }
      else {
LAB_14129e877:
        uVar15 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar9 || lVar5 != lVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129e938 FUN_14129e938 body=549 status=ok
// SIG undefined FUN_14129e938(void)

/* WARNING: Removing unreachable block (ram,0x00014129eb57) */

void FUN_14129e938(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x30))();
  uVar2 = (uint)local_60;
  iVar3 = ((uint)local_60 == 0) + 0xd;
  local_58 = local_68;
  local_68 = (void *)0x0;
  local_50 = (uint)local_60;
  iVar1 = local_60._4_4_;
  local_4c = local_60._4_4_;
  local_60 = 0;
  iVar5 = iVar3 + uVar2;
  if (iVar5 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar5) {
    if (iVar1 < iVar5) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1401aebe8(&local_58,L"Localization",0xc);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar4 = (**(code **)(*param_1 + 0x98))(param_1);
    iVar1 = *(int *)(lVar4 + 0x100);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0xf8);
      lVar7 = 0;
      do {
        uVar2 = local_50;
        _Src = local_58;
        if ((*(int *)(lVar4 + 0x10 + lVar7) - 1U & 0xfffffffd) == 0) {
          iVar3 = *(int *)(lVar4 + 8 + lVar7);
          iVar5 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar5 = 0;
          }
          lVar8 = (longlong)(int)local_50;
          iVar3 = iVar5 + 1 + (uint)(lVar8 == 0);
          local_68 = (void *)0x0;
          local_60 = CONCAT44(local_60._4_4_,local_50);
          if (iVar3 == 0 && local_50 == 0) {
            local_60 = (ulonglong)local_50;
          }
          else {
            iVar5 = iVar3 + local_50;
            if (iVar3 < 0) goto LAB_14129eb32;
            FUN_1446dd670(&local_68,iVar5,0);
            if (uVar2 != 0) {
              memcpy(local_68,_Src,lVar8 * 2);
            }
          }
          FUN_1401aebe8(&local_68,*(undefined8 *)(lVar4 + lVar7));
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1447a1bd6(param_2,iVar3);
          }
          lVar8 = *param_2;
          lVar6 = (longlong)iVar3 * 0x10;
          *(undefined8 *)(lVar8 + lVar6) = 0;
          *(void **)(lVar8 + lVar6) = local_68;
          local_68 = (void *)0x0;
          *(uint *)(lVar8 + 8 + lVar6) = (uint)local_60;
          *(int *)(lVar8 + 0xc + lVar6) = local_60._4_4_;
          local_60 = 0;
        }
        lVar7 = lVar7 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar7);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14129eb32:
  local_68 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 14129eb64 FUN_14129eb64 body=191 status=ok
// SIG undefined FUN_14129eb64(void)

longlong * FUN_14129eb64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140bee914(&local_28);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 8;
  *param_2 = local_28;
  local_28 = 0;
  *(int *)(param_2 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_2 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_2);
    }
    FUN_1401aebe8(param_2,L"Content",7);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 14129ec24 FUN_14129ec24 body=228 status=ok
// SIG undefined FUN_14129ec24(void)

longlong FUN_14129ec24(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac2328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1457dfdaa;
    local_28 = &LAB_14637ddd6;
    local_38 = &LAB_14787f4b6;
    local_40 = &LAB_1457087ec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x1c0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingDynamic",&DAT_14cac2328,FUN_14637de9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac2328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129ed0a FUN_14129ed0a body=228 status=ok
// SIG undefined FUN_14129ed0a(void)

longlong FUN_14129ed0a(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cadb8c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145893408;
    local_28 = &LAB_145a53e16;
    local_38 = &LAB_147acb3bc;
    local_40 = &LAB_1463cf9d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x3d0;
    FUN_14081cfa3(L"/Script/Engine",L"GameViewportClient",&DAT_14cadb8c0,FUN_1463cf9b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadb8c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129edf0 FUN_14129edf0 body=228 status=ok
// SIG undefined FUN_14129edf0(void)

longlong FUN_14129edf0(void)

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
  if (DAT_14caec3a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417df956;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463eaa20;
    local_38 = &LAB_147bbbd80;
    local_40 = FUN_1417e055a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2e8;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceConstant",&DAT_14caec3a8,FUN_1463eae02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caec3a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129eed6 FUN_14129eed6 body=228 status=ok
// SIG undefined FUN_14129eed6(void)

longlong FUN_14129eed6(void)

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
  if (DAT_14cb0b9e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146408884;
    local_38 = &LAB_147d72a89;
    local_40 = &LAB_145a0e89c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTargetVolume",&DAT_14cb0b9e8,&DAT_147d72a88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b9e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129efbc FUN_14129efbc body=40 status=ok
// SIG undefined FUN_14129efbc(void)

undefined8 FUN_14129efbc(undefined8 param_1,int param_2)

{
  FUN_14129efe4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14129efe4 FUN_14129efe4 body=311 status=ok
// SIG undefined FUN_14129efe4(void)

void FUN_14129efe4(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b5400;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14118f4a2(param_1 + 0x20);
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x7c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14129f11c FUN_14129f11c body=31 status=ok
// SIG undefined FUN_14129f11c(void)

void FUN_14129f11c(longlong *param_1)

{
  FUN_144842962();
                    /* WARNING: Could not recover jumptable at 0x00014129f134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 14129f146 FUN_14129f146 body=833 status=ok
// SIG undefined FUN_14129f146(void)

void FUN_14129f146(longlong param_1,byte *param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  byte bVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14129f488(local_58);
  if (*param_2 == 1) {
    iVar17 = *(int *)(param_2 + 0x30);
    uVar16 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar17);
    *(int *)(param_2 + 0x30) = iVar17 + 1;
    lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar17 * 8);
    iVar17 = *(int *)(param_2 + 0x44) * uVar16;
    bVar10 = 1;
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar20 = uVar2 & 0x7fff;
    uVar16 = (uint)(uVar2 >> 0xf);
    lVar13 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar12 = (ulonglong)(uVar20 * *(int *)(lVar13 + 0x80)) + *(longlong *)(lVar13 + 0x70);
    }
    else {
      iVar17 = **(int **)(lVar13 + 0x20);
      lVar12 = 0;
      if (iVar17 <= (int)uVar20) {
        do {
          uVar20 = uVar20 - iVar17;
          iVar17 = (*(int **)(lVar13 + 0x20))[lVar12 + 1];
          lVar12 = lVar12 + 1;
        } while (iVar17 <= (int)uVar20);
      }
      lVar12 = (longlong)(int)uVar20 + *(longlong *)(*(longlong *)(lVar13 + 0x18) + lVar12 * 8);
    }
    iVar17 = *(int *)(lVar13 + 0x4c) * uVar16;
    bVar10 = *param_2;
  }
  if ((bVar10 & 1) == 0) {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar20 = uVar2 & 0x7fff;
    lVar7 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar13 = (ulonglong)(uVar20 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70);
    }
    else {
      iVar18 = **(int **)(lVar7 + 0x20);
      lVar13 = 0;
      if (iVar18 <= (int)uVar20) {
        do {
          uVar20 = uVar20 - iVar18;
          iVar18 = (*(int **)(lVar7 + 0x20))[lVar13 + 1];
          lVar13 = lVar13 + 1;
        } while (iVar18 <= (int)uVar20);
      }
      lVar13 = (longlong)(int)uVar20 + *(longlong *)(*(longlong *)(lVar7 + 0x18) + lVar13 * 8);
    }
    uVar20 = (uint)(uVar2 >> 0xf);
    pbVar11 = (byte *)(lVar7 + 0x4c);
  }
  else {
    iVar18 = *(int *)(param_2 + 0x30);
    uVar20 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar18);
    *(int *)(param_2 + 0x30) = iVar18 + 1;
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar18 * 8);
    pbVar11 = param_2 + 0x44;
  }
  iVar18 = *(int *)pbVar11;
  FUN_140126e42(&local_68,param_2);
  pbVar11 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar11 = param_2 + 0x3c;
  }
  iVar19 = *(int *)pbVar11;
  if (0 < iVar19) {
    puVar14 = (undefined4 *)(lVar12 + (longlong)iVar17 * 4);
    puVar15 = (undefined4 *)(lVar13 + (longlong)(int)(iVar18 * uVar20) * 4);
    iVar17 = 0;
    do {
      if (((iVar19 == 1) && (local_50 != 0)) && (-1 < *(int *)(param_1 + 0x3c))) {
        uVar3 = *puVar14;
        uVar4 = *puVar15;
        uVar5 = *(uint *)(param_1 + 0x40);
        piVar1 = local_68 + local_60;
        *local_68 = (int)~uVar5 >> 0x1f;
        local_68 = piVar1;
        if (-1 < (int)uVar5) {
          uVar8 = *(undefined8 *)(local_50 + 4);
          *(undefined4 *)(local_50 + 4) = uVar3;
          *(undefined4 *)(local_50 + 8) = uVar4;
          fVar9 = DAT_14c762864;
          if (1e-08 < ABS(DAT_14c762864 + -1.0)) {
            iVar18 = (int)((float)*(int *)(local_50 + 4) * DAT_14c762864);
            if (iVar18 < 2) {
              iVar18 = 1;
            }
            *(int *)(local_50 + 4) = iVar18;
            iVar19 = (int)((float)*(int *)(local_50 + 8) * fVar9);
            iVar18 = 1;
            if (1 < iVar19) {
              iVar18 = iVar19;
            }
            *(int *)(local_50 + 8) = iVar18;
          }
          bVar21 = true;
          if (*(int *)(local_50 + 4) == (int)uVar8) {
            bVar21 = *(int *)(local_50 + 8) != (int)((ulonglong)uVar8 >> 0x20);
          }
          *(bool *)(local_50 + 0x98) = bVar21;
        }
      }
      else {
        *local_68 = 0;
        local_68 = local_68 + local_60;
      }
      iVar17 = iVar17 + 1;
      pbVar11 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar11 = param_2 + 0x3c;
      }
      iVar19 = *(int *)pbVar11;
      puVar15 = (undefined4 *)((longlong)puVar15 + (ulonglong)(uVar20 << 2));
      puVar14 = (undefined4 *)((longlong)puVar14 + (ulonglong)(uVar16 << 2));
    } while (iVar17 < iVar19);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129f488 FUN_14129f488 body=148 status=ok
// SIG undefined FUN_14129f488(void)

void FUN_14129f488(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 14129f51c FUN_14129f51c body=101 status=ok
// SIG undefined FUN_14129f51c(void)

void FUN_14129f51c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar3 + lVar5) == param_2) &&
         (plVar4 = *(longlong **)(lVar3 + 0xe8 + lVar5), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x2b0))();
        pbVar1 = (byte *)(lVar3 + 0x15 + lVar5);
        *pbVar1 = *pbVar1 & 0xf7;
      }
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)iVar2 * 0xf0 - lVar5 != 0);
  }
  return;
}


