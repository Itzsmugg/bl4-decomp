// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e2f5f4 FUN_140e2f5f4 body=155 status=ok
// SIG undefined FUN_140e2f5f4(void)

void FUN_140e2f5f4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*param_2 != 0) && (uVar1 = *(uint *)(param_2 + 1), -1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)(param_1 + 0x138))) {
    lVar2 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x130);
    }
    if ((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      lVar2 = FUN_14775f149(param_1 + -0x28);
      local_20 = (undefined4)param_2[1];
      local_28 = *param_2;
      FUN_147024d16(lVar2 + 0x28,param_1 + -0x28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e2f690 FUN_140e2f690 body=348 status=ok
// SIG undefined FUN_140e2f690(void)

void FUN_140e2f690(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar12 = (ulonglong)param_2 * 0x170;
    bVar1 = *(byte *)(lVar2 + 0x68 + lVar12);
    *(byte *)(lVar2 + 0x68 + lVar12) = bVar1 & 0xfd;
    lVar7 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x150));
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0xa0) + lVar12 + 0x58);
    lVar3 = *plVar11;
    if (lVar3 != 0) {
      uVar8 = (uint)lVar3;
      if ((int)(uVar8 & 0xffffff) < *(int *)(lVar7 + 0x10)) {
        lVar9 = lVar7 + 0x18;
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          lVar9 = *(longlong *)(lVar7 + 0x28);
        }
        if ((*(uint *)(lVar9 + (ulonglong)((uVar8 & 0xffffff) >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0
           ) {
          lVar9 = *(longlong *)(lVar7 + 8);
          lVar10 = (ulonglong)(uVar8 & 0xffffff) * 0x70;
          if (((lVar9 + lVar10 != 0) && (*(longlong *)(lVar9 + 0x60 + lVar10) == lVar3)) &&
             (*(char *)(lVar9 + 1 + lVar10) != '\x04')) {
            FUN_1405a424c(lVar7);
          }
        }
      }
    }
    *plVar11 = 0;
    if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x700))();
      if (cVar6 != '\0') {
        uVar4 = *(ulonglong *)(lVar2 + lVar12 + 0x60);
        if (uVar4 != 0) {
          uVar5 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          if (uVar5 < 8) {
            FUN_140dc8f42(param_1);
            return;
          }
        }
        if ((bVar1 & 2) == 0) {
          FUN_140e2f7ec(param_1,param_2);
          return;
        }
        FUN_140dc8f42(param_1,0);
        FUN_140dc8e1a(param_1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e2f7ec FUN_140e2f7ec body=161 status=ok
// SIG undefined FUN_140e2f7ec(void)

void FUN_140e2f7ec(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((((*(byte *)(param_1 + 0x80) & 1) != 0) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0xa8))) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x58 + (ulonglong)param_2 * 0x170) == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20 + (ulonglong)param_2 * 0x170);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) {
        return;
      }
      cVar2 = FUN_1403ae2fa(param_1,0,param_2);
      if ((cVar2 != '\0') &&
         (((*(byte *)(param_1 + 0x15c) & 3) != 1 || (*(float *)(lVar1 + 0xc54) <= 0.0)))) {
        FUN_140e2f88e(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e2f88e FUN_140e2f88e body=71 status=ok
// SIG undefined FUN_140e2f88e(void)

void FUN_140e2f88e(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_140e2f8d6();
  if ((char)param_1[0x2f] != '\x03') {
    uVar1 = FUN_14477b072(param_1,DAT_14cb938f8);
                    /* WARNING: Could not recover jumptable at 0x000140e2f8cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
    return;
  }
  return;
}



// FUNCTION 140e2f8d6 FUN_140e2f8d6 body=151 status=ok
// SIG undefined FUN_140e2f8d6(void)

void FUN_140e2f8d6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  
  lVar1 = param_1[0x1ac];
  if ((((lVar1 != DAT_14cb95120) && (lVar1 != DAT_14cb94e38)) && (lVar1 != DAT_14cb94e50)) &&
     (0 < (int)param_1[0x181])) {
    uVar3 = 0;
    cVar2 = FUN_140cc66d2(param_1,0);
    bVar4 = 0;
    if (cVar2 == '\0') {
      bVar4 = 0;
      do {
        bVar4 = bVar4 + 1;
        uVar3 = (uint)bVar4;
        if ((int)param_1[0x181] <= (int)uVar3) {
          return;
        }
        cVar2 = FUN_140cc66d2(param_1,bVar4);
      } while (cVar2 == '\0');
    }
                    /* WARNING: Could not recover jumptable at 0x000140e2f96a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x878))
              (param_1,bVar4,(*(uint *)(param_1 + 0x182) >> (uVar3 & 0x1f) & 1) == 0);
    return;
  }
  return;
}



// FUNCTION 140e2f986 FUN_140e2f986 body=38 status=ok
// SIG undefined FUN_140e2f986(void)

undefined8 FUN_140e2f986(undefined8 param_1,int param_2)

{
  FUN_140e2f9ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e2f9ac FUN_140e2f9ac body=274 status=ok
// SIG undefined FUN_140e2f9ac(void)

void FUN_140e2f9ac(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14be82c20;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1400bc89a(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14062b6e8(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14062b789(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14062b72a(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14062b6b2(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[3];
  if (lVar1 == 0) {
    return;
  }
  FUN_14062c13a(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 140e2facc FUN_140e2facc body=1123 status=ok
// SIG undefined FUN_140e2facc(void)

void FUN_140e2facc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  if (lVar9 == 0) {
LAB_140e2ff05:
    lVar9 = 0;
  }
  else {
    if (DAT_14c949118 == 0) {
      local_48 = FUN_140631fbe;
      lVar3 = FUN_1446f8604(param_1,0x250,8,1);
      DAT_14c949118 = lVar3;
      FUN_1446f470e(&local_40,L"Class",1);
      local_68 = &LAB_146891e90;
      local_70 = (code *)&LAB_146273097;
      local_80 = L"Engine";
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,199);
      local_88 = 0x20;
      local_90 = 0x10000000;
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,8);
      local_60 = &local_48;
      FUN_14574b4b2(lVar3);
      DAT_14c949118 = lVar3;
      uVar4 = FUN_144a7a812();
      lVar3 = DAT_14c949118;
      uVar5 = FUN_1449e2fb2();
      local_98 = L"Class";
      FUN_14574b446(uVar5,lVar3,uVar4,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_140e2ff05;
  }
  local_48 = (code *)0x0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_48);
  if (((local_48 != (code *)0x0) && (lVar9 != 0)) && ((*(byte *)(lVar9 + 0xd5) & 0x40) != 0)) {
    lVar3 = *(longlong *)(local_48 + 0x10);
    if (DAT_14c950d78 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468b50ee;
      local_70 = FUN_1427f23a3;
      local_78 = L"Engine";
      local_80 = (wchar_t *)0x0;
      local_88 = CONCAT44(local_88._4_4_,0x10004001);
      local_90 = 8;
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
    }
    pcVar8 = local_48;
    if ((lVar3 != 0) && (DAT_14c950d78 != lVar9)) {
      do {
        if (0 < (longlong)*(int *)(lVar3 + 0x1e0)) {
          lVar6 = 0;
          do {
            lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x1d8) + lVar6);
            if (((lVar10 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                == lVar9 + 0x30)) {
              if ((local_48 == (code *)0x0) || (DAT_14c950c29 == '\0')) {
                *param_3 = (longlong)local_48;
                if (local_48 == (code *)0x0) {
                  param_3[1] = 0;
                  pcVar8 = (code *)0x0;
                }
              }
              else {
                FUN_1456cec3c(local_48);
                *param_3 = (longlong)pcVar8;
                pcVar8 = local_48;
              }
              if ((*(byte *)(lVar9 + 0xd5) & 0x40) != 0) {
                if (DAT_14c950d78 == 0) {
                  local_60 = &local_40;
                  local_40 = FUN_1449e2820;
                  local_50 = FUN_14081d0ea;
                  local_58 = FUN_14081d0ea;
                  local_68 = &LAB_1468b50ee;
                  local_70 = FUN_1427f23a3;
                  local_78 = L"Engine";
                  local_80 = (wchar_t *)0x0;
                  local_88 = CONCAT44(local_88._4_4_,0x10004001);
                  local_90 = 8;
                  local_98 = (wchar_t *)CONCAT44(local_98._4_4_,0x28);
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
                }
                if (DAT_14c950d78 != lVar9) {
                  lVar3 = *(longlong *)(pcVar8 + 0x10);
                  if ((*(byte *)(lVar9 + 0xd4) & 0x80) == 0) {
                    cVar2 = FUN_144a7ff9e();
                    pcVar7 = (code *)0x0;
                    if (cVar2 != '\0') {
                      pcVar7 = pcVar8;
                    }
                    goto LAB_140e2fcb6;
                  }
                  if (lVar3 != 0) goto LAB_140e2fc55;
                }
              }
              pcVar7 = (code *)0x0;
              goto LAB_140e2fcb6;
            }
            lVar6 = lVar6 + 0x10;
          } while ((longlong)*(int *)(lVar3 + 0x1e0) * 0x10 != lVar6);
        }
        lVar3 = *(longlong *)(lVar3 + 0x40);
      } while (lVar3 != 0);
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
LAB_140e2fcba:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140e2fc55:
  do {
    if (0 < (longlong)*(int *)(lVar3 + 0x1e0)) {
      lVar6 = *(longlong *)(lVar3 + 0x1d8);
      lVar10 = 0;
      do {
        if (*(char *)(lVar6 + 0xc + lVar10) == '\0') {
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar6 + lVar10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + lVar10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            pcVar7 = pcVar8 + *(int *)(lVar6 + 8 + lVar10);
            goto LAB_140e2fc9a;
          }
        }
        lVar10 = lVar10 + 0x10;
      } while ((longlong)*(int *)(lVar3 + 0x1e0) * 0x10 != lVar10);
    }
    pcVar7 = (code *)0x0;
LAB_140e2fc9a:
  } while ((pcVar7 == (code *)0x0) && (lVar3 = *(longlong *)(lVar3 + 0x40), lVar3 != 0));
LAB_140e2fcb6:
  param_3[1] = (longlong)pcVar7;
  goto LAB_140e2fcba;
}



// FUNCTION 140e2ff30 FUN_140e2ff30 body=536 status=ok
// SIG undefined FUN_140e2ff30(void)

void FUN_140e2ff30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_220;
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  undefined8 auStack_e0 [12];
  undefined4 auStack_80 [12];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((undefined *)*param_4 == &DAT_14caa7880) {
    memset(local_e8,0,0x98);
    FUN_140e3014a();
    auStack_e0[DAT_14caa61c0] = &DAT_14caa6178;
    auStack_80[DAT_14caa61c0] = 0;
    FUN_140e30266();
    auStack_e0[DAT_14caa62e8] = &DAT_14caa62a0;
    auStack_80[DAT_14caa62e8] = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    lStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    cVar1 = FUN_14007744c(param_3,local_e8,*param_4);
    if (cVar1 != '\0') {
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      uStack_210 = 0;
      if (local_148 != 0) {
        local_218 = local_148;
        uStack_210 = local_158;
      }
      if (lStack_130 != 0) {
        local_208 = lStack_130;
        uStack_200 = local_158;
      }
      local_220 = FUN_141481c6c(param_5);
      uVar2 = FUN_144a875de(param_3);
      local_1c0 = 0;
      local_1c8 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 1;
      FUN_1416491c9(2,1,&local_1c8);
      local_238 = *(undefined4 *)(param_1 + 8);
      local_230 = param_6;
      local_248 = &local_218;
      local_240 = uVar2;
      FUN_143260a3c(param_4,param_3,param_1 + 0x40,&local_1c8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3014a FUN_140e3014a body=284 status=ok
// SIG undefined FUN_140e3014a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140e3014a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa6220) {
    FUN_144b3d300(&DAT_14caa6220);
    if (DAT_14caa6220 == -1) {
      FUN_1457b6470();
      FUN_140db5666(&DAT_14caa6178,2,&DAT_14caa6110,L"FLandscapeGrassWeightVS",
                    L"/Engine/Private/LandscapeGrassWeight.usf",L"VSMain",0,1,FUN_147461468,
                    FUN_147461440,&LAB_14074483c,&LAB_14746143c,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14caa6178 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143259ccb);
      _Init_thread_footer(&DAT_14caa6220);
    }
  }
  return &DAT_14caa6178;
}



// FUNCTION 140e30266 FUN_140e30266 body=284 status=ok
// SIG undefined FUN_140e30266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140e30266(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa6348) {
    FUN_144b3d300(&DAT_14caa6348);
    if (DAT_14caa6348 == -1) {
      FUN_1457b6626();
      FUN_140db5666(&DAT_14caa62a0,2,&DAT_14caa6238,L"FLandscapeGrassWeightPS",
                    L"/Engine/Private/LandscapeGrassWeight.usf",L"PSMain",3,1,FUN_14746152c,
                    FUN_147461504,&LAB_14179248a,&LAB_147461500,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14caa62a0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143259cd7);
      _Init_thread_footer(&DAT_14caa6348);
    }
  }
  return &DAT_14caa62a0;
}



// FUNCTION 140e3038e FUN_140e3038e body=1054 status=ok
// SIG undefined FUN_140e3038e(void)

undefined8 * FUN_140e3038e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  FUN_140e307ac();
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb4] = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *param_1 = &PTR_FUN_14b317950;
  param_1[0x72] = &PTR_FUN_14b318000;
  param_1[0x73] = &PTR_FUN_14b318080;
  param_1[0x74] = &PTR_FUN_14b3180f0;
  param_1[0x75] = &PTR_FUN_14b318118;
  param_1[0x76] = &PTR_FUN_14b318130;
  param_1[0xa4] = &PTR_FUN_14b318160;
  param_1[0xa5] = &PTR_FUN_14b3181e0;
  param_1[0xa6] = &PTR_FUN_14b318280;
  param_1[0xad] = &PTR_FUN_14b318330;
  param_1[0xae] = &PTR_FUN_14b3183a0;
  param_1[0xb2] = &PTR_FUN_14b3183c0;
  param_1[0xb3] = &PTR_FUN_14b3183e0;
  param_1[0xb6] = &PTR_FUN_14b318420;
  param_1[0xb7] = &PTR_FUN_14b318490;
  param_1[0xbe] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 2;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  *(undefined4 *)(param_1 + 0xda) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0x200000000;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x714) = 0;
  *(undefined8 *)((longlong)param_1 + 0x719) = 0;
  *(undefined2 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x79c) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = param_1 + 0xf6;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x104] = DAT_14c846520;
  uVar2 = DAT_14c846518;
  param_1[0x102] = DAT_14c846510;
  param_1[0x103] = uVar2;
  *(undefined2 *)(param_1 + 0x105) = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 2;
  *(undefined8 *)((longlong)param_1 + 0x844) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x85c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x864) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0;
  *(undefined8 *)((longlong)param_1 + 0x87c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x894) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x8fc) = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 1;
  param_1[0x127] = 0xbf80000000000000;
  *(undefined4 *)(param_1 + 0x128) = 0xbf800000;
  uVar2 = DAT_14c8464e8;
  param_1[0x129] = DAT_14c8464e0;
  param_1[0x12a] = uVar2;
  param_1[299] = DAT_14c8464f0;
  param_1[300] = 0;
  *(undefined1 *)((longlong)param_1 + 0x96a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x971) = 0;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x134) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0xffffffffffffffff;
  param_1[0x137] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar1 = param_1 + 0x130;
    param_1[0x133] = &DAT_14cb841c0;
    param_1[0x132] = param_1;
    lVar4 = DAT_14cb841c0;
    while( true ) {
      param_1[0x130] = lVar4;
      LOCK();
      lVar3 = *(longlong *)param_1[0x133];
      bVar7 = lVar4 == lVar3;
      if (bVar7) {
        *(longlong *)param_1[0x133] = (longlong)plVar1;
        lVar3 = lVar4;
      }
      UNLOCK();
      if (bVar7) break;
      param_1[0x130] = lVar3;
      lVar4 = *(longlong *)param_1[0x133];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  *(byte *)(param_1 + 0x12d) = *(byte *)(param_1 + 0x12d) & 0x80;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xf7;
  *(byte *)((longlong)param_1 + 0x969) = *(byte *)((longlong)param_1 + 0x969) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0xbf800000;
  for (lVar4 = *param_2; (lVar4 != 0 && ((*(uint *)(lVar4 + 8) & 0x30) == 0));
      lVar4 = *(longlong *)(lVar4 + 0x20)) {
  }
  return param_1;
}



// FUNCTION 140e307ac FUN_140e307ac body=337 status=ok
// SIG undefined FUN_140e307ac(void)

undefined8 * FUN_140e307ac(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14b303020;
  param_1[0x72] = &PTR_FUN_14b3036c0;
  param_1[0x73] = &PTR_FUN_14b303740;
  param_1[0x74] = &PTR_FUN_14b3037b0;
  param_1[0x75] = &PTR_FUN_14b3037d8;
  param_1[0x76] = &PTR_FUN_14b3037f0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 2;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x94] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x95] = 0xf;
  *(undefined2 *)(param_1 + 0x96) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0xa3] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xe3 | 0xc;
  return param_1;
}



// FUNCTION 140e308fe FUN_140e308fe body=222 status=ok
// SIG undefined FUN_140e308fe(void)

void FUN_140e308fe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [36];
  int local_64;
  int *local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120) != 0) {
    FUN_140e309de(param_2,0);
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
      lVar4 = 0;
      do {
        iVar2 = (int)*(char *)(lVar1 + 0x10d + lVar4);
        if (iVar2 != -1) {
          local_58 = lVar1 + 0x10 + lVar4;
          local_64 = iVar2;
          local_60 = &local_64;
          FUN_140e30a4a(param_2,local_4c,&local_60,0);
        }
        lVar4 = lVar4 + 0x150;
      } while (lVar3 * 0x150 - lVar4 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e309de FUN_140e309de body=107 status=ok
// SIG undefined FUN_140e309de(void)

void FUN_140e309de(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140e30a2d:
      FUN_140e3131e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140e30f44(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140e30a2d;
  FUN_140e311c8(param_1);
  FUN_140e3131e(param_1,param_2);
  return;
}



// FUNCTION 140e30a4a FUN_140e30a4a body=883 status=ok
// SIG undefined FUN_140e30a4a(void)

int * FUN_140e30a4a(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  void *_Src;
  void *_Dst;
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_140e30e3a(param_1,iVar14);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar5 = iVar10 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar12 = iVar10 + 1;
    iVar16 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar16 = iVar10;
    }
    if (iVar16 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        if (iVar10 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar5 = iVar10;
        }
        else {
          uVar11 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar11) {
              uVar6 = uVar11;
            }
          }
          else {
            uVar6 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar13 >> 2);
          iVar12 = -0x20;
          if ((int)uVar11 <= iVar5) {
            iVar12 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar8,iVar5);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar5 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar5 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar8;
        }
        bVar9 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar10 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar7 = (longlong)iVar14;
    iVar10 = *(int *)(*param_1 + 4 + lVar7 * 0x110);
    *(int *)(param_1 + 6) = iVar10;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x110) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar10 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar10 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (void *)(*param_1 + lVar7 * 0x110);
  uVar2 = param_3[1];
  puVar1 = (uint *)(*param_1 + lVar7 * 0x110);
  *puVar1 = *(uint *)*param_3;
  FUN_140e30dbe(puVar1 + 2,uVar2);
  puVar1[0x42] = 0xffffffff;
  uVar11 = *puVar1;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar10 * 0x110);
        if (*(uint *)(*param_1 + (longlong)iVar10 * 0x110) == uVar11) {
          puVar3 = *(undefined8 **)((longlong)_Dst + 0xe8);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          FUN_140368b56((longlong)_Dst + 0x10);
          memmove(_Dst,_Src,0x108);
          FUN_1488c99ce(param_1,iVar14);
          cVar4 = '\x01';
          goto LAB_140e30bb3;
        }
        iVar10 = *(int *)((longlong)_Dst + 0x108);
      } while (iVar10 != -1);
    }
  }
  cVar4 = '\0';
  iVar10 = iVar14;
LAB_140e30bb3:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar6) {
      uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar11 = (int)param_1[9] - 1U & uVar11;
      *(uint *)((longlong)_Src + 0x10c) = uVar11;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x108) =
           *(undefined4 *)
            ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
           iVar10;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_140e30f44(param_1);
    }
  }
  *param_2 = iVar10;
  return param_2;
}



// FUNCTION 140e30dbe FUN_140e30dbe body=124 status=ok
// SIG undefined FUN_140e30dbe(void)

undefined4 * FUN_140e30dbe(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1406fd608(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x3e] = param_2[0x3e];
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined1 *)((longlong)param_1 + 0xfd) = *(undefined1 *)((longlong)param_2 + 0xfd);
  return param_1;
}



// FUNCTION 140e30e3a FUN_140e30e3a body=264 status=ok
// SIG undefined FUN_140e30e3a(void)

void FUN_140e30e3a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x110;
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



// FUNCTION 140e30f44 FUN_140e30f44 body=643 status=ok
// SIG undefined FUN_140e30f44(void)

void FUN_140e30f44(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140e30fa7;
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
LAB_140e30fa7:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
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
      lVar13 = (longlong)iVar12 * 0x110;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x10c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x108 + lVar13) =
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



// FUNCTION 140e311c8 FUN_140e311c8 body=341 status=ok
// SIG undefined FUN_140e311c8(void)

void FUN_140e311c8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10c + (longlong)iVar4 * 0x110) * 4) =
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



// FUNCTION 140e3131e FUN_140e3131e body=559 status=ok
// SIG undefined FUN_140e3131e(void)

void FUN_140e3131e(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar15 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_140e31421;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *param_1;
      puVar3 = *(undefined8 **)(lVar12 + 0xe8 + (longlong)iVar7 * 0x110);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      FUN_140368b56(lVar12 + (longlong)iVar7 * 0x110 + 0x10);
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar7 = (int)uVar15;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar8[lVar12] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar12 == lVar10) goto LAB_140e31421;
        }
        uVar15 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_140e31421:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e3154e(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar4 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140e3154e FUN_140e3154e body=112 status=ok
// SIG undefined FUN_140e3154e(void)

void FUN_140e3154e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x110)) {
      uVar2 = uVar1 / 0x110 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x110,8);
  }
  return;
}



// FUNCTION 140e315be FUN_140e315be body=40 status=ok
// SIG undefined FUN_140e315be(void)

undefined8 FUN_140e315be(undefined8 param_1,int param_2)

{
  FUN_140e315e6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e315e6 FUN_140e315e6 body=339 status=ok
// SIG undefined FUN_140e315e6(void)

void FUN_140e315e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2625a0;
  param_1[0x4a] = &PTR_FUN_14b2629a0;
  FUN_140e317fe(param_1[0x8a],*(undefined4 *)(param_1 + 0x8b));
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_140e31849(param_1[0x88],*(undefined4 *)(param_1 + 0x89));
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3176c(param_1[0x86],*(undefined4 *)(param_1 + 0x87));
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_140a0162e(param_1 + 0x7c);
  FUN_140e31739(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_140a015c8(param_1[0x78],*(undefined4 *)(param_1 + 0x79));
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_140e317b5(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_140731102(param_1);
  return;
}



// FUNCTION 140e31739 FUN_140e31739 body=51 status=ok
// SIG undefined FUN_140e31739(void)

void FUN_140e31739(longlong param_1,int param_2)

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



// FUNCTION 140e3176c FUN_140e3176c body=73 status=ok
// SIG undefined FUN_140e3176c(void)

void FUN_140e3176c(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e317b5 FUN_140e317b5 body=73 status=ok
// SIG undefined FUN_140e317b5(void)

void FUN_140e317b5(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 140e317fe FUN_140e317fe body=75 status=ok
// SIG undefined FUN_140e317fe(void)

void FUN_140e317fe(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e31849 FUN_140e31849 body=75 status=ok
// SIG undefined FUN_140e31849(void)

void FUN_140e31849(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e3189a FUN_140e3189a body=57 status=ok
// SIG undefined FUN_140e3189a(void)

void FUN_140e3189a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5abb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5abb8 = FUN_140002ddd(FUN_1464cbe46,uVar1,L"GbxBrainAspect_Health");
  }
  return;
}



// FUNCTION 140e318dc FUN_140e318dc body=3795 status=ok
// SIG undefined FUN_140e318dc(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140e318dc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  size_t sVar12;
  uint *puVar13;
  ulonglong *puVar14;
  char *pcVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  char *pcVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  ulonglong uVar33;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong local_120;
  int local_114;
  ulonglong local_110;
  ulonglong *local_108;
  undefined8 *local_100;
  ulonglong *local_f8;
  undefined4 *local_f0;
  longlong local_e8;
  uint *local_e0;
  ulonglong local_d8 [2];
  char *local_c8;
  int local_c0;
  undefined1 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  byte *pbVar8;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pbVar8 = (byte *)*param_2;
  if (pbVar8 != (byte *)0x0) {
    if ((*pbVar8 & 2) == 0) {
      plVar19 = &DAT_14c9a1288;
    }
    else {
      plVar19 = (longlong *)(*(longlong *)(pbVar8 + 8) + 0x18);
    }
    if ((int)plVar19[2] != *(int *)((longlong)plVar19 + 0x3c)) {
      plVar22 = plVar19 + 8;
      if ((longlong *)plVar19[9] != (longlong *)0x0) {
        plVar22 = (longlong *)plVar19[9];
      }
      iVar25 = *(int *)((longlong)plVar22 + (ulonglong)((int)plVar19[10] - 1U & DAT_14c9a60a0) * 4);
      if (iVar25 != -1) {
        do {
          lVar26 = *plVar19 + (longlong)iVar25 * 0x40;
          if (*(uint *)(*plVar19 + (longlong)iVar25 * 0x40) == DAT_14c9a60a0) {
            if ((((lVar26 != 0) &&
                 (puVar20 = (undefined8 *)(lVar26 + 0x28), puVar20 != (undefined8 *)0x0)) &&
                ((byte *)*puVar20 != (byte *)0x0)) && ((*(byte *)*puVar20 & 0x40) == 0))
            goto LAB_140e319a1;
            break;
          }
          iVar25 = *(int *)(lVar26 + 0x38);
        } while (iVar25 != -1);
      }
    }
  }
  puVar20 = &DAT_14c9a1308;
LAB_140e319a1:
  local_120 = param_1;
  if (((byte *)*puVar20 == (byte *)0x0) || ((~*(byte *)*puVar20 & 3) != 0)) {
    uVar10 = 0;
  }
  else {
    if (pbVar8 != (byte *)0x0) {
      if ((*pbVar8 & 2) == 0) {
        plVar19 = &DAT_14c9a1288;
      }
      else {
        plVar19 = (longlong *)(*(longlong *)(pbVar8 + 8) + 0x18);
      }
      if ((int)plVar19[2] != *(int *)((longlong)plVar19 + 0x3c)) {
        plVar22 = plVar19 + 8;
        if ((longlong *)plVar19[9] != (longlong *)0x0) {
          plVar22 = (longlong *)plVar19[9];
        }
        iVar25 = *(int *)((longlong)plVar22 + (ulonglong)((int)plVar19[10] - 1U & DAT_14c9a6078) * 4
                         );
        if (iVar25 != -1) {
          do {
            lVar26 = *plVar19 + (longlong)iVar25 * 0x40;
            if (*(uint *)(*plVar19 + (longlong)iVar25 * 0x40) == DAT_14c9a6078) {
              if (((lVar26 != 0) &&
                  (puVar20 = (undefined8 *)(lVar26 + 0x28), puVar20 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar20 != (byte *)0x0 && ((*(byte *)*puVar20 & 0x40) == 0))))
              goto LAB_140e31a46;
              break;
            }
            iVar25 = *(int *)(lVar26 + 0x38);
          } while (iVar25 != -1);
        }
      }
    }
    puVar20 = &DAT_14c9a1308;
LAB_140e31a46:
    if (((byte *)*puVar20 != (byte *)0x0) && ((*(byte *)*puVar20 & 3) != 0)) {
      FUN_140b63be8(param_1 + 0x18);
      FUN_14085123a(param_1,param_1 + 0x18,0,1);
      pbVar8 = (byte *)*param_2;
    }
    if (pbVar8 != (byte *)0x0) {
      if ((*pbVar8 & 2) == 0) {
        plVar19 = &DAT_14c9a1288;
      }
      else {
        plVar19 = (longlong *)(*(longlong *)(pbVar8 + 8) + 0x18);
      }
      if ((int)plVar19[2] != *(int *)((longlong)plVar19 + 0x3c)) {
        plVar22 = plVar19 + 8;
        if ((longlong *)plVar19[9] != (longlong *)0x0) {
          plVar22 = (longlong *)plVar19[9];
        }
        iVar25 = *(int *)((longlong)plVar22 + (ulonglong)((int)plVar19[10] - 1U & DAT_14c9a60a0) * 4
                         );
        if (iVar25 != -1) {
          do {
            lVar26 = *plVar19 + (longlong)iVar25 * 0x40;
            if (*(uint *)(*plVar19 + (longlong)iVar25 * 0x40) == DAT_14c9a60a0) {
              if ((((lVar26 != 0) &&
                   (puVar20 = (undefined8 *)(lVar26 + 0x28), puVar20 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar20 != (byte *)0x0)) && ((*(byte *)*puVar20 & 0x40) == 0))
              goto LAB_140e31b01;
              break;
            }
            iVar25 = *(int *)(lVar26 + 0x38);
          } while (iVar25 != -1);
        }
      }
    }
    puVar20 = &DAT_14c9a1308;
LAB_140e31b01:
    pbVar8 = (byte *)*puVar20;
    plVar19 = &DAT_14c9a1288;
    if ((pbVar8 != (byte *)0x0) && ((*pbVar8 & 2) != 0)) {
      plVar19 = (longlong *)(*(longlong *)(pbVar8 + 8) + 0x18);
    }
    uVar16 = *(uint *)(plVar19 + 6);
    if (uVar16 == 0) {
      uVar24 = 1;
      uVar33 = 0;
      iVar25 = 0;
      uVar4 = 0;
    }
    else {
      puVar13 = (uint *)plVar19[5];
      if ((uint *)plVar19[5] == (uint *)0x0) {
        puVar13 = (uint *)(plVar19 + 3);
      }
      uVar4 = *puVar13;
      if (uVar4 == 0) {
        iVar25 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar25 = uVar16 - 1;
        }
        uVar33 = 0;
        uVar24 = (ulonglong)(uint)(iVar25 >> 5);
        if (iVar25 >> 5 < 1) {
          uVar24 = uVar33;
        }
        iVar25 = 0;
        do {
          if (uVar24 == uVar33) goto LAB_140e32742;
          iVar25 = iVar25 + 0x20;
          uVar4 = puVar13[uVar33 + 1];
          uVar33 = uVar33 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar33 = 0;
        iVar25 = 0;
      }
      uVar24 = (ulonglong)(-uVar4 & uVar4);
      uVar11 = uVar24 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar4 = (uint)lVar26 ^ 0x3f;
      pbVar8 = (byte *)(ulonglong)uVar4;
      uVar4 = (iVar25 - uVar4) + 0x3e;
      if ((int)uVar16 <= (int)uVar4) {
        uVar4 = uVar16;
      }
    }
    uVar10 = CONCAT71((int7)((ulonglong)pbVar8 >> 8),1);
    if (uVar4 != uVar16) {
      local_e8 = local_120 + 0x78;
      local_f0 = (undefined4 *)(local_120 + 0x20);
      local_f8 = (ulonglong *)(local_120 + 0x30);
      uVar23 = 0xffffffff;
      local_110 = (ulonglong)uVar16;
      local_e0 = (uint *)(plVar19 + 3);
LAB_140e31be0:
      lVar26 = *plVar19;
      local_c8 = DAT_14c9a6168;
      local_c0 = DAT_14c9a6170;
      local_114 = iVar25;
      FUN_1448075d0(&local_b8,&local_c8);
      iVar25 = *(int *)(lVar26 + (longlong)(int)uVar4 * 0x40);
      iVar32 = (int)local_b8;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (iVar25 != iVar32) {
        if (DAT_14c947fe0 == 0) {
          lVar31 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar31);
          DAT_14c947fe0 = lVar31;
        }
        lVar26 = lVar26 + (longlong)(int)uVar4 * 0x40;
        FUN_140045924(DAT_14c947fe0,local_d8,lVar26,1);
        pbVar8 = *(byte **)(lVar26 + 0x28);
        puVar20 = &DAT_14c9a1288;
        if ((pbVar8 != (byte *)0x0) && (puVar20 = &DAT_14c9a1288, (*pbVar8 & 2) != 0)) {
          puVar20 = (undefined8 *)(*(longlong *)(pbVar8 + 8) + 0x18);
        }
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        FUN_140cb327c(&local_b8,puVar20);
        if ((longlong)*(int *)(local_120 + 0x80) != 0) {
          lVar26 = 0;
          do {
            if (*(ulonglong *)(*(longlong *)(local_120 + 0x78) + lVar26) == local_d8[0]) {
              iVar25 = (int)(lVar26 >> 4) * 0x38e38e39;
              if ((iVar25 != -1) &&
                 (puVar9 = (ulonglong *)(*(longlong *)(local_120 + 0x78) + (longlong)iVar25 * 0x90),
                 puVar9 != (ulonglong *)0x0)) goto LAB_140e32295;
              break;
            }
            lVar26 = lVar26 + 0x90;
          } while ((longlong)*(int *)(local_120 + 0x80) * 0x90 != lVar26);
        }
        puVar9 = (ulonglong *)FUN_14588eee2(local_e8);
        *puVar9 = local_d8[0];
        if ((int)uStack_b0 != local_84) {
          puVar18 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar18 = local_80;
          }
          iVar25 = *(int *)(puVar18 + (ulonglong)(local_70 - 1U & DAT_14c9a6078) * 4);
          while (iVar25 != -1) {
            lVar26 = local_b8 + (longlong)iVar25 * 0x40;
            if (*(uint *)(local_b8 + (longlong)iVar25 * 0x40) == DAT_14c9a6078) {
              if (lVar26 != -0x28 && lVar26 != 0) {
                FUN_140b63be8(puVar9 + 5);
              }
              break;
            }
            iVar25 = *(int *)(lVar26 + 0x38);
          }
        }
        if ((puVar9[6] == 0) && ((puVar9[10] == 0 || (puVar9[0xb] == 0)))) {
          puVar9[5] = *(ulonglong *)(local_120 + 0x18);
          uVar7 = local_f0[1];
          uVar2 = local_f0[2];
          uVar3 = local_f0[3];
          *(undefined4 *)(puVar9 + 6) = *local_f0;
          *(undefined4 *)((longlong)puVar9 + 0x34) = uVar7;
          *(undefined4 *)(puVar9 + 7) = uVar2;
          *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar3;
          puVar14 = puVar9 + 8;
          if (puVar14 != local_f8) {
            iVar25 = *(int *)(local_120 + 0x38);
            _Src = *(void **)(local_120 + 0x30);
            *(int *)(puVar9 + 9) = iVar25;
            if (iVar25 == 0 && *(int *)((longlong)puVar9 + 0x4c) == 0) {
              *(undefined4 *)((longlong)puVar9 + 0x4c) = 0;
            }
            else {
              FUN_1446dd670(puVar14,iVar25);
              if (iVar25 != 0) {
                memcpy((void *)*puVar14,_Src,(longlong)iVar25 * 2);
              }
            }
          }
          uVar11 = *(ulonglong *)(local_120 + 0x40);
          if (puVar9[10] != uVar11) {
            puVar9[0xc] = 0;
          }
          puVar9[10] = uVar11;
          if (puVar9[0xb] != *(ulonglong *)(local_120 + 0x48)) {
            puVar9[0xc] = 0;
          }
          uVar10 = FUN_14477b664();
          uVar11 = FUN_14477b664(uVar10);
          puVar9[0xb] = uVar11;
          puVar9[0xc] = *(ulonglong *)(local_120 + 0x50);
          uVar11 = *(ulonglong *)(local_120 + 0x58);
          uVar17 = *(ulonglong *)(local_120 + 0x60);
          if (uVar17 != 0) {
            LOCK();
            *(int *)(uVar17 + 0xc) = *(int *)(uVar17 + 0xc) + 1;
            UNLOCK();
          }
          plVar22 = (longlong *)puVar9[0xe];
          puVar9[0xd] = uVar11;
          puVar9[0xe] = uVar17;
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))();
            }
          }
        }
        iVar32 = local_84;
        iVar25 = (int)uStack_b0;
        if ((int)uStack_b0 != local_84) {
          puVar18 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar18 = local_80;
          }
          iVar5 = *(int *)(puVar18 + (ulonglong)(local_70 - 1U & DAT_14c9a60c8) * 4);
          while (iVar5 != -1) {
            lVar26 = local_b8 + (longlong)iVar5 * 0x40;
            if (*(uint *)(local_b8 + (longlong)iVar5 * 0x40) == DAT_14c9a60c8) {
              if (((((undefined8 *)(lVar26 + 0x28) != (undefined8 *)0x0 && lVar26 != 0) &&
                   (pbVar8 = *(byte **)(lVar26 + 0x28), pbVar8 != (byte *)0x0)) &&
                  ((*pbVar8 & 3) == 1)) &&
                 (pcVar15 = *(char **)(pbVar8 + 8), pcVar15 != (char *)0x0)) {
                sVar12 = strlen(pcVar15);
                iVar5 = (int)sVar12;
                if (iVar5 == 0) goto LAB_140e326f0;
                lVar26 = (longlong)iVar5;
                pcVar29 = pcVar15 + lVar26 + -1;
                if (pcVar15 <= pcVar29) {
                  uVar11 = 0;
                  goto LAB_140e31fc0;
                }
                local_128 = 0;
                goto LAB_140e31ff4;
              }
              break;
            }
            iVar5 = *(int *)(lVar26 + 0x38);
          }
          goto LAB_140e3203e;
        }
        goto LAB_140e3228b;
      }
      goto LAB_140e3242d;
    }
  }
LAB_140e32744:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    uVar11 = (ulonglong)((int)uVar11 + 1);
    pcVar29 = pcVar29 + -1;
    if (pcVar29 < pcVar15) break;
LAB_140e31fc0:
    if (9 < (byte)(*pcVar29 - 0x30U)) break;
  }
  uVar16 = (uint)uVar11;
  if ((((uVar16 == 0) || (iVar5 <= (int)uVar16)) ||
      ((10 < uVar16 || (lVar31 = -uVar11, pcVar15[lVar31 + lVar26 + -1] != '_')))) ||
     ((uVar16 != 1 && (pcVar15[lVar31 + lVar26] == '0')))) {
LAB_140e31fe3:
    local_128 = 0;
  }
  else {
    lVar30 = 0;
    do {
      lVar28 = (longlong)pcVar15[lVar31 + lVar26] + lVar30 * 10;
      lVar30 = lVar28 + -0x30;
      lVar31 = lVar31 + 1;
    } while (lVar31 != 0);
    if (0x7ffffffe < lVar30) goto LAB_140e31fe3;
    iVar5 = ~uVar16 + iVar5;
    local_128 = lVar28 - 0x2f;
  }
  if (iVar5 == 0) {
LAB_140e326f0:
    uVar11 = 0;
    uVar17 = 0;
  }
  else {
LAB_140e31ff4:
    local_bc = 0;
    local_c8 = pcVar15;
    local_c0 = iVar5;
    uVar16 = FUN_14001a6c0(&local_c8,1);
    uVar17 = local_128 << 0x20;
    uVar11 = (ulonglong)uVar16;
    iVar32 = local_84;
    iVar25 = (int)uStack_b0;
  }
  *puVar9 = uVar11 | uVar17;
LAB_140e3203e:
  if (iVar25 != iVar32) {
    puVar18 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar18 = local_80;
    }
    iVar25 = *(int *)(puVar18 + (ulonglong)(local_70 - 1U & DAT_14c9a6118) * 4);
    while (iVar25 != -1) {
      lVar26 = local_b8 + (longlong)iVar25 * 0x40;
      if (*(uint *)(local_b8 + (longlong)iVar25 * 0x40) == DAT_14c9a6118) {
        if ((undefined8 *)(lVar26 + 0x28) != (undefined8 *)0x0 && lVar26 != 0) {
          pbVar8 = *(byte **)(lVar26 + 0x28);
          puVar20 = &DAT_14c9a1270;
          if ((pbVar8 != (byte *)0x0) && (puVar20 = &DAT_14c9a1270, (*pbVar8 & 2) != 0)) {
            puVar20 = *(undefined8 **)(pbVar8 + 8);
          }
          iVar25 = *(int *)(puVar20 + 2);
          if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar25);
          }
          puVar14 = puVar9 + 1;
          if (*(int *)((longlong)puVar9 + 0x14) < iVar25) {
            FUN_1402191ca(puVar14);
            iVar25 = *(int *)(puVar20 + 2);
          }
          if (iVar25 != 0) {
            puVar20 = (undefined8 *)*puVar20;
            puVar21 = puVar20 + (longlong)iVar25 * 2;
            local_108 = puVar14;
            local_100 = puVar21;
            goto LAB_140e32117;
          }
        }
        break;
      }
      iVar25 = *(int *)(lVar26 + 0x38);
    }
  }
  goto LAB_140e3228b;
LAB_140e32117:
  do {
    pbVar8 = (byte *)*puVar20;
    if (((pbVar8 != (byte *)0x0) && ((*pbVar8 & 3) == 1)) &&
       (pcVar15 = *(char **)(pbVar8 + 8), pcVar15 != (char *)0x0)) {
      iVar25 = (int)puVar9[2];
      local_128 = (ulonglong)iVar25;
      *(uint *)(puVar9 + 2) = iVar25 + 1U;
      uVar11 = local_128;
      if (*(uint *)((longlong)puVar9 + 0x14) < iVar25 + 1U) {
        FUN_1446f84a2(puVar14,iVar25);
        uVar11 = local_128;
      }
      local_128 = *puVar14;
      sVar12 = strlen(pcVar15);
      iVar25 = (int)sVar12;
      if (iVar25 == 0) {
LAB_140e32278:
        uVar17 = 0;
        uVar27 = 0;
      }
      else {
        lVar26 = (longlong)iVar25;
        pcVar29 = pcVar15 + lVar26 + -1;
        if (pcVar29 < pcVar15) {
          lVar31 = 0;
        }
        else {
          uVar16 = 0;
          do {
            if (9 < (byte)(*pcVar29 - 0x30U)) break;
            uVar16 = uVar16 + 1;
            pcVar29 = pcVar29 + -1;
          } while (pcVar15 <= pcVar29);
          if ((((uVar16 == 0) || (iVar25 <= (int)uVar16)) ||
              ((10 < uVar16 || (lVar30 = -(ulonglong)uVar16, pcVar15[lVar30 + lVar26 + -1] != '_')))
              ) || ((uVar16 != 1 && (pcVar15[lVar30 + lVar26] == '0')))) {
LAB_140e321c2:
            lVar31 = 0;
          }
          else {
            lVar28 = 0;
            do {
              lVar31 = (longlong)pcVar15[lVar30 + lVar26] + lVar28 * 10;
              lVar28 = lVar31 + -0x30;
              lVar30 = lVar30 + 1;
            } while (lVar30 != 0);
            if (0x7ffffffe < lVar28) goto LAB_140e321c2;
            iVar25 = ~uVar16 + iVar25;
            lVar31 = lVar31 + -0x2f;
          }
          if (iVar25 == 0) goto LAB_140e32278;
        }
        local_bc = 0;
        local_c8 = pcVar15;
        local_c0 = iVar25;
        uVar16 = FUN_14001a6c0(&local_c8,1);
        uVar27 = lVar31 << 0x20;
        uVar17 = (ulonglong)uVar16;
      }
      *(ulonglong *)(local_128 + uVar11 * 8) = uVar17 | uVar27;
      puVar21 = local_100;
      puVar14 = local_108;
    }
    puVar20 = puVar20 + 2;
  } while (puVar20 != puVar21);
LAB_140e3228b:
  FUN_140851464(puVar9,1);
LAB_140e32295:
  if ((int)uStack_b0 != local_84) {
    puVar18 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar18 = local_80;
    }
    iVar25 = *(int *)(puVar18 + (ulonglong)(local_70 - 1U & DAT_14c9a60f0) * 4);
    while (iVar25 != -1) {
      lVar26 = local_b8 + (longlong)iVar25 * 0x40;
      if (*(uint *)(local_b8 + (longlong)iVar25 * 0x40) == DAT_14c9a60f0) {
        if ((longlong *)(lVar26 + 0x28) != (longlong *)0x0 && lVar26 != 0) {
          local_d8[1] = 0;
          lVar26 = *(longlong *)(lVar26 + 0x28);
          if (lVar26 == 0) {
            pcVar15 = (char *)0x0;
          }
          else {
            FUN_1400bc2ec(lVar26,&local_c8,local_d8 + 1);
            pcVar15 = local_c8;
          }
          puVar9[3] = (ulonglong)pcVar15;
          iVar25 = (int)puVar9[4];
          if ((longlong)iVar25 < 0) {
            puVar20 = (undefined8 *)puVar9[1];
            uVar16 = (uint)puVar9[2];
LAB_140e3253d:
            if (uVar16 == 0) goto LAB_140e3255d;
            uVar11 = (ulonglong)(int)uVar16;
          }
          else {
            uVar16 = (uint)puVar9[2];
            uVar11 = (ulonglong)uVar16;
            puVar20 = (undefined8 *)puVar9[1];
            if ((int)uVar16 <= iVar25) goto LAB_140e3253d;
            if (pcVar15 == (char *)puVar20[iVar25]) goto LAB_140e3233e;
            if (pcVar15 == (char *)0x0) {
              puVar9[3] = (ulonglong)puVar20[iVar25];
              goto LAB_140e3233e;
            }
          }
          puVar21 = puVar20 + uVar11;
          iVar25 = 0;
          goto LAB_140e3254c;
        }
        break;
      }
      iVar25 = *(int *)(lVar26 + 0x38);
    }
  }
  if ((int)puVar9[2] < 1) {
    puVar14 = DAT_14c9a6308;
    if ((char)puVar9[0x11] != '\x01') {
      puVar9[3] = 0;
      *(undefined4 *)(puVar9 + 4) = 0xffffffff;
      goto LAB_140e3233e;
    }
  }
  else {
    puVar14 = (ulonglong *)puVar9[1];
  }
  puVar9[3] = *puVar14;
  *(undefined4 *)(puVar9 + 4) = 0;
LAB_140e3233e:
  puVar14 = puVar9 + 0xf;
  iVar25 = *(int *)((longlong)puVar9 + 0x84);
  FUN_14072ffb2(puVar9[0xf],(int)puVar9[0x10]);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  if ((iVar25 < 0) && (*(int *)((longlong)puVar9 + 0x84) != 0)) {
    FUN_1470d9602(puVar14);
  }
  if ((int)uStack_b0 != local_84) {
    puVar18 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar18 = local_80;
    }
    iVar25 = *(int *)(puVar18 + (ulonglong)(local_70 - 1U & DAT_14c9a6140) * 4);
    while (iVar25 != -1) {
      lVar26 = local_b8 + (longlong)iVar25 * 0x40;
      if (*(uint *)(local_b8 + (longlong)iVar25 * 0x40) == DAT_14c9a6140) {
        if ((undefined8 *)(lVar26 + 0x28) != (undefined8 *)0x0 && lVar26 != 0) {
          pbVar8 = *(byte **)(lVar26 + 0x28);
          plVar22 = &DAT_14c9a1270;
          if ((pbVar8 != (byte *)0x0) && (plVar22 = &DAT_14c9a1270, (*pbVar8 & 2) != 0)) {
            plVar22 = *(longlong **)(pbVar8 + 8);
          }
          FUN_1470d6dd8(puVar14,(int)plVar22[2]);
          if (0 < (int)plVar22[2]) {
            uVar11 = 0;
            lVar26 = 0;
            lVar31 = 0;
            do {
              local_128 = uVar11;
              FUN_1470d6e54(*plVar22 + lVar26,*puVar14 + uVar11);
              lVar31 = lVar31 + 1;
              lVar26 = lVar26 + 0x10;
              uVar11 = local_128 + 0x18;
            } while (lVar31 < (int)plVar22[2]);
          }
        }
        break;
      }
      iVar25 = *(int *)(lVar26 + 0x38);
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_b8);
LAB_140e3242d:
  uVar23 = uVar23 & ~(uint)uVar24;
  puVar13 = (uint *)plVar19[5];
  if ((uint *)plVar19[5] == (uint *)0x0) {
    puVar13 = local_e0;
  }
  uVar16 = *(uint *)(plVar19 + 6);
  iVar32 = (int)uVar33;
  lVar26 = (longlong)iVar32;
  uVar4 = puVar13[lVar26] & uVar23;
  iVar25 = local_114;
  if (uVar4 == 0) {
    iVar5 = uVar16 + 0x1e;
    if (-1 < (int)(uVar16 - 1)) {
      iVar5 = uVar16 - 1;
    }
    iVar5 = iVar5 >> 5;
    iVar25 = local_114 + 0x20;
    iVar6 = iVar5;
    if (iVar5 < iVar32) {
      iVar6 = iVar32;
    }
    if (iVar32 < iVar5) {
      lVar31 = 0;
      do {
        uVar4 = (puVar13 + lVar26 + 1)[lVar31];
        if (uVar4 != 0) {
          uVar33 = (ulonglong)(iVar32 + (int)lVar31 + 1);
          uVar23 = 0xffffffff;
          goto LAB_140e324b5;
        }
        iVar25 = iVar25 + 0x20;
        lVar31 = lVar31 + 1;
      } while (iVar6 - lVar26 != lVar31);
      uVar23 = 0xffffffff;
      lVar26 = (longlong)iVar6;
    }
    puVar13 = (uint *)(lVar26 + 1);
    uVar33 = (ulonglong)puVar13 & 0xffffffff;
    uVar4 = uVar16;
  }
  else {
LAB_140e324b5:
    uVar24 = (ulonglong)(-uVar4 & uVar4);
    uVar11 = uVar24 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar4 = (uint)lVar26 ^ 0x3f;
    puVar13 = (uint *)(ulonglong)uVar4;
    uVar4 = (iVar25 - uVar4) + 0x3e;
    if ((int)uVar16 <= (int)uVar4) {
      uVar4 = uVar16;
    }
  }
  if (uVar4 == (uint)local_110) goto LAB_140e32742;
  goto LAB_140e31be0;
  while( true ) {
    puVar20 = puVar20 + 1;
    iVar25 = iVar25 + -1;
    if (puVar20 == puVar21) break;
LAB_140e3254c:
    if ((char *)*puVar20 == pcVar15) {
      *(int *)(puVar9 + 4) = -iVar25;
      if (iVar25 == 1) goto LAB_140e3257a;
      goto LAB_140e3233e;
    }
  }
LAB_140e3255d:
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
LAB_140e3257a:
  FUN_14102a358(puVar9 + 3,&local_c8);
  if ((int)puVar9[2] < 1) {
    puVar14 = (ulonglong *)&DAT_14c9a6308;
    if ((char)puVar9[0x11] == '\x01') goto LAB_140e325b6;
    uVar7 = 0xffffffff;
    uVar11 = 0;
  }
  else {
    puVar14 = puVar9 + 1;
LAB_140e325b6:
    uVar11 = *(ulonglong *)*puVar14;
    uVar7 = 0;
  }
  puVar9[3] = uVar11;
  *(undefined4 *)(puVar9 + 4) = uVar7;
  if (local_c8 != (char *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_140e3233e;
LAB_140e32742:
  uVar10 = CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
  goto LAB_140e32744;
}



// FUNCTION 140e327bc FUN_140e327bc body=211 status=ok
// SIG undefined FUN_140e327bc(void)

undefined8 * FUN_140e327bc(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4bac20;
  param_1[0x1f] = &PTR_LAB_14a4baf90;
  param_1[0x20] = &PTR_LAB_14a4bafc0;
  FUN_1406ed278(param_1 + 0x21);
  param_1[0x43] = 0;
  local_38 = 0xd2704c107b5ae74c;
  uStack_30 = 0xb212a5aa9585798;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_48 = 0xd2704c107b5ae74c;
    uStack_40 = 0xb212a5aa9585798;
    iVar2 = FUN_1448a256a(param_1);
    cVar1 = '\x02' - (iVar2 < 6);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = cVar1;
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e32890 FUN_140e32890 body=95 status=ok
// SIG undefined FUN_140e32890(void)

ulonglong FUN_140e32890(longlong param_1)

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
LAB_140e328d2:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140e328d2;
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



// FUNCTION 140e328f0 FUN_140e328f0 body=41 status=ok
// SIG undefined FUN_140e328f0(void)

void FUN_140e328f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_140d82b92(*(undefined8 *)(lVar1 + 8),lVar1);
  FUN_1447f69b6(lVar1 + 0x180);
  return;
}



// FUNCTION 140e3292a FUN_140e3292a body=44 status=ok
// SIG undefined FUN_140e3292a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e3292a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7e974 = _DAT_14cb7e974 + -1;
  *param_1 = DAT_14cb7e968;
  DAT_14cb7e968 = param_1;
  return;
}



// FUNCTION 140e32956 FUN_140e32956 body=151 status=ok
// SIG undefined FUN_140e32956(void)

void FUN_140e32956(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1a8) != 0)) {
    lVar6 = FUN_1405e677a(DAT_14cb0d2b0);
    if (*(char *)(lVar6 + 0x88) == '\x01') {
      uVar1 = *param_2;
      uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
      uVar8 = (uint)uVar1 & 0xffff;
      puVar7 = (undefined4 *)
               FUN_147bd363e(param_1 + 0x1760,
                             ((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),param_2);
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *puVar7 = *(undefined4 *)param_2;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(undefined8 *)(puVar7 + 4) = param_2[2];
    }
  }
  FUN_140e329ee(param_1,param_2);
  return;
}



// FUNCTION 140e329ee FUN_140e329ee body=4217 status=ok
// SIG undefined FUN_140e329ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e329ee(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  code *pcVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_958 [32];
  undefined4 local_938;
  undefined4 local_930;
  undefined4 local_928;
  undefined8 local_920;
  wchar_t *local_918;
  code *local_910;
  undefined1 *local_908;
  code **local_900;
  code *local_8f8;
  code *local_8f0;
  uint *local_8e0;
  longlong *local_8d8;
  longlong local_8d0;
  longlong local_8c8 [2];
  code *local_8b8;
  int local_8b0;
  longlong local_8a0;
  longlong local_890;
  void *local_888;
  uint local_880;
  void *local_878;
  uint local_870;
  code *local_868;
  code *local_860;
  code *local_858;
  char local_850;
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_958;
  _DAT_14caf2740 = _DAT_14caf2740 + 1;
  bVar27 = true;
  if (((DAT_14c7615a9 == '\x01') && (0 < (int)param_2[2])) &&
     ((int)param_1[0x2f7] != *(int *)((longlong)param_1 + 0x17e4))) {
    lVar12 = *param_2;
    uVar24 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar14 = (uint)lVar12 & 0xffff;
    plVar10 = param_1 + 0x2fd;
    if ((longlong *)param_1[0x2fe] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x2fe];
    }
    iVar18 = *(int *)((longlong)plVar10 +
                     (ulonglong)
                     ((int)param_1[0x2ff] - 1U &
                     (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar14) +
                     (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar18 != -1) {
      do {
        plVar10 = (longlong *)(param_1[0x2f6] + (longlong)iVar18 * 0x14);
        if (*plVar10 == lVar12) {
          if (plVar10 + 1 != (longlong *)0x0 && plVar10 != (longlong *)0x0) {
            bVar27 = (int)param_2[2] == (int)plVar10[1];
          }
          break;
        }
        iVar18 = *(int *)((longlong)plVar10 + 0xc);
      } while (iVar18 != -1);
    }
  }
  local_8d8 = param_2;
  if ((*(uint *)((longlong)param_2 + 0x14) & 1) == 0) {
    if ((*(uint *)((longlong)param_2 + 0x14) & 2) == 0) {
      FUN_144a8b5fe(param_1 + 0x2a6,*param_2);
      FUN_144a8b5fe(param_1 + 0x2ce,*param_2);
      plVar10 = (longlong *)param_1[0x295];
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x2e0))(plVar10,*param_2);
      }
      lVar12 = *(longlong *)(param_1[0xb] + 0x840);
      if (lVar12 != 0) {
        lVar9 = *param_2;
        uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar9 = FUN_144a49150(uVar8,lVar9);
        if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x178) != 0)) &&
           (FUN_146f3a0bc(*(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x808),&local_868),
           local_868 != (code *)0x0)) {
          FUN_146f46048(lVar12,local_868,*(undefined4 *)((longlong)param_1 + 0x1d2c),0);
        }
      }
      puVar11 = (uint *)(param_1 + 0x28d);
      iVar18 = (int)param_1[0x290];
      if (iVar18 == 0) {
        uVar26 = 1;
        uVar23 = 0;
        iVar22 = 0;
        iVar13 = 0;
      }
      else {
        puVar19 = (uint *)param_1[0x28f];
        if ((uint *)param_1[0x28f] == (uint *)0x0) {
          puVar19 = puVar11;
        }
        uVar24 = *puVar19;
        if (uVar24 == 0) {
          iVar13 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar13 = iVar18 + -1;
          }
          uVar23 = 0;
          uVar26 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar26 = uVar23;
          }
          iVar22 = 0;
          do {
            if (uVar26 == uVar23) goto LAB_140e33410;
            iVar22 = iVar22 + 0x20;
            uVar24 = puVar19[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar23 = 0;
          iVar22 = 0;
        }
        uVar26 = (ulonglong)(-uVar24 & uVar24);
        uVar1 = uVar26 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar13 = (iVar22 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar13) {
          iVar13 = iVar18;
        }
      }
      if (iVar13 < iVar18) {
        uVar24 = 0xffffffff;
LAB_140e32f7f:
        plVar10 = *(longlong **)(param_1[0x28b] + 8 + (longlong)iVar13 * 0x18);
        lVar12 = plVar10[0xd];
        if (lVar12 != 0) {
          if (DAT_14cae8b20 == 0) {
            local_868 = (code *)&LAB_14355090c;
            local_8f0 = FUN_14081d0ea;
            local_8f8 = FUN_14081d0ea;
            local_900 = &local_868;
            local_908 = &LAB_147b8e16d;
            local_910 = (code *)&LAB_140810a38;
            local_918 = L"Engine";
            local_920 = 0x800000000;
            local_928 = 0x10000000;
            local_930 = 8;
            local_938 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar9 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_868 = FUN_1449e2820;
            local_8f0 = FUN_14081d0ea;
            local_8f8 = FUN_14081d0ea;
            local_900 = &local_868;
            local_908 = &LAB_1468c5283;
            local_910 = FUN_142809da0;
            local_918 = L"Engine";
            local_920 = 0x400000000;
            local_928 = 0x10000000;
            local_930 = 8;
            local_938 = 0x50;
            local_8e0 = puVar11;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            puVar11 = local_8e0;
          }
          lVar12 = *(longlong *)(lVar12 + 0x20);
          if (lVar12 != 0) {
            iVar18 = *(int *)(lVar9 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar18) ||
                 (lVar25 = lVar12,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar18 * 8) !=
                 lVar9 + 0x30)) {
                lVar25 = 0;
              }
            } while ((lVar25 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
            if (lVar25 != 0) {
              lVar12 = plVar10[0xd];
              if (DAT_14cae8b20 == 0) {
                local_868 = (code *)&LAB_14355090c;
                local_8f0 = FUN_14081d0ea;
                local_8f8 = FUN_14081d0ea;
                local_900 = &local_868;
                local_908 = &LAB_147b8e16d;
                local_910 = (code *)&LAB_140810a38;
                local_918 = L"Engine";
                local_920 = 0x800000000;
                local_928 = 0x10000000;
                local_930 = 8;
                local_938 = 0x3f0;
                FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
              }
              lVar9 = DAT_14cae8b20;
              if (DAT_14c951858 == 0) {
                local_868 = FUN_1449e2820;
                local_8f0 = FUN_14081d0ea;
                local_8f8 = FUN_14081d0ea;
                local_900 = &local_868;
                local_908 = &LAB_1468c5283;
                local_910 = FUN_142809da0;
                local_918 = L"Engine";
                local_920 = 0x400000000;
                local_928 = 0x10000000;
                local_930 = 8;
                local_938 = 0x50;
                local_8e0 = puVar11;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                puVar11 = local_8e0;
              }
              plVar21 = local_8d8;
              lVar12 = *(longlong *)(lVar12 + 0x20);
              if (lVar12 == 0) {
                lVar25 = 0;
              }
              else {
                iVar18 = *(int *)(lVar9 + 0x38);
                do {
                  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar18) ||
                     (lVar25 = lVar12,
                     *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar18 * 8) !=
                     lVar9 + 0x30)) {
                    lVar25 = 0;
                  }
                } while ((lVar25 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
              }
LAB_140e33329:
              lVar9 = lVar25;
              lVar12 = lVar9;
              if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x000140e33338;
              goto LAB_140e33355;
            }
          }
        }
        goto LAB_140e33378;
      }
LAB_140e33410:
      plVar10 = local_8d8;
      if (DAT_14c76162c == 0) {
        lVar12 = *local_8d8;
        uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar12 = FUN_144a49150(uVar8,lVar12);
        if (((lVar12 != 0) && (lVar12 = *(longlong *)(lVar12 + 0x178), lVar12 != 0)) &&
           (iVar18 = *(int *)(lVar12 + 0xa8), (longlong)iVar18 != 0)) {
          lVar12 = *(longlong *)(lVar12 + 0xa0);
          lVar9 = 0;
          do {
            lVar25 = *(longlong *)(lVar12 + lVar9);
            if ((lVar25 != 0) && (cVar5 = FUN_1449e2a3e(lVar25), cVar5 == '\0')) {
              FUN_143598a62(param_1[0xb],lVar25,param_1);
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar18 * 8 != lVar9);
        }
      }
      FUN_140a2b886(param_1,plVar10);
    }
    else {
      uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
      cVar5 = FUN_14355fe00(uVar8);
      if (cVar5 != '\0') {
        uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
        plVar10 = (longlong *)FUN_147b99b60(uVar8,param_2);
        if (((plVar10 != (longlong *)0x0) &&
            (cVar5 = (**(code **)(*plVar10 + 0x2e0))(plVar10), cVar5 != '\0')) &&
           ((char)plVar10[0x21] == '\a')) {
          FUN_144a13f80(param_1 + 0x2a6,&local_868,param_2,0);
        }
      }
    }
    goto LAB_140e3372c;
  }
  uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_1400021e4(param_2,&local_868);
  pcVar20 = local_868;
  if ((int)local_860 == 0) {
    pcVar20 = (code *)&DAT_149dfb77a;
  }
  lVar12 = 0;
  lVar9 = FUN_140277851(0,pcVar20);
  if (lVar9 != 0) {
    if (*(longlong *)(lVar9 + 0x48) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x48) + 0x20);
    }
  }
  puVar11 = (uint *)FUN_144a49150(uVar8,*param_2);
  cVar5 = '\x01';
  if (lVar12 == 0 && puVar11 == (uint *)0x0) {
    pcVar20 = local_868;
    if ((int)local_860 == 0) {
      pcVar20 = (code *)&DAT_149dfb77a;
    }
    lVar12 = FUN_1401ccfa8(uVar8,pcVar20);
    if (lVar12 == 0) {
      local_8b8 = local_868;
      cVar5 = '\0';
      local_8b0 = (int)local_860 + -1;
      if ((int)local_860 == 0) {
        local_8b0 = 0;
      }
      cVar4 = FUN_141710bde();
      if (cVar4 == '\0') {
        FUN_1400021e4(param_2 + 1,&local_878);
        cVar5 = FUN_14166d522(&local_878,0,1);
        if (local_878 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_868 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (bVar27) {
    if (cVar5 != '\0') {
      local_8e0 = puVar11;
      local_8d0 = lVar9;
      FUN_144a8b5fe(param_1 + 0x2a6,*param_2);
      uVar23 = 0;
      FUN_144a13f80(param_1 + 0x2ce,&local_868,param_2,0);
      FUN_140a2b886(param_1,param_2);
      lVar12 = *param_2;
      uVar24 = (uint)((ulonglong)lVar12 >> 0x10);
      uVar14 = (uint)lVar12 & 0xffff;
      plVar10 = (longlong *)
                FUN_140e4cc68(param_1[0xb] + 0x430,
                              ((uint)lVar12 << 0x10 | uVar14) + (int)((ulonglong)lVar12 >> 0x20) +
                              (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar14 >> 4),param_2);
      iVar18 = (int)plVar10[5];
      if (iVar18 == 0) {
        uVar26 = 1;
        iVar22 = 0;
        iVar13 = 0;
      }
      else {
        puVar11 = (uint *)plVar10[4];
        if ((uint *)plVar10[4] == (uint *)0x0) {
          puVar11 = (uint *)(plVar10 + 2);
        }
        uVar24 = *puVar11;
        if (uVar24 == 0) {
          iVar13 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar13 = iVar18 + -1;
          }
          uVar23 = 0;
          uVar26 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar26 = uVar23;
          }
          iVar22 = 0;
          do {
            if (uVar26 == uVar23) goto LAB_140e334b9;
            iVar22 = iVar22 + 0x20;
            uVar24 = puVar11[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar23 = 0;
          iVar22 = 0;
        }
        uVar26 = (ulonglong)(-uVar24 & uVar24);
        uVar1 = uVar26 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar13 = (iVar22 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar13) {
          iVar13 = iVar18;
        }
      }
      if (iVar13 != iVar18) {
        uVar24 = 0xffffffff;
        do {
          lVar12 = param_1[0xb];
          if (*(int *)(lVar12 + 1000) != *(int *)(lVar12 + 0x414)) {
            lVar9 = *(longlong *)(*plVar10 + (longlong)iVar13 * 0x10);
            lVar25 = lVar12 + 0x418;
            if (*(longlong *)(lVar12 + 0x420) != 0) {
              lVar25 = *(longlong *)(lVar12 + 0x420);
            }
            iVar13 = *(int *)(lVar25 + (ulonglong)
                                       (*(int *)(lVar12 + 0x428) - 1U &
                                       (int)lVar9 + (int)((ulonglong)lVar9 >> 0x20) * 0x17) * 4);
            if (iVar13 != -1) {
              do {
                plVar21 = (longlong *)(*(longlong *)(lVar12 + 0x3e0) + (longlong)iVar13 * 0x18);
                if (*plVar21 == lVar9) goto LAB_140e3357d;
                iVar13 = (int)plVar21[2];
              } while (iVar13 != -1);
            }
          }
          plVar21 = (longlong *)0x0;
LAB_140e3357d:
          FUN_1417e28fe(param_1,plVar21[1]);
          uVar24 = uVar24 & ~(uint)uVar26;
          puVar11 = (uint *)plVar10[4];
          if ((uint *)plVar10[4] == (uint *)0x0) {
            puVar11 = (uint *)(plVar10 + 2);
          }
          iVar15 = (int)plVar10[5];
          iVar13 = (int)uVar23;
          lVar12 = (longlong)iVar13;
          uVar14 = puVar11[lVar12] & uVar24;
          if (uVar14 == 0) {
            iVar16 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar16 = iVar15 + -1;
            }
            iVar16 = iVar16 >> 5;
            iVar22 = iVar22 + 0x20;
            iVar17 = iVar16;
            if (iVar16 < iVar13) {
              iVar17 = iVar13;
            }
            if (iVar13 < iVar16) {
              lVar9 = 0;
              do {
                uVar14 = puVar11[lVar12 + lVar9 + 1];
                if (uVar14 != 0) {
                  uVar23 = (ulonglong)(iVar13 + (int)lVar9 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_140e335ff;
                }
                iVar22 = iVar22 + 0x20;
                lVar9 = lVar9 + 1;
              } while (iVar17 - lVar12 != lVar9);
              uVar24 = 0xffffffff;
              iVar13 = iVar17;
            }
            uVar23 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar15;
          }
          else {
LAB_140e335ff:
            uVar26 = (ulonglong)(-uVar14 & uVar14);
            uVar1 = uVar26 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar13 = (iVar22 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar15 <= iVar13) {
              iVar13 = iVar15;
            }
          }
        } while (iVar13 != iVar18);
      }
LAB_140e334b9:
      lVar9 = local_8d0;
      plVar10 = local_8d8;
      lVar12 = *(longlong *)(param_1[0xb] + 0x840);
      if (lVar12 == 0) {
        if (local_8d0 == 0) {
          lVar9 = 0;
          lVar12 = 0;
          if (DAT_14caf2744 == '\x01') {
            uVar8 = *(undefined8 *)(param_1[0xb] + 0x858);
            goto LAB_140e33702;
          }
        }
        else {
          if (DAT_14cb10130 == 0) {
            local_868 = FUN_140754f84;
            local_8f0 = FUN_14081d0ea;
            local_8f8 = FUN_14081d0ea;
            local_900 = &local_868;
            local_908 = &LAB_147da9a76;
            local_910 = FUN_1409f3105;
            local_918 = L"Engine";
            local_920 = 0;
            local_928 = 0x10000000;
            local_930 = 8;
            local_938 = 0x990;
            FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
          }
          lVar9 = FUN_1402ab8a4(lVar9,DAT_14cb10130,0);
          uVar8 = *(undefined8 *)(param_1[0xb] + 0x858);
          if (DAT_14caf2744 == '\0') {
            if (lVar9 == 0) goto LAB_140e334ef;
            lVar25 = *(longlong *)(lVar9 + 0x30);
            lVar12 = lVar9;
            if ((lVar25 != 0) && (iVar18 = *(int *)(lVar25 + 0xa8), (longlong)iVar18 != 0)) {
              lVar9 = *(longlong *)(lVar25 + 0xa0);
              lVar25 = 0;
              do {
                lVar2 = *(longlong *)(lVar9 + lVar25);
                if (((lVar2 != 0) && ((*(byte *)(lVar2 + 99) & 8) != 0)) &&
                   (*(char *)(lVar2 + 0x179) == '\x02')) {
                  FUN_140b952ca(uVar8,lVar2,param_1,param_1[0xb]);
                }
                lVar25 = lVar25 + 8;
              } while ((longlong)iVar18 * 8 != lVar25);
            }
          }
          else {
LAB_140e33702:
            FUN_147bd72f8(uVar8,param_1,plVar10);
            lVar12 = lVar9;
          }
        }
      }
      else {
        if (((local_8e0 != (uint *)0x0) && (*(longlong *)(local_8e0 + 0x5e) != 0)) &&
           (FUN_146f3a0bc(*(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x808),&local_868),
           local_868 != (code *)0x0)) {
          FUN_146f46048(lVar12,local_868,*(undefined4 *)((longlong)param_1 + 0x1d2c),1);
        }
LAB_140e334ef:
        lVar12 = 0;
      }
      plVar21 = (longlong *)param_1[0x295];
      if (plVar21 != (longlong *)0x0) {
        (**(code **)(*plVar21 + 0x2d8))(plVar21,*plVar10,lVar12);
      }
      goto LAB_140e3372c;
    }
  }
  else if (cVar5 != '\0') goto LAB_140e3372c;
  FUN_1400021e4(param_2,&local_878);
  FUN_1400021e4(param_2 + 1,&local_888);
  lVar12 = DAT_14caf1d60;
  iVar18 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar18 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar18 == 2)) {
    uVar23 = 0;
  }
  else if (iVar18 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar23 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar23 = 1;
  }
  pvVar3 = local_878;
  if ((*(char *)(lVar12 + uVar23) == '\0') && ((*(byte *)((longlong)param_2 + 0x14) & 4) == 0)) {
    local_868 = (code *)local_848;
    local_850 = '\0';
    local_858 = (code *)&local_48;
    iVar18 = local_870 - 1;
    if (local_870 == 0) {
      iVar18 = 0;
    }
    lVar12 = (longlong)iVar18;
    local_860 = local_868;
    if (0x3ff < iVar18) {
      FUN_140213274(&local_868,lVar12);
    }
    pcVar20 = local_860;
    if (1 < local_870) {
      memcpy(local_860,pvVar3,lVar12 * 2);
      local_860 = pcVar20 + lVar12 * 2;
    }
    if (local_858 <= local_860 + 2) {
      FUN_140213274(&local_868,1);
    }
    pvVar3 = local_888;
    pcVar20 = local_860 + 2;
    *(undefined2 *)local_860 = 0x2c;
    iVar18 = local_880 - 1;
    if (local_880 == 0) {
      iVar18 = 0;
    }
    lVar12 = (longlong)iVar18;
    local_860 = pcVar20;
    if (local_858 <= pcVar20 + lVar12 * 2) {
      FUN_140213274(&local_868,lVar12);
    }
    pcVar20 = local_860;
    if (1 < local_880) {
      memcpy(local_860,pvVar3,lVar12 * 2);
      local_860 = pcVar20 + lVar12 * 2;
    }
    *(undefined2 *)local_860 = 0;
    FUN_140056680(local_8c8,local_868);
    FUN_147bccaba(&local_8b8,0x1a,local_8c8);
    FUN_143587ad8(param_1,&local_8b8);
    if (local_890 != 0) {
      (**(code **)(local_890 + -0x10))(local_890 + -0x10);
    }
    if (local_8a0 != 0) {
      FUN_1400020a8();
    }
    if (local_8c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_850 == '\x01') {
      FUN_1400020a8(local_868);
    }
  }
  if (local_888 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_878 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140e3372c:
  if ((local_48 ^ (ulonglong)auStack_958) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140e33338:
  lVar25 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) goto LAB_140e33329;
  local_8e0 = puVar11;
  lVar12 = FUN_142840154(lVar9);
  puVar11 = local_8e0;
LAB_140e33355:
  if (lVar12 == 0) {
    lVar25 = *(longlong *)(lVar9 + 0x20);
    goto LAB_140e33329;
  }
  if (*(longlong *)(lVar12 + 0x18) == *plVar21) {
    (**(code **)(*plVar10 + 0x2b8))(plVar10,2);
  }
LAB_140e33378:
  uVar24 = uVar24 & ~(uint)uVar26;
  puVar19 = (uint *)param_1[0x28f];
  if ((uint *)param_1[0x28f] == (uint *)0x0) {
    puVar19 = puVar11;
  }
  iVar18 = (int)param_1[0x290];
  iVar13 = (int)uVar23;
  lVar12 = (longlong)iVar13;
  uVar14 = puVar19[lVar12] & uVar24;
  if (uVar14 == 0) {
    iVar15 = iVar18 + 0x1e;
    if (-1 < iVar18 + -1) {
      iVar15 = iVar18 + -1;
    }
    iVar15 = iVar15 >> 5;
    iVar16 = iVar15;
    if (iVar15 < iVar13) {
      iVar16 = iVar13;
    }
    if (iVar15 <= iVar13) goto LAB_140e33410;
    lVar9 = 0;
    while( true ) {
      iVar22 = iVar22 + 0x20;
      uVar14 = puVar19[lVar12 + lVar9 + 1];
      if (uVar14 != 0) break;
      lVar9 = lVar9 + 1;
      if (iVar16 - lVar12 == lVar9) goto LAB_140e33410;
    }
    uVar23 = (ulonglong)(iVar13 + (int)lVar9 + 1);
    uVar24 = 0xffffffff;
  }
  uVar26 = (ulonglong)(-uVar14 & uVar14);
  uVar1 = uVar26 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  iVar13 = (iVar22 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
  if (iVar18 <= iVar13) goto LAB_140e33410;
  goto LAB_140e32f7f;
}



// FUNCTION 140e33a68 FUN_140e33a68 body=103 status=ok
// SIG undefined FUN_140e33a68(void)

ulonglong FUN_140e33a68(longlong param_1)

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
LAB_140e33ab2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140e33ab2;
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



// FUNCTION 140e33ad0 FUN_140e33ad0 body=795 status=ok
// SIG undefined FUN_140e33ad0(void)

void FUN_140e33ad0(longlong param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
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
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((param_3[1] != 0) && (uVar2 = *param_3, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0 &&
          (*(uint *)(lVar7 + 0x10) == param_3[1])))) &&
     ((*(uint *)(lVar7 + 8) & 0x10200000) == 0 && param_3[0x4e] == 0)) {
    lVar7 = FUN_1449e3f1e();
    if ((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
        ((uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2 &&
         ((((int)uVar2 < DAT_14c9647dc &&
           (lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0)) &&
          (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c))))))) &&
       (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 &&
        (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar9 != 0)))) {
      if (DAT_14cb5b388 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141864c34;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146431698;
        local_58 = &LAB_1486775cb;
        local_60 = &LAB_1464cee35;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000005;
        local_80 = 0x10;
        local_88 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
          (lVar7 != 0)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
        uVar5 = FUN_1447210f0(lVar9);
        FUN_1404d1e78(&local_30,uVar5);
        if (local_28 != (longlong *)0x0) {
          iVar4 = (int)local_28[1];
          do {
            if (iVar4 == 0) {
              plVar8 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar3 = (int)local_28[1];
            bVar10 = iVar4 == iVar3;
            if (bVar10) {
              *(int *)(local_28 + 1) = iVar4 + 1;
              iVar3 = iVar4;
            }
            iVar4 = iVar3;
            UNLOCK();
            plVar8 = local_28;
          } while (!bVar10);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
          if (plVar8 != (longlong *)0x0) {
            if ((local_30 != (code *)0x0) && ((longlong)*(int *)(lVar7 + 0x438) != 0)) {
              plVar6 = *(longlong **)(lVar7 + 0x430);
              lVar7 = (longlong)*(int *)(lVar7 + 0x438) * 0x28;
              do {
                if (*(longlong *)(local_30 + 0x1b4) == *plVar6) {
                  if (plVar6 != (longlong *)0x0) {
                    *(longlong *)(param_1 + 0x640) = *(longlong *)(local_30 + 0x1b4);
                    *(int *)(param_1 + 0x63c) = (int)plVar6[4];
                    LOCK();
                    plVar6 = plVar8 + 1;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)*plVar6 == 0) {
                      (**(code **)*plVar8)(plVar8);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar8 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar8 + 0x10))(plVar8);
                      }
                    }
                    goto LAB_140e33db5;
                  }
                  break;
                }
                plVar6 = plVar6 + 5;
                lVar7 = lVar7 + -0x28;
              } while (lVar7 != 0);
            }
            LOCK();
            plVar6 = plVar8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
    }
  }
  *(undefined4 *)(param_1 + 0x63c) = 0;
LAB_140e33db5:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e33dec FUN_140e33dec body=267 status=ok
// SIG undefined FUN_140e33dec(void)

void FUN_140e33dec(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] << 3;
    lVar7 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar7 * 8) == param_2) {
        uVar6 = (uint)lVar7;
        if ((int)uVar6 < 0) {
          return;
        }
        if ((int)param_1[3] <= (int)uVar6) {
          return;
        }
        plVar1 = param_1 + 2;
        uVar9 = (ulonglong)(uVar6 & 0x7fffffff);
        piVar2 = (int *)(*plVar1 + uVar9 * 4);
        *piVar2 = *piVar2 + -1;
        if (*(int *)(*plVar1 + uVar9 * 4) != 0) {
          return;
        }
        iVar3 = (int)param_1[1];
        if (iVar3 - 1U != uVar6) {
          iVar5 = (iVar3 - 1U) - uVar6;
          iVar8 = 1;
          if (iVar5 < 1) {
            iVar8 = iVar5;
          }
          memmove((void *)(*param_1 + uVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar8) * 8),
                  (longlong)iVar8 << 3);
          iVar3 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar3 + -1;
        FUN_140e33ef8(param_1);
        iVar3 = (int)param_1[3];
        if (iVar3 - 1U != uVar6) {
          iVar5 = (iVar3 - 1U) - uVar6;
          iVar8 = 1;
          if (iVar5 < 1) {
            iVar8 = iVar5;
          }
          memmove((void *)(param_1[2] + uVar9 * 4),
                  (void *)(param_1[2] + (longlong)(iVar3 - iVar8) * 4),(longlong)iVar8 << 2);
          iVar3 = (int)param_1[3];
        }
        *(int *)(param_1 + 3) = iVar3 + -1;
        FUN_14479f406(plVar1);
        return;
      }
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 140e33ef8 FUN_140e33ef8 body=143 status=ok
// SIG undefined FUN_140e33ef8(void)

void FUN_140e33ef8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 140e33f88 FUN_140e33f88 body=103 status=ok
// SIG undefined FUN_140e33f88(void)

ulonglong FUN_140e33f88(longlong param_1)

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
LAB_140e33fd2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140e33fd2;
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



// FUNCTION 140e33ffa FUN_140e33ffa body=401 status=ok
// SIG undefined FUN_140e33ffa(void)

void FUN_140e33ffa(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x7c) != 0) {
    uVar1 = *(uint *)(param_2 + 0x78);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140e34073;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_2 + 0x7c) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_140e34073;
    }
  }
  uVar3 = 0;
LAB_140e34073:
  lVar2 = FUN_140502f56(uVar3);
  if (lVar2 != 0) {
    lVar5 = lVar2 + 0x10;
    if (*(longlong *)(lVar2 + 0x910) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x910);
    }
    if ((longlong)*(int *)(lVar2 + 0x918) != 0) {
      lVar2 = lVar5 + (longlong)*(int *)(lVar2 + 0x918) * 0x48;
      do {
        if ((*(uint *)(param_1 + 0x20) & ~*(uint *)(lVar5 + 0x30)) == 0) {
          if ((longlong)*(int *)(param_3 + 1) != 0) {
            puVar4 = (undefined8 *)*param_3;
            lVar6 = (longlong)*(int *)(param_3 + 1) << 5;
            do {
              FUN_140e3418c(puVar4,&local_60,1);
              if (CONCAT44(uStack_5c,local_60) == *(longlong *)(lVar5 + 0x28)) {
                if (puVar4 != (undefined8 *)0x0) goto LAB_140e3413b;
                break;
              }
              puVar4 = puVar4 + 4;
              lVar6 = lVar6 + -0x20;
            } while (lVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_1403f9e22(param_3);
          local_50 = *(undefined8 *)(lVar5 + 0x28);
          FUN_1401533ba(&local_60,&local_50,1);
          *(undefined4 *)(puVar4 + 1) = uStack_58;
          *puVar4 = CONCAT44(uStack_5c,local_60);
LAB_140e3413b:
          FUN_140f7e23a(&local_60,lVar5);
          *(undefined4 *)((longlong)puVar4 + 0xc) = local_60;
          *(undefined4 *)(puVar4 + 2) = uStack_5c;
          *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_58;
          *(undefined4 *)(puVar4 + 3) = uStack_54;
        }
        lVar5 = lVar5 + 0x48;
      } while (lVar5 != lVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e3418c FUN_140e3418c body=134 status=ok
// SIG undefined FUN_140e3418c(void)

ulonglong * FUN_140e3418c(int *param_1,ulonglong *param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_1 + 1);
  uVar2 = uVar1;
  if ((uVar1 == DAT_14c948034) && (uVar2 = DAT_14c948034, *param_1 != DAT_14c948030)) {
    FUN_14011791e(&local_30,*param_1,uVar1 >> 0x20);
    *(ulonglong *)(param_1 + 1) = local_30;
    uVar2 = local_30;
  }
  if (param_3 == '\0') {
    uVar2 = uVar2 & 0xffffffff;
  }
  *param_2 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e34214 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 140e3421a FUN_140e3421a body=32 status=ok
// SIG undefined FUN_140e3421a(void)

undefined8 * FUN_140e3421a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac7a10;
  return param_1;
}



// FUNCTION 140e3423a FUN_140e3423a body=308 status=ok
// SIG undefined FUN_140e3423a(void)

void FUN_140e3423a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e34370();
  FUN_14071053a(param_1 + 0x4780,param_1);
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      local_18 = 0;
      goto LAB_140e3428c;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  local_18 = param_1 + 0x10a0;
LAB_140e3428c:
  local_20 = param_1;
  FUN_140e343d0(param_1 + 0x4128);
  *(longlong *)(param_1 + 0x6238) = param_1;
  *(longlong *)(param_1 + 0x73e0) = param_1;
  iVar1 = FUN_14487fd02(param_1);
  *(byte *)(param_1 + 0x73e8) = *(byte *)(param_1 + 0x73e8) & 0xfe | iVar1 != 3;
  *(longlong *)(param_1 + 0x4de8) = param_1;
  FUN_140e34780(param_1 + 0x9388,param_1 + 0x3bf8);
  FUN_140e34506(param_1 + 0x9410,param_1 + 0x3c00);
  FUN_140b24d9a(param_1 + 0x99c8,param_1);
  FUN_1407107b6(param_1 + 0x4018,param_1);
  FUN_140e348cc(param_1 + 0x9908,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140e34638(param_1 + 0x9b60,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 140e34370 FUN_140e34370 body=95 status=ok
// SIG undefined FUN_140e34370(void)

void FUN_140e34370(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  FUN_14071060c(param_1 + 0x898,param_1);
  if (param_1 != 0) {
    lVar1 = param_1;
    do {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_140e343b4;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    FUN_1404d4eb0(param_1 + 0x12f0,param_1);
  }
LAB_140e343b4:
  FUN_1402d7906(param_1 + 0x31e0,param_1 + 0x1138);
  return;
}



// FUNCTION 140e343d0 FUN_140e343d0 body=310 status=ok
// SIG undefined FUN_140e343d0(void)

void FUN_140e343d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_2[1];
  }
  lVar5 = 0;
  if (*(longlong *)(param_1 + 600) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x260);
  }
  if ((lVar3 == *(longlong *)(param_1 + 600)) && (lVar4 == lVar5)) goto LAB_140e3440d;
  if (DAT_14c950c29 == 1) {
    if (lVar3 != 0) {
      FUN_1456cec3c(lVar3);
      lVar3 = *param_2;
      goto LAB_140e3447f;
    }
    *(undefined8 *)(param_1 + 600) = 0;
    *(longlong *)(param_1 + 0x260) = param_2[1];
    lVar3 = 0;
  }
  else {
LAB_140e3447f:
    bVar2 = DAT_14c950c29;
    *(longlong *)(param_1 + 600) = lVar3;
    *(longlong *)(param_1 + 0x260) = param_2[1];
    if ((lVar3 != 0) && ((bVar2 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
  }
  *(longlong *)(param_1 + 0x250) = lVar3;
  *(longlong *)(param_1 + 0x270) = lVar3;
LAB_140e3440d:
  if (((*(byte *)(param_1 + 0x470) & 1) == 0) &&
     (*(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 1,
     *(longlong *)(param_1 + 0x460) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x450);
    *(longlong **)(param_1 + 0x468) = &DAT_14cb77c60;
    *(longlong *)(param_1 + 0x460) = param_1;
    lVar3 = DAT_14cb77c60;
    while( true ) {
      *(longlong *)(param_1 + 0x450) = lVar3;
      LOCK();
      lVar4 = **(longlong **)(param_1 + 0x468);
      bVar6 = lVar3 == lVar4;
      if (bVar6) {
        **(longlong **)(param_1 + 0x468) = (longlong)plVar1;
        lVar4 = lVar3;
      }
      UNLOCK();
      if (bVar6) break;
      *(longlong *)(param_1 + 0x450) = lVar4;
      lVar3 = **(longlong **)(param_1 + 0x468);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 140e34506 FUN_140e34506 body=305 status=ok
// SIG undefined FUN_140e34506(void)

void FUN_140e34506(longlong param_1,longlong *param_2)

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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(longlong **)(param_1 + 0x30) = param_2;
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140e3456c;
  }
  lVar1 = 0;
LAB_140e3456c:
  *(longlong *)(param_1 + 0x38) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e34638 FUN_140e34638 body=327 status=ok
// SIG undefined FUN_140e34638(void)

void FUN_140e34638(longlong param_1,longlong param_2)

{
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
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 8) = param_2;
    if (param_2 != 0) goto LAB_140e34670;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 8) = param_2;
LAB_140e34670:
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_140e34699;
    }
  }
  param_2 = 0;
LAB_140e34699:
  *(longlong *)(param_1 + 0x10) = param_2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e34780 FUN_140e34780 body=330 status=ok
// SIG undefined FUN_140e34780(void)

void FUN_140e34780(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
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
  *(longlong **)(param_1 + 0x50) = param_2;
  lVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140e347e6;
  }
  lVar2 = 0;
LAB_140e347e6:
  *(longlong *)(param_1 + 0x48) = lVar2;
  iVar1 = FUN_14487fd02(lVar2);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe | iVar1 != 3;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e348cc FUN_140e348cc body=640 status=ok
// SIG undefined FUN_140e348cc(void)

void FUN_140e348cc(longlong param_1,longlong *param_2)

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
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_1 + 0x18) = uVar1;
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
    *(int *)(param_1 + 0x1c) = iVar2;
    if (DAT_14cb652c0 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148715fe1;
      local_60 = FUN_146508b0f;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    lVar5 = (**(code **)(*param_2 + 0x288))(param_2,DAT_14cb652c0);
    if (lVar5 != 0) {
      if (DAT_14cb652c0 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_148715fe1;
        local_60 = FUN_146508b0f;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
      }
      lVar3 = FUN_144718840(lVar5,DAT_14cb652c0);
      if (lVar5 != lVar3) goto LAB_140e34977;
    }
  }
  lVar3 = 0;
LAB_140e34977:
  FUN_140cfc4c2(&local_38,lVar3);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x34) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e34b5c FUN_140e34b5c body=163 status=ok
// SIG undefined FUN_140e34b5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e34b5c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b257cb0;
  if (param_1[6] != 0) {
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
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140e34c00 FUN_140e34c00 body=366 status=ok
// SIG undefined FUN_140e34c00(void)

longlong * FUN_140e34c00(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
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
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140d5a359(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_14884c4be(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1488fc909(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1489098d4(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14890990e(param_2);
        FUN_1488fc909(param_1,uVar3);
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



// FUNCTION 140e34d70 FUN_140e34d70 body=40 status=ok
// SIG undefined FUN_140e34d70(void)

undefined8 FUN_140e34d70(undefined8 param_1,int param_2)

{
  FUN_140e34d98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e34d98 FUN_140e34d98 body=719 status=ok
// SIG undefined FUN_140e34d98(void)

void FUN_140e34d98(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3cd40;
  plVar1 = param_1 + 0x39;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3c)) {
    FUN_1400020a8(*plVar1);
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
  plVar1 = param_1 + 0x29;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x21;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x25) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x24)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x24)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x19;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar1);
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
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140e35068 FUN_140e35068 body=137 status=ok
// SIG undefined FUN_140e35068(void)

undefined1 * FUN_140e35068(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[1] = 0;
  lVar1 = FUN_140e350f2();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_140e5f22c();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_140e3515a(*(longlong *)(lVar1 + 0x30),&local_1a,*(undefined4 *)(param_1 + 0x10));
      if ((local_19 & 1) != 0) {
        *param_2 = local_1a;
        param_2[1] = 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e350f2 FUN_140e350f2 body=104 status=ok
// SIG undefined FUN_140e350f2(void)

undefined8 FUN_140e350f2(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 140e3515a FUN_140e3515a body=351 status=ok
// SIG undefined FUN_140e3515a(void)

undefined1 * FUN_140e3515a(undefined8 param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_9c;
  longlong local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_14111b7b0(param_1);
    lVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3,param_3,uVar4);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x2b8) != 0)) {
      local_40 = &local_a8;
      local_a8 = 0x3000300000000;
      local_a0 = 3;
      local_9e = 3;
      local_9c = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_30 = &local_40;
      local_38 = FUN_143ef2b5a;
      bifrost::account::get();
      cVar1 = (char)local_a0;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      uVar2 = 0;
      if (cVar1 != '\x02') {
        if (cVar1 != '\x01') goto LAB_140e35286;
        uVar2 = 1;
      }
      *param_2 = uVar2;
      uVar2 = 1;
      goto LAB_140e35286;
    }
  }
  uVar2 = 0;
LAB_140e35286:
  param_2[1] = uVar2;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e352ba FUN_140e352ba body=484 status=ok
// SIG undefined FUN_140e352ba(void)

void FUN_140e352ba(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &DAT_14caa8558;
  if (local_20 != 0) {
    lVar4 = FUN_1457b68d8();
    if (lVar4 != 0) {
      puVar5 = &DAT_14caa8558;
      if (*(longlong *)(lVar4 + 0x40) != 0) {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x18);
      }
    }
  }
  FUN_1403de7ba(param_3,puVar5);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e354a8 FUN_140e354a8 body=192 status=ok
// SIG undefined FUN_140e354a8(void)

undefined8 * FUN_140e354a8(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14aff45f0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  FUN_1405d6618();
  param_1[10] = &DAT_14cb6ffe0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = &PTR_FUN_14b075650;
  FUN_1405d6618();
  param_1[0xe] = &DAT_14cb6ffe0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = &PTR_FUN_14b075650;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = &DAT_14a171d50;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb1) = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x13] = &DAT_14cb70058;
  return param_1;
}



// FUNCTION 140e35568 FUN_140e35568 body=469 status=ok
// SIG undefined FUN_140e35568(void)

void FUN_140e35568(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140e359b2(param_1 + -8,&DAT_14ca85100);
  local_60 = param_1 + 0x60;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = param_1;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  lVar6 = local_60;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    plVar1 = (longlong *)(local_70 + 0x50);
    lVar2 = local_70 + 0x20;
    iVar15 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar11 = local_50;
    do {
      FUN_140e357b0(lVar2,&DAT_14ca85100,*(undefined4 *)(*plVar1 + 4 + (longlong)iVar8 * 0x28));
      FUN_140e3573e(plVar1,iVar8);
      uVar12 = ~(uint)uVar13 & uVar12;
      lVar9 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar9 = lVar6;
      }
      iVar4 = *(int *)(lVar6 + 0x18);
      lVar14 = (longlong)iVar15;
      uVar7 = *(uint *)(lVar9 + lVar14 * 4) & uVar12;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)(lVar9 + lVar14 * 4 + 4 + lVar10 * 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar14 == lVar10) goto LAB_140e356c4;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar13 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_140e356c4:
  lVar6 = local_70;
  FUN_1458f42ef(*(undefined8 *)(local_70 + 0x10),*(undefined4 *)(local_70 + 0x18));
  *(undefined4 *)(lVar6 + 0x18) = 0;
  if (*(int *)(lVar6 + 0x1c) != 0) {
    FUN_1457b6934(lVar6 + 0x10);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3573e FUN_140e3573e body=114 status=ok
// SIG undefined FUN_140e3573e(void)

void FUN_140e3573e(longlong *param_1,int param_2)

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



// FUNCTION 140e357b0 FUN_140e357b0 body=213 status=ok
// SIG undefined FUN_140e357b0(void)

uint FUN_140e357b0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  LOCK();
  bVar2 = *param_1;
  if (bVar2 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (bVar2 != 0) {
    FUN_1447d2058(param_1);
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(((uint)param_3 & 0xff) << 4));
  uVar6 = (ulonglong)(((uint)((ulonglong)param_3 >> 8) & 0xff) * 0x30);
  lVar1 = lVar4 + uVar6;
  iVar3 = *(int *)(lVar4 + 0x28 + uVar6);
  *(uint *)(lVar4 + 0x28 + uVar6) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0x2c + uVar6) < iVar3 + 1U) {
    FUN_14488eebe(uVar6 + lVar4 + 0x20,iVar3);
  }
  *(short *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar3 * 2) =
       (short)((ulonglong)param_3 >> 0x10);
  uVar5 = *(uint *)(lVar1 + 0x18);
  if (uVar5 == *(uint *)(lVar1 + 0x28)) {
    *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - uVar5 * *(int *)(lVar1 + 0x14);
    uVar5 = FUN_140e35886(lVar1,param_2);
  }
  if (param_1 != (byte *)0x0) {
    uVar5 = 1;
    LOCK();
    bVar2 = *param_1;
    if (bVar2 == 1) {
      *param_1 = 0;
    }
    else {
      uVar5 = (uint)bVar2;
    }
    UNLOCK();
    if (bVar2 != 1) {
      uVar5 = FUN_14008cdb0(param_1);
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 140e35886 FUN_140e35886 body=300 status=ok
// SIG undefined FUN_140e35886(void)

void FUN_140e35886(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if (param_1[1] == 0) goto LAB_140e35963;
    FUN_1400020a8();
  }
  else {
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
      FUN_14002049c(param_2,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    }
    lVar4 = *param_1;
    if (lVar4 != 0) {
      *param_1 = 0;
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
  }
  param_1[1] = 0;
LAB_140e35963:
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_1448759c8(param_1 + 4,0);
    return;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140e359b2 FUN_140e359b2 body=313 status=ok
// SIG undefined FUN_140e359b2(void)

void FUN_140e359b2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  iVar1 = DAT_14c7590b0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 0xa0;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = (longlong *)(param_1 + 0x90);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      if ((uint)(iVar1 - *(int *)(*local_70 + 8 + (longlong)iStack_54 * 0x28)) < 2) break;
      FUN_140e357b0(param_1 + 0x28,param_2,
                    *(undefined4 *)(*local_70 + (longlong)iStack_54 * 0x28 + 4));
      FUN_140e3573e(local_70,iStack_54);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e35aec FUN_140e35aec body=394 status=ok
// SIG undefined FUN_140e35aec(void)

void FUN_140e35aec(longlong param_1)

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
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_140e35b4b;
  }
  lVar1 = 0;
LAB_140e35b4b:
  FUN_140e35c8c(&local_28,lVar1);
  if (local_20 == '\x01') {
    lVar1 = FUN_1401e2c50();
    if (*(longlong *)(lVar1 + 0x110) == 0) {
      FUN_140aa6c08(lVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(0x3f800000);
}



// FUNCTION 140e35c8c FUN_140e35c8c body=470 status=ok
// SIG undefined FUN_140e35c8c(void)

ulonglong * FUN_140e35c8c(ulonglong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
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
  undefined1 *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = DAT_14c967818;
  if ((param_2 == 0) || (lVar4 = *(longlong *)(param_2 + 0x430), lVar4 == 0)) {
LAB_140e35e18:
    if (((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0)) ||
       (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8),
       plVar1 == (longlong *)0x0)) {
      uVar2 = 0;
      goto LAB_140e35d40;
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
    uVar3 = (ulonglong)local_28 >> 0x20;
    pcVar5 = local_28;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar4 = *(longlong *)(param_2 + 0x430);
      if (lVar4 == 0) goto LAB_140e35e18;
    }
    if ((((DAT_14cae9568 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 == 0)) ||
        (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
        DAT_14cae9568 + 0x30)) goto LAB_140e35e18;
    FUN_14039bfee(param_2,&local_30,(longlong)&local_30 + 4);
    uVar3 = local_30 >> 0x20;
    pcVar5 = (code *)(local_30 & 0xffffffff);
  }
  *param_1 = (ulonglong)pcVar5 & 0xffffffff | uVar3 << 0x20;
  uVar2 = 1;
LAB_140e35d40:
  *(undefined1 *)(param_1 + 1) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e35e6c FUN_140e35e6c body=405 status=ok
// SIG undefined FUN_140e35e6c(void)

undefined8 * FUN_140e35e6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b32b680;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x34001;
  param_1[3] = 0;
  param_1[6] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[4] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[5] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[7] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[8] = uVar1;
  param_1[9] = DAT_14c8464f0;
  param_1[0xc] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[10] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xb] = uVar1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3002;
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x200000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf00000d0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2e] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2c) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar2;
  *(undefined4 *)(param_1 + 0x2d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar4;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xbf80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x31] = 0;
  FUN_1405c5fa2();
  param_1[0x33] = &DAT_14cb769e8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = &PTR_FUN_14b0394b0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 0x1c2) = *(byte *)((longlong)param_1 + 0x1c2) & 0xfe;
  return param_1;
}



// FUNCTION 140e36002 FUN_140e36002 body=284 status=ok
// SIG undefined FUN_140e36002(void)

undefined8 FUN_140e36002(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_140e36118;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e36118;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140e36118:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e360c5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140e360c5;
    }
  }
  uVar6 = 0;
LAB_140e360c5:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3613c FUN_140e3613c body=45 status=ok
// SIG undefined FUN_140e3613c(void)

undefined8 FUN_140e3613c(undefined8 param_1,int param_2)

{
  FUN_140e3616a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2f8);
  }
  return param_1;
}



// FUNCTION 140e3616a FUN_140e3616a body=88 status=ok
// SIG undefined FUN_140e3616a(void)

void FUN_140e3616a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b02e090;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e361c2 FUN_140e361c2 body=188 status=ok
// SIG undefined FUN_140e361c2(void)

undefined8 * FUN_140e361c2(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
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
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *param_1 = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  uVar10 = *(undefined4 *)(param_2 + 0x30);
  uVar11 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 6) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar11;
  lVar12 = *(longlong *)(param_2 + 0x38);
  param_1[7] = lVar12;
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar13 = (undefined8 *)(param_2 + 0x40);
  puVar14 = param_1 + 8;
  for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  lVar12 = *(longlong *)(param_2 + 0xa0);
  param_1[0x14] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 140e3628e FUN_140e3628e body=699 status=ok
// SIG undefined FUN_140e3628e(void)

ulonglong FUN_140e3628e(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  uint *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar5 == '\0') {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x28))();
    (**(code **)(*param_1 + 0x20))(param_1,param_1[1]);
    pbVar3 = (byte *)*puVar7;
    if (pbVar3 != (byte *)0x0) {
      uVar14 = 0;
      if ((*pbVar3 & 0x6b) == 3) {
        lVar4 = *(longlong *)(pbVar3 + 8);
        uVar2 = *(uint *)(lVar4 + 0x48);
        if (uVar2 == 0) {
          uVar17 = 1;
          uVar6 = 0;
          iVar11 = 0;
        }
        else {
          puVar8 = *(uint **)(lVar4 + 0x40);
          if (*(uint **)(lVar4 + 0x40) == (uint *)0x0) {
            puVar8 = (uint *)(lVar4 + 0x30);
          }
          uVar6 = *puVar8;
          if (uVar6 == 0) {
            iVar11 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar11 = uVar2 - 1;
            }
            uVar14 = 0;
            uVar17 = (ulonglong)(uint)(iVar11 >> 5);
            if (iVar11 >> 5 < 1) {
              uVar17 = uVar14;
            }
            iVar11 = 0;
            do {
              if (uVar17 == uVar14) goto LAB_140e364b0;
              iVar11 = iVar11 + 0x20;
              uVar6 = puVar8[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar6 == 0);
          }
          else {
            uVar14 = 0;
            iVar11 = 0;
          }
          uVar17 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar17 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar6 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar6) {
            uVar6 = uVar2;
          }
        }
        if (uVar6 != uVar2) {
          uVar12 = 0xffffffff;
          local_80 = (ulonglong)uVar2;
          local_78 = (uint *)(lVar4 + 0x30);
          local_70 = param_1;
          do {
            lVar15 = *(longlong *)(lVar4 + 0x18);
            pbVar3 = *(byte **)(lVar15 + 0x28 + (longlong)(int)uVar6 * 0x40);
            fVar19 = 0.0;
            if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 1)) &&
               (*(char **)(pbVar3 + 8) != (char *)0x0)) {
              dVar18 = atof(*(char **)(pbVar3 + 8));
              fVar19 = (float)dVar18;
            }
            if (DAT_14c947fe0 == 0) {
              lVar16 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar16);
              DAT_14c947fe0 = lVar16;
            }
            FUN_140045924(DAT_14c947fe0,local_68,lVar15 + (longlong)(int)uVar6 * 0x40,1);
            FUN_140e3654a(local_70,local_68,fVar19);
            uVar12 = uVar12 & ~(uint)uVar17;
            puVar8 = *(uint **)(lVar4 + 0x40);
            if (*(uint **)(lVar4 + 0x40) == (uint *)0x0) {
              puVar8 = local_78;
            }
            uVar2 = *(uint *)(lVar4 + 0x48);
            iVar13 = (int)uVar14;
            lVar15 = (longlong)iVar13;
            uVar6 = puVar8[lVar15] & uVar12;
            if (uVar6 == 0) {
              iVar9 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar9 = uVar2 - 1;
              }
              iVar9 = iVar9 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar13) {
                iVar10 = iVar13;
              }
              if (iVar13 < iVar9) {
                lVar16 = 0;
                do {
                  uVar6 = puVar8[lVar15 + lVar16 + 1];
                  if (uVar6 != 0) {
                    uVar14 = (ulonglong)(iVar13 + (int)lVar16 + 1);
                    uVar12 = 0xffffffff;
                    goto LAB_140e3647c;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar10 - lVar15 != lVar16);
                uVar12 = 0xffffffff;
                iVar13 = iVar10;
              }
              uVar14 = (ulonglong)(iVar13 + 1);
              uVar6 = uVar2;
            }
            else {
LAB_140e3647c:
              uVar17 = (ulonglong)(-uVar6 & uVar6);
              uVar1 = uVar17 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              uVar6 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar6) {
                uVar6 = uVar2;
              }
            }
          } while (uVar6 != (uint)local_80);
        }
LAB_140e364b0:
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
      }
      goto LAB_140e364b3;
    }
  }
  uVar14 = 0;
LAB_140e364b3:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 140e3654a FUN_140e3654a body=177 status=ok
// SIG undefined FUN_140e3654a(void)

void FUN_140e3654a(longlong *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  undefined1 auStack_68 [44];
  float local_3c;
  undefined8 local_38;
  float *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_3;
  if (0.0 <= param_3) {
    if ((1e-08 < ABS(param_3)) && (param_1[1] != 0)) {
      local_38 = 0;
      FUN_1405593a8(param_1[1],&local_38,param_2);
      cVar1 = (**(code **)(*param_1 + 8))(param_1,&local_38);
      if (cVar1 != '\0') {
        local_30 = &local_3c;
        local_38 = param_2;
        FUN_144a405ac(param_1 + 4,local_24,&local_38,0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e365fc FUN_140e365fc body=477 status=ok
// SIG undefined FUN_140e365fc(void)

void FUN_140e365fc(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0x9a8) = param_4;
  *(undefined4 *)(param_1 + 0x9a4) = param_5;
  *(undefined4 *)(param_1 + 0x984) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x940) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x944) = uVar2;
  *(undefined4 *)(param_1 + 0x948) = uVar3;
  *(undefined4 *)(param_1 + 0x94c) = uVar4;
  *(undefined8 *)(param_1 + 0x950) = DAT_14c8464f0;
  iVar1 = *(int *)(param_1 + 0x964);
  FUN_1448d844e(*(undefined8 *)(param_1 + 0x958),*(undefined4 *)(param_1 + 0x960));
  *(undefined4 *)(param_1 + 0x960) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x964) != 0)) {
    FUN_1405b2360(param_1 + 0x958,0);
  }
  *(undefined4 *)(param_1 + 0x994) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x99c) = 0xfffffffe;
  FUN_140e367da(param_1 + 0x1d0);
  local_58 = *(undefined8 *)(param_1 + 0x950);
  local_68 = *(undefined4 *)(param_1 + 0x940);
  uStack_64 = *(undefined4 *)(param_1 + 0x944);
  uStack_60 = *(undefined4 *)(param_1 + 0x948);
  uStack_5c = *(undefined4 *)(param_1 + 0x94c);
  lVar5 = *(longlong *)(param_1 + 0x8f8);
  if (lVar5 != 0) {
    lVar6 = FUN_1405b04b6();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_78 = &local_3c;
      local_3c = 0;
      local_70 = local_4c;
      local_4c[0] = 0xfffffffe;
      local_44 = 0xfffffffe;
      local_98 = param_1 + 0x968;
      local_80 = 0;
      local_88 = 0x3f800000;
      local_90 = 0;
      FUN_1478ff186(param_1,lVar5,&local_68,param_1 + 0x958);
    }
  }
  if (param_2 != 0) {
    lVar5 = FUN_1405b04b6();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      FUN_1405b2104(param_2,param_1 + 0x968,2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e367da FUN_140e367da body=743 status=ok
// SIG undefined FUN_140e367da(void)

void FUN_140e367da(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  
  lVar11 = 0;
  do {
    iVar3 = *(int *)(param_1 + 0xc + lVar11);
    FUN_144803279(*(undefined8 *)(param_1 + lVar11),*(undefined4 *)(param_1 + 8 + lVar11));
    *(undefined4 *)(param_1 + 8 + lVar11) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + lVar11 + 0xc) != 0)) {
      FUN_14793444c(param_1 + lVar11,0);
    }
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x20);
  lVar11 = 0x20;
  do {
    plVar1 = (longlong *)(param_1 + lVar11);
    puVar15 = (uint *)(param_1 + lVar11 + 0x10);
    iVar3 = *(int *)(param_1 + lVar11 + 0x28);
    uVar12 = 1;
    uVar16 = 0;
    iVar17 = 0;
    iVar10 = 0;
    if (iVar3 != 0) {
      puVar5 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar5 = puVar15;
      }
      uVar14 = *puVar5;
      if (uVar14 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        uVar16 = 0;
        uVar12 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar12 = 0;
        }
        do {
          if (uVar12 == uVar16) goto LAB_140e36859;
          iVar17 = iVar17 + 0x20;
          uVar14 = puVar5[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar16 = 0;
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14);
      uVar2 = uVar12 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar10 = (iVar17 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar10) {
        iVar10 = iVar3;
      }
    }
    if (iVar10 != iVar3) {
      uVar14 = 0xffffffff;
      do {
        lVar8 = *plVar1 + (longlong)iVar10 * 0x88;
        *(undefined4 *)(lVar8 + 0x18) = 0xffffffff;
        iVar10 = *(int *)(lVar8 + 0x14);
        FUN_144803279(*(undefined8 *)(lVar8 + 8),*(undefined4 *)(lVar8 + 0x10));
        *(undefined4 *)(lVar8 + 0x10) = 0;
        if ((iVar10 < 0) && (*(int *)(lVar8 + 0x14) != 0)) {
          FUN_14793444c((undefined8 *)(lVar8 + 8),0);
        }
        *(undefined1 *)(lVar8 + 0x30) = 0;
        *(undefined4 *)(lVar8 + 0x34) = 0;
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar8 + 0x58) = 0;
        *(undefined8 *)(lVar8 + 0x60) = 0;
        *(undefined8 *)(lVar8 + 0x48) = 0;
        *(undefined8 *)(lVar8 + 0x50) = 0;
        *(undefined8 *)(lVar8 + 0x38) = 0;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined8 *)(lVar8 + 0x68) = 0;
        *(undefined8 **)(lVar8 + 0x70) = &DAT_14cacb0c0;
        *(undefined8 *)(lVar8 + 0x78) = 0;
        uVar14 = uVar14 & ~(uint)uVar12;
        puVar5 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar5 = puVar15;
        }
        iVar4 = (int)plVar1[5];
        iVar10 = (int)uVar16;
        lVar8 = (longlong)iVar10;
        uVar9 = puVar5[lVar8] & uVar14;
        if (uVar9 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar10) {
            iVar7 = iVar10;
          }
          if (iVar10 < iVar6) {
            lVar13 = 0;
            do {
              uVar9 = puVar5[lVar8 + lVar13 + 1];
              if (uVar9 != 0) {
                uVar16 = (ulonglong)(iVar10 + (int)lVar13 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140e369a0;
              }
              iVar17 = iVar17 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar7 - lVar8 != lVar13);
            uVar14 = 0xffffffff;
            iVar10 = iVar7;
          }
          uVar16 = (ulonglong)(iVar10 + 1);
          iVar10 = iVar4;
        }
        else {
LAB_140e369a0:
          uVar12 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar12 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar10 = (iVar17 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar10) {
            iVar10 = iVar4;
          }
        }
      } while (iVar10 != iVar3);
    }
LAB_140e36859:
    lVar11 = lVar11 + 0x50;
    if (lVar11 == 0xc0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 140e36ac2 FUN_140e36ac2 body=248 status=ok
// SIG undefined FUN_140e36ac2(void)

void FUN_140e36ac2(char *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 != '\0') {
    FUN_140e36bbc(param_1,&local_48);
    FUN_14018932e(&local_40,param_1 + -0x204,local_48);
    plVar4 = local_38;
    lVar3 = local_40;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
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
    }
    if (lVar3 != 0) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(lVar3);
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e36bbc FUN_140e36bbc body=120 status=ok
// SIG undefined FUN_140e36bbc(void)

undefined8 * FUN_140e36bbc(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1e78) {
    FUN_144b3d300(&DAT_14cad1e78);
    if (DAT_14cad1e78 == -1) {
      FUN_1446ddc76(&DAT_14cad1e70,"OnActorEndOverlap",1);
      _Init_thread_footer(&DAT_14cad1e78);
    }
  }
  *param_2 = DAT_14cad1e70;
  return param_2;
}



// FUNCTION 140e36c3a FUN_140e36c3a body=57 status=ok
// SIG undefined FUN_140e36c3a(void)

void FUN_140e36c3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb236a8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb236a8 = FUN_140002ddd(FUN_14643f000,uVar1,L"GpsTestSettings_PlayerDamaging");
  }
  return;
}



// FUNCTION 140e36c74 FUN_140e36c74 body=524 status=ok
// SIG undefined FUN_140e36c74(void)

void FUN_140e36c74(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14aed7c60;
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 7;
  puVar2 = param_1 + 9;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = puVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 3)) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 3));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 100)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140e36e81(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e36e81 FUN_140e36e81 body=54 status=ok
// SIG undefined FUN_140e36e81(void)

void FUN_140e36e81(longlong param_1,int param_2)

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



// FUNCTION 140e36eb8 FUN_140e36eb8 body=2065 status=ok
// SIG undefined FUN_140e36eb8(void)

void FUN_140e36eb8(longlong *param_1,longlong param_2,undefined8 param_3,double *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  uint *puVar2;
  void *_Src;
  undefined8 *puVar3;
  double _X;
  double _X_00;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  double dVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  double *pdVar25;
  double *pdVar26;
  uint uVar27;
  double *pdVar28;
  double dVar29;
  uint uVar30;
  bool bVar31;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  double *local_130;
  double local_128;
  longlong *local_120;
  longlong local_118;
  double local_110;
  undefined8 local_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined7 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar16 = *(longlong *)(param_2 + 0xa8);
  local_108 = param_3;
  if ((lVar16 != 0) && ((DAT_14caf8060 != 0 || (*(char *)(lVar16 + 0x1a4) != '\0')))) {
    if (*(char *)(lVar16 + 0x178) == '\x02') {
      bVar18 = *(byte *)(param_2 + 0x2de) & 1;
    }
    else {
      bVar18 = 0;
    }
    if ((*(char *)(lVar16 + 0x178) == '\x01') || (bVar18 != 0)) {
      lVar21 = (**(code **)(*(longlong *)(param_2 + 0x2b8) + 0x18))(param_2 + 0x2b8,&local_108);
      if ((lVar21 != 0) && (param_1[0xd] != 0)) {
        uVar11 = *(undefined1 *)(lVar16 + 0x1a4);
        lVar16 = FUN_140636f1e();
        if (lVar16 != 0) {
          dVar29 = *param_4;
          _X = param_4[1];
          _X_00 = param_4[2];
          dVar13 = param_4[3];
          dVar4 = param_4[4];
          dVar5 = param_4[5];
          dVar6 = param_4[6];
          dVar7 = param_4[7];
          dVar8 = param_4[8];
          dVar9 = param_4[9];
          dVar10 = param_4[10];
          local_128 = param_4[0xb];
          local_120 = (longlong *)param_4[0xc];
          local_110 = param_4[0xd];
          uVar12 = *(undefined1 *)(param_4 + 0xe);
          uStack_fc._0_3_ = (undefined3)((uint)*(undefined4 *)((longlong)param_4 + 0x74) >> 8);
          local_100 = *(undefined4 *)((longlong)param_4 + 0x71);
          local_118 = CONCAT44(local_118._4_4_,(float)*(double *)(lVar16 + 0x6d0));
          iVar14 = _finite(dVar29);
          if ((iVar14 != 0) && (iVar14 = _finite(_X), iVar14 != 0)) {
            _finite(_X_00);
          }
          iVar14 = (int)param_1[0xc];
          *(uint *)(param_1 + 0xc) = iVar14 + 1U;
          if (*(uint *)((longlong)param_1 + 100) < iVar14 + 1U) {
            FUN_140e37784(param_1 + 0xb,iVar14);
          }
          lVar16 = param_1[0xb];
          lVar22 = (longlong)iVar14 * 0xe0;
          *(double *)(lVar16 + lVar22) = dVar29;
          *(double *)(lVar16 + 8 + lVar22) = _X;
          *(double *)(lVar16 + 0x10 + lVar22) = _X_00;
          *(double *)(lVar16 + 0x18 + lVar22) = dVar13;
          *(double *)(lVar16 + 0x20 + lVar22) = dVar4;
          *(double *)(lVar16 + 0x28 + lVar22) = dVar5;
          *(double *)(lVar16 + 0x30 + lVar22) = dVar6;
          *(double *)(lVar16 + 0x38 + lVar22) = dVar7;
          *(double *)(lVar16 + 0x40 + lVar22) = dVar8;
          *(double *)(lVar16 + 0x48 + lVar22) = dVar9;
          *(double *)(lVar16 + 0x50 + lVar22) = dVar10;
          *(double *)(lVar16 + 0x58 + lVar22) = local_128;
          *(longlong **)(lVar16 + 0x60 + lVar22) = local_120;
          *(double *)(lVar16 + 0x68 + lVar22) = local_110;
          *(undefined1 *)(lVar16 + 0x70 + lVar22) = uVar12;
          *(ulonglong *)(lVar16 + 0x71 + lVar22) = CONCAT44(uStack_fc,local_100);
          *(ulonglong *)(lVar16 + 0x78 + lVar22) = CONCAT71(uStack_f8,uStack_fc._3_1_);
          *(undefined8 *)(lVar16 + 0x80 + lVar22) = 0;
          *(undefined4 *)(lVar16 + 0x88 + lVar22) = (undefined4)local_118;
          *(undefined4 *)(lVar16 + 0x8c + lVar22) = 0;
          *(undefined4 *)(lVar16 + 0xc0 + lVar22) = param_5;
          *(longlong *)(lVar16 + 200 + lVar22) = lVar21;
          *(undefined1 *)(lVar16 + 0xd0 + lVar22) = uVar11;
        }
      }
      goto LAB_140e37374;
    }
  }
  if ((param_1[0xd] == 0) || (lVar16 = FUN_140636f1e(), lVar16 == 0)) {
LAB_140e37374:
    if ((local_f0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_118 = lVar16;
  if (param_2 == 0) {
    uVar30 = 0;
    uVar15 = 0;
  }
  else {
    uVar30 = *(uint *)(param_2 + 0xc);
    if ((int)uVar30 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar15 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      uVar27 = DAT_14c964868 + 1;
      bVar31 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar31) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar27);
      }
      LOCK();
      uVar15 = *(uint *)(lVar16 + 0x10);
      bVar31 = uVar15 == 0;
      if (bVar31) {
        *(uint *)(lVar16 + 0x10) = uVar27;
        uVar15 = 0;
      }
      UNLOCK();
      if (bVar31) {
        uVar15 = uVar27;
      }
    }
  }
  plVar1 = param_1 + 1;
  uVar27 = uVar15 ^ uVar30;
  local_100 = uVar30;
  uStack_fc = uVar15;
  iVar14 = FUN_140e376cc(plVar1,uVar27);
  if (iVar14 != -1) {
    if (*plVar1 + (longlong)iVar14 * 0x100 != 0) {
      lVar16 = *plVar1 + (longlong)iVar14 * 0x100;
      goto LAB_140e37023;
    }
  }
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    uVar24 = *(uint *)(param_1 + 2);
    local_128 = (double)(ulonglong)uVar24;
    *(uint *)(param_1 + 2) = uVar24 + 1;
    if (*(uint *)((longlong)param_1 + 0x14) == uVar24) {
      FUN_1457b6af6(plVar1);
      uVar24 = SUB84(local_128,0);
    }
    lVar16 = (longlong)(int)uVar24;
    local_120 = param_1 + 3;
    iVar14 = FUN_144a54ea4(local_120,1);
    plVar17 = (longlong *)param_1[5];
    if ((longlong *)param_1[5] == (longlong *)0x0) {
      plVar17 = local_120;
    }
    iVar19 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar19 = iVar14;
    }
    bVar18 = (byte)iVar14 & 0x1f;
    puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar19 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
    dVar29 = local_128;
  }
  else {
    uVar24 = *(uint *)(param_1 + 7);
    lVar16 = (longlong)(int)uVar24;
    iVar14 = *(int *)(param_1[1] + 4 + lVar16 * 0x100);
    *(int *)(param_1 + 7) = iVar14;
    iVar19 = *(int *)((longlong)param_1 + 0x3c) + -1;
    *(int *)((longlong)param_1 + 0x3c) = iVar19;
    dVar29 = (double)(ulonglong)uVar24;
    if (iVar19 != 0) {
      *(undefined4 *)(param_1[1] + (longlong)iVar14 * 0x100) = 0xffffffff;
    }
  }
  iVar14 = 1;
  iVar19 = SUB84(dVar29,0);
  plVar17 = param_1 + 3;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[5];
  }
  iVar20 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar20 = iVar19;
  }
  puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar20 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << (SUB81(dVar29,0) & 0x1f);
  lVar21 = param_1[1];
  lVar16 = lVar16 * 0x100;
  _Src = (void *)(lVar21 + lVar16);
  *(ulonglong *)(lVar21 + lVar16) = CONCAT44(uVar15,uVar30);
  puVar3 = (undefined8 *)(lVar21 + 0x10 + lVar16);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar21 + 0x20 + lVar16) = 0;
  puVar3 = (undefined8 *)(lVar21 + 0x30 + lVar16);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar21 + 0x40 + lVar16) = 0;
  *(undefined8 *)(lVar21 + 0x48 + lVar16) = 0x3ff0000000000000;
  puVar3 = (undefined8 *)(lVar21 + 0x50 + lVar16);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar21 + 0x60 + lVar16);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar21 + 0x70 + lVar16);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(lVar21 + 0x80 + lVar16) = 0;
  puVar3 = (undefined8 *)(lVar21 + 0x90 + lVar16);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(lVar21 + 0xd0 + lVar16) = 0;
  *(undefined8 *)(lVar21 + 0xd8 + lVar16) = 0;
  *(undefined4 *)(lVar21 + 0xf0 + lVar16) = 0xffffffff;
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) == 1) {
    uVar15 = 1;
LAB_140e374f3:
    iVar19 = SUB84(dVar29,0);
    if (((int)uVar15 < 1) || (iVar14 <= (int)param_1[10])) {
      uVar27 = (int)param_1[10] - 1U & uVar27;
      *(uint *)((longlong)_Src + 0xf4) = uVar27;
      plVar17 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar17 = param_1 + 8;
      }
      *(undefined4 *)((longlong)_Src + 0xf0) =
           *(undefined4 *)
            ((longlong)plVar17 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar27) * 4);
      plVar17 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar17 = param_1 + 8;
      }
      *(int *)((longlong)plVar17 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar27) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 10) = iVar14;
      FUN_140e37898(plVar1);
    }
  }
  else {
    local_128 = dVar29;
    local_100 = uVar30;
    uStack_fc = uVar15;
    iVar19 = FUN_140e376cc(plVar1,uVar27);
    if (iVar19 == -1) {
      uVar15 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x3c);
      dVar29 = local_128;
      if (uVar15 < 4) {
        iVar14 = 1;
      }
      else {
        uVar23 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar16 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar16 & 0x1f);
      }
      goto LAB_140e374f3;
    }
    memmove((void *)((longlong)iVar19 * 0x100 + *plVar1),_Src,0xf0);
    FUN_14063724c(plVar1,local_128);
  }
  lVar16 = *plVar1 + (longlong)iVar19 * 0x100;
  *(double *)(lVar16 + 200) = param_4[2];
  dVar29 = param_4[1];
  *(double *)(lVar16 + 0xb8) = *param_4;
  *(double *)(lVar16 + 0xc0) = dVar29;
  *(double *)(lVar16 + 0xb0) = param_4[2];
  dVar29 = param_4[1];
  *(double *)(lVar16 + 0xa0) = *param_4;
  *(double *)(lVar16 + 0xa8) = dVar29;
  param_3 = local_108;
LAB_140e37023:
  pdVar25 = (double *)(lVar16 + 0x10);
  *(undefined4 *)(lVar16 + 0xd0) = param_5;
  pdVar26 = param_4;
  pdVar28 = pdVar25;
  for (lVar21 = 0xf; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar28 = *pdVar26;
    pdVar26 = pdVar26 + 1;
    pdVar28 = pdVar28 + 1;
  }
  *(undefined8 *)(lVar16 + 0x90) = param_3;
  *(float *)(lVar16 + 0x98) = (float)*(double *)(local_118 + 0x6d0);
  iVar14 = _finite(*(double *)(lVar16 + 0xb8));
  if ((iVar14 != 0) && (iVar14 = _finite(*(double *)(lVar16 + 0xc0)), iVar14 != 0)) {
    _finite(*(double *)(lVar16 + 200));
  }
  iVar14 = _finite(*(double *)(lVar16 + 0xa0));
  if ((iVar14 != 0) && (iVar14 = _finite(*(double *)(lVar16 + 0xa8)), iVar14 != 0)) {
    _finite(*(double *)(lVar16 + 0xb0));
  }
  iVar14 = _finite(*pdVar25);
  if ((iVar14 != 0) && (iVar14 = _finite(*(double *)(lVar16 + 0x18)), iVar14 != 0)) {
    _finite(*(double *)(lVar16 + 0x20));
  }
  local_138 = param_5;
  local_130 = pdVar25;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_158);
}



// FUNCTION 140e376cc FUN_140e376cc body=183 status=ok
// SIG undefined FUN_140e376cc(void)

int FUN_140e376cc(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x100);
        cVar1 = FUN_140206d5c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140e3775d;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xf0 + (longlong)iVar4 * 0x100);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140e3775d:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e37784 FUN_140e37784 body=274 status=ok
// SIG undefined FUN_140e37784(void)

void FUN_140e37784(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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
    uVar5 = lVar4 * 0xe0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140e37898 FUN_140e37898 body=445 status=ok
// SIG undefined FUN_140e37898(void)

void FUN_140e37898(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x100;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xf4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xf0 + lVar7) =
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



// FUNCTION 140e37a56 FUN_140e37a56 body=51 status=ok
// SIG undefined FUN_140e37a56(void)

void FUN_140e37a56(longlong param_1,longlong param_2)

{
  FUN_140e37a8a();
  if ((param_2 == 0) || (*(char *)(param_2 + 0x10) != '\x01')) {
    param_2 = 0;
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  return;
}



// FUNCTION 140e37a8a FUN_140e37a8a body=162 status=ok
// SIG undefined FUN_140e37a8a(void)

void FUN_140e37a8a(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_140e37b2c();
  if (param_2 == 0) {
LAB_140e37b05:
    param_2 = 0;
  }
  else {
    cVar1 = *(char *)(param_2 + 0x10);
    if ((((cVar1 != '\x01') && (cVar1 != '\x10')) && (cVar1 != ' ')) && (cVar1 != -0x80))
    goto LAB_140e37b05;
  }
  if (*(longlong *)(param_2 + 0x108) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x108) + 0x1c);
    if ((((-1 < (longlong)iVar3) && (iVar3 < *(int *)(*(longlong *)(param_1 + 8) + 0xc0))) &&
        (lVar4 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0xb8) + (longlong)iVar3 * 8),
        lVar4 != 0)) &&
       (((bVar2 = *(byte *)(lVar4 + 0x10), bVar2 - 1 < 2 ||
         ((bVar2 < 0x21 && ((0x100010010U >> ((ulonglong)(uint)bVar2 & 0x3f) & 1) != 0)))) ||
        (bVar2 == 0x80)))) goto LAB_140e37ae6;
  }
  lVar4 = 0;
LAB_140e37ae6:
  *(longlong *)(param_1 + 0x108) = lVar4;
  return;
}



// FUNCTION 140e37b2c FUN_140e37b2c body=1089 status=ok
// SIG undefined FUN_140e37b2c(void)

void FUN_140e37b2c(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  if ((param_2 == 0) ||
     ((bVar1 = *(byte *)(param_2 + 0x10), 1 < bVar1 - 1 &&
      (((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) == 0)) &&
       (bVar1 != 0x80)))))) {
    param_2 = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x50);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 == -1) {
          puVar11 = &DAT_14cc07c00;
          puVar7 = &DAT_14c846480;
          puVar8 = &DAT_14cc07c00;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x50);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 == -1) {
          puVar11 = &DAT_14cc07c00;
          puVar7 = &DAT_14c846480;
          puVar8 = &DAT_14cc07c00;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x70);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 == -1) {
          puVar11 = &DAT_14cc07c00;
          puVar7 = &DAT_14c846480;
          puVar8 = &DAT_14cc07c00;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x70);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x80);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 == -1) {
          puVar11 = &DAT_14cc07c00;
          puVar7 = &DAT_14c846480;
          puVar8 = &DAT_14cc07c00;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x80);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  FUN_140e37f6e(param_1 + 0x88,param_2 + 0x88);
  lVar4 = param_1 + 200;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) < 0) {
    FUN_1457b6b7c(lVar4,0);
  }
  iVar5 = *(int *)(param_2 + 0x100);
  if (-1 < iVar5) {
    if (*(int *)(param_1 + 0x104) < iVar5) {
      FUN_1457b6b7c();
      iVar5 = *(int *)(param_2 + 0x100);
    }
    if (0 < iVar5) {
      lVar9 = 8;
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0xf8);
        if (*(longlong *)(param_2 + 0xf8) == 0) {
          lVar3 = param_2 + 200;
        }
        iVar5 = *(int *)(*(longlong *)(lVar3 + -8 + lVar9) + 0x1c);
        if (((((longlong)iVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0xc0) <= iVar5)) ||
            (lVar6 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0xb8) + (longlong)iVar5 * 8),
            lVar6 == 0)) ||
           (((bVar1 = *(byte *)(lVar6 + 0x10), 1 < bVar1 - 1 &&
             ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) == 0)))) &&
            (bVar1 != 0x80)))) {
          lVar6 = 0;
        }
        uVar2 = *(undefined4 *)(lVar3 + lVar9);
        iVar5 = *(int *)(param_1 + 0x100);
        *(uint *)(param_1 + 0x100) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x104) < iVar5 + 1U) {
          FUN_1466d18ec(lVar4,iVar5);
        }
        lVar3 = *(longlong *)(param_1 + 0xf8);
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          lVar3 = lVar4;
        }
        *(longlong *)(lVar3 + (longlong)iVar5 * 0x10) = lVar6;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = uVar2;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar10 < *(int *)(param_2 + 0x100));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 140e37f6e FUN_140e37f6e body=135 status=ok
// SIG undefined FUN_140e37f6e(void)

void FUN_140e37f6e(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar1 = &DAT_14bb83710;
    if (*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x18);
    }
    **(undefined1 **)(param_1 + 0x18) = *puVar1;
  }
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = &DAT_14bb83710;
    if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 8);
    }
    **(undefined1 **)(param_1 + 8) = *puVar1;
  }
  if (*(undefined1 **)(param_1 + 0x38) != (undefined1 *)0x0) {
    puVar1 = &DAT_14bb83710;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x38);
    }
    **(undefined1 **)(param_1 + 0x38) = *puVar1;
  }
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
    puVar1 = &DAT_14bb83710;
    if (*(undefined1 **)(param_2 + 0x28) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x28);
    }
    **(undefined1 **)(param_1 + 0x28) = *puVar1;
  }
  return;
}



// FUNCTION 140e38004 FUN_140e38004 body=45 status=ok
// SIG undefined FUN_140e38004(void)

undefined8 FUN_140e38004(undefined8 param_1,int param_2)

{
  FUN_140e38032();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140e38032 FUN_140e38032 body=159 status=ok
// SIG undefined FUN_140e38032(void)

void FUN_140e38032(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b10ff30;
  FUN_140e380d1(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140358fe5(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140753a84(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 140e380d1 FUN_140e380d1 body=47 status=ok
// SIG undefined FUN_140e380d1(void)

void FUN_140e380d1(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_14051f4c4(param_1);
      param_1 = param_1 + 200;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e3810c FUN_140e3810c body=308 status=ok
// SIG undefined FUN_140e3810c(void)

undefined8 * FUN_140e3810c(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14b2ec8f0;
  param_1[5] = &PTR_FUN_14b2eced0;
  param_1[6] = &PTR_LAB_14b2ecf10;
  param_1[0x55] = &PTR_FUN_14b2ecf60;
  *(undefined1 *)(param_1 + 0x56) = 1;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x45eacbb4;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d9) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0xf00000d0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x67) = 2;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0xbf800000;
  FUN_140e38240(param_1 + 0x70);
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  *(undefined4 *)(param_1 + 0x13d) = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  *(undefined4 *)(param_1 + 0x142) = 0;
  FUN_140b967fa(param_1,0);
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  return param_1;
}



// FUNCTION 140e38240 FUN_140e38240 body=523 status=ok
// SIG undefined FUN_140e38240(void)

void FUN_140e38240(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0xffffffffffffffff;
  param_1[0x3f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0x800000000;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0x2000000000;
  param_1[0xa5] = 0xffffffff;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0x7fffffff;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0x400000000;
  param_1[0xb5] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined1 *)(param_1 + 0xb9) = 1;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0xbf800000;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0x200000000;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) & 0xfe;
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xfe;
  param_1[0xb6] = 0;
  *(undefined2 *)(param_1 + 0xb7) = 0xffff;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ba) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0x80;
  return;
}



// FUNCTION 140e38458 FUN_140e38458 body=110 status=ok
// SIG undefined FUN_140e38458(void)

undefined8 FUN_140e38458(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1470e037c(param_1,param_2,uVar3,uVar2);
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x28))();
    FUN_14078506c(param_1,param_2,uVar2);
  }
  return 1;
}



// FUNCTION 140e384c6 FUN_140e384c6 body=84 status=ok
// SIG undefined FUN_140e384c6(void)

void FUN_140e384c6(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_140e3851c(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3851c FUN_140e3851c body=85 status=ok
// SIG undefined FUN_140e3851c(void)

void FUN_140e3851c(undefined8 *param_1,longlong param_2)

{
  FUN_140e38572(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140e3860a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x54,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 140e38572 FUN_140e38572 body=151 status=ok
// SIG undefined FUN_140e38572(void)

void FUN_140e38572(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140e385a5;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_140e385a5:
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
                    /* WARNING: Could not recover jumptable at 0x000140e385f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140e3860a FUN_140e3860a body=186 status=ok
// SIG undefined FUN_140e3860a(void)

void FUN_140e3860a(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_140e3863f;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_140e3863f:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  bVar1 = *(byte *)((longlong)plVar5 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_1 + 4);
    }
  }
  *(longlong *)(lVar3 + (longlong)param_3 * (ulonglong)bVar1) = lVar4;
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140e3869d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140e386c4 FUN_140e386c4 body=37 status=ok
// SIG undefined FUN_140e386c4(void)

undefined8 * FUN_140e386c4(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
  }
  else {
    if (param_3 != 1) {
      return (undefined8 *)(ulonglong)param_3;
    }
    puVar2 = (undefined8 *)(param_1 + 0x490);
    in_RAX = (undefined8 *)&DAT_00000001;
  }
  if (puVar2 == param_2) {
    return in_RAX;
  }
  if (*(char *)(puVar2 + 0x8f) == '\x01') {
    FUN_144908ac8(puVar2 + 0x46);
    FUN_144908ac8(puVar2);
  }
  *puVar2 = *param_2;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
  puVar2[2] = 0;
  FUN_14007b208(puVar2 + 3,param_2 + 3);
  FUN_14007b350(puVar2 + 0x17,param_2 + 0x17);
  puVar2[0x43] = 0;
  *(undefined4 *)(puVar2 + 0x44) = 0;
  FUN_14007b0d4(puVar2 + 0x43,param_2 + 0x43);
  *(undefined4 *)(puVar2 + 0x45) = *(undefined4 *)(param_2 + 0x45);
  puVar2[0x46] = param_2[0x46];
  *(undefined4 *)(puVar2 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  puVar2[0x48] = 0;
  FUN_14007b208(puVar2 + 0x49,param_2 + 0x49);
  FUN_14007b350(puVar2 + 0x5d,param_2 + 0x5d);
  puVar2[0x89] = 0;
  *(undefined4 *)(puVar2 + 0x8a) = 0;
  FUN_14007b0d4(puVar2 + 0x89,param_2 + 0x89);
  *(undefined4 *)(puVar2 + 0x8b) = *(undefined4 *)(param_2 + 0x8b);
  uVar1 = param_2[0x8d];
  puVar2[0x8c] = param_2[0x8c];
  puVar2[0x8d] = uVar1;
  *(undefined8 *)((longlong)puVar2 + 0x46d) = *(undefined8 *)((longlong)param_2 + 0x46d);
  *(undefined1 *)(puVar2 + 0x8f) = 1;
  return puVar2;
}



// FUNCTION 140e386ea FUN_140e386ea body=643 status=ok
// SIG undefined FUN_140e386ea(void)

undefined8 * FUN_140e386ea(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xf00000d0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xf00000d0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x17] = &PTR_FUN_14b023b20;
  param_1[0x1a] = &PTR_FUN_14b023b40;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = &PTR_FUN_14b00be70;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xf00000d0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 1;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf00000d0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xf00000d0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 6;
  param_1[0x2b] = 0;
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
  param_1[0x2c] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xf00000d0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 140e3896e FUN_140e3896e body=19 status=ok
// SIG undefined FUN_140e3896e(void)

bool FUN_140e3896e(void)

{
  char cVar1;
  
  cVar1 = FUN_140e38982();
  return cVar1 == '\x02';
}



// FUNCTION 140e38982 FUN_140e38982 body=1806 status=ok
// SIG undefined FUN_140e38982(void)

ulonglong FUN_140e38982(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong unaff_RBP;
  undefined7 uVar14;
  ulonglong uVar13;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_458 [32];
  longlong *local_438;
  undefined8 *local_430;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  longlong local_3f8 [5];
  undefined4 local_3d0 [2];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined2 local_354;
  undefined1 local_352;
  undefined4 local_351;
  longlong *local_348;
  longlong local_340;
  longlong local_338;
  uint local_330;
  undefined8 uStack_32c;
  undefined8 uStack_324;
  undefined1 local_318 [704];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar7 = param_2[1];
  local_348 = param_3;
  local_340 = param_4;
  if (lVar7 == 0) {
    uVar6 = FUN_1407ad36c();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  if (param_2[2] == 0) {
    unaff_RBP = 0;
    if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_140e38e20;
    plVar8 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar7 = FUN_144aff482(uVar6,param_2);
      param_2[2] = lVar7;
      if (lVar7 != 0) goto LAB_140e389e5;
    }
  }
  else {
LAB_140e389e5:
    lVar7 = FUN_141889e76(*(undefined8 *)(param_1 + 0x50),param_2);
    if (param_3 != (longlong *)0x0 && lVar7 != 0) {
      plVar8 = (longlong *)FUN_14017698e(param_3);
      uVar14 = (undefined7)(unaff_RBP >> 8);
      unaff_RBP = CONCAT71(uVar14,1);
      if (((plVar8 == (longlong *)0x0) ||
          (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 == 0)) ||
         (cVar3 = FUN_14017695c(lVar9,0), cVar3 != '\0')) goto LAB_140e38e20;
      local_3d0[0] = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      uStack_39c = 0;
      local_398 = 0;
      uStack_394 = 0;
      uStack_390 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_358 = 0xffffffff;
      local_354 = 0;
      uVar13 = CONCAT71(uVar14,1);
      local_352 = 1;
      local_351 = 0;
      FUN_1407abeca(&local_330,plVar8);
      uStack_3c0 = CONCAT44((undefined4)uStack_32c,local_330);
      local_3b8 = CONCAT44((undefined4)uStack_324,uStack_32c._4_4_);
      local_351._0_3_ = CONCAT12(1,(undefined2)local_351);
      lVar9 = param_2[1];
      if (lVar9 == 0) {
        uVar6 = FUN_1407ad36c();
        lVar9 = FUN_14477b664(uVar6);
        param_2[1] = lVar9;
      }
      lVar10 = param_2[2];
      if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*param_2 != 0)) {
        plVar1 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar10 = FUN_144aff482(uVar6,param_2);
        }
        param_2[2] = lVar10;
      }
      if (local_3a8 != *(longlong *)(lVar10 + 0x18)) {
        local_398 = 0;
        uStack_394 = 0;
      }
      if (CONCAT44(uStack_39c,uStack_3a0) != *(longlong *)(lVar10 + 0x20)) {
        local_398 = 0;
        uStack_394 = 0;
      }
      local_3a8 = *(longlong *)(lVar10 + 0x18);
      uVar6 = FUN_14477b664();
      uVar6 = FUN_14477b664(uVar6);
      uStack_3a0 = (undefined4)uVar6;
      uStack_39c = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_398 = (undefined4)*(undefined8 *)(lVar10 + 0x28);
      uStack_394 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
      local_3f8[2] = 0;
      local_3f8[3] = 0;
      local_3f8[0] = 0;
      local_3f8[1] = 0;
      local_3f8[4] = 0;
      local_408 = 0;
      uStack_400 = 0;
      lVar9 = (**(code **)(*local_348 + 0x180))();
      if (lVar9 == 0) {
        uVar15 = 0;
        uVar11 = 0;
      }
      else {
        uVar15 = *(uint *)(lVar9 + 0xc);
        if ((int)uVar15 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar11 = (ulonglong)*(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar12 = DAT_14c964868 + 1;
          uVar13 = (ulonglong)uVar12;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar13);
          }
          LOCK();
          uVar5 = *(uint *)(lVar9 + 0x10);
          bVar16 = uVar5 == 0;
          if (bVar16) {
            *(uint *)(lVar9 + 0x10) = uVar12;
            uVar5 = 0;
          }
          UNLOCK();
          uVar11 = (ulonglong)uVar5;
          if (bVar16) {
            uVar11 = uVar13;
          }
        }
      }
      uStack_32c = (ulonglong)uVar15 | uVar11 << 0x20;
      local_330 = local_330 & 0xffffff00;
      uStack_324 = 0;
      local_58 = 0;
      local_50 = 0x800000000;
      lVar9 = FUN_140316ff8();
      FUN_1407aea1c(&local_330,lVar9 + 0x1b0,&local_348);
      if (local_340 != 0) {
        lVar9 = FUN_140316ff8();
        FUN_1407aea1c(&local_330,lVar9 + 0x198,&local_340);
      }
      FUN_14067aea4(param_1,&local_330);
      local_430 = &local_408;
      local_438 = local_3f8;
      cVar3 = FUN_143d68312(*(undefined8 *)(param_1 + 0x50),&local_330,lVar7,local_3d0);
      if (cVar3 == '\0') {
        unaff_RBP = 0;
      }
      else {
        lVar7 = param_2[1];
        if (lVar7 == 0) {
          uVar6 = FUN_1407ad36c();
          lVar7 = FUN_14477b664(uVar6);
          param_2[1] = lVar7;
        }
        lVar9 = param_2[2];
        if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*param_2 != 0)) {
          plVar1 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
            lVar9 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar9 = FUN_144aff482(uVar6,param_2);
          }
          param_2[2] = lVar9;
        }
        lVar7 = *(longlong *)(lVar9 + 0x18);
        local_420 = lVar7;
        uVar6 = FUN_14477b664(*(undefined8 *)(lVar9 + 0x20));
        local_418 = FUN_14477b664(uVar6);
        lVar9 = *(longlong *)(lVar9 + 0x28);
        local_410 = lVar9;
        if (local_418 == 0) {
          uVar6 = FUN_14065b502();
          local_418 = FUN_14477b664(uVar6);
        }
        if (lVar9 == 0) {
          local_410 = 0;
          if ((lVar7 != 0) && (local_418 != 0)) {
            plVar1 = *(longlong **)(local_418 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              local_410 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
              local_410 = FUN_144aff482(uVar6,&local_420);
              if (local_410 != 0) goto LAB_140e38d9c;
            }
          }
          lVar7 = FUN_140317ef6(local_3f8);
          if (local_418 == 0) {
            uVar6 = FUN_14065b502();
            local_418 = FUN_14477b664(uVar6);
          }
          lVar9 = FUN_14065b502();
          uVar6 = FUN_14065b502();
          FUN_1402d1bfa(&local_338,uVar6,lVar7);
          if (local_420 != local_338) {
            local_410 = 0;
          }
          local_420 = local_338;
          lVar10 = FUN_14065b502();
          if (lVar9 == 0) {
LAB_140e38f48:
            lVar10 = lVar9;
          }
          else if (lVar10 == 0) {
            lVar10 = 0;
          }
          else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                   lVar10 + 0x30)) goto LAB_140e38f48;
          if (local_418 != lVar10) {
            local_410 = 0;
          }
          uVar6 = FUN_14477b664(lVar10);
          local_418 = FUN_14477b664(uVar6);
          if ((local_418 != 0) && (local_420 != 0)) {
            local_410 = lVar7;
          }
        }
LAB_140e38d9c:
        lVar7 = FUN_14494f566(local_3f8);
        if (lVar7 == 0) {
          uVar4 = 0;
        }
        else {
          uVar6 = FUN_14494f566(local_3f8);
          uVar4 = FUN_141889c9a(uVar6);
        }
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x228);
        uVar14 = (undefined7)(uVar13 >> 8);
        unaff_RBP = CONCAT71(uVar14,2);
        if (lVar7 != 0) {
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
          lVar7 = lVar7 << 7;
          do {
            local_338 = *param_2;
            local_430 = (undefined8 *)CONCAT71(local_430._1_7_,uVar4);
            local_438 = plVar8;
            cVar3 = FUN_14065b57c(lVar9,&local_338,param_2,&local_420);
            if (cVar3 != '\0') {
              unaff_RBP = CONCAT71(uVar14,1);
              break;
            }
            lVar9 = lVar9 + 0x80;
            lVar7 = lVar7 + -0x80;
          } while (lVar7 != 0);
        }
      }
      FUN_1407acd04(local_318);
      goto LAB_140e38e20;
    }
  }
  unaff_RBP = 0;
LAB_140e38e20:
  if ((local_48 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 140e39092 FUN_140e39092 body=9 status=ok
// SIG undefined FUN_140e39092(void)

void FUN_140e39092(longlong param_1)

{
  FUN_140e3909c(param_1 + 0x10);
  return;
}



// FUNCTION 140e3909c FUN_140e3909c body=181 status=ok
// SIG undefined FUN_140e3909c(void)

void FUN_140e3909c(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14b42cc80;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    uVar2 = *(uint *)(param_1 + 7);
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar6 != 0) &&
         (((*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x3c) &&
           ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) && (param_1[6] != 0)))) {
        cVar4 = FUN_144729dda(param_1 + 5);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*(longlong *)param_1[6] + 0x10))();
          lVar6 = FUN_14479d2ce(param_1 + 7);
          FUN_1412ec3f2(uVar5,*(undefined8 *)(lVar6 + 0xa8));
        }
      }
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e39113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140e39176 FUN_140e39176 body=57 status=ok
// SIG undefined FUN_140e39176(void)

void FUN_140e39176(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65b88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65b88 = FUN_140002ddd(FUN_14650bd56,uVar1,L"GbxSkillStateMachineStateDef");
  }
  return;
}



// FUNCTION 140e391b0 FUN_140e391b0 body=57 status=ok
// SIG undefined FUN_140e391b0(void)

void FUN_140e391b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65a98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65a98 = FUN_140002ddd(FUN_141858932,uVar1,L"GbxSkillStateMachineRegisterDef");
  }
  return;
}



// FUNCTION 140e391ea FUN_140e391ea body=114 status=ok
// SIG undefined FUN_140e391ea(void)

undefined8 FUN_140e391ea(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_140e3925c(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
    FUN_146854a14(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 140e3925c FUN_140e3925c body=199 status=ok
// SIG undefined FUN_140e3925c(void)

int FUN_140e3925c(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_140e392a2:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_140e3930f;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140e3930f;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140e392bc;
    }
  }
  return -1;
LAB_140e3930f:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140e392bc:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140e392a2;
}



// FUNCTION 140e39323 FUN_140e39323 body=376 status=ok
// SIG undefined FUN_140e39323(void)

void FUN_140e39323(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14a469a90;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
  puVar1[0x21] = 0;
  *(undefined4 *)(puVar1 + 0x22) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x11c) = 0;
  puVar1[0x25] = 0;
  *(undefined4 *)(puVar1 + 0x26) = 0;
  puVar1[0x2b] = 0;
  *(undefined4 *)(puVar1 + 0x2c) = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x16c) = 0;
  puVar1[0x2f] = 0;
  *(undefined4 *)(puVar1 + 0x30) = 0;
  FUN_140e3949c(puVar1 + 0x31);
  puVar1[0x59] = 2;
  puVar1[0x5a] = 2;
  *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x2dc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x2e4) = 0xffffffff;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5f] = 0;
  puVar1[0x60] = 0;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  puVar1[99] = 0;
  puVar1[100] = 0;
  puVar1[0x65] = 2;
  puVar1[0x66] = 2;
  *(undefined4 *)(puVar1 + 0x67) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x33c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x68) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x344) = 0xffffffff;
  memset(puVar1 + 0x69,0,0xd0);
  *(byte *)((longlong)puVar1 + 0x41b) = *(byte *)((longlong)puVar1 + 0x41b) & 0xfc;
  *(undefined2 *)(puVar1 + 0x83) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x41a) = 0;
  return;
}



// FUNCTION 140e3949c FUN_140e3949c body=189 status=ok
// SIG undefined FUN_140e3949c(void)

void FUN_140e3949c(undefined4 *param_1)

{
  *param_1 = DAT_14cab2070;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 2;
  *(undefined8 *)(param_1 + 8) = 2;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0x3f800000;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0xffffffff00000080;
  param_1[0x33] = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  param_1[0x44] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x45) = 0xffffffff00000080;
  param_1[0x47] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 3;
  return;
}



// FUNCTION 140e3955a FUN_140e3955a body=51 status=ok
// SIG undefined FUN_140e3955a(void)

undefined8 * FUN_140e3955a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_140dbff46(0,param_3);
  FUN_140e3958d(uVar1,param_1 + 0x20,param_2);
  return param_2;
}



// FUNCTION 140e3958d FUN_140e3958d body=110 status=ok
// SIG undefined FUN_140e3958d(void)

undefined8 FUN_140e3958d(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined ***local_38;
  undefined **local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &PTR_FUN_149fcf710;
  local_18 = local_10;
  local_20 = param_3;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_38 = &local_28;
    uVar1 = FUN_1411bde97(*(undefined8 *)(param_1 + 0x10),param_1,0,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e395fc FUN_140e395fc body=253 status=ok
// SIG undefined FUN_140e395fc(void)

void FUN_140e395fc(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1403d7d42(*(undefined8 *)(param_1 + 0x1240),*(undefined4 *)(param_1 + 0x1248));
  *(undefined4 *)(param_1 + 0x1248) = 0;
  if (*(int *)(param_1 + 0x124c) != 0) {
    FUN_1487c0838(param_1 + 0x1240);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x178) == '\x03') {
      FUN_1403569b4(param_1 + 0x19d0);
    }
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10c8) + 0x20))(param_1 + 0x10c8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x868) + 0x30))(param_1 + 0x868);
  uVar2 = FUN_1408a1fe2(uVar2);
  FUN_140d526ba(uVar2,0);
  FUN_140e396fa(param_1 + 0x1260,0);
  FUN_1405213ee(param_1 + 0x8f8);
  FUN_140e39776(param_1 + 0x1808);
  FUN_14078a7c0(param_1 + 0x1280);
  *(undefined1 *)(param_1 + 0x1541) = 1;
  FUN_14067171c(param_1 + 0x1508);
  *(undefined8 *)(param_1 + 0x1508) = 0;
  FUN_140872622(param_1);
  return;
}



// FUNCTION 140e396fa FUN_140e396fa body=124 status=ok
// SIG undefined FUN_140e396fa(void)

void FUN_140e396fa(longlong *param_1)

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



// FUNCTION 140e39776 FUN_140e39776 body=1209 status=ok
// SIG undefined FUN_140e39776(void)

void FUN_140e39776(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
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
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if ((((*(int *)(param_1 + 0x78) < 1) || (*(int *)(param_1 + 0x15c) == 0)) ||
      (uVar2 = *(uint *)(param_1 + 0x158), (int)uVar2 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar2 ||
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0)) ||
      (((int)plVar11[2] != *(int *)(param_1 + 0x15c) ||
       (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
        (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)))))))) goto LAB_140e39a4d;
  if (DAT_14cb1c498 == 0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_1427b09ee;
    local_78 = &LAB_147e36893;
    local_80 = FUN_146420564;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10004001;
    local_a0 = 8;
    local_a8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498);
  }
  plVar6 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,DAT_14cb1c498);
  if (plVar6 != (longlong *)0x0) {
    if (DAT_14cb1c498 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_147e36893;
      local_80 = FUN_146420564;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498);
    }
    plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14cb1c498);
    if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
      lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar10 = *(longlong *)(param_1 + 0x178);
      if ((lVar10 != 0) && (cVar4 = FUN_14480f766(lVar8 + 0x30,lVar10), cVar4 == '\0')) {
        FUN_14480f766(lVar8 + 0x48,lVar10);
      }
    }
  }
  uVar9 = FUN_1447210f0(plVar11);
  FUN_140362812(&local_50,uVar9);
  if (local_48 == (longlong *)0x0) goto LAB_140e39a4d;
  iVar5 = (int)local_48[1];
  do {
    if (iVar5 == 0) {
      plVar6 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar12 = (int)local_48[1];
    bVar15 = iVar5 == iVar12;
    if (bVar15) {
      *(int *)(local_48 + 1) = iVar5 + 1;
      iVar12 = iVar5;
    }
    iVar5 = iVar12;
    UNLOCK();
    plVar6 = local_48;
  } while (!bVar15);
  LOCK();
  piVar1 = (int *)((longlong)local_48 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_48 + 0x10))();
  }
  pcVar3 = local_50;
  if (plVar6 == (longlong *)0x0) goto LAB_140e39a4d;
  if (local_50 != (code *)0x0) {
    uVar9 = FUN_1407725cc();
    lVar10 = FUN_144718840(plVar11,uVar9);
    if (lVar10 != 0) {
      uVar2 = *(uint *)((longlong)plVar11 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (iVar5 == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar8 + 0x10);
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(lVar8 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar5 = iVar12;
        }
        if (iVar5 == 0) goto LAB_140e39a30;
      }
      if (((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
           (lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 != 0)) &&
          ((*(int *)(lVar8 + 0x10) == iVar5 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) &&
         (pcVar3[0x68] == (code)0x0)) {
        iVar5 = *(int *)(pcVar3 + 0x60);
        if ((longlong)iVar5 != 0) {
          lVar8 = *(longlong *)(pcVar3 + 0x58);
          iVar12 = 1;
          lVar14 = 0;
          lVar13 = 0;
          do {
            if (*(longlong *)(lVar8 + 8 + lVar14) == lVar10) {
              if (iVar12 != 0) {
                lVar10 = (lVar13 >> 0x20) * 0x10;
                memmove((void *)(lVar8 + lVar10),(void *)(lVar8 + lVar10 + 0x10),
                        (longlong)(iVar5 - iVar12) << 4);
                *(int *)(pcVar3 + 0x60) = *(int *)(pcVar3 + 0x60) + -1;
              }
              break;
            }
            lVar13 = lVar13 + 0x100000000;
            iVar12 = iVar12 + 1;
            lVar14 = lVar14 + 0x10;
          } while ((longlong)iVar5 << 4 != lVar14);
        }
      }
    }
  }
LAB_140e39a30:
  LOCK();
  plVar11 = plVar6 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_140e39a4d:
  FUN_140872c8a(param_1);
  *(undefined1 *)(param_1 + 0x181) = 4;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e39c4e FUN_140e39c4e body=1663 status=ok
// SIG undefined FUN_140e39c4e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140e39c4e(longlong param_1,byte param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  char cVar14;
  longlong *plVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *local_108;
  float *local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  longlong local_e0 [5];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0xb0) == 0)) goto LAB_140e3a1af;
  lVar9 = (longlong)(*(int *)(param_1 + 0xb0) + -1) * 0x68;
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x10 + lVar9);
  if (plVar10 == (longlong *)0x0) {
LAB_140e39d17:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_158);
  }
  lVar9 = *(longlong *)(param_1 + 0xa8) + lVar9;
  if (((((*(int *)(lVar9 + 0xc) == 0) || (uVar4 = *(uint *)(lVar9 + 8), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar11 == 0 ||
       (*(int *)(lVar11 + 0x10) != *(int *)(lVar9 + 0xc))))) ||
     ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) goto LAB_140e39d17;
  cVar14 = *(char *)(param_1 + 0x9c);
  cVar3 = *(char *)(param_1 + 0x9d);
  if ((*(uint *)(lVar11 + 8) & 0x10200000) != 0) goto LAB_140e39d7f;
  lVar11 = (**(code **)(*plVar10 + 0x10))();
  cVar16 = '\x01';
  if ((*(char *)(lVar9 + 0x60) == '\0') &&
     ((lVar11 == 0 || ((*(int *)(lVar11 + 0x18c) != 3 && (*(char *)(lVar11 + 400) == '\0')))))) {
    if ((*(char *)(param_1 + 0xa4) == '\0') && (cVar5 = FUN_144904448(lVar9 + 0x48), cVar5 == '\0'))
    {
      cVar16 = *(char *)(param_1 + 0x9c);
      goto LAB_140e3a175;
    }
    lVar11 = FUN_140316ff8();
    fVar19 = *(float *)(lVar11 + 0x658);
    fVar1 = *(float *)(lVar11 + 0x65c);
    fVar2 = *(float *)(lVar11 + 0x660);
    fVar18 = *(float *)(lVar11 + 0x664);
    if (*(char *)(param_1 + 0xa4) != '\0') {
      if ((((*(longlong **)(lVar9 + 0x10) == (longlong *)0x0) || (*(int *)(lVar9 + 0xc) == 0)) ||
          (uVar4 = *(uint *)(lVar9 + 8), (int)uVar4 < 0)) ||
         (((DAT_14c9647dc <= (int)uVar4 ||
           (lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar11 == 0)) ||
          ((*(int *)(lVar11 + 0x10) != *(int *)(lVar9 + 0xc) ||
           (((*(uint *)(lVar11 + 8) & 0x10200000) != 0 ||
            (lVar11 = (**(code **)(**(longlong **)(lVar9 + 0x10) + 0x18))(), lVar11 == 0)))))))) {
        fVar18 = 0.0;
        goto LAB_140e3a0ca;
      }
      lVar13 = *(longlong *)(lVar11 + 0x1c8);
      if (lVar13 == 0) {
        local_118 = DAT_14c8464f0;
        local_128 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_120 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_128 = *(longlong *)(lVar13 + 0x260);
        uStack_120 = *(undefined8 *)(lVar13 + 0x268);
        local_118 = *(undefined8 *)(lVar13 + 0x270);
      }
      plVar10 = (longlong *)FUN_1447210f0(lVar11);
      if ((plVar10 != (longlong *)0x0) && (DAT_14cb259f8 != 0)) {
        local_100 = &local_94;
        local_94 = 3.4e+38;
        local_f0 = &local_b8;
        local_a8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_e8 = local_e0 + 1;
        local_e0[3] = 0;
        local_e0[1] = 0;
        local_e0[2] = 0;
        local_f8 = local_e0;
        local_e0[0] = 0;
        local_108 = &local_128;
        if (DAT_14cb25ab0 == '\x01') {
          lVar11 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
          if (lVar11 != 0) {
            plVar15 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
            local_130 = plVar15 + lVar11 * 2;
            plVar12 = local_130;
            local_138 = plVar10;
            do {
              while ((*plVar15 != 0 && (*(longlong **)(*plVar15 + 8) == plVar10))) {
                bVar6 = FUN_140072078(&local_108);
                plVar15 = plVar15 + 2;
                plVar12 = local_130;
                plVar10 = local_138;
                if ((bVar6 & plVar15 != local_130) == 0) goto LAB_140e3a096;
              }
              plVar15 = plVar15 + 2;
            } while (plVar15 != plVar12);
LAB_140e3a096:
            if (local_e0[0] != 0) {
              if (local_94 < 0.0) {
                fVar17 = sqrtf(local_94);
              }
              else {
                fVar17 = SQRT(local_94);
              }
              fVar18 = (float)FUN_1406653e8(fVar17,fVar18);
              goto LAB_140e3a0ca;
            }
          }
        }
      }
LAB_140e39d7f:
      cVar16 = '\0';
      goto LAB_140e3a175;
    }
    FUN_140665294(lVar9 + 0x48,&local_108);
    plVar15 = local_108;
    plVar10 = *(longlong **)(lVar9 + 0x48);
    if (((plVar10 == (longlong *)0x0) || (*(longlong *)(lVar9 + 0x50) == -1)) ||
       (*plVar10 != *(longlong *)(lVar9 + 0x50))) {
      if ((local_108 != (longlong *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(local_108[10]);
      }
      goto LAB_140e39d7f;
    }
    *(int *)(plVar10 + 0x21) = (int)plVar10[0x21] + 1;
    local_138 = plVar10;
    iVar8 = _finite((double)*(float *)((longlong)local_108 + 0x4c));
    plVar10 = local_138;
    local_130 = plVar15;
    if ((iVar8 != 0) && (fVar17 = *(float *)((longlong)plVar15 + 0x4c), 0.0001 < fVar17)) {
      fVar18 = fVar17;
    }
    fVar18 = (float)FUN_1406653e8((int)local_138[0x42],fVar18);
    *(int *)(plVar10 + 0x21) = (int)plVar10[0x21] + -1;
    if (((int)plVar10[0x26] < 1) && (FUN_1400847bc(plVar10 + 0x17,0), (int)plVar10[0x21] == 0)) {
      FUN_140087e46(plVar10);
      if (*plVar10 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140e39f33;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_138);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_138);
      }
    }
LAB_140e39f33:
    if ((local_130 != (longlong *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(local_130[10]);
    }
LAB_140e3a0ca:
    if (param_2 == 0) {
      bVar6 = *(byte *)(param_1 + 0x9c);
      if (fVar18 <= fVar1) {
        bVar7 = 1;
        if (fVar19 <= fVar18) {
          bVar7 = bVar6;
        }
        if ((fVar19 <= fVar18 || (bVar6 & 1) != 0) ||
           (fVar19 = *(float *)(param_1 + 0xa0), bVar7 = bVar6, fVar19 - fVar18 <= fVar2))
        goto LAB_140e3a159;
LAB_140e3a169:
        if (fVar19 <= fVar18) {
          fVar18 = fVar19;
        }
        *(float *)(param_1 + 0xa0) = fVar18;
        goto LAB_140e3a175;
      }
      if ((bVar6 != 0) && (bVar7 = bVar6, fVar18 - *(float *)(param_1 + 0xa0) <= fVar2)) {
LAB_140e3a159:
        if ((bVar7 & 1) != 0) {
          fVar19 = *(float *)(param_1 + 0xa0);
          goto LAB_140e3a169;
        }
      }
      if (fVar18 <= *(float *)(param_1 + 0xa0)) {
        fVar18 = *(float *)(param_1 + 0xa0);
      }
      *(float *)(param_1 + 0xa0) = fVar18;
      goto LAB_140e39d7f;
    }
    *(float *)(param_1 + 0xa0) = fVar18;
    fVar19 = (fVar19 + fVar1) * 0.5;
    cVar16 = fVar18 < fVar19;
    *(bool *)(param_1 + 0x9c) = fVar18 < fVar19;
    *(bool *)(param_1 + 0x9d) = fVar18 < fVar19;
LAB_140e3a192:
    if (cVar14 != cVar16) {
      if (cVar16 == '\0') {
        if ((longlong)*(int *)(param_1 + 0x88) != 0) {
          lVar11 = param_1 + 0x80;
          lVar13 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0x80) + 8 + lVar13) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar13) != 0)) {
              param_3 = 0;
              goto LAB_140e3a2dc;
            }
            lVar13 = lVar13 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x88) * 0x10 != lVar13);
        }
      }
      else if ((longlong)*(int *)(param_1 + 0x70) != 0) {
        lVar11 = param_1 + 0x68;
        lVar13 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x68) + 8 + lVar13) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar13) != 0)) goto LAB_140e3a2dc;
          lVar13 = lVar13 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x70) * 0x10 != lVar13);
      }
    }
    goto LAB_140e3a197;
  }
LAB_140e3a175:
  *(char *)(param_1 + 0x9c) = cVar16;
  *(char *)(param_1 + 0x9d) = cVar16;
  if ((cVar14 == cVar16 & (param_2 ^ 1)) == 0) goto LAB_140e3a192;
LAB_140e3a1a6:
  if (cVar14 == cVar3) {
LAB_140e3a1af:
    if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_140e3a27f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_158);
LAB_140e3a2dc:
  FUN_148d17efc(lVar11,lVar9,param_3);
LAB_140e3a197:
  if (param_2 != 0) goto LAB_140e3a27f;
  cVar14 = *(char *)(param_1 + 0x9d);
  goto LAB_140e3a1a6;
}



// FUNCTION 140e3a34c FUN_140e3a34c body=40 status=ok
// SIG undefined FUN_140e3a34c(void)

undefined8 FUN_140e3a34c(undefined8 param_1,int param_2)

{
  FUN_140e3a374();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e3a374 FUN_140e3a374 body=2211 status=ok
// SIG undefined FUN_140e3a374(void)

void FUN_140e3a374(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14a7d9600;
  param_1[5] = &PTR_FUN_14a7d98a0;
  param_1[6] = &PTR_FUN_14a7d98e0;
  param_1[7] = &PTR_FUN_14a7d9910;
  FUN_144760e21(param_1[0xb6],*(undefined4 *)(param_1 + 0xb7));
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb1));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)((longlong)param_1 + 0x544) != 0) {
    FUN_1401ad22e(param_1 + 0xa7,0);
  }
  param_1[0xad] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x564)) {
    *(undefined4 *)((longlong)param_1 + 0x564) = 0x80;
    FUN_1446efbd8(param_1 + 0xa9,0);
  }
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa6) = 0;
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 0x9f);
  iVar5 = *(int *)(param_1 + 0xa2);
  if (iVar5 == 0) {
    uVar12 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar13 = 0;
  }
  else {
    puVar10 = (uint *)param_1[0xa1];
    if ((uint *)param_1[0xa1] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      uVar12 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar16 == uVar12) goto LAB_140e3a5c0;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar10[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar15 & uVar15);
    uVar4 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  if (iVar6 < iVar5) {
    uVar15 = 0xffffffff;
    do {
      FUN_140f76f64(*(undefined8 *)(param_1[0x9d] + 8 + (longlong)iVar6 * 0x18));
      uVar15 = ~(uint)uVar16 & uVar15;
      puVar10 = (uint *)param_1[0xa1];
      if ((uint *)param_1[0xa1] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar5 = *(int *)(param_1 + 0xa2);
      iVar6 = (int)uVar12;
      lVar14 = (longlong)iVar6;
      uVar7 = puVar10[lVar14] & uVar15;
      if (uVar7 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar7 = puVar10[lVar14 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar14 == lVar11) goto LAB_140e3a5c0;
        }
        uVar12 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar15 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar4 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar5);
  }
LAB_140e3a5c0:
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if (*(int *)((longlong)param_1 + 0x4f4) != 0) {
    FUN_144727cd0(param_1 + 0x9d,0);
  }
  param_1[0xa3] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x514)) {
    *(undefined4 *)((longlong)param_1 + 0x514) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 0x92);
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x89],*(undefined4 *)(param_1 + 0x8a));
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3acee(param_1 + 0x7a);
  *(undefined4 *)(param_1 + 0x79) = 0;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 0x70;
  puVar3 = param_1 + 0x72;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = puVar3;
  if (*(int *)(param_1 + 0x75) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = plVar2;
  if (iStack_44 < *(int *)(local_50 + 3)) {
    do {
      FUN_140f76f64(*(undefined8 *)(*local_80 + 8 + (longlong)iStack_64 * 0x18));
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 3));
  }
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (*(int *)((longlong)param_1 + 0x38c) != 0) {
    FUN_144727cd0(plVar2,0);
  }
  param_1[0x76] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3ac)) {
    *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (*(int *)((longlong)param_1 + 0x334) != 0) {
    FUN_1401ad22e(param_1 + 0x65,0);
  }
  param_1[0x6b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x354)) {
    *(undefined4 *)((longlong)param_1 + 0x354) = 0x80;
    FUN_1446efbd8(param_1 + 0x67,0);
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3acaf(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e));
  FUN_144760e21(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x51);
  FUN_140e3ac18(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3ac78(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3aee2(param_1 + 0x37,0);
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3ac47(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f6ec(param_1 + 10);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_144760e82(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3ac18 FUN_140e3ac18 body=47 status=ok
// SIG undefined FUN_140e3ac18(void)

void FUN_140e3ac18(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e3ac47 FUN_140e3ac47 body=49 status=ok
// SIG undefined FUN_140e3ac47(void)

void FUN_140e3ac47(longlong param_1,int param_2)

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



// FUNCTION 140e3ac78 FUN_140e3ac78 body=55 status=ok
// SIG undefined FUN_140e3ac78(void)

void FUN_140e3ac78(longlong *param_1)

{
  FUN_140e3ad64(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e3acaf FUN_140e3acaf body=63 status=ok
// SIG undefined FUN_140e3acaf(void)

void FUN_140e3acaf(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e3acee FUN_140e3acee body=118 status=ok
// SIG undefined FUN_140e3acee(void)

void FUN_140e3acee(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e3ad64 FUN_140e3ad64 body=381 status=ok
// SIG undefined FUN_140e3ad64(void)

void FUN_140e3ad64(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_14794328a(*local_70 + (longlong)iStack_54 * 0x80 + 8);
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
    FUN_14095c99c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e3aee2 FUN_140e3aee2 body=384 status=ok
// SIG undefined FUN_140e3aee2(void)

void FUN_140e3aee2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_1400020a8();
      }
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
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e3b072 FUN_140e3b072 body=143 status=ok
// SIG undefined FUN_140e3b072(void)

undefined8 * FUN_140e3b072(undefined8 *param_1,int param_2)

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



// FUNCTION 140e3b102 FUN_140e3b102 body=514 status=ok
// SIG undefined FUN_140e3b102(void)

void FUN_140e3b102(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [36];
  longlong local_34;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e3b306();
  plVar1 = *(longlong **)(param_2 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14060edb4();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      if ((*(char *)(param_1 + 0x28) == '\x01') && ((longlong *)(param_1 + 0x2c) != plVar1 + 2)) {
        *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined1 *)((longlong)plVar1 + 0x14) = 1;
      }
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (plVar1[3] != lVar2) {
        plVar1[5] = 0;
      }
      plVar1[3] = lVar2;
      if (plVar1[4] != *(longlong *)(param_1 + 0x40)) {
        plVar1[5] = 0;
      }
      uVar4 = FUN_14477b664();
      lVar2 = FUN_14477b664(uVar4);
      plVar1[4] = lVar2;
      plVar1[5] = *(longlong *)(param_1 + 0x48);
      if (*(char *)(param_1 + 0x30) == '\x01') {
        *(byte *)((longlong)plVar1 + 0xd) = *(byte *)((longlong)plVar1 + 0xd) | 2;
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        local_28 = *(longlong *)(param_1 + 0x50);
        FUN_1401533ba(&local_34,&local_28,1);
        *(undefined4 *)(plVar1 + 7) = local_2c;
        plVar1[6] = local_34;
        *(byte *)((longlong)plVar1 + 0xd) = *(byte *)((longlong)plVar1 + 0xd) | 2;
      }
      lVar2 = *(longlong *)(param_1 + 0x68);
      if (plVar1[8] != lVar2) {
        plVar1[10] = 0;
      }
      plVar1[8] = lVar2;
      if (plVar1[9] != *(longlong *)(param_1 + 0x70)) {
        plVar1[10] = 0;
      }
      uVar4 = FUN_14477b664();
      lVar2 = FUN_14477b664(uVar4);
      plVar1[9] = lVar2;
      plVar1[10] = *(longlong *)(param_1 + 0x78);
      lVar2 = *(longlong *)(param_1 + 0x80);
      if (plVar1[0xb] != lVar2) {
        plVar1[0xd] = 0;
      }
      plVar1[0xb] = lVar2;
      if (plVar1[0xc] != *(longlong *)(param_1 + 0x88)) {
        plVar1[0xd] = 0;
      }
      uVar4 = FUN_14477b664();
      lVar2 = FUN_14477b664(uVar4);
      plVar1[0xc] = lVar2;
      plVar1[0xd] = *(longlong *)(param_1 + 0x90);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3b306 FUN_140e3b306 body=722 status=ok
// SIG undefined FUN_140e3b306(void)

void FUN_140e3b306(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar3 = (ushort *)(*(longlong *)(param_2 + 0x10) + 0xc);
    *puVar3 = *puVar3 & 0xfffe;
  }
  if (*param_3 != 0) {
    cVar6 = *(char *)(param_1 + 8);
    plVar10 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    plVar1 = plVar10 + 3;
    if (cVar6 == '\x01') {
      *plVar10 = (longlong)&PTR_LAB_14b41ddb0;
      plVar10[5] = 0;
      plVar10[6] = 0;
      *plVar1 = 0;
      plVar10[4] = 0;
      plVar10[7] = 0;
      plVar10[5] = 0;
      plVar10[6] = 0;
      *(undefined4 *)(plVar10 + 7) = 0;
      plVar10[8] = 0;
      plVar10[9] = 0;
      plVar10[2] = (longlong)&PTR_FUN_14b3e2b50;
    }
    else {
      *plVar10 = (longlong)&PTR_FUN_14b4024d0;
      plVar10[5] = 0;
      plVar10[6] = 0;
      *plVar1 = 0;
      plVar10[4] = 0;
      plVar10[7] = 0;
      plVar10[2] = (longlong)&PTR_FUN_14b3e4b50;
      *(undefined1 *)((longlong)plVar10 + 0x19) = 0;
      *(undefined4 *)(plVar10 + 4) = 0;
      plVar10[5] = 0;
      plVar10[6] = 0;
      *(undefined4 *)(plVar10 + 7) = 0;
      plVar10[8] = 0;
      plVar10[9] = 0;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar10 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar4 = (int *)((longlong)plVar10 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    *(undefined1 *)(plVar10 + 3) = 0xb;
    FUN_140c25b54(plVar1);
    local_48 = param_3[2];
    local_50 = *(undefined8 *)param_3;
    FUN_144928d62(plVar10 + 5,0);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    iVar7 = *(int *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x28) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x2c) < iVar7 + 1U) {
      FUN_140823c34((longlong *)(param_2 + 0x20),iVar7);
    }
    lVar8 = *(longlong *)(param_2 + 0x20);
    *(longlong **)(lVar8 + (longlong)iVar7 * 0x10) = plVar10 + 2;
    *(longlong **)(lVar8 + 8 + (longlong)iVar7 * 0x10) = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar4 = (int *)((longlong)plVar10 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar4 = (int *)((longlong)plVar10 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar4 = (int *)((longlong)plVar10 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar7 = *(int *)(param_2 + 0x38);
    *(uint *)(param_2 + 0x38) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x3c) < iVar7 + 1U) {
      FUN_1410f5714((longlong *)(param_2 + 0x30),iVar7);
    }
    lVar8 = *(longlong *)(param_2 + 0x30);
    lVar11 = (longlong)iVar7 * 0x10;
    puVar5 = (undefined8 *)(lVar8 + lVar11);
    *(undefined8 *)(lVar8 + lVar11) = 0;
    iVar7 = *(int *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(int *)(lVar8 + 8 + lVar11) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    }
    else {
      FUN_14055313c(puVar5,iVar7,0);
      FUN_140553097(*puVar5,uVar9,iVar7);
    }
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x14);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3b5da FUN_140e3b5da body=57 status=ok
// SIG undefined FUN_140e3b5da(void)

ulonglong FUN_140e3b5da(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      uVar2 = FUN_140e3b614(param_1 + 0x650);
      return uVar2 ^ 1;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  uVar2 = FUN_140675246();
  return uVar2;
}



// FUNCTION 140e3b614 FUN_140e3b614 body=103 status=ok
// SIG undefined FUN_140e3b614(void)

undefined8 FUN_140e3b614(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if ((((lVar2 != 0) && (*(longlong *)(lVar1 + 0x18 + lVar5) != 0)) &&
          (*(int *)(lVar2 + 0x20) != 0)) &&
         ((cVar4 = FUN_144b3e610(lVar2 + 0x90), cVar4 != '\0' &&
          (*(longlong *)(lVar1 + 0x30 + lVar5) != 0)))) {
        return 1;
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)(int)lVar3 * 0x48 != lVar5);
  }
  return 0;
}



// FUNCTION 140e3b67c FUN_140e3b67c body=619 status=ok
// SIG undefined FUN_140e3b67c(void)

void FUN_140e3b67c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,4,0x10);
  local_38 = 4;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_140e3b804:
    *local_40 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b4303d0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = &DAT_1489a3204;
    *(undefined4 *)(local_40 + 6) = 0;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_140e3b804;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_40 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b4303d0;
    local_40[3] = uVar5;
    local_40[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_40[5] = &DAT_1489a3204;
    *(undefined4 *)(local_40 + 6) = 0;
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
  FUN_140e3b8e8(uVar3,&local_30,&local_40);
  *(undefined8 *)(param_1 + 0x70) = local_30;
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_140e3b7a1;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140e3b7a1:
  FUN_140e3b9b0(*(undefined8 *)(param_1 + 0x50),param_1 + 0x48);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e3b8e8 FUN_140e3b8e8 body=199 status=ok
// SIG undefined FUN_140e3b8e8(void)

undefined8 FUN_140e3b8e8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_14009d848(&local_38,param_3);
  FUN_1448b6402(param_1 + 0xd8,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_140e3b94b;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140e3b94b:
  FUN_140bef70c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3b9b0 FUN_140e3b9b0 body=694 status=ok
// SIG undefined FUN_140e3b9b0(void)

ulonglong FUN_140e3b9b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 8))(param_2,&local_48);
  lVar8 = *(longlong *)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 0x70);
  lVar10 = (longlong)iVar7;
  if (lVar10 != 0) {
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar8 + lVar12) == local_48) {
        uVar11 = 0;
        goto LAB_140e3bb97;
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar10 << 4 != lVar12);
  }
  *(uint *)(param_1 + 0x70) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar7 + 1U) {
    FUN_140e3bdf6((longlong *)(param_1 + 0x68),iVar7);
    lVar8 = *(longlong *)(param_1 + 0x68);
  }
  *(longlong *)(lVar8 + lVar10 * 0x10) = local_48;
  *(longlong **)(lVar8 + 8 + lVar10 * 0x10) = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_58 = 0;
  uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  local_50 = CONCAT31(local_50._1_3_,uVar5);
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar8 == 0) {
    local_58 = 0;
    iVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar8 + 0xc);
    local_58 = CONCAT44(local_58._4_4_,uVar3);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
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
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar7 = iVar9;
      }
    }
  }
  local_58 = CONCAT44(iVar7,(undefined4)local_58);
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x48);
    cVar4 = (char)local_50;
    lVar10 = (longlong)*(int *)(param_1 + 0x50) << 6;
    do {
      cVar6 = FUN_140e3bc8e(lVar8,&local_58);
      if ((cVar6 != '\0') && (*(char *)(lVar8 + 8) == cVar4)) {
        if (lVar8 != 0) goto LAB_140e3bb3b;
        break;
      }
      lVar8 = lVar8 + 0x40;
      lVar10 = lVar10 + -0x40;
    } while (lVar10 != 0);
  }
  iVar7 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
    FUN_140e3bcf6(param_1 + 0x48,iVar7);
  }
  lVar10 = *(longlong *)(param_1 + 0x48);
  lVar12 = (longlong)iVar7 * 0x40;
  lVar8 = lVar10 + lVar12;
  FUN_140e3bc67(lVar8);
  *(undefined4 *)(lVar10 + 8 + lVar12) = local_50;
  *(undefined8 *)(lVar10 + lVar12) = local_58;
  iVar7 = *(int *)(param_1 + 0xfc);
  *(int *)(param_1 + 0xfc) = iVar7 + 1;
  *(int *)(lVar10 + 0xc + lVar12) = iVar7;
LAB_140e3bb3b:
  *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  iVar7 = *(int *)(param_1 + 0xf4);
  *(int *)(param_1 + 0xf4) = iVar7 + 1;
  iVar9 = *(int *)(lVar8 + 0x20);
  *(uint *)(lVar8 + 0x20) = iVar9 + 1U;
  if (*(uint *)(lVar8 + 0x24) < iVar9 + 1U) {
    FUN_1446f48e2(lVar8 + 0x18,iVar9);
  }
  *(int *)(*(longlong *)(lVar8 + 0x18) + (longlong)iVar9 * 4) = iVar7;
  param_2[3] = CONCAT44(iVar7,*(undefined4 *)(lVar8 + 0xc));
  (**(code **)(*param_2 + 0x20))(param_2,0);
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 2;
  uVar11 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_140e3bb97:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 140e3bc67 FUN_140e3bc67 body=38 status=ok
// SIG undefined FUN_140e3bc67(void)

void FUN_140e3bc67(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 140e3bc8e FUN_140e3bc8e body=104 status=ok
// SIG undefined FUN_140e3bc8e(void)

ulonglong FUN_140e3bc8e(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140e3bcf6 FUN_140e3bcf6 body=255 status=ok
// SIG undefined FUN_140e3bcf6(void)

void FUN_140e3bcf6(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140e3bdf6 FUN_140e3bdf6 body=269 status=ok
// SIG undefined FUN_140e3bdf6(void)

void FUN_140e3bdf6(longlong param_1,int param_2)

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



// FUNCTION 140e3bf04 FUN_140e3bf04 body=40 status=ok
// SIG undefined FUN_140e3bf04(void)

undefined8 FUN_140e3bf04(undefined8 param_1,int param_2)

{
  FUN_140e3bf2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e3bf2c FUN_140e3bf2c body=112 status=ok
// SIG undefined FUN_140e3bf2c(void)

void FUN_140e3bf2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae90270;
  param_1[5] = &PTR_FUN_14ae90df0;
  param_1[6] = &PTR_LAB_14ae90e30;
  param_1[0x55] = &PTR_FUN_14ae90e80;
  param_1[0x56] = &PTR_FUN_14ae90f00;
  param_1[0x57] = &PTR_FUN_14ae90f10;
  if (param_1[0x336] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb64c8(param_1);
  return;
}



// FUNCTION 140e3bfa2 FUN_140e3bfa2 body=57 status=ok
// SIG undefined FUN_140e3bfa2(void)

void FUN_140e3bfa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3fb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3fb8 = FUN_140002ddd(FUN_1465fa8cc,uVar1,L"UIMovementTypeDef");
  }
  return;
}



// FUNCTION 140e3bfdc FUN_140e3bfdc body=14 status=ok
// SIG undefined FUN_140e3bfdc(void)

void FUN_140e3bfdc(longlong param_1,undefined4 param_2)

{
  FUN_140e3bfea(param_1,*(undefined1 *)(param_1 + 0xbd8),param_2);
  return;
}



// FUNCTION 140e3bfea FUN_140e3bfea body=1019 status=ok
// SIG undefined FUN_140e3bfea(void)

void FUN_140e3bfea(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined1 auStack_58 [44];
  short local_2c;
  undefined1 local_2a;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar8 = param_1[0x1ac];
  if (((lVar8 == DAT_14cb95120) || (lVar8 == DAT_14cb94e38)) || (lVar8 == DAT_14cb94e50))
  goto LAB_140e3c1b2;
  uVar11 = param_2 & 0xffffffff;
  bVar12 = (byte)param_3;
  if (bVar12 == 0) {
    cVar3 = (**(code **)(*param_1 + 0x838))(param_1,uVar11);
    if (cVar3 == '\0') {
      iVar6 = (int)(param_2 & 0xff);
      if (iVar6 < (int)param_1[0x17e]) {
        plVar1 = *(longlong **)
                  (param_1[0x17d] + 0x10 + (ulonglong)(uint)(iVar6 << 7) + (param_2 & 0xff) * 8);
        if (plVar1 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar1 + 0x2f8))();
          if ((cVar3 != '\0') && (param_1[0x36] != 0)) {
            cVar3 = FUN_1449ce97a();
            if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
            }
          }
        }
      }
      goto LAB_140e3c1b2;
    }
  }
  plVar1 = (longlong *)param_1[0x36];
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x700))(plVar1);
    if (cVar3 == '\0') {
      pcVar2 = *(code **)(*plVar1 + 0x5e8);
      if (pcVar2 == FUN_140972dde) {
        if (plVar1[0x76] == 0) {
          pcVar2 = *(code **)(*plVar1 + 0x5f8);
          if (pcVar2 == FUN_144784df4) {
            if (*(code **)(plVar1[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (((*(int *)((longlong)plVar1 + 0x75b4) == 0) ||
                  (uVar5 = *(uint *)(plVar1 + 0xeb6), (int)uVar5 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar5 ||
                  (((plVar10 = (longlong *)
                               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                    plVar10 == (longlong *)0x0 ||
                    ((int)plVar10[2] != *(int *)((longlong)plVar1 + 0x75b4))) ||
                   ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))))) goto LAB_140e3c10a;
              if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                lVar8 = *plVar10;
              }
              else {
                lVar8 = 0;
              }
              lVar8 = lVar8 + 0x110;
            }
            else {
              lVar8 = (**(code **)(plVar1[0x784] + 0x18))(plVar1 + 0x784);
            }
            if (lVar8 == 0) goto LAB_140e3c10a;
            lVar8 = *(longlong *)(lVar8 + 0x20);
          }
          else {
            lVar8 = (*pcVar2)(plVar1);
          }
          if (lVar8 == 0) goto LAB_140e3c10a;
          lVar8 = *(longlong *)(lVar8 + 0x3b0);
          goto LAB_140e3c309;
        }
      }
      else {
        lVar8 = (*pcVar2)(plVar1);
LAB_140e3c309:
        if (lVar8 == 0) goto LAB_140e3c10a;
      }
      if ((char)param_1[0x19a] != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      goto LAB_140e3c1b2;
    }
  }
LAB_140e3c10a:
  if (param_1[0x1ac] == DAT_14cb94e30) {
    if ((*(byte *)(param_1 + 0x172) & 2) == 0) {
      cVar3 = (**(code **)(*param_1 + 0x830))(param_1,uVar11,param_3);
      if (cVar3 != '\0') {
        *(byte *)(param_1 + 0x19a) = bVar12 + 1;
      }
      goto LAB_140e3c1b2;
    }
    FUN_145784dac(param_1);
  }
  param_2 = param_2 & 0xff;
  iVar6 = (int)param_2;
  if (((iVar6 < (int)param_1[0x17e]) &&
      (lVar8 = param_1[0x17d],
      *(longlong *)(lVar8 + 8 + (ulonglong)(uint)(iVar6 << 7) + param_2 * 8) != 0)) &&
     ((*(longlong *)(lVar8 + 0x20 + (ulonglong)(uint)(iVar6 << 7) + param_2 * 8) == 0 &&
      ((plVar1 = *(longlong **)(lVar8 + 0x10 + (ulonglong)(uint)(iVar6 << 7) + param_2 * 8),
       plVar1 != (longlong *)0x0 && ((*(byte *)((longlong)plVar1 + 0x91) & 4) != 0)))))) {
    cVar3 = (**(code **)(*plVar1 + 0x338))(plVar1,0);
    if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x898))(param_1,uVar11,param_3);
  if (cVar3 != '\0') {
    uVar5 = rand();
    iVar9 = (int)(((float)(uVar5 & 0x7fff) / 32767.0) * 65535.0);
    iVar6 = 0xfffe;
    if (iVar9 < 0xfffe) {
      iVar6 = iVar9;
    }
    sVar4 = (short)iVar6 + 1;
    *(short *)(param_1 + 0x17c) = sVar4;
    if ((char)param_1[0x2f] != '\x03') {
      local_2c = sVar4;
      uVar7 = FUN_14477b072(param_1,DAT_14cb93918);
      (**(code **)(*param_1 + 0x248))(param_1,uVar7,&local_2c);
      local_29 = bVar12 | 2;
      if (*(char *)((longlong)param_1 + 0xb51) == '\0') {
        local_29 = bVar12;
      }
      local_2a = (char)uVar11;
      uVar7 = FUN_14477b072(param_1,DAT_14cb93928);
      (**(code **)(*param_1 + 0x248))(param_1,uVar7,&local_2a);
    }
  }
LAB_140e3c1b2:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3c430 FUN_140e3c430 body=71 status=ok
// SIG undefined FUN_140e3c430(void)

undefined4 FUN_140e3c430(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x830))();
  if ((char)uVar1 != '\0') {
    *(byte *)(param_1 + 0x1aa) = *(byte *)(param_1 + 0x1aa) & 0xfd | param_3 * '\x02';
    FUN_1408bd412(param_1,&DAT_14cb95100);
  }
  return uVar1;
}



// FUNCTION 140e3c4aa FUN_140e3c4aa body=352 status=ok
// SIG undefined FUN_140e3c4aa(void)

undefined8 FUN_140e3c4aa(longlong param_1,byte param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xd60);
  uVar4 = 0;
  if (((lVar5 != DAT_14cb95120) && (lVar5 != DAT_14cb94e38)) && (lVar5 != DAT_14cb94e50)) {
    if ((*(longlong *)(param_1 + 0xb18) != 0) &&
       (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x18))();
      cVar3 = FUN_1403ae2fa(uVar4,2,0);
      if (cVar3 == '\0') {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 0xd60);
    }
    if ((((lVar5 == DAT_14cb94e50) || (*(int *)(param_1 + 0xbf0) <= (int)(uint)param_2)) ||
        ((lVar5 = (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8,
         plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10 + lVar5),
         *(longlong *)(*(longlong *)(param_1 + 0xbe8) + 0x20 + lVar5) == 0 &&
         ((plVar1 == (longlong *)0x0 ||
          (cVar3 = (**(code **)(*plVar1 + 0x2f8))(plVar1), cVar3 == '\0')))))) ||
       (((uVar4 = 1, *(char *)(param_1 + 0xb51) == '\0' &&
         ((*(byte *)(*(longlong *)(param_1 + 0xbe8) + 5 +
                    (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8) & 1) == 0)) &&
        ((plVar1 == (longlong *)0x0 ||
         ((cVar3 = (**(code **)(*plVar1 + 0x318))(plVar1), cVar3 == '\0' &&
          ((param_3 == '\0' ||
           (((plVar2 = *(longlong **)(param_1 + 0x1b0), plVar2 != (longlong *)0x0 &&
             ((cVar3 = (**(code **)(*plVar2 + 0x700))(plVar2), cVar3 != '\0' ||
              ((plVar2[0x78] == 0 && (*(char *)(param_1 + 0x178) == '\x03')))))) ||
            (cVar3 = (**(code **)(*plVar1 + 0x348))(plVar1,0), cVar3 == '\0')))))))))))) {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 140e3c618 FUN_140e3c618 body=115 status=ok
// SIG undefined FUN_140e3c618(void)

undefined8 * FUN_140e3c618(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3ca7c0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5a359(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e3c68b FUN_140e3c68b body=49 status=ok
// SIG undefined FUN_140e3c68b(void)

longlong FUN_140e3c68b(void)

{
  if (DAT_14c9a03a0 == 0) {
    FUN_140f50038(&DAT_14c9a03a0,&PTR_s__Script_GbxNexus_14a163357_1_14a163338);
  }
  return DAT_14c9a03a0;
}



// FUNCTION 140e3c6bc FUN_140e3c6bc body=325 status=ok
// SIG undefined FUN_140e3c6bc(void)

void FUN_140e3c6bc(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 uVar7;
  longlong lVar6;
  
  if ((longlong *)param_1[0xd0a] == (longlong *)0x0) {
LAB_140e3c7f0:
    *(int *)((longlong)param_1 + 0x56c) = (int)param_1[0xad];
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[0xd0a] + 0xd08))();
    plVar4 = (longlong *)param_1[0xd0a];
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)param_1[0xaa]);
    bVar5 = ~(byte)(uVar3 & 0xffffffff);
    lVar6 = CONCAT71((int7)((uVar3 & 0xffffffff) >> 8),bVar5);
    if ((bVar5 & 10) == 0) {
      if (plVar4 == (longlong *)0x0) goto LAB_140e3c7f0;
      if (((*(byte *)((longlong)plVar4 + 0x5b5) & 0x20) == 0) &&
         ((lVar6 = param_1[0x23d], lVar6 == 0 || (*(char *)(lVar6 + 0x1c10) != '\x01')))) {
        lVar6 = 0;
        (**(code **)(*plVar4 + 0x7f0))(plVar4,0);
        plVar4 = (longlong *)param_1[0xd0a];
        goto LAB_140e3c700;
      }
      *(int *)((longlong)param_1 + 0x56c) = (int)param_1[0xad];
    }
    else {
LAB_140e3c700:
      *(int *)((longlong)param_1 + 0x56c) = (int)param_1[0xad];
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      uVar3 = (ulonglong)*(byte *)(param_1 + 0xaa);
    }
    if ((uVar3 & 8) != 0) {
      cVar1 = FUN_140553fce(param_1);
      if ((cVar1 == '\0') ||
         (uVar3 = CONCAT71((int7)((ulonglong)lVar6 >> 8),(char)param_1[0xaa]) & 0xffffffffffffff10,
         cVar1 = (**(code **)(*(longlong *)param_1[0xd0a] + 0x670))
                           ((longlong *)param_1[0xd0a],CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 4)
                            ,param_2), cVar1 == '\0')) {
        bVar5 = 0;
      }
      else {
        bVar5 = 8;
        if ((*(byte *)((longlong)param_1 + 0x551) & 8) == 0) {
          *(int *)(param_1 + 0xad) = (int)param_1[0xad] + 1;
          uVar7 = (**(code **)(*param_1 + 0x8a8))(param_1);
          *(undefined4 *)(param_1 + 0xab) = uVar7;
          FUN_140e3c802(param_1);
        }
      }
      *(byte *)((longlong)param_1 + 0x551) = *(byte *)((longlong)param_1 + 0x551) & 0xf7 | bVar5;
    }
  }
  return;
}



// FUNCTION 140e3c802 FUN_140e3c802 body=85 status=ok
// SIG undefined FUN_140e3c802(void)

void FUN_140e3c802(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cacf718);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e3c837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x830))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e3c854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  return;
}



// FUNCTION 140e3c858 FUN_140e3c858 body=259 status=ok
// SIG undefined FUN_140e3c858(void)

longlong FUN_140e3c858(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar4 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1b0) - 1U &
                             ((uint)param_2 ^ (int)param_3 << 0x12)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x168);
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        lVar2 = lVar4 + lVar6;
        if ((*(longlong *)(lVar4 + lVar6) == param_2) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == param_3)) {
          if ((int *)(lVar2 + 0x10) != (int *)0x0 && lVar2 != 0) {
            *param_4 = 0;
            return (longlong)*(int *)(lVar2 + 0x10) * 0x110 + *(longlong *)(param_1 + 0x1b8);
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 0x18);
      } while (iVar5 != -1);
    }
  }
  *param_4 = 1;
  plVar1 = (longlong *)(param_1 + 0x1b8);
  iVar5 = *(int *)(param_1 + 0x1c0);
  uVar3 = iVar5 + 1;
  *(uint *)(param_1 + 0x1c0) = uVar3;
  if (*(uint *)(param_1 + 0x1c4) < uVar3) {
    FUN_140e3c95c(plVar1);
  }
  lVar4 = (longlong)iVar5 * 0x110;
  memset((void *)(*plVar1 + lVar4),0,0x110);
  return lVar4 + *plVar1;
}



// FUNCTION 140e3c95c FUN_140e3c95c body=274 status=ok
// SIG undefined FUN_140e3c95c(void)

void FUN_140e3c95c(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x110;
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



// FUNCTION 140e3ca70 FUN_140e3ca70 body=77 status=ok
// SIG undefined FUN_140e3ca70(void)

void FUN_140e3ca70(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x710) != 0) {
    local_10 = *(longlong *)(param_1 + 0x710);
    FUN_140e3cabe(param_2,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3cabe FUN_140e3cabe body=105 status=ok
// SIG undefined FUN_140e3cabe(void)

ulonglong FUN_140e3cabe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar4 = uVar5 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_140e3caf6;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar5 * 8) = *param_2;
LAB_140e3caf6:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140e3cb36 FUN_140e3cb36 body=214 status=ok
// SIG undefined FUN_140e3cb36(void)

undefined8 * FUN_140e3cb36(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6d6320;
  plVar3 = (longlong *)param_1[0x148];
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
  if (param_1[0x144] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb2] = &PTR_FUN_14b0a0bc0;
  if (*(char *)(param_1 + 300) == '\x01') {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  param_1[0x20] = &PTR_FUN_14b0a0bc0;
  if (*(char *)(param_1 + 0x9a) == '\x01') {
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
  *param_1 = &PTR_FUN_14b0a0e90;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e3cc0c FUN_140e3cc0c body=297 status=ok
// SIG undefined FUN_140e3cc0c(void)

void FUN_140e3cc0c(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) ||
      (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4))) ||
     (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104))) {
    FUN_14769bcb4(param_1 + 0x48);
    FUN_1476a8134(param_1 + 0x80);
    FUN_1476a8134(param_1 + 0xd0);
    if (*(int *)(param_1 + 300) < 0) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      FUN_1476a8176(param_1 + 0x120,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    piVar2 = *(int **)(param_1 + 0x120);
    piVar1 = piVar2 + (longlong)*(int *)(param_1 + 0x128) * 2;
    do {
      if (piVar2[1] != 0 || *piVar2 != 0) {
        *(undefined4 *)(param_1 + 0x128) = 0;
        if (*(int *)(param_1 + 300) < 0) {
          FUN_1476a8176(param_1 + 0x120,0);
        }
        break;
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
  }
  if ((*(int *)(param_1 + 400) != 0) || (*(int *)(param_1 + 0x1b0) != 0)) {
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  lVar3 = FUN_140e3cd36(*(undefined8 *)(param_1 + 0x28));
  if (lVar3 != 0) {
    FUN_140e3cd9a(lVar3,*(undefined4 *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



// FUNCTION 140e3cd36 FUN_140e3cd36 body=98 status=ok
// SIG undefined FUN_140e3cd36(void)

void FUN_140e3cd36(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1409ee150();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1400a1050(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3cd9a FUN_140e3cd9a body=206 status=ok
// SIG undefined FUN_140e3cd9a(void)

void FUN_140e3cd9a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (int *)0x0;
  uStack_40 = 0;
  FUN_140e3cefc(param_1 + 0x60,&local_48);
  if ((longlong)(int)uStack_40 != 0) {
    lVar2 = (longlong)(int)uStack_40 * 0xc;
    piVar1 = local_48;
    do {
      if (*piVar1 == param_2) {
        FUN_140add3a6(param_1 + 0x60,piVar1);
      }
      piVar1 = piVar1 + 3;
      lVar2 = lVar2 + -0xc;
    } while (lVar2 != 0);
  }
  FUN_1409ee0a6((longlong)param_2 * 0x130 + *(longlong *)(param_1 + 0xb0));
  FUN_140e3ce6a(param_1 + 0xb0,param_2,1);
  if (local_48 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e3ce6a FUN_140e3ce6a body=145 status=ok
// SIG undefined FUN_140e3ce6a(void)

void FUN_140e3ce6a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x130 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x130) = param_2;
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
      puVar7 = puVar7 + 0x4c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e3cefc FUN_140e3cefc body=1890 status=ok
// SIG undefined FUN_140e3cefc(void)

undefined4 FUN_140e3cefc(ulonglong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  uint local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined4 local_70;
  uint local_6c;
  uint uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1457b7242(param_2,0);
  }
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 0) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar13);
    }
    FUN_140e3d660(&local_98,uVar13);
    if (uVar13 < 4) {
      iVar11 = 1;
    }
    else {
      uVar13 = (uVar13 | 1) + 0xe;
      iVar11 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar11 = 1 << ((byte)iVar11 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar11)) {
      local_50 = iVar11;
      FUN_140e3d80a();
    }
  }
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
    FUN_1457b7242();
  }
  iVar11 = (int)param_1[5];
  if (iVar11 == 0) {
    uVar14 = 1;
    uVar21 = 0;
    iVar15 = 0;
    iVar12 = 0;
  }
  else {
    puVar8 = (ulonglong *)param_1[4];
    if ((ulonglong *)param_1[4] == (ulonglong *)0x0) {
      puVar8 = param_1 + 2;
    }
    uVar13 = (uint)*puVar8;
    if (uVar13 == 0) {
      iVar15 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar15 = iVar11 + -1;
      }
      uVar21 = 0;
      uVar10 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar10 = uVar21;
      }
      iVar15 = 0;
      do {
        if (uVar10 == uVar21) goto LAB_140e3cfab;
        iVar15 = iVar15 + 0x20;
        uVar13 = *(uint *)((longlong)puVar8 + uVar21 * 4 + 4);
        uVar21 = uVar21 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar21 = 0;
      iVar15 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar10 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar12 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar12) {
      iVar12 = iVar11;
    }
  }
  if (iVar12 < iVar11) {
    uVar13 = 0xffffffff;
    do {
      local_9c = uVar13;
      uVar10 = *param_1;
      lVar9 = (longlong)iVar12;
      if ((int)uStack_90 != local_64) {
        iVar12 = *(int *)(uVar10 + lVar9 * 0x28);
        uVar13 = *(uint *)(uVar10 + 4 + lVar9 * 0x28);
        local_a8 = CONCAT44(local_a8._4_4_,iVar12);
        uVar17 = uVar13 >> 0xd ^ iVar12 - uVar13;
        uVar16 = uVar17 << 8 ^ (-0x61c88647 - uVar13) - uVar17;
        uVar19 = uVar16 >> 0xd ^ (uVar13 - uVar17) - uVar16;
        uVar20 = uVar19 >> 0xc ^ (uVar17 - uVar16) - uVar19;
        uVar17 = uVar20 << 0x10 ^ (uVar16 - uVar19) - uVar20;
        uVar16 = uVar17 >> 5 ^ (uVar19 - uVar20) - uVar17;
        uVar19 = uVar16 >> 3 ^ (uVar20 - uVar17) - uVar16;
        uVar17 = uVar19 << 10 ^ (uVar17 - uVar16) - uVar19;
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        iVar6 = *(int *)(puVar5 + (ulonglong)
                                  (local_50 - 1U & (uVar17 >> 0xf ^ uVar16 - (uVar19 + uVar17))) * 4
                        );
        while (iVar6 != -1) {
          lVar18 = (longlong)iVar6;
          if ((*(int *)(local_98 + lVar18 * 0x14) == iVar12) &&
             (*(uint *)(local_98 + 4 + lVar18 * 0x14) == uVar13)) goto LAB_140e3d411;
          iVar6 = *(int *)(local_98 + lVar18 * 0x14 + 0xc);
        }
      }
      iVar11 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
        local_a8 = uVar10;
        FUN_14754f674(param_2,iVar11);
        uVar10 = local_a8;
      }
      puVar22 = (undefined8 *)(uVar10 + lVar9 * 0x28);
      lVar18 = *param_2;
      *(undefined4 *)(lVar18 + 8 + (longlong)iVar11 * 0xc) = *(undefined4 *)(puVar22 + 1);
      *(undefined8 *)(lVar18 + (longlong)iVar11 * 0xc) = *puVar22;
      puVar22 = (undefined8 *)(lVar9 * 0x28 + *param_1);
      if (local_64 == 0) {
        iVar11 = (int)uStack_90;
        uVar10 = uStack_90 & 0xffffffff;
        uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
        if (uStack_90._4_4_ == iVar11) {
          FUN_140171ad2(&local_98,uVar10);
        }
        lVar9 = (longlong)iVar11;
        local_a8 = uVar10;
        iVar11 = FUN_144a54ea4(local_88,1);
        puVar5 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar5 = local_88;
        }
        iVar12 = iVar11 + 0x1f;
        if (-1 < iVar11) {
          iVar12 = iVar11;
        }
        bVar4 = (byte)iVar11 & 0x1f;
        *(uint *)(puVar5 + (longlong)(iVar12 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar12 >> 5) * 4) &
             (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      }
      else {
        local_a8 = (ulonglong)uStack_68;
        lVar9 = (longlong)(int)uStack_68;
        uStack_68 = *(uint *)(local_98 + 4 + lVar9 * 0x14);
        local_64 = local_64 + -1;
        if (local_64 != 0) {
          *(undefined4 *)(local_98 + (longlong)(int)uStack_68 * 0x14) = 0xffffffff;
        }
      }
      puVar5 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar5 = local_88;
      }
      iVar11 = (int)local_a8;
      iVar12 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar12 = iVar11;
      }
      *(uint *)(puVar5 + (longlong)(iVar12 >> 5) * 4) =
           *(uint *)(puVar5 + (longlong)(iVar12 >> 5) * 4) | 1 << ((byte)local_a8 & 0x1f);
      puVar1 = (undefined8 *)(local_98 + lVar9 * 0x14);
      uVar3 = *puVar22;
      *puVar1 = uVar3;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar22 + 1);
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
      uVar13 = *(uint *)((longlong)puVar1 + 4);
      iVar12 = (int)uVar3;
      uVar17 = uVar13 >> 0xd ^ iVar12 - uVar13;
      uVar16 = uVar17 << 8 ^ (-0x61c88647 - uVar13) - uVar17;
      uVar19 = uVar16 >> 0xd ^ (uVar13 - uVar17) - uVar16;
      uVar17 = uVar19 >> 0xc ^ (uVar17 - uVar16) - uVar19;
      uVar16 = uVar17 << 0x10 ^ (uVar16 - uVar19) - uVar17;
      uVar19 = uVar16 >> 5 ^ (uVar19 - uVar17) - uVar16;
      uVar17 = uVar19 >> 3 ^ (uVar17 - uVar16) - uVar19;
      uVar16 = uVar17 << 10 ^ (uVar16 - uVar19) - uVar17;
      uVar16 = uVar16 >> 0xf ^ uVar19 - (uVar17 + uVar16);
      uVar17 = (int)uStack_90 - local_64;
      if ((uVar17 != 0) && (uVar17 != 1)) {
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        iVar6 = *(int *)(puVar5 + (ulonglong)(local_50 - 1U & uVar16) * 4);
        while (iVar6 != -1) {
          piVar2 = (int *)(local_98 + (longlong)iVar6 * 0x14);
          if ((*piVar2 == iVar12) && (*(uint *)(local_98 + 4 + (longlong)iVar6 * 0x14) == uVar13)) {
            uVar3 = *puVar1;
            piVar2[2] = *(int *)(puVar1 + 1);
            *(undefined8 *)piVar2 = uVar3;
            FUN_14754f708(&local_98,local_a8);
            goto LAB_140e3d40e;
          }
          iVar6 = piVar2[3];
        }
      }
      if (uVar17 < 4) {
        iVar12 = 1;
      }
      else {
        uVar10 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
        lVar9 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((int)uVar17 < 1) || (iVar12 <= local_50)) {
        uVar16 = local_50 - 1U & uVar16;
        *(uint *)(puVar1 + 2) = uVar16;
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        *(undefined4 *)((longlong)puVar1 + 0xc) =
             *(undefined4 *)(puVar5 + ((longlong)local_50 - 1U & (longlong)(int)uVar16) * 4);
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        *(int *)(puVar5 + ((longlong)local_50 - 1U & (longlong)(int)uVar16) * 4) = iVar11;
      }
      else {
        local_50 = iVar12;
        FUN_140e3d80a();
      }
LAB_140e3d40e:
      iVar11 = (int)param_1[5];
LAB_140e3d411:
      uVar13 = local_9c & ~(uint)uVar14;
      puVar8 = (ulonglong *)param_1[4];
      if ((ulonglong *)param_1[4] == (ulonglong *)0x0) {
        puVar8 = param_1 + 2;
      }
      iVar12 = (int)uVar21;
      lVar9 = (longlong)iVar12;
      uVar16 = *(uint *)((longlong)puVar8 + lVar9 * 4) & uVar13;
      if (uVar16 == 0) {
        iVar6 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar6 = iVar11 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar18 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar16 = *(uint *)((longlong)puVar8 + lVar18 * 4 + lVar9 * 4 + 4);
          if (uVar16 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar7 - lVar9 == lVar18) goto LAB_140e3cfab;
        }
        uVar21 = (ulonglong)(iVar12 + (int)lVar18 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar16 & uVar16);
      uVar10 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar12 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar11);
  }
LAB_140e3cfab:
  lVar9 = param_2[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar21 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar21 != 0) {
    FUN_1401ad22e(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)lVar9;
}



// FUNCTION 140e3d660 FUN_140e3d660 body=425 status=ok
// SIG undefined FUN_140e3d660(void)

void FUN_140e3d660(longlong *param_1,uint param_2)

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
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x14 + -0x10);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar8 + -1;
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
        puVar5 = puVar5 + -5;
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



// FUNCTION 140e3d80a FUN_140e3d80a body=456 status=ok
// SIG undefined FUN_140e3d80a(void)

void FUN_140e3d80a(longlong *param_1)

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
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x14),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x14));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x10 + lVar10 * 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x14) =
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



// FUNCTION 140e3d9d4 FUN_140e3d9d4 body=1182 status=ok
// SIG undefined FUN_140e3d9d4(void)

void FUN_140e3d9d4(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
     && (((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 != 0 &&
          (*(uint *)(lVar6 + 0x10) == param_1[1])) && ((*(uint *)(lVar6 + 8) & 0x10200000) == 0))))
  goto LAB_140e3db80;
  if (param_2 == (longlong *)0x0) {
    param_1[0] = 0;
    param_1[1] = 0;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    cVar2 = FUN_14493c216(&local_58,0);
    if (cVar2 == '\0') {
      uStack_50 = 0;
    }
    param_1[2] = (uint)local_58;
    param_1[3] = local_58._4_4_;
    param_1[4] = (uint)uStack_50;
    param_1[5] = uStack_50._4_4_;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    cVar2 = FUN_14493c216(&local_58,0);
    if (cVar2 == '\0') {
      uStack_50 = 0;
    }
    *(code **)(param_1 + 6) = local_58;
    *(undefined8 *)(param_1 + 8) = uStack_50;
LAB_140e3dc14:
    param_1[10] = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar7;
      }
    }
    param_1[1] = uVar3;
    if (DAT_14cb1c498 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_147e36893;
      local_80 = FUN_146420564;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    lVar6 = (**(code **)(*param_2 + 0x288))(param_2,DAT_14cb1c498);
    if (lVar6 == 0) {
LAB_140e3ddb2:
      local_58 = (code *)0x0;
      uStack_50 = 0;
      cVar2 = FUN_14493c216(&local_58,0);
      if (cVar2 == '\0') {
        uStack_50 = 0;
      }
      *(code **)(param_1 + 2) = local_58;
      *(undefined8 *)(param_1 + 4) = uStack_50;
    }
    else {
      if (DAT_14cb1c498 == 0) {
        local_70 = &local_58;
        local_58 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_1427b09ee;
        local_78 = &LAB_147e36893;
        local_80 = FUN_146420564;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10004001;
        local_a0 = 8;
        local_a8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      lVar4 = FUN_144718840(lVar6,DAT_14cb1c498);
      if (lVar6 == lVar4) goto LAB_140e3ddb2;
      FUN_14036fb34(&local_58,lVar4);
      param_1[2] = (uint)local_58;
      param_1[3] = local_58._4_4_;
      param_1[4] = (uint)uStack_50;
      param_1[5] = uStack_50._4_4_;
    }
    uVar5 = FUN_1407725cc();
    lVar6 = (**(code **)(*param_2 + 0x288))(param_2,uVar5);
    if (lVar6 == 0) {
LAB_140e3ddeb:
      local_58 = (code *)0x0;
      uStack_50 = 0;
      cVar2 = FUN_14493c216(&local_58,0);
      if (cVar2 == '\0') {
        uStack_50 = 0;
      }
      *(code **)(param_1 + 6) = local_58;
      *(undefined8 *)(param_1 + 8) = uStack_50;
    }
    else {
      uVar5 = FUN_1407725cc();
      lVar4 = FUN_144718840(lVar6,uVar5);
      if (lVar6 == lVar4) goto LAB_140e3ddeb;
      FUN_1407eff2c(&local_58,lVar4);
      param_1[6] = (uint)local_58;
      param_1[7] = local_58._4_4_;
      param_1[8] = (uint)uStack_50;
      param_1[9] = uStack_50._4_4_;
    }
    if (param_2[0x23d] == 0) goto LAB_140e3dc14;
    uVar3 = *(uint *)(param_2[0x23d] + 0xc);
    param_1[10] = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar6 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar7;
      }
    }
  }
  param_1[0xb] = uVar3;
LAB_140e3db80:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e3de74 FUN_140e3de74 body=108 status=ok
// SIG undefined FUN_140e3de74(void)

byte FUN_140e3de74(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 0x34);
  local_20 = &local_30;
  local_28 = FUN_142aebfee;
  local_30 = param_3;
  bVar3 = FUN_140e3dee2();
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 - iVar2 < *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34) & bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3dee2 FUN_140e3dee2 body=943 status=ok
// SIG undefined FUN_140e3dee2(void)

ulonglong FUN_140e3dee2(longlong *param_1,uint *param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [47];
  char local_89;
  uint local_88;
  int local_84;
  ulonglong local_80;
  undefined8 *local_78;
  uint *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_89 = param_4;
  local_78 = param_3;
  if (param_2 != (uint *)0x0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar7 = (uint)((ulonglong)param_2 >> 0x10);
      uVar12 = (uint)param_2 & 0xffff;
      plVar3 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[8];
      }
      uVar7 = *(uint *)((longlong)plVar3 +
                       (ulonglong)
                       ((int)param_1[9] - 1U &
                       (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar12) +
                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4)) * 4);
      if (uVar7 != 0xffffffff) {
        puVar6 = (uint *)*param_1;
        do {
          puVar16 = puVar6 + (longlong)(int)uVar7 * 0x18;
          if (*(uint **)(puVar6 + (longlong)(int)uVar7 * 0x18) == param_2) {
            if (puVar16 != (uint *)0x0) goto LAB_140e3dfb7;
            break;
          }
          uVar7 = puVar16[0x16];
        } while (uVar7 != 0xffffffff);
      }
    }
    FUN_140e3e292(&local_50,param_2);
    if ((local_50 != param_2) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
      uVar7 = (uint)((ulonglong)local_50 >> 0x10);
      uVar12 = (uint)local_50 & 0xffff;
      plVar3 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[8];
      }
      uVar7 = *(uint *)((longlong)plVar3 +
                       (ulonglong)
                       ((int)param_1[9] - 1U &
                       (int)((ulonglong)local_50 >> 0x20) + ((uint)local_50 << 0x10 | uVar12) +
                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4)) * 4);
      if (uVar7 != 0xffffffff) {
        do {
          puVar16 = (uint *)(*param_1 + (longlong)(int)uVar7 * 0x60);
          if (*(uint **)(*param_1 + (longlong)(int)uVar7 * 0x60) == local_50) {
            puVar6 = local_50;
            if (puVar16 != (uint *)0x0) goto LAB_140e3dfb7;
            break;
          }
          uVar7 = puVar16[0x16];
        } while (uVar7 != 0xffffffff);
      }
    }
  }
  uVar5 = 0;
  goto LAB_140e3e136;
LAB_140e3dfb7:
  uVar7 = puVar16[0xc];
  local_68 = param_1;
  if (uVar7 == 0) {
    uVar17 = 1;
    uVar9 = 0;
    iVar10 = 0;
    uVar12 = 0;
  }
  else {
    puVar6 = *(uint **)(puVar16 + 10);
    if (*(uint **)(puVar16 + 10) == (uint *)0x0) {
      puVar6 = puVar16 + 6;
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar10 = uVar7 + 0x1e;
      if (-1 < (int)(uVar7 - 1)) {
        iVar10 = uVar7 - 1;
      }
      uVar9 = 0;
      uVar5 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar5 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar5 == uVar9) goto LAB_140e3e1cf;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12);
    uVar5 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar12 = (uint)lVar13 ^ 0x3f;
    puVar6 = (uint *)(ulonglong)uVar12;
    uVar12 = (iVar10 - uVar12) + 0x3e;
    if ((int)uVar7 <= (int)uVar12) {
      uVar12 = uVar7;
    }
  }
  if (uVar12 == uVar7) {
LAB_140e3e1cf:
    uVar5 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
  }
  else {
    uVar15 = 0xffffffff;
    uVar18 = 0;
    local_80 = (ulonglong)uVar7;
    local_70 = puVar16 + 6;
    do {
      lVar13 = *(longlong *)(puVar16 + 2);
      local_50 = *(uint **)(lVar13 + (longlong)(int)uVar12 * 0x10);
      local_88 = uVar15;
      local_84 = iVar10;
      uVar4 = (*(code *)*local_78)(local_78[1],&local_50);
      uVar5 = (uVar4 ^ 1) & 0xffffffff;
      uVar11 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 | (byte)uVar18);
      if (((char)(uVar4 ^ 1) == '\0') && (local_89 != '\0')) {
        local_60 = *local_78;
        local_58 = local_78[1];
        FUN_140e3dee2(local_68,*(undefined8 *)(lVar13 + (longlong)(int)uVar12 * 0x10),&local_60,1);
        uVar11 = uVar18;
      }
      uVar5 = uVar11;
      if ((char)uVar4 == '\0') break;
      uVar15 = local_88 & ~(uint)uVar17;
      puVar6 = *(uint **)(puVar16 + 10);
      if (*(uint **)(puVar16 + 10) == (uint *)0x0) {
        puVar6 = local_70;
      }
      uVar7 = puVar16[0xc];
      iVar8 = (int)uVar9;
      lVar13 = (longlong)iVar8;
      uVar12 = puVar6[lVar13] & uVar15;
      iVar10 = local_84;
      if (uVar12 == 0) {
        iVar1 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar1 = uVar7 - 1;
        }
        iVar1 = iVar1 >> 5;
        iVar10 = local_84 + 0x20;
        iVar2 = iVar1;
        if (iVar1 < iVar8) {
          iVar2 = iVar8;
        }
        if (iVar8 < iVar1) {
          lVar14 = 0;
          do {
            uVar12 = puVar6[lVar13 + lVar14 + 1];
            if (uVar12 != 0) {
              uVar9 = (ulonglong)(iVar8 + (int)lVar14 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140e3e0f2;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar2 - lVar13 != lVar14);
          uVar15 = 0xffffffff;
          lVar13 = (longlong)iVar2;
        }
        uVar5 = lVar13 + 1;
        uVar9 = uVar5 & 0xffffffff;
        uVar12 = uVar7;
      }
      else {
LAB_140e3e0f2:
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar5 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar12 = (uint)lVar13 ^ 0x3f;
        uVar5 = (ulonglong)uVar12;
        uVar12 = (iVar10 - uVar12) + 0x3e;
        if ((int)uVar7 <= (int)uVar12) {
          uVar12 = uVar7;
        }
      }
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      uVar18 = uVar11;
    } while (uVar12 != (uint)local_80);
  }
LAB_140e3e136:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3e292 FUN_140e3e292 body=203 status=ok
// SIG undefined FUN_140e3e292(void)

undefined8 * FUN_140e3e292(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_888 [40];
  undefined8 local_860;
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
  local_860 = param_2;
  local_850 = local_858;
  FUN_14005eb5c(&local_860,&local_858);
  if (((int)((ulonglong)((longlong)local_850 - (longlong)local_858) >> 1) == 0) ||
     (*(short *)(local_850 + -2) != 0x2f)) {
    *param_1 = param_2;
  }
  else {
    local_850 = local_850 + -2;
    FUN_1446f82e2(param_1,(ulonglong)((longlong)local_850 - (longlong)local_858) >> 1,local_858,1);
  }
  if (local_840 == '\x01') {
    FUN_1400020a8(local_858);
  }
  if ((local_20 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3e35e FUN_140e3e35e body=233 status=ok
// SIG undefined FUN_140e3e35e(void)

void FUN_140e3e35e(void)

{
  undefined4 *in_R9;
  undefined8 *in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined1 in_stack_00000040;
  undefined1 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = &local_48;
  local_48 = 0x3ff0000000000000;
  local_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  local_68 = *in_stack_00000028;
  uStack_60 = in_stack_00000028[1];
  local_c8 = &local_68;
  local_58 = in_stack_00000028[2];
  local_88 = *in_R9;
  uStack_84 = in_R9[1];
  uStack_80 = in_R9[2];
  uStack_7c = in_R9[3];
  local_78 = *(undefined8 *)(in_R9 + 4);
  local_98 = in_stack_00000050;
  local_a0 = in_stack_00000040;
  local_a8 = in_stack_00000048;
  local_b0 = in_stack_00000038;
  local_b8 = in_stack_00000030;
  FUN_140e3e448();
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3e448 FUN_140e3e448 body=372 status=ok
// SIG undefined FUN_140e3e448(void)

void FUN_140e3e448(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined1 param_7,undefined1 param_8,
                  char param_9,undefined1 param_10,undefined1 param_11)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  char local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  local_4b = 0;
  if (param_1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  local_b0 = param_1;
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  local_98 = param_4[2];
  local_a8 = *param_4;
  uStack_a0 = param_4[1];
  local_90 = *param_5;
  uStack_88 = param_5[1];
  local_80 = param_5[2];
  local_78 = *param_6;
  uStack_74 = param_6[1];
  uStack_70 = param_6[2];
  uStack_6c = param_6[3];
  local_68 = *(undefined8 *)(param_6 + 4);
  local_50 = param_7;
  local_4d = '\x01';
  if (param_9 != '\x01') {
    local_4d = (param_9 == '\x02') * '\x02';
  }
  local_60 = param_2;
  local_58 = param_3;
  local_4f = param_8;
  local_4e = param_10;
  local_4c = param_11;
  FUN_140e3e5be();
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3e5be FUN_140e3e5be body=509 status=ok
// SIG undefined FUN_140e3e5be(void)

longlong * FUN_140e3e5be(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  char local_68;
  longlong local_58;
  longlong **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_14018d992();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      plVar7 = (longlong *)0x0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_140e3e618;
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && (*(longlong *)(param_1 + 0x58) != 0)))) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xb0);
        if (lVar5 == 0) {
          lVar5 = FUN_1448abda6();
          if (lVar5 == 0) goto LAB_140e3e616;
        }
        if (*(char *)(param_1 + 0x6c) == '\x01') {
          if (*(char *)(param_1 + 0x6d) == '\0') {
            bVar3 = FUN_14043812a(*(undefined8 *)(param_1 + 0x58));
            bVar3 = bVar3 ^ 1;
          }
          else {
            bVar3 = 0;
          }
          if ((bVar3 != 0) || ((*(uint *)(lVar1 + 0x4f8) & 1) != 0)) {
            uVar6 = FUN_1400bd118(lVar5);
            lVar2 = *(longlong *)(param_1 + 0x58);
            local_48 = *(undefined8 *)(lVar2 + 0x260);
            uStack_40 = *(undefined8 *)(lVar2 + 0x268);
            local_38 = *(undefined8 *)(lVar2 + 0x270);
            cVar4 = FUN_140417202(uVar6,lVar1);
            if (cVar4 != '\0') goto LAB_140e3e616;
          }
        }
        local_68 = '\x01';
        if (*(char *)(param_1 + 0x6b) != '\x01') {
          local_68 = (*(char *)(param_1 + 0x6b) == '\x02') * '\x02';
        }
        plVar7 = (longlong *)
                 FUN_1404172bd(lVar1,lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xa8),
                               *(undefined1 *)(param_1 + 0x69));
        local_28 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          if (*(char *)(param_1 + 0x6d) == '\x01') {
            *(byte *)((longlong)plVar7 + 0x7cc) = *(byte *)((longlong)plVar7 + 0x7cc) | 0x20;
            FUN_14043807e(plVar7,1);
          }
          local_50 = &local_28;
          local_58 = param_1;
          if ((*(byte *)((longlong)plVar7 + 0x9c) & 1) == 0) {
            FUN_140486fc4(plVar7,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
            FUN_143a8a94e(&local_58);
            FUN_140b506dc(local_28,lVar5,0);
          }
          else {
            FUN_143a8a94e(&local_58);
            (**(code **)(*local_28 + 0x490))
                      (local_28,*(undefined8 *)(param_1 + 0x58),&DAT_14cadad98,
                       *(undefined8 *)(param_1 + 0x60));
          }
          if (*(char *)(param_1 + 0x6a) == '\x01') {
            (**(code **)(*local_28 + 0x2a8))(local_28,1);
          }
          plVar7 = (longlong *)FUN_140083894();
          (**(code **)(*plVar7 + 0x70))(plVar7,local_28);
          plVar7 = local_28;
          goto LAB_140e3e618;
        }
      }
    }
  }
LAB_140e3e616:
  plVar7 = (longlong *)0x0;
LAB_140e3e618:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3e7bc FUN_140e3e7bc body=234 status=ok
// SIG undefined FUN_140e3e7bc(void)

void FUN_140e3e7bc(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((((DAT_14cb0d2b0 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar1 != '\0')) &&
      (lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar2 != 0)) &&
     (iVar5 = *(int *)(lVar2 + 0x40), (longlong)iVar5 != 0)) {
    lVar4 = *(longlong *)(lVar2 + 0x38);
    lVar7 = 0;
    do {
      lVar3 = FUN_14479d2ce(lVar4 + lVar7);
      if (lVar3 == param_1) {
        uVar6 = (lVar7 >> 3) * -0x3333333333333333;
        iVar5 = (int)uVar6;
        if (iVar5 == -1) {
          return;
        }
        FUN_1457b7406((longlong)iVar5 * 0x28 + *(longlong *)(lVar2 + 0x38),param_1);
        FUN_1457b72b2(lVar2 + 0x38,uVar6 & 0xffffffff);
        if ((longlong)*(int *)(lVar2 + 0x40) == 0) {
          return;
        }
        lVar4 = *(longlong *)(lVar2 + 0x38);
        lVar2 = (longlong)*(int *)(lVar2 + 0x40) * 0x28;
        do {
          FUN_14148aa64(lVar4);
          lVar4 = lVar4 + 0x28;
          lVar2 = lVar2 + -0x28;
        } while (lVar2 != 0);
        return;
      }
      lVar7 = lVar7 + 0x28;
    } while ((longlong)iVar5 * 0x28 != lVar7);
  }
  return;
}



// FUNCTION 140e3e8a6 FUN_140e3e8a6 body=115 status=ok
// SIG undefined FUN_140e3e8a6(void)

void FUN_140e3e8a6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140e3e91a();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_140e3e8d1;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140e3e8d1:
    lVar2 = FUN_140e3e91a();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
      goto LAB_140e3e8f6;
    }
  }
  lVar3 = 0;
LAB_140e3e8f6:
  FUN_1448a6f9c(param_1 + 0x1160,lVar3);
  return;
}



// FUNCTION 140e3e91a FUN_140e3e91a body=228 status=ok
// SIG undefined FUN_140e3e91a(void)

longlong FUN_140e3e91a(void)

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
  if (DAT_14cab4048 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_147591e2b;
    local_40 = FUN_146343c60;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Constraints",L"ConstraintSubsystem",&DAT_14cab4048,&DAT_147591e2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3ea00 FUN_140e3ea00 body=110 status=ok
// SIG undefined FUN_140e3ea00(void)

void FUN_140e3ea00(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_140e3ea6e();
  *(undefined8 *)(param_1 + 0x220) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x210) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  *(byte *)(param_1 + 0x444) = *(byte *)(param_1 + 0x444) & 0xfe;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x468) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x470) = uVar1;
  *(undefined8 *)(param_1 + 0x478) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x480) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x488) = uVar1;
  *(undefined8 *)(param_1 + 0x490) = DAT_14c8464f0;
  return;
}



// FUNCTION 140e3ea6e FUN_140e3ea6e body=88 status=ok
// SIG undefined FUN_140e3ea6e(void)

void FUN_140e3ea6e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  if (*(char *)(lVar1 + 7) != '\x01') {
    return;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
  if (plVar2 != (longlong *)0x0) {
    if ((param_1 == (longlong *)0x0) || (lVar1 = (**(code **)(*param_1 + 8))(param_1), lVar1 == 0))
    {
      lVar1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000140e3eac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    return;
  }
  return;
}



// FUNCTION 140e3eac6 FUN_140e3eac6 body=32 status=ok
// SIG undefined FUN_140e3eac6(void)

undefined8 * FUN_140e3eac6(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ad42510;
  return param_1;
}



// FUNCTION 140e3eae6 FUN_140e3eae6 body=30 status=ok
// SIG undefined FUN_140e3eae6(void)

void FUN_140e3eae6(longlong param_1)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e3eb0a FUN_140e3eb0a body=57 status=ok
// SIG undefined FUN_140e3eb0a(void)

void FUN_140e3eb0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fbf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fbf8 = FUN_140002ddd(FUN_1465a6db9,uVar1,L"CarryableObjectDispenserBodySettings");
  }
  return;
}



// FUNCTION 140e3eb4e FUN_140e3eb4e body=262 status=ok
// SIG undefined FUN_140e3eb4e(void)

undefined8 * FUN_140e3eb4e(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"LightComponent0",1);
  uVar2 = FUN_140e3ec56();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140c80f9c(param_1,param_2);
  *param_1 = &PTR_FUN_14a70e1b0;
  param_1[0x74] = 0;
  lVar3 = param_1[0x72];
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x74] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 1;
  lVar3 = param_1[0x74];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x74];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3ec56 FUN_140e3ec56 body=228 status=ok
// SIG undefined FUN_140e3ec56(void)

longlong FUN_140e3ec56(void)

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
  if (DAT_14cad1bc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b8aae;
    local_38 = &LAB_1479eac78;
    local_40 = FUN_1417be420;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x440;
    FUN_14081cfa3(L"/Script/Engine",L"PointLightComponent",&DAT_14cad1bc8,FUN_1463b9dcc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3ed3c FUN_140e3ed3c body=501 status=ok
// SIG undefined FUN_140e3ed3c(void)

void FUN_140e3ed3c(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if (iVar1 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x128);
    if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x118);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar14 = 0;
      uVar7 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar7 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar7 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar7 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar9) {
      iVar9 = iVar1;
    }
  }
  if (iVar9 != iVar1) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0x108);
      lVar12 = *(longlong *)(lVar11 + 8 + (longlong)iVar9 * 0x20);
      if (lVar12 != 0) {
        if (((*(int *)(lVar12 + 0x50) != *(int *)(lVar12 + 0x7c)) &&
            (lVar3 = *(longlong *)(param_1 + 0x158), lVar3 != 0)) &&
           (*(longlong *)(lVar3 + 0x40) != 0)) {
          FUN_140e3ef32(lVar12,lVar3 + 0x60,*(undefined4 *)(lVar3 + 0x38));
          lVar12 = *(longlong *)(lVar11 + (longlong)iVar9 * 0x20 + 8);
        }
        if (((*(char *)(lVar12 + 0xb8) == '\x01') &&
            (lVar11 = *(longlong *)(param_1 + 0x168), lVar11 != 0)) &&
           ((lVar11 != *(longlong *)(param_1 + 0x158) && (*(longlong *)(lVar11 + 0x40) != 0)))) {
          FUN_140e3ef32(lVar12,lVar11 + 0x60,*(undefined4 *)(lVar11 + 0x38));
        }
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar4 = *(uint **)(param_1 + 0x128);
      if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x118);
      }
      iVar2 = *(int *)(param_1 + 0x130);
      iVar9 = (int)uVar14;
      lVar11 = (longlong)iVar9;
      uVar8 = puVar4[lVar11] & uVar13;
      if (uVar8 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar9 < iVar5) {
          lVar12 = 0;
          do {
            uVar8 = puVar4[lVar11 + lVar12 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar9 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140e3eee0;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar6 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar9 = iVar6;
        }
        uVar14 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar2;
      }
      else {
LAB_140e3eee0:
        uVar15 = (ulonglong)(-uVar8 & uVar8);
        uVar7 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar9 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar9) {
          iVar9 = iVar2;
        }
      }
    } while (iVar9 != iVar1);
  }
  return;
}



// FUNCTION 140e3ef32 FUN_140e3ef32 body=177 status=ok
// SIG undefined FUN_140e3ef32(void)

void FUN_140e3ef32(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((((*(int *)(param_1 + 0x30) != 0) && (uVar1 = *(uint *)(param_1 + 0x2c), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x30))))) &&
     ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar3;
    }
    else {
      lVar2 = 0;
    }
    lVar2 = *(longlong *)(lVar2 + 0x448);
    if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) {
      return;
    }
    FUN_14019e69a(lVar2,param_2,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140e3efec FUN_140e3efec body=237 status=ok
// SIG undefined FUN_140e3efec(void)

undefined8 FUN_140e3efec(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 3) == 1)) {
    local_70 = 0;
    local_68 = local_68 & 0xffffffff00000000;
    plStack_60 = (longlong *)0x0;
    local_20 = 0xf00000d0;
    local_1c = 1;
    FUN_140008118();
    if (local_38 != 0) {
      local_70 = local_70 & 0xffffffffffffff00;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      local_58 = 0;
      local_50 = local_38;
      local_48 = 0xf00000d0;
      local_40 = 0;
      FUN_140e3f0da(param_1,&local_70);
      plVar3 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar4 = 1;
      goto LAB_140e3f019;
    }
  }
  uVar4 = 0;
LAB_140e3f019:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3f0da FUN_140e3f0da body=77 status=ok
// SIG undefined FUN_140e3f0da(void)

undefined1 * FUN_140e3f0da(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_14029d0b6(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return param_1;
}



// FUNCTION 140e3f140 FUN_140e3f140 body=113 status=ok
// SIG undefined FUN_140e3f140(void)

undefined8 * FUN_140e3f140(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f091d0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140e3f168;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140e3f168:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e3f1b2 FUN_140e3f1b2 body=117 status=ok
// SIG undefined FUN_140e3f1b2(void)

void FUN_140e3f1b2(void)

{
  FUN_140e3f312();
  FUN_140e3f228();
  return;
}



// FUNCTION 140e3f228 FUN_140e3f228 body=233 status=ok
// SIG undefined FUN_140e3f228(void)

void FUN_140e3f228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [96];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140d2967c(param_2,&local_48);
  if (0 < (int)uStack_40) {
    lVar3 = 0xc;
    lVar4 = 0;
    iVar2 = (int)uStack_40;
    do {
      lVar1 = *(longlong *)(local_48 + -0xc + lVar3);
      if (*(char *)(lVar1 + 0x179) == '\x01') {
        local_b8 = param_6;
        FUN_1417b673c(lVar1,local_a8,*(undefined4 *)(local_48 + -4 + lVar3),
                      *(undefined4 *)(local_48 + lVar3));
        FUN_140167042(param_5,local_a8);
        iVar2 = (int)uStack_40;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar2);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e3f312 FUN_140e3f312 body=1298 status=ok
// SIG undefined FUN_140e3f312(void)

void FUN_140e3f312(longlong *param_1,longlong param_2,float param_3,float param_4,longlong param_5,
                  int *param_6)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  ulonglong uStack_e0;
  undefined1 local_d1;
  longlong local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  undefined1 local_b4 [4];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_5;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  pcVar2 = *(code **)(*param_1 + 0x3e0);
  if (pcVar2 == FUN_140c9189e) {
    if (((int)param_1[0x12] != 0) &&
       (fVar15 = (float)(**(code **)(*param_1 + 0x2b0))(param_1), 0.0 < fVar15)) {
LAB_140e3f434:
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,param_3);
      fVar15 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      uVar12 = 2;
      if ((0.0 < fVar15) && (fVar15 < ABS(param_4))) {
        uVar12 = (uint)(longlong)(param_4 / fVar15);
        uVar8 = 1000;
        if (uVar12 < 1000) {
          uVar8 = uVar12;
        }
        uVar12 = 2;
        if (2 < uVar8) {
          uVar12 = uVar8;
        }
      }
      fVar16 = param_4;
      while( true ) {
        param_3 = param_3 + fVar16;
        if ((0.0 <= param_3) && (param_3 <= fVar15)) break;
        if (fVar15 <= param_3) {
          param_3 = fVar15;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        local_d0 = CONCAT44(local_d0._4_4_,param_3);
        (**(code **)(*param_1 + 0x2c8))(param_1,&local_c8,&local_d0,&local_f0);
        if ((local_f0 == 0) || (*(char *)(local_f0 + 0x1c) != '\x01')) goto LAB_140e3f521;
        param_3 = 0.0;
        fVar17 = (float)local_d0 - local_c8._0_4_;
        if (param_4 < 0.0) {
          param_3 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        }
        fVar16 = fVar16 - fVar17;
        local_c8 = (longlong *)CONCAT44(local_c8._4_4_,param_3);
        local_d0 = CONCAT44(local_d0._4_4_,param_3);
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_140e3f521;
      }
      local_d0 = CONCAT44(local_d0._4_4_,param_3);
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_c8,&local_d0,&local_f0);
LAB_140e3f521:
      uVar9 = 0;
      plVar11 = local_e8;
      if ((longlong)(int)uStack_e0 != 0) {
        local_f8 = (longlong *)(param_6 + 4);
        plVar13 = local_e8 + (longlong)(int)uStack_e0 * 6;
        fVar15 = *(float *)(param_5 + 0x14);
        cVar6 = *(char *)(param_2 + 0xc9);
        do {
          if (((plVar11[4] != 0) && (local_d0 = plVar11[2], local_d0 != 0)) &&
             ((cVar6 != '\0' || (*(char *)(local_d0 + 0xa2) == '\x01')))) {
            fVar16 = *(float *)(local_d0 + 0x38);
            if ((fVar16 <= fVar15) &&
               ((*(char *)(local_d0 + 0x98) != '\x01' || (*param_6 < *(int *)(local_d0 + 0x9c))))) {
              if ((*(longlong *)(local_d0 + 0x50) != 0) ||
                 (uVar12 = param_6[2] * 0xbb38435 + 0x3619636b, param_6[2] = uVar12,
                 (float)(uVar12 >> 9 | 0x3f800000) + -1.0 < *(float *)(local_d0 + 0x94))) {
                if (((*(char *)(local_d0 + 0xa0) == '\x01') &&
                    (plVar3 = (longlong *)*plVar11, plVar3 != (longlong *)0x0)) &&
                   (lVar14 = plVar3[1], (longlong)(int)lVar14 != 0)) {
                  lVar4 = *plVar3;
                  lVar10 = 0;
                  do {
                    plVar3 = *(longlong **)(lVar4 + lVar10);
                    (**(code **)(*plVar3 + 8))(plVar3,&local_c8);
                    if (local_c8 == DAT_14cacb91c) {
                      plVar3 = *(longlong **)(lVar4 + lVar10);
                      if ((plVar3 != (longlong *)0x0) &&
                         (cVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,plVar11), cVar7 != '\0'))
                      goto LAB_140e3f6c5;
                      break;
                    }
                    lVar10 = lVar10 + 8;
                  } while ((longlong)(int)lVar14 * 8 != lVar10);
                }
                if (*(longlong *)(local_d0 + 0x50) == 0) {
                  iVar1 = param_6[6];
                  param_6[6] = iVar1 + 1U;
                  if ((uint)param_6[7] < iVar1 + 1U) {
                    FUN_140166dde(local_f8,iVar1);
                  }
                  lVar14 = *local_f8;
                  lVar10 = (longlong)iVar1 * 0x30;
                  *(longlong *)(lVar14 + lVar10) = *plVar11;
                  lVar4 = plVar11[1];
                  *(longlong *)(lVar14 + 8 + lVar10) = lVar4;
                  if (lVar4 != 0) {
                    LOCK();
                    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                    UNLOCK();
                  }
                  lVar14 = lVar14 + lVar10;
                  *(longlong *)(lVar14 + 0x10) = plVar11[2];
                  lVar4 = plVar11[3];
                  *(longlong *)(lVar14 + 0x18) = lVar4;
                  if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
                    FUN_1456cec3c();
                  }
                  bVar5 = DAT_14c950c29;
                  lVar4 = plVar11[4];
                  *(longlong *)(lVar14 + 0x20) = lVar4;
                  if (((bVar5 & 1) != 0) && (lVar4 != 0)) {
                    FUN_1456cec3c();
                  }
                  *(undefined1 *)(lVar14 + 0x2c) = *(undefined1 *)((longlong)plVar11 + 0x2c);
                  *(int *)(lVar14 + 0x28) = (int)plVar11[5];
                }
                else {
                  FUN_140210480(local_f8,plVar11);
                }
                goto LAB_140e3f6c5;
              }
              fVar16 = *(float *)(local_d0 + 0x38);
            }
            if ((fVar16 <= fVar15) || (*(longlong *)(local_d0 + 0x50) == 0)) {
              if ((*(char *)(local_d0 + 0x98) != '\x01') ||
                 ((*param_6 < *(int *)(local_d0 + 0x9c) || (*(longlong *)(local_d0 + 0x50) == 0))))
              goto LAB_140e3f6c5;
              local_d1 = 3;
            }
            else {
              local_d1 = 2;
            }
            local_c0 = &local_d1;
            local_c8 = &local_d0;
            FUN_1479344c0(param_6 + 0x1c,local_b4);
          }
LAB_140e3f6c5:
          plVar11 = plVar11 + 6;
        } while (plVar11 != plVar13);
        uVar9 = uStack_e0 & 0xffffffff;
        plVar11 = local_e8;
      }
      goto LAB_140e3f3ad;
    }
  }
  else {
    cVar6 = (*pcVar2)(param_1);
    if (cVar6 != '\0') goto LAB_140e3f434;
  }
  uVar9 = 0;
  plVar11 = (longlong *)0x0;
LAB_140e3f3ad:
  FUN_1448262fc(plVar11,uVar9);
  if (local_e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e3f826 FUN_140e3f826 body=97 status=ok
// SIG undefined FUN_140e3f826(void)

void FUN_140e3f826(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401c3ca6();
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
  }
  if (((*(byte *)(lVar1 + 0x155) & 0x20) == 0) && (*(char *)(param_1 + 0x2b0) == '\x01')) {
    FUN_140e3f888(param_1);
    return;
  }
  return;
}



// FUNCTION 140e3f888 FUN_140e3f888 body=2105 status=ok
// SIG undefined FUN_140e3f888(void)

void FUN_140e3f888(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong ****pppplVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *****ppppplVar12;
  int iVar13;
  longlong *****ppppplVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  longlong *local_a8;
  int local_a0;
  longlong ****local_90;
  undefined4 local_80;
  longlong ****local_78;
  undefined8 uStack_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *(longlong *****)(param_1 + 0x2b8);
  FUN_1446dcdd4(&local_a8);
  if (DAT_14cb818c8 != 0) {
    lVar9 = FUN_144815d88(DAT_14cb818c8,&local_a8);
    if ((longlong *****)local_90 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    if (lVar9 == 0) goto LAB_140e3fce2;
    lVar15 = param_1 + 0x380;
    FUN_140e41048(lVar15,lVar9);
    lVar9 = *(longlong *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
      if (lVar9 == 0) goto LAB_140e3fce2;
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
      }
    }
    bVar2 = *(byte *)(lVar9 + 0x152);
    if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_140e3fce2;
    FUN_140e40572(lVar15,0);
    if (*(char *)(param_1 + 0x2e0) == '\x01') {
      local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(&local_a8,*(undefined8 *)(param_1 + 0xa8));
      FUN_1448729ea(param_1 + 0x2e8,&local_78);
      fVar17 = (float)FUN_144a7b41a(&local_78,0xbf800000);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppplVar12 = &local_78;
        if (0x18 < local_60) {
          ppppplVar12 = (longlong *****)local_78;
        }
        (*pcVar5)(ppppplVar12);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
      FUN_144a5ac3a(&local_a8);
      if (0.0 <= fVar17) {
        *(float *)(param_1 + 0x96c) = fVar17;
      }
    }
    lVar9 = FUN_140e40dfb();
    local_78 = (longlong ****)0x0;
    uStack_70 = 0;
    FUN_140e40420(*(undefined8 *)(param_1 + 0xa8),&local_78);
    if ((longlong)(int)uStack_70 != 0) {
      ppppplVar12 = (longlong *****)(local_78 + (int)uStack_70);
      ppppplVar14 = (longlong *****)local_78;
      do {
        pppplVar3 = *ppppplVar14;
        cVar6 = *(char *)(param_1 + 0x338);
        if (cVar6 == '\x02') {
          bVar2 = *(byte *)(lVar9 + 0x60);
          uVar7 = (*(code *)(*pppplVar3)[0xb0])(pppplVar3);
          if (uVar7 == bVar2) {
LAB_140e3f9ad:
            FUN_140e40132(lVar15,pppplVar3);
          }
        }
        else if (cVar6 == '\x01') {
          if ((longlong)*(int *)(param_1 + 0x348) != 0) {
            lVar10 = 0;
            do {
              if (*(longlong ****)(*(longlong *)(param_1 + 0x340) + lVar10) == pppplVar3[3])
              goto LAB_140e3f9ad;
              lVar10 = lVar10 + 8;
            } while ((longlong)*(int *)(param_1 + 0x348) * 8 != lVar10);
          }
        }
        else if (cVar6 == '\x03') goto LAB_140e3f9ad;
        cVar6 = *(char *)(param_1 + 0x350);
        if (cVar6 == '\x02') {
          bVar2 = *(byte *)(lVar9 + 0x60);
          uVar7 = (*(code *)(*pppplVar3)[0xb0])(pppplVar3);
          if (uVar7 == bVar2) goto LAB_140e3ff0e;
        }
        else if (cVar6 == '\x03') {
LAB_140e3ff0e:
          FUN_140f41cc4(lVar15,pppplVar3);
        }
        else if ((cVar6 == '\x01') && ((longlong)*(int *)(param_1 + 0x360) != 0)) {
          lVar10 = 0;
          do {
            if (*(longlong ****)(*(longlong *)(param_1 + 0x358) + lVar10) == pppplVar3[3])
            goto LAB_140e3ff0e;
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(param_1 + 0x360) * 8 != lVar10);
        }
        if ((longlong)*(int *)(param_1 + 0x370) != 0) {
          lVar10 = 0;
          do {
            if (*(longlong ****)(*(longlong *)(param_1 + 0x368) + lVar10) == pppplVar3[3]) {
              FUN_140f41c18(lVar15,pppplVar3);
              break;
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(param_1 + 0x370) * 8 != lVar10);
        }
        ppppplVar14 = ppppplVar14 + 1;
      } while (ppppplVar14 != ppppplVar12);
    }
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    plVar1 = local_a8;
    local_a0 = 3;
    *local_a8 = (longlong)&PTR_LAB_149e020b0;
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
    local_a8[2] = lVar10;
    *local_a8 = (longlong)&PTR_FUN_14b40fcb0;
    local_a8[3] = 0;
    iVar11 = 0;
    if (param_1 != 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_a8 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar11 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar11 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar11 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar11 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar1 + 0x1c) = iVar11;
    plVar1[4] = (longlong)FUN_140fa3e9e;
    *(undefined4 *)(plVar1 + 5) = 0;
    FUN_1448b6402(lVar15,local_b0,&local_a8);
    if (local_a0 == 0) {
LAB_140e3fb13:
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_a8 != (longlong *)0x0) {
      (**(code **)*local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      local_a0 = 0;
      goto LAB_140e3fb13;
    }
    FUN_140e401f0(lVar15);
    FUN_140e400c2(lVar15);
    lVar9 = *(longlong *)(param_1 + 0xa8);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    plVar1 = local_a8;
    local_a0 = 3;
    *local_a8 = (longlong)&PTR_LAB_14a915ec0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_a8[2] = lVar10;
    *local_a8 = (longlong)&PTR_FUN_14b40fd20;
    local_a8[3] = 0;
    iVar11 = 0;
    if (param_1 != 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_a8 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar11 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar11 = *(int *)(lVar15 + 0x10);
        bVar16 = iVar11 == 0;
        if (bVar16) {
          *(int *)(lVar15 + 0x10) = iVar8;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar11 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar1 + 0x1c) = iVar11;
    plVar1[4] = (longlong)FUN_1488bba2a;
    *(undefined4 *)(plVar1 + 5) = 0;
    if (((local_a0 == 0) || (local_a8 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*local_a8 + 0x30))(), cVar6 == '\0')) {
      if (local_a0 != 0) {
        local_90 = local_78;
        if (local_a8 == (longlong *)0x0) goto LAB_140e3fcd8;
        (**(code **)*local_a8)(local_a8,0);
        FUN_1446efa72(&local_a8,0,0,0x10);
        goto LAB_140e3fcbd;
      }
    }
    else {
      plVar1 = (longlong *)(lVar9 + 0x300);
      if (*(int *)(lVar9 + 0x314) < 1) {
        iVar11 = *(int *)(lVar9 + 0x308);
        iVar8 = *(int *)(lVar9 + 0x310) + -1;
        *(int *)(lVar9 + 0x310) = iVar8;
        if (iVar8 <= iVar11) {
          iVar8 = iVar11;
          if (0 < iVar11) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar13 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar1,iVar13);
                FUN_14005b248(plVar1);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar8 = *(int *)(lVar9 + 0x308);
            } while (iVar13 < iVar8);
          }
          iVar13 = 2;
          if (2 < iVar8 * 2) {
            iVar13 = iVar8 * 2;
          }
          *(int *)(lVar9 + 0x310) = iVar13;
          if ((iVar13 < iVar11) && (*(int *)(lVar9 + 0x30c) != iVar8)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_a0 != 0) && (local_a8 != (longlong *)0x0)) {
        (**(code **)(*local_a8 + 0x38))(local_a8,local_b0);
      }
      iVar11 = *(int *)(lVar9 + 0x308);
      *(uint *)(lVar9 + 0x308) = iVar11 + 1U;
      if (*(uint *)(lVar9 + 0x30c) < iVar11 + 1U) {
        FUN_1447a71f6(plVar1,iVar11);
      }
      lVar9 = *plVar1;
      lVar15 = (longlong)iVar11 * 0x10;
      *(undefined8 *)(lVar9 + lVar15) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar15) = 0;
      *(longlong **)(lVar9 + lVar15) = local_a8;
      local_a8 = (longlong *)0x0;
      *(int *)(lVar9 + 8 + lVar15) = local_a0;
LAB_140e3fcbd:
      local_a0 = 0;
    }
    local_90 = local_78;
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
      local_90 = local_78;
    }
  }
LAB_140e3fcd8:
  if ((longlong *****)local_90 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
LAB_140e3fce2:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e400c2 FUN_140e400c2 body=111 status=ok
// SIG undefined FUN_140e400c2(void)

void FUN_140e400c2(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_1 + 0x5e8) & 1) != 0) && (*(longlong *)(param_1 + 0x648) != 0)) &&
     (*(longlong *)(param_1 + 0x5a8) != 0)) {
    lVar1 = FUN_1447210f0();
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x155) & 1) != 0)) &&
       ((*(longlong *)(lVar1 + 0x30) != 0 && (*(int *)(*(longlong *)(lVar1 + 0x30) + 0xa8) != 0))))
    {
      FUN_140e417fc(param_1);
      FUN_140e415a6(param_1);
      FUN_140e40696(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140e40132 FUN_140e40132 body=190 status=ok
// SIG undefined FUN_140e40132(void)

void FUN_140e40132(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_140e402be((longlong *)(param_1 + 0xc0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if ((*(byte *)(param_1 + 0x5e8) & 2) != 0) {
    FUN_141891981(*(undefined8 *)(param_1 + 0x598),param_2);
    if (*(char *)(param_1 + 0xf1) == '\x01') {
      FUN_14104f46a(param_1,0,0x3f800000);
      return;
    }
  }
  return;
}



// FUNCTION 140e401f0 FUN_140e401f0 body=205 status=ok
// SIG undefined FUN_140e401f0(void)

void FUN_140e401f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1447210f0();
  }
  if (((((*(longlong *)(param_1 + 0x5d0) != 0) && (lVar2 != 0)) &&
       (*(longlong *)(param_1 + 0x5a8) != 0)) &&
      (((*(byte *)(lVar2 + 0x155) & 0x20) == 0 && (*(longlong *)(param_1 + 0x5d8) != 0)))) &&
     ((*(longlong *)(param_1 + 0x5e0) != 0 &&
      ((0 < *(int *)(*(longlong *)(param_1 + 0x5e0) + 8) && (*(longlong *)(param_1 + 0x648) == 0))))
     )) {
    plVar1 = (longlong *)(param_1 + 0x638);
    *(longlong **)(param_1 + 0x650) = &DAT_14cb81b90;
    *(longlong *)(param_1 + 0x648) = param_1;
    lVar2 = DAT_14cb81b90;
    while( true ) {
      *(longlong *)(param_1 + 0x638) = lVar2;
      LOCK();
      lVar3 = **(longlong **)(param_1 + 0x650);
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        **(longlong **)(param_1 + 0x650) = (longlong)plVar1;
        lVar3 = lVar2;
      }
      UNLOCK();
      if (bVar4) break;
      *(longlong *)(param_1 + 0x638) = lVar3;
      lVar2 = **(longlong **)(param_1 + 0x650);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 140e402be FUN_140e402be body=353 status=ok
// SIG undefined FUN_140e402be(void)

void FUN_140e402be(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e40343;
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
LAB_140e40343:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e40420 FUN_140e40420 body=336 status=ok
// SIG undefined FUN_140e40420(void)

void FUN_140e40420(undefined8 param_1,longlong param_2,undefined4 param_3)

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
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_140337ccc(param_2,0);
  }
  if (DAT_14cac6e60 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b47bc4;
    local_58 = &LAB_1478989f1;
    local_60 = &LAB_146391124;
    local_68 = L"Engine";
    local_70 = 0x10000000000;
    local_78 = 0x10000005;
    local_80 = 0x10;
    local_88 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  local_30 = DAT_14cac6e60;
  if ((DAT_14cac6e60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140e40776(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e40572 FUN_140e40572 body=211 status=ok
// SIG undefined FUN_140e40572(void)

void FUN_140e40572(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (0 < param_2) {
    *(int *)(param_1 + 0x5cc) = param_2;
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x5a8);
  if (lVar7 == 0) {
    lVar7 = 0;
LAB_140e405af:
    lVar1 = *(longlong *)(lVar7 + 0x168);
    if (lVar1 == 0) goto LAB_140e405bb;
    uVar5 = FUN_14018b740();
    plVar6 = (longlong *)FUN_144718840(lVar1,uVar5);
    if (plVar6 != (longlong *)0x0) goto LAB_140e405fd;
  }
  else {
    uVar5 = FUN_14018b740();
    plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
    if (plVar6 == (longlong *)0x0) {
      lVar7 = *(longlong *)(param_1 + 0x5a8);
      goto LAB_140e405af;
    }
LAB_140e405fd:
    cVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      *(undefined4 *)(param_1 + 0x5cc) = uVar4;
      uVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
      *(undefined1 *)(param_1 + 0x5c8) = uVar3;
      return;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x5a8);
LAB_140e405bb:
  if (lVar7 != 0) {
    uVar5 = FUN_140cc62c2();
    uVar4 = FUN_140e40646(uVar5,*(undefined8 *)(param_1 + 0x5a8));
    *(undefined4 *)(param_1 + 0x5cc) = uVar4;
    *(undefined1 *)(param_1 + 0x5c8) = 1;
  }
  return;
}



// FUNCTION 140e40646 FUN_140e40646 body=79 status=ok
// SIG undefined FUN_140e40646(void)

undefined8 FUN_140e40646(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x48) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x40);
      }
                    /* WARNING: Could not recover jumptable at 0x000140e40685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140e40696 FUN_140e40696 body=223 status=ok
// SIG undefined FUN_140e40696(void)

void FUN_140e40696(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x5e8) & 8) == 0) {
    *(byte *)(param_1 + 0x5e8) = *(byte *)(param_1 + 0x5e8) | 8;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x5a8) + 0x1b0);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x5a8);
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar1 = *(longlong *)(param_1 + 0x5d0);
    if (lVar2 == 0) {
      lVar2 = FUN_14060002e(lVar1 + 0x20);
      if (lVar2 == 0) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0x5d0);
      if (*(char *)(lVar2 + 0xe8) == '\x01') {
        fVar4 = 0.0;
        if (0.0 <= *(float *)(lVar2 + 0xec)) {
          fVar4 = *(float *)(lVar2 + 0xec);
        }
      }
      else {
        fVar4 = -1.0;
      }
      lVar2 = FUN_14060002e(lVar2 + 0x20);
    }
    else if (*(char *)(lVar1 + 0xe8) == '\x01') {
      fVar4 = 0.0;
      if (0.0 <= *(float *)(lVar1 + 0xec)) {
        fVar4 = *(float *)(lVar1 + 0xec);
      }
    }
    else {
      fVar4 = -1.0;
    }
    FUN_143d901c6(param_1,lVar2,fVar4,1,lVar3,0);
  }
  return;
}



// FUNCTION 140e40776 FUN_140e40776 body=719 status=ok
// SIG undefined FUN_140e40776(void)

void FUN_140e40776(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

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
LAB_140e408ff:
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
LAB_140e407e1:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488bf652(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488bf3ea(param_1,&local_40,param_4);
      }
      goto LAB_140e4081f;
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
      if (DAT_14cad00c8 == 0) goto LAB_140e408ff;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e407e1;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140e40a46(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1488bf788(param_1,&local_50,param_4);
  }
LAB_140e4081f:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e40a46 FUN_140e40a46 body=948 status=ok
// SIG undefined FUN_140e40a46(void)

void FUN_140e40a46(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
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
  uint *local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar10 = (uint *)(param_1 + 0x250);
  uVar2 = *(uint *)(param_1 + 0x268);
  if (uVar2 == 0) {
    uVar8 = 1;
    uVar12 = 0;
    uVar3 = 0;
    iVar7 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = puVar10;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar7 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar7 = uVar2 - 1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_140e40c9b;
        iVar7 = iVar7 + 0x20;
        uVar3 = puVar4[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar8 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar14 = 0xffffffff;
    local_70 = puVar10;
    local_60 = (ulonglong)uVar2;
    local_58 = param_1;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar9 != 0) {
        lVar13 = *param_2;
        if ((lVar13 != 0 & DAT_14c950c29) == 1) {
          local_68 = param_3;
          FUN_1456cec3c(lVar13);
          puVar10 = local_70;
          param_3 = local_68;
LAB_140e40b4d:
          if (DAT_14cad00c8 == 0) {
            local_90 = &local_50;
            local_50 = FUN_144a7958c;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_1479b7a0c;
            local_a0 = &LAB_1463b464e;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000005;
            local_c0 = 8;
            local_c8 = 0x110;
            local_68 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar10 = local_70;
            param_3 = local_68;
            if (DAT_14cad00c8 == 0) goto LAB_140e40d86;
          }
          if (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140e40d86;
          if (*(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar13 = 0;
          }
        }
        else {
          if (lVar13 != 0) goto LAB_140e40b4d;
LAB_140e40d86:
          lVar13 = 0;
        }
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
          iVar11 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
            FUN_140c43e06(param_3,iVar11);
            param_1 = local_58;
            puVar10 = local_70;
          }
          *(longlong *)(*param_3 + (longlong)iVar11 * 8) = lVar9;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar10;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar11 = (int)uVar12;
      lVar9 = (longlong)iVar11;
      uVar3 = puVar4[lVar9] & uVar14;
      if (uVar3 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar11) {
          iVar6 = iVar11;
        }
        puVar10 = local_70;
        if (iVar11 < iVar5) {
          lVar13 = 0;
          do {
            uVar3 = puVar4[lVar9 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140e40c22;
            }
            iVar7 = iVar7 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar6 - lVar9 != lVar13);
          uVar14 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        param_1 = local_58;
        uVar3 = uVar2;
      }
      else {
LAB_140e40c22:
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)local_60);
  }
LAB_140e40c9b:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e40dfb FUN_140e40dfb body=588 status=ok
// SIG undefined FUN_140e40dfb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140e40dfb(void)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb81528 == (longlong *)0x0) {
    uRam000000014cb81550 = 0;
    _DAT_14cb81578 = 0;
    uRam000000014cb81580 = 0;
    _DAT_14cb81568 = 0;
    uRam000000014cb81570 = 0;
    _DAT_14cb81558 = 0;
    uRam000000014cb81560 = 0;
    DAT_14cb81538 = 0;
    uRam000000014cb81540 = 0;
    plVar5 = &DAT_14cb81538;
    _DAT_14cb81548 = 0xffffffff;
    _DAT_14cb81530 = &PTR_FUN_14b1814b0;
    _DAT_14cb81588 = 0x200000000;
    _DAT_14cb81590 = 1;
    memset(&DAT_14cb81598,0,0x98);
    DAT_14cb81528 = (longlong *)&DAT_14cb81530;
LAB_140e40e2e:
    bVar2 = true;
    plVar7 = plVar5;
LAB_140e40e31:
    plVar6 = DAT_14cb81528;
    if (*plVar5 == 0) goto LAB_140e40f2b;
    plVar5 = plVar7;
    if (!bVar2) {
      plVar5 = (longlong *)(*plVar7 + 0x30);
    }
    if (*plVar5 == 0) {
      if ((DAT_14c9a1ab0 == 0) || (*plVar7 == 0)) goto LAB_140e40e5e;
      uVar1 = *(ushort *)(*plVar7 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar5 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar5 == (longlong *)0x0)))) goto LAB_140e40e5e;
      cVar3 = (**(code **)(*plVar5 + 0x2a0))(plVar5,DAT_14cb81528);
    }
    else {
      if ((((int)DAT_14cb81528[3] == *(int *)(*plVar5 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar7 == 0)) goto LAB_140e40e5e;
      uVar1 = *(ushort *)(*plVar7 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar5 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar5 == (longlong *)0x0)) goto LAB_140e40e5e;
      cVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,DAT_14cb81528);
    }
    if (cVar3 == '\0') goto LAB_140e40e5e;
  }
  else {
    plVar7 = DAT_14cb81528 + 1;
    plVar5 = plVar7;
    if ((char)DAT_14cb81528[2] == '\0') goto LAB_140e40e2e;
    if ((char)DAT_14cb81528[2] == '\x02') {
      plVar5 = (longlong *)(*plVar7 + 0x30);
      bVar2 = false;
      goto LAB_140e40e31;
    }
LAB_140e40f2b:
    plVar6 = DAT_14cb81528;
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_140e40e5e;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_hazard",0);
    FUN_140024ada(&local_48,plVar6);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
LAB_140e40e5e:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 140e41048 FUN_140e41048 body=1061 status=ok
// SIG undefined FUN_140e41048(void)

void FUN_140e41048(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar6 = FUN_14487fd02(*(undefined8 *)(param_1 + 0x5a8));
  *(byte *)(param_1 + 0x5e8) = *(byte *)(param_1 + 0x5e8) & 0xee | iVar6 != 3;
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1447210f0();
  }
  FUN_140e4146e(&local_88,uVar7);
  *(longlong **)(param_1 + 0x5d8) = local_88;
  local_88 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x5e0);
  *(longlong **)(param_1 + 0x5e0) = local_80;
  local_80 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
  }
  *(longlong *)(param_1 + 0x5d0) = param_2;
  if (param_2 == 0) goto LAB_140e41211;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  lVar8 = FUN_14060002e(param_2 + 0x38);
  *(longlong *)(param_1 + 0x70) = lVar8;
  lVar9 = *(longlong *)(param_1 + 0x5d0);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar9 + 0xec);
  if ((*(byte *)(param_1 + 0x5e8) & 8) != 0) {
    if ((lVar9 != 0) && (lVar3 = *(longlong *)(param_1 + 0x80), lVar3 != 0)) {
      if ((longlong)*(int *)(lVar9 + 0x58) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(lVar9 + 0x50);
        lVar9 = (longlong)*(int *)(lVar9 + 0x58) * 0x88;
        do {
          lVar10 = FUN_14060002e(lVar8);
          if (lVar10 == lVar3) goto LAB_140e41403;
          lVar8 = lVar8 + 0x88;
          lVar9 = lVar9 + -0x88;
        } while (lVar9 != 0);
        lVar8 = 0;
LAB_140e41403:
        lVar9 = *(longlong *)(param_1 + 0x5d0);
      }
      lVar9 = FUN_14060002e(lVar9 + 0x20);
      if (lVar9 == lVar3) {
        lVar8 = *(longlong *)(param_1 + 0x5d0) + 0x60;
      }
      if (lVar8 != 0) goto LAB_140e41130;
      lVar8 = *(longlong *)(param_1 + 0x70);
    }
    if (lVar8 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x5d0);
      if ((*(longlong *)(lVar9 + 0x20) == 0) || (0xfffffffd < *(int *)(lVar9 + 0x28) - 1U))
      goto LAB_140e41130;
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      if (*(char *)(lVar9 + 0xe8) == '\x01') {
        fVar12 = 0.0;
        if (0.0 <= *(float *)(param_1 + 0x78)) {
          fVar12 = *(float *)(param_1 + 0x78);
        }
      }
      else {
        fVar12 = -1.0;
      }
      lVar8 = FUN_14060002e(lVar9 + 0x20);
      local_98 = uVar7;
    }
    else {
      local_98 = *(undefined8 *)(param_1 + 0x60);
      if (*(char *)(*(longlong *)(param_1 + 0x5d0) + 0xe8) == '\x01') {
        fVar12 = 0.0;
        if (0.0 <= *(float *)(param_1 + 0x78)) {
          fVar12 = *(float *)(param_1 + 0x78);
        }
      }
      else {
        fVar12 = -1.0;
      }
    }
    local_90 = 0;
    FUN_143d901c6(param_1,lVar8,fVar12,0);
  }
LAB_140e41130:
  if (((*(byte *)(param_1 + 0x5e8) & 1) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x5e0), plVar2 != (longlong *)0x0)) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_140e41211;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar11 = iVar6 == iVar5;
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + 0x5d8);
    uVar7 = local_70;
    if (lVar9 != 0) {
      FUN_1405fac16(lVar9,param_1 + 0x598);
      local_58 = param_1 + 0x170;
      local_60 = (longlong *)&DAT_100000000;
      local_50 = 0xffffffff;
      local_48 = 0;
      if (*(int *)(param_1 + 0x188) != 0) {
        FUN_1449c0562(&local_60);
      }
      local_70 = local_50;
      uVar7 = local_70;
      local_68 = local_48;
      local_64 = local_44;
      local_80 = local_60;
      local_78 = local_58;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      local_88 = (longlong *)(param_1 + 0x160);
      if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
        iVar6 = local_70._4_4_;
        local_70 = uVar7;
        do {
          plVar4 = *(longlong **)(*local_88 + (longlong)iVar6 * 0x18);
          if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
            if (plVar4 != (longlong *)0x0) goto LAB_140e41330;
            local_58 = 0;
            local_60 = plVar4;
          }
          else {
            FUN_1456cec3c(plVar4);
LAB_140e41330:
            local_60 = plVar4;
            uVar7 = FUN_1405fa766();
            local_58 = FUN_144718840(plVar4,uVar7);
          }
          FUN_1405fac16(lVar9,&local_60);
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(&local_80);
          iVar6 = local_70._4_4_;
          uVar7 = local_70;
        } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
      }
    }
    local_70 = uVar7;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_140e41211:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4146e FUN_140e4146e body=310 status=ok
// SIG undefined FUN_140e4146e(void)

longlong * FUN_140e4146e(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb81b78;
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



// FUNCTION 140e415a6 FUN_140e415a6 body=597 status=ok
// SIG undefined FUN_140e415a6(void)

void FUN_140e415a6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  undefined1 local_90;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1 + 0x5e8) & 4) == 0) {
    *(byte *)(param_1 + 0x5e8) = *(byte *)(param_1 + 0x5e8) | 4;
    if ((longlong)*(int *)(param_1 + 200) != 0) {
      plVar6 = *(longlong **)(param_1 + 0xc0);
      plVar1 = plVar6 + *(int *)(param_1 + 200);
      do {
        plVar2 = (longlong *)*plVar6;
        local_78 = 0;
        uStack_70 = 0;
        FUN_1404dedd4(plVar2,&local_78);
        lVar5 = (longlong)(int)uStack_70;
        if (lVar5 != 0) {
          lVar4 = 0;
          do {
            local_90 = 0;
            FUN_141266228(param_1);
            lVar4 = lVar4 + 8;
          } while (lVar5 * 8 != lVar4);
        }
        if ((longlong)(int)plVar2[0x44] < 1) {
          if ((DAT_14c76142c != 1) || ((*(byte *)(plVar2 + 0x3f) & 2) == 0)) {
            cVar3 = (**(code **)(*plVar2 + 0x508))(plVar2,0,1,0);
            *(byte *)(plVar2 + 0x3f) = *(byte *)(plVar2 + 0x3f) & 0xfd | cVar3 * '\x02';
          }
        }
        else {
          lVar5 = *(longlong *)(plVar2[0x43] + -8 + (longlong)(int)plVar2[0x44] * 8);
          *(byte *)(lVar5 + 0x608) = *(byte *)(lVar5 + 0x608) | 2;
          *(undefined4 *)(lVar5 + 0x10) = 3;
          *(undefined4 *)(lVar5 + 200) = 0xffffffff;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
      plVar6 = *(longlong **)(param_1 + 0xd0);
      plVar1 = plVar6 + *(int *)(param_1 + 0xd8);
      do {
        plVar2 = (longlong *)*plVar6;
        local_78 = 0;
        uStack_70 = 0;
        FUN_1404dedd4(plVar2,&local_78);
        lVar5 = (longlong)(int)uStack_70;
        if (lVar5 != 0) {
          lVar4 = 0;
          do {
            local_90 = 0;
            FUN_14122f222(param_1);
            lVar4 = lVar4 + 8;
          } while (lVar5 * 8 != lVar4);
        }
        if ((longlong)(int)plVar2[0x44] < 1) {
          if ((DAT_14c76142c != 1) || ((*(byte *)(plVar2 + 0x3f) & 2) == 0)) {
            cVar3 = (**(code **)(*plVar2 + 0x508))(plVar2,0,1,0);
            *(byte *)(plVar2 + 0x3f) = *(byte *)(plVar2 + 0x3f) & 0xfd | cVar3 * '\x02';
          }
        }
        else {
          lVar5 = *(longlong *)(plVar2[0x43] + -8 + (longlong)(int)plVar2[0x44] * 8);
          *(byte *)(lVar5 + 0x608) = *(byte *)(lVar5 + 0x608) | 2;
          *(undefined4 *)(lVar5 + 0x10) = 3;
          *(undefined4 *)(lVar5 + 200) = 0xffffffff;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e417fc FUN_140e417fc body=1262 status=ok
// SIG undefined FUN_140e417fc(void)

void FUN_140e417fc(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
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
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1 + 0x5e8) & 2) != 0) goto LAB_140e41b4e;
  *(byte *)(param_1 + 0x5e8) = *(byte *)(param_1 + 0x5e8) | 2;
  if (((*(longlong *)(param_1 + 0x5d0) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x5d0) + 0x19) == '\0')) &&
     (lVar7 = *(longlong *)(param_1 + 0x5a8), lVar7 != 0)) {
    if (DAT_14cb56270 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_148630fef;
      local_80 = FUN_1464b6a91;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar6 = (longlong *)FUN_144718840(lVar7,DAT_14cb56270);
    if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6), lVar7 != 0))
    {
      lVar8 = (**(code **)(*plVar6 + 0x20))(plVar6);
      lVar7 = *(longlong *)(param_1 + 0x5a8);
      local_50 = (code *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      pcVar3 = local_50;
      local_48 = 3;
      *(undefined ***)local_50 = &PTR_LAB_14b3e9ef0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      *(longlong *)(local_50 + 0x10) = lVar9;
      *(undefined ***)local_50 = &PTR_FUN_14b40fd90;
      *(longlong *)(local_50 + 0x18) = 0;
      iVar10 = 0;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar7 + 0xc);
        *(uint *)(local_50 + 0x18) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar10 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar10 = *(int *)(lVar7 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar7 + 0x10) = iVar5;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar10 = iVar5;
          }
        }
      }
      *(int *)(pcVar3 + 0x1c) = iVar10;
      *(longlong *)(pcVar3 + 0x20) = param_1;
      if (((local_48 == 0) || (local_50 == (code *)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)local_50 + 0x30))(), cVar4 == '\0')) {
        if (local_48 == 0) {
          uVar13 = 0;
          goto LAB_140e41abc;
        }
        if (local_50 != (code *)0x0) {
          uVar13 = 0;
          (*(code *)**(undefined8 **)local_50)(local_50,0);
          FUN_1446efa72(&local_50,0,0,0x10);
          goto LAB_140e41aac;
        }
        uVar13 = 0;
      }
      else {
        plVar6 = (longlong *)(lVar8 + 0xf8);
        if (*(int *)(lVar8 + 0x10c) < 1) {
          iVar10 = *(int *)(lVar8 + 0x100);
          iVar5 = *(int *)(lVar8 + 0x108) + -1;
          *(int *)(lVar8 + 0x108) = iVar5;
          if (iVar5 <= iVar10) {
            iVar5 = iVar10;
            if (0 < iVar10) {
              iVar11 = 0;
              do {
                if (((*(int *)(*plVar6 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                    (plVar2 = *(longlong **)(*plVar6 + (longlong)iVar11 * 0x10),
                    plVar2 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(plVar6,iVar11);
                  FUN_14005b248(plVar6);
                }
                else {
                  iVar11 = iVar11 + 1;
                }
                iVar5 = *(int *)(lVar8 + 0x100);
              } while (iVar11 < iVar5);
            }
            iVar11 = 2;
            if (2 < iVar5 * 2) {
              iVar11 = iVar5 * 2;
            }
            *(int *)(lVar8 + 0x108) = iVar11;
            if ((iVar11 < iVar10) && (*(int *)(lVar8 + 0x104) != iVar5)) {
              FUN_14045812c();
            }
          }
        }
        uVar13 = 0;
        if ((local_48 != 0) && (local_50 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_50 + 0x38))(local_50,&local_40);
          uVar13 = local_40;
        }
        iVar10 = *(int *)(lVar8 + 0x100);
        *(uint *)(lVar8 + 0x100) = iVar10 + 1U;
        if (*(uint *)(lVar8 + 0x104) < iVar10 + 1U) {
          FUN_1447a71f6(plVar6,iVar10);
        }
        lVar7 = *plVar6;
        lVar12 = (longlong)iVar10 * 0x10;
        *(undefined8 *)(lVar7 + lVar12) = 0;
        *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
        *(code **)(lVar7 + lVar12) = local_50;
        local_50 = (code *)0x0;
        *(int *)(lVar7 + 8 + lVar12) = local_48;
LAB_140e41aac:
        local_48 = 0;
LAB_140e41abc:
        if (local_50 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined8 *)(param_1 + 0x590) = uVar13;
    }
  }
  iVar10 = *(int *)(param_1 + 200);
  if ((longlong)iVar10 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xc0);
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar7 + lVar12) != 0) {
        FUN_141891981(*(undefined8 *)(param_1 + 0x598));
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar10 * 8 != lVar12);
  }
  iVar10 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar10 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xd0);
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar7 + lVar12) != 0) {
        FUN_141891bec(*(undefined8 *)(param_1 + 0x598));
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar10 * 8 != lVar12);
  }
  FUN_14104f46a(param_1,0,0x3f800000);
LAB_140e41b4e:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e41ceb FUN_140e41ceb body=73 status=ok
// SIG undefined FUN_140e41ceb(void)

void FUN_140e41ceb(longlong param_1,int param_2)

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



// FUNCTION 140e41d34 FUN_140e41d34 body=9 status=ok
// SIG undefined FUN_140e41d34(void)

void FUN_140e41d34(longlong param_1)

{
  FUN_1411d1b7a(param_1 + 0x10);
  return;
}



// FUNCTION 140e41d56 FUN_140e41d56 body=1653 status=ok
// SIG undefined FUN_140e41d56(void)

void FUN_140e41d56(longlong *param_1,uint param_2,uint param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  uint local_8c;
  longlong *local_88;
  ulonglong local_80;
  longlong local_78;
  int local_70;
  longlong local_68 [3];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((int)param_1[0x7c] != *(int *)((longlong)param_1 + 0x40c)) {
    plVar8 = param_1 + 0x82;
    if ((longlong *)param_1[0x83] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x83];
    }
    iVar5 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0x84] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar9 = param_1[0x7b] + (longlong)iVar5 * 0x60;
        if (*(uint *)(param_1[0x7b] + (longlong)iVar5 * 0x60) == param_2) goto LAB_140e41de5;
        iVar5 = *(int *)(lVar9 + 0x58);
      } while (iVar5 != -1);
    }
  }
  lVar9 = 0;
LAB_140e41de5:
  plVar8 = (longlong *)(lVar9 + 8);
  if (lVar9 == 0) {
    plVar8 = (longlong *)0x0;
  }
  local_4c = param_2;
  if (plVar8 == (longlong *)0x0) {
    FUN_1447cbafe(param_1 + 0x70,local_68,&local_4c,0);
  }
  lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar9 != 0) {
    lVar9 = FUN_1400f6f32(lVar9);
    if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 == 0)) {
      local_98 = (longlong *)0x0;
      local_a0 = 0;
      local_a8 = 0;
    }
    else {
      FUN_140d173bc(lVar9,local_68,local_4c);
      local_98 = (longlong *)FUN_140d1732e(lVar9,local_68);
      if (local_98 == (longlong *)0x0) {
        local_a8 = 0;
      }
      else {
        local_a8 = (**(code **)(*local_98 + 0x6c8))(local_98);
      }
      uVar10 = FUN_1402d8968(lVar9,local_68);
      local_a0 = CONCAT71((int7)((ulonglong)uVar10 >> 8),(uint)uVar10 < 0xb);
    }
    if (plVar8 == (longlong *)0x0) {
      local_68[0] = 0;
      local_68[1] = 0;
      iVar5 = (int)param_1[0x80];
      local_8c = param_3;
      local_88 = plVar8;
      local_80 = param_4;
      if (iVar5 == 0) {
        uVar22 = 1;
        uVar21 = 0;
        iVar17 = 0;
        iVar6 = 0;
      }
      else {
        puVar11 = (uint *)param_1[0x7f];
        if ((uint *)param_1[0x7f] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 0x7d);
        }
        uVar7 = *puVar11;
        if (uVar7 == 0) {
          iVar6 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar6 = iVar5 + -1;
          }
          uVar21 = 0;
          uVar22 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar22 = uVar21;
          }
          iVar17 = 0;
          do {
            if (uVar22 == uVar21) goto LAB_140e41f72;
            iVar17 = iVar17 + 0x20;
            uVar7 = puVar11[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar21 = 0;
          iVar17 = 0;
        }
        uVar22 = (ulonglong)(-uVar7 & uVar7);
        uVar3 = uVar22 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar17 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar6) {
          iVar6 = iVar5;
        }
      }
      if (iVar6 != iVar5) {
        uVar7 = 0xffffffff;
        do {
          FUN_140002266(&local_78,L"[%d]",*(undefined4 *)(param_1[0x7b] + (longlong)iVar6 * 0x60));
          iVar6 = local_70 + -1;
          if (local_70 == 0) {
            iVar6 = 0;
          }
          FUN_1400020e8(local_68,local_78,iVar6);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          uVar7 = uVar7 & ~(uint)uVar22;
          puVar11 = (uint *)param_1[0x7f];
          if ((uint *)param_1[0x7f] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 0x7d);
          }
          iVar4 = (int)param_1[0x80];
          iVar6 = (int)uVar21;
          lVar9 = (longlong)iVar6;
          uVar16 = puVar11[lVar9] & uVar7;
          if (uVar16 == 0) {
            iVar14 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar14 = iVar4 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar6) {
              iVar15 = iVar6;
            }
            if (iVar6 < iVar14) {
              lVar19 = 0;
              do {
                uVar16 = puVar11[lVar9 + lVar19 + 1];
                if (uVar16 != 0) {
                  uVar21 = (ulonglong)(iVar6 + (int)lVar19 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_140e420cb;
                }
                iVar17 = iVar17 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar15 - lVar9 != lVar19);
              uVar7 = 0xffffffff;
              iVar6 = iVar15;
            }
            uVar21 = (ulonglong)(iVar6 + 1);
            iVar6 = iVar4;
          }
          else {
LAB_140e420cb:
            uVar22 = (ulonglong)(-uVar16 & uVar16);
            uVar3 = uVar22 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar6 = (iVar17 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar6) {
              iVar6 = iVar4;
            }
          }
        } while (iVar6 != iVar5);
      }
LAB_140e41f72:
      param_4 = local_80;
      plVar8 = local_88;
      param_3 = local_8c;
      if ((int)param_1[0x86] != *(int *)((longlong)param_1 + 0x45c)) {
        plVar12 = param_1 + 0x8c;
        if ((longlong *)param_1[0x8d] != (longlong *)0x0) {
          plVar12 = (longlong *)param_1[0x8d];
        }
        iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[0x8e] - 1U & local_4c) * 4);
        if (iVar5 != -1) {
          do {
            if (*(uint *)(param_1[0x85] + (longlong)iVar5 * 0x20) == local_4c) {
              FUN_1414dc8fa(param_1);
              break;
            }
            iVar5 = *(int *)((longlong)iVar5 * 0x20 + param_1[0x85] + 0x18);
          } while (iVar5 != -1);
        }
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
    }
    if ((int)param_1[0x21] != *(int *)((longlong)param_1 + 0x134)) {
      plVar12 = param_1 + 0x27;
      if ((longlong *)param_1[0x28] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[0x28];
      }
      iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[0x29] - 1U & local_4c) * 4);
      if (iVar5 != -1) {
        lVar9 = param_1[0x20];
        iVar6 = iVar5;
        do {
          iVar17 = iVar5;
          if (*(uint *)(lVar9 + (longlong)iVar6 * 0x60) == local_4c) goto LAB_140e42197;
          iVar6 = *(int *)((longlong)iVar6 * 0x60 + lVar9 + 0x58);
        } while (iVar6 != -1);
      }
    }
  }
  goto LAB_140e4239e;
  while (iVar17 = *(int *)(lVar19 + 0x58), *(int *)(lVar19 + 0x58) != -1) {
LAB_140e42197:
    lVar19 = lVar9 + (longlong)iVar17 * 0x60;
    if (*(uint *)(lVar9 + (longlong)iVar17 * 0x60) == local_4c) goto LAB_140e421b9;
  }
  lVar19 = 0;
LAB_140e421b9:
  if (*(int *)(lVar19 + 0x10) != *(int *)(lVar19 + 0x3c)) {
    lVar20 = lVar19 + 0x40;
    if (*(longlong *)(lVar19 + 0x48) != 0) {
      lVar20 = *(longlong *)(lVar19 + 0x48);
    }
    iVar6 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar19 + 0x50) - 1U & param_3) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar19 + 8) + (longlong)iVar6 * 0x20) == param_3)
        goto LAB_140e42219;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar19 + 8) + 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_140e4239e;
  while (iVar5 = *(int *)(lVar19 + 0x58), iVar5 != -1) {
LAB_140e42219:
    lVar19 = lVar9 + (longlong)iVar5 * 0x60;
    if (*(uint *)(lVar9 + (longlong)iVar5 * 0x60) == local_4c) goto LAB_140e4223c;
  }
  lVar19 = 0;
LAB_140e4223c:
  if (*(int *)(lVar19 + 0x10) != *(int *)(lVar19 + 0x3c)) {
    lVar9 = lVar19 + 0x40;
    if (*(longlong *)(lVar19 + 0x48) != 0) {
      lVar9 = *(longlong *)(lVar19 + 0x48);
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar19 + 0x50) - 1U & param_3) * 4);
    if (iVar5 != -1) {
      do {
        lVar9 = *(longlong *)(lVar19 + 8) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(lVar19 + 8) + (longlong)iVar5 * 0x20) == param_3)
        goto LAB_140e42280;
        iVar5 = *(int *)(lVar9 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar9 = 0;
LAB_140e42280:
  if ((longlong)*(int *)(lVar9 + 0x10) != 0) {
    puVar18 = *(ulonglong **)(lVar9 + 8);
    puVar1 = puVar18 + *(int *)(lVar9 + 0x10);
    while ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
      plVar12 = (longlong *)*puVar18;
      uVar7 = ((uint)((ulonglong)plVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar12 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      plVar13 = (longlong *)plVar8[8];
      if ((longlong *)plVar8[8] == (longlong *)0x0) {
        plVar13 = plVar8 + 7;
      }
      iVar5 = *(int *)((longlong)plVar13 +
                      (ulonglong)((int)plVar8[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar5 == -1) break;
      while (puVar2 = (ulonglong *)(*plVar8 + (longlong)iVar5 * 0x18),
            (longlong *)*puVar2 != plVar12) {
        iVar5 = (int)puVar2[2];
        if (iVar5 == -1) goto LAB_140e4239e;
      }
      if ((puVar2 == (ulonglong *)0x0) || (puVar2 + 1 == (ulonglong *)0x0)) break;
      uVar21 = puVar2[1];
      lVar9 = param_4 - *(ulonglong *)(uVar21 + 0x20);
      if (param_4 < *(ulonglong *)(uVar21 + 0x20)) {
        lVar9 = 0;
      }
      *(ulonglong *)(uVar21 + 0x20) = param_4;
      local_b8 = local_98;
      local_c0 = (undefined1)local_a0;
      local_c8 = (undefined1)local_a8;
      FUN_1440e6978(param_1,uVar21,plVar12,lVar9);
      lVar9 = *plVar12;
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x139) == '\x01')) && (-1 < *(int *)(lVar9 + 0x13c)))
      {
        FUN_148cfd17a(param_1,local_4c,*(int *)(lVar9 + 0x13c),*(undefined1 *)(lVar9 + 0x144));
      }
      puVar18 = puVar18 + 1;
      if (puVar18 == puVar1) break;
    }
  }
LAB_140e4239e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e423cc FUN_140e423cc body=433 status=ok
// SIG undefined FUN_140e423cc(void)

void FUN_140e423cc(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DAT_14cb8e59c = param_2;
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x1f0);
    lVar8 = (longlong)*(int *)(param_1 + 0x1f8) * 0x30 + lVar9;
    do {
      plVar7 = (longlong *)(lVar9 + 8);
      *(undefined4 *)(lVar9 + 0x14) = param_2;
      (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_58,lVar9 + 0x10);
      if (plVar7 == &local_58) {
LAB_140e424b6:
        lVar4 = local_58;
        if (local_58 != 0) {
          LOCK();
          puVar1 = (uint *)(local_58 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_58 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(local_58 + 0xd);
              plVar5 = (longlong *)FUN_14001cc68(0x10,8);
              plVar5[1] = lVar4;
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar5 = (longlong)plVar7;
                  LOCK();
                  bVar10 = plVar7 != DAT_14ca843c0;
                  plVar6 = plVar5;
                  if (bVar10) {
                    plVar7 = DAT_14ca843c0;
                    plVar6 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar6;
                  UNLOCK();
                } while (bVar10);
              }
              else {
                do {
                  *plVar5 = (longlong)plVar6;
                  LOCK();
                  bVar10 = plVar6 != DAT_14ca843c8;
                  plVar7 = plVar5;
                  if (bVar10) {
                    plVar6 = DAT_14ca843c8;
                    plVar7 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar7;
                  UNLOCK();
                } while (bVar10);
              }
            }
          }
        }
      }
      else {
        lVar4 = *plVar7;
        *plVar7 = local_58;
        local_58 = 0;
        if (lVar4 != 0) {
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
                  bVar10 = plVar7 != DAT_14ca843c0;
                  plVar6 = plVar5;
                  if (bVar10) {
                    plVar7 = DAT_14ca843c0;
                    plVar6 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar6;
                  UNLOCK();
                } while (bVar10);
              }
              else {
                do {
                  *plVar5 = (longlong)plVar6;
                  LOCK();
                  bVar10 = plVar6 != DAT_14ca843c8;
                  plVar7 = plVar5;
                  if (bVar10) {
                    plVar6 = DAT_14ca843c8;
                    plVar7 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar7;
                  UNLOCK();
                } while (bVar10);
              }
            }
          }
          goto LAB_140e424b6;
        }
      }
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != lVar8);
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e42584 FUN_140e42584 body=57 status=ok
// SIG undefined FUN_140e42584(void)

void FUN_140e42584(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb235d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb235d8 = FUN_140002ddd(FUN_14643e2bb,uVar1,L"GpsTestSettings_NodeChain");
  }
  return;
}



// FUNCTION 140e425cc FUN_140e425cc body=240 status=ok
// SIG undefined FUN_140e425cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e425cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b72c590;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140e426bc(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
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



// FUNCTION 140e426bc FUN_140e426bc body=49 status=ok
// SIG undefined FUN_140e426bc(void)

void FUN_140e426bc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e426fc FUN_140e426fc body=145 status=ok
// SIG undefined FUN_140e426fc(void)

undefined8 * FUN_140e426fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5de7b0;
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e4278e FUN_140e4278e body=309 status=ok
// SIG undefined FUN_140e4278e(void)

undefined8 FUN_140e4278e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e428bd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e428bd;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar7 = local_40;
  }
  else {
LAB_140e428bd:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e42871;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_38 = (undefined4)param_2[1];
      local_40 = *param_2;
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),&local_40,param_3);
      uVar6 = 1;
      goto LAB_140e42871;
    }
  }
  uVar6 = 0;
LAB_140e42871:
  if (lVar7 != 0) {
    FUN_140113f3a(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e428c4 FUN_140e428c4 body=201 status=ok
// SIG undefined FUN_140e428c4(void)

void FUN_140e428c4(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_50,&local_60);
  lVar1 = FUN_14060eaf6(local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_140e4298e(param_1,lVar1 + 0x758,param_3);
    if ((longlong)*(int *)(lVar1 + 0x778) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x770);
      lVar1 = (longlong)*(int *)(lVar1 + 0x778) * 0x18;
      do {
        FUN_140e4298e(param_1,lVar2,param_3);
        lVar2 = lVar2 + 0x18;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4298e FUN_140e4298e body=186 status=ok
// SIG undefined FUN_140e4298e(void)

void FUN_140e4298e(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140c04244();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  if (param_2[2] == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar4;
        if (lVar4 == 0) {
          return;
        }
        goto LAB_140e42a14;
      }
      param_2[2] = 0;
    }
    return;
  }
LAB_140e42a14:
  if (param_3 == '\0') {
    FUN_140d53bb4(param_1,param_2);
    return;
  }
  FUN_140d54314();
  return;
}



// FUNCTION 140e42a48 FUN_140e42a48 body=190 status=ok
// SIG undefined FUN_140e42a48(void)

void FUN_140e42a48(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140e42b06(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 140e42b06 FUN_140e42b06 body=353 status=ok
// SIG undefined FUN_140e42b06(void)

void FUN_140e42b06(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e42b8b;
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
LAB_140e42b8b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e42c68 FUN_140e42c68 body=39 status=ok
// SIG undefined FUN_140e42c68(void)

void FUN_140e42c68(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e42c90(puVar1);
  *puVar1 = &PTR_FUN_14b87df20;
  *(undefined1 *)(puVar1 + 0x3b) = 0;
  return;
}



// FUNCTION 140e42c90 FUN_140e42c90 body=149 status=ok
// SIG undefined FUN_140e42c90(void)

undefined8 * FUN_140e42c90(undefined8 *param_1)

{
  FUN_140fbcba4();
  *(undefined1 *)(param_1 + 0x21) = 1;
  *param_1 = &PTR_FUN_14b546140;
  param_1[0x27] = 0;
  FUN_140e42d26(param_1 + 0x28);
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 140e42d26 FUN_140e42d26 body=81 status=ok
// SIG undefined FUN_140e42d26(void)

void FUN_140e42d26(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = DAT_14c966e80;
  param_1[2] = DAT_14c966e88;
  lVar2 = DAT_14c966e90;
  param_1[3] = DAT_14c966e90;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 4) = 7;
  *(byte *)((longlong)param_1 + 0x21) = (*(byte *)((longlong)param_1 + 0x21) & 0xfc) + 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 140e42d78 FUN_140e42d78 body=1298 status=ok
// SIG undefined FUN_140e42d78(void)

void FUN_140e42d78(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  ulonglong uStack_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) goto LAB_140e430f4;
  FUN_140056680(&local_48,param_3);
  if (param_4 == 0) {
    FUN_1400b22c2(&local_58,&DAT_149e02088);
  }
  else {
    FUN_140056680(&local_58,param_4);
  }
  if (0x80000000 < local_40 + 0x7fffffffU) {
    FUN_140e4328c(&local_48);
    local_b0 = 0xffffffff;
    local_b8 = 0;
    iVar7 = FUN_1447ee042(&local_58,&DAT_149e060b2,1,1);
    if (iVar7 == -1) {
      puVar8 = local_58;
      if ((int)uStack_50 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      lVar11 = 0;
      do {
        uVar3 = puVar8[lVar11];
        bVar2 = (&DAT_149e02088)[lVar11];
        iVar7 = (uint)uVar3 - (uint)bVar2;
        if (iVar7 == 0) {
          if (uVar3 == 0) goto LAB_140e43123;
        }
        else {
          if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_140e42e97;
          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto code_r0x000140e42e94;
        }
        lVar11 = lVar11 + 1;
      } while( true );
    }
    goto LAB_140e42fe7;
  }
  goto LAB_140e430d0;
code_r0x000140e42f11:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_140e42f14:
  if (iVar7 == 0) {
LAB_140e43164:
    plVar10 = local_88;
    FUN_1400b22c2(plVar10);
    bVar4 = true;
  }
  else {
    plVar10 = local_98;
    FUN_1400b22c2(plVar10);
    bVar4 = false;
  }
  puVar8 = local_58;
  iVar7 = (int)plVar10[1];
  if (iVar7 < 2) {
    local_68 = (undefined2 *)0x0;
    uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_50);
    if ((longlong)(int)uStack_50 == 0) {
      uStack_60 = uStack_50 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
      memcpy(local_68,puVar8,(longlong)(int)uStack_50 * 2);
    }
  }
  else {
    iVar9 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar9 = 0;
    }
    local_68 = (undefined2 *)*plVar10;
    *plVar10 = 0;
    uStack_60 = CONCAT44(*(int *)((longlong)plVar10 + 0xc),iVar7);
    plVar10[1] = 0;
    if (iVar9 + iVar7 < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar9);
    }
    if (*(int *)((longlong)plVar10 + 0xc) < iVar9 + iVar7) {
      FUN_1446f8c06(&local_68);
    }
    FUN_1400020e8(&local_68,local_58,iVar9);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = local_68;
  uStack_50 = uStack_60;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  if (!bVar4) {
    local_88[0] = local_98[0];
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_140e42fe7;
code_r0x000140e42e94:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_140e42e97:
  if (iVar7 != 0) {
    FUN_14006620a(&local_78,puVar8,(int)uStack_50 - 2U < 0x7fffffff);
    puVar8 = local_78;
    if ((int)uStack_70 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    lVar11 = 0;
    do {
      uVar3 = puVar8[lVar11];
      bVar2 = *(byte *)((longlong)L".Preview" + lVar11);
      iVar7 = (uint)uVar3 - (uint)bVar2;
      if (iVar7 == 0) {
        if (uVar3 == 0) goto LAB_140e43164;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_140e42f14;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto code_r0x000140e42f11;
      }
      lVar11 = lVar11 + 1;
    } while( true );
  }
LAB_140e43123:
  FUN_1400b22c2(&local_68,&DAT_149e119be);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = local_68;
  uStack_50 = uStack_60;
LAB_140e42fe7:
  FUN_1400b22c2(local_a8,L"/Disabled");
  FUN_1407ec8fc(&local_78,&local_48,local_a8);
  puVar8 = local_58;
  uVar5 = uStack_70;
  iVar7 = (int)uStack_70;
  if ((int)uStack_70 < 2) {
    local_68 = (undefined2 *)0x0;
    lVar11 = (longlong)(int)uStack_50;
    uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_50);
    if (lVar11 == 0) {
      uStack_60 = uStack_50 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
      memcpy(local_68,puVar8,lVar11 * 2);
    }
  }
  else {
    iVar9 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar9 = 0;
    }
    local_68 = local_78;
    iVar6 = uStack_70._4_4_;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    uStack_60 = uVar5;
    iVar1 = iVar9 + iVar7;
    if (iVar1 < iVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar9);
    }
    if (iVar6 < iVar1) {
      FUN_1446f8c06(&local_68);
    }
    FUN_1400020e8(&local_68,local_58,iVar9);
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  puVar8 = local_68;
  if ((int)uStack_60 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  local_b8 = local_b8 & 0xffffff00;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,puVar8,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140e430d0:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_140e430f4:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e4328c FUN_140e4328c body=174 status=ok
// SIG undefined FUN_140e4328c(void)

void FUN_140e4328c(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  wchar_t *_Str1;
  wchar_t *_Str1_00;
  
  FUN_1448097c4(param_1,&DAT_149e01f64,&DAT_149e065c6,0);
  uVar3 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar3 = 0;
  }
  if (0 < (int)uVar3) {
    lVar1 = *param_1;
    _Str1_00 = (wchar_t *)(lVar1 + (ulonglong)uVar3 * 2 + -2);
    iVar2 = wcscmp(_Str1_00,L"/");
    if (iVar2 == 0) {
      if (uVar3 == 1) {
LAB_140e43322:
        *_Str1_00 = L'\0';
        FUN_1401af9b2(param_1);
        return;
      }
      _Str1 = (wchar_t *)(lVar1 + (ulonglong)uVar3 * 2 + -4);
      iVar2 = wcscmp(_Str1,L"//");
      if (iVar2 != 0) {
        iVar2 = wcscmp(_Str1,L":/");
        if (iVar2 != 0) goto LAB_140e43322;
      }
    }
  }
  return;
}



// FUNCTION 140e4333a FUN_140e4333a body=642 status=ok
// SIG undefined FUN_140e4333a(void)

void FUN_140e4333a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined2 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort uVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined **local_98 [4];
  longlong local_78;
  undefined2 *local_60;
  int local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140056680(local_50,param_3);
  lVar9 = 0;
  FUN_1448097c4(local_50,&DAT_149e01f64,&DAT_149e065c6,0);
  FUN_144a06ecc(&local_60,local_50);
  puVar4 = local_60;
  puVar1 = local_60;
  if ((longlong)local_58 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar1 + lVar9);
    uVar6 = (ulonglong)uVar5;
    uVar8 = *(ushort *)((longlong)&DAT_149e060b2 + lVar9);
    if (uVar5 != uVar8) break;
    if (uVar5 == 0) goto LAB_140e434a1;
LAB_140e433e9:
    lVar9 = lVar9 + 2;
  }
  if ((uVar8 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar7 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_140e433e9;
  }
  if (uVar5 != uVar8) {
    lVar9 = 0;
    goto LAB_140e43422;
  }
LAB_140e434a1:
  FUN_140056680(&local_a8,&DAT_149e060b2);
LAB_140e434b2:
  local_b8 = param_5;
  local_b0 = 0;
  FUN_140e435be(local_98,param_2,&local_a8,param_4);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar3;
  }
  FUN_140bee914(&local_a8,local_50);
  puVar4 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar4 = local_a8;
  }
  (**(code **)(*plVar3 + 0x130))(plVar3,puVar4,local_98);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_98[0] = &PTR_FUN_149e13640;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140e43422:
  uVar5 = *(ushort *)((longlong)puVar1 + lVar9);
  uVar6 = (ulonglong)uVar5;
  uVar8 = *(ushort *)((longlong)&DAT_149e14148 + lVar9);
  if (uVar5 != uVar8) {
    if ((uVar8 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar7 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_140e43437;
    }
    if (uVar5 != uVar8) {
      local_a8 = (undefined2 *)0x0;
      local_a0 = local_58;
      if (local_58 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_58,0);
        memcpy(local_a8,puVar4,(longlong)local_58 * 2);
      }
      goto LAB_140e434b2;
    }
    goto LAB_140e434a1;
  }
  if (uVar5 == 0) goto LAB_140e434a1;
LAB_140e43437:
  lVar9 = lVar9 + 2;
  goto LAB_140e43422;
}



// FUNCTION 140e435be FUN_140e435be body=162 status=ok
// SIG undefined FUN_140e435be(void)

undefined8 *
FUN_140e435be(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  void *_Src;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_149e13640;
  param_1[2] = param_2;
  InitializeSRWLock((PSRWLOCK)(param_1 + 3));
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x31) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x32) = param_6;
  return param_1;
}



// FUNCTION 140e43660 FUN_140e43660 body=21 status=ok
// SIG undefined FUN_140e43660(void)

undefined8 FUN_140e43660(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140e4367c FUN_140e4367c body=57 status=ok
// SIG undefined FUN_140e4367c(void)

void FUN_140e4367c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9808 = FUN_140002ddd(FUN_1465d4b77,uVar1,L"OakDecoCharacterBodySettings");
  }
  return;
}



// FUNCTION 140e436b6 FUN_140e436b6 body=1337 status=ok
// SIG undefined FUN_140e436b6(void)

void FUN_140e436b6(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  uint *local_70;
  longlong local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar11 = (uint *)(param_1 + 0x288);
  iVar3 = *(int *)(param_1 + 0x2a0);
  if (iVar3 == 0) {
    uVar17 = 1;
    uVar8 = 0;
    iVar13 = 0;
    iVar7 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x298);
    if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
      puVar6 = puVar11;
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar13 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar13 = iVar3 + -1;
      }
      uVar8 = 0;
      uVar17 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar17 = uVar8;
      }
      iVar7 = 0;
      do {
        if (uVar17 == uVar8) goto LAB_140e43932;
        iVar7 = iVar7 + 0x20;
        uVar12 = puVar6[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar8 = 0;
      iVar7 = 0;
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar17 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar13 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar13) {
      iVar13 = iVar3;
    }
  }
  if (iVar13 != iVar3) {
    uVar12 = 0xffffffff;
    iVar5 = iVar3;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x10 + (longlong)iVar13 * 0x20);
      if (((lVar9 != 0) && (uVar2 = *(ulonglong *)(lVar9 + 0x30), uVar2 != 0)) &&
         (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354))) {
        uVar14 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        lVar10 = param_1 + 0x358;
        if (*(longlong *)(param_1 + 0x360) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x360);
        }
        iVar13 = *(int *)(lVar10 + (ulonglong)
                                   (*(int *)(param_1 + 0x368) - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4)
        ;
        if (iVar13 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(param_1 + 800) + (longlong)iVar13 * 0x28);
            if (*puVar1 == uVar2) {
              if (((puVar1 != (ulonglong *)0x0) && (puVar1 != (ulonglong *)&DAT_fffffffffffffff8))
                 && (uVar2 = puVar1[3], (longlong)(int)uVar2 != 0)) {
                uVar4 = puVar1[2];
                lVar10 = 0;
                do {
                  if (*(int *)(*(longlong *)(uVar4 + lVar10) + 0x40) !=
                      *(int *)(*(longlong *)(uVar4 + lVar10) + 0x44)) {
                    *(undefined4 *)(lVar9 + 0x40) = 0xfffffffe;
                  }
                  lVar10 = lVar10 + 8;
                } while ((longlong)(int)uVar2 * 8 != lVar10);
                iVar5 = *(int *)(param_1 + 0x2a0);
              }
              break;
            }
            iVar13 = (int)puVar1[4];
          } while (iVar13 != -1);
        }
      }
      uVar12 = uVar12 & ~(uint)uVar17;
      puVar6 = *(uint **)(param_1 + 0x298);
      if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
        puVar6 = puVar11;
      }
      iVar13 = (int)uVar8;
      lVar9 = (longlong)iVar13;
      uVar14 = puVar6[lVar9] & uVar12;
      if (uVar14 == 0) {
        iVar15 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar15 = iVar5 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar13) {
          iVar16 = iVar13;
        }
        if (iVar13 < iVar15) {
          lVar10 = 0;
          do {
            uVar14 = puVar6[lVar9 + lVar10 + 1];
            if (uVar14 != 0) {
              uVar8 = (ulonglong)(iVar13 + (int)lVar10 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140e4380d;
            }
            iVar7 = iVar7 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar16 - lVar9 != lVar10);
          uVar12 = 0xffffffff;
          lVar9 = (longlong)iVar16;
        }
        uVar8 = lVar9 + 1U & 0xffffffff;
        iVar13 = iVar5;
      }
      else {
LAB_140e4380d:
        uVar17 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar17 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar13 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar13) {
          iVar13 = iVar5;
        }
      }
    } while (iVar13 != iVar3);
  }
LAB_140e43932:
  FUN_140741ce4(local_60,5);
  iVar3 = *(int *)(param_1 + 0x2a0);
  local_70 = puVar11;
  if (iVar3 == 0) {
    uVar8 = 1;
    uVar17 = 0;
    iVar13 = 0;
    iVar7 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x298);
    if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
      puVar6 = puVar11;
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar13 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar13 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar8 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar8 = uVar17;
      }
      iVar7 = 0;
      do {
        if (uVar8 == uVar17) goto LAB_140e43af0;
        iVar7 = iVar7 + 0x20;
        uVar12 = puVar6[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar17 = 0;
      iVar7 = 0;
    }
    uVar8 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar13 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar13) {
      iVar13 = iVar3;
    }
  }
  if (iVar13 != iVar3) {
    uVar12 = 0xffffffff;
    iVar5 = iVar3;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x10 + (longlong)iVar13 * 0x20);
      if ((lVar9 != 0) &&
         ((local_68 = *(longlong *)(lVar9 + 0x30), local_68 == 0 || (*(int *)(lVar9 + 0x40) == -2)))
         ) {
        *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(lVar9 + 0x44);
        FUN_140e43bf0(param_1,&local_68,lVar9);
        lVar10 = local_68;
        if (local_68 != *(longlong *)(lVar9 + 0x30)) {
          if (*(longlong *)(lVar9 + 0x30) != 0) {
            local_80 = (longlong *)(param_1 + 0x370);
            local_78 = (longlong)*(int *)(param_1 + 0x378);
            uVar14 = *(int *)(param_1 + 0x378) + 1;
            *(uint *)(param_1 + 0x378) = uVar14;
            if (*(uint *)(param_1 + 0x37c) < uVar14) {
              FUN_1470a4daa(local_80,local_78);
            }
            *(undefined8 *)(*local_80 + local_78 * 8) = *(undefined8 *)(lVar9 + 0x30);
          }
          *(longlong *)(lVar9 + 0x30) = lVar10;
          if (lVar10 != 0) {
            FUN_1407d81de(lVar10 + 8,lVar9);
          }
        }
        iVar5 = *(int *)(param_1 + 0x2a0);
      }
      uVar12 = uVar12 & ~(uint)uVar8;
      puVar11 = *(uint **)(param_1 + 0x298);
      if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
        puVar11 = local_70;
      }
      iVar13 = (int)uVar17;
      lVar9 = (longlong)iVar13;
      uVar14 = puVar11[lVar9] & uVar12;
      if (uVar14 == 0) {
        iVar15 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar15 = iVar5 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar13) {
          iVar16 = iVar13;
        }
        if (iVar13 < iVar15) {
          lVar10 = 0;
          do {
            uVar14 = puVar11[lVar9 + lVar10 + 1];
            if (uVar14 != 0) {
              uVar17 = (ulonglong)(iVar13 + (int)lVar10 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140e43ab5;
            }
            iVar7 = iVar7 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar16 - lVar9 != lVar10);
          uVar12 = 0xffffffff;
          iVar13 = iVar16;
        }
        uVar17 = (ulonglong)(iVar13 + 1);
        iVar13 = iVar5;
      }
      else {
LAB_140e43ab5:
        uVar8 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar13 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar13) {
          iVar13 = iVar5;
        }
      }
    } while (iVar13 != iVar3);
  }
LAB_140e43af0:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e43bf0 FUN_140e43bf0 body=2311 status=ok
// SIG undefined FUN_140e43bf0(void)

void FUN_140e43bf0(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  char *_Str;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *_Src;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  size_t sVar14;
  longlong *plVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  int *piVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  char *pcVar29;
  longlong lVar30;
  ulonglong uVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  char *pcVar35;
  undefined1 auStack_c8 [32];
  char *local_a8;
  void *local_a0;
  undefined8 local_98;
  char *local_90;
  byte *local_88;
  longlong *plStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar16 = *param_2;
  if ((uVar16 == 0) || ((int)param_1[0x65] == *(int *)((longlong)param_1 + 0x354))) {
LAB_140e43cd9:
    pcVar35 = (char *)0x0;
  }
  else {
    uVar18 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    plVar20 = param_1 + 0x6b;
    if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[0x6c];
    }
    uVar28 = (longlong)(int)(uVar18 >> 0x10 ^ uVar18) & (longlong)(int)param_1[0x6d] - 1U;
    iVar32 = *(int *)((longlong)plVar20 + (uVar28 & 0xffffffff) * 4);
    if (iVar32 == -1) goto LAB_140e43cd9;
    plVar15 = param_1 + 100;
    lVar25 = *plVar15;
    pcVar35 = (char *)0x0;
    do {
      puVar1 = (ulonglong *)(lVar25 + (longlong)iVar32 * 0x28);
      if (*puVar1 == uVar16) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) goto LAB_140e43cd9;
        pcVar35 = (char *)puVar1[1];
        iVar32 = *(int *)((longlong)plVar20 + uVar28 * 4);
        goto LAB_140e441b6;
      }
      iVar32 = (int)puVar1[4];
    } while (iVar32 != -1);
  }
LAB_140e43cdc:
  local_78 = (void *)0x0;
  uStack_70 = 0;
  cVar9 = (**(code **)(*param_1 + 0x418))(param_1,&local_78,param_3,param_3);
  if (cVar9 == '\0') goto LAB_140e44170;
  local_88 = (byte *)0x0;
  plStack_80 = (longlong *)0x0;
  cVar9 = FUN_1446e9750(param_1,&local_88,&local_78,0);
  if (cVar9 != '\0') {
    if (local_88 != (byte *)0x0) {
      if ((*local_88 & 2) == 0) {
        plVar20 = &DAT_14c9a1288;
      }
      else {
        plVar20 = (longlong *)(*(longlong *)(local_88 + 8) + 0x18);
      }
      if ((int)plVar20[2] != *(int *)((longlong)plVar20 + 0x3c)) {
        plVar15 = plVar20 + 8;
        if ((longlong *)plVar20[9] != (longlong *)0x0) {
          plVar15 = (longlong *)plVar20[9];
        }
        iVar32 = *(int *)((longlong)plVar15 +
                         (ulonglong)((int)plVar20[10] - 1U & *(uint *)(param_1 + 0x5a)) * 4);
        if (iVar32 != -1) {
          do {
            lVar25 = *plVar20 + (longlong)iVar32 * 0x40;
            if (*(uint *)(*plVar20 + (longlong)iVar32 * 0x40) == *(uint *)(param_1 + 0x5a)) {
              if ((((lVar25 != 0) &&
                   (puVar21 = (undefined8 *)(lVar25 + 0x28), puVar21 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar21 != (byte *)0x0)) && ((*(byte *)*puVar21 & 0x40) == 0))
              goto LAB_140e43daf;
              break;
            }
            iVar32 = *(int *)(lVar25 + 0x38);
          } while (iVar32 != -1);
        }
      }
    }
    puVar21 = &DAT_14c9a1308;
LAB_140e43daf:
    pbVar4 = (byte *)*puVar21;
    if (((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) ||
       (_Str = *(char **)(pbVar4 + 8), _Str == (char *)0x0)) {
LAB_140e43db7:
      uVar16 = 0;
      uVar28 = 0;
    }
    else {
      sVar14 = strlen(_Str);
      uVar18 = (uint)sVar14;
      if (uVar18 == 0) goto LAB_140e43db7;
      lVar25 = (longlong)(int)uVar18;
      pcVar29 = _Str + lVar25 + -1;
      uVar27 = 0;
      if (pcVar29 < _Str) {
        lVar34 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar29 - 0x30U)) break;
          uVar27 = uVar27 + 1;
          pcVar29 = pcVar29 + -1;
        } while (_Str <= pcVar29);
        lVar34 = 0;
        if (((uVar27 != 0) && ((int)uVar27 < (int)uVar18)) &&
           ((lVar34 = 0, uVar27 < 0xb &&
            (lVar30 = -(ulonglong)uVar27, _Str[lVar30 + lVar25 + -1] == '_')))) {
          if ((uVar27 == 1) || (_Str[lVar30 + lVar25] != '0')) {
            lVar33 = 0;
            do {
              lVar34 = (longlong)_Str[lVar30 + lVar25] + lVar33 * 10;
              lVar33 = lVar34 + -0x30;
              lVar30 = lVar30 + 1;
            } while (lVar30 != 0);
            if (lVar33 < 0x7fffffff) {
              uVar18 = ~uVar27 + uVar18;
              lVar34 = lVar34 + -0x2f;
              goto LAB_140e43e1e;
            }
          }
          lVar34 = 0;
        }
LAB_140e43e1e:
        if (uVar18 == 0) goto LAB_140e43db7;
      }
      local_a0._0_5_ = (uint5)uVar18;
      local_a8 = _Str;
      uVar18 = FUN_14001a6c0(&local_a8,1);
      uVar28 = lVar34 << 0x20;
      uVar16 = (ulonglong)uVar18;
    }
    local_90 = (char *)(uVar16 | uVar28);
    if ((*param_2 == 0) || (local_90 != pcVar35)) {
      uVar16 = (**(code **)(*param_1 + 0x428))(param_1,&local_90);
      *param_2 = uVar16;
      if (uVar16 == 0) goto LAB_140e44149;
    }
    else {
      (**(code **)(*param_1 + 0x438))(param_1);
      if ((param_3 != 0) && (*(longlong *)(param_3 + 0x30) != 0)) {
        FUN_1407d81de(*(longlong *)(param_3 + 0x30) + 8,param_3);
      }
    }
    _Src = local_78;
    local_a8 = local_90;
    local_a0 = (void *)0x0;
    lVar25 = (longlong)(int)uStack_70;
    local_98 = CONCAT44(local_98._4_4_,(int)uStack_70);
    if (lVar25 == 0) {
      local_98 = uStack_70 & 0xffffffff;
    }
    else {
      FUN_14012afbc(&local_a0,uStack_70 & 0xffffffff,0);
      memcpy(local_a0,_Src,lVar25 << 3);
    }
    plVar20 = param_1 + 100;
    if (*(int *)((longlong)param_1 + 0x354) == 0) {
      iVar32 = (int)param_1[0x65];
      *(int *)(param_1 + 0x65) = iVar32 + 1;
      if (*(int *)((longlong)param_1 + 0x32c) == iVar32) {
        FUN_140549c28(plVar20,iVar32);
      }
      iVar11 = (int)param_1[0x69];
      if (iVar11 == 0) {
        iVar10 = -1;
      }
      else {
        iVar10 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar10 = iVar11 + -1;
        }
        iVar10 = iVar10 >> 5;
      }
      plVar15 = param_1 + 0x66;
      iVar19 = iVar11 + 1;
      iVar26 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar26 = iVar11;
      }
      if (iVar26 >> 5 == iVar10) {
        *(int *)(param_1 + 0x69) = iVar19;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x34c) <= iVar11) {
          iVar10 = iVar11;
          if (iVar11 + 0x20U < 0xa0) {
            iVar19 = 0x80;
          }
          else {
            uVar18 = iVar11 + 0x20U >> 5;
            if (*(int *)((longlong)param_1 + 0x34c) + 0x1fU < 0xa0) {
              uVar27 = 4;
              if (4 < uVar18) {
                uVar27 = uVar18;
              }
            }
            else {
              uVar27 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
            }
            uVar16 = (ulonglong)(uVar27 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar12 = (uint)(uVar16 + 0xf);
                if (uVar27 < 0x1ffd) {
                  uVar16 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
                }
                else {
                  uVar28 = (ulonglong)(uVar12 & 0xfffffff0);
                  if (uVar28 < 0x7ff1) {
                    bVar17 = (&DAT_14c841e00)[uVar12 >> 4];
                    uVar24 = 0x32;
                    if (0x32 < bVar17) {
                      uVar24 = (ulonglong)bVar17;
                    }
                    uVar31 = 0x32 - (ulonglong)bVar17;
                    do {
                      uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0) goto LAB_140e443cd;
                      lVar25 = uVar24 + 1 + uVar31;
                      uVar31 = uVar31 - 1;
                    } while (lVar25 != 0x33);
                  }
                  uVar16 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar16 = (ulonglong)DAT_14c841df8;
                  }
                  uVar16 = -uVar16 & (uVar28 + uVar16) - 1;
                }
              }
              else {
                uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
                iVar10 = (int)param_1[0x69];
              }
            }
LAB_140e443cd:
            iVar13 = (int)(uVar16 >> 2);
            iVar19 = -0x20;
            if ((int)uVar18 <= iVar13) {
              iVar19 = iVar13 << 5;
            }
          }
          *(int *)((longlong)param_1 + 0x34c) = iVar19;
          FUN_1446efbd8(plVar15,iVar10);
          iVar19 = (int)param_1[0x69] + 1;
        }
        iVar10 = iVar19 + 0x1f;
        if (-1 < iVar19) {
          iVar10 = iVar19;
        }
        *(int *)(param_1 + 0x69) = iVar19;
        if (iVar19 % 0x20 != 0) {
          plVar23 = (longlong *)param_1[0x68];
          if ((longlong *)param_1[0x68] == (longlong *)0x0) {
            plVar23 = plVar15;
          }
          bVar17 = -(char)(iVar19 % 0x20);
          *(uint *)((longlong)plVar23 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar23 + (longlong)(iVar10 >> 5) * 4) << (bVar17 & 0x1f))
               >> (bVar17 & 0x1f);
        }
      }
      lVar25 = (longlong)iVar32;
      if ((longlong *)param_1[0x68] != (longlong *)0x0) {
        plVar15 = (longlong *)param_1[0x68];
      }
      bVar17 = (byte)iVar11 & 0x1f;
      puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar26 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
    }
    else {
      iVar32 = (int)param_1[0x6a];
      lVar25 = (longlong)iVar32;
      iVar11 = *(int *)(param_1[100] + 4 + lVar25 * 0x28);
      *(int *)(param_1 + 0x6a) = iVar11;
      iVar10 = *(int *)((longlong)param_1 + 0x354) + -1;
      *(int *)((longlong)param_1 + 0x354) = iVar10;
      if (iVar10 != 0) {
        *(undefined4 *)(param_1[100] + (longlong)iVar11 * 0x28) = 0xffffffff;
      }
    }
    plVar15 = param_1 + 0x66;
    if ((longlong *)param_1[0x68] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[0x68];
    }
    iVar11 = iVar32 + 0x1f;
    if (-1 < iVar32) {
      iVar11 = iVar32;
    }
    puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar32 & 0x1f);
    iVar11 = 1;
    puVar1 = (ulonglong *)(param_1[100] + lVar25 * 0x28);
    *puVar1 = *param_2;
    puVar1[1] = (ulonglong)local_a8;
    puVar1[2] = (ulonglong)local_a0;
    local_a0 = (void *)0x0;
    *(undefined4 *)(puVar1 + 3) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_98._4_4_;
    local_98 = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    uVar16 = *puVar1;
    uVar18 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    uVar18 = uVar18 >> 0x10 ^ uVar18;
    uVar27 = (int)param_1[0x65] - *(int *)((longlong)param_1 + 0x354);
    if ((uVar27 != 0) && (uVar27 != 1)) {
      plVar15 = param_1 + 0x6b;
      if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
        plVar15 = (longlong *)param_1[0x6c];
      }
      iVar10 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[0x6d] - 1U & uVar18) * 4);
      if (iVar10 != -1) {
        do {
          puVar3 = (ulonglong *)(*plVar20 + (longlong)iVar10 * 0x28);
          if (*puVar3 == uVar16) {
            if (puVar3[2] != 0) {
              FUN_1400020a8();
            }
            uVar16 = *puVar1;
            uVar5 = *(undefined4 *)((longlong)puVar1 + 4);
            uVar28 = puVar1[1];
            uVar6 = *(undefined4 *)((longlong)puVar1 + 0xc);
            uVar7 = *(undefined4 *)((longlong)puVar1 + 0x14);
            uVar24 = puVar1[3];
            uVar8 = *(undefined4 *)((longlong)puVar1 + 0x1c);
            *(int *)(puVar3 + 2) = (int)puVar1[2];
            *(undefined4 *)((longlong)puVar3 + 0x14) = uVar7;
            *(int *)(puVar3 + 3) = (int)uVar24;
            *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar8;
            *(int *)puVar3 = (int)uVar16;
            *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
            *(int *)(puVar3 + 1) = (int)uVar28;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
            FUN_142b4503a(plVar20,iVar32);
            goto LAB_140e44126;
          }
          iVar10 = (int)puVar3[4];
        } while (iVar10 != -1);
      }
    }
    if (3 < uVar27) {
      uVar16 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
      lVar25 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar25 & 0x1f);
    }
    if (((int)uVar27 < 1) || (iVar11 <= (int)param_1[0x6d])) {
      uVar18 = (int)param_1[0x6d] - 1U & uVar18;
      *(uint *)((longlong)puVar1 + 0x24) = uVar18;
      plVar20 = (longlong *)param_1[0x6c];
      if ((longlong *)param_1[0x6c] == (longlong *)0x0) {
        plVar20 = param_1 + 0x6b;
      }
      *(undefined4 *)(puVar1 + 4) =
           *(undefined4 *)
            ((longlong)plVar20 + ((longlong)(int)param_1[0x6d] - 1U & (longlong)(int)uVar18) * 4);
      plVar20 = (longlong *)param_1[0x6c];
      if ((longlong *)param_1[0x6c] == (longlong *)0x0) {
        plVar20 = param_1 + 0x6b;
      }
      *(int *)((longlong)plVar20 + ((longlong)(int)param_1[0x6d] - 1U & (longlong)(int)uVar18) * 4)
           = iVar32;
    }
    else {
      *(int *)(param_1 + 0x6d) = iVar11;
      FUN_1410f2130(plVar20);
    }
LAB_140e44126:
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x440))(param_1,*param_2,&local_88);
  }
LAB_140e44149:
  plVar20 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_80 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar22 = (int *)((longlong)plVar20 + 0xc);
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (*piVar22 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
LAB_140e44170:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140e441b6:
  if (iVar32 != -1) {
    puVar1 = (ulonglong *)(lVar25 + (longlong)iVar32 * 0x28);
    if (*puVar1 != uVar16) goto code_r0x000140e441cf;
    iVar11 = *(int *)((longlong)plVar20 + (longlong)*(int *)((longlong)puVar1 + 0x24) * 4);
    if (iVar11 == iVar32) {
      piVar22 = (int *)((longlong)plVar20 + (longlong)*(int *)((longlong)puVar1 + 0x24) * 4);
    }
    else {
      do {
        piVar22 = (int *)(lVar25 + (longlong)iVar11 * 0x28 + 0x20);
        iVar11 = *piVar22;
      } while (iVar11 != iVar32);
    }
    *piVar22 = (int)puVar1[4];
    if (*(longlong *)(*plVar15 + 0x10 + (longlong)iVar32 * 0x28) != 0) {
      FUN_1400020a8();
    }
    FUN_142b4503a(plVar15,iVar32);
  }
  goto LAB_140e43cdc;
code_r0x000140e441cf:
  iVar32 = (int)puVar1[4];
  goto LAB_140e441b6;
}



// FUNCTION 140e444f8 FUN_140e444f8 body=749 status=ok
// SIG undefined FUN_140e444f8(void)

void FUN_140e444f8(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [32];
  float local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  int local_8c;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_3 != 0) && (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_b0 = &local_88;
      local_88 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1459f2e4c;
      local_b8 = &LAB_148c39de3;
      local_c0 = &LAB_1457a9eb2;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 2.21966e-41;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
        (lVar3 = FUN_140e4494e(lVar4), lVar3 != 0)) &&
       ((*(longlong *)(lVar4 + 0x3db8) != 0 &&
        (lVar4 = FUN_140e447e6(*(longlong *)(lVar4 + 0x3db8),param_3), lVar4 != 0)))) {
      piVar5 = (int *)FUN_1409e484c(param_2,param_3);
      iVar1 = *piVar5;
      uVar6 = FUN_140d72879();
      local_8c = iVar1;
      uVar7 = FUN_140d72a52(uVar6,param_3,iVar1);
      fVar13 = (float)(param_5 - uVar7);
      fVar11 = 0.0;
      if (param_5 <= uVar7) {
        fVar13 = 0.0;
      }
      lVar8 = FUN_1409e484c(param_2,param_3);
      uVar2 = *(ulonglong *)(lVar8 + 0x20);
      fVar12 = 0.0;
      if (uVar2 != uVar7) {
        fVar12 = fVar13 / (float)(uVar2 - uVar7);
      }
      fVar13 = (float)(param_4 - uVar7);
      if (param_4 <= uVar7) {
        fVar13 = 0.0;
      }
      if (uVar2 != uVar7) {
        fVar11 = fVar13 / (float)(uVar2 - uVar7);
      }
      iVar1 = *(int *)(param_1 + 0x88);
      if ((longlong)iVar1 != 0) {
        lVar9 = (longlong)local_8c;
        lVar8 = *(longlong *)(param_1 + 0x80);
        lVar10 = 0;
        do {
          fVar13 = *(float *)(lVar8 + lVar10);
          if ((fVar11 < fVar13) && (fVar13 <= fVar12)) {
            uVar6 = FUN_140e44844(lVar4);
            local_e8 = fVar12 * 100.0;
            FUN_140e44aea(lVar3,&local_88,uVar6,lVar9);
          }
          lVar10 = lVar10 + 4;
        } while ((longlong)iVar1 * 4 != lVar10);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e447e6 FUN_140e447e6 body=93 status=ok
// SIG undefined FUN_140e447e6(void)

longlong FUN_140e447e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar2 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
    do {
      lVar1 = FUN_140e44844(lVar3);
      if ((lVar1 != 0) && (lVar1 = FUN_140e448c6(lVar1), lVar1 == param_2)) {
        return lVar3;
      }
      lVar3 = lVar3 + 0xe8;
      lVar2 = lVar2 + -0xe8;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 140e44844 FUN_140e44844 body=130 status=ok
// SIG undefined FUN_140e44844(void)

void FUN_140e44844(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_141218768();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 140e448c6 FUN_140e448c6 body=136 status=ok
// SIG undefined FUN_140e448c6(void)

void FUN_140e448c6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar3 = FUN_140b1c3dc();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140e4494e FUN_140e4494e body=105 status=ok
// SIG undefined FUN_140e4494e(void)

void FUN_140e4494e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e44a04();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140e449b8(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e449b8 FUN_140e449b8 body=76 status=ok
// SIG undefined FUN_140e449b8(void)

void FUN_140e449b8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140e44a04();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e449f5;
    }
  }
  lVar2 = 0;
LAB_140e449f5:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140e44a04 FUN_140e44a04 body=228 status=ok
// SIG undefined FUN_140e44a04(void)

longlong FUN_140e44a04(void)

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
  if (DAT_14cbb2538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_1465f42c2;
    local_38 = &LAB_148c590e1;
    local_40 = FUN_1465f5dd7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_InGameMessage",&DAT_14cbb2538,
                  FUN_1465f5db0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e44aea FUN_140e44aea body=621 status=ok
// SIG undefined FUN_140e44aea(void)

undefined4 *
FUN_140e44aea(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_1b8 [40];
  longlong local_190 [2];
  longlong *local_180;
  int local_178;
  undefined4 local_174;
  undefined1 local_170 [4];
  undefined8 local_16c;
  longlong *local_160;
  int local_158;
  undefined4 local_d8;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 == 0) {
LAB_140e44bbc:
    *param_2 = 0xffffffff;
  }
  else {
    lVar3 = FUN_140495e96(param_1 + 0x30);
    if (lVar3 != 0) {
      lVar4 = FUN_14030d4a0();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (*(char *)(lVar3 + 0x459) == '\0')) goto LAB_140e44bbc;
    }
    lVar3 = FUN_14144d9c6(param_3);
    FUN_1412099d2(param_1,&DAT_14cbd63c0);
    FUN_14125b7f0(local_170);
    local_16c = DAT_14cbd63b0;
    if (lVar3 == 0) {
      FUN_1400b22c2(local_190,"VAULT CARD DLC TITLE");
      FUN_140233b1a(&local_180,local_190);
      plVar5 = local_180;
    }
    else {
      plVar5 = *(longlong **)(lVar3 + 0x18);
      local_180 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      local_178 = *(int *)(lVar3 + 0x20);
    }
    plVar2 = local_160;
    if (local_160 != plVar5) {
      local_160 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      plVar5 = local_180;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar5 = local_180;
      }
    }
    local_158 = local_178;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if (lVar3 == 0) {
      if (local_190[0] != 0) {
        FUN_1400020a8();
      }
      local_d8 = param_5;
      FUN_1400b22c2(&local_180,&DAT_149e02088);
    }
    else {
      local_d8 = param_5;
      local_180 = (longlong *)0x0;
      local_178 = *(int *)(lVar3 + 0x88);
      lVar4 = (longlong)local_178;
      _Src = *(void **)(lVar3 + 0x80);
      if (lVar4 == 0) {
        local_174 = 0;
      }
      else {
        FUN_1446dd670(&local_180,local_178,0);
        memcpy(local_180,_Src,lVar4 * 2);
      }
    }
    iVar1 = local_178 + -1;
    if (local_178 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(local_68,local_180,iVar1);
    if (local_180 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_58 = 1;
    local_70 = param_4;
    FUN_14120969a(param_1,param_2,local_170);
    FUN_140989dc4(local_170);
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e44d58 FUN_140e44d58 body=223 status=ok
// SIG undefined FUN_140e44d58(void)

undefined8 FUN_140e44d58(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)(param_1[0xe] + 0x18);
  FUN_1400021e4(local_48,&local_58);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x308))();
  FUN_140002266(local_48,L"%s%s",uVar1,puVar2);
  local_68 = local_48;
  (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e44e38 FUN_140e44e38 body=85 status=ok
// SIG undefined FUN_140e44e38(void)

undefined8
FUN_140e44e38(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
             undefined8 *param_5)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_5;
  }
  pwVar1 = L"TObjectPtr<%s>";
  if ((*(ulonglong *)(param_1 + 0x38) >> 0x38 & 1) == 0) {
    pwVar1 = L"%s*";
  }
  if ((param_4 >> 8 & 1) != 0) {
    pwVar1 = L"%s*";
  }
  FUN_140002266(param_2,pwVar1,puVar2);
  return param_2;
}



// FUNCTION 140e44e8e FUN_140e44e8e body=176 status=ok
// SIG undefined FUN_140e44e8e(void)

wchar_t * FUN_140e44e8e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = *(uint *)(param_1 + 0xd4);
  bVar3 = DAT_14c87ead8;
  if (param_1 == 0) {
    pwVar4 = L"UDEPRECATED_";
    if ((uVar1 >> 0x19 & 1) == 0) {
      pwVar4 = L"U";
    }
  }
  else {
    do {
      uVar2 = *(ulonglong *)(param_1 + 0x18);
      if ((bVar3 & 1) == 0) {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = 1;
      }
      bVar7 = uVar2 != DAT_14c892cd8;
      param_1 = *(longlong *)(param_1 + 0x40);
      bVar3 = 1;
    } while (param_1 != 0 && bVar7);
    bVar6 = (uVar1 >> 0x19 & 1) == 0;
    pwVar5 = L"ADEPRECATED_";
    if (bVar6) {
      pwVar5 = L"A";
    }
    pwVar4 = L"UDEPRECATED_";
    if (bVar6) {
      pwVar4 = L"U";
    }
    if (!bVar7) {
      pwVar4 = pwVar5;
    }
  }
  return pwVar4;
}



// FUNCTION 140e44f3e FUN_140e44f3e body=199 status=ok
// SIG undefined FUN_140e44f3e(void)

undefined8 *
FUN_140e44f3e(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f45ebc(param_1,param_3,param_4);
  param_1[9] = 0;
  *param_1 = &PTR_FUN_149e13ce0;
  local_48 = (void *)0x0;
  local_40 = (int)param_2[1];
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_140e45006(param_1 + 10,&local_48);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e45006 FUN_140e45006 body=155 status=ok
// SIG undefined FUN_140e45006(void)

undefined8 * FUN_140e45006(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = 0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    plVar3 = param_1 + lVar4 * 2;
    if (plVar3 != param_2) {
      iVar1 = (int)param_2[1];
      _Src = (void *)*param_2;
      *(int *)(plVar3 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)plVar3 + 0xc) == 0) {
        *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(plVar3,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*plVar3,_Src,(longlong)iVar1 * 2);
        }
      }
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar5);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 140e450a2 FUN_140e450a2 body=1046 status=ok
// SIG undefined FUN_140e450a2(void)

void FUN_140e450a2(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xff000000;
  if (*DAT_14cb0ae98 != 0) {
    uVar2 = (**(code **)(*DAT_14cb0ae90 + 0x18))();
    uVar2 = uVar2 & 0xff000000;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"MAXQUALITYMODE");
  if (cVar1 != '\0') {
    uVar2 = 0xc000000;
  }
  if (uVar2 == 0xff000000) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0aeb0) {
    FUN_144b3d300(&DAT_14cb0aeb0);
    if (DAT_14cb0aeb0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0aea8 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MinResolution",1)
      ;
      _Init_thread_footer(&DAT_14cb0aeb0);
    }
  }
  FUN_140635eb8(DAT_14cb0aea8,0x10,uVar2,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0aec0) {
    FUN_144b3d300(&DAT_14cb0aec0);
    if (DAT_14cb0aec0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0aeb8 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.FadeResolution",1);
      _Init_thread_footer(&DAT_14cb0aec0);
    }
  }
  FUN_140635eb8(DAT_14cb0aeb8,1,uVar2,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0aed0) {
    FUN_144b3d300(&DAT_14cb0aed0);
    if (DAT_14cb0aed0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0aec8 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MinPreShadowResolution",1);
      _Init_thread_footer(&DAT_14cb0aed0);
    }
  }
  FUN_140635eb8(DAT_14cb0aec8,0x10,uVar2,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0aee0) {
    FUN_144b3d300(&DAT_14cb0aee0);
    if (DAT_14cb0aee0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0aed8 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.PreShadowFadeResolution",1);
      _Init_thread_footer(&DAT_14cb0aee0);
    }
  }
  FUN_140635eb8(DAT_14cb0aed8,1,uVar2,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0aef0) {
    FUN_144b3d300(&DAT_14cb0aef0);
    if (DAT_14cb0aef0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0aee8 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.TexelsPerPixel",1);
      _Init_thread_footer(&DAT_14cb0aef0);
    }
  }
  FUN_140635f48(DAT_14cb0aee8,0x40800000,uVar2,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0af00) {
    FUN_144b3d300(&DAT_14cb0af00);
    if (DAT_14cb0af00 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0aef8 =
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Shadow.PreShadowResolutionFactor",1);
      _Init_thread_footer(&DAT_14cb0af00);
    }
  }
  FUN_140635f48(DAT_14cb0aef8,0x3f800000,uVar2,0);
  return;
}



// FUNCTION 140e454c6 FUN_140e454c6 body=40 status=ok
// SIG undefined FUN_140e454c6(void)

undefined8 FUN_140e454c6(undefined8 param_1,int param_2)

{
  FUN_140e454ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e454ee FUN_140e454ee body=141 status=ok
// SIG undefined FUN_140e454ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e454ee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3d90a0;
  if (param_1[0x1a] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140e45566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140e4557c FUN_140e4557c body=81 status=ok
// SIG undefined FUN_140e4557c(void)

void FUN_140e4557c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_140e455cd(param_2[3],*(undefined4 *)(param_2 + 4));
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2[1] != 0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 140e455cd FUN_140e455cd body=41 status=ok
// SIG undefined FUN_140e455cd(void)

void FUN_140e455cd(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e4557c(param_1,*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 140e455f6 FUN_140e455f6 body=40 status=ok
// SIG undefined FUN_140e455f6(void)

undefined8 FUN_140e455f6(undefined8 param_1,int param_2)

{
  FUN_140e4561e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e4561e FUN_140e4561e body=449 status=ok
// SIG undefined FUN_140e4561e(void)

void FUN_140e4561e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b19b640;
  param_1[0x72] = &PTR_FUN_14b19bc80;
  param_1[0x73] = &PTR_FUN_14b19bcb8;
  param_1[0x74] = &PTR_FUN_14b19bcd0;
  param_1[0x87] = &PTR_FUN_14b19bcf0;
  param_1[0x88] = &PTR_FUN_14b19bd10;
  param_1[0x89] = &PTR_FUN_14b19bd30;
  param_1[0x8a] = &PTR_FUN_14b19bdd0;
  param_1[0x8b] = &PTR_FUN_14b19be00;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  FUN_140e45812(param_1 + 0xe7);
  plVar2 = (longlong *)param_1[0xe6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140e457df(param_1[0xe2],*(undefined4 *)(param_1 + 0xe3));
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  FUN_140e457df(param_1[0xd2],*(undefined4 *)(param_1 + 0xd3));
  if (param_1[0xd2] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7b38(param_1 + 0xb6);
  FUN_14028f4a8(param_1 + 0x9b);
  FUN_1404d595a(param_1 + 0x96,1);
  param_1[0x90] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x93) = 0;
  if (*(int *)((longlong)param_1 + 0x49c) != 0) {
    FUN_140115c12(param_1 + 0x92,0);
  }
  param_1[0x91] = 0;
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  param_1[0x8f] = 0;
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140e457df FUN_140e457df body=51 status=ok
// SIG undefined FUN_140e457df(void)

void FUN_140e457df(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


