// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473d374a FUN_1473d374a body=97 status=ok
// SIG undefined FUN_1473d374a(void)

longlong * FUN_1473d374a(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1473d37ac(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_28,
                        *(longlong *)(param_1 + 0x48));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d37ac FUN_1473d37ac body=1058 status=ok
// SIG undefined FUN_1473d37ac(void)

undefined8 * FUN_1473d37ac(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  PSRWLOCK SRWLock;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  longlong *local_268;
  longlong local_260;
  undefined8 *local_258;
  longlong *local_248;
  PSRWLOCK local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong local_228 [2];
  undefined4 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8 [18];
  undefined8 local_118;
  PSRWLOCK local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 **local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar6 = (int)param_2[1];
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar6,0);
  lVar12 = CONCAT44(iVar2,iVar6);
  local_f8 = lVar12;
  puVar3 = (undefined8 *)FUN_1473b6342(param_1);
  if (puVar3 == (undefined8 *)0x0) {
    local_240 = (PSRWLOCK)*param_2;
    local_248 = (longlong *)(longlong)(int)param_2[1];
    memset(local_1a8,0,0x90);
    FUN_144869430(local_1a8);
    local_118 = 0;
    local_1a8[0] = &PTR_FUN_149e1ddc0;
    local_110 = local_240;
    local_108 = local_248;
    local_100 = 0x7fffffffffffffff;
    FUN_140996f94(local_1a8,1);
    (*(code *)local_1a8[0][0x1e])(local_1a8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1a8);
    local_210[0] = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1402ee999(local_1a8);
    local_228[0] = 0;
    local_228[1] = 0;
    local_218 = 0xffffffff;
    FUN_1473d17f2(local_1a8);
    SRWLock = (PSRWLOCK)(param_1 + 0x20);
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
      lVar7 = param_1 + 0x1d8;
      if (*(longlong *)(param_1 + 0x1e0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x1e0);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & iVar2 * 0x17 + iVar6) *
                               4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar12) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar12 = plVar1[1];
              puVar3 = (undefined8 *)(lVar12 + -0xa0);
              if (lVar12 == 0) {
                puVar3 = (undefined8 *)0x0;
              }
              goto LAB_1473d3b44;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
    local_248 = (longlong *)(param_1 + 0x1a0);
    local_240 = SRWLock;
    puVar3 = (undefined8 *)FUN_14001cc68(0x1a8);
    lVar7 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 10;
    *(byte *)((longlong)puVar3 + 0xd) = *(byte *)((longlong)puVar3 + 0xd) | 3;
    local_238 = puVar3 + 2;
    *(undefined4 *)(puVar3 + 2) = 0;
    memset(puVar3 + 3,0,0x84);
    *(undefined1 *)((longlong)puVar3 + 0x9c) = 4;
    *(byte *)((longlong)puVar3 + 0x9d) = *(byte *)((longlong)puVar3 + 0x9d) & 0xfc;
    *(undefined2 *)((longlong)puVar3 + 0x9e) = 0;
    *puVar3 = &PTR_FUN_14a36bb70;
    puVar11 = puVar3 + 0x14;
    puVar3[0x14] = &PTR_LAB_14a36bb80;
    local_258 = puVar3 + 0xf;
    local_268 = local_228;
    local_260 = lVar12;
    FUN_1431b4220(puVar11,param_3,4,&local_d8);
    *puVar3 = &PTR_FUN_14a36bb70;
    puVar3[0x14] = &PTR_LAB_14a36bb80;
    FUN_1473df926(local_238,local_210);
    if (puVar3 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    local_e8 = &local_230;
    local_f0 = &local_f8;
    local_230 = puVar11;
    FUN_1473dfae6(local_248);
    lVar12 = *param_2 + (longlong)(int)param_2[1];
    if (3 < (ulonglong)(longlong)(int)param_2[1]) {
      lVar7 = (longlong)*(int *)(lVar12 + -4);
    }
    lVar7 = -lVar7;
    do {
      lVar8 = lVar7;
      SRWLock = local_240;
      if (-5 < lVar8) goto LAB_1473d3b44;
      uVar9 = (ulonglong)*(uint *)(lVar12 + 1 + lVar8);
      bVar13 = *(char *)(lVar12 + lVar8) != 'p';
      uVar10 = uVar9;
      if (!bVar13 && uVar9 == 5) {
        uVar10 = 0;
      }
      lVar7 = uVar10 + 5 + lVar8;
    } while (bVar13 || uVar9 != 5);
    pbVar4 = (byte *)(lVar12 + lVar8 + 5);
    if (pbVar4 != (byte *)0x0) {
      bVar5 = *(byte *)((longlong)puVar3 + 0x9d);
      if (*(char *)((longlong)puVar3 + 0x9c) == '\x05') {
        bVar5 = bVar5 & 0xfe | *pbVar4 >> 4 & 1;
        *(byte *)((longlong)puVar3 + 0x9d) = bVar5;
      }
      *(byte *)((longlong)puVar3 + 0x9d) = bVar5 & 0xfd | *pbVar4 >> 4 & 2;
      *(bool *)((longlong)puVar3 + 0x181) = (*pbVar4 & 6) != 0;
    }
LAB_1473d3b44:
    ReleaseSRWLockExclusive(SRWLock);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_210);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1a8);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 1473d3bd0 FUN_1473d3bd0 body=97 status=ok
// SIG undefined FUN_1473d3bd0(void)

longlong * FUN_1473d3bd0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1473d3c32(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_28,
                        *(longlong *)(param_1 + 0x48));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d3c32 FUN_1473d3c32 body=941 status=ok
// SIG undefined FUN_1473d3c32(void)

longlong FUN_1473d3c32(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong local_250;
  PSRWLOCK local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228 [2];
  undefined4 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8 [18];
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  iVar6 = (int)param_2[1];
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar6,0);
  lVar11 = CONCAT44(iVar2,iVar6);
  local_f8 = lVar11;
  lVar3 = FUN_1473dffd0(param_1);
  if (lVar3 == 0) {
    local_240 = (PSRWLOCK)*param_2;
    local_238 = (longlong)(int)param_2[1];
    memset(local_1a8,0,0x90);
    FUN_144869430(local_1a8);
    local_118 = 0;
    local_1a8[0] = &PTR_FUN_149e1ddc0;
    local_110 = (longlong)local_240;
    local_108 = local_238;
    local_100 = 0x7fffffffffffffff;
    FUN_140996f94(local_1a8,1);
    (*(code *)local_1a8[0][0x1e])(local_1a8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1a8);
    local_210[0] = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1402ee999(local_1a8);
    local_228[0] = 0;
    local_228[1] = 0;
    local_218 = 0xffffffff;
    FUN_1473d17f2(local_1a8,local_228);
    local_240 = (PSRWLOCK)(param_1 + 0x28);
    AcquireSRWLockExclusive(local_240);
    if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
      lVar3 = param_1 + 0x228;
      if (*(longlong *)(param_1 + 0x230) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x230);
      }
      iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x238) - 1U & iVar2 * 0x17 + iVar6) *
                               4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar6 * 0x18);
          if (*plVar1 == lVar11) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar11 = plVar1[1];
              lVar3 = lVar11 + -0xa8;
              if (lVar11 == 0) {
                lVar3 = 0;
              }
              goto LAB_1473d3f9e;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
    lVar3 = FUN_14001cc68(0x1b0,0x10);
    local_258 = local_228;
    local_250 = lVar11;
    FUN_1473e009e(lVar3,param_3,local_210,&local_d8);
    local_230 = lVar3 + 0xa8;
    if (lVar3 == 0) {
      local_230 = 0;
    }
    local_e8 = &local_230;
    local_f0 = &local_f8;
    FUN_1473dfae6((longlong *)(param_1 + 0x1f0));
    lVar11 = *param_2 + (longlong)(int)param_2[1];
    if ((ulonglong)(longlong)(int)param_2[1] < 4) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)*(int *)(lVar11 + -4);
    }
    lVar7 = -lVar7;
    do {
      lVar8 = lVar7;
      if (-5 < lVar8) goto LAB_1473d3f9e;
      uVar9 = (ulonglong)*(uint *)(lVar11 + 1 + lVar8);
      bVar12 = *(char *)(lVar11 + lVar8) != 'p';
      uVar10 = uVar9;
      if (!bVar12 && uVar9 == 5) {
        uVar10 = 0;
      }
      lVar7 = uVar10 + 5 + lVar8;
    } while (bVar12 || uVar9 != 5);
    pbVar4 = (byte *)(lVar11 + lVar8 + 5);
    if (pbVar4 != (byte *)0x0) {
      if (*(char *)(lVar3 + 0x9c) == '\x05') {
        bVar5 = *(byte *)(lVar3 + 0x9d) & 0xfe | *pbVar4 >> 4 & 1;
        *(byte *)(lVar3 + 0x9d) = bVar5;
      }
      else {
        bVar5 = *(byte *)(lVar3 + 0x9d);
      }
      *(byte *)(lVar3 + 0x9d) = bVar5 & 0xfd | *pbVar4 >> 4 & 2;
      *(bool *)(lVar3 + 0x189) = (*pbVar4 & 6) != 0;
    }
LAB_1473d3f9e:
    ReleaseSRWLockExclusive(local_240);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_210);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1a8);
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1473d3fe0 FUN_1473d3fe0 body=244 status=ok
// SIG undefined FUN_1473d3fe0(void)

longlong *
FUN_1473d3fe0(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switch(param_5) {
  case 6:
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    lVar1 = FUN_1473d40d6(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_28,
                          *(longlong *)(param_1 + 0x48));
    break;
  case 7:
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    lVar1 = FUN_1473d4414(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_38,
                          *(longlong *)(param_1 + 0x48));
    break;
  case 8:
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    lVar1 = FUN_1473d4a90(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_58,
                          *(longlong *)(param_1 + 0x48));
    break;
  case 9:
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    lVar1 = FUN_1473d4752(*(longlong *)(param_1 + 0x48) + 0x6b8,&local_48,
                          *(longlong *)(param_1 + 0x48));
    break;
  default:
    *param_2 = 0;
    goto LAB_1473d400e;
  }
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
LAB_1473d400e:
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473d40d6 FUN_1473d40d6 body=828 status=ok
// SIG undefined FUN_1473d40d6(void)

longlong FUN_1473d40d6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  longlong local_238 [2];
  undefined4 local_228;
  undefined4 local_220 [2];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar4 = *(int *)(param_2 + 1);
  local_100 = param_1;
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar4,0);
  lVar5 = CONCAT44(iVar2,iVar4);
  local_108 = lVar5;
  lVar3 = FUN_1473e020a(&local_100);
  if (lVar3 == 0) {
    local_248 = *param_2;
    local_250 = (longlong)*(int *)(param_2 + 1);
    memset(local_1b8,0,0x90);
    FUN_144869430(local_1b8);
    local_128 = 0;
    local_1b8[0] = &PTR_FUN_149e1ddc0;
    local_120 = local_248;
    local_118 = local_250;
    local_110 = 0x7fffffffffffffff;
    FUN_140996f94(local_1b8,1);
    (*(code *)local_1b8[0][0x1e])(local_1b8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1b8);
    local_220[0] = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_1402ee999(local_1b8);
    local_238[0] = 0;
    local_238[1] = 0;
    local_228 = 0xffffffff;
    FUN_1473d17f2(local_1b8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
    if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
      lVar3 = param_1 + 0x278;
      if (*(longlong *)(param_1 + 0x280) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x280);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x288) - 1U & iVar2 * 0x17 + iVar4) *
                               4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x18);
          if (*plVar1 == lVar5) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar5 = plVar1[1];
              lVar3 = lVar5 + -0xb0;
              if (lVar5 == 0) {
                lVar3 = 0;
              }
              goto LAB_1473d4388;
            }
            break;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
      }
    }
    lVar3 = FUN_14001cc68(0x1e8,0x10);
    local_260 = local_238;
    local_268 = &local_d8;
    local_258 = lVar5;
    FUN_1473e02d8(lVar3,param_3,6,local_220);
    local_240 = lVar3 + 0xb0;
    *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar3 + 0x108);
    if (lVar3 == 0) {
      local_240 = 0;
    }
    plStack_f0 = &local_240;
    local_f8 = &local_108;
    FUN_1473dfae6((longlong *)(param_1 + 0x240),local_dc,&local_f8);
    local_f8 = (longlong *)*param_2;
    plStack_f0 = (longlong *)param_2[1];
    FUN_1431c0c44(&local_f8,lVar3);
LAB_1473d4388:
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
    if (local_238[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_220);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1b8);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1473d4414 FUN_1473d4414 body=828 status=ok
// SIG undefined FUN_1473d4414(void)

longlong FUN_1473d4414(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  longlong local_238 [2];
  undefined4 local_228;
  undefined4 local_220 [2];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar4 = *(int *)(param_2 + 1);
  local_100 = param_1;
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar4,0);
  lVar5 = CONCAT44(iVar2,iVar4);
  local_108 = lVar5;
  lVar3 = FUN_1473e04ee(&local_100);
  if (lVar3 == 0) {
    local_248 = *param_2;
    local_250 = (longlong)*(int *)(param_2 + 1);
    memset(local_1b8,0,0x90);
    FUN_144869430(local_1b8);
    local_128 = 0;
    local_1b8[0] = &PTR_FUN_149e1ddc0;
    local_120 = local_248;
    local_118 = local_250;
    local_110 = 0x7fffffffffffffff;
    FUN_140996f94(local_1b8,1);
    (*(code *)local_1b8[0][0x1e])(local_1b8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1b8);
    local_220[0] = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_1402ee999(local_1b8);
    local_238[0] = 0;
    local_238[1] = 0;
    local_228 = 0xffffffff;
    FUN_1473d17f2(local_1b8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
      lVar3 = param_1 + 0x2c8;
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x2d0);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x2d8) - 1U & iVar2 * 0x17 + iVar4) *
                               4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar4 * 0x18);
          if (*plVar1 == lVar5) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar5 = plVar1[1];
              lVar3 = lVar5 + -0xb0;
              if (lVar5 == 0) {
                lVar3 = 0;
              }
              goto LAB_1473d46c6;
            }
            break;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
      }
    }
    lVar3 = FUN_14001cc68(0x1e8,0x10);
    local_260 = local_238;
    local_268 = &local_d8;
    local_258 = lVar5;
    FUN_1473e02d8(lVar3,param_3,7,local_220);
    local_240 = lVar3 + 0xb0;
    *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar3 + 0x108);
    if (lVar3 == 0) {
      local_240 = 0;
    }
    plStack_f0 = &local_240;
    local_f8 = &local_108;
    FUN_1473dfae6((longlong *)(param_1 + 0x290),local_dc,&local_f8);
    local_f8 = (longlong *)*param_2;
    plStack_f0 = (longlong *)param_2[1];
    FUN_1431c0c44(&local_f8,lVar3);
LAB_1473d46c6:
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    if (local_238[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_220);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1b8);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1473d4752 FUN_1473d4752 body=828 status=ok
// SIG undefined FUN_1473d4752(void)

longlong FUN_1473d4752(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  longlong local_238 [2];
  undefined4 local_228;
  undefined4 local_220 [2];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar4 = *(int *)(param_2 + 1);
  local_100 = param_1;
  iVar2 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar4,0);
  lVar5 = CONCAT44(iVar2,iVar4);
  local_108 = lVar5;
  lVar3 = FUN_1473e05bc(&local_100);
  if (lVar3 == 0) {
    local_248 = *param_2;
    local_250 = (longlong)*(int *)(param_2 + 1);
    memset(local_1b8,0,0x90);
    FUN_144869430(local_1b8);
    local_128 = 0;
    local_1b8[0] = &PTR_FUN_149e1ddc0;
    local_120 = local_248;
    local_118 = local_250;
    local_110 = 0x7fffffffffffffff;
    FUN_140996f94(local_1b8,1);
    (*(code *)local_1b8[0][0x1e])(local_1b8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1b8);
    local_220[0] = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_1402ee999(local_1b8);
    local_238[0] = 0;
    local_238[1] = 0;
    local_228 = 0xffffffff;
    FUN_1473d17f2(local_1b8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x48));
    if (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364)) {
      lVar3 = param_1 + 0x368;
      if (*(longlong *)(param_1 + 0x370) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x370);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x378) - 1U & iVar2 * 0x17 + iVar4) *
                               4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar4 * 0x18);
          if (*plVar1 == lVar5) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar5 = plVar1[1];
              lVar3 = lVar5 + -0xb0;
              if (lVar5 == 0) {
                lVar3 = 0;
              }
              goto LAB_1473d4a04;
            }
            break;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
      }
    }
    lVar3 = FUN_14001cc68(0x1e8,0x10);
    local_260 = local_238;
    local_268 = &local_d8;
    local_258 = lVar5;
    FUN_1473e02d8(lVar3,param_3,9,local_220);
    local_240 = lVar3 + 0xb0;
    *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar3 + 0x108);
    if (lVar3 == 0) {
      local_240 = 0;
    }
    plStack_f0 = &local_240;
    local_f8 = &local_108;
    FUN_1473dfae6((longlong *)(param_1 + 0x330),local_dc,&local_f8);
    local_f8 = (longlong *)*param_2;
    plStack_f0 = (longlong *)param_2[1];
    FUN_1431c0c44(&local_f8,lVar3);
LAB_1473d4a04:
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x48));
    if (local_238[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_220);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1b8);
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1473d4a90 FUN_1473d4a90 body=1123 status=ok
// SIG undefined FUN_1473d4a90(void)

longlong FUN_1473d4a90(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  longlong local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  longlong local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  longlong local_238 [2];
  undefined4 local_228;
  undefined4 local_220 [2];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8 [18];
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined1 uStack_78;
  char cStack_77;
  char cStack_76;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  iVar5 = *(int *)(param_2 + 1);
  local_100 = param_1;
  iVar3 = (*(code *)PTR_FUN_14c75b148)(*param_2,iVar5,0);
  lVar6 = CONCAT44(iVar3,iVar5);
  local_108 = lVar6;
  lVar4 = FUN_1473e068a(&local_100);
  if (lVar4 == 0) {
    uVar2 = *param_2;
    local_290 = (longlong)*(int *)(param_2 + 1);
    local_288 = param_3;
    memset(local_1b8,0,0x90);
    FUN_144869430(local_1b8);
    local_128 = 0;
    local_1b8[0] = &PTR_FUN_149e1ddc0;
    local_118 = local_290;
    local_110 = 0x7fffffffffffffff;
    local_120 = uVar2;
    FUN_140996f94(local_1b8,1);
    (*(code *)local_1b8[0][0x1e])(local_1b8,1);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    cStack_77 = '\0';
    cStack_76 = '\0';
    local_70 = 0;
    uStack_68 = 0;
    FUN_1473ded4b(local_1b8,&local_d8);
    local_220[0] = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_1402ee999(local_1b8);
    local_238[0] = 0;
    local_238[1] = 0;
    local_228 = 0xffffffff;
    FUN_1473d17f2(local_1b8);
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0xffffffff;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0xffffffff;
    if (cStack_77 == '\x02') {
      FUN_1473d17f2(local_1b8,&local_258);
    }
    if (cStack_76 == '\x02') {
      FUN_1473d17f2(local_1b8,&local_278);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
    uVar2 = local_288;
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      lVar4 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar4 = *(longlong *)(param_1 + 800);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x328) - 1U & iVar3 * 0x17 + iVar5) *
                               4);
      if (iVar5 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar5 * 0x18);
          if (*plVar1 == lVar6) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar6 = plVar1[1];
              lVar4 = lVar6 + -0xb0;
              if (lVar6 == 0) {
                lVar4 = 0;
              }
              goto LAB_1473d4e45;
            }
            break;
          }
          iVar5 = (int)plVar1[2];
        } while (iVar5 != -1);
      }
    }
    lVar4 = FUN_14001cc68(0x1e8,0x10);
    local_2a0 = local_238;
    local_2a8 = &local_d8;
    local_298 = lVar6;
    FUN_1473e02d8(lVar4,uVar2,8,local_220);
    if (*(longlong *)(lVar4 + 0x1b8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar4 + 0x1b8) = local_258;
    local_258 = 0;
    *(undefined4 *)(lVar4 + 0x1c0) = (undefined4)uStack_250;
    *(undefined4 *)(lVar4 + 0x1c4) = uStack_250._4_4_;
    uStack_250 = 0;
    *(undefined4 *)(lVar4 + 0x1c8) = local_248;
    if (*(longlong *)(lVar4 + 0x1d0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar4 + 0x1d0) = local_278;
    local_278 = 0;
    *(undefined4 *)(lVar4 + 0x1d8) = (undefined4)uStack_270;
    *(undefined4 *)(lVar4 + 0x1dc) = uStack_270._4_4_;
    uStack_270 = 0;
    *(undefined4 *)(lVar4 + 0x1e0) = local_268;
    local_280 = lVar4 + 0xb0;
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar4 + 0x108);
    if (lVar4 == 0) {
      local_280 = 0;
    }
    plStack_f0 = &local_280;
    local_f8 = &local_108;
    FUN_1473dfae6((longlong *)(param_1 + 0x2e0),local_dc,&local_f8);
    local_f8 = (longlong *)*param_2;
    plStack_f0 = (longlong *)param_2[1];
    FUN_1431c0c44(&local_f8,lVar4);
LAB_1473d4e45:
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
    if (local_278 != 0) {
      FUN_1400020a8();
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    if (local_238[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14178cab0(local_220);
    FUN_1473d24fe(&local_d8);
    FUN_144a7fc42(local_1b8);
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1473d4ef4 FUN_1473d4ef4 body=59 status=ok
// SIG undefined FUN_1473d4ef4(void)

undefined8 *
FUN_1473d4ef4(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14a369f70;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x11) = param_4;
  FUN_1473bf9d4(param_1 + 3);
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 1473d4f30 FUN_1473d4f30 body=79 status=ok
// SIG undefined FUN_1473d4f30(void)

void FUN_1473d4f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a369f70;
  if (param_1[0x33] != 0) {
    FUN_1473a8b5a(param_1[1] + 0x590,6);
    param_1[0x33] = 0;
  }
  FUN_1473bfa08(param_1 + 3);
  return;
}



// FUNCTION 1473d4f80 FUN_1473d4f80 body=149 status=ok
// SIG undefined FUN_1473d4f80(void)

void FUN_1473d4f80(longlong param_1)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473c053c(param_1 + 0x18);
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_40 = 0x1e;
    local_3c = 0;
    uStack_34 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    local_2c = *(undefined4 *)(param_1 + 0x158);
    uStack_28 = (undefined4)*(undefined8 *)(param_1 + 0x150);
    uStack_24 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
    iVar1 = (*DAT_14ca78dd0)(**(undefined8 **)(param_1 + 8),&local_40,0,param_1 + 0x198);
    if (iVar1 != 0) {
      FUN_1431b4552(iVar1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d5016 FUN_1473d5016 body=472 status=ok
// SIG undefined FUN_1473d5016(void)

int FUN_1473d5016(undefined8 *param_1,longlong *param_2,longlong param_3,undefined4 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                 longlong param_9,longlong param_10,undefined8 *param_11)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *local_68;
  longlong local_60;
  
  param_1[4] = param_3;
  *param_1 = param_4;
  *(int *)(param_1 + 3) = (int)param_2[1];
  param_1[1] = param_7;
  FUN_1473b77ac();
  if ((int)param_2[1] < 1) {
    iVar5 = 0;
  }
  else {
    local_60 = param_9;
    local_68 = param_8;
    puVar3 = (undefined4 *)(param_3 + 8);
    uVar6 = 0;
    iVar5 = 0;
    do {
      *param_4 = 0x23;
      param_4[6] = (int)uVar6;
      param_4[8] = 1;
      param_4[9] = *(undefined4 *)(*param_2 + uVar6 * 4);
      iVar1 = *(int *)(*param_2 + uVar6 * 4);
      puVar4 = param_6;
      switch(iVar1) {
      case 0:
        FUN_1473b77aa(param_1,uVar6 & 0xffffffff);
      case 1:
      case 2:
      case 3:
      case 10:
        if (param_3 != 0) {
          puVar3[-2] = *(undefined4 *)(param_10 + 0x18);
          puVar3[-1] = *(undefined4 *)(param_11 + 2);
          *puVar3 = 1;
        }
        *param_5 = *(undefined8 *)(param_10 + 0x10);
        param_5[1] = *param_11;
        *(undefined4 *)(param_5 + 2) = 1;
        lVar2 = 0x28;
        param_6 = param_5;
        param_5 = param_5 + 3;
        break;
      case 4:
      case 5:
      case 9:
        goto switchD_1473d50db_caseD_4;
      case 8:
        *(char *)(param_1[1] + uVar6) = (char)iVar5;
        iVar5 = iVar5 + 1;
      case 6:
      case 7:
        puVar4 = param_6 + 3;
        lVar2 = 0x30;
        break;
      default:
        if (iVar1 != 0x3b9d13f0) goto switchD_1473d50db_caseD_4;
        *(undefined4 *)local_68 = 0x3b9d13f7;
        local_68[1] = 0;
        *(undefined4 *)(local_68 + 2) = 1;
        local_68[3] = local_60;
        local_60 = local_60 + 8;
        lVar2 = 8;
        param_6 = local_68;
        local_68 = local_68 + 4;
      }
      *(undefined8 **)((longlong)param_4 + lVar2) = param_6;
switchD_1473d50db_caseD_4:
      param_4 = param_4 + 0x10;
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 3;
      param_6 = puVar4;
    } while ((longlong)uVar6 < (longlong)(int)param_2[1]);
  }
  return iVar5;
}



// FUNCTION 1473d51ee FUN_1473d51ee body=736 status=ok
// SIG undefined FUN_1473d51ee(void)

void FUN_1473d51ee(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  bool bVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  lVar10 = DAT_14ca793a8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  iStack_64 = 0;
  local_58 = 0;
  uStack_60 = 1;
  local_70 = param_4;
  if (param_5 == '\0') {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar8 + 0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar3 ^ 1);
    }
    lVar2 = DAT_14ca793a8;
    if (1 < *(int *)(lVar10 + uVar6 * 4)) {
      iVar9 = 8;
      bVar1 = true;
      goto LAB_1473d524b;
    }
    if (*(int *)(lVar8 + 0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar3 ^ 1);
    }
    iVar9 = (uint)(*(int *)(lVar2 + uVar6 * 4) == 1) * 2 + 6;
  }
  else {
    iVar9 = 6;
  }
  bVar1 = false;
LAB_1473d524b:
  param_3 = (longlong *)*param_3;
  if (param_3 != (longlong *)0x0) {
    local_7c = *(uint *)(param_2 + 0xc80);
    uStack_60 = CONCAT44(0x20,(undefined4)uStack_60);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_3 + 0x34);
    *(int *)((longlong)param_1 + 0x14) = (int)param_3[6];
    iVar4 = (int)param_3[1];
    if (0 < iVar4) {
      local_78 = param_1 + 0x1f;
      lVar10 = 0;
      do {
        iVar11 = *(int *)(*param_3 + lVar10 * 4);
        if (iVar11 == 6) {
          if ((lVar10 == 0) && (*(int *)((longlong)param_3 + 0x34) != 0)) {
            iVar4 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
              FUN_1473e0758(param_1);
            }
            *(int *)(*param_1 + (longlong)iVar4 * 4) = iVar9;
            local_68 = iVar4;
            iStack_64 = iVar9;
            goto LAB_1473d5300;
          }
          iVar11 = 6;
          if (bVar1) {
            if ((int)param_1[0x19] != *(int *)((longlong)param_1 + 0xf4)) {
              plVar7 = (longlong *)param_1[0x20];
              if ((longlong *)param_1[0x20] == (longlong *)0x0) {
                plVar7 = local_78;
              }
              iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[0x21] - 1U & 8) * 4);
              if (iVar11 != -1) {
                do {
                  lVar8 = param_1[0x18] + (longlong)iVar11 * 0x10;
                  if (*(int *)(param_1[0x18] + (longlong)iVar11 * 0x10) == 8) goto LAB_1473d5341;
                  iVar11 = *(int *)(lVar8 + 8);
                } while (iVar11 != -1);
              }
            }
            lVar8 = 0;
LAB_1473d5341:
            iVar11 = (uint)(*(uint *)(lVar8 + 4) < local_7c) * 2 + 6;
          }
          iStack_64 = iVar11;
          if (lVar10 < (int)param_3[6]) {
            iVar4 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
              FUN_1473e0758(param_1);
            }
            *(int *)(*param_1 + (longlong)iVar4 * 4) = iVar11;
            local_68 = iVar4;
            goto LAB_1473d5300;
          }
        }
        else {
          lVar8 = param_1[1];
          uVar5 = (int)lVar8 + 1;
          *(uint *)(param_1 + 1) = uVar5;
          if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
            FUN_1473e0758(param_1);
          }
          *(int *)(*param_1 + (longlong)(int)lVar8 * 4) = iVar11;
          local_68 = (int)lVar10;
          iStack_64 = iVar11;
LAB_1473d5300:
          FUN_1473bfa62(param_1,0,&local_68);
          iVar4 = (int)param_3[1];
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar4);
    }
  }
  FUN_1473bfe14(param_1);
  FUN_1473bfc84(param_1,local_70,1);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473d54d0 FUN_1473d54d0 body=798 status=ok
// SIG undefined FUN_1473d54d0(void)

void FUN_1473d54d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  char param_5)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  lVar7 = DAT_14ca793a8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  iStack_64 = 0;
  local_58 = 0;
  uStack_60 = 1;
  local_80 = param_4;
  local_70 = param_3;
  if (param_5 == '\0') {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar5 + 0xc60) == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar3 ^ 1);
    }
    lVar2 = DAT_14ca793a8;
    if (1 < *(int *)(lVar7 + uVar9 * 4)) {
      iVar6 = 8;
      local_88 = 1;
      goto LAB_1473d5534;
    }
    if (*(int *)(lVar5 + 0xc60) == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar3 ^ 1);
    }
    iVar6 = (uint)(*(int *)(lVar2 + uVar9 * 4) == 1) * 2 + 6;
  }
  else {
    iVar6 = 6;
  }
  local_88 = 0;
LAB_1473d5534:
  local_84 = *(uint *)(param_2 + 0xc80);
  local_78 = param_1 + 0xf8;
  uVar9 = 0;
  do {
    plVar1 = *(longlong **)(local_70 + uVar9 * 8);
    if (plVar1 != (longlong *)0x0) {
      lVar7 = uVar9 * 0x20;
      uStack_60 = CONCAT44((&DAT_14a36bed8)[(int)uVar9],(undefined4)uStack_60);
      *(undefined4 *)(param_1 + 0x10 + lVar7) = *(undefined4 *)((longlong)plVar1 + 0x34);
      *(int *)(param_1 + 0x14 + lVar7) = (int)plVar1[6];
      iVar4 = (int)plVar1[1];
      if (0 < iVar4) {
        plVar8 = (longlong *)(lVar7 + param_1);
        lVar7 = 0;
        do {
          iVar10 = *(int *)(*plVar1 + lVar7 * 4);
          if (iVar10 == 6) {
            if ((lVar7 == 0) && (*(int *)((longlong)plVar1 + 0x34) != 0)) {
              iVar4 = (int)plVar8[1];
              *(uint *)(plVar8 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
                FUN_1473e0758(plVar8,iVar4);
              }
              *(int *)(*plVar8 + (longlong)iVar4 * 4) = iVar6;
              local_68 = iVar4;
              iStack_64 = iVar6;
              goto LAB_1473d560c;
            }
            iVar10 = 6;
            if ((char)local_88 != '\0') {
              if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
                lVar5 = *(longlong *)(param_1 + 0x100);
                if (*(longlong *)(param_1 + 0x100) == 0) {
                  lVar5 = local_78;
                }
                iVar10 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & 8) * 4);
                if (iVar10 != -1) {
                  do {
                    lVar5 = *(longlong *)(param_1 + 0xc0) + (longlong)iVar10 * 0x10;
                    if (*(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar10 * 0x10) == 8)
                    goto LAB_1473d5650;
                    iVar10 = *(int *)(lVar5 + 8);
                  } while (iVar10 != -1);
                }
              }
              lVar5 = 0;
LAB_1473d5650:
              iVar10 = (uint)(*(uint *)(lVar5 + 4) < local_84) * 2 + 6;
            }
            iStack_64 = iVar10;
            if (lVar7 < (int)plVar1[6]) {
              iVar4 = (int)plVar8[1];
              *(uint *)(plVar8 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
                FUN_1473e0758(plVar8,iVar4);
              }
              *(int *)(*plVar8 + (longlong)iVar4 * 4) = iVar10;
              local_68 = iVar4;
              goto LAB_1473d560c;
            }
          }
          else {
            iVar4 = (int)plVar8[1];
            *(uint *)(plVar8 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
              FUN_1473e0758(plVar8,iVar4);
            }
            *(int *)(*plVar8 + (longlong)iVar4 * 4) = iVar10;
            local_68 = (int)lVar7;
            iStack_64 = iVar10;
LAB_1473d560c:
            FUN_1473bfa62(param_1,uVar9 & 0xffffffff,&local_68);
            iVar4 = (int)plVar1[1];
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar4);
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == 5) {
      FUN_1473bfe14(param_1);
      FUN_1473bfc84(param_1,local_80,0);
      if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1473d57f0 FUN_1473d57f0 body=393 status=ok
// SIG undefined FUN_1473d57f0(void)

void FUN_1473d57f0(byte *param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  
  *param_3 = 0x1f;
  *(undefined8 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 3) = 0;
  *(undefined8 *)(param_3 + 5) = 0;
  *(undefined8 *)(param_3 + 7) = 0;
  *(undefined8 *)(param_3 + 9) = 0;
  *(undefined8 *)(param_3 + 0xb) = 0;
  *(undefined8 *)(param_3 + 0xd) = 0;
  *(undefined8 *)(param_3 + 0xf) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x12) = 0;
  uVar2 = 0x7fffffff;
  uVar4 = 0x7fffffff;
  if ((ulonglong)*param_1 < 5) {
    uVar4 = *(undefined4 *)(&DAT_14a36beec + (ulonglong)*param_1 * 4);
  }
  param_3[5] = uVar4;
  if ((ulonglong)*param_1 < 5) {
    uVar2 = *(undefined4 *)(&DAT_14a36beec + (ulonglong)*param_1 * 4);
  }
  param_3[6] = uVar2;
  uVar2 = 0x7fffffff;
  uVar4 = 0x7fffffff;
  if ((ulonglong)*param_1 < 5) {
    uVar4 = *(undefined4 *)(&DAT_14a36bf00 + (ulonglong)*param_1 * 4);
  }
  param_3[7] = uVar4;
  if ((ulonglong)param_1[1] < 4) {
    uVar2 = *(undefined4 *)(&DAT_14a36bf14 + (ulonglong)param_1[1] * 4);
  }
  param_3[8] = uVar2;
  uVar2 = 0x7fffffff;
  uVar4 = 0x7fffffff;
  if ((ulonglong)param_1[2] < 4) {
    uVar4 = *(undefined4 *)(&DAT_14a36bf14 + (ulonglong)param_1[2] * 4);
  }
  param_3[9] = uVar4;
  if ((ulonglong)param_1[3] < 4) {
    uVar2 = *(undefined4 *)(&DAT_14a36bf14 + (ulonglong)param_1[3] * 4);
  }
  param_3[10] = uVar2;
  param_3[0xb] = *(undefined4 *)(param_1 + 4);
  param_3[0xd] = 0x3f800000;
  uVar3 = 0;
  if (*param_1 - 3 < 2) {
    fVar1 = *(float *)(param_2 + 0xd28);
    uVar3 = FUN_144abc9cb(*(undefined4 *)(param_1 + 0x10));
    fVar5 = (float)uVar3;
    if (fVar1 <= (float)uVar3) {
      fVar5 = fVar1;
    }
    uVar3 = (uint)(1.0 < fVar5);
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
    param_3[0xd] = fVar5;
  }
  param_3[0xc] = uVar3;
  param_3[0xe] = (uint)(param_1[0x18] != 0);
  uVar4 = 0x7fffffff;
  if (param_1[0x18] == 0) {
    uVar4 = 0;
  }
  uVar2 = 1;
  if (param_1[0x18] != 1) {
    uVar2 = uVar4;
  }
  param_3[0xf] = uVar2;
  param_3[0x10] = *(undefined4 *)(param_1 + 8);
  param_3[0x11] = *(undefined4 *)(param_1 + 0xc);
  param_3[0x12] = (uint)(*(int *)(param_1 + 0x14) != 0) << 2;
  return;
}



// FUNCTION 1473d597a FUN_1473d597a body=206 status=ok
// SIG undefined FUN_1473d597a(void)

undefined8 * FUN_1473d597a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 extraout_XMM0_Da;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a369f80;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  iVar2 = (*DAT_14ca78f98)(*param_3,param_2,0,param_1 + 2);
  if (iVar2 != 0) {
    FUN_1431b4552(iVar2);
  }
  if (DAT_14c760db4 < 2) {
    LOCK();
    UNLOCK();
    iVar2 = (int)DAT_14ca788f8;
    DAT_14ca788f8 = DAT_14ca788f8 + 1;
    *(int *)(param_1 + 3) = iVar2 + 1;
  }
  if (*(char *)(param_3[0xd6] + 8) == '\x01') {
    iVar2 = FUN_14631b5ca(DAT_14ca85550);
    if (iVar2 != 0) {
      lVar1 = param_3[0xd6];
      if (*(char *)(lVar1 + 8) == '\x01') {
        uVar3 = FUN_143192236(extraout_XMM0_Da,lVar1 + 0x18);
        uVar4 = (ulonglong)uVar3;
      }
      else {
        uVar4 = 0xffffffffff;
      }
      *(ulonglong *)((longlong)param_1 + 0x1c) = uVar4;
      FUN_1431925c4(lVar1,uVar4,param_1[2]);
    }
  }
  return param_1;
}



// FUNCTION 1473d5a48 FUN_1473d5a48 body=184 status=ok
// SIG undefined FUN_1473d5a48(void)

void FUN_1473d5a48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 2;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a369f98;
  uVar1 = param_2[1];
  param_1[10] = *param_2;
  param_1[0xb] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0x17;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  iVar2 = 0x7fffffff;
  if (*(byte *)(param_1 + 10) < 3) {
    iVar2 = 2 - (uint)*(byte *)(param_1 + 10);
  }
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  uVar3 = (uint)(*(char *)((longlong)param_1 + 0x51) == '\x01');
  if (*(char *)((longlong)param_1 + 0x51) == '\x02') {
    uVar3 = 2;
  }
  *(uint *)(param_1 + 6) = uVar3;
  *(uint *)((longlong)param_1 + 0x24) = (uint)(*(char *)((longlong)param_2 + 0xc) == '\x01');
  *(uint *)(param_1 + 7) = -(uint)(*(float *)((longlong)param_1 + 0x54) != 0.0) & 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_1 + 0xb);
  *(float *)((longlong)param_1 + 0x3c) = *(float *)((longlong)param_1 + 0x54);
  return;
}



// FUNCTION 1473d5b00 FUN_1473d5b00 body=369 status=ok
// SIG undefined FUN_1473d5b00(void)

void FUN_1473d5b00(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_3 = 0x19;
  *(undefined8 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 3) = 0;
  *(undefined8 *)(param_3 + 5) = 0;
  *(undefined8 *)(param_3 + 7) = 0;
  *(undefined8 *)(param_3 + 9) = 0;
  *(undefined8 *)(param_3 + 0xb) = 0;
  *(undefined8 *)(param_3 + 0xd) = 0;
  *(undefined8 *)(param_3 + 0xf) = 0;
  *(undefined8 *)(param_3 + 0x11) = 0;
  *(undefined8 *)(param_3 + 0x13) = 0;
  *(undefined8 *)(param_3 + 0x15) = 0;
  *(undefined8 *)(param_3 + 0x17) = 0;
  param_3[0x19] = 0;
  uVar1 = 1;
  if (*(char *)(param_1 + 0x11) == '\a') {
    uVar1 = (uint)*(byte *)(param_1 + 0x10);
  }
  param_3[5] = uVar1;
  uVar2 = 0x7fffffff;
  if ((ulonglong)*(byte *)(param_1 + 0x11) < 8) {
    uVar2 = *(undefined4 *)(&DAT_14a36bf24 + (ulonglong)*(byte *)(param_1 + 0x11) * 4);
  }
  param_3[7] = uVar2;
  param_3[6] = (uint)*(byte *)(param_1 + 0x10);
  param_3[8] = (uint)*(byte *)(param_2 + 0xc5);
  *(undefined8 *)(param_3 + 0x18) = 0x3f80000000000000;
  uVar1 = 1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar1 = (uint)*(byte *)(param_1 + 0x17);
  }
  param_3[9] = uVar1;
  uVar1 = (uint)*(byte *)(param_1 + 0x14);
  uVar2 = 0x7fffffff;
  if (7 < uVar1) {
    uVar1 = 0x7fffffff;
  }
  param_3[0x11] = uVar1;
  uVar1 = (uint)*(byte *)(param_1 + 0x16);
  if (7 < uVar1) {
    uVar1 = 0x7fffffff;
  }
  param_3[0x12] = uVar1;
  uVar1 = (uint)*(byte *)(param_1 + 0x15);
  if (7 < uVar1) {
    uVar1 = 0x7fffffff;
  }
  param_3[0x13] = uVar1;
  if ((ulonglong)*(byte *)(param_1 + 0x13) < 8) {
    uVar2 = *(undefined4 *)(&DAT_14a36bf24 + (ulonglong)*(byte *)(param_1 + 0x13) * 4);
  }
  param_3[0x14] = uVar2;
  param_3[0x15] = (uint)*(byte *)(param_1 + 0x1c);
  param_3[0x16] = (uint)*(byte *)(param_1 + 0x1d);
  param_3[0x17] = 0;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + 0x19);
    uVar2 = 0x7fffffff;
    if (7 < uVar1) {
      uVar1 = 0x7fffffff;
    }
    param_3[10] = uVar1;
    uVar1 = (uint)*(byte *)(param_1 + 0x1b);
    if (7 < uVar1) {
      uVar1 = 0x7fffffff;
    }
    param_3[0xb] = uVar1;
    uVar1 = (uint)*(byte *)(param_1 + 0x1a);
    if (7 < uVar1) {
      uVar1 = 0x7fffffff;
    }
    param_3[0xc] = uVar1;
    if ((ulonglong)*(byte *)(param_1 + 0x18) < 8) {
      uVar2 = *(undefined4 *)(&DAT_14a36bf24 + (ulonglong)*(byte *)(param_1 + 0x18) * 4);
    }
    param_3[0xd] = uVar2;
    param_3[0xe] = (uint)*(byte *)(param_1 + 0x1c);
    param_3[0xf] = (uint)*(byte *)(param_1 + 0x1d);
    param_3[0x10] = 0;
    return;
  }
  *(undefined8 *)(param_3 + 0xd) = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_3 + 0xf) = *(undefined8 *)(param_3 + 0x16);
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_3 + 0x11);
  *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_3 + 0x13);
  return;
}



// FUNCTION 1473d5c72 FUN_1473d5c72 body=430 status=ok
// SIG undefined FUN_1473d5c72(void)

void FUN_1473d5c72(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 4;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a369fa8;
  lVar9 = 0x116;
  do {
    *(undefined4 *)((longlong)param_1 + lVar9 + -6) = 0x100;
    *(undefined2 *)((longlong)param_1 + lVar9 + -2) = 1;
    *(undefined1 *)((longlong)param_1 + lVar9) = 0xf;
    lVar9 = lVar9 + 7;
  } while (lVar9 != 0x14e);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x32);
  *(undefined8 *)((longlong)param_1 + 0x13a) = *(undefined8 *)((longlong)param_2 + 0x2a);
  *(undefined8 *)((longlong)param_1 + 0x142) = uVar7;
  param_1[0x26] = uVar5;
  param_1[0x27] = uVar6;
  param_1[0x24] = uVar3;
  param_1[0x25] = uVar4;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar2;
  puVar8 = (uint *)((longlong)param_1 + 0x2c);
  lVar9 = 0x116;
  do {
    puVar8[-3] = 0;
    puVar8[-2] = 0;
    puVar8[-1] = 0;
    puVar8[0] = 0;
    puVar8[-7] = 0;
    puVar8[-6] = 0;
    puVar8[-5] = 0;
    puVar8[-4] = 0;
    uVar12 = (ulonglong)*(byte *)((longlong)param_1 + lVar9 + -6);
    uVar10 = 0x7fffffff;
    uVar11 = 0x7fffffff;
    if (uVar12 < 5) {
      uVar11 = *(uint *)(&DAT_14a36bf44 + uVar12 * 4);
    }
    puVar8[-4] = uVar11;
    uVar12 = (ulonglong)*(byte *)((longlong)param_1 + lVar9 + -3);
    if (uVar12 < 5) {
      uVar10 = *(uint *)(&DAT_14a36bf44 + uVar12 * 4);
    }
    puVar8[-1] = uVar10;
    uVar12 = (ulonglong)*(byte *)((longlong)param_1 + lVar9 + -4);
    uVar10 = 0x7fffffff;
    uVar11 = 0x7fffffff;
    if (uVar12 < 0x10) {
      uVar11 = *(uint *)(&DAT_14a36bf58 + uVar12 * 4);
    }
    puVar8[-5] = uVar11;
    uVar12 = (ulonglong)*(byte *)((longlong)param_1 + lVar9 + -1);
    if (uVar12 < 0x10) {
      uVar10 = *(uint *)(&DAT_14a36bf58 + uVar12 * 4);
    }
    puVar8[-2] = uVar10;
    uVar12 = (ulonglong)*(byte *)((longlong)param_1 + lVar9 + -5);
    uVar10 = 0x7fffffff;
    uVar11 = 0x7fffffff;
    if (uVar12 < 0x10) {
      uVar11 = *(uint *)(&DAT_14a36bf58 + uVar12 * 4);
    }
    puVar8[-6] = uVar11;
    uVar12 = (ulonglong)*(byte *)((longlong)param_1 + lVar9 + -2);
    if (uVar12 < 0x10) {
      uVar10 = *(uint *)(&DAT_14a36bf58 + uVar12 * 4);
    }
    puVar8[-3] = uVar10;
    bVar13 = true;
    if ((((*(char *)((longlong)param_1 + lVar9 + -6) == '\0') &&
         (*(char *)((longlong)param_1 + lVar9 + -4) == '\0')) &&
        (*(char *)((longlong)param_1 + lVar9 + -5) == '\x01')) &&
       ((*(char *)((longlong)param_1 + lVar9 + -3) == '\0' &&
        (*(char *)((longlong)param_1 + lVar9 + -1) == '\0')))) {
      bVar13 = *(char *)((longlong)param_1 + lVar9 + -2) != '\x01';
    }
    puVar8[-7] = (uint)bVar13;
    uVar11 = *(byte *)((longlong)param_1 + lVar9) & 1;
    *puVar8 = uVar11;
    uVar11 = *(byte *)((longlong)param_1 + lVar9) & 2 | uVar11;
    *puVar8 = uVar11;
    uVar11 = *(byte *)((longlong)param_1 + lVar9) & 4 | uVar11;
    *puVar8 = uVar11;
    *puVar8 = *(byte *)((longlong)param_1 + lVar9) & 8 | uVar11;
    lVar9 = lVar9 + 7;
    puVar8 = puVar8 + 8;
  } while (lVar9 != 0x14e);
  return;
}



// FUNCTION 1473d5e20 FUN_1473d5e20 body=349 status=ok
// SIG undefined FUN_1473d5e20(void)

longlong * FUN_1473d5e20(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_c8 [44];
  uint local_9c;
  undefined1 local_98 [80];
  uint *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1473d57f0(param_3,*(undefined8 *)(param_1 + 0x48),local_98);
  uVar3 = (*(code *)PTR_FUN_14c75b148)(local_98,0x50,0);
  local_9c = uVar3;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78948);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar2 + 0x2080) != *(int *)(lVar2 + 0x20ac)) {
    lVar4 = lVar2 + 0x20b0;
    if (*(longlong *)(lVar2 + 0x20b8) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x20b8);
    }
    uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x20c0) - 1U & uVar3) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x2078) + (longlong)(int)uVar5 * 0x18);
        if (*puVar1 == uVar3) {
          if ((puVar1 != (uint *)0x0) && (puVar1 + 2 != (uint *)0x0)) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            goto LAB_1473d5f46;
          }
          break;
        }
        uVar5 = puVar1[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  lVar4 = FUN_14001cc68(0x28,0x10);
  FUN_1473d597a(lVar4,local_98,lVar2);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  local_48 = &local_9c;
  local_40 = param_2;
  FUN_1473e07de((longlong *)(lVar2 + 0x2078),local_34);
LAB_1473d5f46:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78948);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d5f7e FUN_1473d5f7e body=65 status=ok
// SIG undefined FUN_1473d5f7e(void)

longlong * FUN_1473d5f7e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x60,0x10);
  FUN_1473d5a48(lVar1,param_3);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473d5fc0 FUN_1473d5fc0 body=89 status=ok
// SIG undefined FUN_1473d5fc0(void)

undefined8 * FUN_1473d5fc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 3;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_FUN_14a36b9a8;
  uVar1 = *(undefined8 *)((longlong)param_3 + 6);
  puVar2[2] = *param_3;
  *(undefined8 *)((longlong)puVar2 + 0x16) = uVar1;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473d601a FUN_1473d601a body=65 status=ok
// SIG undefined FUN_1473d601a(void)

longlong * FUN_1473d601a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x150,0x10);
  FUN_1473d5c72(lVar1,param_3);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473d605b FUN_1473d605b body=135 status=ok
// SIG undefined FUN_1473d605b(void)

bool FUN_1473d605b(ushort param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14ca789f0;
  if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)param_1 * 0x3c) == DAT_14ca81498) &&
     ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1)) {
    if (DAT_14c760c6c != 1) {
      return false;
    }
  }
  else {
    if (param_1 != 0x30) {
      return false;
    }
    if (DAT_14c760c6c != 1) {
      return false;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return 0 < *(int *)(lVar1 + uVar3 * 4);
}



// FUNCTION 1473d60e2 FUN_1473d60e2 body=138 status=ok
// SIG undefined FUN_1473d60e2(void)

void FUN_1473d60e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  HMODULE local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0x3b9aed28;
  local_4c = 0;
  uStack_44 = 0;
  local_3c = 0;
  local_38 = GetModuleHandleW((LPCWSTR)0x0);
  local_30 = param_1;
  iVar1 = (*DAT_14ca78d10)(param_2,&local_50,0,param_3);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d616e FUN_1473d616e body=244 status=ok
// SIG undefined FUN_1473d616e(void)

void FUN_1473d616e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_1473a4890(*(undefined8 *)(param_1 + 0x10));
  bVar6 = DAT_14c760c9c == 0;
  if (bVar6 || param_2 == (undefined8 *)0x0) {
    (*DAT_14ca78e50)(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),0);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_1473a88a0(lVar3 + 0x640,*(longlong *)(param_1 + 0x78) + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar5 < *(int *)(param_1 + 0x80));
  }
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + lVar3 * 8);
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (puVar2 != (undefined8 *)0x0 && *piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x70));
  }
  if (bVar6 || param_2 == (undefined8 *)0x0) {
    (*DAT_14ca78a88)(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x18),0);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1473d6262 FUN_1473d6262 body=1058 status=ok
// SIG undefined FUN_1473d6262(void)

void FUN_1473d6262(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte bVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_588 [32];
  longlong *local_568;
  uint local_560;
  undefined1 *local_558;
  undefined8 local_548;
  ulonglong local_540;
  longlong local_538;
  longlong local_530;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  longlong local_510;
  undefined1 local_508 [56];
  undefined8 local_4d0;
  ulonglong local_4c8 [25];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_108 [152];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_70 = 0;
  local_68 = 0x200000000;
  puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))();
  local_568 = param_1 + 0x15;
  FUN_1431b606a(local_108,param_2,puVar6,(longlong)param_1 + 0xa4);
  iVar4 = (*DAT_14ca78f60)(*param_2,local_108,0,&local_510);
  if (iVar4 != 0) {
    FUN_1431b4552(iVar4);
  }
  local_540 = *puVar6;
  FUN_1473a8200(param_4,param_2,local_510);
  lVar2 = *(longlong *)(param_3 + 0x150);
  local_530 = param_3;
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  local_548 = *(undefined8 *)(lVar2 + 0x88);
  uVar5 = FUN_14739b90c(param_1);
  local_524 = (undefined4)param_1[0x20];
  local_520 = 0;
  uStack_51c = 0xffffffff;
  uStack_518 = 0;
  uStack_514 = 0xffffffff;
  local_4d0 = 0;
  local_4c8[0] = 0x100000000;
  local_400 = 0;
  local_3f8 = 0x200000000;
  local_3b8 = 0;
  local_3b0 = 0x200000000;
  local_3f0 = 0;
  uStack_3e8 = 0;
  local_3e0 = 0;
  local_568 = (longlong *)&local_524;
  FUN_147396818(local_508,param_1[0x13],param_5,6);
  local_568 = (longlong *)&local_524;
  FUN_147396818(local_508,local_510,0,7);
  local_538 = lVar2;
  FUN_147397068(local_508);
  FUN_1473945b6(local_508);
  memset(local_508,0,0x3fc);
  local_560 = (uint)(byte)puVar6[6];
  if ((byte)puVar6[6] != 0) {
    lVar2 = param_1[0x20];
    iVar4 = *(int *)((longlong)puVar6 + 0x24);
    uVar3 = puVar6[5];
    uVar1 = *(ushort *)((longlong)puVar6 + 0x2c);
    puVar6 = local_4c8;
    uVar8 = 0;
    do {
      bVar7 = (byte)uVar8;
      iVar9 = iVar4 >> (bVar7 & 0x1f);
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      *(int *)(puVar6 + -1) = iVar9;
      iVar9 = (int)uVar3 >> (bVar7 & 0x1f);
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      uVar10 = (uint)(uVar1 >> (bVar7 & 0x1f));
      *(int *)((longlong)puVar6 + -4) = iVar9;
      *(uint *)puVar6 = uVar10 + (uVar10 == 0);
      *(int *)(puVar6 + -8) = (int)lVar2;
      *(int *)((longlong)puVar6 + -0x24) = (int)lVar2;
      *(undefined4 *)(puVar6 + -7) = 0;
      *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
      *(undefined4 *)((longlong)puVar6 + -0x34) = uVar5;
      *(undefined4 *)(puVar6 + -3) = uVar5;
      *(int *)((longlong)puVar6 + -0x3c) = (int)uVar8;
      *(int *)(puVar6 + -4) = (int)uVar8;
      uVar8 = uVar8 + 1;
      puVar6 = (ulonglong *)((longlong)puVar6 + 0x44);
    } while (local_560 != uVar8);
  }
  uVar3 = local_540 & 7;
  local_558 = local_508;
  local_568 = (longlong *)CONCAT44(local_568._4_4_,7);
  (*DAT_14ca79078)(local_548,param_1[0x13],6,local_510);
  local_4d0 = 0;
  local_4c8[0] = 0x100000000;
  local_400 = 0;
  local_3f8 = 0x200000000;
  local_3b8 = 0;
  local_3b0 = 0x200000000;
  local_3f0 = 0;
  uStack_3e8 = 0;
  local_3e0 = 0;
  local_568 = (longlong *)&local_524;
  FUN_147396818(local_508,param_1[0x13],6,param_5);
  local_568 = (longlong *)&local_524;
  FUN_147396818(local_508,local_510,7,param_5);
  FUN_147397068(local_508,local_538);
  FUN_1473945b6(local_508);
  FUN_1473a4a48(param_2,param_1[0x13],
                CONCAT71((int7)((ulonglong)puVar6 >> 8),uVar3 != 0) & 0xffffffff);
  FUN_1473a8b5a(param_2 + 0xb2,3,param_1[0x13]);
  if (DAT_14ca78000 != 0) {
    FUN_145d03cb4(L"** MOVE IMAGE %p -> %p\n",param_1[0x13],local_510);
  }
  param_1[0x13] = local_510;
  FUN_1473bd608(*(longlong *)(local_530 + 0x128) + 0x60,param_1,param_5,0);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d6686 FUN_1473d6686 body=19 status=ok
// SIG undefined FUN_1473d6686(void)

void FUN_1473d6686(longlong param_1)

{
  FUN_1473a8158(param_1 + 0xe0,*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 1473d669a FUN_1473d669a body=19 status=ok
// SIG undefined FUN_1473d669a(void)

void FUN_1473d669a(longlong param_1)

{
  FUN_1473a804a(param_1 + 0xe0,*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 1473d66ae FUN_1473d66ae body=58 status=ok
// SIG undefined FUN_1473d66ae(void)

undefined8 FUN_1473d66ae(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1473a7d6e(param_1 + 0xe0);
  if (cVar1 != '\0') {
    uVar2 = FUN_1473a7d76(param_1 + 0xe0,*(undefined8 *)(param_1 + 0x90));
    return uVar2;
  }
  return 0;
}



// FUNCTION 1473d66e8 FUN_1473d66e8 body=40 status=ok
// SIG undefined FUN_1473d66e8(void)

undefined4 FUN_1473d66e8(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1473a7d6e(param_1 + 0xe0);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xf0);
  }
  return uVar2;
}



// FUNCTION 1473d6710 FUN_1473d6710 body=158 status=ok
// SIG undefined FUN_1473d6710(void)

void FUN_1473d6710(longlong *param_1,byte param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar3 = (**(code **)(*param_1 + 8))();
  uVar4 = (ulonglong)((uint)*(byte *)(lVar3 + 0x33) * 0x30);
  uVar5 = *(uint *)((longlong)&DAT_14c87341c + uVar4);
  uVar2 = *(uint *)((longlong)&DAT_14c873420 + uVar4);
  uVar1 = *(int *)(lVar3 + 0x24) >> (param_2 & 0x1f);
  if (uVar1 < uVar5) {
    uVar1 = uVar5;
  }
  uVar6 = *(int *)(lVar3 + 0x28) >> (param_2 & 0x1f);
  if (uVar6 < uVar2) {
    uVar6 = uVar2;
  }
  uVar5 = ((uVar1 + uVar5) - 1) / uVar5;
  uVar2 = ((uVar2 + uVar6) - 1) / uVar2;
  if ((*(byte *)(lVar3 + 0x33) & 0xfe) == 0x1e) {
    if (uVar5 < 3) {
      uVar5 = 2;
    }
    if (uVar2 < 3) {
      uVar2 = 2;
    }
  }
  *param_3 = *(ushort *)(lVar3 + 0x2c) * uVar2 * uVar5 * *(int *)((longlong)&DAT_14c873428 + uVar4);
  return;
}



// FUNCTION 1473d67ae FUN_1473d67ae body=650 status=ok
// SIG undefined FUN_1473d67ae(void)

void FUN_1473d67ae(longlong param_1,longlong param_2,int param_3,char param_4,longlong param_5,
                  char param_6)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  undefined4 *local_1d0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)(param_2 + 0x150);
  if (param_6 == '\0') {
    lVar1 = FUN_1473984ce(lVar1);
  }
  else {
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      FUN_14739859c(lVar1,0,0);
    }
    lVar1 = *(longlong *)(lVar1 + 0x78);
  }
  local_1bc = *(undefined4 *)(param_1 + 0x100);
  local_1b8 = 0;
  uStack_1b4 = 0xffffffff;
  uStack_1b0 = 0;
  uStack_1ac = 0xffffffff;
  iVar2 = 0;
  if (param_4 == '\x01' && param_6 == '\0') {
    local_170 = 0;
    local_168 = 0x100000000;
    local_a0 = 0;
    local_98 = 0x200000000;
    local_58 = 0;
    local_50 = 0x200000000;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_1d8 = &local_1bc;
    FUN_147396818(&local_1a8,*(undefined8 *)(param_1 + 0x98),0,7);
    FUN_147397068(&local_1a8,lVar1);
    FUN_1473945b6(&local_1a8);
    local_1d0 = &local_1bc;
    if (*(int *)(param_1 + 0x100) == 1) {
      local_1a8 = *(undefined4 *)(param_5 + 4);
      local_1a4 = *(undefined4 *)(param_5 + 8);
      local_1a0 = *(undefined4 *)(param_5 + 0xc);
      local_19c = *(undefined4 *)(param_5 + 0x10);
      local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,1);
      (*DAT_14ca79098)(*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(param_1 + 0x98),7);
    }
    else {
      local_1a8 = *(undefined4 *)(param_5 + 4);
      local_1a4 = *(undefined4 *)(param_5 + 8);
      local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,1);
      (*DAT_14ca790a0)(*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(param_1 + 0x98),7);
    }
    iVar2 = 7;
  }
  if (param_3 != 0 && iVar2 != param_3) {
    local_170 = 0;
    local_168 = 0x100000000;
    local_a0 = 0;
    local_98 = 0x200000000;
    local_58 = 0;
    local_50 = 0x200000000;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_147396736(&local_1a8,param_1,iVar2,param_3);
    FUN_147397068(&local_1a8,lVar1);
    FUN_1473945b6(&local_1a8);
  }
  FUN_1473bd608(lVar1 + 0x108,param_1,param_3,0);
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d6a3a FUN_1473d6a3a body=134 status=ok
// SIG undefined FUN_1473d6a3a(void)

void FUN_1473d6a3a(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  param_2[4] = DAT_14ca84eb8 << 10;
  param_2[5] = DAT_14ca84ec0 << 10;
  param_2[7] = DAT_14ca84ec8;
  uVar1 = FUN_1473a5cd0(*(longlong *)(param_1 + 0x48) + 8,1);
  uVar2 = FUN_1473a5cd0(*(longlong *)(param_1 + 0x48) + 8,0);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = 0xffffffffffffffff;
  param_2[3] = -(ulonglong)(uVar1 == 0) | uVar1;
  param_2[6] = param_2[4];
  return;
}



// FUNCTION 1473d6ac4 FUN_1473d6ac4 body=33 status=ok
// SIG undefined FUN_1473d6ac4(void)

undefined4 FUN_1473d6ac4(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x30))(param_2);
    uVar1 = *(undefined4 *)(lVar2 + 0xb0);
  }
  return uVar1;
}



// FUNCTION 1473d6ae6 FUN_1473d6ae6 body=265 status=ok
// SIG undefined FUN_1473d6ae6(void)

void FUN_1473d6ae6(longlong param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_3 != 0) &&
      (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x6b0) + 8) != '\0')) &&
     ((char)((ulonglong)*(undefined8 *)(param_3 + 0x68) >> 0x20) != -1 &&
      (int)*(undefined8 *)(param_3 + 0x68) != -1)) {
    local_38 = param_3;
    uStack_30 = param_4;
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      FUN_1431c0ce8(&local_38);
    }
    else {
      puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar2 = puVar1 + 4;
      if ((undefined8 *)param_2[1] < puVar2) {
        FUN_140023dd8(param_2,0x28);
        puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar2 = puVar1 + 4;
      }
      *param_2 = (ulonglong)puVar2;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar1;
      param_2[6] = (ulonglong)(puVar1 + 1);
      puVar1[1] = 0;
      *puVar1 = &PTR_LAB_14a36bc00;
      *(undefined4 *)(puVar1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_30._4_4_;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1474044c6(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d6bf0 FUN_1473d6bf0 body=48 status=ok
// SIG undefined FUN_1473d6bf0(void)

undefined8 * FUN_1473d6bf0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/VulkanRHI/Private/VulkanTexture.cpp",0x40b,
                L"RHIAsyncCreateTexture2D is not supported");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1473d6c28 FUN_1473d6c28 body=551 status=ok
// SIG undefined FUN_1473d6c28(void)

void FUN_1473d6c28(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  longlong local_200;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [56];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f0 = param_1;
  local_1c8 = param_4;
  lVar3 = FUN_1473984ce(*(undefined8 *)(param_1 + 0x150));
  local_1e8 = *(undefined8 *)(lVar3 + 0x88);
  local_1dc = *(undefined8 *)(param_3 + 0x10);
  local_1d0 = *(undefined8 *)(param_3 + 0x18);
  local_208 = &local_1dc;
  local_1d4 = 1;
  local_188 = 0;
  local_180 = 0x100000000;
  local_b8 = 0;
  local_b0 = 0x200000000;
  local_70 = 0;
  local_68 = 0x200000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_147396818(local_1c0,*(undefined8 *)(param_2 + 0x98),0,7);
  FUN_147397068(local_1c0,lVar3);
  FUN_1473945b6(local_1c0);
  pcVar2 = DAT_14ca79088;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar4 = FUN_1473a2c3c(param_4);
  local_208 = (undefined8 *)CONCAT44(local_208._4_4_,1);
  local_200 = param_3;
  (*pcVar2)(local_1e8,uVar4,uVar1,7);
  local_188 = 0;
  local_180 = 0x100000000;
  local_b8 = 0;
  local_b0 = 0x200000000;
  local_70 = 0;
  local_68 = 0x200000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_208 = &local_1dc;
  FUN_147396818(local_1c0,*(undefined8 *)(param_2 + 0x98),7,*(undefined4 *)(param_2 + 0x110));
  FUN_147397068(local_1c0,lVar3);
  FUN_1473945b6(local_1c0);
  FUN_1473a2c42(*(longlong *)(param_2 + 0x90) + 0x5d0,lVar3,&local_1c8);
  if (DAT_14c760cac != 0) {
    FUN_14739859c(*(undefined8 *)(local_1f0 + 0x150),0,0);
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d6e50 FUN_1473d6e50 body=165 status=ok
// SIG undefined FUN_1473d6e50(void)

undefined8 *
FUN_1473d6e50(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  
  lVar6 = (**(code **)(*param_4 + 8))(param_4);
  iVar8 = *(int *)(param_6 + 3) *
          *(int *)(*(longlong *)(param_1 + 8) + (ulonglong)*(byte *)(lVar6 + 0x33) * 4);
  iVar5 = *(int *)((longlong)param_6 + 0x1c) * iVar8;
  lVar6 = (ulonglong)*(uint *)(param_6 + 4) * (longlong)iVar5;
  uVar7 = FUN_14001cc68(lVar6,0);
  uVar4 = DAT_14c7590b0;
  *param_2 = param_4;
  *(undefined4 *)(param_2 + 1) = param_5;
  *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_6 + 4);
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar3 = param_6[3];
  *(undefined8 *)((longlong)param_2 + 0x1c) = param_6[2];
  *(undefined8 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0xc) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x14) = uVar2;
  *(int *)(param_2 + 6) = iVar8;
  *(int *)((longlong)param_2 + 0x34) = iVar5;
  param_2[7] = uVar7;
  *(int *)(param_2 + 8) = (int)lVar6;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar4;
  return param_2;
}



// FUNCTION 1473d6ef6 FUN_1473d6ef6 body=81 status=ok
// SIG undefined FUN_1473d6ef6(void)

void FUN_1473d6ef6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1431b88aa(param_1,param_2,*param_3,*(undefined4 *)(param_3 + 1),(longlong)param_3 + 0xc,
                *(undefined4 *)(param_3 + 6),*(undefined4 *)((longlong)param_3 + 0x34),param_3[7]);
  FUN_1400020a8(param_3[7]);
  param_3[7] = 0;
  return;
}



// FUNCTION 1473d6f48 FUN_1473d6f48 body=54 status=ok
// SIG undefined FUN_1473d6f48(void)

void FUN_1473d6f48(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_2;
  uVar2 = *(undefined8 *)(lVar1 + 0x178);
  uVar3 = *(undefined8 *)(lVar1 + 0x180);
  uVar4 = *(undefined8 *)(lVar1 + 400);
  param_1[2] = *(undefined8 *)(lVar1 + 0x188);
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(byte *)((longlong)param_1 + 0x1b) = *(byte *)((longlong)param_1 + 0x1b) & 0x7f;
  *param_1 = *(undefined8 *)(lVar1 + 0x158);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + (int)param_2[2];
  *(int *)((longlong)param_1 + 0xc) = (int)param_2[1];
  return;
}



// FUNCTION 1473d6f7e FUN_1473d6f7e body=105 status=ok
// SIG undefined FUN_1473d6f7e(void)

longlong * FUN_1473d6f7e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_1473a292c(*(undefined8 *)(param_2 + 0x6b0),&local_20);
  param_1[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d6fe8 FUN_1473d6fe8 body=1317 status=ok
// SIG undefined FUN_1473d6fe8(void)

longlong *
FUN_1473d6fe8(longlong *param_1,longlong param_2,ulonglong *param_3,longlong param_4,
             undefined4 *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined8 unaff_RBP;
  undefined7 uVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  ulonglong *local_98;
  uint local_90;
  undefined4 local_88;
  uint local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400f7c82(param_1,param_3);
  param_1[0xe] = 0;
  *param_1 = (longlong)&PTR_FUN_14a36aaf0;
  param_1[0xc] = (longlong)&PTR_LAB_14a36ab40;
  param_1[0xd] = (longlong)&PTR_FUN_14a36ab68;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = param_4;
  param_1[0x14] = 0;
  param_1[0x15] = 0x100000000;
  uVar7 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)(param_1 + 0x19) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar7;
  *(undefined4 *)(param_1 + 0x1a) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar4;
  *(undefined4 *)(param_1 + 0x1b) = 0x7fffffff;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 2;
  *(undefined4 *)((longlong)param_1 + 0xa4) =
       *(undefined4 *)
        ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)((longlong)param_3 + 0x33) * 0x30));
  puVar12 = (undefined4 *)
            ((longlong)&DAT_14c873434 +
            (ulonglong)((uint)*(byte *)((longlong)param_3 + 0x33) * 0x30));
  if ((*param_3 & 0x10) != 0) {
    puVar12 = &DAT_14ca781f0 + *(byte *)((longlong)param_3 + 0x33);
  }
  *(undefined4 *)(param_1 + 0x15) = *puVar12;
  bVar1 = *(byte *)((longlong)param_3 + 0x33);
  uVar14 = (undefined7)((ulonglong)unaff_RBP >> 8);
  bVar13 = 1;
  if (bVar1 < 0x14) {
    if (bVar1 == 0xb) {
      uVar7 = 6;
    }
    else {
      if (bVar1 == 0xc) goto LAB_1473d7130;
LAB_1473d7127:
      uVar7 = 1;
      bVar13 = 0;
      uVar14 = 0;
    }
  }
  else if (bVar1 == 0x14) {
LAB_1473d7130:
    uVar7 = 2;
  }
  else {
    uVar7 = 4;
    if (bVar1 != 0x2c) goto LAB_1473d7127;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  bVar1 = *(byte *)((longlong)param_3 + 0x33);
  if (bVar1 < 0x14) {
    if ((bVar1 == 0xb) || (bVar1 == 0xc)) {
LAB_1473d7162:
      uVar7 = 2;
      goto LAB_1473d7167;
    }
  }
  else {
    if (bVar1 == 0x14) goto LAB_1473d7162;
    uVar7 = 4;
    if (bVar1 == 0x2c) goto LAB_1473d7167;
  }
  uVar7 = 1;
LAB_1473d7167:
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar7;
  if ((*param_3 & 0x40000) != 0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  if (param_4 != 0) {
    uVar6 = FUN_1431b650f(param_2,param_3);
    *(uint *)(param_1 + 0x14) = uVar6;
    uVar2 = *param_3;
    bVar16 = (uVar2 & 5) == 0;
    uVar7 = FUN_1431b8bf4((int)param_3[7],CONCAT71(uVar14,bVar13 & !bVar16) & 0xffffffff,
                          *(uint *)((longlong)&DAT_14c873430 +
                                   (ulonglong)((uint)*(byte *)((longlong)param_1 + 0x53) * 0x30)) >>
                          9 & uVar6 >> 2 & 1);
    *(undefined4 *)(param_1 + 0x22) = uVar7;
    cVar5 = FUN_144a5d717();
    if ((cVar5 == '\0') || (DAT_14c842750 == '\0')) {
      if ((uVar2 & 5) == 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x20c8) + 0x150);
        if (*(longlong *)(lVar9 + 0x80) != 0) {
          FUN_14739859c(lVar9,0,0);
        }
        FUN_1473bd608(*(longlong *)(lVar9 + 0x78) + 0x108,param_1,uVar7,1);
      }
      else {
        local_98 = param_3 + 1;
        local_90 = local_90 & 0xffffff00;
        FUN_1473d67ae(param_1,*(longlong *)(param_2 + 0x20c8),uVar7,1);
      }
    }
    else {
      puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar8 + 7;
      if (DAT_14ca85108 < puVar11) {
        FUN_140023dd8(&DAT_14ca85100,0x40);
        puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar8 + 7;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar11;
      *DAT_14ca85130 = puVar8;
      DAT_14ca85130 = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_14a36ba10;
      puVar8[2] = param_1;
      *(undefined4 *)(puVar8 + 3) = uVar7;
      *(bool *)((longlong)puVar8 + 0x1c) = bVar16;
      *(bool *)((longlong)puVar8 + 0x1d) = (uVar2 & 5) != 0;
      *(undefined1 *)((longlong)puVar8 + 0x1e) = 0;
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar2 = param_3[2];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
      *(int *)(puVar8 + 4) = (int)param_3[1];
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar7;
      *(int *)(puVar8 + 5) = (int)uVar2;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar3;
      *(int *)(puVar8 + 6) = (int)param_3[3];
    }
  }
  lVar9 = (**(code **)(*param_1 + 8))(param_1);
  uVar7 = 0x7fffffff;
  if ((ulonglong)*(byte *)(lVar9 + 0x32) < 5) {
    uVar7 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar9 + 0x32) * 4);
  }
  lVar9 = (**(code **)(*param_1 + 8))(param_1);
  bVar16 = true;
  uVar15 = 3;
  if (((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(lVar9 + 0x33) * 0x30) + 1)
       & 2) != 0) && ((*(byte *)(param_1 + 0x14) & 4) != 0)) {
    bVar16 = (int)param_1[0x15] == 0;
    uVar15 = 2;
  }
  if (param_1[0x13] != 0) {
    plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
    *plVar10 = param_2;
    *(undefined1 *)(plVar10 + 2) = 0;
    *(undefined1 *)(plVar10 + 5) = 0;
    FUN_1473a292c(*(undefined8 *)(param_2 + 0x6b0),&local_50,uVar15);
    plVar10[1] = local_50;
    local_70 = FUN_14739b90c(param_1);
    local_80 = (int)param_3[6] + (uint)((char)(int)param_3[6] == '\0') & 0xff;
    local_90 = *(uint *)(param_1 + 0x15);
    local_60 = 0;
    local_78 = 0;
    local_88 = 0;
    local_98 = (ulonglong *)CONCAT71(local_98._1_7_,*(byte *)((longlong)param_3 + 0x33));
    local_68 = bVar16;
    FUN_1431b8c8e(plVar10,param_1[0x13],uVar7,(int)param_1[0x20]);
    param_1[0xf] = (longlong)plVar10;
  }
  if ((int)param_1[0x20] == *(int *)((longlong)param_1 + 0x104)) {
    plVar10 = (longlong *)param_1[0xf];
  }
  else {
    plVar10 = (longlong *)FUN_14001cc68(0x30,0x10);
    *plVar10 = param_2;
    *(undefined4 *)(plVar10 + 1) = 0xffffffff;
    *(undefined1 *)((longlong)plVar10 + 0xc) = 0xff;
    *(undefined1 *)(plVar10 + 2) = 0;
    *(undefined1 *)(plVar10 + 5) = 0;
    FUN_1473a292c(*(undefined8 *)(param_2 + 0x6b0),&local_50,uVar15);
    plVar10[1] = local_50;
    local_70 = FUN_14739b90c(param_1);
    local_80 = (int)param_3[6] + (uint)((char)(int)param_3[6] == '\0') & 0xff;
    local_90 = *(uint *)(param_1 + 0x15);
    local_60 = 0;
    local_68 = 0;
    local_78 = 0;
    local_88 = 0;
    local_98 = (ulonglong *)CONCAT71(local_98._1_7_,*(byte *)((longlong)param_3 + 0x33));
    FUN_1431b8c8e(plVar10,param_1[0x13],uVar7,*(undefined4 *)((longlong)param_1 + 0x104));
  }
  param_1[0x10] = (longlong)plVar10;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473d750e FUN_1473d750e body=542 status=ok
// SIG undefined FUN_1473d750e(void)

undefined8 * FUN_1473d750e(undefined8 *param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_d8 [56];
  undefined4 local_a0;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400f7c82(param_1,param_3);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14a36aaf0;
  param_1[0xc] = &PTR_LAB_14a36ab40;
  param_1[0xd] = &PTR_FUN_14a36ab68;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x100000000;
  *(undefined4 *)(param_1 + 0x1b) = 0x7fffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 3;
  *(undefined4 *)((longlong)param_1 + 0xa4) =
       *(undefined4 *)((longlong)&DAT_14c873434 + (ulonglong)((uint)param_3[0x33] * 0x30));
  puVar3 = (undefined4 *)((longlong)&DAT_14c873434 + (ulonglong)((uint)param_3[0x33] * 0x30));
  if ((*param_3 & 0x10) != 0) {
    puVar3 = &DAT_14ca781f0 + param_3[0x33];
  }
  *(undefined4 *)(param_1 + 0x15) = *puVar3;
  bVar1 = param_3[0x33];
  if (bVar1 < 0x14) {
    if (bVar1 == 0xb) {
      uVar2 = 6;
    }
    else {
      if (bVar1 == 0xc) goto LAB_1473d7642;
LAB_1473d763b:
      uVar2 = 1;
    }
  }
  else if (bVar1 == 0x14) {
LAB_1473d7642:
    uVar2 = 2;
  }
  else {
    uVar2 = 4;
    if (bVar1 != 0x2c) goto LAB_1473d763b;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  bVar1 = param_3[0x33];
  if (bVar1 < 0x14) {
    if ((bVar1 == 0xb) || (bVar1 == 0xc)) {
LAB_1473d7674:
      uVar2 = 2;
      goto LAB_1473d7679;
    }
  }
  else {
    if (bVar1 == 0x14) goto LAB_1473d7674;
    uVar2 = 4;
    if (bVar1 == 0x2c) goto LAB_1473d7679;
  }
  uVar2 = 1;
LAB_1473d7679:
  local_e8 = param_1 + 0x15;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
  if ((param_3[2] & 4) != 0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  local_40 = 0;
  local_38 = 0x200000000;
  FUN_1431b606a(local_d8,param_2,param_3,(longlong)param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x14) = local_a0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1473d772e(param_1,param_4);
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473d772e FUN_1473d772e body=134 status=ok
// SIG undefined FUN_1473d772e(void)

void FUN_1473d772e(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar4 + 0x98);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar4 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar4 + 0x80);
  lVar3 = *(longlong *)(param_1 + 0x88);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x88) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar4 + 0x110);
  return;
}



// FUNCTION 1473d77b4 FUN_1473d77b4 body=197 status=ok
// SIG undefined FUN_1473d77b4(void)

void FUN_1473d77b4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a36aaf0;
  param_1[0xc] = &PTR_LAB_14a36ab40;
  param_1[0xd] = &PTR_FUN_14a36ab68;
  if (*(char *)((longlong)param_1 + 0x114) != '\x03') {
    lVar4 = param_1[0xf];
    lVar3 = param_1[0x10];
    if (lVar3 != 0 && lVar3 != lVar4) {
      FUN_1473d787a(lVar3);
      FUN_1400020a8(lVar3);
      lVar4 = param_1[0xf];
    }
    if (lVar4 != 0) {
      FUN_1473d787a(lVar4);
      FUN_1400020a8(lVar4);
    }
    FUN_1431b65a8(param_1);
  }
  if (param_1[0x11] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x11] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[0xd] = &PTR_FUN_14a3588b8;
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473d787a FUN_1473d787a body=100 status=ok
// SIG undefined FUN_1473d787a(void)

void FUN_1473d787a(longlong *param_1)

{
  ulonglong uVar1;
  
  FUN_1431b8ee4();
  if (((int)param_1[1] != -1) && (*(char *)((longlong)param_1 + 0xc) != -1)) {
    uVar1 = param_1[1];
    if ((char)(uVar1 >> 0x20) != -1 && (int)uVar1 != -1) {
      FUN_1473a8b5a(*param_1 + 0x590,0x11,uVar1 & 0xffffffffff);
    }
    param_1[1] = 0xffffffffff;
  }
  return;
}



// FUNCTION 1473d78de FUN_1473d78de body=407 status=ok
// SIG undefined FUN_1473d78de(void)

void FUN_1473d78de(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  
  lVar6 = param_1 + -0x68;
  FUN_1431b8ee4(*(undefined8 *)(param_1 + 0x10));
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x68) + 8))(lVar6);
  bVar1 = *(byte *)(lVar5 + 0x30);
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x68) + 8))(lVar6);
  if ((ulonglong)*(byte *)(lVar5 + 0x32) < 5) {
    uVar8 = *(undefined4 *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar5 + 0x32) * 4);
    uVar4 = FUN_14739b90c(lVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = (**(code **)(*(longlong *)(param_1 + -0x68) + 8))(lVar6);
    bVar9 = true;
    if ((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30) + 1)
        & 2) != 0) {
      bVar9 = (*(byte *)(param_1 + 0x38) & 4) == 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    lVar5 = (**(code **)(*(longlong *)(param_1 + -0x68) + 8))(lVar6);
    FUN_1431b8c8e(uVar3,*(undefined8 *)(param_1 + 0x30),uVar8,*(undefined4 *)(param_1 + 0x98),
                  *(undefined1 *)(lVar5 + 0x33),uVar2,0,(uint)bVar1 + (uint)(bVar1 == 0),0,uVar4,
                  bVar9,0);
  }
  else {
    uVar4 = FUN_14739b90c(lVar6);
    uVar8 = 0x7fffffff;
  }
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x10)) {
    FUN_1431b8ee4();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    lVar6 = (**(code **)(*(longlong *)(param_1 + -0x68) + 8))(lVar6);
    FUN_1431b8c8e(uVar3,*(undefined8 *)(param_1 + 0x30),uVar8,*(undefined4 *)(param_1 + 0x9c),
                  *(undefined1 *)(lVar6 + 0x33),uVar2,0,(uint)bVar1 + (uint)(bVar1 == 0),0,uVar4,0,0
                 );
  }
  for (puVar7 = *(undefined8 **)(param_1 + 8); puVar7 != (undefined8 *)0x0;
      puVar7 = (undefined8 *)puVar7[7]) {
    (**(code **)*puVar7)(puVar7);
  }
  return;
}



// FUNCTION 1473d7a76 FUN_1473d7a76 body=34 status=ok
// SIG undefined FUN_1473d7a76(void)

void FUN_1473d7a76(longlong param_1)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[7]) {
    (**(code **)*puVar1)(puVar1);
  }
  return;
}



// FUNCTION 1473d7a98 FUN_1473d7a98 body=601 status=ok
// SIG undefined FUN_1473d7a98(void)

void FUN_1473d7a98(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined2 *local_b0;
  undefined1 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined2 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(uint *)(param_1 + 0x50);
  DAT_14ca78b38 = DAT_14ca78b38 + uVar2;
  lVar1 = param_1 + -0x60;
  if (DAT_14ca78000 != 0) {
    local_88 = *(undefined2 **)(param_1 + -0x50);
    FUN_1400021e4(&local_88,&local_68);
    local_b0 = local_68;
    if ((int)uStack_60 == 0) {
      local_b0 = &DAT_149dfb77a;
    }
    local_b8 = *(undefined8 *)(param_1 + 0x38);
    FUN_145d03cb4(L"Evicted %8.4fkb %8.4fkb   TB %p  :: IMG %p   %-40s\n",
                  (double)((float)uVar2 * 0.0009765625),
                  (double)((float)DAT_14ca78b38 * 0.0009765625),lVar1);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar8 = FUN_1473a8308(*(longlong *)(param_3 + 0x128) + 0x60,*(undefined8 *)(param_1 + 0x38));
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) == 0)) {
    (**(code **)(*(longlong *)(param_1 + -0x60) + 8))(lVar1);
    uVar7 = FUN_1473a58ba(param_2 + 8);
    *(undefined4 *)(param_1 + 0x4c) = uVar7;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_a0 = ".\\Runtime/VulkanRHI/Private/VulkanTexture.cpp";
    local_98 = 0x8f2;
    local_a8 = 0;
    local_b0 = (undefined2 *)CONCAT71(local_b0._1_7_,6);
    local_b8._0_4_ = uVar7;
    cVar6 = FUN_1473a7960(param_2 + 0x3d8,&local_88,param_1,param_1 + 0x50);
    if (cVar6 == '\0') {
      local_b8._0_4_ = 0;
      FUN_1473a780e(param_2 + 0x3d8,0,0,0);
    }
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar8 + 0xc));
    FUN_1473d6262(lVar1,param_2,param_3,&local_88);
    FUN_1473a73fe(*(longlong *)(param_1 + 0x30) + 0x3d8,param_1 + 0x80,0);
    local_68 = *(undefined2 **)(param_1 + 0x80);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_74,uStack_78);
    *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_6c,uStack_70);
    *(undefined2 **)(param_1 + 0x80) = local_88;
    *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_7c,uStack_80);
    uStack_60._0_4_ = (int)uVar3;
    uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_58._0_4_ = (undefined4)uVar4;
    local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_50._0_4_ = (undefined4)uVar5;
    uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    uStack_80 = (int)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_88 = local_68;
    uStack_60 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d7cf2 FUN_1473d7cf2 body=86 status=ok
// SIG undefined FUN_1473d7cf2(void)

void FUN_1473d7cf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(local_20,param_4,1);
  FUN_1431ed9b8(param_3,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d7d4c FUN_1473d7d4c body=1066 status=ok
// SIG undefined FUN_1473d7d4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1473d7d4c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_108 [152];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  ushort local_34;
  undefined2 local_32;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  byte local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_2e = *(undefined1 *)((longlong)param_3 + 0x32);
  local_60 = *param_3;
  local_2d = *(byte *)((longlong)param_3 + 0x33);
  local_3c = *(undefined8 *)((longlong)param_3 + 0x24);
  local_34 = *(ushort *)((longlong)param_3 + 0x2c);
  local_32 = *(undefined2 *)((longlong)param_3 + 0x2e);
  local_2f = *(undefined1 *)((longlong)param_3 + 0x31);
  local_2b = *(undefined1 *)((longlong)param_3 + 0x35);
  local_44 = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_2c = 0;
  uVar6 = (uint)((ulonglong)local_3c >> 0x20);
  if ((int)uVar6 < (int)(uint)local_34) {
    uVar6 = (uint)local_34;
  }
  local_58 = DAT_14ca85088;
  uStack_54 = DAT_14ca8508c;
  uStack_50 = DAT_14ca85090;
  uStack_4c = DAT_14ca85094;
  if ((int)uVar6 <= (int)(uint)local_3c) {
    uVar6 = (uint)local_3c;
  }
  uVar2 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar7 = 1;
  if (uVar6 != 0) {
    uVar7 = (uVar2 ^ 0xffffffe0) + 0x21;
  }
  local_48 = DAT_14ca85098;
  if (*(byte *)(param_3 + 6) <= uVar7) {
    uVar7 = (uint)*(byte *)(param_3 + 6);
  }
  local_40 = 0;
  local_30 = (undefined1)uVar7;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca78b90) {
    FUN_144b3d300(&DAT_14ca78b90);
    if (DAT_14ca78b90 == -1) {
      DAT_14ca78b60 = 0;
      DAT_14ca78b68 = 0;
      DAT_14ca78b40 = 0;
      _DAT_14ca78b48 = 0;
      _DAT_14ca78b6c = 0xffffffff00000080;
      DAT_14ca78b74 = 0;
      DAT_14ca78b80 = 0;
      DAT_14ca78b88 = 0;
      atexit(FUN_1431b93c0);
      _Init_thread_footer(&DAT_14ca78b90);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca78bc0) {
    FUN_144b3d300(&DAT_14ca78bc0);
    if (DAT_14ca78bc0 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78b98);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca78b98,4000);
      atexit((_func_5014 *)&LAB_1431b93e9);
      _Init_thread_footer(&DAT_14ca78bc0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78b98);
  uVar3 = FUN_144847bd5(&local_60);
  iVar4 = FUN_1473e1914(uVar3,&local_60);
  if ((iVar4 == -1) || (lVar5 = (longlong)iVar4 * 0x58 + DAT_14ca78b40, lVar5 == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78b98);
    local_70 = 0;
    local_68 = 0x200000000;
    local_178 = 0;
    FUN_1431b606a(local_108,*(undefined8 *)(param_1 + 0x48),&local_60,0);
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if ((*(byte *)((longlong)puVar1 + 0x20fd) & 2) == 0) {
      iVar4 = (*DAT_14ca78f60)(*puVar1,local_108,0,&local_170);
      if (iVar4 != 0) {
        FUN_1431b4552(iVar4);
      }
      (*DAT_14ca78ee0)(**(undefined8 **)(param_1 + 0x48),
                       CONCAT44(local_170._4_4_,(undefined4)local_170),&local_128);
      (*DAT_14ca78f68)(**(undefined8 **)(param_1 + 0x48),
                       CONCAT44(local_170._4_4_,(undefined4)local_170),0);
    }
    else {
      local_148 = 0x3ba1174b;
      local_144 = 0;
      uStack_13c = 0;
      if ((0x2c < (ulonglong)local_2d) ||
         (uVar6 = 2, (0x100000101800U >> ((ulonglong)local_2d & 0x3f) & 1) == 0)) {
        uVar6 = 1;
      }
      local_130 = (ulonglong)uVar6;
      local_170._0_4_ = 0x3b9d0453;
      local_170._4_4_ = 0;
      uStack_168._0_4_ = 0;
      uStack_168._4_4_ = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      local_14c = 0;
      uStack_138 = local_108;
      (*DAT_14ca79128)(*puVar1,&local_148,&local_170);
      local_118 = CONCAT44(local_14c,uStack_150);
      local_128 = uStack_160;
      uStack_124 = (undefined4)uStack_15c;
      uStack_120 = uStack_15c._4_4_;
      uStack_11c = uStack_154;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78b98);
    uStack_168 = &local_128;
    local_170 = &local_60;
    FUN_1473e1992(&local_148);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78b98);
    *param_2 = CONCAT44(uStack_124,local_128);
    *(undefined4 *)(param_2 + 1) = uStack_120;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = *(undefined8 *)(lVar5 + 0x38);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar5 + 0x40);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78b98);
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d8178 FUN_1473d8178 body=407 status=ok
// SIG undefined FUN_1473d8178(void)

void FUN_1473d8178(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_4 != 0 && param_2 != 0) && (param_6 != 0 && param_2 != param_4)) {
    uVar1 = *(uint *)(param_2 + 0x60);
    uVar2 = *(uint *)(param_4 + 0x60);
    lVar3 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      FUN_14739859c(lVar3,0,0);
    }
    uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x78) + 0x88);
    local_c0 = &local_68;
    local_58 = 0x180000018000;
    local_68 = 0x2e;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
    (*DAT_14ca79290)(uVar4,0x10000,0x1000,0);
    local_c8 = &local_80;
    local_70 = param_6;
    local_80 = (ulonglong)uVar2 + param_5;
    local_78 = (ulonglong)uVar1 + param_3;
    (*DAT_14ca793f0)(uVar4,*(undefined8 *)(param_4 + 0x50),*(undefined8 *)(param_2 + 0x50),1);
    local_c0 = &local_98;
    local_88 = 0x1800000001800;
    local_98 = 0x2e;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,1);
    (*DAT_14ca79290)(uVar4,0x1000,0x10000,0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d8310 FUN_1473d8310 body=388 status=ok
// SIG undefined FUN_1473d8310(void)

undefined8 * FUN_1473d8310(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  uint local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1410329dc();
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = param_3;
  *param_1 = &PTR_FUN_14a36ac10;
  param_1[0x28] = &PTR_FUN_14a36ac18;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  uVar1 = param_3[0x41f];
  uVar3 = ((uint)(uVar1 >> 0x20) & 1) << 0x13 | 0x1c388;
  if ((uVar1 & 0x1800) == 0) {
    uVar3 = 0x1c388;
  }
  if ((~uVar1 & 0x4c0002400) != 0) {
    uVar3 = 0x1c388;
  }
  uStack_68 = FUN_147397a78(param_3,uVar3,0);
  local_88 = 0xc;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = 0;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_70 = (undefined4)*param_2;
  uStack_6c = (undefined4)((ulonglong)*param_2 >> 0x20);
  iVar2 = (*DAT_14ca793e8)(*param_3,&local_88,0,param_1 + 0x2b);
  if (iVar2 != 0) {
    FUN_1431b4552(iVar2);
  }
  uVar3 = FUN_1473a779c(param_3,uVar3,0);
  local_90 = *(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) < uVar3) {
    local_90 = uVar3;
  }
  local_98 = L"VulkanTransientHeap";
  FUN_14319eeca(param_3 + 0x7b,param_1 + 0x2f,param_1[0x2b],0x88);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d8496 FUN_1473d8496 body=88 status=ok
// SIG undefined FUN_1473d8496(void)

void FUN_1473d8496(longlong param_1)

{
  FUN_1473a73fe(*(longlong *)(param_1 + 0x150) + 0x3d8,param_1 + 0x178,0);
  FUN_1473a8b5a(*(longlong *)(param_1 + 0x150) + 0x590,1,*(undefined8 *)(param_1 + 0x158));
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_140f7d48c(param_1);
  return;
}



// FUNCTION 1473d84ee FUN_1473d84ee body=143 status=ok
// SIG undefined FUN_1473d84ee(void)

undefined8 * FUN_1473d84ee(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  uint local_38;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c6c30a(local_48);
  local_38 = 0x100;
  if (0x100 < *(uint *)(param_1 + 0xc48)) {
    local_38 = *(uint *)(param_1 + 0xc48);
  }
  local_28 = 1;
  puVar1 = (undefined8 *)FUN_14001cc68(200,0x10);
  FUN_145c6c34c(puVar1,local_48);
  puVar1[0x18] = param_1;
  *puVar1 = &PTR_FUN_14a36ac50;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d857e FUN_1473d857e body=51 status=ok
// SIG undefined FUN_1473d857e(void)

void FUN_1473d857e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x198,0x10);
  FUN_1473d8310(uVar1,param_2,*(undefined8 *)(param_1 + 0xc0));
  return;
}



// FUNCTION 1473d85b2 FUN_1473d85b2 body=48 status=ok
// SIG undefined FUN_1473d85b2(void)

undefined8 * FUN_1473d85b2(undefined8 *param_1,longlong param_2)

{
  FUN_145c6c1c4();
  param_1[6] = *(undefined8 *)(param_2 + 0xc0);
  *param_1 = &PTR_FUN_14a36ac70;
  return param_1;
}



// FUNCTION 1473d85e2 FUN_1473d85e2 body=247 status=ok
// SIG undefined FUN_1473d85e2(void)

void FUN_1473d85e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  code **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_3;
  (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,&local_90,param_2,0);
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_68 = &PTR_FUN_14a36bc10;
  local_68[1] = param_2;
  local_68[2] = &local_80;
  local_68[3] = param_1;
  local_68[4] = &local_90;
  if (local_68 + 1 != (undefined8 *)0x0) {
    local_78[0] = FUN_1431c0e66;
  }
  local_98 = local_78;
  local_a0 = local_88;
  local_a8 = local_90;
  FUN_14471ee32(param_1,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d86da FUN_1473d86da body=262 status=ok
// SIG undefined FUN_1473d86da(void)

void FUN_1473d86da(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  uint local_b8;
  int local_b0;
  code **local_a8;
  ulonglong local_98;
  undefined8 local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_3;
  iVar1 = FUN_1473a779c(*(undefined8 *)(param_1 + 0x30),param_2[2],*param_2 == 0);
  uVar2 = -iVar1 & (*param_2 + iVar1) - 1U;
  local_98 = (ulonglong)uVar2;
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_78 = &PTR_FUN_14a36bc30;
  local_78[1] = &local_90;
  local_78[2] = param_1;
  local_78[3] = param_2;
  local_78[4] = &local_98;
  if (local_78 + 1 != (longlong *)0x0) {
    local_88[0] = FUN_1431c1032;
  }
  local_a8 = local_88;
  local_b8 = uVar2;
  local_b0 = iVar1;
  FUN_144723c48(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d87e2 FUN_1473d87e2 body=169 status=ok
// SIG undefined FUN_1473d87e2(void)

longlong * FUN_1473d87e2(longlong *param_1,longlong param_2,int param_3,uint param_4)

{
  byte bVar1;
  
  if ((ulonglong)*(byte *)(param_1 + 5) == 0) {
    bVar1 = *(byte *)(param_1 + 2) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  (*(code *)(&PTR_LAB_14a36bc50)[*(byte *)(param_1 + 5)])(param_1 + 2);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 3;
  param_3 = param_3 + *(int *)(param_2 + 0x60);
  param_1[2] = *(longlong *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x58);
  *(int *)((longlong)param_1 + 0x1c) = param_3;
  if ((*(byte *)(param_2 + 0x28) & 4) != 0) {
    if (*(uint *)(param_2 + 0x5c) <= param_4) {
      param_4 = *(uint *)(param_2 + 0x5c);
    }
  }
  *(uint *)(param_1 + 4) = param_4;
  FUN_1473a2df2(*(undefined8 *)(*param_1 + 0x6b0),param_1[1],*(undefined8 *)(param_2 + 0x50),param_3
                ,param_4,bVar1);
  return param_1;
}



// FUNCTION 1473d888c FUN_1473d888c body=215 status=ok
// SIG undefined FUN_1473d888c(void)

longlong * FUN_1473d888c(longlong *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (*(code *)(&PTR_LAB_14a36bc50)[*(byte *)(param_1 + 5)])(param_1 + 2);
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 4;
  local_70 = 0x3b9d1401;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_58 = (undefined4)*(undefined8 *)(param_2 + 0x50);
  uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  iStack_50 = param_3 + *(int *)(param_2 + 0x60);
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_48 = param_4;
  iVar1 = (*DAT_14ca792c8)(*(undefined8 *)*param_1,&local_70,0,param_1 + 2);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1);
  }
  FUN_1473a2fe4(*(undefined8 *)(*param_1 + 0x6b0),param_1[1],param_1[2],1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d8964 FUN_1473d8964 body=324 status=ok
// SIG undefined FUN_1473d8964(void)

undefined8 *
FUN_1473d8964(undefined8 *param_1,ulonglong *param_2,longlong param_3,longlong param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x20;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e49d0;
  param_1[2] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uVar2 = param_5[3];
  *(undefined4 *)(param_1 + 3) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *param_1 = &PTR_FUN_14a1e49c0;
  uVar3 = FUN_1431b9b81();
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0xff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_1473a292c(*(undefined8 *)(param_3 + 0x6b0),&local_28,uVar3);
  param_1[7] = local_28;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14a36acb8;
  param_1[5] = &PTR_FUN_14a36acc8;
  local_28 = param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431c1260(&local_28);
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 3;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x20);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a36bc78;
    puVar4[2] = param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d8aaa FUN_1473d8aaa body=562 status=ok
// SIG undefined FUN_1473d8aaa(void)

void FUN_1473d8aaa(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  undefined1 local_78;
  undefined4 local_70;
  uint local_60;
  undefined4 local_5c;
  byte local_57;
  byte local_56;
  byte local_54;
  byte local_53;
  byte local_52;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 8;
  FUN_1431b8ee4(lVar1);
  plVar6 = *(longlong **)(param_1 + -0x18);
  if (*(byte *)(param_1 + -0x10) < 2) {
    FUN_144b1c3c6(param_1 + -0x10,&local_5c,plVar6);
    if (local_4a == '\0') {
      switch(local_4c) {
      case 1:
        local_a8 = local_50;
        FUN_1431b99e0(lVar1,plVar6,local_4b,local_5c);
        break;
      case 2:
      case 4:
        FUN_1473d87e2(lVar1,plVar6,local_5c,local_50);
        break;
      case 3:
        FUN_1473d888c(lVar1,plVar6,local_5c,local_50);
      }
    }
  }
  else {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6);
    FUN_140100962(param_1 + -0x10,&local_5c,plVar6);
    bVar10 = 1 < (byte)((local_56 & 7) - 3);
    local_88 = ((local_5c & 0xffff) + (local_5c & 0xffff)) * 3;
    if (bVar10) {
      local_88 = local_5c & 0xffff;
    }
    uVar4 = ((uint)local_5c._2_2_ + (uint)local_5c._2_2_) * 3;
    if (bVar10) {
      uVar4 = (uint)local_5c._2_2_;
    }
    local_60 = (uint)local_53;
    puVar7 = (undefined4 *)((longlong)&DAT_14c873434 + (ulonglong)((uint)local_57 * 0x30));
    if ((local_52 & 1) != 0) {
      puVar7 = &DAT_14ca781f0 + local_57;
    }
    uVar2 = *puVar7;
    uVar3 = *(undefined4 *)((longlong)plVar6 + 0x104);
    lVar8 = (**(code **)(*plVar6 + 8))(plVar6);
    uVar5 = 0x7fffffff;
    if ((ulonglong)*(byte *)(lVar8 + 0x32) < 5) {
      uVar5 = *(uint *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar8 + 0x32) * 4);
    }
    uVar9 = local_56 & 7;
    switch(local_56 & 7) {
    case 0:
      uVar9 = uVar5;
      break;
    case 1:
      break;
    case 2:
      uVar9 = 5;
      break;
    case 3:
      uVar9 = 3;
      break;
    case 4:
      uVar9 = 6;
      break;
    case 5:
      uVar9 = 2;
      break;
    default:
      uVar9 = 0x7fffffff;
    }
    local_90 = local_60;
    local_98 = (uint)local_54;
    local_a8 = CONCAT31(local_a8._1_3_,local_57);
    local_70 = 0;
    local_78 = 0;
    local_a0 = uVar2;
    local_80 = uVar4;
    FUN_1431b8c8e(lVar1,plVar6[0x13],uVar9,uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473d8cde FUN_1473d8cde body=324 status=ok
// SIG undefined FUN_1473d8cde(void)

undefined8 *
FUN_1473d8cde(undefined8 *param_1,ulonglong *param_2,longlong param_3,longlong param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x1f;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e49d0;
  param_1[2] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  uVar3 = param_5[1];
  uVar1 = param_5[2];
  uVar2 = param_5[3];
  *(undefined4 *)(param_1 + 3) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *param_1 = &PTR_FUN_14a1e49e0;
  uVar3 = FUN_1431b9b81();
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0xff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_1473a292c(*(undefined8 *)(param_3 + 0x6b0),&local_28,uVar3);
  param_1[7] = local_28;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14a36acd0;
  param_1[5] = &PTR_FUN_14a36ace0;
  local_28 = param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1431c1332(&local_28);
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 3;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x20);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a36bc80;
    puVar4[2] = param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d8e24 FUN_1473d8e24 body=506 status=ok
// SIG undefined FUN_1473d8e24(void)

void FUN_1473d8e24(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_98;
  undefined4 local_90;
  uint local_88;
  uint local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_60;
  byte local_5b;
  byte local_5a;
  byte local_58;
  undefined4 local_54;
  char local_50;
  undefined1 local_4f;
  char local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 8;
  FUN_1431b8ee4(lVar1);
  plVar6 = *(longlong **)(param_1 + -0x18);
  if (*(byte *)(param_1 + -0x10) < 2) {
    FUN_144b1c476(param_1 + -0x10,&local_60,plVar6);
    if (local_4e == '\0') {
      if (local_50 == '\x01') {
        local_a8 = local_54;
        FUN_1431b99e0(lVar1,plVar6,local_4f,local_60);
      }
      else if ((local_50 == '\x04') || (local_50 == '\x02')) {
        FUN_1473d87e2(lVar1,plVar6,local_60,local_54);
      }
    }
  }
  else {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6);
    FUN_14178da4c(param_1 + -0x10,&local_60,plVar6);
    bVar9 = 1 < (byte)((local_5a & 7) - 3);
    local_88 = ((local_60 & 0xffff) + (local_60 & 0xffff)) * 3;
    if (bVar9) {
      local_88 = local_60 & 0xffff;
    }
    uVar4 = ((uint)local_60._2_2_ + (uint)local_60._2_2_) * 3;
    if (bVar9) {
      uVar4 = (uint)local_60._2_2_;
    }
    uVar2 = *(undefined4 *)((longlong)&DAT_14c873434 + (ulonglong)((uint)local_5b * 0x30));
    uVar3 = *(undefined4 *)((longlong)plVar6 + 0x104);
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    uVar5 = 0x7fffffff;
    if ((ulonglong)*(byte *)(lVar7 + 0x32) < 5) {
      uVar5 = *(uint *)(&DAT_14a36c034 + (ulonglong)*(byte *)(lVar7 + 0x32) * 4);
    }
    uVar8 = local_5a & 7;
    switch(local_5a & 7) {
    case 0:
      uVar8 = uVar5;
      break;
    case 1:
      break;
    case 2:
    case 3:
    case 4:
      uVar8 = 5;
      break;
    case 5:
      uVar8 = 2;
      break;
    default:
      uVar8 = 0x7fffffff;
    }
    local_98 = (uint)local_58;
    local_a8 = CONCAT31(local_a8._1_3_,local_5b);
    local_70 = 0;
    local_78 = 1;
    local_90 = 1;
    local_a0 = uVar2;
    local_80 = uVar4;
    FUN_1431b8c8e(lVar1,plVar6[0x13],uVar8,uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473d9020 FUN_1473d9020 body=893 status=ok
// SIG undefined FUN_1473d9020(void)

void FUN_1473d9020(longlong param_1,ulonglong *param_2,undefined4 *param_3,char param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  char local_50;
  char cStack_4f;
  undefined6 uStack_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (*(byte *)(param_1 + 0x18) < 2) {
    FUN_144b1c476(param_1 + 0x18,&local_60,plVar3);
    if (local_50 == '\x01') {
      local_90 = param_3;
      if (*(uint *)(*(longlong *)(param_2[7] + 0x120) + 0xcf4) < iStack_58 + 0x3fU >> 6) {
        local_88 = 0;
        if (param_4 == '\0') {
          local_88 = 2;
          if ((byte)(cStack_4f - 0x1dU) < 7) {
            local_88 = *(undefined4 *)(&DAT_14a36bfc8 + (ulonglong)(byte)(cStack_4f - 0x1dU) * 4);
          }
        }
        local_98 = 1;
        FUN_14736300b(param_2,param_1,iStack_58,1);
      }
      else {
        local_88 = 0;
        if (param_4 == '\0') {
          local_88 = 2;
          if ((byte)(cStack_4f - 0x1dU) < 7) {
            local_88 = *(undefined4 *)(&DAT_14a36bfc8 + (ulonglong)(byte)(cStack_4f - 0x1dU) * 4);
          }
        }
        local_98 = 1;
        FUN_14482dfa6(param_2,param_1,iStack_58,1);
      }
    }
    else if ((local_50 == '\x04') || (local_50 == '\x02')) {
      local_68 = CONCAT62(uStack_4e,CONCAT11(cStack_4f,local_50));
      local_78 = local_60;
      uStack_74 = uStack_5c;
      iStack_70 = iStack_58;
      uStack_6c = uStack_54;
      uVar1 = *param_3;
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar2 + 8;
      if ((undefined8 *)param_2[1] < puVar5) {
        FUN_140023dd8(param_2,0x48);
        puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar2 + 8;
      }
      *param_2 = (ulonglong)puVar5;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar2;
      param_2[6] = (ulonglong)(puVar2 + 1);
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_14a36bc88;
      puVar2[2] = param_1;
      puVar2[3] = plVar3;
      *(undefined4 *)(puVar2 + 4) = local_78;
      *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_74;
      *(int *)(puVar2 + 5) = iStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_6c;
      puVar2[6] = local_68;
      *(undefined4 *)(puVar2 + 7) = uVar1;
    }
    goto switchD_1473d919e_default;
  }
  local_80 = param_3;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3);
  FUN_14178da4c(param_1 + 0x18,&local_60,plVar3);
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  uVar6 = (uint)(*(ushort *)(lVar4 + 0x2c) >> ((byte)iStack_58 & 0x1f));
  uVar6 = uVar6 + (uVar6 == 0);
  iVar7 = *(int *)(lVar4 + 0x28) >> ((byte)iStack_58 & 0x1f);
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  iVar8 = *(int *)(lVar4 + 0x24) >> ((byte)iStack_58 & 0x1f);
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  switch(*(undefined1 *)(lVar4 + 0x32)) {
  case 0:
    local_88 = 0;
    if (param_4 == '\0') {
      local_88 = 2;
      if ((byte)(uStack_5c._1_1_ - 0x1dU) < 7) {
        local_88 = *(undefined4 *)(&DAT_14a36bfc8 + (ulonglong)(byte)(uStack_5c._1_1_ - 0x1dU) * 4);
      }
    }
    local_90 = local_80;
    local_98 = uVar6;
    FUN_140e5d9be(param_2,param_1,iVar8,iVar7);
    break;
  case 1:
    local_88 = 0;
    if (param_4 == '\0') {
      local_88 = 2;
      if ((byte)(uStack_5c._1_1_ - 0x1dU) < 7) {
        local_88 = *(undefined4 *)(&DAT_14a36bfc8 + (ulonglong)(byte)(uStack_5c._1_1_ - 0x1dU) * 4);
      }
    }
    local_98 = (uint)local_60._2_2_;
    goto LAB_1473d91cf;
  case 2:
    local_88 = 0;
    if (param_4 == '\0') {
      local_88 = 2;
      if ((byte)(uStack_5c._1_1_ - 0x1dU) < 7) {
        local_88 = *(undefined4 *)(&DAT_14a36bfc8 + (ulonglong)(byte)(uStack_5c._1_1_ - 0x1dU) * 4);
      }
    }
    local_90 = local_80;
    local_98 = uVar6;
    FUN_14108ec43(param_2,param_1,iVar8,iVar7);
    break;
  case 3:
  case 4:
    local_88 = 0;
    if (param_4 == '\0') {
      local_88 = 2;
      if ((byte)(uStack_5c._1_1_ - 0x1dU) < 7) {
        local_88 = *(undefined4 *)(&DAT_14a36bfc8 + (ulonglong)(byte)(uStack_5c._1_1_ - 0x1dU) * 4);
      }
    }
    local_98 = (uint)local_60._2_2_ * 6;
LAB_1473d91cf:
    local_90 = local_80;
    FUN_1413e2dcd(param_2,param_1,iVar8,iVar7);
  }
switchD_1473d919e_default:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473d939e FUN_1473d939e body=111 status=ok
// SIG undefined FUN_1473d939e(void)

void FUN_1473d939e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_348 [32];
  undefined1 local_328 [776];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_140048e76(local_328,param_1);
  FUN_1473d9020(param_2,local_328,param_3,1);
  FUN_140048db6(local_328);
  if ((local_20 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d940e FUN_1473d940e body=111 status=ok
// SIG undefined FUN_1473d940e(void)

void FUN_1473d940e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_348 [32];
  undefined1 local_328 [776];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_140048e76(local_328,param_1);
  FUN_1473d9020(param_2,local_328,param_3,0);
  FUN_140048db6(local_328);
  if ((local_20 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d947e FUN_1473d947e body=103 status=ok
// SIG undefined FUN_1473d947e(void)

longlong *
FUN_1473d947e(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x70,0x10);
  FUN_1473d8964(lVar1,param_3,*(undefined8 *)(param_1 + 0x48),param_4,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473d94e6 FUN_1473d94e6 body=103 status=ok
// SIG undefined FUN_1473d94e6(void)

longlong *
FUN_1473d94e6(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x70,0x10);
  FUN_1473d8cde(lVar1,param_3,*(undefined8 *)(param_1 + 0x48),param_4,param_5);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473d954e FUN_1473d954e body=54 status=ok
// SIG undefined FUN_1473d954e(void)

void FUN_1473d954e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x38) == 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(lVar2 + 0x50);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar5 = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) & 0x7f;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(lVar1 + 0x1c);
  }
  return;
}



// FUNCTION 1473d9584 FUN_1473d9584 body=1082 status=ok
// SIG undefined FUN_1473d9584(void)

undefined8 *
FUN_1473d9584(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x12;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e4960;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x84);
  *param_1 = &PTR_FUN_14a36ae58;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0xb) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar4 = *(uint *)(param_3 + 0x28);
  if ((longlong)(int)uVar4 != 0) {
    plVar15 = param_1 + 2;
    FUN_14736323c(plVar15);
    iVar5 = *(int *)(param_1 + 3);
    *(uint *)(param_1 + 3) = iVar5 + uVar4;
    if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar5) < uVar4) {
      FUN_144abccec(plVar15);
    }
    uVar14 = 0;
    memset((void *)((longlong)iVar5 * 8 + *plVar15),0,(longlong)(int)uVar4 * 8);
    if (param_4 != 0) {
      do {
        lVar10 = (longlong)(int)uVar14;
        bVar7 = *(byte *)(*(longlong *)(param_3 + 0x20) + 2 + lVar10 * 4);
        if (((byte)(bVar7 - 10) < 0xe) && ((0x3263U >> (bVar7 - 10 & 0x1f) & 1) != 0)) {
LAB_1473d9897:
          lVar13 = 0;
        }
        else {
          plVar12 = (longlong *)
                    ((ulonglong)*(ushort *)(*(longlong *)(param_3 + 0x20) + lVar10 * 4) + param_4);
          if ((bVar7 < 0x13) && ((0x67200U >> (bVar7 & 0x1f) & 1) != 0)) {
            if (*plVar12 == 0) goto LAB_1473d9897;
            plVar12 = (longlong *)(*plVar12 + 0x10);
          }
          lVar13 = *plVar12;
        }
        lVar6 = *(longlong *)(*plVar15 + lVar10 * 8);
        if (lVar6 != lVar13) {
          *(longlong *)(*plVar15 + lVar10 * 8) = lVar13;
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
          }
          if (lVar6 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar6 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar4 != uVar14);
    }
  }
  if ((*(byte *)(param_3 + 0x8c) & 8) == 0) {
    if (*(int *)(param_3 + 0x84) != 0) {
      bVar7 = FUN_144a5d717();
      iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar5 != 0x20 & ~bVar7) == 0 && param_5 < 2) && (cVar8 = FUN_14682bad5(), cVar8 == '\0')
         ) {
        if (param_4 != 0) {
          if ((iVar5 == 0x20) || ((bVar7 & (DAT_14c842750 ^ 1)) != 0)) {
            FUN_1431b9c17(*(undefined8 *)(param_1[6] + 0x20c8),param_1,param_4,1);
          }
          else {
            iVar5 = *(int *)(param_3 + 0x84);
            uVar16 = (longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0;
            puVar17 = (undefined8 *)(uVar16 + (longlong)iVar5);
            if (DAT_14ca85108 < puVar17) {
              FUN_140023dd8(&DAT_14ca85100,iVar5 + 0x10);
              uVar16 = (longlong)DAT_14ca85100 + 0xfU & 0xfffffffffffffff0;
              puVar17 = (undefined8 *)((longlong)iVar5 + uVar16);
            }
            DAT_14ca85100 = puVar17;
            FUN_144b1b835(uVar16,param_4,param_3,
                          *(undefined1 *)(*(longlong *)(param_1[6] + 0x6b0) + 8));
            if (DAT_14ca85164 == '\x01') {
              FUN_1431b9c17(DAT_14ca85138,param_1,uVar16,0);
            }
            else {
              puVar11 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
              puVar17 = puVar11 + 5;
              if (DAT_14ca85108 < puVar17) {
                FUN_140023dd8(&DAT_14ca85100,0x30);
                puVar11 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
                puVar17 = puVar11 + 5;
              }
              DAT_14ca85160 = DAT_14ca85160 + 1;
              DAT_14ca85100 = puVar17;
              *DAT_14ca85130 = puVar11;
              DAT_14ca85130 = puVar11 + 1;
              puVar11[1] = 0;
              *puVar11 = &PTR_LAB_14a36bc90;
              puVar11[2] = param_1;
              *(int *)(puVar11 + 3) = iVar5;
              puVar11[4] = uVar16;
            }
            FUN_14494c7ac(&DAT_14ca85100,&local_50,1);
            if (local_50 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(local_50 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)*local_50)(local_50,1);
              }
            }
          }
        }
      }
      else {
        puVar17 = param_1 + 7;
        FUN_1431a0196(param_1[6] + 0x3d8,puVar17,*(undefined4 *)(param_3 + 0x84));
        if (param_4 != 0) {
          uVar9 = FUN_1473a804a(puVar17,param_1[6]);
          FUN_144b1b835(uVar9,param_4,param_3,*(undefined1 *)(*(longlong *)(param_1[6] + 0x6b0) + 8)
                       );
          FUN_1473a80a4(puVar17,param_1[6]);
        }
      }
    }
    goto LAB_1473d9710;
  }
  bVar7 = (byte)(*(ushort **)(param_3 + 0x20))[1];
  if ((bVar7 != 0x11) && (bVar7 != 6)) goto LAB_1473d9710;
  plVar15 = (longlong *)(param_4 + (ulonglong)**(ushort **)(param_3 + 0x20));
  if ((bVar7 < 0x12) && ((0x27200U >> (bVar7 & 0x1f) & 1) != 0)) {
    if (*plVar15 != 0) {
      plVar15 = (longlong *)(*plVar15 + 0x10);
      goto LAB_1473d9709;
    }
    lVar10 = 0;
  }
  else {
LAB_1473d9709:
    lVar10 = *plVar15;
  }
  param_1[0xe] = lVar10;
LAB_1473d9710:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473d99c0 FUN_1473d99c0 body=125 status=ok
// SIG undefined FUN_1473d99c0(void)

void FUN_1473d99c0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_14a36ae58;
  if (((*(int *)((longlong)param_1 + 0x5c) != -1) && (*(char *)(param_1 + 0xc) != -1)) &&
     (uVar1 = *(ulonglong *)((longlong)param_1 + 0x5c),
     (char)(uVar1 >> 0x20) != -1 && (int)uVar1 != -1)) {
    FUN_1473a8b5a(param_1[6] + 0x590,0x11,uVar1 & 0xffffffffff);
  }
  FUN_1431a01ea(param_1[6] + 0x3d8,param_1 + 7);
  FUN_1446fc30e(param_1);
  return;
}



// FUNCTION 1473d9a3e FUN_1473d9a3e body=104 status=ok
// SIG undefined FUN_1473d9a3e(void)

void FUN_1473d9a3e(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (0 < (int)param_3) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + uVar5 * 8);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
      if (lVar4 != lVar3) {
        *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
  }
  return;
}



// FUNCTION 1473d9aa6 FUN_1473d9aa6 body=298 status=ok
// SIG undefined FUN_1473d9aa6(void)

undefined8 * FUN_1473d9aa6(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0x3b9e8321;
  local_34 = 0;
  local_2c = 0;
  local_28 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = (*DAT_14ca79240)(**(undefined8 **)(param_1 + 0x30));
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x48) + lVar2;
  if ((*(int *)(param_1 + 0x5c) != -1) && (*(char *)(param_1 + 0x60) != -1)) {
    if ((*(longlong *)(param_1 + 0x68) != 0) && (lVar2 == *(longlong *)(param_1 + 0x68)))
    goto LAB_1473d9b83;
    uVar4 = *(ulonglong *)(param_1 + 0x5c);
    if ((char)(uVar4 >> 0x20) != -1 && (int)uVar4 != -1) {
      FUN_1473a8b5a(*(longlong *)(param_1 + 0x30) + 0x590,0x11,uVar4 & 0xffffffffff);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(*(longlong *)(lVar3 + 0x6b0) + 8) == '\x01') {
    uVar1 = FUN_143192236();
    uVar4 = (ulonglong)uVar1 | 0x200000000;
    lVar3 = *(longlong *)(param_1 + 0x30);
  }
  else {
    uVar4 = 0xffffffffff;
  }
  *(ulonglong *)(param_1 + 0x5c) = uVar4;
  local_48 = 1;
  FUN_1473a2eb0(*(undefined8 *)(lVar3 + 0x6b0),uVar4,lVar2,*(undefined4 *)(param_1 + 0x28));
  *(longlong *)(param_1 + 0x68) = lVar2;
LAB_1473d9b83:
  *param_2 = *(undefined8 *)(param_1 + 0x5c);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d9bd2 FUN_1473d9bd2 body=107 status=ok
// SIG undefined FUN_1473d9bd2(void)

longlong FUN_1473d9bd2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x3b9e8321;
  local_24 = 0;
  local_1c = 0;
  local_18 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = (*DAT_14ca79240)(**(undefined8 **)(param_1 + 0x30));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (ulonglong)*(uint *)(param_1 + 0x48) + lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d9c44 FUN_1473d9c44 body=41 status=ok
// SIG undefined FUN_1473d9c44(void)

void FUN_1473d9c44(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    FUN_1400020a8();
    puVar1 = *(undefined8 **)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 1473d9c6e FUN_1473d9c6e body=191 status=ok
// SIG undefined FUN_1473d9c6e(void)

void FUN_1473d9c6e(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (DAT_14ca813bd == '\x01') {
    bVar3 = (DAT_14ca813bc & 1) == 0;
  }
  else {
    FUN_1431ba288(param_1);
    bVar3 = DAT_14ca813c0 == 0;
    DAT_14ca813bc = !bVar3;
    DAT_14ca813bd = '\x01';
  }
  *(undefined1 *)(param_1 + 1) = 0;
  if (!bVar3) {
    lVar1 = FUN_14001cc68(0x68,0x10);
    FUN_1473b84e8(lVar1,*param_1,*(undefined8 *)(param_1[8] + 0x150),param_2);
    param_1[9] = lVar1;
    uVar2 = FUN_143192298(*param_1 + 0x5d0,*(int *)(lVar1 + 0x20) << 4,2,4);
    *(undefined8 *)(param_1[9] + 0x58) = uVar2;
    uVar2 = FUN_1473a804a(*(longlong *)(param_1[9] + 0x58) + 0x18,
                          *(undefined8 *)(*(longlong *)(param_1[9] + 0x58) + 0x10));
    *(undefined8 *)(param_1[9] + 0x60) = uVar2;
  }
  return;
}



// FUNCTION 1473d9d2e FUN_1473d9d2e body=73 status=ok
// SIG undefined FUN_1473d9d2e(void)

void FUN_1473d9d2e(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (DAT_14ca813bc == '\x01') {
    FUN_1473a2c42(*param_1 + 0x5d0,0,param_1[9] + 0x58);
    puVar1 = (undefined8 *)param_1[9];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[9] = 0;
  }
  return;
}



// FUNCTION 1473d9d78 FUN_1473d9d78 body=339 status=ok
// SIG undefined FUN_1473d9d78(void)

void FUN_1473d9d78(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  if ((DAT_14ca813bc == '\x01') && ((char)param_1[1] == '\0')) {
    if (param_2 == 0) {
      lVar3 = *(longlong *)(param_1[8] + 0x150);
      if (*(longlong *)(lVar3 + 0x80) != 0) {
        FUN_14739859c(lVar3,0,0);
      }
      param_2 = *(longlong *)(lVar3 + 0x78);
    }
    if ((*(uint *)(param_1 + 4) < *(uint *)(param_1[9] + 0x40)) ||
       (FUN_1473d9ecc(param_1,1), *(uint *)(param_1 + 4) < *(uint *)(param_1[9] + 0x40))) {
      FUN_1473d9fb0(param_1);
      lVar3 = param_1[9];
      *(uint *)(lVar3 + 0x38) = (*(int *)(lVar3 + 0x38) + 1U) % *(uint *)(lVar3 + 0x40);
      iVar1 = *(int *)(param_1[9] + 0x38) * 2;
      bVar5 = ((ulonglong)((undefined8 *)*param_1)[0x41f] >> 0x25 & 1) != 0;
      puVar4 = (undefined8 *)(param_2 + 0x88);
      if (bVar5) {
        puVar4 = (undefined8 *)*param_1;
      }
      puVar2 = &DAT_14ca79250;
      if (!bVar5) {
        puVar2 = &DAT_14ca79288;
      }
      (*(code *)*puVar2)(*puVar4,*(undefined8 *)(param_1[9] + 0x10),iVar1,2);
      (*DAT_14ca792b0)(*(undefined8 *)(param_2 + 0x88),0x2000,*(undefined8 *)(param_1[9] + 0x10),
                       iVar1);
      lVar3 = (longlong)iVar1 * 0x20;
      *(longlong *)(*(longlong *)(param_1[9] + 0x48) + lVar3) = param_2;
      *(undefined8 *)(*(longlong *)(param_1[9] + 0x48) + 8 + lVar3) =
           *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)(*(longlong *)(param_1[9] + 0x48) + 0x10 + lVar3) =
           *(undefined8 *)(param_1[8] + 0x490);
      *(undefined4 *)(*(longlong *)(param_1[9] + 0x48) + 0x18 + lVar3) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



// FUNCTION 1473d9ecc FUN_1473d9ecc body=227 status=ok
// SIG undefined FUN_1473d9ecc(void)

void FUN_1473d9ecc(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined1 *local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_29;
  local_50 = &local_38;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x58);
  local_40 = param_1;
  local_38 = param_1;
  local_29 = param_2;
  FUN_1473a8158(lVar2 + 0x18,*(undefined8 *)(lVar2 + 0x10));
  if (**(longlong **)(param_1 + 0x38) != 0) {
    do {
      iVar1 = *(int *)(**(longlong **)(param_1 + 0x38) + 8);
      cVar4 = FUN_1431ba33c(&local_50,iVar1 * 2);
      cVar5 = FUN_1431ba33c(&local_50,iVar1 * 2 + 1);
      if ((cVar4 == '\0') && (cVar5 == '\0')) break;
      lVar2 = **(longlong **)(param_1 + 0x38);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        *(longlong *)(param_1 + 0x38) = lVar2;
        *(undefined4 *)(lVar2 + 8) = 0;
        if (lVar3 != 0) {
          FUN_1400020a8();
        }
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    } while (**(longlong **)(param_1 + 0x38) != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473d9fb0 FUN_1473d9fb0 body=229 status=ok
// SIG undefined FUN_1473d9fb0(void)

void FUN_1473d9fb0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (0 < *(int *)(lVar4 + 0x50)) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + 0x48);
      lVar3 = *(longlong *)(lVar2 + lVar7 * 2);
      if ((lVar3 != 0) &&
         (lVar4 = *(longlong *)(param_1 + 0x48),
         *(ulonglong *)(lVar2 + 8 + lVar7 * 2) < *(ulonglong *)(lVar3 + 0xe0))) {
        FUN_1473a8158(*(longlong *)(lVar4 + 0x58) + 0x18,
                      *(undefined8 *)(*(longlong *)(lVar4 + 0x58) + 0x10));
        lVar4 = *(longlong *)(param_1 + 0x48);
        if ((*(longlong *)(*(longlong *)(lVar4 + 0x60) + 8 + lVar7) == 0) &&
           (*(int *)(lVar2 + 0x18 + lVar7 * 2) == 0)) {
          *(longlong *)(lVar2 + lVar7 * 2) = param_2;
          *(undefined8 *)(lVar2 + 8 + lVar7 * 2) = *(undefined8 *)(param_2 + 0xe0);
          *(undefined8 *)(lVar2 + 0x10 + lVar7 * 2) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x490);
          piVar1 = (int *)(lVar2 + 0x18 + lVar7 * 2);
          *piVar1 = *piVar1 + 1;
          uVar5 = FUN_1473a2c3c(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x58));
          FUN_147398fc4(param_2,lVar6,1,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),uVar5,
                        0);
          lVar4 = *(longlong *)(param_1 + 0x48);
        }
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < *(int *)(lVar4 + 0x50));
  }
  return;
}



// FUNCTION 1473da096 FUN_1473da096 body=394 status=ok
// SIG undefined FUN_1473da096(void)

void FUN_1473da096(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 8) == '\x01')) {
    if (param_2 == 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x150);
      if (*(longlong *)(lVar7 + 0x80) != 0) {
        FUN_14739859c(lVar7,0,0);
      }
      param_2 = *(longlong *)(lVar7 + 0x78);
    }
    lVar7 = *(longlong *)(param_1 + 0x48);
    iVar2 = *(int *)(lVar7 + 0x38);
    iVar1 = iVar2 * 2 + 1;
    puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar4 = 0;
    *(int *)(puVar4 + 1) = iVar2;
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
      *(undefined8 **)(param_1 + 0x30) = puVar4;
      *puVar3 = puVar4;
      lVar7 = *(longlong *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    (*DAT_14ca792b0)(*(undefined8 *)(param_2 + 0x88),0x2000,*(undefined8 *)(lVar7 + 0x10),iVar1);
    uVar5 = FUN_1473a2c3c(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x58));
    FUN_147398fc4(param_2,iVar2 * 2,2,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),uVar5,0)
    ;
    lVar7 = (longlong)(iVar2 * 2) * 0x20;
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48) + lVar7) = param_2;
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48) + 8 + lVar7) =
         *(undefined8 *)(param_2 + 0xe0);
    lVar7 = (longlong)iVar1 * 0x20;
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48) + lVar7) = param_2;
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48) + 8 + lVar7) =
         *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48) + 0x10 + lVar7) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x490);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48) + 0x18 + lVar7) = 0;
    lVar7 = *(longlong *)(param_1 + 0x48);
    uVar6 = *(int *)(lVar7 + 0x3c) + 1;
    if (*(uint *)(lVar7 + 0x40) <= uVar6) {
      uVar6 = *(uint *)(lVar7 + 0x40);
    }
    *(uint *)(lVar7 + 0x3c) = uVar6;
    *(undefined2 *)(param_1 + 8) = 0x100;
  }
  return;
}



// FUNCTION 1473da220 FUN_1473da220 body=72 status=ok
// SIG undefined FUN_1473da220(void)

void FUN_1473da220(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_147365bf9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_14736903a(param_1 + 8,0);
  }
  FUN_1473d9d78(param_1 + 0x20,0);
  return;
}



// FUNCTION 1473da274 FUN_1473da274 body=93 status=ok
// SIG undefined FUN_1473da274(void)

void FUN_1473da274(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_1431ba44c(param_1 + 0x20,1);
  }
  return;
}



// FUNCTION 1473da2d2 FUN_1473da2d2 body=93 status=ok
// SIG undefined FUN_1473da2d2(void)

void FUN_1473da2d2(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_1431ba44c(param_1 + 0x70,1);
  }
  return;
}



// FUNCTION 1473da330 FUN_1473da330 body=159 status=ok
// SIG undefined FUN_1473da330(void)

undefined8 * FUN_1473da330(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  *param_1 = &PTR_FUN_14a36ae80;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = param_3;
  param_1[0xb] = param_2;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_1431ba77a(param_1);
  return param_1;
}



// FUNCTION 1473da3d0 FUN_1473da3d0 body=129 status=ok
// SIG undefined FUN_1473da3d0(void)

void FUN_1473da3d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a36ae80;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145e088b0(param_1 + 0xc);
  FUN_1473da452(param_1 + 7);
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473da452 FUN_1473da452 body=96 status=ok
// SIG undefined FUN_1473da452(void)

void FUN_1473da452(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1473da4b2 FUN_1473da4b2 body=256 status=ok
// SIG undefined FUN_1473da4b2(void)

void FUN_1473da4b2(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar3 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_3[8];
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar4 * 0x10) == param_1) goto LAB_1473da590;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_3 + 8);
        } while (iVar4 != -1);
      }
    }
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1473e1f00(param_2,iVar4);
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + (longlong)iVar4 * 0x10) = param_1;
    *(ulonglong *)(lVar1 + 8 + (longlong)iVar4 * 0x10) = param_1 + 0xa0;
    local_38 = param_1;
    FUN_1473e1f86(param_3,local_3c);
  }
LAB_1473da590:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473da5b3 FUN_1473da5b3 body=256 status=ok
// SIG undefined FUN_1473da5b3(void)

void FUN_1473da5b3(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar3 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_3[8];
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar4 * 0x10) == param_1) goto LAB_1473da691;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_3 + 8);
        } while (iVar4 != -1);
      }
    }
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1473e1f00(param_2,iVar4);
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + (longlong)iVar4 * 0x10) = param_1;
    *(ulonglong *)(lVar1 + 8 + (longlong)iVar4 * 0x10) = param_1 + 0xa0;
    local_38 = param_1;
    FUN_1473e1f86(param_3,local_3c);
  }
LAB_1473da691:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473da6b4 FUN_1473da6b4 body=256 status=ok
// SIG undefined FUN_1473da6b4(void)

void FUN_1473da6b4(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar3 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_3[8];
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar4 * 0x10) == param_1) goto LAB_1473da792;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_3 + 8);
        } while (iVar4 != -1);
      }
    }
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1473e1f00(param_2,iVar4);
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + (longlong)iVar4 * 0x10) = param_1;
    *(ulonglong *)(lVar1 + 8 + (longlong)iVar4 * 0x10) = param_1 + 0xa0;
    local_38 = param_1;
    FUN_1473e1f86(param_3,local_3c);
  }
LAB_1473da792:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473da7b5 FUN_1473da7b5 body=256 status=ok
// SIG undefined FUN_1473da7b5(void)

void FUN_1473da7b5(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar3 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_3[8];
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar4 * 0x10) == param_1) goto LAB_1473da893;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_3 + 8);
        } while (iVar4 != -1);
      }
    }
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1473e1f00(param_2,iVar4);
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + (longlong)iVar4 * 0x10) = param_1;
    *(ulonglong *)(lVar1 + 8 + (longlong)iVar4 * 0x10) = param_1 + 0xa8;
    local_38 = param_1;
    FUN_1473e1f86(param_3,local_3c);
  }
LAB_1473da893:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473da8b6 FUN_1473da8b6 body=256 status=ok
// SIG undefined FUN_1473da8b6(void)

void FUN_1473da8b6(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar3 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_3[8];
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar4 * 0x10) == param_1) goto LAB_1473da994;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_3 + 8);
        } while (iVar4 != -1);
      }
    }
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1473e1f00(param_2,iVar4);
    }
    lVar1 = *param_2;
    *(ulonglong *)(lVar1 + (longlong)iVar4 * 0x10) = param_1;
    *(ulonglong *)(lVar1 + 8 + (longlong)iVar4 * 0x10) = param_1 + 0xb0;
    local_38 = param_1;
    FUN_1473e1f86(param_3,local_3c);
  }
LAB_1473da994:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473da9b8 FUN_1473da9b8 body=61 status=ok
// SIG undefined FUN_1473da9b8(void)

longlong FUN_1473da9b8(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_1473a8158(*(longlong *)(param_1 + 0x18) + 0x18,
                *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  lVar1 = FUN_1473a804a(*(longlong *)(param_1 + 0x18) + 0x18,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  return lVar1 + (ulonglong)param_2;
}



// FUNCTION 1473da9fc FUN_1473da9fc body=82 status=ok
// SIG undefined FUN_1473da9fc(void)

undefined8 * FUN_1473da9fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0x23;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14a36aea0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473daa4e FUN_1473daa4e body=135 status=ok
// SIG undefined FUN_1473daa4e(void)

longlong FUN_1473daa4e(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_3 + 0x18))(param_3);
    if (cVar1 == '\0') {
      FUN_1473a4ba6(*(undefined8 *)(param_1 + 0x48));
      (**(code **)(*param_3 + 0x20))(param_3,&DAT_14ca85100,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
    }
  }
  *(undefined1 *)(param_2 + 0x10) = 1;
  FUN_1473a8158(*(longlong *)(param_2 + 0x18) + 0x18,
                *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10));
  lVar2 = FUN_1473a804a(*(longlong *)(param_2 + 0x18) + 0x18,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10));
  return lVar2 + (ulonglong)param_4;
}



// FUNCTION 1473dab0a FUN_1473dab0a body=89 status=ok
// SIG undefined FUN_1473dab0a(void)

void FUN_1473dab0a(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0xe0))) {
    return;
  }
  lVar1 = (**(code **)(*DAT_14ca83900 + 0x30))();
  FUN_1473998ee(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x48) + 0x20c8) + 0x150),
                *(undefined8 *)(param_1 + 0x20),0x41200000);
  return;
}



// FUNCTION 1473dab64 FUN_1473dab64 body=114 status=ok
// SIG undefined FUN_1473dab64(void)

undefined8 * FUN_1473dab64(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *param_3;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0x1b;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_LAB_14a1e4900;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
  *puVar2 = &PTR_FUN_14a36ba60;
  puVar2[4] = 0;
  puVar2[5] = 0xffffffffffffffff;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473dabd6 FUN_1473dabd6 body=123 status=ok
// SIG undefined FUN_1473dabd6(void)

void FUN_1473dabd6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473e2472(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x18 + *param_1),0,(longlong)(param_2 - iVar1) * 0x18);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1473e2506(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473dac52 FUN_1473dac52 body=121 status=ok
// SIG undefined FUN_1473dac52(void)

void FUN_1473dac52(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473e25b4(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x110 + *param_1),0,(longlong)(param_2 - iVar1) * 0x110);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1473e2648(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473daccc FUN_1473daccc body=146 status=ok
// SIG undefined FUN_1473daccc(void)

undefined8 * FUN_1473daccc(undefined8 *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 5;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a36b430;
  iVar1 = *(int *)((longlong)param_2 + 0x88);
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x11;
  }
  else {
    FUN_145f89ee8(param_1 + 2,iVar1,0);
    memcpy(param_1 + 2,param_2,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = param_4;
  return param_1;
}



// FUNCTION 1473dad5e thunk_FUN_1473e26f4 body=5 status=ok
// SIG undefined thunk_FUN_1473e26f4(void)

void thunk_FUN_1473e26f4(void)

{
  if (1 < DAT_14ca78c58) {
    FUN_146196dfc();
    DAT_14ca78c58 = 1;
    FUN_1473e289c();
    return;
  }
  FUN_1473e2728();
  FUN_146196dfc();
  return;
}



// FUNCTION 1473dad64 FUN_1473dad64 body=463 status=ok
// SIG undefined FUN_1473dad64(void)

longlong * FUN_1473dad64(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined1 *local_d8;
  longlong *local_d0;
  int local_c4;
  undefined1 local_c0 [144];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1473daf34(local_c0,param_3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca78c88) && (FUN_144b3d300(&DAT_14ca78c88), DAT_14ca78c88 == -1)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78c60);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca78c60,4000);
    atexit((_func_5014 *)&LAB_1431bb01d);
    _Init_thread_footer(&DAT_14ca78c88);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78c60);
  iVar3 = FUN_1473e2a7a(local_30,local_c0);
  lVar4 = 0;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0xa8 + DAT_14ca78c10;
  }
  if (lVar4 == 0) {
    lVar4 = FUN_14001cc68(0xa8,0x10);
    FUN_1473daccc(lVar4,param_3,local_30,local_2c);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    local_d0 = &local_e0;
    local_e0 = lVar4;
    local_d8 = local_c0;
    FUN_1473e2b22(&local_c4);
    lVar4 = DAT_14ca78c10;
    if (local_e0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_e0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + (longlong)local_c4 * 0xa8;
  }
  lVar4 = *(longlong *)(lVar4 + 0x98);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78c60);
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473daf34 FUN_1473daf34 body=246 status=ok
// SIG undefined FUN_1473daf34(void)

void * FUN_1473daf34(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  uint6 local_30;
  undefined2 uStack_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = *(int *)((longlong)param_2 + 0x88);
  *(int *)((longlong)param_1 + 0x88) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x11;
    iVar4 = 0;
  }
  else {
    FUN_145f89ee8(param_1,iVar4,0);
    memcpy(param_1,param_2,(longlong)iVar4 << 3);
    iVar4 = *(int *)((longlong)param_1 + 0x88) << 3;
  }
  uVar3 = 0;
  uVar2 = FUN_1448eb174(param_1,iVar4,0);
  *(undefined4 *)((longlong)param_1 + 0x90) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  if (0 < *(int *)((longlong)param_1 + 0x88)) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar5 * 8);
      uStack_2a = (undefined2)((ulonglong)uVar1 >> 0x30);
      local_30 = (uint6)(uint)uVar1;
      uVar3 = (*(code *)PTR_FUN_14c75b148)(&local_30,8,uVar3);
      *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((longlong)param_1 + 0x88));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473db02c FUN_1473db02c body=96 status=ok
// SIG undefined FUN_1473db02c(void)

void FUN_1473db02c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0x40);
  return;
}



// FUNCTION 1473db08c FUN_1473db08c body=147 status=ok
// SIG undefined FUN_1473db08c(void)

undefined8 * FUN_1473db08c(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  memset(param_1 + 0x1c,0,0x1e0);
  return param_1;
}



// FUNCTION 1473db120 FUN_1473db120 body=803 status=ok
// SIG undefined FUN_1473db120(void)

void FUN_1473db120(undefined4 *param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  undefined4 *local_70;
  uint local_64;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar13 = (byte *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x98);
  if ((longlong)iVar3 != 0) {
    lVar6 = 0;
    do {
      if ((param_3 >> (*(byte *)(param_2 + 0x13 + lVar6) & 0x1f) & 1) != 0) {
        bVar2 = pbVar13[lVar6];
        uVar10 = param_1[0xe];
        if ((uVar10 >> (bVar2 & 0x1f) & 1) == 0) {
          uVar5 = (ulonglong)(uint)bVar2;
          param_1[uVar5 * 3 + 0x38] = (uint)bVar2;
          param_1[uVar5 * 3 + 0x3a] = (uint)(*(short *)(param_2 + 0x16 + lVar6) != 0);
          param_1[uVar5 * 3 + 0x39] = (uint)*(ushort *)(param_2 + 0x14 + lVar6);
          param_1[0xe] = uVar10 | 1 << (pbVar13[lVar6] & 0x1f);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  puVar12 = param_1 + 0xd;
  param_1[0xd] = 0;
  local_70 = param_1 + 0x10;
  local_78 = param_2;
  FUN_1473e2ed2();
  local_80 = (longlong *)(param_1 + 0x24);
  FUN_1473e2ed2();
  puVar1 = (undefined8 *)(param_1 + 0x38);
  lVar6 = 0;
  puVar7 = puVar1;
  do {
    uVar10 = (uint)lVar6;
    if (((uint)param_1[0xe] >> (uVar10 & 0x1f) & 1) != 0) {
      local_64 = uVar10;
      local_60 = puVar12;
      local_58 = &local_64;
      FUN_1409a12da(local_70,local_4c,&local_60,0);
      local_64 = uVar10;
      local_60 = &local_64;
      local_58 = puVar12;
      FUN_1473e2f14(local_80,local_4c,&local_60);
      uVar10 = *puVar12;
      uVar5 = (ulonglong)uVar10;
      *(undefined8 *)((longlong)puVar1 + uVar5 * 0xc) = *puVar7;
      param_1[uVar5 * 3 + 0x3a] = *(undefined4 *)(puVar7 + 1);
      *(uint *)((longlong)puVar1 + uVar5 * 0xc) = uVar10;
      *puVar12 = uVar10 + 1;
    }
    lVar6 = lVar6 + 1;
    puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
  } while (lVar6 != 0x11);
  memset((undefined4 *)((longlong)puVar1 + (ulonglong)*puVar12 * 0xc),0,
         (0x11 - (ulonglong)*puVar12) * 0xc);
  iVar3 = *(int *)(local_78 + 0x98);
  if ((longlong)iVar3 == 0) {
LAB_1473db3c7:
    *param_1 = 0x13;
    iVar3 = param_1[0xd];
    if (iVar3 != 0) {
      param_1[5] = iVar3;
      *(undefined8 **)(param_1 + 6) = puVar1;
      param_1[8] = param_1[0x6b];
      *(undefined4 **)(param_1 + 10) = param_1 + 0x6c;
      uVar4 = (*(code *)PTR_FUN_14c75b148)(puVar1,iVar3 * 0xc,0);
      param_1[0xc] = uVar4;
      uVar4 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x6c,param_1[0x6b] << 4,uVar4);
      param_1[0xc] = uVar4;
    }
    if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_1473db2d7:
  if (((param_3 >> (pbVar13[3] & 0x1f) & 1) != 0) && (param_1[0x26] != param_1[0x31])) {
    puVar8 = *(undefined4 **)(param_1 + 0x34);
    if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
      puVar8 = param_1 + 0x32;
    }
    iVar11 = puVar8[param_1[0x36] + 0xff & (uint)*pbVar13];
    if (iVar11 != -1) {
      lVar6 = *local_80;
      do {
        if (*(uint *)(lVar6 + (longlong)iVar11 * 0x10) == (uint)*pbVar13) {
          uVar10 = param_1[0x6b];
          param_1[0x6b] = uVar10 + 1;
          iVar11 = puVar8[param_1[0x36] + 0xff & (uint)*pbVar13];
          goto LAB_1473db36a;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0x10 + lVar6 + 8);
      } while (iVar11 != -1);
    }
  }
  goto LAB_1473db2f2;
LAB_1473db36a:
  if (iVar11 == -1) goto LAB_1473db385;
  lVar9 = lVar6 + (longlong)iVar11 * 0x10;
  if (*(uint *)(lVar6 + (longlong)iVar11 * 0x10) == (uint)*pbVar13) goto LAB_1473db387;
  iVar11 = *(int *)(lVar9 + 8);
  goto LAB_1473db36a;
LAB_1473db385:
  lVar9 = 0;
LAB_1473db387:
  puVar12 = param_1 + (ulonglong)uVar10 * 4 + 0x6c;
  puVar12[1] = *(uint *)(lVar9 + 4);
  *puVar12 = (uint)pbVar13[3];
  uVar10 = 0;
  if ((byte)(pbVar13[2] - 1) < 0x14) {
    uVar10 = *(uint *)(&DAT_14a36bfe4 + (ulonglong)(byte)(pbVar13[2] - 1) * 4);
  }
  puVar12[2] = uVar10;
  puVar12[3] = (uint)pbVar13[1];
LAB_1473db2f2:
  pbVar13 = pbVar13 + 8;
  if (pbVar13 == (byte *)(local_78 + (longlong)iVar3 * 8 + 0x10)) goto LAB_1473db3c7;
  goto LAB_1473db2d7;
}



// FUNCTION 1473db444 FUN_1473db444 body=281 status=ok
// SIG undefined FUN_1473db444(void)

undefined8 *
FUN_1473db444(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined2 local_44;
  undefined4 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_54 = CONCAT44(param_6,param_5);
  local_46 = 0;
  local_44 = 0xff00;
  local_4c = 0x10001;
  local_48 = 0x101;
  local_70 = 1;
  local_58 = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_38 = L"FVulkanBackBuffer";
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_78 = 0xb;
  local_40 = 0x1000;
  local_45 = param_4;
  FUN_1473d6fe8(param_1,param_2,&local_78,0);
  *param_1 = &PTR_FUN_14a36b470;
  param_1[0xc] = &PTR_LAB_14a36b4c0;
  param_1[0xd] = &PTR_LAB_14a36b4e8;
  param_1[0x23] = param_3;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473db55e FUN_1473db55e body=379 status=ok
// SIG undefined FUN_1473db55e(void)

void FUN_1473db55e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(lVar4 + 0x120) != 0) {
      iVar1 = FUN_1431b5cb8(*(longlong *)(lVar4 + 0x120),lVar4 + 0x138);
      if (-1 < iVar1) {
        *(int *)(lVar4 + 0x11c) = iVar1;
        lVar4 = *(longlong *)(param_1 + 0x118);
        lVar2 = lVar4 + 0x98;
        if (*(longlong *)(lVar4 + 200) != 0) {
          lVar2 = *(longlong *)(lVar4 + 200);
        }
        lVar4 = *(longlong *)(lVar2 + (longlong)*(int *)(lVar4 + 0x11c) * 8);
        uVar3 = *(undefined8 *)(lVar4 + 0x18);
        *(undefined8 *)(param_1 + 0x98) = uVar3;
        *(longlong *)(param_1 + 0x78) = lVar4;
        *(longlong *)(param_1 + 0x80) = lVar4;
        lVar4 = *(longlong *)(param_2 + 0x150);
        if (*(longlong *)(lVar4 + 0x80) != 0) {
          FUN_14739859c(lVar4,0,0);
          uVar3 = *(undefined8 *)(param_1 + 0x98);
        }
        lVar4 = *(longlong *)(lVar4 + 0x78);
        local_60 = &DAT_100000001;
        local_58 = 1;
        local_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        local_44 = 0;
        FUN_14739c216(lVar4 + 0x108,uVar3,&local_60);
        local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x138);
        local_40 = &local_30;
        local_38 = 1;
        FUN_1473965d8(lVar4,0x400);
        if (CONCAT44(uStack_4c,uStack_50) != 0) {
          FUN_1400020a8();
        }
        goto LAB_1473db57f;
      }
      lVar4 = *(longlong *)(param_1 + 0x118);
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x78);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar4 + 0x18);
    *(longlong *)(param_1 + 0x78) = lVar4;
    *(longlong *)(param_1 + 0x80) = lVar4;
  }
LAB_1473db57f:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473db6e8 FUN_1473db6e8 body=644 status=ok
// SIG undefined FUN_1473db6e8(void)

undefined8 *
FUN_1473db6e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x1e;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_14a36b500;
  param_1[9] = 0;
  param_1[10] = 0x600000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x600000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x600000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_80 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1d),4000);
  *(undefined4 *)(param_1 + 0x22) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x114) = param_5;
  *(undefined1 *)(param_1 + 0x23) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x119) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  param_1[0x24] = 0;
  param_1[0x25] = param_3;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0x100;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  lVar3 = (**(code **)(*DAT_14ca83900 + 0x30))();
  iVar1 = *(int *)(lVar3 + 0x58);
  *(uint *)(lVar3 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x5c) < iVar1 + 1U) {
    FUN_1473e307e((longlong *)(lVar3 + 0x50),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar1 * 8) = param_1;
  uVar4 = (**(code **)(*DAT_14ca83900 + 0x30))();
  FUN_1431adf96(uVar4);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  uVar2 = FUN_14054d46e(&DAT_14c846b20,L"RenderOffScreen");
  *(undefined1 *)((longlong)param_1 + 0x134) = uVar2;
  FUN_1473db96e(param_1,0);
  uVar4 = local_80;
  if (*(char *)((longlong)param_1 + 0x134) == '\0') {
    lVar3 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if (*(char *)(lVar3 + 0x80) == '\0') {
      iVar1 = *(int *)(param_1 + 0x12);
      if (0 < (longlong)iVar1) {
        lVar3 = 0;
        do {
          uVar5 = FUN_14001cc68(0x28,0x10);
          FUN_1473a911e(uVar5,uVar4);
          puVar6 = (undefined8 *)param_1[0x11];
          if ((undefined8 *)param_1[0x11] == (undefined8 *)0x0) {
            puVar6 = param_1 + 0xb;
          }
          puVar6[lVar3] = uVar5;
          puVar6 = (undefined8 *)param_1[0x11];
          if ((undefined8 *)param_1[0x11] == (undefined8 *)0x0) {
            puVar6 = param_1 + 0xb;
          }
          LOCK();
          *(int *)(puVar6[lVar3] + 8) = *(int *)(puVar6[lVar3] + 8) + 1;
          UNLOCK();
          lVar3 = lVar3 + 1;
        } while (iVar1 != lVar3);
      }
      local_78 = &LAB_1431bb02c;
      local_70 = 0;
      FUN_1473dc16c(local_68,param_1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473db96e FUN_1473db96e body=2044 status=ok
// SIG undefined FUN_1473db96e(void)

void FUN_1473db96e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_1a8 [32];
  ulonglong *local_188;
  ulonglong *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 *local_168;
  longlong *local_160;
  undefined8 *local_158;
  longlong *local_150;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong local_10c [2];
  undefined4 local_fc;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined4 local_dc;
  undefined1 *local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  ulonglong local_b4;
  undefined2 local_ac;
  short local_aa;
  undefined2 local_a8;
  byte local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar8 = *(longlong *)(param_1 + 0xe0);
  if (lVar8 != 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar8 = *(longlong *)(param_1 + 0xd8);
  if (lVar8 != 0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  bVar13 = *(byte *)(param_1 + 0x134);
  if (bVar13 == 0) {
    lVar8 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if (*(char *)(lVar8 + 0x80) != '\x01') {
      local_dc = 3;
      local_f8 = 0;
      uStack_f0 = 0;
      uVar10 = FUN_14001cc68(0x90,0x10);
      uVar6 = *(undefined1 *)(param_1 + 0x135);
      uVar2 = *(undefined1 *)(param_1 + 0x118);
      uVar15 = *(undefined4 *)(param_1 + 0x114);
      uVar16 = *(undefined4 *)(param_1 + 0x110);
      local_140 = *(longlong *)(param_1 + 0x128);
      local_138 = *(undefined8 *)(param_1 + 0x10);
      lVar8 = (**(code **)(*DAT_14ca83900 + 0x30))();
      local_158 = (undefined8 *)CONCAT71(local_158._1_7_,uVar6);
      local_160 = &local_f8;
      local_168 = &local_dc;
      local_170 = CONCAT71(local_170._1_7_,uVar2);
      local_180 = (ulonglong *)CONCAT44(local_180._4_4_,uVar16);
      local_188 = (ulonglong *)(param_1 + 0x119);
      local_178 = uVar15;
      local_150 = param_2;
      FUN_1431b4dd6(uVar10,*(undefined8 *)(lVar8 + 0x20),local_138,local_140);
      *(undefined8 *)(param_1 + 0x120) = uVar10;
      local_138 = param_1 + 0x18;
      FUN_1473dcc90(local_138,uStack_f0 & 0xffffffff);
      FUN_1473dcd10(param_1 + 0x58,uStack_f0 & 0xffffffff);
      lVar8 = FUN_1473984ce(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20c8) + 0x150));
      local_78 = 0;
      uStack_70 = 0;
      local_10c[0] = 1;
      local_10c[1] = 0xffffffff;
      local_fc = 0xffffffff;
      local_d8 = &DAT_100000001;
      uStack_d0 = 1;
      uStack_cc = 0x3b9acdea;
      uStack_c8 = 0;
      uStack_c0 = 0;
      if (0 < (int)uStack_f0) {
        local_140 = param_1 + 0x98;
        local_130 = lVar8 + 0x108;
        lVar9 = 0;
        do {
          uVar15 = *(undefined4 *)(param_1 + 0x110);
          if ((**(int **)(param_1 + 0x120) == 8) ||
             (uVar16 = *(undefined4 *)(param_1 + 0x114), **(int **)(param_1 + 0x120) == 2)) {
            uVar16 = uVar15;
            uVar15 = *(undefined4 *)(param_1 + 0x114);
          }
          uVar10 = (**(code **)(*DAT_14ca83900 + 0x30))();
          local_128 = 0;
          uStack_120 = 0;
          local_170 = *(undefined8 *)(local_f8 + lVar9 * 8);
          local_158 = &local_128;
          local_160 = (longlong *)&DAT_14ca83a58;
          local_178 = 1;
          local_180 = (ulonglong *)CONCAT44(local_180._4_4_,1);
          local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar16);
          local_168 = (undefined4 *)0x40001;
          FUN_1473bf3ea(uVar10,&local_118,*(undefined1 *)(param_1 + 0x119),uVar15);
          lVar12 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar12 = local_138;
          }
          lVar4 = *(longlong *)(lVar12 + lVar9 * 8);
          if (lVar4 != local_118) {
            *(longlong *)(lVar12 + lVar9 * 8) = local_118;
            if (local_118 != 0) {
              LOCK();
              *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
              UNLOCK();
            }
            if (lVar4 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar4 + 8);
              uVar7 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar7 & 0x3fffffff) == 1) {
                FUN_144a54812();
              }
            }
          }
          if (local_118 != 0) {
            LOCK();
            puVar1 = (uint *)(local_118 + 8);
            uVar7 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar7 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
          lVar12 = *(longlong *)(param_1 + 0x10);
          *plVar11 = lVar12;
          *(undefined4 *)(plVar11 + 1) = 0xffffffff;
          *(undefined1 *)((longlong)plVar11 + 0xc) = 0xff;
          *(undefined1 *)(plVar11 + 2) = 0;
          *(undefined1 *)(plVar11 + 5) = 0;
          lVar12 = *(longlong *)(lVar12 + 0x6b0);
          uVar7 = 0xffffffff;
          uVar14 = 0xff00000000;
          if (*(char *)(lVar12 + 8) == '\x01') {
            uVar7 = FUN_143192236(0xff00000000,lVar12 + 0x1d8);
            uVar14 = 0x400000000;
          }
          plVar11[1] = uVar7 | uVar14;
          local_150 = (longlong *)((ulonglong)local_150 & 0xffffffff00000000);
          local_160 = (longlong *)CONCAT44(local_160._4_4_,1);
          local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffff00000000);
          local_170 = CONCAT44(local_170._4_4_,1);
          local_178 = 0;
          local_180 = (ulonglong *)
                      CONCAT44(local_180._4_4_,
                               *(undefined4 *)
                                ((longlong)&DAT_14c873434 +
                                (ulonglong)((uint)*(byte *)(param_1 + 0x119) * 0x30)));
          local_188 = (ulonglong *)CONCAT71(local_188._1_7_,*(byte *)(param_1 + 0x119));
          local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffffffffff00);
          FUN_1431b8c8e(plVar11,*(undefined8 *)(local_f8 + lVar9 * 8),1,1);
          iVar3 = *(int *)(param_1 + 0xd0);
          *(uint *)(param_1 + 0xd0) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0xd4) < iVar3 + 1U) {
            FUN_1473e3956(local_140,iVar3);
          }
          lVar12 = *(longlong *)(param_1 + 200);
          if (*(longlong *)(param_1 + 200) == 0) {
            lVar12 = local_140;
          }
          *(longlong **)(lVar12 + (longlong)iVar3 * 8) = plVar11;
          local_188 = local_10c;
          FUN_147397183(lVar8,*(undefined8 *)(local_f8 + lVar9 * 8),0,7);
          local_188 = (ulonglong *)CONCAT44(local_188._4_4_,1);
          local_180 = local_10c;
          (*DAT_14ca79098)(*(undefined8 *)(lVar8 + 0x88),*(undefined8 *)(local_f8 + lVar9 * 8),7,
                           &local_78);
          local_188 = local_10c;
          FUN_147397183(lVar8,*(undefined8 *)(local_f8 + lVar9 * 8),7,uStack_cc);
          FUN_14739c216(local_130,*(undefined8 *)(local_f8 + lVar9 * 8),&local_d8);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uStack_f0);
      }
      FUN_14739859c(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20c8) + 0x150),0
                    ,0);
      lVar9 = FUN_14001cc68(0x120,0x10);
      local_180 = (ulonglong *)CONCAT44(local_180._4_4_,*(undefined4 *)(param_1 + 0x114));
      local_188 = (ulonglong *)CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x110));
      FUN_1473db444(lVar9,*(undefined8 *)(param_1 + 0x10),param_1,*(undefined1 *)(param_1 + 0x119));
      lVar8 = *(longlong *)(param_1 + 0xd8);
      if (lVar8 != lVar9) {
        *(longlong *)(param_1 + 0xd8) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        if (lVar8 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar8 + 8);
          uVar7 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar7 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      if (uStack_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1473dba90;
    }
    bVar13 = *(byte *)(param_1 + 0x134);
  }
  uVar6 = 0x25;
  if ((bVar13 & 1) == 0) {
    lVar8 = (**(code **)(*DAT_14ca83900 + 0x30))();
    uVar6 = 0x25;
    if (*(char *)(lVar8 + 0x80) == '\0') {
      uVar6 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x119) = uVar6;
  if (param_2 != (longlong *)0x0) {
    if (*param_2 != 0) {
      (*DAT_14ca78e50)(**(undefined8 **)(param_1 + 0x10),*param_2,0);
      *param_2 = 0;
    }
    pcVar5 = DAT_14ca78a88;
    lVar8 = param_2[1];
    if (lVar8 != 0) {
      lVar9 = (**(code **)(*DAT_14ca83900 + 0x30))();
      (*pcVar5)(*(undefined8 *)(lVar9 + 0x20),lVar8,0);
      param_2[1] = 0;
    }
  }
LAB_1473dba90:
  lVar8 = (**(code **)(*DAT_14ca83900 + 0x30))();
  uVar14 = 1;
  if (*(char *)(lVar8 + 0x80) == '\0') {
    uVar14 = (ulonglong)*(uint *)(param_1 + 0x110);
  }
  lVar8 = (**(code **)(*DAT_14ca83900 + 0x30))();
  if (*(char *)(lVar8 + 0x80) == '\0') {
    uVar17 = (ulonglong)*(uint *)(param_1 + 0x114) << 0x20;
  }
  else {
    uVar17 = 0x100000000;
  }
  FUN_1448944a0(local_10c,DAT_14ca85550);
  local_a6 = ((byte)local_10c[0] & 2) >> 1;
  bVar18 = (local_10c[0] & 2) != 0;
  local_a5 = *(undefined1 *)(param_1 + 0x119);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = L"RenderingBackBufferArr";
  if (!bVar18) {
    local_98 = L"RenderingBackBuffer";
  }
  local_aa = bVar18 + 1;
  local_b4 = uVar17 | uVar14;
  local_d8 = (undefined1 *)0xb;
  local_a4 = 0;
  local_ac = 1;
  local_a8 = 0x101;
  uStack_d0 = DAT_14ca85088;
  uStack_cc = DAT_14ca8508c;
  uStack_c8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_b8 = 0;
  local_a3 = 0xff;
  uStack_c0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
  local_a0 = 2;
  lVar9 = FUN_14001cc68(0x118,0x10);
  local_188 = (ulonglong *)0x0;
  FUN_1431b6a70(lVar9,0,*(undefined8 *)(param_1 + 0x10),&local_d8);
  lVar8 = *(longlong *)(param_1 + 0xe0);
  if (lVar8 != lVar9) {
    *(longlong *)(param_1 + 0xe0) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473dc16c FUN_1473dc16c body=180 status=ok
// SIG undefined FUN_1473dc16c(void)

undefined8 FUN_1473dc16c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_48 = 0;
  local_40 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_48);
  *puVar3 = &PTR_LAB_149ec9790;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a36bca0;
  puVar3[3] = param_2;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_14692894e(&DAT_14c867950,param_1,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473dc222 FUN_1473dc222 body=787 status=ok
// SIG undefined FUN_1473dc222(void)

void FUN_1473dc222(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a36b500;
  lVar6 = param_1[0x1c];
  if (lVar6 != 0) {
    param_1[0x1c] = 0;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar6 = param_1[0x1b];
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x118) = 0;
    if (*(longlong *)(lVar6 + 0x78) != 0) {
      *(undefined8 *)(lVar6 + 0x78) = 0;
      *(undefined8 *)(lVar6 + 0x80) = 0;
    }
    *(undefined8 *)(lVar6 + 0x98) = 0;
    lVar6 = param_1[0x1b];
    if (lVar6 != 0) {
      param_1[0x1b] = 0;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x134) == '\0') {
    lVar6 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if (*(char *)(lVar6 + 0x80) == '\0') {
      FUN_1473e325e(param_1 + 0x13);
      *(undefined4 *)(param_1 + 0x1a) = 0;
      if (*(int *)((longlong)param_1 + 0xd4) != 0) {
        FUN_1473e32ac(param_1 + 0x13);
      }
      iVar4 = *(int *)(param_1 + 0x12);
      if (0 < (longlong)iVar4) {
        lVar6 = 0;
        do {
          puVar7 = (undefined8 *)param_1[0x11];
          if ((undefined8 *)param_1[0x11] == (undefined8 *)0x0) {
            puVar7 = param_1 + 0xb;
          }
          puVar7 = (undefined8 *)puVar7[lVar6];
          LOCK();
          piVar2 = (int *)(puVar7 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (puVar7 != (undefined8 *)0x0 && *piVar2 == 0) {
            (**(code **)*puVar7)(puVar7,1);
          }
          puVar7 = (undefined8 *)param_1[9];
          if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
            puVar7 = param_1 + 3;
          }
          FUN_1473a4a48(param_1[2],*(undefined8 *)(puVar7[lVar6] + 0x98),1);
          puVar7 = (undefined8 *)param_1[9];
          if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
            puVar7 = param_1 + 3;
          }
          lVar5 = puVar7[lVar6];
          if (lVar5 != 0) {
            puVar7[lVar6] = 0;
            LOCK();
            puVar1 = (uint *)(lVar5 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          lVar6 = lVar6 + 1;
        } while (iVar4 != lVar6);
      }
      FUN_1473d616e(param_1[0x24],0);
      lVar6 = param_1[0x24];
      if (lVar6 != 0) {
        if (*(longlong *)(lVar6 + 0x78) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar6 + 0x68) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar6);
      }
      param_1[0x24] = 0;
      FUN_140457ffc(&DAT_14c867950,param_1);
    }
  }
  lVar6 = (**(code **)(*DAT_14ca83900 + 0x30))();
  local_38 = &local_40;
  local_40 = param_1;
  FUN_1473e337c(lVar6 + 0x50);
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x1c] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x1b] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1473dc536(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1473dc574(param_1 + 3);
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473dc536 FUN_1473dc536 body=62 status=ok
// SIG undefined FUN_1473dc536(void)

void FUN_1473dc536(longlong param_1)

{
  FUN_1473e325e();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1473e32ac(param_1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473dc574 FUN_1473dc574 body=53 status=ok
// SIG undefined FUN_1473dc574(void)

void FUN_1473dc574(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_1473e303a(lVar1,*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473dc5aa FUN_1473dc5aa body=128 status=ok
// SIG undefined FUN_1473dc5aa(void)

void FUN_1473dc5aa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  local_38 = 0;
  uStack_30 = 0;
  FUN_1473dcafc(param_1,&local_38);
  *(undefined8 *)(param_1 + 0x128) = param_2;
  FUN_1473db96e(param_1,&local_38);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473dc62c FUN_1473dc62c body=280 status=ok
// SIG undefined FUN_1473dc62c(void)

longlong * FUN_1473dc62c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if (*(char *)(param_1 + 0x134) == '\0') {
    lVar1 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if (DAT_14c760c6c != 1 && *(char *)(lVar1 + 0x80) == '\0') {
      if (DAT_14ca85164 == '\x01') {
        if (DAT_14c760c6c == 0) {
          FUN_1473db55e(*(undefined8 *)(param_1 + 0xd8),DAT_14ca85138);
        }
      }
      else {
        puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar3 = puVar2 + 3;
        if (DAT_14ca85108 < puVar3) {
          FUN_140023dd8(&DAT_14ca85100,0x20);
          puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar3 = puVar2 + 3;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar3;
        *DAT_14ca85130 = puVar2;
        DAT_14ca85130 = puVar2 + 1;
        puVar2[1] = 0;
        *puVar2 = &PTR_LAB_14a36bd08;
        puVar2[2] = param_1;
      }
      lVar1 = *(longlong *)(param_1 + 0xd8);
      goto LAB_1473dc67a;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
LAB_1473dc67a:
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  return param_2;
}



// FUNCTION 1473dc744 FUN_1473dc744 body=225 status=ok
// SIG undefined FUN_1473dc744(void)

void FUN_1473dc744(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x134) == '\0') {
    lVar1 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if ((*(char *)(lVar1 + 0x80) == '\0') && (DAT_14c760c6c != 1)) {
      if (DAT_14ca85164 == '\x01') {
        lVar1 = *(longlong *)(param_1 + 0xd8);
        if (*(longlong *)(lVar1 + 0x78) != 0) {
          *(undefined8 *)(lVar1 + 0x78) = 0;
          *(undefined8 *)(lVar1 + 0x80) = 0;
        }
        *(undefined8 *)(lVar1 + 0x98) = 0;
      }
      else {
        puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar3 = puVar2 + 3;
        if (DAT_14ca85108 < puVar3) {
          FUN_140023dd8(&DAT_14ca85100,0x20);
          puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar3 = puVar2 + 3;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar3;
        *DAT_14ca85130 = puVar2;
        DAT_14ca85130 = puVar2 + 1;
        puVar2[1] = 0;
        *puVar2 = &PTR_LAB_14a36bd10;
        puVar2[2] = param_1;
      }
    }
  }
  return;
}



// FUNCTION 1473dc826 FUN_1473dc826 body=235 status=ok
// SIG undefined FUN_1473dc826(void)

void FUN_1473dc826(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca78cb8) {
    FUN_144b3d300(&DAT_14ca78cb8);
    if (DAT_14ca78cb8 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78c90);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca78c90,4000);
      atexit((_func_5014 *)&LAB_1431bb034);
      _Init_thread_footer(&DAT_14ca78cb8);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78c90);
  lVar1 = *(longlong *)(param_1 + 0x148);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x74) == '\x04')) &&
      (*(longlong *)(param_1 + 0x150) == *(longlong *)(lVar1 + 0xe0))) && (DAT_14ca78910 == 0)) {
    FUN_1473998ee(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0xf0) + 0x58),
                  *(longlong *)(param_1 + 0x148),0x41200000);
  }
                    /* WARNING: Could not recover jumptable at 0x0001473dc895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca78c90);
  return;
}



// FUNCTION 1473dc912 FUN_1473dc912 body=82 status=ok
// SIG undefined FUN_1473dc912(void)

void FUN_1473dc912(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1a70);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(lVar1 + 0x48);
  if ((LPCRITICAL_SECTION)(lVar1 + 0x18) != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473dc955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 1473dc964 FUN_1473dc964 body=52 status=ok
// SIG undefined FUN_1473dc964(void)

void FUN_1473dc964(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1473dc998(param_1);
  return;
}



// FUNCTION 1473dc998 FUN_1473dc998 body=61 status=ok
// SIG undefined FUN_1473dc998(void)

void FUN_1473dc998(longlong *param_1)

{
  FUN_1473e3446();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473dc9d6 FUN_1473dc9d6 body=293 status=ok
// SIG undefined FUN_1473dc9d6(void)

ulonglong FUN_1473dc9d6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x40) == (int)param_2[0x18]) {
    if ((longlong *)param_2[0x32] != (longlong *)0x0) {
      unaff_RBX = *(longlong *)(param_1 + 200);
      lVar2 = (**(code **)(*(longlong *)param_2[0x32] + 0x30))();
      if (unaff_RBX != *(longlong *)(lVar2 + 0x98)) goto LAB_1473dca17;
    }
    if ((longlong *)param_2[0x34] != (longlong *)0x0) {
      unaff_RBX = *(longlong *)(param_1 + 0xd0);
      lVar2 = (**(code **)(*(longlong *)param_2[0x34] + 0x30))();
      if (unaff_RBX != *(longlong *)(lVar2 + 0x98)) goto LAB_1473dca17;
    }
    if ((longlong *)param_2[0x37] != (longlong *)0x0) {
      unaff_RBX = *(longlong *)(param_1 + 0xd8);
      lVar2 = (**(code **)(*(longlong *)param_2[0x37] + 0x30))();
      if (unaff_RBX != *(longlong *)(lVar2 + 0x98)) goto LAB_1473dca17;
    }
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (0 < (int)param_2[0x18]) {
      lVar2 = 0;
      iVar5 = 0;
      plVar6 = param_2;
      do {
        if ((((char)param_2[0x31] == '\x01') && ((longlong *)plVar6[0x19] != (longlong *)0x0)) &&
           (lVar1 = *(longlong *)(param_1 + 0x88 + (longlong)iVar5 * 8),
           lVar3 = (**(code **)(*(longlong *)plVar6[0x19] + 0x30))(),
           lVar1 != *(longlong *)(lVar3 + 0x98))) goto LAB_1473dca17;
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          lVar1 = *(longlong *)(param_1 + 0x48 + (longlong)iVar5 * 8);
          lVar3 = (**(code **)(*(longlong *)*plVar6 + 0x30))();
          bVar7 = lVar1 == *(longlong *)(lVar3 + 0x98);
          if (!bVar7) goto LAB_1473dca17;
          iVar5 = iVar5 + (uint)bVar7;
        }
        lVar2 = lVar2 + 1;
        plVar6 = plVar6 + 3;
      } while (lVar2 < (int)param_2[0x18]);
    }
  }
  else {
LAB_1473dca17:
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1473dcafc FUN_1473dcafc body=403 status=ok
// SIG undefined FUN_1473dcafc(void)

void FUN_1473dcafc(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1473a4ba6(*(undefined8 *)(param_1 + 0x10));
  FUN_1473a4890(*(undefined8 *)(param_1 + 0x10));
  lVar5 = *(longlong *)(param_1 + 0xd8);
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x78) != 0) {
      *(undefined8 *)(lVar5 + 0x78) = 0;
      *(undefined8 *)(lVar5 + 0x80) = 0;
    }
    *(undefined8 *)(lVar5 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x134) == '\0') {
    lVar5 = (**(code **)(*DAT_14ca83900 + 0x30))();
    if ((*(char *)(lVar5 + 0x80) == '\0') && (*(longlong *)(param_1 + 0x120) != 0)) {
      FUN_1473e325e(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      if (*(int *)(param_1 + 0xd4) != 0) {
        FUN_1473e32ac(param_1 + 0x98);
      }
      iVar3 = *(int *)(param_1 + 0x50);
      if (0 < (longlong)iVar3) {
        lVar5 = 0;
        do {
          lVar6 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar6 = param_1 + 0x18;
          }
          FUN_1473a4a48(*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(*(longlong *)(lVar6 + lVar5 * 8) + 0x98),1);
          lVar6 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar6 = param_1 + 0x18;
          }
          lVar4 = *(longlong *)(lVar6 + lVar5 * 8);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar6 + lVar5 * 8) = 0;
            LOCK();
            puVar1 = (uint *)(lVar4 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          lVar5 = lVar5 + 1;
        } while (iVar3 != lVar5);
      }
      FUN_1431a02cc(*(longlong *)(param_1 + 0x10) + 0x590,1);
      FUN_1473d616e(*(undefined8 *)(param_1 + 0x120),param_2);
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0x78) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar5 + 0x68) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar5);
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      FUN_1431a02cc(*(longlong *)(param_1 + 0x10) + 0x590,1);
    }
  }
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  return;
}



// FUNCTION 1473dcc90 FUN_1473dcc90 body=126 status=ok
// SIG undefined FUN_1473dcc90(void)

void FUN_1473dcc90(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473e35d0(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    FUN_1473e35bd(lVar2 + (longlong)iVar1 * 8,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1473e36c4(param_1,param_2,iVar1 - param_2);
    FUN_1473e3722(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473dcd10 FUN_1473dcd10 body=123 status=ok
// SIG undefined FUN_1473dcd10(void)

void FUN_1473dcd10(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473e37c2(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x38) = param_2;
    FUN_1473e38b6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473dcd8c FUN_1473dcd8c body=399 status=ok
// SIG undefined FUN_1473dcd8c(void)

longlong *
FUN_1473dcd8c(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,char param_7)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_7 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca78cc8) {
      FUN_144b3d300(&DAT_14ca78cc8);
      if (DAT_14ca78cc8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar5 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1);
        if (plVar5 == (longlong *)0x0) {
          DAT_14ca78cc0 = 0;
        }
        else {
          DAT_14ca78cc0 = (**(code **)(*plVar5 + 0x68))(plVar5);
        }
        _Init_thread_footer(&DAT_14ca78cc8);
      }
    }
    lVar4 = DAT_14ca78cc0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar1 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar1 ^ 1);
    }
    uVar2 = *(uint *)(lVar4 + uVar3 * 4);
    if (3 < (int)uVar2) {
      uVar2 = 4;
    }
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = 0;
    }
    uVar2 = 4;
    if ((int)(&DAT_14aa61900)[uVar3] < 4) {
      uVar2 = (&DAT_14aa61900)[uVar3];
    }
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = 0;
    }
    param_7 = (&DAT_14aa618f0)[uVar3];
  }
  lVar4 = FUN_14001cc68(0x160,0x10);
  FUN_1473db6e8(lVar4,*(undefined8 *)(param_1 + 0x48),param_3,param_4,param_5,param_6,param_7);
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473dcf1e FUN_1473dcf1e body=50 status=ok
// SIG undefined FUN_1473dcf1e(void)

undefined8 FUN_1473dcf1e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(longlong *)(param_3 + 0x120) != 0) {
    FUN_1431b5e4c();
  }
  FUN_1473dc62c(param_3,param_2);
  return param_2;
}



// FUNCTION 1473dcf64 FUN_1473dcf64 body=518 status=ok
// SIG undefined FUN_1473dcf64(void)

void FUN_1473dcf64(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined4 param_6,float param_7,float param_8,float param_9,float param_10,
                  undefined4 param_11)

{
  undefined1 auStack_c8 [40];
  float *local_a0;
  undefined4 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_90 = (float)((int)ROUND(param_2 + param_2 + -0.5) >> 1);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_8c = (float)((int)ROUND(param_4 + param_4 + -0.5) >> 1);
  local_a0 = &local_90;
  local_88 = (float)-((int)ROUND(-0.5 - ((param_7 - param_2) + (param_7 - param_2))) >> 1);
  local_84 = (float)-((int)ROUND(-0.5 - ((param_9 - param_4) + (param_9 - param_4))) >> 1);
  local_80 = param_6;
  local_78 = (float)((int)ROUND(param_3 + param_3 + -0.5) >> 1);
  local_7c = param_11;
  local_74 = (float)((int)ROUND(param_5 + param_5 + -0.5) >> 1);
  local_70 = (float)-((int)ROUND(-0.5 - ((param_8 - param_3) + (param_8 - param_3))) >> 1);
  local_6c = (float)-((int)ROUND(-0.5 - ((param_10 - param_5) + (param_10 - param_5))) >> 1);
  local_68 = param_6;
  local_64 = param_11;
  local_98 = 2;
  FUN_1473dd16c(*(undefined8 *)(param_1 + 0x170));
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473dd16c FUN_1473dd16c body=311 status=ok
// SIG undefined FUN_1473dd16c(void)

void FUN_1473dd16c(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  
  pvVar1 = (void *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 1);
  pvVar7 = (void *)*param_2;
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 == 0 && *(int *)(param_1 + 0x44) == 0) {
    *(undefined4 *)(param_1 + 0x44) = 2;
  }
  else {
    FUN_1473c6f5a(pvVar1,iVar3);
    if (iVar3 != 0) {
      _Dst = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        _Dst = pvVar1;
      }
      memcpy(_Dst,pvVar7,(longlong)iVar3 * 0x18);
    }
  }
  lVar2 = param_1 + 0x48;
  FUN_1473c4056(lVar2,*(undefined4 *)(param_1 + 0x40),1);
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = 0;
    do {
      pvVar7 = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        pvVar7 = pvVar1;
      }
      lVar8 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar8 = lVar2;
      }
      *(int *)(lVar8 + lVar5) = (int)*(float *)((longlong)pvVar7 + lVar4);
      pvVar7 = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        pvVar7 = pvVar1;
      }
      lVar8 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar8 = lVar2;
      }
      *(int *)(lVar8 + 4 + lVar5) = (int)*(float *)((longlong)pvVar7 + lVar4 + 4);
      pvVar7 = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        pvVar7 = pvVar1;
      }
      lVar8 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar8 = lVar2;
      }
      *(int *)(lVar8 + 8 + lVar5) = (int)(longlong)*(float *)((longlong)pvVar7 + lVar4 + 8);
      pvVar7 = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        pvVar7 = pvVar1;
      }
      lVar8 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar8 = lVar2;
      }
      *(int *)(lVar8 + 0xc + lVar5) = (int)(longlong)*(float *)((longlong)pvVar7 + lVar4 + 0xc);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + 0x18;
    } while (lVar6 < *(int *)(param_1 + 0x70));
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



// FUNCTION 1473dd2b2 FUN_1473dd2b2 body=192 status=ok
// SIG undefined FUN_1473dd2b2(void)

void FUN_1473dd2b2(longlong param_1,char param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  
  if (param_2 == '\0') {
    pfVar2 = (float *)(param_1 + 8);
    if (*(float **)(param_1 + 0x38) != (float *)0x0) {
      pfVar2 = *(float **)(param_1 + 0x38);
    }
    param_6 = (int)(longlong)pfVar2[3];
    param_5 = (int)(longlong)pfVar2[2];
    param_4 = (int)(longlong)pfVar2[1];
    param_3 = (int)(longlong)*pfVar2;
  }
  else {
    param_6 = param_6 - param_4;
    param_5 = param_5 - param_3;
  }
  piVar1 = (int *)(param_1 + 0x48);
  FUN_1473c4056(piVar1,1,1);
  piVar3 = *(int **)(param_1 + 0x68);
  if (*(int **)(param_1 + 0x68) == (int *)0x0) {
    piVar3 = piVar1;
  }
  *piVar3 = param_3;
  piVar3 = *(int **)(param_1 + 0x68);
  if (*(int **)(param_1 + 0x68) == (int *)0x0) {
    piVar3 = piVar1;
  }
  piVar3[1] = param_4;
  piVar3 = *(int **)(param_1 + 0x68);
  if (*(int **)(param_1 + 0x68) == (int *)0x0) {
    piVar3 = piVar1;
  }
  piVar3[2] = param_5;
  piVar3 = *(int **)(param_1 + 0x68);
  if (*(int **)(param_1 + 0x68) == (int *)0x0) {
    piVar3 = piVar1;
  }
  piVar3[3] = param_6;
  *(char *)(param_1 + 0x80) = param_2;
  return;
}



// FUNCTION 1473dd372 FUN_1473dd372 body=45 status=ok
// SIG undefined FUN_1473dd372(void)

void FUN_1473dd372(void)

{
  if (DAT_14ca78d18 != (HMODULE)0x0) {
    FreeLibrary(DAT_14ca78d18);
    DAT_14ca78d18 = (HMODULE)0x0;
  }
  DAT_14ca78cdc = 0;
  return;
}



// FUNCTION 1473dd3a0 FUN_1473dd3a0 body=203 status=ok
// SIG undefined FUN_1473dd3a0(void)

void FUN_1473dd3a0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = "VK_KHR_win32_surface";
  puVar2[2] = 0x10001ffffffff;
  *puVar2 = &PTR_FUN_14a35ec10;
  puVar2[4] = 0;
  puVar2[6] = 0;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473ad198(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = "VK_KHR_get_surface_capabilities2";
  puVar2[2] = 0x10001ffffffff;
  *puVar2 = &PTR_FUN_14a35ec10;
  puVar2[4] = 0;
  puVar2[6] = 0;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473ad198(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 1473dd46c FUN_1473dd46c body=265 status=ok
// SIG undefined FUN_1473dd46c(void)

void FUN_1473dd46c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar2[1] = "VK_EXT_full_screen_exclusive";
  puVar2[2] = 0x10001ffffffff;
  *puVar2 = &PTR_FUN_14a35ec40;
  puVar2[3] = param_1;
  puVar2[4] = &LAB_1473aa934;
  puVar2[6] = 0;
  puVar2[8] = &PTR_LAB_14a35ec20;
  puVar2[9] = &LAB_1431c2350;
  *(undefined1 *)(puVar2 + 0xc) = 1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1473aa8ae(param_2,iVar1);
  }
  *(undefined8 **)(*param_2 + (longlong)iVar1 * 8) = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar2[1] = "VK_KHR_external_memory_win32";
  puVar2[2] = 0x1ffffffff;
  *puVar2 = &PTR_FUN_14a35ec40;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 0xc) = 1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1473aa8ae(param_2,iVar1);
  }
  *(undefined8 **)(*param_2 + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 1473dd576 FUN_1473dd576 body=117 status=ok
// SIG undefined FUN_1473dd576(void)

byte FUN_1473dd576(int param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca78d2c) {
    FUN_144b3d300(&DAT_14ca78d2c);
    if (DAT_14ca78d2c == -1) {
      DAT_14ca78d28 = FUN_145db1694(10,0,0);
      _Init_thread_footer(&DAT_14ca78d2c);
    }
  }
  return param_1 == 0x1002 & DAT_14ca78d28;
}



// FUNCTION 1473dd5ec FUN_1473dd5ec body=79 status=ok
// SIG undefined FUN_1473dd5ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1473dd5ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a369f48;
  FUN_1473a8b5a(_DAT_14ca78940 + 0x590,0xb,param_1[2]);
  *param_1 = &PTR_FUN_149e002e8;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd63e FUN_1473dd63e body=38 status=ok
// SIG undefined FUN_1473dd63e(void)

undefined8 FUN_1473dd63e(undefined8 param_1,int param_2)

{
  FUN_1473d4f30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd664 FUN_1473dd664 body=75 status=ok
// SIG undefined FUN_1473dd664(void)

undefined8 * FUN_1473dd664(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a369f78;
  FUN_147403ef0(param_1 + 2);
  FUN_147403c1e(param_1 + 2);
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd6b0 FUN_1473dd6b0 body=39 status=ok
// SIG undefined FUN_1473dd6b0(void)

undefined8 * FUN_1473dd6b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd6e8 FUN_1473dd6e8 body=39 status=ok
// SIG undefined FUN_1473dd6e8(void)

undefined8 * FUN_1473dd6e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd71a FUN_1473dd71a body=39 status=ok
// SIG undefined FUN_1473dd71a(void)

undefined8 * FUN_1473dd71a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd770 FUN_1473dd770 body=38 status=ok
// SIG undefined FUN_1473dd770(void)

undefined8 FUN_1473dd770(undefined8 param_1,int param_2)

{
  FUN_1473d77b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd7c4 FUN_1473dd7c4 body=45 status=ok
// SIG undefined FUN_1473dd7c4(void)

longlong FUN_1473dd7c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x68;
  FUN_1473d77b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd7f2 FUN_1473dd7f2 body=38 status=ok
// SIG undefined FUN_1473dd7f2(void)

undefined8 FUN_1473dd7f2(undefined8 param_1,int param_2)

{
  FUN_1473d8496();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd818 FUN_1473dd818 body=48 status=ok
// SIG undefined FUN_1473dd818(void)

longlong FUN_1473dd818(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x140;
  FUN_1473d8496(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd848 FUN_1473dd848 body=38 status=ok
// SIG undefined FUN_1473dd848(void)

undefined8 FUN_1473dd848(undefined8 param_1,int param_2)

{
  FUN_145c7e5a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd86e FUN_1473dd86e body=38 status=ok
// SIG undefined FUN_1473dd86e(void)

undefined8 FUN_1473dd86e(undefined8 param_1,int param_2)

{
  FUN_145aba3ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd89c FUN_1473dd89c body=38 status=ok
// SIG undefined FUN_1473dd89c(void)

undefined8 FUN_1473dd89c(undefined8 param_1,int param_2)

{
  FUN_1473e39c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd8ce FUN_1473dd8ce body=38 status=ok
// SIG undefined FUN_1473dd8ce(void)

undefined8 FUN_1473dd8ce(undefined8 param_1,int param_2)

{
  FUN_1473e3a16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd900 FUN_1473dd900 body=38 status=ok
// SIG undefined FUN_1473dd900(void)

undefined8 FUN_1473dd900(undefined8 param_1,int param_2)

{
  FUN_1473d99c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd926 FUN_1473dd926 body=38 status=ok
// SIG undefined FUN_1473dd926(void)

undefined8 FUN_1473dd926(undefined8 param_1,int param_2)

{
  FUN_1473da3d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd94c FUN_1473dd94c body=76 status=ok
// SIG undefined FUN_1473dd94c(void)

undefined8 FUN_1473dd94c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xc0,0x10);
  FUN_1473e3a66(uVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x50));
  return uVar1;
}



// FUNCTION 1473dd998 FUN_1473dd998 body=80 status=ok
// SIG undefined FUN_1473dd998(void)

undefined8 * FUN_1473dd998(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a36aea0;
  if (param_1[3] != 0) {
    FUN_1473a2c42(param_1[5] + 0x5d0,0,param_1 + 3);
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dd9ec FUN_1473dd9ec body=39 status=ok
// SIG undefined FUN_1473dd9ec(void)

undefined8 * FUN_1473dd9ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dda14 FUN_1473dda14 body=100 status=ok
// SIG undefined FUN_1473dda14(void)

undefined8 FUN_1473dda14(longlong param_1,void *param_2)

{
  int iVar1;
  
  if ((void *)(param_1 + 0x10) != param_2) {
    iVar1 = *(int *)(param_1 + 0x98);
    *(int *)((longlong)param_2 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_2 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x8c) = 0x11;
    }
    else {
      FUN_145f89ee8(param_2,iVar1);
      if (iVar1 != 0) {
        memcpy(param_2,(void *)(param_1 + 0x10),(longlong)iVar1 << 3);
      }
    }
  }
  return 1;
}



// FUNCTION 1473dda80 FUN_1473dda80 body=108 status=ok
// SIG undefined FUN_1473dda80(void)

undefined8 * FUN_1473dda80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a36b470;
  param_1[0xc] = &PTR_LAB_14a36b4c0;
  param_1[0xd] = &PTR_LAB_14a36b4e8;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  if (param_1[0xf] != 0) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  param_1[0x13] = 0;
  FUN_1473d77b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ddaf6 FUN_1473ddaf6 body=38 status=ok
// SIG undefined FUN_1473ddaf6(void)

undefined8 FUN_1473ddaf6(undefined8 param_1,int param_2)

{
  FUN_1473dc222();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ddb62 FUN_1473ddb62 body=52 status=ok
// SIG undefined FUN_1473ddb62(void)

void FUN_1473ddb62(longlong *param_1)

{
  FUN_1473ddb96();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473ddb96 FUN_1473ddb96 body=89 status=ok
// SIG undefined FUN_1473ddb96(void)

void FUN_1473ddb96(longlong param_1)

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



// FUNCTION 1473ddbf0 FUN_1473ddbf0 body=54 status=ok
// SIG undefined FUN_1473ddbf0(void)

void FUN_1473ddbf0(longlong *param_1)

{
  FUN_1473ddc26(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473ddc26 FUN_1473ddc26 body=367 status=ok
// SIG undefined FUN_1473ddc26(void)

void FUN_1473ddc26(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
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
      puVar3 = *(undefined8 **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473ddd98 FUN_1473ddd98 body=39 status=ok
// SIG undefined FUN_1473ddd98(void)

undefined8 * FUN_1473ddd98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dddd2 FUN_1473dddd2 body=38 status=ok
// SIG undefined FUN_1473dddd2(void)

undefined8 FUN_1473dddd2(undefined8 param_1,int param_2)

{
  FUN_1473dddf8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dddf8 FUN_1473dddf8 body=65 status=ok
// SIG undefined FUN_1473dddf8(void)

void FUN_1473dddf8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a36b9c0;
  if (param_1[0xe] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xe] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14178dad6(param_1);
  return;
}



// FUNCTION 1473dde3a FUN_1473dde3a body=121 status=ok
// SIG undefined FUN_1473dde3a(void)

void FUN_1473dde3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x150);
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      FUN_14739859c(lVar1,0,0);
    }
    FUN_1473bd608(*(longlong *)(lVar1 + 0x78) + 0x108,*(undefined8 *)(param_1 + 0x10),
                  *(undefined4 *)(param_1 + 0x18),1);
    return;
  }
  FUN_1473d67ae(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_2 + 0x38),
                *(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1d),param_1 + 0x20,
                *(undefined1 *)(param_1 + 0x1e));
  return;
}



// FUNCTION 1473ddeb4 FUN_1473ddeb4 body=53 status=ok
// SIG undefined FUN_1473ddeb4(void)

void FUN_1473ddeb4(void)

{
  FUN_1473ddeea();
  if (DAT_14ca78b60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca78b40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473ddeea FUN_1473ddeea body=105 status=ok
// SIG undefined FUN_1473ddeea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473ddeea(void)

{
  DAT_14ca78b48 = 0;
  if (DAT_14ca78b4c != 0) {
    FUN_140e91948(&DAT_14ca78b40,0);
  }
  _DAT_14ca78b70 = 0xffffffff;
  DAT_14ca78b68 = 0;
  if (0x80 < DAT_14ca78b6c) {
    DAT_14ca78b6c = 0x80;
    FUN_1446efbd8(&DAT_14ca78b50,0);
    return;
  }
  return;
}



// FUNCTION 1473ddf54 FUN_1473ddf54 body=164 status=ok
// SIG undefined FUN_1473ddf54(void)

void FUN_1473ddf54(longlong *param_1)

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
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined4)param_1[1];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_50 = (undefined4)param_1[2];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = (undefined4)param_1[3];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_40 = *(uint *)(param_1 + 4) & 0x7fffffff;
  FUN_1473a8044(&local_58);
  lVar1 = *param_1;
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uVar2 = *(undefined4 *)(lVar1 + 0x38);
  uVar3 = *(undefined4 *)(lVar1 + 0x3c);
  uVar4 = *(undefined4 *)(lVar1 + 0x40);
  uVar5 = *(undefined4 *)(lVar1 + 0x44);
  uVar6 = *(undefined4 *)(lVar1 + 0x48);
  uVar7 = *(undefined4 *)(lVar1 + 0x4c);
  uVar8 = *(undefined4 *)(lVar1 + 0x50);
  uVar9 = *(undefined4 *)(lVar1 + 0x54);
  *(undefined4 *)(lVar1 + 0x38) = local_58;
  *(undefined4 *)(lVar1 + 0x3c) = uStack_54;
  *(undefined4 *)(lVar1 + 0x40) = uStack_50;
  *(undefined4 *)(lVar1 + 0x44) = uStack_4c;
  *(undefined4 *)(lVar1 + 0x48) = local_48;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_44;
  *(uint *)(lVar1 + 0x50) = uStack_40;
  *(undefined4 *)(lVar1 + 0x54) = uStack_3c;
  local_58 = uVar2;
  uStack_54 = uVar3;
  uStack_50 = uVar4;
  uStack_4c = uVar5;
  local_48 = uVar6;
  uStack_44 = uVar7;
  uStack_40 = uVar8;
  uStack_3c = uVar9;
  FUN_1431a01ea(*(longlong *)(*param_1 + 0x30) + 0x3d8,&local_58);
  FUN_1473d9a3e(*param_1,param_1[5],(int)param_1[6]);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ddffa FUN_1473ddffa body=38 status=ok
// SIG undefined FUN_1473ddffa(void)

undefined8 FUN_1473ddffa(undefined8 param_1,int param_2)

{
  FUN_1473de024();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473de024 FUN_1473de024 body=98 status=ok
// SIG undefined FUN_1473de024(void)

void FUN_1473de024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a36ba30;
  FUN_1473d9d2e(param_1 + 4);
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a343240;
  FUN_147365bf9(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473de086 FUN_1473de086 body=39 status=ok
// SIG undefined FUN_1473de086(void)

undefined8 * FUN_1473de086(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473de0ae FUN_1473de0ae body=132 status=ok
// SIG undefined FUN_1473de0ae(void)

void FUN_1473de0ae(longlong param_1,int param_2)

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



// FUNCTION 1473de133 FUN_1473de133 body=301 status=ok
// SIG undefined FUN_1473de133(void)

void FUN_1473de133(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  uVar6 = *param_4;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*param_5);
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1473de260 FUN_1473de260 body=63 status=ok
// SIG undefined FUN_1473de260(void)

void FUN_1473de260(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1473ddb96(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1473de3e4(param_1);
    return;
  }
  FUN_1473de2a0(param_1);
  FUN_1473ddb96(param_1);
  return;
}



// FUNCTION 1473de2a0 FUN_1473de2a0 body=322 status=ok
// SIG undefined FUN_1473de2a0(void)

void FUN_1473de2a0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1473de3e4 FUN_1473de3e4 body=447 status=ok
// SIG undefined FUN_1473de3e4(void)

void FUN_1473de3e4(longlong *param_1)

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
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
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



// FUNCTION 1473de5a4 FUN_1473de5a4 body=102 status=ok
// SIG undefined FUN_1473de5a4(void)

void FUN_1473de5a4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1473de60a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1473de60a FUN_1473de60a body=87 status=ok
// SIG undefined FUN_1473de60a(void)

void FUN_1473de60a(longlong *param_1,int param_2)

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
  FUN_1473de662();
  return;
}



// FUNCTION 1473de662 FUN_1473de662 body=114 status=ok
// SIG undefined FUN_1473de662(void)

void FUN_1473de662(longlong *param_1,int param_2)

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



// FUNCTION 1473de6d4 FUN_1473de6d4 body=295 status=ok
// SIG undefined FUN_1473de6d4(void)

undefined4 * FUN_1473de6d4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473de7fc(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  lVar8 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_1473de8e2(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
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
      local_38[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1473de9f6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473de7fc FUN_1473de7fc body=230 status=ok
// SIG undefined FUN_1473de7fc(void)

int * FUN_1473de7fc(longlong *param_1,int *param_2)

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



// FUNCTION 1473de8e2 FUN_1473de8e2 body=162 status=ok
// SIG undefined FUN_1473de8e2(void)

undefined8 FUN_1473de8e2(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
        piVar2 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar2 == *param_3) {
          puVar3 = *(undefined8 **)(piVar2 + 2);
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar3 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *piVar2 = *param_3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_1473de984(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar2[4];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473de984 FUN_1473de984 body=114 status=ok
// SIG undefined FUN_1473de984(void)

void FUN_1473de984(longlong *param_1,int param_2)

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



// FUNCTION 1473de9f6 FUN_1473de9f6 body=419 status=ok
// SIG undefined FUN_1473de9f6(void)

void FUN_1473de9f6(longlong *param_1)

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



// FUNCTION 1473deb9a FUN_1473deb9a body=110 status=ok
// SIG undefined FUN_1473deb9a(void)

void FUN_1473deb9a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_1473ddc26(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1473de9f6(param_1);
    return;
  }
  FUN_1473dec08(param_1);
  FUN_1473ddc26(param_1,param_2);
  return;
}



// FUNCTION 1473dec08 FUN_1473dec08 body=322 status=ok
// SIG undefined FUN_1473dec08(void)

void FUN_1473dec08(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1473ded4b FUN_1473ded4b body=766 status=ok
// SIG undefined FUN_1473ded4b(void)

longlong * FUN_1473ded4b(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_1473df04a();
  FUN_1473df308(param_1,param_2 + 0x10);
  FUN_1473df642(param_1,param_2 + 0x20);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x30),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x34),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x34) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x38),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x3c),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x3c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x40),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x44),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x44) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_144aa0c38(param_1,param_2 + 0x48);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x5c),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x5c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x60),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x60) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x61),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x61) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x62),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x62) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14021219d(param_1,param_2 + 0x68);
  return param_1;
}



// FUNCTION 1473df04a FUN_1473df04a body=388 status=ok
// SIG undefined FUN_1473df04a(void)

longlong * FUN_1473df04a(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1473df222(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1473df1cf(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1473df222(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1473df282(param_2,iVar2);
        }
        FUN_1473df1cf(param_1,(longlong)iVar2 * 4 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473df1cf FUN_1473df1cf body=82 status=ok
// SIG undefined FUN_1473df1cf(void)

longlong * FUN_1473df1cf(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1473df222 FUN_1473df222 body=95 status=ok
// SIG undefined FUN_1473df222(void)

void FUN_1473df222(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1473df282 FUN_1473df282 body=132 status=ok
// SIG undefined FUN_1473df282(void)

void FUN_1473df282(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473df308 FUN_1473df308 body=388 status=ok
// SIG undefined FUN_1473df308(void)

longlong * FUN_1473df308(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1473df55c(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1473df48d(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1473df55c(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1473df5bc(param_2,iVar2);
        }
        FUN_1473df48d(param_1,(longlong)iVar2 * 8 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473df48d FUN_1473df48d body=207 status=ok
// SIG undefined FUN_1473df48d(void)

longlong * FUN_1473df48d(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
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



// FUNCTION 1473df55c FUN_1473df55c body=95 status=ok
// SIG undefined FUN_1473df55c(void)

void FUN_1473df55c(longlong param_1,uint param_2)

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



// FUNCTION 1473df5bc FUN_1473df5bc body=132 status=ok
// SIG undefined FUN_1473df5bc(void)

void FUN_1473df5bc(longlong param_1,int param_2)

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



// FUNCTION 1473df642 FUN_1473df642 body=385 status=ok
// SIG undefined FUN_1473df642(void)

longlong * FUN_1473df642(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1473df844(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x800000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1473df7c4(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 2;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1473df844(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1473df8a2(param_2,iVar2);
        }
        FUN_1473df7c4(param_1,(longlong)iVar2 * 2 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473df7c4 FUN_1473df7c4 body=127 status=ok
// SIG undefined FUN_1473df7c4(void)

longlong * FUN_1473df7c4(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 1473df844 FUN_1473df844 body=93 status=ok
// SIG undefined FUN_1473df844(void)

void FUN_1473df844(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 2,1);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 1)) {
      uVar2 = uVar1 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,2,1);
  }
  return;
}



// FUNCTION 1473df8a2 FUN_1473df8a2 body=130 status=ok
// SIG undefined FUN_1473df8a2(void)

void FUN_1473df8a2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473df926 FUN_1473df926 body=299 status=ok
// SIG undefined FUN_1473df926(void)

undefined4 * FUN_1473df926(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x12) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    *(undefined8 *)(param_2 + 0x14) = 0;
    if (*(longlong *)(param_1 + 0x16) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_2 + 0x16) = 0;
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



// FUNCTION 1473dfa52 FUN_1473dfa52 body=53 status=ok
// SIG undefined FUN_1473dfa52(void)

longlong FUN_1473dfa52(longlong param_1,int param_2)

{
  FUN_1473d23e8(param_1 + 0xa0);
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dfaaa FUN_1473dfaaa body=48 status=ok
// SIG undefined FUN_1473dfaaa(void)

int FUN_1473dfaaa(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0x98);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0xa0);
  }
  return iVar3;
}



// FUNCTION 1473dfae6 FUN_1473dfae6 body=306 status=ok
// SIG undefined FUN_1473dfae6(void)

undefined4 * FUN_1473dfae6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1473dfc1a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_1473dfd00(param_1,uVar9,local_40,&local_4c);
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
      FUN_1473de3e4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473dfc1a FUN_1473dfc1a body=230 status=ok
// SIG undefined FUN_1473dfc1a(void)

int * FUN_1473dfc1a(longlong *param_1,int *param_2)

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



// FUNCTION 1473dfd00 FUN_1473dfd00 body=128 status=ok
// SIG undefined FUN_1473dfd00(void)

undefined8 FUN_1473dfd00(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1473de662((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473dfd80 FUN_1473dfd80 body=53 status=ok
// SIG undefined FUN_1473dfd80(void)

longlong FUN_1473dfd80(longlong param_1,int param_2)

{
  FUN_1473d23e8(param_1 + 0xa0);
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dfdd8 FUN_1473dfdd8 body=48 status=ok
// SIG undefined FUN_1473dfdd8(void)

int FUN_1473dfdd8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0x98);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0xa0);
  }
  return iVar3;
}



// FUNCTION 1473dfe14 FUN_1473dfe14 body=53 status=ok
// SIG undefined FUN_1473dfe14(void)

longlong FUN_1473dfe14(longlong param_1,int param_2)

{
  FUN_1473d23e8(param_1 + 0xa0);
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dfe6c FUN_1473dfe6c body=48 status=ok
// SIG undefined FUN_1473dfe6c(void)

int FUN_1473dfe6c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0x98);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0xa0);
  }
  return iVar3;
}



// FUNCTION 1473dfea8 FUN_1473dfea8 body=53 status=ok
// SIG undefined FUN_1473dfea8(void)

longlong FUN_1473dfea8(longlong param_1,int param_2)

{
  FUN_1473d23e8(param_1 + 0xa0);
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dff00 FUN_1473dff00 body=48 status=ok
// SIG undefined FUN_1473dff00(void)

int FUN_1473dff00(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0x98);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0xa0);
  }
  return iVar3;
}



// FUNCTION 1473dff3c FUN_1473dff3c body=53 status=ok
// SIG undefined FUN_1473dff3c(void)

longlong FUN_1473dff3c(longlong param_1,int param_2)

{
  FUN_1473d23e8(param_1 + 0xa0);
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473dff94 FUN_1473dff94 body=48 status=ok
// SIG undefined FUN_1473dff94(void)

int FUN_1473dff94(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0x98);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0xa0);
  }
  return iVar3;
}



// FUNCTION 1473dffd0 FUN_1473dffd0 body=206 status=ok
// SIG undefined FUN_1473dffd0(void)

longlong FUN_1473dffd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
    lVar4 = param_1 + 0x228;
    if (*(longlong *)(param_1 + 0x230) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x230);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x238) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473dfffd;
          lVar2 = plVar1[1];
          lVar4 = lVar2 + -0xa8;
          if (lVar2 == 0) {
            lVar4 = 0;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
      goto LAB_1473dffff;
    }
  }
LAB_1473dfffd:
  lVar4 = 0;
LAB_1473dffff:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return lVar4;
}



// FUNCTION 1473e009e FUN_1473e009e body=215 status=ok
// SIG undefined FUN_1473e009e(void)

undefined8 *
FUN_1473e009e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xc;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *(undefined4 *)(param_1 + 2) = 0;
  memset(param_1 + 3,0,0x84);
  *(undefined1 *)((longlong)param_1 + 0x9c) = 5;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x9e) = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14a36bba0;
  param_1[0x15] = &PTR_LAB_14a36bbb0;
  FUN_1431b4220(param_1 + 0x15,param_2,5,param_4,param_5,param_6,param_1 + 0xf);
  *param_1 = &PTR_FUN_14a36bba0;
  param_1[0x15] = &PTR_LAB_14a36bbb0;
  FUN_1473df926(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 1473e0176 FUN_1473e0176 body=53 status=ok
// SIG undefined FUN_1473e0176(void)

longlong FUN_1473e0176(longlong param_1,int param_2)

{
  FUN_1473d23e8(param_1 + 0xa8);
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473e01ce FUN_1473e01ce body=48 status=ok
// SIG undefined FUN_1473e01ce(void)

int FUN_1473e01ce(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0xa0);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0xa8);
  }
  return iVar3;
}



// FUNCTION 1473e020a FUN_1473e020a body=206 status=ok
// SIG undefined FUN_1473e020a(void)

longlong FUN_1473e020a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x30));
  if (*(int *)(lVar2 + 0x248) != *(int *)(lVar2 + 0x274)) {
    lVar5 = lVar2 + 0x278;
    if (*(longlong *)(lVar2 + 0x280) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x280);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x288) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      lVar5 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x240) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473e0237;
          lVar3 = plVar1[1];
          lVar5 = lVar3 + -0xb0;
          if (lVar3 == 0) {
            lVar5 = 0;
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
      goto LAB_1473e0239;
    }
  }
LAB_1473e0237:
  lVar5 = 0;
LAB_1473e0239:
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x30));
  return lVar5;
}



// FUNCTION 1473e02d8 FUN_1473e02d8 body=269 status=ok
// SIG undefined FUN_1473e02d8(void)

undefined8 *
FUN_1473e02d8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xb;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *(undefined4 *)(param_1 + 2) = 0;
  memset(param_1 + 3,0,0x84);
  *(char *)((longlong)param_1 + 0x9c) = (char)param_3;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x9e) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *param_1 = &PTR_FUN_14a36bbd0;
  param_1[0x16] = &PTR_FUN_14a36bbe0;
  FUN_1431b4220(param_1 + 0x16,param_2,param_3,param_5,param_6,param_7,param_1 + 0xf);
  *param_1 = &PTR_FUN_14a36bbd0;
  param_1[0x16] = &PTR_FUN_14a36bbe0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  FUN_1473df926(param_1 + 2,param_4);
  return param_1;
}



// FUNCTION 1473e03e6 FUN_1473e03e6 body=38 status=ok
// SIG undefined FUN_1473e03e6(void)

undefined8 FUN_1473e03e6(undefined8 param_1,int param_2)

{
  FUN_1473e048e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473e040c FUN_1473e040c body=48 status=ok
// SIG undefined FUN_1473e040c(void)

longlong FUN_1473e040c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_1473e048e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473e0452 FUN_1473e0452 body=48 status=ok
// SIG undefined FUN_1473e0452(void)

int FUN_1473e0452(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0xa8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0xb0);
  }
  return iVar3;
}



// FUNCTION 1473e048e FUN_1473e048e body=96 status=ok
// SIG undefined FUN_1473e048e(void)

void FUN_1473e048e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a36bbd0;
  param_1[0x16] = &PTR_FUN_14a36bbe0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1473d23e8(param_1 + 0x16);
  FUN_140540150(param_1);
  return;
}



// FUNCTION 1473e04ee FUN_1473e04ee body=206 status=ok
// SIG undefined FUN_1473e04ee(void)

longlong FUN_1473e04ee(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x38));
  if (*(int *)(lVar2 + 0x298) != *(int *)(lVar2 + 0x2c4)) {
    lVar5 = lVar2 + 0x2c8;
    if (*(longlong *)(lVar2 + 0x2d0) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x2d0);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x2d8) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      lVar5 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x290) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473e051b;
          lVar3 = plVar1[1];
          lVar5 = lVar3 + -0xb0;
          if (lVar3 == 0) {
            lVar5 = 0;
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
      goto LAB_1473e051d;
    }
  }
LAB_1473e051b:
  lVar5 = 0;
LAB_1473e051d:
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x38));
  return lVar5;
}



// FUNCTION 1473e05bc FUN_1473e05bc body=206 status=ok
// SIG undefined FUN_1473e05bc(void)

longlong FUN_1473e05bc(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x48));
  if (*(int *)(lVar2 + 0x338) != *(int *)(lVar2 + 0x364)) {
    lVar5 = lVar2 + 0x368;
    if (*(longlong *)(lVar2 + 0x370) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x370);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x378) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      lVar5 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x330) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473e05e9;
          lVar3 = plVar1[1];
          lVar5 = lVar3 + -0xb0;
          if (lVar3 == 0) {
            lVar5 = 0;
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
      goto LAB_1473e05eb;
    }
  }
LAB_1473e05e9:
  lVar5 = 0;
LAB_1473e05eb:
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x48));
  return lVar5;
}



// FUNCTION 1473e068a FUN_1473e068a body=206 status=ok
// SIG undefined FUN_1473e068a(void)

longlong FUN_1473e068a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x40));
  if (*(int *)(lVar2 + 0x2e8) != *(int *)(lVar2 + 0x314)) {
    lVar5 = lVar2 + 0x318;
    if (*(longlong *)(lVar2 + 800) != 0) {
      lVar5 = *(longlong *)(lVar2 + 800);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x328) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      lVar5 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x2e0) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473e06b7;
          lVar3 = plVar1[1];
          lVar5 = lVar3 + -0xb0;
          if (lVar3 == 0) {
            lVar5 = 0;
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
      goto LAB_1473e06b9;
    }
  }
LAB_1473e06b7:
  lVar5 = 0;
LAB_1473e06b9:
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x40));
  return lVar5;
}



// FUNCTION 1473e0758 FUN_1473e0758 body=132 status=ok
// SIG undefined FUN_1473e0758(void)

void FUN_1473e0758(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473e07de FUN_1473e07de body=295 status=ok
// SIG undefined FUN_1473e07de(void)

undefined4 * FUN_1473e07de(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473e0906(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  lVar8 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_1473e09ec(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
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
      local_38[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1473d078e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e0906 FUN_1473e0906 body=230 status=ok
// SIG undefined FUN_1473e0906(void)

int * FUN_1473e0906(longlong *param_1,int *param_2)

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



// FUNCTION 1473e09ec FUN_1473e09ec body=171 status=ok
// SIG undefined FUN_1473e09ec(void)

undefined8 FUN_1473e09ec(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
        piVar2 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar2 == *param_3) {
          if (*(longlong *)(piVar2 + 2) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(piVar2 + 2) + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *piVar2 = *param_3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_1473e0a98(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar2[4];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473e0a98 FUN_1473e0a98 body=114 status=ok
// SIG undefined FUN_1473e0a98(void)

void FUN_1473e0a98(longlong *param_1,int param_2)

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



// FUNCTION 1473e0b0a FUN_1473e0b0a body=125 status=ok
// SIG undefined FUN_1473e0b0a(void)

void FUN_1473e0b0a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 3,4);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,8,4);
  return;
}



// FUNCTION 1473e0b88 FUN_1473e0b88 body=284 status=ok
// SIG undefined FUN_1473e0b88(void)

undefined4 * FUN_1473e0b88(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473e0ca6(local_40);
  bVar1 = *param_2;
  *local_38 = bVar1;
  local_38[4] = 0xff;
  local_38[5] = 0xff;
  local_38[6] = 0xff;
  local_38[7] = 0xff;
  local_44 = local_40[0];
  cVar4 = FUN_1473e0db4(bVar1,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar7 = DAT_14ca78a00 - DAT_14ca78a2c;
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= DAT_14ca78a40)) {
      uVar7 = DAT_14ca78a40 - 1U & (uint)bVar1;
      *(uint *)(local_38 + 8) = uVar7;
      puVar6 = DAT_14ca78a38;
      if (DAT_14ca78a38 == (undefined *)0x0) {
        puVar6 = &DAT_14ca78a30;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar6 + (ulonglong)(DAT_14ca78a40 - 1U & uVar7) * 4);
      puVar6 = DAT_14ca78a38;
      if (DAT_14ca78a38 == (undefined *)0x0) {
        puVar6 = &DAT_14ca78a30;
      }
      *(undefined4 *)(puVar6 + (ulonglong)(DAT_14ca78a40 - 1U & uVar7) * 4) = local_44;
    }
    else {
      DAT_14ca78a40 = iVar8;
      FUN_1473e0eba();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e0ca6 FUN_1473e0ca6 body=270 status=ok
// SIG undefined FUN_1473e0ca6(void)

int * FUN_1473e0ca6(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca78a28;
  iVar4 = DAT_14ca78a00;
  if (DAT_14ca78a2c == 0) {
    iVar2 = DAT_14ca78a00 + 1;
    bVar7 = DAT_14ca78a04 == DAT_14ca78a00;
    DAT_14ca78a00 = iVar2;
    if (bVar7) {
      FUN_1447cc1b4(&DAT_14ca789f8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca78a08,1);
    puVar3 = DAT_14ca78a18;
    if (DAT_14ca78a18 == (undefined *)0x0) {
      puVar3 = &DAT_14ca78a08;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14ca78a28;
    DAT_14ca78a28 = *(int *)(DAT_14ca789f8 + 4 + lVar6 * 0xc);
    DAT_14ca78a2c = DAT_14ca78a2c + -1;
    iVar4 = iVar2;
    if (DAT_14ca78a2c != 0) {
      *(undefined4 *)(DAT_14ca789f8 + (longlong)DAT_14ca78a28 * 0xc) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca78a08;
  if (DAT_14ca78a18 != (undefined *)0x0) {
    puVar3 = DAT_14ca78a18;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0xc + DAT_14ca789f8;
  return param_1;
}



// FUNCTION 1473e0db4 FUN_1473e0db4 body=134 status=ok
// SIG undefined FUN_1473e0db4(void)

undefined8 FUN_1473e0db4(uint param_1,char *param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if ((DAT_14ca78a00 - DAT_14ca78a2c != 1) && (DAT_14ca78a00 != DAT_14ca78a2c)) {
    puVar2 = &DAT_14ca78a30;
    if (DAT_14ca78a38 != (undefined *)0x0) {
      puVar2 = DAT_14ca78a38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14ca78a40 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(char *)(DAT_14ca789f8 + (longlong)iVar1 * 0xc) == *param_2) {
          FUN_1473e0e3a(*param_3);
          *param_3 = iVar1;
          return 1;
        }
        iVar1 = *(int *)(DAT_14ca789f8 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473e0e3a FUN_1473e0e3a body=128 status=ok
// SIG undefined FUN_1473e0e3a(void)

void FUN_1473e0e3a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca789f8;
  if (DAT_14ca78a2c != 0) {
    *(int *)(DAT_14ca789f8 + (longlong)DAT_14ca78a28 * 0xc) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0xc) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca78a2c) {
    iVar4 = DAT_14ca78a28;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0xc) = iVar4;
  DAT_14ca78a2c = DAT_14ca78a2c + 1;
  puVar3 = &DAT_14ca78a08;
  if (DAT_14ca78a18 != (undefined *)0x0) {
    puVar3 = DAT_14ca78a18;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca78a28 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473e0eba FUN_1473e0eba body=459 status=ok
// SIG undefined FUN_1473e0eba(void)

void FUN_1473e0eba(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca78a38 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca78a38,0,0,4);
  }
  uVar7 = DAT_14ca78a40;
  uVar2 = local_50;
  if (DAT_14ca78a40 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14ca78a30,0,DAT_14ca78a40,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14ca78a38;
        if (DAT_14ca78a38 == (undefined *)0x0) {
          puVar5 = &DAT_14ca78a30;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14ca78a40 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca78a08;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca78a20 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca789f8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar7 = DAT_14ca78a40 - 1 & (uint)*(byte *)(lVar1 + lVar4 * 0xc);
        *(uint *)(lVar1 + 8 + lVar4 * 0xc) = uVar7;
        puVar5 = DAT_14ca78a38;
        if (DAT_14ca78a38 == (undefined *)0x0) {
          puVar5 = &DAT_14ca78a30;
        }
        *(undefined4 *)(lVar1 + 4 + lVar4 * 0xc) =
             *(undefined4 *)(puVar5 + (ulonglong)(DAT_14ca78a40 - 1 & uVar7) * 4);
        puVar5 = DAT_14ca78a38;
        if (DAT_14ca78a38 == (undefined *)0x0) {
          puVar5 = &DAT_14ca78a30;
        }
        *(int *)(puVar5 + (ulonglong)(DAT_14ca78a40 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473e1086 FUN_1473e1086 body=125 status=ok
// SIG undefined FUN_1473e1086(void)

void FUN_1473e1086(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 2,4);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 2)) {
    uVar3 = uVar2 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,4,4);
  return;
}



// FUNCTION 1473e1104 FUN_1473e1104 body=132 status=ok
// SIG undefined FUN_1473e1104(void)

void FUN_1473e1104(longlong param_1,int param_2)

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



// FUNCTION 1473e118a FUN_1473e118a body=124 status=ok
// SIG undefined FUN_1473e118a(void)

void FUN_1473e118a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 2,0);
      iVar3 = (int)(uVar4 >> 2);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1473e1208(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473e1208 FUN_1473e1208 body=132 status=ok
// SIG undefined FUN_1473e1208(void)

void FUN_1473e1208(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,4);
  return;
}



// FUNCTION 1473e128c FUN_1473e128c body=132 status=ok
// SIG undefined FUN_1473e128c(void)

longlong FUN_1473e128c(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1473e1312();
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x20;
    if (DAT_14ca78ae0 + lVar2 != 0) goto LAB_1473e12c5;
  }
  local_28 = param_2;
  FUN_1473e138a(&local_1c,param_1);
  lVar2 = (longlong)local_1c << 5;
LAB_1473e12c5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 + DAT_14ca78ae0 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e1312 FUN_1473e1312 body=120 status=ok
// SIG undefined FUN_1473e1312(void)

int FUN_1473e1312(uint param_1,longlong *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14ca78ae8 != DAT_14ca78b14) {
    puVar2 = &DAT_14ca78b18;
    if (DAT_14ca78b20 != (undefined *)0x0) {
      puVar2 = DAT_14ca78b20;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14ca78b28 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1 * 0x20;
        if (((*(longlong *)(DAT_14ca78ae0 + lVar3) == *param_2) &&
            (*(int *)(DAT_14ca78ae0 + lVar3 + 8) == (int)param_2[1])) &&
           (*(int *)(DAT_14ca78ae0 + lVar3 + 0xc) == *(int *)((longlong)param_2 + 0xc))) {
          return iVar1;
        }
        iVar1 = *(int *)(DAT_14ca78ae0 + 0x18 + lVar3);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473e138a FUN_1473e138a body=293 status=ok
// SIG undefined FUN_1473e138a(void)

undefined4 * FUN_1473e138a(undefined4 *param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473e14b0(local_48);
  puVar1 = (undefined4 *)*param_3;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar6 = FUN_1473e15be(param_2,local_40,local_48);
  if (cVar6 == '\0') {
    uVar7 = DAT_14ca78ae8 - DAT_14ca78b14;
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= DAT_14ca78b28)) {
      param_2 = DAT_14ca78b28 - 1U & param_2;
      local_40[7] = param_2;
      puVar8 = DAT_14ca78b20;
      if (DAT_14ca78b20 == (undefined *)0x0) {
        puVar8 = &DAT_14ca78b18;
      }
      local_40[6] = *(undefined4 *)
                     (puVar8 + ((longlong)DAT_14ca78b28 - 1U & (longlong)(int)param_2) * 4);
      puVar8 = DAT_14ca78b20;
      if (DAT_14ca78b20 == (undefined *)0x0) {
        puVar8 = &DAT_14ca78b18;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14ca78b28 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14ca78b28 = iVar10;
      FUN_1473e169e();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e14b0 FUN_1473e14b0 body=269 status=ok
// SIG undefined FUN_1473e14b0(void)

int * FUN_1473e14b0(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca78b10;
  iVar4 = DAT_14ca78ae8;
  if (DAT_14ca78b14 == 0) {
    iVar2 = DAT_14ca78ae8 + 1;
    bVar7 = DAT_14ca78aec == DAT_14ca78ae8;
    DAT_14ca78ae8 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14ca78ae0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca78af0,1);
    puVar3 = DAT_14ca78b00;
    if (DAT_14ca78b00 == (undefined *)0x0) {
      puVar3 = &DAT_14ca78af0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14ca78b10;
    DAT_14ca78b10 = *(int *)(DAT_14ca78ae0 + 4 + lVar6 * 0x20);
    DAT_14ca78b14 = DAT_14ca78b14 + -1;
    iVar4 = iVar2;
    if (DAT_14ca78b14 != 0) {
      *(undefined4 *)(DAT_14ca78ae0 + (longlong)DAT_14ca78b10 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca78af0;
  if (DAT_14ca78b00 != (undefined *)0x0) {
    puVar3 = DAT_14ca78b00;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14ca78ae0;
  return param_1;
}



// FUNCTION 1473e15be FUN_1473e15be body=95 status=ok
// SIG undefined FUN_1473e15be(void)

undefined8 FUN_1473e15be(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  
  if ((DAT_14ca78ae8 - DAT_14ca78b14 != 1) &&
     (iVar7 = FUN_1473e1312(), lVar6 = DAT_14ca78ae0, iVar7 != -1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(DAT_14ca78ae0 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_2 + 4);
    puVar1 = (undefined4 *)(lVar6 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1473e161e(*param_3);
    *param_3 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1473e161e FUN_1473e161e body=128 status=ok
// SIG undefined FUN_1473e161e(void)

void FUN_1473e161e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca78ae0;
  if (DAT_14ca78b14 != 0) {
    *(int *)(DAT_14ca78ae0 + (longlong)DAT_14ca78b10 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca78b14) {
    iVar4 = DAT_14ca78b10;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14ca78b14 = DAT_14ca78b14 + 1;
  puVar3 = &DAT_14ca78af0;
  if (DAT_14ca78b00 != (undefined *)0x0) {
    puVar3 = DAT_14ca78b00;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca78b10 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}


