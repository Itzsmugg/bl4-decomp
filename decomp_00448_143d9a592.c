// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d9a592 FUN_143d9a592 body=1207 status=ok
// SIG undefined FUN_143d9a592(void)

undefined8 * FUN_143d9a592(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
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
  undefined4 local_3c;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  if (param_2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_38;
      local_38 = FUN_1417de738;
      local_50 = (code *)&LAB_145893408;
      local_58 = (code *)&LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    lVar4 = *(longlong *)(param_2 + 0x10);
    iVar6 = *(int *)(lVar4 + 0x38);
    if ((iVar6 < *(int *)(DAT_14cae9568 + 0x38)) ||
       (lVar5 = param_2,
       *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
       DAT_14cae9568 + 0x30)) {
      lVar5 = 0;
    }
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_38;
      local_38 = FUN_141030f22;
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
      lVar4 = *(longlong *)(param_2 + 0x10);
      iVar6 = *(int *)(lVar4 + 0x38);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar6) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
         == DAT_14cac9ca8 + 0x30)) ||
       ((lVar5 != 0 && (param_2 = *(longlong *)(lVar5 + 0x30), param_2 != 0)))) {
      lVar4 = FUN_1447210f0(param_2);
      if (lVar4 != 0) {
        lVar4 = FUN_1400f6f32(lVar4);
        if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 != 0)) {
          FUN_1409845a0(lVar4,&local_3c,lVar5);
          if ((short)local_3c < 0) {
            if (DAT_14cb61cd0 == 0) {
              local_60 = &local_38;
              local_38 = FUN_141030f22;
              local_50 = FUN_14081d0ea;
              local_58 = (code *)&LAB_1463b31ae;
              local_68 = &LAB_1486dca4f;
              local_70 = &LAB_1464f50a6;
              local_78 = L"Game";
              local_80 = 0;
              local_88 = 0x10000004;
              local_90 = 8;
              local_98 = 0xd70;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
            }
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
               (lVar5 = param_2,
               *(longlong *)
                (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) {
              lVar5 = 0;
            }
            FUN_140d27df6(lVar4,&local_38,lVar5);
            local_3c = local_38._0_4_;
            if ((short)local_38 < 0) {
              if (DAT_14cb5b388 == 0) {
                local_38 = FUN_141864c34;
                local_50 = FUN_14081d0ea;
                local_58 = (code *)&LAB_146431698;
                local_68 = &LAB_1486775cb;
                local_70 = &LAB_1464cee35;
                local_78 = L"Game";
                local_80 = 0;
                local_88 = 0x10000005;
                local_90 = 0x10;
                local_98 = 0x3a20;
                local_60 = &local_38;
                FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
              }
              if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38))
                 || (lVar5 = param_2,
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) {
                lVar5 = 0;
              }
              FUN_140cf9daa(lVar4,&local_38,lVar5);
              local_3c = local_38._0_4_;
              if ((short)local_38 < 0) {
                lVar5 = FUN_140082f10();
                if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
                  param_2 = 0;
                }
                FUN_14042af24(lVar4,&local_38,param_2);
                local_3c = local_38._0_4_;
                if ((short)local_38 < 0) goto LAB_143d9a797;
              }
            }
          }
          lVar4 = FUN_140d71416(lVar4,&local_3c);
          if (lVar4 != 0) {
            uVar1 = *(undefined4 *)(lVar4 + 0x4d0);
            uVar2 = *(undefined4 *)(lVar4 + 0x4d4);
            uVar3 = *(undefined4 *)(lVar4 + 0x4d8);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar4 + 0x4cc);
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
            *(undefined4 *)(param_1 + 2) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
            *param_1 = 0;
            *(undefined1 *)(param_1 + 3) = 1;
            *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
          }
        }
      }
    }
  }
LAB_143d9a797:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9aa4a FUN_143d9aa4a body=267 status=ok
// SIG undefined FUN_143d9aa4a(void)

longlong FUN_143d9aa4a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  iVar5 = *(int *)(param_2 + 0x70);
  if (iVar5 < 1) {
    lVar4 = 0;
  }
  else {
    lVar7 = 0xc;
    lVar4 = 0;
    lVar6 = 0;
    do {
      if (lVar4 == 0) {
        iVar1 = *(int *)(*(longlong *)(param_2 + 0x68) + lVar7);
        if (((((iVar1 == 0) ||
              (uVar2 = *(uint *)(*(longlong *)(param_2 + 0x68) + -4 + lVar7), (int)uVar2 < 0)) ||
             (DAT_14c9647dc <= (int)uVar2)) ||
            ((plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0 || ((int)plVar8[2] != iVar1)))) ||
           (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
            (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || ((longlong *)*plVar8 == (longlong *)0x0))
            )))) {
          lVar4 = 0;
        }
        else {
          lVar4 = (**(code **)(*(longlong *)*plVar8 + 0x180))();
          iVar5 = *(int *)(param_2 + 0x70);
        }
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x40;
    } while (lVar6 < iVar5);
  }
  if (DAT_14cb0d2b0 != 0 && lVar4 == 0) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0) {
      lVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar4 = 0;
      do {
        if (lVar4 == 0) {
          pcVar3 = *(char **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar6);
          if (*pcVar3 == '\x01') {
            lVar4 = *(longlong *)(pcVar3 + 0x360);
          }
          else {
            lVar4 = 0;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar6);
    }
  }
  return lVar4;
}



// FUNCTION 143d9ab56 FUN_143d9ab56 body=5321 status=ok
// SIG undefined FUN_143d9ab56(void)

void FUN_143d9ab56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar17;
  double dVar18;
  double dVar19;
  double *pdVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  undefined4 uVar31;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  code *local_138;
  code *local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  double local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  ulonglong uVar16;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar12 = *(int *)(param_2[10] + 0xc);
  if (((((iVar12 == 0) || (uVar10 = *(uint *)(param_2[10] + 8), (int)uVar10 < 0)) ||
       (DAT_14c9647dc <= (int)uVar10)) ||
      ((plVar23 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar23 == (longlong *)0x0 || ((int)plVar23[2] != iVar12)))) ||
     (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 || (lVar15 = *plVar23, lVar15 == 0)))) {
LAB_143d9ac06:
    lVar15 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_140 = &local_98;
      local_98 = (undefined **)FUN_1417de738;
      local_130 = (code *)&LAB_145893408;
      local_138 = (code *)&LAB_1458cbbd2;
      local_148 = &LAB_147ba21f1;
      local_150 = &LAB_1463e9233;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x1000000c;
      local_170 = 8;
      local_178 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) goto LAB_143d9ac06;
  }
  iVar12 = *(int *)(param_2[10] + 0xc);
  if ((((iVar12 == 0) || (uVar10 = *(uint *)(param_2[10] + 8), (int)uVar10 < 0)) ||
      (DAT_14c9647dc <= (int)uVar10)) ||
     (((plVar23 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar23 == (longlong *)0x0 || ((int)plVar23[2] != iVar12)) ||
      (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 || (lVar27 = *plVar23, lVar27 == 0)))))) {
LAB_143d9b155:
    bVar29 = true;
    if ((lVar15 != 0) && (lVar27 = *(longlong *)(lVar15 + 0x30), lVar27 != 0)) goto LAB_143d9aca3;
    lVar27 = 0;
LAB_143d9af89:
    iVar12 = *(int *)(param_2[10] + 0xc);
    if (iVar12 == 0) {
LAB_143d9b14e:
      uVar24 = 0;
    }
    else {
      uVar10 = *(uint *)(param_2[10] + 8);
      uVar24 = 0;
      if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
        puVar25 = (undefined8 *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
        if ((puVar25 == (undefined8 *)0x0) ||
           ((*(int *)(puVar25 + 2) != iVar12 || ((*(uint *)(puVar25 + 1) >> 0x1c & 1) != 0))))
        goto LAB_143d9b14e;
        uVar24 = *puVar25;
      }
    }
    FUN_140eae114(&local_98,uVar24);
    if (((((uint)local_98 == 0) && (local_98._4_4_ == 0)) && ((int)uStack_90 == 0)) &&
       (uStack_90._4_4_ == 0)) {
      if (uStack_80._4_4_ == 0 && (int)uStack_80 == 0) {
        if (bVar29) goto LAB_143d9b027;
        goto LAB_143d9b06a;
      }
    }
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_140 = &local_98;
      local_98 = (undefined **)FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = FUN_14081d0ea;
      local_148 = &LAB_1478c0a72;
      local_150 = &LAB_1417b2375;
      local_158 = L"Engine";
      local_160 = 0x1000000000;
      local_168 = 0x10000004;
      local_170 = 8;
      local_178 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_143d9b155;
LAB_143d9aca3:
    lVar13 = FUN_1447210f0(lVar27);
    if (((lVar13 == 0) || (lVar14 = FUN_1400f6f32(lVar13), lVar14 == 0)) ||
       (lVar14 = *(longlong *)(lVar14 + 0x68), lVar14 == 0)) {
      bVar29 = false;
      goto LAB_143d9af89;
    }
    FUN_1409845a0(lVar14,&local_bc,lVar15);
    if ((short)(ushort)local_bc < 0) {
      if (DAT_14cb61cd0 == 0) {
        local_140 = &local_98;
        local_98 = (undefined **)FUN_141030f22;
        local_130 = FUN_14081d0ea;
        local_138 = (code *)&LAB_1463b31ae;
        local_148 = &LAB_1486dca4f;
        local_150 = &LAB_1464f50a6;
        local_158 = L"Game";
        local_160 = 0;
        local_168 = 0x10000004;
        local_170 = 8;
        local_178 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (lVar15 = lVar27,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) {
        lVar15 = 0;
      }
      FUN_140d27df6(lVar14,&local_98,lVar15);
      local_bc = (uint)local_98;
      if (-1 < (short)local_98) goto LAB_143d9aded;
      if (DAT_14cb5b388 == 0) {
        local_98 = (undefined **)FUN_141864c34;
        local_130 = FUN_14081d0ea;
        local_138 = (code *)&LAB_146431698;
        local_148 = &LAB_1486775cb;
        local_150 = &LAB_1464cee35;
        local_158 = L"Game";
        local_160 = 0;
        local_168 = 0x10000005;
        local_170 = 0x10;
        local_178 = 0x3a20;
        local_140 = &local_98;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
         (lVar15 = lVar27,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) {
        lVar15 = 0;
      }
      FUN_140cf9daa(lVar14,&local_98,lVar15);
      local_bc = (uint)local_98;
      if (-1 < (short)local_98) goto LAB_143d9aded;
      lVar15 = FUN_140082f10();
      if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
         (lVar28 = lVar27,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) {
        lVar28 = 0;
      }
      FUN_14042af24(lVar14,&local_98,lVar28);
      local_bc = (uint)local_98;
      if (-1 < (short)local_98) goto LAB_143d9aded;
      iVar12 = *(int *)(param_2[10] + 0xc);
      if (iVar12 == 0) {
LAB_143d9b7a9:
        uVar24 = 0;
      }
      else {
        uVar10 = *(uint *)(param_2[10] + 8);
        uVar24 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          puVar25 = (undefined8 *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((puVar25 == (undefined8 *)0x0) ||
             ((*(int *)(puVar25 + 2) != iVar12 || ((*(uint *)(puVar25 + 1) >> 0x1c & 1) != 0))))
          goto LAB_143d9b7a9;
          uVar24 = *puVar25;
        }
      }
      FUN_140eae114(&local_98,uVar24);
      if (((((uint)local_98 != 0) || (local_98._4_4_ != 0)) || ((int)uStack_90 != 0)) ||
         (uStack_90._4_4_ != 0)) goto LAB_143d9b023;
      if (uStack_80._4_4_ != 0 || (int)uStack_80 != 0) goto LAB_143d9b023;
LAB_143d9b06a:
      if (DAT_14cb5b388 == 0) {
        local_140 = &local_98;
        local_98 = (undefined **)FUN_141864c34;
        local_130 = FUN_14081d0ea;
        local_138 = (code *)&LAB_146431698;
        local_148 = &LAB_1486775cb;
        local_150 = &LAB_1464cee35;
        local_158 = L"Game";
        local_160 = 0;
        local_168 = 0x10000005;
        local_170 = 0x10;
        local_178 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      lVar15 = DAT_14cb81c88;
      if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar27 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
        lVar13 = (longlong)DAT_14cb81c90;
        if (lVar13 != 0) {
          lVar14 = 0;
          do {
            plVar23 = *(longlong **)(lVar15 + lVar14);
            if (plVar23 != (longlong *)0x0) {
              (**(code **)(*plVar23 + 0x2a0))(plVar23,param_2,lVar27);
            }
            lVar14 = lVar14 + 8;
          } while (lVar13 * 8 != lVar14);
        }
        plVar23 = *(longlong **)(lVar27 + 0x13f8);
        if (plVar23 != (longlong *)0x0) {
          if (*(uint *)(param_2[10] + 0x28) < 2) {
            (**(code **)(*plVar23 + 0x70))(plVar23,&local_b8);
            FUN_1400021e4(&local_b8,&local_98);
            lVar15 = param_2[10];
            if ((undefined8 *)(lVar15 + 0x20) == &local_98 || 1 < *(uint *)(lVar15 + 0x28)) {
              if (local_98 != (undefined **)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar15 + 0x20) != 0) {
                FUN_1400020a8();
              }
              *(undefined ***)(lVar15 + 0x20) = local_98;
              local_98 = (undefined **)0x0;
              *(int *)(lVar15 + 0x28) = (int)uStack_90;
              *(int *)(lVar15 + 0x2c) = uStack_90._4_4_;
            }
          }
          puVar26 = &DAT_14c9485f0;
          if ((undefined4 *)plVar23[1] != (undefined4 *)0x0) {
            puVar26 = (undefined4 *)plVar23[1];
          }
          if (DAT_14c947fe0 == 0) {
            lVar15 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar15);
            DAT_14c947fe0 = lVar15;
          }
          FUN_140045924(DAT_14c947fe0,&local_98,puVar26,1);
          FUN_140fb38a2(param_2,&DAT_14c9a3120,&local_98);
        }
        lVar15 = param_2[10];
        if (*(uint *)(lVar15 + 0x28) < 2) {
          FUN_140056680(&local_98,&DAT_14b410344);
          lVar15 = param_2[10];
          if ((undefined8 *)(lVar15 + 0x20) == &local_98 || 1 < *(uint *)(lVar15 + 0x28)) {
            if (local_98 != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar15 + 0x20) != 0) {
              FUN_1400020a8();
            }
            *(undefined ***)(lVar15 + 0x20) = local_98;
            local_98 = (undefined **)0x0;
            *(int *)(lVar15 + 0x28) = (int)uStack_90;
            *(int *)(lVar15 + 0x2c) = uStack_90._4_4_;
          }
          lVar15 = param_2[10];
        }
        if (*(uint *)(lVar15 + 0x18) < 2) {
          local_b8 = *(double *)(lVar27 + 0x18);
          FUN_1400021e4(&local_b8,&local_98);
          lVar15 = param_2[10];
          if ((undefined8 *)(lVar15 + 0x10) == &local_98 || 1 < *(uint *)(lVar15 + 0x18)) {
            if (local_98 != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar15 + 0x10) != 0) {
              FUN_1400020a8();
            }
            *(undefined ***)(lVar15 + 0x10) = local_98;
            *(int *)(lVar15 + 0x18) = (int)uStack_90;
            *(int *)(lVar15 + 0x1c) = uStack_90._4_4_;
          }
        }
        local_98 = *(undefined ***)(*(longlong *)(lVar27 + 0x10) + 0x18);
        FUN_140fb38a2(param_2,&DAT_14c9a3120);
        lVar15 = *(longlong *)(lVar27 + 0x1c8);
        if (lVar15 == 0) {
          local_88 = DAT_14c8464f0;
          local_98 = (undefined **)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_90 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_98 = *(undefined ***)(lVar15 + 0x260);
          uStack_90 = *(double *)(lVar15 + 0x268);
          local_88 = *(double *)(lVar15 + 0x270);
        }
        plVar23 = param_2;
        dVar18 = (double)FUN_1459c4286(param_2,&local_98);
        uVar11 = SUB84(plVar23,0);
        if ('\x03' < DAT_14cb71de8) {
          lVar15 = *(longlong *)(lVar27 + 0x1c8);
          if (lVar15 == 0) {
            local_a8 = DAT_14c846508;
            uVar11 = (undefined4)DAT_14c8464f8;
            uVar31 = DAT_14c8464f8._4_4_;
            uStack_b0 = (undefined4)DAT_14c846500;
            uStack_ac = DAT_14c846500._4_4_;
          }
          else {
            ppuVar7 = *(undefined ***)(lVar15 + 0x240);
            dVar8 = *(double *)(lVar15 + 0x248);
            dVar9 = *(double *)(lVar15 + 0x250);
            dVar19 = *(double *)(lVar15 + 600);
            pdVar20 = *(double **)(lVar15 + 0x228);
            local_98 = ppuVar7;
            uStack_90 = dVar8;
            local_88 = dVar9;
            uStack_80 = dVar19;
            if (pdVar20 == (double *)0x0) {
              uVar11 = 0x40;
              pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
              dVar18 = DAT_14c8463d8;
              *pdVar20 = DAT_14c8463d0;
              pdVar20[1] = dVar18;
              dVar18 = DAT_14c8463e8;
              pdVar20[2] = DAT_14c8463e0;
              pdVar20[3] = dVar18;
              dVar18 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
              pdVar20[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
              pdVar20[5] = dVar18;
              dVar18 = DAT_14c846508;
              pdVar20[6] = DAT_14c846508;
              *(double **)(lVar15 + 0x228) = pdVar20;
            }
            auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar20[1]);
            auVar4._0_8_ = -(ulonglong)((double)ppuVar7 != *pdVar20);
            auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar20[1]) >> 0x20);
            iVar12 = movmskpd(SUB84(dVar18,0),auVar4);
            auVar6._8_4_ = (int)-(ulonglong)(dVar19 != pdVar20[3]);
            auVar6._0_8_ = -(ulonglong)(dVar9 != pdVar20[2]);
            auVar6._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar20[3]) >> 0x20);
            uVar10 = movmskpd(uVar11,auVar6);
            if ((uVar10 & 0x3fffffff) != 0 || iVar12 != 0) {
              *(undefined4 *)(pdVar20 + 2) = (undefined4)local_88;
              *(undefined4 *)((longlong)pdVar20 + 0x14) = local_88._4_4_;
              *(int *)(pdVar20 + 3) = (int)uStack_80;
              *(int *)((longlong)pdVar20 + 0x1c) = uStack_80._4_4_;
              *(uint *)pdVar20 = (uint)local_98;
              *(int *)((longlong)pdVar20 + 4) = local_98._4_4_;
              *(int *)(pdVar20 + 1) = (int)uStack_90;
              *(int *)((longlong)pdVar20 + 0xc) = uStack_90._4_4_;
              FUN_1448052ee(&local_98,&local_b8);
              pdVar20[6] = local_a8;
              pdVar20[4] = local_b8;
              pdVar20[5] = (double)CONCAT44(uStack_ac,uStack_b0);
            }
            local_a8 = pdVar20[6];
            uVar11 = *(undefined4 *)(pdVar20 + 4);
            uVar31 = *(undefined4 *)((longlong)pdVar20 + 0x24);
            uStack_b0 = *(undefined4 *)(pdVar20 + 5);
            uStack_ac = *(undefined4 *)((longlong)pdVar20 + 0x2c);
          }
          local_b8 = (double)CONCAT44(uVar31,uVar11);
          FUN_1488c22c4(param_2,&local_b8);
        }
      }
      goto LAB_143d9b027;
    }
LAB_143d9aded:
    plVar23 = (longlong *)FUN_140d71416(lVar14,&local_bc);
    lVar15 = DAT_14cb81c88;
    if (plVar23 == (longlong *)0x0) goto LAB_143d9b027;
    uVar10 = (uint)(short)(ushort)local_bc;
    uVar16 = (ulonglong)uVar10;
    if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar14 + 0x10))) {
      lVar27 = *(longlong *)(*(longlong *)(lVar14 + 8) + (longlong)(int)uVar10 * 8);
      if ((lVar27 != 0) && (*(uint *)(lVar27 + 8) == local_bc >> 0x10)) {
        if (-1 < *(short *)(lVar27 + 4)) {
          do {
            lVar27 = *(longlong *)(*(longlong *)(lVar14 + 8) + (longlong)*(short *)(lVar27 + 2) * 8)
            ;
          } while (-1 < *(short *)(lVar27 + 4));
          if (lVar27 == 0) goto LAB_143d9b023;
        }
        plVar17 = *(longlong **)(lVar27 + 0x40);
        if (plVar17 != (longlong *)0x0) {
          iVar12 = *(int *)((longlong)plVar23 + 0x4cc);
          iVar22 = (int)plVar23[0x9a];
          iVar1 = *(int *)((longlong)plVar23 + 0x4d4);
          iVar2 = (int)plVar23[0x9b];
          if (((iVar22 != 0 || iVar12 != 0) || iVar1 != 0) || iVar2 != 0) {
            local_118 = (double)plVar23[0x81];
            lVar27 = (longlong)DAT_14cb81c90;
            local_124 = iVar2;
            local_120 = iVar1;
            local_11c = iVar22;
            if (lVar27 != 0) {
              lVar28 = 0;
              local_128 = iVar12;
              local_110 = plVar17;
              do {
                plVar17 = *(longlong **)(lVar15 + lVar28);
                if (plVar17 != (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x2a8))(plVar17,param_2,lVar14,&local_bc);
                }
                lVar28 = lVar28 + 8;
              } while (lVar27 * 8 != lVar28);
              uVar16 = (ulonglong)(ushort)local_bc;
              plVar17 = local_110;
              iVar12 = local_128;
            }
            if (((short)uVar16 < 0) || (*(int *)(lVar14 + 0x10) <= (int)(uVar16 & 0xffff))) {
LAB_143d9b224:
              local_c8 = 0;
            }
            else {
              lVar15 = *(longlong *)(*(longlong *)(lVar14 + 8) + (uVar16 & 0xffff) * 8);
              if ((lVar15 == 0) || (*(uint *)(lVar15 + 8) != local_bc >> 0x10)) goto LAB_143d9b224;
              if (-1 < *(short *)(lVar15 + 4)) {
                do {
                  lVar15 = *(longlong *)
                            (*(longlong *)(lVar14 + 8) + (longlong)*(short *)(lVar15 + 2) * 8);
                } while (-1 < *(short *)(lVar15 + 4));
                if (lVar15 == 0) goto LAB_143d9b224;
              }
              local_c8 = *(undefined8 *)(lVar15 + 0x110);
            }
            if (*(uint *)(param_2[10] + 0x28) < 2) {
              (**(code **)(*plVar17 + 0x70))(plVar17,&local_b8);
              FUN_1400021e4(&local_b8,&local_98);
              lVar15 = param_2[10];
              if ((undefined8 *)(lVar15 + 0x20) == &local_98 || 1 < *(uint *)(lVar15 + 0x28)) {
                if (local_98 != (undefined **)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*(longlong *)(lVar15 + 0x20) != 0) {
                  FUN_1400020a8();
                }
                *(undefined ***)(lVar15 + 0x20) = local_98;
                local_98 = (undefined **)0x0;
                *(int *)(lVar15 + 0x28) = (int)uStack_90;
                *(int *)(lVar15 + 0x2c) = uStack_90._4_4_;
              }
            }
            puVar26 = &DAT_14c9485f0;
            if ((undefined4 *)plVar17[1] != (undefined4 *)0x0) {
              puVar26 = (undefined4 *)plVar17[1];
            }
            if (DAT_14c947fe0 == 0) {
              lVar15 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar15);
              DAT_14c947fe0 = lVar15;
            }
            FUN_140045924(DAT_14c947fe0,&local_98,puVar26,1);
            FUN_140fb38a2(param_2,&DAT_14c9a3120,&local_98);
            local_98 = (undefined **)DAT_14cb81c28;
            if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
              uVar10 = (uint)((ulonglong)DAT_14cb81c28 >> 0x10);
              uVar21 = (uint)DAT_14cb81c28 & 0xffff;
              plVar17 = param_2 + 7;
              if ((longlong *)param_2[8] != (longlong *)0x0) {
                plVar17 = (longlong *)param_2[8];
              }
              iVar22 = *(int *)((longlong)plVar17 +
                               (ulonglong)
                               ((int)param_2[9] - 1U &
                               (int)((ulonglong)DAT_14cb81c28 >> 0x20) +
                               ((uint)DAT_14cb81c28 << 0x10 | uVar21) +
                               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar21 >> 4)) * 4);
              if (iVar22 != -1) {
                do {
                  if (*(longlong *)(*param_2 + (longlong)iVar22 * 0x10) == DAT_14cb81c28)
                  goto LAB_143d9b419;
                  iVar22 = *(int *)((longlong)iVar22 * 0x10 + *param_2 + 8);
                } while (iVar22 != -1);
              }
            }
            FUN_144a13f80(param_2,&local_b8,&local_98,0);
            lVar15 = param_2[10];
            plVar17 = (longlong *)(lVar15 + 0x30);
            uVar10 = *(uint *)(lVar15 + 0x3c);
            if ((int)uVar10 < 1) {
              FUN_140d7698c(plVar17,1);
              uVar10 = *(uint *)(lVar15 + 0x3c);
            }
            iVar22 = *(int *)(lVar15 + 0x38);
            *(uint *)(lVar15 + 0x38) = iVar22 + 1U;
            if (uVar10 < iVar22 + 1U) {
              FUN_140eed74c(plVar17,iVar22);
            }
            lVar15 = *plVar17;
            lVar27 = (longlong)iVar22 * 0x30;
            *(int *)(lVar15 + lVar27) = iVar12;
            *(int *)(lVar15 + 4 + lVar27) = local_11c;
            *(int *)(lVar15 + 8 + lVar27) = local_120;
            *(int *)(lVar15 + 0xc + lVar27) = local_124;
            *(undefined1 *)(lVar15 + 0x20 + lVar27) = 6;
            *(undefined ***)(lVar15 + 0x28 + lVar27) = local_98;
LAB_143d9b419:
            local_e8 = 0;
            uStack_e0 = 0;
            local_d8 = 0;
            (**(code **)(*plVar23 + 0x778))(plVar23);
            local_98 = (undefined **)DAT_14c9a3130;
            if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
              uVar10 = (uint)((ulonglong)DAT_14c9a3130 >> 0x10);
              uVar21 = (uint)DAT_14c9a3130 & 0xffff;
              plVar17 = param_2 + 7;
              if ((longlong *)param_2[8] != (longlong *)0x0) {
                plVar17 = (longlong *)param_2[8];
              }
              iVar12 = *(int *)((longlong)plVar17 +
                               (ulonglong)
                               ((int)param_2[9] - 1U &
                               (int)((ulonglong)DAT_14c9a3130 >> 0x20) +
                               ((uint)DAT_14c9a3130 << 0x10 | uVar21) +
                               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar21 >> 4)) * 4);
              if (iVar12 != -1) {
                do {
                  if (*(longlong *)(*param_2 + (longlong)iVar12 * 0x10) == DAT_14c9a3130)
                  goto LAB_143d9b4d7;
                  iVar12 = *(int *)((longlong)iVar12 * 0x10 + *param_2 + 8);
                } while (iVar12 != -1);
              }
            }
            FUN_144a13f80(param_2,&local_b8,&local_98,0);
            FUN_14142e05b(param_2[10] + 0x30,&local_98,&local_e8);
LAB_143d9b4d7:
            fVar30 = *(float *)(plVar23 + 0x7b);
            if (fVar30 <= 0.0) {
              fVar30 = (float)*(byte *)(plVar23 + 0x73) * 4.0;
            }
            local_98 = (undefined **)CONCAT44(local_98._4_4_,fVar30);
            FUN_140eed314(param_2,&DAT_14cb81c78);
            if (*(longlong *)(lVar13 + 0x178) == 0) {
LAB_143d9b564:
              lVar13 = 0;
            }
            else {
              lVar27 = FUN_14041aabe();
              lVar15 = *(longlong *)(lVar13 + 0x178);
              if (lVar15 == 0) goto LAB_143d9b564;
              lVar13 = 0;
              if ((lVar27 != 0) && (lVar28 = *(longlong *)(lVar15 + 0x10), lVar28 != 0)) {
                if (*(int *)(lVar28 + 0x38) < *(int *)(lVar27 + 0x38)) goto LAB_143d9b564;
                lVar13 = 0;
                if (*(longlong *)
                     (*(longlong *)(lVar28 + 0x30) + (longlong)*(int *)(lVar27 + 0x38) * 8) ==
                    lVar27 + 0x30) {
                  lVar13 = lVar15;
                }
              }
            }
            plVar17 = (longlong *)FUN_140bccd38(lVar14,&local_bc);
            if (plVar17 == (longlong *)0x0) {
              uVar11 = 0xffffffff;
            }
            else {
              uVar11 = (**(code **)(*plVar17 + 0x328))(plVar17);
            }
            local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar11);
            FUN_140eed466(param_2,&DAT_14cb81c58);
            if (lVar13 == 0) {
              bVar29 = false;
            }
            else {
              bVar29 = plVar23 == *(longlong **)(lVar13 + 0x488);
            }
            local_98 = (undefined **)DAT_14cb81c68;
            if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
              uVar10 = (uint)((ulonglong)DAT_14cb81c68 >> 0x10);
              uVar21 = (uint)DAT_14cb81c68 & 0xffff;
              plVar17 = param_2 + 7;
              if ((longlong *)param_2[8] != (longlong *)0x0) {
                plVar17 = (longlong *)param_2[8];
              }
              iVar12 = *(int *)((longlong)plVar17 +
                               (ulonglong)
                               ((int)param_2[9] - 1U &
                               (int)((ulonglong)DAT_14cb81c68 >> 0x20) +
                               ((uint)DAT_14cb81c68 << 0x10 | uVar21) +
                               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar21 >> 4)) * 4);
              if (iVar12 != -1) {
                do {
                  if (*(longlong *)(*param_2 + (longlong)iVar12 * 0x10) == DAT_14cb81c68)
                  goto LAB_143d9b6a2;
                  iVar12 = *(int *)((longlong)iVar12 * 0x10 + *param_2 + 8);
                } while (iVar12 != -1);
              }
            }
            FUN_144a13f80(param_2,&local_b8,&local_98,0);
            lVar15 = param_2[10];
            plVar17 = (longlong *)(lVar15 + 0x30);
            uVar10 = *(uint *)(lVar15 + 0x3c);
            if ((int)uVar10 < 1) {
              FUN_140d7698c(plVar17,1);
              uVar10 = *(uint *)(lVar15 + 0x3c);
            }
            iVar12 = *(int *)(lVar15 + 0x38);
            *(uint *)(lVar15 + 0x38) = iVar12 + 1U;
            if (uVar10 < iVar12 + 1U) {
              FUN_140eed74c(plVar17,iVar12);
            }
            lVar15 = *plVar17;
            lVar27 = (longlong)iVar12 * 0x30;
            *(bool *)(lVar15 + lVar27) = bVar29;
            *(undefined1 *)(lVar15 + 0x20 + lVar27) = 1;
            *(undefined ***)(lVar15 + 0x28 + lVar27) = local_98;
LAB_143d9b6a2:
            FUN_14151aed0(lVar14,&local_98,&local_bc);
            FUN_141892932(param_2,&DAT_14cb81c38,&local_98);
            local_98 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(ulonglong)uStack_80 & 0xff])();
            FUN_1413d9c32(lVar14,&local_98,&local_bc,&local_c8);
            FUN_141892932(param_2,&DAT_14cb81c48,&local_98);
            local_98 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(ulonglong)uStack_80 & 0xff])();
            if ('\x03' < DAT_14cb71de8) {
              local_108 = 0;
              uStack_100 = 0;
              local_f8 = 0.0;
              plVar17 = (longlong *)FUN_1401b2ade();
              uVar11 = SUB84(plVar23,0);
              if (plVar17 == (longlong *)0x0) {
                if (local_118 != 0.0) {
                  lVar15 = *(longlong *)((longlong)local_118 + 0x1c8);
                  if (lVar15 == 0) {
                    local_a8 = DAT_14c846508;
                    uVar11 = (undefined4)DAT_14c8464f8;
                    uVar31 = DAT_14c8464f8._4_4_;
                    uStack_b0 = (undefined4)DAT_14c846500;
                    uStack_ac = DAT_14c846500._4_4_;
                  }
                  else {
                    ppuVar7 = *(undefined ***)(lVar15 + 0x240);
                    dVar18 = *(double *)(lVar15 + 0x248);
                    dVar8 = *(double *)(lVar15 + 0x250);
                    dVar9 = *(double *)(lVar15 + 600);
                    pdVar20 = *(double **)(lVar15 + 0x228);
                    dVar19 = local_118;
                    local_98 = ppuVar7;
                    uStack_90 = dVar18;
                    local_88 = dVar8;
                    uStack_80 = dVar9;
                    if (pdVar20 == (double *)0x0) {
                      uVar11 = 0x40;
                      pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
                      dVar19 = DAT_14c8463d8;
                      *pdVar20 = DAT_14c8463d0;
                      pdVar20[1] = dVar19;
                      dVar19 = DAT_14c8463e8;
                      pdVar20[2] = DAT_14c8463e0;
                      pdVar20[3] = dVar19;
                      dVar19 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
                      pdVar20[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
                      pdVar20[5] = dVar19;
                      dVar19 = DAT_14c846508;
                      pdVar20[6] = DAT_14c846508;
                      *(double **)(lVar15 + 0x228) = pdVar20;
                    }
                    auVar3._8_4_ = (int)-(ulonglong)(dVar18 != pdVar20[1]);
                    auVar3._0_8_ = -(ulonglong)((double)ppuVar7 != *pdVar20);
                    auVar3._12_4_ = (int)(-(ulonglong)(dVar18 != pdVar20[1]) >> 0x20);
                    iVar12 = movmskpd(SUB84(dVar19,0),auVar3);
                    auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar20[3]);
                    auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar20[2]);
                    auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar20[3]) >> 0x20);
                    uVar10 = movmskpd(uVar11,auVar5);
                    if ((uVar10 & 0x3fffffff) != 0 || iVar12 != 0) {
                      *(undefined4 *)(pdVar20 + 2) = (undefined4)local_88;
                      *(undefined4 *)((longlong)pdVar20 + 0x14) = local_88._4_4_;
                      *(int *)(pdVar20 + 3) = (int)uStack_80;
                      *(int *)((longlong)pdVar20 + 0x1c) = uStack_80._4_4_;
                      *(uint *)pdVar20 = (uint)local_98;
                      *(int *)((longlong)pdVar20 + 4) = local_98._4_4_;
                      *(int *)(pdVar20 + 1) = (int)uStack_90;
                      *(int *)((longlong)pdVar20 + 0xc) = uStack_90._4_4_;
                      FUN_1448052ee(&local_98,&local_b8);
                      pdVar20[6] = local_a8;
                      pdVar20[4] = local_b8;
                      pdVar20[5] = (double)CONCAT44(uStack_ac,uStack_b0);
                    }
                    local_a8 = pdVar20[6];
                    uVar11 = *(undefined4 *)(pdVar20 + 4);
                    uVar31 = *(undefined4 *)((longlong)pdVar20 + 0x24);
                    uStack_b0 = *(undefined4 *)(pdVar20 + 5);
                    uStack_ac = *(undefined4 *)((longlong)pdVar20 + 0x2c);
                  }
                  local_b8 = (double)CONCAT44(uVar31,uVar11);
                  local_f8 = local_a8;
                  local_108 = CONCAT44(uVar31,uVar11);
                  uStack_100 = CONCAT44(uStack_ac,uStack_b0);
                }
              }
              else {
                (**(code **)(*plVar17 + 0x718))(plVar17,&local_e8,&local_108);
              }
              FUN_1488c21e4(param_2,&local_108);
            }
            goto LAB_143d9b027;
          }
        }
      }
    }
  }
LAB_143d9b023:
  *(undefined1 *)(param_2 + 0xc) = 1;
LAB_143d9b027:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9c020 FUN_143d9c020 body=89 status=ok
// SIG undefined FUN_143d9c020(void)

void FUN_143d9c020(longlong param_1,undefined8 *param_2,ushort *param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar2 + 4)) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar2 + 2) * 8);
        } while (-1 < *(short *)(lVar2 + 4));
        if (lVar2 == 0) goto LAB_143d9c075;
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x110);
      goto LAB_143d9c05c;
    }
  }
LAB_143d9c075:
  uVar3 = 0;
LAB_143d9c05c:
  *param_2 = uVar3;
  return;
}



// FUNCTION 143d9c092 FUN_143d9c092 body=168 status=ok
// SIG undefined FUN_143d9c092(void)

undefined2 * FUN_143d9c092(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined2 *_Dst;
  undefined8 *puVar3;
  
  _Dst = (undefined2 *)FUN_1456ffc68(&DAT_14cb81d50);
  memset(_Dst,0,0x120);
  FUN_1488c23a4(_Dst);
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  *(int *)(_Dst + 4) = iVar2;
  iVar2 = param_1[8];
  if ((longlong)iVar2 < 1) {
    _Dst[1] = (short)param_1[4];
    iVar2 = param_1[4];
    param_1[4] = iVar2 + 1U;
    if ((uint)param_1[5] < iVar2 + 1U) {
      FUN_14655391c(param_1 + 2,iVar2);
    }
    puVar3 = (undefined8 *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 2));
  }
  else {
    sVar1 = *(short *)(*(longlong *)(param_1 + 6) + -2 + (longlong)iVar2 * 2);
    param_1[8] = iVar2 + -1;
    _Dst[1] = sVar1;
    puVar3 = (undefined8 *)((longlong)sVar1 * 8 + *(longlong *)(param_1 + 2));
  }
  *puVar3 = _Dst;
  *_Dst = _Dst[1];
  return _Dst;
}



// FUNCTION 143d9c13a FUN_143d9c13a body=3999 status=ok
// SIG undefined FUN_143d9c13a(void)

undefined2 * FUN_143d9c13a(longlong param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined2 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_328 [32];
  undefined2 *local_308;
  undefined2 *local_300;
  longlong *local_2f8;
  longlong local_2f0;
  undefined2 *local_2e8;
  longlong *local_2e0;
  undefined ***local_2d8;
  undefined1 local_2cc [4];
  longlong local_2c8;
  undefined **local_2c0;
  uint local_2b8;
  undefined4 uStack_2b4;
  byte local_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 uStack_274;
  undefined8 local_268;
  undefined8 local_258;
  undefined4 local_250;
  undefined2 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined5 local_190;
  undefined3 uStack_18b;
  undefined5 uStack_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  puVar14 = param_3;
  if (*(uint *)(param_2 + 4) < *(uint *)(param_3 + 4)) {
    puVar14 = param_2;
  }
  local_180 = 0xffffffff;
  local_17c = 0xffff;
  local_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0xffffffff;
  local_148 = 0;
  local_138 = 0;
  local_15c = 0;
  uStack_154 = 0;
  local_130 = 0xffffffff;
  local_12c = 0x101;
  local_100 = 0;
  local_f8 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_cc = 0;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  FUN_145c76878();
  local_308 = param_2;
  if (*(uint *)(param_2 + 4) < *(uint *)(param_3 + 4)) {
    local_308 = param_3;
  }
  local_2a0 = 0xffffffff;
  local_29c = 0xffff;
  local_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0xffffffff;
  local_268 = 0;
  local_258 = 0;
  local_27c = 0;
  uStack_274 = 0;
  local_250 = 0xffffffff;
  local_24c = 0x101;
  local_220 = 0;
  local_218 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  local_214 = 0xffffffff00000080;
  local_20c = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0xffffffff;
  local_1ec = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1b4 = 0xffffffff00000080;
  local_1ac = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  uStack_18b = 0;
  uStack_188 = 0;
  FUN_145c76878(local_308);
  iVar6 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar6 + 1U) {
    FUN_1405b572a(param_1 + 0x28,iVar6);
  }
  puVar23 = local_308;
  *(undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 2) = *local_308;
  FUN_141324136(param_1);
  uVar1 = puVar14[1];
  puVar23[2] = uVar1;
  puVar23[1] = uVar1;
  *(undefined4 *)(puVar23 + 0x8c) = 0;
  uVar3 = 1;
  uVar8 = 1;
  if (*(char *)(puVar14 + 0x2a) == '\0') {
    uVar8 = *(undefined1 *)(puVar23 + 0x2a);
  }
  *(undefined1 *)(puVar14 + 0x2a) = uVar8;
  if (*(char *)((longlong)puVar14 + 0x55) == '\0') {
    uVar3 = *(undefined1 *)((longlong)puVar23 + 0x55);
  }
  *(undefined1 *)((longlong)puVar14 + 0x55) = uVar3;
  puVar23[0x2a] = 0x101;
  if (*(longlong *)(puVar23 + 8) != 0) {
    if (*(longlong *)(puVar14 + 8) != 0) {
      *(undefined8 *)(puVar14 + 8) = 0;
      FUN_1400020a8();
      puVar23 = local_308;
    }
    if (puVar14 != puVar23) {
      lVar20 = *(longlong *)(puVar14 + 8);
      *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar23 + 8);
      *(undefined8 *)(puVar23 + 8) = 0;
      if (lVar20 != 0) {
        FUN_1400020a8();
        puVar23 = local_308;
      }
    }
  }
  lVar20 = DAT_14c9647c8;
  if ((((((*(int *)(puVar23 + 0xe) != 0) && (uVar24 = *(uint *)(puVar23 + 0xc), -1 < (int)uVar24))
        && ((int)uVar24 < DAT_14c9647dc)) &&
       ((plVar17 = (longlong *)
                   ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
        plVar17 != (longlong *)0x0 && ((int)plVar17[2] == *(int *)(puVar23 + 0xe))))) &&
      ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)) {
    if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
      uVar24 = *(uint *)(*plVar17 + 0xc);
      *(uint *)(puVar14 + 0xc) = uVar24;
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(lVar20 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      iVar6 = *(int *)(lVar20 + 0x10);
      if (*(int *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
          puVar23 = local_308;
        }
        LOCK();
        iVar6 = *(int *)(lVar20 + 0x10);
        bVar26 = iVar6 == 0;
        if (bVar26) {
          *(int *)(lVar20 + 0x10) = iVar19;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar6 = iVar19;
        }
      }
    }
    else {
      *(undefined4 *)(puVar14 + 0xc) = 0;
      iVar6 = 0;
    }
    *(int *)(puVar14 + 0xe) = iVar6;
    *(undefined8 *)(puVar23 + 0xc) = 0;
  }
  lVar20 = DAT_14c9647c8;
  if (*(int *)(puVar23 + 0x14) != 0) {
    uVar24 = *(uint *)(puVar23 + 0x12);
    if (((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) &&
       ((plVar17 = (longlong *)
                   ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
        plVar17 != (longlong *)0x0 &&
        ((((int)plVar17[2] == *(int *)(puVar23 + 0x14) &&
          ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)))))) {
      puVar7 = (uint *)(puVar14 + 0x12);
      if (*(int *)(puVar14 + 0x14) == 0) {
LAB_143d9cefb:
        lVar18 = 0;
      }
      else {
        uVar24 = *puVar7;
        lVar18 = 0;
        if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
          plVar17 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
          if ((plVar17 == (longlong *)0x0) ||
             (((int)plVar17[2] != *(int *)(puVar14 + 0x14) ||
              ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d9cefb;
          lVar18 = *plVar17;
        }
      }
      puVar16 = (uint *)(puVar23 + 0x12);
      if (lVar18 != 0) {
        puVar16 = puVar7;
      }
      if ((((puVar16[1] == 0) || (uVar24 = *puVar16, (int)uVar24 < 0)) ||
          (DAT_14c9647dc <= (int)uVar24)) ||
         (((plVar17 = (longlong *)
                      ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
           plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != puVar16[1])) ||
          (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 || (*plVar17 == 0)))))) {
        *puVar7 = 0;
        iVar6 = 0;
      }
      else {
        uVar24 = *(uint *)(*plVar17 + 0xc);
        *puVar7 = uVar24;
        if ((int)uVar24 < DAT_14c9647dc) {
          lVar20 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(lVar20 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        iVar6 = *(int *)(lVar20 + 0x10);
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar19 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar19);
          }
          LOCK();
          iVar6 = *(int *)(lVar20 + 0x10);
          bVar26 = iVar6 == 0;
          if (bVar26) {
            *(int *)(lVar20 + 0x10) = iVar19;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar26) {
            iVar6 = iVar19;
          }
        }
      }
      *(int *)(puVar14 + 0x14) = iVar6;
      *(undefined8 *)(local_308 + 0x12) = 0;
      puVar23 = local_308;
    }
  }
  iVar6 = DAT_14c9647dc;
  lVar20 = DAT_14c9647c8;
  if (((*(int *)(puVar23 + 0x18) != 0) && (uVar24 = *(uint *)(puVar23 + 0x16), -1 < (int)uVar24)) &&
     (((int)uVar24 < DAT_14c9647dc &&
      ((((plVar17 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
         plVar17 != (longlong *)0x0 && ((int)plVar17[2] == *(int *)(puVar23 + 0x18))) &&
        ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)))))) {
    if (((((*(int *)(puVar14 + 0x18) == 0) || (uVar24 = *(uint *)(puVar14 + 0x16), (int)uVar24 < 0))
         || (DAT_14c9647dc <= (int)uVar24)) ||
        ((plVar22 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
         plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(puVar14 + 0x18))))) ||
       ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) {
      if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
        uVar24 = *(uint *)(*plVar17 + 0xc);
        *(uint *)(puVar14 + 0x16) = uVar24;
        if ((int)uVar24 < iVar6) {
          lVar20 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(lVar20 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        iVar6 = *(int *)(lVar20 + 0x10);
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar19 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar19);
          }
          LOCK();
          iVar6 = *(int *)(lVar20 + 0x10);
          bVar26 = iVar6 == 0;
          if (bVar26) {
            *(int *)(lVar20 + 0x10) = iVar19;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar26) {
            iVar6 = iVar19;
          }
        }
      }
      else {
        *(undefined4 *)(puVar14 + 0x16) = 0;
        iVar6 = 0;
      }
      *(int *)(puVar14 + 0x18) = iVar6;
      *(undefined8 *)(local_308 + 0x16) = 0;
      plVar17 = *(longlong **)(puVar14 + 0x1c);
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x28))(plVar17,puVar14 + 0x24);
      }
      plVar17 = *(longlong **)(local_308 + 0x1c);
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x28))(plVar17,local_308 + 0x24);
      }
      puVar23 = local_308;
      if (puVar14 != local_308) {
        puVar2 = *(undefined8 **)(puVar14 + 0x1c);
        *(undefined8 *)(puVar14 + 0x1c) = *(undefined8 *)(local_308 + 0x1c);
        *(undefined8 *)(local_308 + 0x1c) = 0;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
          puVar23 = local_308;
        }
      }
    }
    else {
      if (((*(uint *)(plVar22 + 1) & 0x10200000) == 0) && (*plVar22 != 0)) {
        uVar24 = *(uint *)(*plVar22 + 0xc);
        *(uint *)(puVar14 + 0x16) = uVar24;
        if ((int)uVar24 < iVar6) {
          lVar20 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(lVar20 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        iVar6 = *(int *)(lVar20 + 0x10);
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar19 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar19);
          }
          LOCK();
          iVar6 = *(int *)(lVar20 + 0x10);
          bVar26 = iVar6 == 0;
          if (bVar26) {
            *(int *)(lVar20 + 0x10) = iVar19;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar26) {
            iVar6 = iVar19;
          }
        }
      }
      else {
        *(undefined4 *)(puVar14 + 0x16) = 0;
        iVar6 = 0;
      }
      *(int *)(puVar14 + 0x18) = iVar6;
      *(undefined8 *)(local_308 + 0x16) = 0;
      puVar23 = local_308;
    }
  }
  plVar17 = *(longlong **)(puVar23 + 0x1c);
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x28))(plVar17,puVar23 + 0x24);
    puVar2 = *(undefined8 **)(local_308 + 0x1c);
    puVar23 = local_308;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(local_308 + 0x1c) = 0;
      (**(code **)*puVar2)(puVar2,1);
      puVar23 = local_308;
    }
  }
  if (*(longlong *)(puVar23 + 0x20) != 0) {
    lVar20 = *(longlong *)(puVar23 + 0x20);
    if (*(longlong *)(puVar14 + 0x20) != 0) {
      lVar20 = *(longlong *)(puVar14 + 0x20);
    }
    *(longlong *)(puVar14 + 0x20) = lVar20;
  }
  sVar5 = puVar23[0x58];
  if (-1 < sVar5) {
    if (-1 < (short)puVar14[0x58]) {
      puVar14[0x58] = 0xffff;
      sVar5 = puVar23[0x58];
    }
    puVar14[0x58] = sVar5;
    puVar23[0x58] = 0xffff;
  }
  sVar5 = puVar23[0x59];
  if (-1 < sVar5) {
    if (-1 < (short)puVar14[0x59]) {
      puVar14[0x59] = 0xffff;
      sVar5 = puVar23[0x59];
    }
    puVar14[0x59] = sVar5;
    puVar23[0x59] = 0xffff;
  }
  iVar6 = DAT_14c9647dc;
  lVar20 = DAT_14c9647c8;
  if (*(int *)(puVar23 + 0x5c) == 0) goto LAB_143d9c9dd;
  uVar24 = *(uint *)(puVar23 + 0x5a);
  if (((((int)uVar24 < 0) || (DAT_14c9647dc <= (int)uVar24)) ||
      (plVar17 = (longlong *)
                 ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
      plVar17 == (longlong *)0x0)) ||
     ((((int)plVar17[2] != *(int *)(puVar23 + 0x5c) || ((*(uint *)(plVar17 + 1) & 0x10200000) != 0))
      || (*plVar17 == 0)))) goto LAB_143d9c9dd;
  puVar7 = (uint *)(puVar14 + 0x5a);
  if (*(int *)(puVar14 + 0x5c) == 0) {
LAB_143d9cf03:
    lVar18 = 0;
  }
  else {
    uVar24 = *puVar7;
    lVar18 = 0;
    if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
      plVar17 = (longlong *)
                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
      if ((plVar17 == (longlong *)0x0) ||
         (((int)plVar17[2] != *(int *)(puVar14 + 0x5c) ||
          ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_143d9cf03;
      lVar18 = *plVar17;
    }
  }
  puVar16 = (uint *)(puVar23 + 0x5a);
  if (lVar18 != 0) {
    puVar16 = puVar7;
  }
  if (((((puVar16[1] == 0) || (uVar24 = *puVar16, (int)uVar24 < 0)) ||
       (DAT_14c9647dc <= (int)uVar24)) ||
      ((plVar17 = (longlong *)
                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
       plVar17 == (longlong *)0x0 || (*(uint *)(plVar17 + 2) != puVar16[1])))) ||
     (((*(uint *)(plVar17 + 1) & 0x10200000) != 0 || (*plVar17 == 0)))) {
    *puVar7 = 0;
    iVar6 = 0;
  }
  else {
    uVar24 = *(uint *)(*plVar17 + 0xc);
    *puVar7 = uVar24;
    if ((int)uVar24 < iVar6) {
      lVar20 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
               *(longlong *)(lVar20 + (ulonglong)(uVar24 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar6 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar6 = *(int *)(lVar20 + 0x10);
      bVar26 = iVar6 == 0;
      if (bVar26) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar26) {
        iVar6 = iVar19;
      }
    }
  }
  *(int *)(puVar14 + 0x5c) = iVar6;
  *(undefined8 *)(local_308 + 0x5a) = 0;
  puVar23 = local_308;
LAB_143d9c9dd:
  if (-1 < *(int *)(puVar23 + 0x10)) {
    *(int *)(puVar14 + 0x10) = *(int *)(puVar23 + 0x10);
    *(undefined4 *)(puVar23 + 0x10) = 0xffffffff;
  }
  if (-1 < *(int *)(puVar23 + 0x28)) {
    *(int *)(puVar14 + 0x28) = *(int *)(puVar23 + 0x28);
    *(undefined4 *)(puVar23 + 0x28) = 0xffffffff;
  }
  if ((*(longlong *)(puVar23 + 0x2c) != 0) && (*(longlong *)(puVar14 + 0x2c) == 0)) {
    *(longlong *)(puVar14 + 0x2c) = *(longlong *)(puVar23 + 0x2c);
  }
  local_2f8 = (longlong *)(puVar23 + 0x30);
  iVar6 = *(int *)(puVar23 + 0x44);
  local_300 = puVar14;
  local_2f0 = param_1;
  if (iVar6 == 0) {
    uVar25 = 1;
    uVar21 = 0;
    iVar19 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = *(uint **)(puVar23 + 0x40);
    if (*(uint **)(puVar23 + 0x40) == (uint *)0x0) {
      puVar7 = (uint *)(puVar23 + 0x38);
    }
    uVar24 = *puVar7;
    if (uVar24 == 0) {
      iVar19 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar19 = iVar6 + -1;
      }
      uVar21 = 0;
      uVar15 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar15 = uVar21;
      }
      iVar19 = 0;
      do {
        if (uVar15 == uVar21) goto LAB_143d9cabc;
        iVar19 = iVar19 + 0x20;
        uVar24 = puVar7[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar21 = 0;
      iVar19 = 0;
    }
    uVar25 = (ulonglong)(-uVar24 & uVar24);
    uVar15 = uVar25 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar11) {
      iVar11 = iVar6;
    }
  }
  if (iVar11 != iVar6) {
    local_2e8 = puVar14 + 0x30;
    uVar24 = 0xffffffff;
    do {
      plVar17 = (longlong *)(*local_2f8 + (longlong)iVar11 * 0x30);
      local_2c8 = *plVar17;
      local_2c0 = &PTR_FUN_14a184370;
      local_2a8 = *(byte *)(plVar17 + 4);
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_2a8])(&local_2b8);
      if ((&DAT_149fc1b6e)[local_2a8] == '\x01') {
        if (((longlong *)CONCAT44(uStack_2b4,local_2b8) != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_2b4,local_2b8) + 0x28))(),
           cVar4 != '\0')) {
LAB_143d9cda7:
          local_2e0 = &local_2c8;
          local_2d8 = &local_2c0;
          FUN_1488c2eb4(local_2e8,local_2cc,&local_2e0);
        }
      }
      else if ((local_2b8 & 0xffffff) != 0) goto LAB_143d9cda7;
      local_2c0 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_2a8])(&local_2b8);
      uVar24 = uVar24 & ~(uint)uVar25;
      puVar7 = *(uint **)(local_308 + 0x40);
      if (*(uint **)(local_308 + 0x40) == (uint *)0x0) {
        puVar7 = (uint *)(puVar23 + 0x38);
      }
      iVar10 = *(int *)(local_308 + 0x44);
      iVar11 = (int)uVar21;
      lVar20 = (longlong)iVar11;
      uVar9 = puVar7[lVar20] & uVar24;
      if (uVar9 == 0) {
        iVar12 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar12 = iVar10 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar11) {
          iVar13 = iVar11;
        }
        if (iVar11 < iVar12) {
          lVar18 = 0;
          do {
            uVar9 = puVar7[lVar20 + lVar18 + 1];
            if (uVar9 != 0) {
              uVar21 = (ulonglong)(iVar11 + (int)lVar18 + 1);
              uVar24 = 0xffffffff;
              goto LAB_143d9ce73;
            }
            iVar19 = iVar19 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar13 - lVar20 != lVar18);
          uVar24 = 0xffffffff;
          iVar11 = iVar13;
        }
        uVar21 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar10;
      }
      else {
LAB_143d9ce73:
        uVar25 = (ulonglong)(-uVar9 & uVar9);
        uVar15 = uVar25 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar11) {
          iVar11 = iVar10;
        }
      }
    } while (iVar11 != iVar6);
  }
LAB_143d9cabc:
  FUN_145d6dd74();
  plVar17 = (longlong *)(local_308 + 0x60);
  puVar7 = (uint *)(local_308 + 0x68);
  iVar6 = *(int *)(local_308 + 0x74);
  if (iVar6 == 0) {
    uVar25 = 1;
    uVar21 = 0;
    iVar19 = 0;
    iVar11 = 0;
  }
  else {
    puVar16 = *(uint **)(local_308 + 0x70);
    if (*(uint **)(local_308 + 0x70) == (uint *)0x0) {
      puVar16 = puVar7;
    }
    uVar24 = *puVar16;
    if (uVar24 == 0) {
      iVar19 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar19 = iVar6 + -1;
      }
      uVar21 = 0;
      uVar15 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar15 = uVar21;
      }
      iVar19 = 0;
      do {
        if (uVar15 == uVar21) goto LAB_143d9cc51;
        iVar19 = iVar19 + 0x20;
        uVar24 = puVar16[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar21 = 0;
      iVar19 = 0;
    }
    uVar25 = (ulonglong)(-uVar24 & uVar24);
    uVar15 = uVar25 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar11) {
      iVar11 = iVar6;
    }
  }
  if (iVar11 < iVar6) {
    puVar14 = local_300 + 0x60;
    uVar24 = 0xffffffff;
    puVar23 = local_308;
    do {
      lVar20 = *plVar17;
      if (1 < *(int *)(lVar20 + 0x10 + (longlong)iVar11 * 0x20)) {
        local_2c8 = lVar20 + (longlong)iVar11 * 0x20;
        local_2c0 = (undefined **)(local_2c8 + 8);
        FUN_1406e263c(puVar14,&local_2e0,&local_2c8,0);
        iVar6 = *(int *)(local_308 + 0x74);
        puVar23 = local_308;
      }
      uVar24 = uVar24 & ~(uint)uVar25;
      puVar16 = *(uint **)(puVar23 + 0x70);
      if (*(uint **)(puVar23 + 0x70) == (uint *)0x0) {
        puVar16 = puVar7;
      }
      iVar11 = (int)uVar21;
      lVar20 = (longlong)iVar11;
      uVar9 = puVar16[lVar20] & uVar24;
      if (uVar9 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar12 = iVar10;
        if (iVar10 < iVar11) {
          iVar12 = iVar11;
        }
        if (iVar10 <= iVar11) break;
        lVar18 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar9 = puVar16[lVar20 + lVar18 + 1];
          if (uVar9 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar12 - lVar20 == lVar18) goto LAB_143d9cc51;
        }
        uVar21 = (ulonglong)(iVar11 + (int)lVar18 + 1);
        uVar24 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar9 & uVar9);
      uVar15 = uVar25 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar6);
  }
LAB_143d9cc51:
  FUN_145dd240c(plVar17,0);
  lVar20 = local_2f0;
  puVar14 = local_300;
  if ((*(longlong *)(local_308 + 0x88) != 0) && (*(longlong *)(local_300 + 0x88) == 0)) {
    *(longlong *)(local_300 + 0x88) = *(longlong *)(local_308 + 0x88);
  }
  uVar8 = 1;
  if (*(char *)(local_300 + 0x8e) == '\0') {
    uVar8 = *(undefined1 *)(local_308 + 0x8e);
  }
  *(undefined1 *)(local_300 + 0x8e) = uVar8;
  FUN_1458ef992(local_2f0,local_300,&local_180);
  FUN_1458ef992(lVar20,puVar14,&local_2a0);
  FUN_1414f506e(lVar20,puVar14);
  FUN_145c1fb8e(&local_2a0);
  FUN_145c1fb8e(&local_180);
  if ((local_60 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return puVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9d0da FUN_143d9d0da body=80 status=ok
// SIG undefined FUN_143d9d0da(void)

undefined4 FUN_143d9d0da(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  uVar2 = 0xffffffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar3 + 4)) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar3 + 2) * 8);
        } while (-1 < *(short *)(lVar3 + 4));
        if (lVar3 == 0) {
          return 0xffffffff;
        }
      }
      uVar2 = *(undefined4 *)(lVar3 + 0x20);
    }
  }
  return uVar2;
}



// FUNCTION 143d9d12a FUN_143d9d12a body=2765 status=ok
// SIG undefined FUN_143d9d12a(void)

void FUN_143d9d12a(longlong param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  short sVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  longlong *plVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  int iVar19;
  longlong lVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  int *local_b0;
  longlong *local_a8;
  longlong local_a0;
  int *local_98;
  int *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_6d;
  short local_6c;
  undefined2 local_6a;
  int *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_1 + 0x88) = 0;
  plVar9 = (longlong *)(param_1 + 0x38);
  uVar17 = (ulonglong)*(int *)(param_1 + 0x40);
  if (0 < (longlong)uVar17) {
    lVar15 = uVar17 * 0x38 + -0x18;
    do {
      lVar8 = *plVar9;
      if ((((*(char *)(lVar8 + lVar15) != '\0') || (*(int *)(lVar8 + -0x10 + lVar15) == 0)) ||
          (plVar13 = *(longlong **)(lVar8 + -0x18 + lVar15), plVar13 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar13 + 0x30))(), cVar6 == '\0')) {
        FUN_1465539a0(plVar9,(int)uVar17 + -1);
        FUN_145840c56(plVar9);
      }
      lVar15 = lVar15 + -0x38;
      bVar22 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar22);
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  if ((((*(int *)(param_1 + 0x94) != 0) && (uVar10 = *(uint *)(param_1 + 0x90), -1 < (int)uVar10))
      && (((int)uVar10 < DAT_14c9647dc &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0x94))))))) &&
     ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar15 = *plVar13;
    }
    else {
      lVar15 = 0;
    }
    if ((*(longlong *)(lVar15 + 0x1e0) != 0) &&
       (*(longlong *)(*(longlong *)(lVar15 + 0x1e0) + 0x30) != 0)) {
      FUN_1418b3aa8();
    }
  }
  if (0 < (longlong)*(int *)(param_1 + 0x50)) {
    plVar13 = (longlong *)(param_1 + 0x48);
    lVar8 = *(longlong *)(param_1 + 0x48);
    lVar15 = lVar8 + (longlong)*(int *)(param_1 + 0x50) * 0xc;
    do {
      uVar2 = *(ushort *)(lVar8 + 4);
      uVar11 = 0xffff;
      uVar12 = uVar11;
      if ((-1 < (short)uVar2) && ((int)(short)uVar2 < (int)*(uint *)(param_1 + 0x10))) {
        do {
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
          uVar12 = uVar11;
          if (((lVar20 == 0) ||
              (uVar2 = *(ushort *)(lVar20 + 2), uVar12 = uVar2, *(short *)(lVar20 + 4) < 0)) ||
             (uVar12 = uVar11, (short)uVar2 < 0)) break;
        } while ((uint)uVar2 < *(uint *)(param_1 + 0x10));
      }
      *(ushort *)(lVar8 + 4) = uVar12;
      lVar8 = lVar8 + 0xc;
    } while (lVar8 != lVar15);
    if ((longlong)*(int *)(param_1 + 0x40) == 0) {
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x38);
      lVar8 = (longlong)*(int *)(param_1 + 0x40) * 0x38 + lVar15;
      do {
        uVar2 = *(ushort *)(lVar15 + 0x18);
        uVar11 = 0xffff;
        uVar12 = uVar11;
        if ((-1 < (short)uVar2) && ((int)(short)uVar2 < (int)*(uint *)(param_1 + 0x10))) {
          while ((lVar20 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8),
                 uVar12 = uVar11, lVar20 != 0 &&
                 (uVar2 = *(ushort *)(lVar20 + 2), uVar12 = uVar2, -1 < *(short *)(lVar20 + 4)))) {
            uVar12 = uVar11;
            if (((short)uVar2 < 0) || (*(uint *)(param_1 + 0x10) <= (uint)uVar2)) break;
          }
        }
        *(ushort *)(lVar15 + 0x18) = uVar12;
        lVar15 = lVar15 + 0x38;
      } while (lVar15 != lVar8);
      iVar7 = *(int *)(param_1 + 0x40);
      local_58 = 0;
      uStack_50 = 0;
      if (iVar7 < 0) goto LAB_143d9dbe6;
      if (iVar7 != 0) {
        FUN_1412ae75a(&local_58);
      }
    }
    local_68 = (int *)0x0;
    uStack_60 = 0;
    iVar7 = *(int *)(param_1 + 0x50);
    if (iVar7 < 0) {
LAB_143d9dbe6:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar7 != 0) {
      FUN_1412dcf6a(&local_68);
      iVar7 = *(int *)(param_1 + 0x50);
      piVar16 = *(int **)(param_1 + 0x48);
      if (1 < (longlong)iVar7) {
        piVar18 = piVar16 + (longlong)iVar7 * 3;
        do {
          uVar17 = uStack_60;
          if (-1 < (short)piVar16[1]) {
            lVar15 = (longlong)(int)uStack_60;
            if (lVar15 != 0) {
              lVar8 = lVar15 * 0xc;
              piVar14 = local_68;
              do {
                if ((short)piVar14[1] == (short)piVar16[1]) {
                  if (piVar14 != (int *)0x0) {
                    piVar14[2] = piVar14[2] | piVar16[2];
                    goto LAB_143d9d40d;
                  }
                  break;
                }
                piVar14 = piVar14 + 3;
                lVar8 = lVar8 + -0xc;
              } while (lVar8 != 0);
            }
            uVar10 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar10);
            if (uStack_60._4_4_ < uVar10) {
              FUN_1488c30a0(&local_68,uVar17 & 0xffffffff);
            }
            iVar7 = DAT_14c763988 + 1;
            local_68[lVar15 * 3] = DAT_14c763988;
            DAT_14c763988 = iVar7;
            *(undefined2 *)(local_68 + lVar15 * 3 + 1) = 0xffff;
            local_68[lVar15 * 3 + 2] = 0;
            *(short *)(local_68 + lVar15 * 3 + 1) = (short)piVar16[1];
            local_68[lVar15 * 3 + 2] = piVar16[2];
          }
LAB_143d9d40d:
          piVar16 = piVar16 + 3;
        } while (piVar16 != piVar18);
        *(undefined4 *)(param_1 + 0x50) = 0;
        if (*(int *)(param_1 + 0x54) < 0) {
          FUN_145c1fe5c(plVar13);
        }
        if ((longlong)(int)uStack_60 != 0) {
          piVar16 = local_68 + (longlong)(int)uStack_60 * 3;
          piVar18 = local_68;
          do {
            iVar7 = *(int *)(param_1 + 0x50);
            lVar15 = (longlong)iVar7;
            *(uint *)(param_1 + 0x50) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
              FUN_141324360(plVar13,iVar7);
            }
            lVar8 = *plVar13;
            *(int *)(lVar8 + lVar15 * 0xc) = *piVar18;
            *(short *)(lVar8 + 4 + lVar15 * 0xc) = (short)piVar18[1];
            *(int *)(lVar8 + 8 + lVar15 * 0xc) = piVar18[2];
            piVar18 = piVar18 + 3;
          } while (piVar18 != piVar16);
        }
        bVar22 = (longlong)uStack_60 < 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        if (bVar22) {
          FUN_1412dcf6a(&local_68,0);
        }
        iVar7 = *(int *)(param_1 + 0x50);
        piVar16 = *(int **)(param_1 + 0x48);
      }
      if (iVar7 != 0) {
        piVar18 = piVar16 + (longlong)iVar7 * 3;
        do {
          uVar17 = uStack_60;
          lVar15 = (longlong)(int)uStack_60;
          uVar10 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar10);
          if (uStack_60._4_4_ < uVar10) {
            FUN_1488c30a0(&local_68,uVar17 & 0xffffffff);
          }
          local_68[lVar15 * 3] = *piVar16;
          *(short *)(local_68 + lVar15 * 3 + 1) = (short)piVar16[1];
          local_68[lVar15 * 3 + 2] = piVar16[2];
          piVar16 = piVar16 + 3;
        } while (piVar16 != piVar18);
      }
    }
    if ((longlong)(int)uStack_60 != 0) {
      piVar18 = local_68 + (longlong)(int)uStack_60 * 3;
      local_a0 = param_1 + 0x58;
      piVar14 = local_68;
      piVar16 = local_68;
      local_a8 = plVar9;
      local_98 = piVar18;
      local_90 = local_68;
      local_88 = plVar13;
      do {
        uVar2 = *(ushort *)(piVar16 + 1);
        if (-1 < (short)uVar2) {
          uVar10 = piVar16[2];
          if ((uVar10 >> 0x13 & 1) != 0) {
            if ((int)(short)uVar2 < *(int *)(param_1 + 0x10)) {
              uVar17 = (ulonglong)uVar2;
              while (lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar17 * 8),
                    -1 < *(short *)(lVar15 + 4)) {
                uVar17 = (ulonglong)*(short *)(lVar15 + 2);
              }
              local_6c = *(short *)(lVar15 + 2);
              local_6a = *(undefined2 *)(lVar15 + 8);
              if (-1 < local_6c) {
                plVar9 = (longlong *)FUN_140d1732e(param_1,&local_6c);
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0xff8))(plVar9,param_1,&local_6c);
                }
                plVar9 = (longlong *)FUN_140a2fb0c(param_1,&local_6c);
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x968))(plVar9,param_1,&local_6c);
                }
                if ((((*(int *)(param_1 + 0x94) != 0) &&
                     (uVar10 = *(uint *)(param_1 + 0x90), -1 < (int)uVar10)) &&
                    ((int)uVar10 < DAT_14c9647dc)) &&
                   (((puVar21 = (undefined8 *)
                                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                     puVar21 != (undefined8 *)0x0 &&
                     (*(int *)(puVar21 + 2) == *(int *)(param_1 + 0x94))) &&
                    ((*(uint *)(puVar21 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(puVar21 + 1) & 0x10200000) == 0) {
                    plVar9 = (longlong *)*puVar21;
                  }
                  else {
                    plVar9 = (longlong *)0x0;
                  }
                  (**(code **)(*plVar9 + 0x4c8))(plVar9,param_1,&local_6c);
                }
              }
            }
            uVar10 = piVar16[2];
          }
          if ((uVar10 >> 0x1b & 1) != 0) {
            uVar2 = *(ushort *)(piVar16 + 1);
            if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x10))) {
              uVar17 = (ulonglong)uVar2;
              while (lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar17 * 8),
                    -1 < *(short *)(lVar15 + 4)) {
                uVar17 = (ulonglong)*(short *)(lVar15 + 2);
              }
              local_6c = *(short *)(lVar15 + 2);
              local_6a = *(undefined2 *)(lVar15 + 8);
              if (-1 < local_6c) {
                plVar9 = (longlong *)FUN_140d1732e(param_1,&local_6c);
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x1000))(plVar9,param_1,&local_6c);
                }
                plVar9 = (longlong *)FUN_140a2fb0c(param_1,&local_6c);
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x970))(plVar9,param_1,&local_6c);
                }
                if (((((*(int *)(param_1 + 0x94) != 0) &&
                      (uVar10 = *(uint *)(param_1 + 0x90), -1 < (int)uVar10)) &&
                     ((int)uVar10 < DAT_14c9647dc)) &&
                    ((puVar21 = (undefined8 *)
                                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                     puVar21 != (undefined8 *)0x0 &&
                     (*(int *)(puVar21 + 2) == *(int *)(param_1 + 0x94))))) &&
                   ((*(uint *)(puVar21 + 1) & 0x10200000) == 0)) {
                  if ((*(uint *)(puVar21 + 1) & 0x10200000) == 0) {
                    plVar9 = (longlong *)*puVar21;
                  }
                  else {
                    plVar9 = (longlong *)0x0;
                  }
                  (**(code **)(*plVar9 + 0x4d0))(plVar9,param_1,&local_6c);
                }
              }
            }
          }
          local_b0 = piVar16;
          if ((longlong)*(int *)(param_1 + 0x40) != 0) {
            lVar15 = *(longlong *)(param_1 + 0x38);
            local_78 = (longlong)*(int *)(param_1 + 0x40) * 0x38;
            local_80 = lVar15 + 8;
            lVar8 = 0;
            do {
              uVar17 = uStack_50;
              if (*(char *)(lVar15 + 0x20 + lVar8) == '\0') {
                lVar20 = (longlong)(int)uStack_50;
                uVar10 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar10);
                if (uStack_50._4_4_ < uVar10) {
                  FUN_146553a14(&local_58,uVar17 & 0xffffffff);
                }
                lVar4 = local_58;
                lVar20 = lVar20 * 0x38;
                puVar1 = (undefined4 *)(local_58 + lVar20);
                *puVar1 = *(undefined4 *)(lVar15 + lVar8);
                *(undefined8 *)(puVar1 + 2) = 0;
                puVar1[4] = 0;
                FUN_1413d9b00(puVar1 + 2,local_80 + lVar8);
                *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(lVar15 + 0x18 + lVar8);
                puVar1[7] = *(undefined4 *)(lVar15 + 0x1c + lVar8);
                *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar15 + 0x20 + lVar8);
                *(undefined8 *)(puVar1 + 10) = 0;
                iVar7 = *(int *)(lVar15 + 0x30 + lVar8);
                _Src = *(void **)(lVar15 + 0x28 + lVar8);
                puVar1[0xc] = iVar7;
                if ((longlong)iVar7 == 0) {
                  *(undefined4 *)(lVar4 + lVar20 + 0x34) = 0;
                }
                else {
                  puVar21 = (undefined8 *)(lVar4 + lVar20 + 0x28);
                  FUN_1446dd670(puVar21,iVar7,0);
                  memcpy((void *)*puVar21,_Src,(longlong)iVar7 * 2);
                }
              }
              lVar8 = lVar8 + 0x38;
            } while (local_78 != lVar8);
          }
          lVar15 = local_58;
          piVar18 = local_98;
          piVar16 = local_b0;
          if ((longlong)(int)uStack_50 != 0) {
            lVar20 = (longlong)(int)uStack_50 * 0x38 + local_58;
            lVar8 = local_58;
            do {
              if (((*(short *)(lVar8 + 0x18) < 0) || (*(int *)(lVar8 + 0x10) == 0)) ||
                 ((*(longlong **)(lVar8 + 8) == (longlong *)0x0 ||
                  (cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x30))(), cVar6 == '\0')))) {
                *(undefined1 *)(lVar8 + 0x20) = 1;
              }
              else {
                uVar2 = *(ushort *)(piVar16 + 1);
                if ((uVar2 == *(ushort *)(lVar8 + 0x18)) &&
                   ((*(uint *)(lVar8 + 0x1c) & piVar16[2]) != 0)) {
                  local_6c = -1;
                  if (((short)uVar2 < 0) || (*(int *)(param_1 + 0x10) <= (int)(uint)uVar2)) {
                    local_6a = 0;
                  }
                  else {
                    uVar17 = (ulonglong)(uint)uVar2;
                    while (lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar17 * 8),
                          -1 < *(short *)(lVar4 + 4)) {
                      uVar17 = (ulonglong)*(short *)(lVar4 + 2);
                    }
                    local_6c = *(short *)(lVar4 + 2);
                    local_6a = *(undefined2 *)(lVar4 + 8);
                  }
                  local_6d = 0;
                  if ((*(int *)(lVar8 + 0x10) != 0) &&
                     (plVar9 = *(longlong **)(lVar8 + 8), plVar9 != (longlong *)0x0)) {
                    local_b8 = &local_6d;
                    (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
                  }
                  *(undefined1 *)(lVar8 + 0x20) = local_6d;
                }
              }
              lVar8 = lVar8 + 0x38;
            } while (lVar8 != lVar20);
            if ((longlong)(int)uStack_50 != 0) {
              lVar20 = (longlong)(int)uStack_50 * 0x38;
              lVar8 = lVar15;
              do {
                if (*(char *)(lVar8 + 0x20) == '\x01') {
                  FUN_14120fc1a(local_a8,lVar8);
                }
                lVar8 = lVar8 + 0x38;
                lVar20 = lVar20 + -0x38;
              } while (lVar20 != 0);
            }
          }
          piVar14 = local_90;
          if ((short)local_b0[2] != 0) {
            uVar2 = *(ushort *)(local_b0 + 1);
            local_6c = -1;
            if (((short)uVar2 < 0) || (*(int *)(param_1 + 0x10) <= (int)(short)uVar2)) {
              local_6a = 0;
            }
            else {
              uVar17 = (ulonglong)uVar2;
              while (lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar17 * 8),
                    -1 < *(short *)(lVar8 + 4)) {
                uVar17 = (ulonglong)*(short *)(lVar8 + 2);
              }
              local_6c = *(short *)(lVar8 + 2);
              local_6a = *(undefined2 *)(lVar8 + 8);
            }
            FUN_143d9e27c(local_a0,param_1);
          }
          uVar5 = uStack_50;
          FUN_14120fc71(lVar15,uStack_50 & 0xffffffff);
          plVar13 = local_88;
          piVar16 = local_b0;
          uVar17 = uStack_50 >> 0x20;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          if (((longlong)uVar5 < 0) && ((int)uVar17 != 0)) {
            FUN_1412ae75a(&local_58,0);
          }
        }
        piVar16 = piVar16 + 3;
      } while (piVar16 != piVar18);
      do {
        iVar7 = *(int *)(param_1 + 0x50);
        if ((longlong)iVar7 != 0) {
          lVar15 = *(longlong *)(param_1 + 0x48);
          lVar8 = 0;
          do {
            if (*(int *)(lVar15 + lVar8) == *piVar14) {
              uVar10 = (int)(lVar8 >> 2) * -0x55555555;
              if (uVar10 != 0xffffffff) {
                iVar19 = ~uVar10 + iVar7;
                if (iVar19 != 0) {
                  if (0 < iVar19) {
                    iVar19 = 1;
                  }
                  memmove((void *)(lVar15 + (longlong)(int)uVar10 * 0xc),
                          (void *)(lVar15 + (longlong)(iVar7 - iVar19) * 0xc),(longlong)iVar19 * 0xc
                         );
                  iVar7 = *(int *)(param_1 + 0x50);
                }
                *(int *)(param_1 + 0x50) = iVar7 + -1;
                FUN_141892c86(plVar13);
              }
              break;
            }
            lVar8 = lVar8 + 0xc;
          } while ((longlong)iVar7 * 0xc != lVar8);
        }
        piVar14 = piVar14 + 3;
      } while (piVar14 != piVar18);
    }
    FUN_14120fc71(local_58,uStack_50 & 0xffffffff);
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  while (uVar10 = *(uint *)(param_1 + 0x30), 0 < (int)uVar10) {
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x28) + -2 + (ulonglong)uVar10 * 2);
    *(uint *)(param_1 + 0x30) = uVar10 - 1;
    FUN_146553842(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)sVar3 * 8));
  }
  if (*(int *)(param_1 + 0x50) < 1) {
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 143d9dc14 FUN_143d9dc14 body=515 status=ok
// SIG undefined FUN_143d9dc14(void)

void FUN_143d9dc14(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  undefined4 *puVar15;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [8];
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = FUN_1409231c6(param_2);
  if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x178) != 0)) {
    lVar12 = FUN_14041aabe();
    lVar1 = *(longlong *)(lVar11 + 0x178);
    if ((lVar1 != 0) &&
       ((((lVar12 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar12 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
          lVar12 + 0x30 && (lVar1 = *(longlong *)(lVar1 + 0x488), lVar1 != 0)))))) {
      lVar12 = FUN_140082f10();
      if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
        lVar11 = FUN_1400f6f32(lVar11);
        if ((lVar11 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x68), lVar11 != 0)) {
          FUN_14042af24(lVar11,&local_88,lVar1);
          if (-1 < (short)local_88) {
            FUN_14151aed0(lVar11,&local_58,&local_88);
            (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
            *(undefined ***)(param_1 + 8) = &PTR_FUN_14a184370;
            puVar15 = &uStack_50;
            *(byte *)(param_1 + 0x20) = (byte)uStack_40;
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[(byte)uStack_40])
                      (param_1 + 0x10,puVar15);
            *(undefined1 *)(param_1 + 0x28) = 10;
            local_58 = &PTR_FUN_14a184370;
            uVar13 = (ulonglong)(byte)uStack_40;
            ppuVar14 = &switchD_1458da17c::switchdataD_14a184390;
            goto LAB_143d9dd0c;
          }
        }
      }
    }
  }
  local_90 = 0;
  puVar15 = (undefined4 *)(param_1 + 8);
  if (local_b0 == puVar15) {
    uVar13 = 0;
  }
  else {
    local_68 = local_68 & 0xffffffffffffff00;
    local_38 = local_68;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_58 = (undefined **)CONCAT44(uStack_84,local_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    uVar13 = *(ulonglong *)(param_1 + 0x28);
    uVar3 = *puVar15;
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    *(ulonglong *)(param_1 + 0x28) = local_68;
    *(undefined4 *)(param_1 + 0x18) = local_78;
    *(undefined4 *)(param_1 + 0x1c) = uStack_74;
    *(undefined4 *)(param_1 + 0x20) = uStack_70;
    *(undefined4 *)(param_1 + 0x24) = uStack_6c;
    *puVar15 = local_88;
    *(undefined4 *)(param_1 + 0xc) = uStack_84;
    *(undefined4 *)(param_1 + 0x10) = uStack_80;
    *(undefined4 *)(param_1 + 0x14) = uStack_7c;
    local_88 = uVar3;
    uStack_84 = uVar4;
    uStack_80 = uVar5;
    uStack_7c = uVar6;
    local_78 = uVar7;
    uStack_74 = uVar8;
    uStack_70 = uVar9;
    uStack_6c = uVar10;
    local_68 = uVar13;
    (*(code *)(&PTR_FUN_14a1842f0)[uVar13 & 0xff])();
    uVar13 = (ulonglong)local_90;
  }
  ppuVar14 = &PTR_FUN_14a1842f0;
  puVar15 = local_b0;
LAB_143d9dd0c:
  (*(code *)ppuVar14[uVar13])(puVar15);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9de1c FUN_143d9de1c body=1118 status=ok
// SIG undefined FUN_143d9de1c(void)

void FUN_143d9de1c(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
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
  if (((((**(char **)(param_1 + 8) != '\0') || (*(int *)(param_2 + 0xc) == 0)) ||
       (uVar1 = *(uint *)(param_2 + 8), (int)uVar1 < 0)) ||
      (((DAT_14c9647dc <= (int)uVar1 ||
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar5 == (longlong *)0x0)) ||
       (((int)plVar5[2] != *(int *)(param_2 + 0xc) ||
        (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))
        ))))) || (plVar5 = (longlong *)*plVar5, plVar5 == (longlong *)0x0)) goto LAB_143d9de82;
  if (DAT_14cae9568 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1417de738;
    local_30 = (code *)&LAB_145893408;
    local_38 = &LAB_1458cbbd2;
    local_48 = &LAB_147ba21f1;
    local_50 = &LAB_1463e9233;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x1000000c;
    local_70 = 8;
    local_78 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
  }
  lVar4 = plVar5[2];
  iVar6 = *(int *)(lVar4 + 0x38);
  if ((iVar6 < *(int *)(DAT_14cae9568 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
      DAT_14cae9568 + 0x30)) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = L"Game";
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar4 = plVar5[2];
      iVar6 = *(int *)(lVar4 + 0x38);
    }
    if ((iVar6 < *(int *)(DAT_14caf9cd0 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
        DAT_14caf9cd0 + 0x30)) {
      lVar3 = FUN_1400d1928();
      lVar4 = plVar5[2];
      iVar6 = *(int *)(lVar4 + 0x38);
      if ((iVar6 < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        if (DAT_14cacf818 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1463b216c;
          local_48 = &LAB_1479977e3;
          local_50 = &LAB_1463b2171;
          local_58 = L"Game";
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x750;
          FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
          lVar4 = plVar5[2];
          iVar6 = *(int *)(lVar4 + 0x38);
        }
        if ((iVar6 < *(int *)(DAT_14cacf818 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) !=
            DAT_14cacf818 + 0x30)) goto LAB_143d9de82;
        pcVar2 = *(code **)(*plVar5 + 0x5e8);
        if (pcVar2 == FUN_140972dde) {
          if (plVar5[0x76] != 0) goto LAB_143d9e05b;
          pcVar2 = *(code **)(*plVar5 + 0x5f8);
          if (pcVar2 == FUN_144784df4) {
            if (*(code **)(plVar5[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (((((*(int *)((longlong)plVar5 + 0x75b4) == 0) ||
                    (uVar1 = *(uint *)(plVar5 + 0xeb6), (int)uVar1 < 0)) ||
                   (DAT_14c9647dc <= (int)uVar1)) ||
                  ((plVar7 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar7 == (longlong *)0x0 ||
                   ((int)plVar7[2] != *(int *)((longlong)plVar5 + 0x75b4))))) ||
                 ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143d9de82;
              if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                lVar4 = *plVar7;
              }
              else {
                lVar4 = 0;
              }
              lVar4 = lVar4 + 0x110;
            }
            else {
              lVar4 = (**(code **)(plVar5[0x784] + 0x18))(plVar5 + 0x784);
            }
            if (lVar4 == 0) goto LAB_143d9de82;
            lVar4 = *(longlong *)(lVar4 + 0x20);
          }
          else {
            lVar4 = (*pcVar2)(plVar5);
          }
          if (lVar4 == 0) goto LAB_143d9de82;
          lVar4 = *(longlong *)(lVar4 + 0x3b0);
        }
        else {
          lVar4 = (*pcVar2)(plVar5);
        }
        if (lVar4 == 0) goto LAB_143d9de82;
      }
    }
  }
LAB_143d9e05b:
  **(undefined1 **)(param_1 + 8) = 1;
LAB_143d9de82:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9e27c FUN_143d9e27c body=187 status=ok
// SIG undefined FUN_143d9e27c(void)

void FUN_143d9e27c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
        goto LAB_143d9e31f;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143d9e31f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143d9e338 FUN_143d9e338 body=29 status=ok
// SIG undefined FUN_143d9e338(void)

undefined8 FUN_143d9e338(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d9e36a FUN_143d9e36a body=93 status=ok
// SIG undefined FUN_143d9e36a(void)

void FUN_143d9e36a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d9e3c8 FUN_143d9e3c8 body=93 status=ok
// SIG undefined FUN_143d9e3c8(void)

void FUN_143d9e3c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d9e426 FUN_143d9e426 body=126 status=ok
// SIG undefined FUN_143d9e426(void)

void FUN_143d9e426(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b410750;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9e495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d9e4ae FUN_143d9e4ae body=20 status=ok
// SIG undefined FUN_143d9e4ae(void)

undefined1 FUN_143d9e4ae(longlong param_1)

{
  FUN_143d9d12a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143d9e4c2 FUN_143d9e4c2 body=1183 status=ok
// SIG undefined FUN_143d9e4c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d9e4c2(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb81bb8 = (ulonglong)uVar3;
  _DAT_14cb81bc0 = 0x47efffffe0000000;
  _DAT_14cb81bc8 = 0x47efffffe0000000;
  _DAT_14cb81bd0 = 0x47efffffe0000000;
  _DAT_14cb81bd8 = 0x47efffffe0000000;
  _DAT_14cb81be0 = 0x47efffffe0000000;
  _DAT_14cb81be8 = 0x47efffffe0000000;
  _DAT_14cb81bf0 = 0x47efffffe0000000;
  _DAT_14cb81bf8 = 0x47efffffe0000000;
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cb81c00);
  if (cVar2 == '\0') {
    _DAT_14cb81c00 = 0;
    uRam000000014cb81c08 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb81c14 = 0;
  FUN_14052b5e0(&DAT_14cb81c10,"PlayerAwareness",0);
  _DAT_14cb81c20 = "PlayerAwareness";
  local_60 = "player_character_id";
  local_58 = 0x13;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = "Global";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cb81c30 = 0;
  local_60 = "player_primary_id";
  local_58 = 0x11;
  local_54 = 0;
  DAT_14cb81c28 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = "Global";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cb81c40 = 0;
  local_60 = "player_platform_id";
  local_58 = 0x12;
  local_54 = 0;
  _DAT_14cb81c38 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = "Global";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cb81c50 = 0;
  local_60 = "player_local_index";
  local_58 = 0x12;
  local_54 = 0;
  _DAT_14cb81c48 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = "Global";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cb81c60 = 0;
  local_60 = "player_is_authority";
  local_58 = 0x13;
  local_54 = 0;
  _DAT_14cb81c58 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = "Global";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cb81c70 = 0;
  local_60 = "player_ping_ms";
  local_58 = 0xe;
  local_54 = 0;
  DAT_14cb81c68 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_60,1);
  local_60 = "Global";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cb81c80 = 0;
  DAT_14cb81c88 = 0;
  _DAT_14cb81c90 = 0;
  _DAT_14cb81c78 = (ulonglong)uVar3;
  atexit((_func_5014 *)&LAB_143d9a550);
  DAT_14cb81c98 = 0;
  DAT_14cb81ca0 = 0;
  _DAT_14cb81ca8 = 0;
  atexit(FUN_143d9a561);
  local_60 = "game_session_primary_character_id";
  local_58 = 0x21;
  local_54 = 0;
  uVar4 = FUN_14001a6c0(&local_60,1);
  FUN_141544bf8(&DAT_14cb81cc0,uVar4,&DAT_149dfb77a,0x51);
  _DAT_14cb81cc0 = &PTR_FUN_14b410390;
  atexit((_func_5014 *)&LAB_143d9c079);
  local_60 = "game_session_primary_player_id";
  local_58 = 0x1e;
  local_54 = 0;
  uVar4 = FUN_14001a6c0(&local_60,1);
  FUN_141544bf8(&DAT_14cb81d08,uVar4,&DAT_149dfb77a,0x51);
  _DAT_14cb81d08 = &PTR_FUN_14b4103c0;
  atexit((_func_5014 *)&LAB_143d9c085);
  DAT_14cb81d50 = (undefined8 *)0x0;
  _DAT_14cb81d58 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0x1200,0);
  lVar7 = 0xf;
  puVar1 = puVar5;
  do {
    puVar6 = puVar1 + 0x24;
    *puVar1 = puVar6;
    lVar7 = lVar7 + -1;
    puVar1 = puVar6;
  } while (lVar7 != 0);
  *puVar6 = DAT_14cb81d50;
  _DAT_14cb81d58 = _DAT_14cb81d58 + 0x10;
  local_60 = "nexus";
  local_58 = 5;
  local_54 = 0;
  DAT_14cb81d50 = puVar5;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb81d60 = (ulonglong)uVar3;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9e964 FUN_143d9e964 body=131 status=ok
// SIG undefined FUN_143d9e964(void)

void FUN_143d9e964(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)*param_2;
  local_20 = *param_3;
  local_18 = (longlong *)param_3[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9eb32 FUN_143d9eb32 body=641 status=ok
// SIG undefined FUN_143d9eb32(void)

void FUN_143d9eb32(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  ulonglong *local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_3 & 2) != 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      plVar7 = (longlong *)FUN_14084c0d2(param_2);
    }
    else {
      local_60 = (ulonglong *)0x0;
      local_58 = 0x1800000000;
      plVar7 = (longlong *)0x0;
      FUN_14024dbd6(param_2,&local_120,0);
      puVar6 = local_60;
      if (local_60 == (ulonglong *)0x0) {
        puVar6 = &local_120;
      }
      if ((longlong)(int)local_58 != 0) {
        puVar1 = puVar6 + (int)local_58;
        do {
          plVar7 = (longlong *)*puVar6;
          if (plVar7[3] == *(longlong *)(param_1 + 0x30)) {
            if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_143d9ec1c;
            if ((longlong)(int)plVar7[0xf] != 0) {
              lVar8 = 0;
              do {
                if (*(longlong *)(plVar7[0xe] + lVar8) == *(longlong *)(param_1 + 0x38))
                goto LAB_143d9ec1c;
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)plVar7[0xf] * 8 != lVar8);
            }
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar1);
        plVar7 = (longlong *)0x0;
      }
LAB_143d9ec1c:
      if (local_60 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((plVar7 != (longlong *)0x0) &&
       (iVar3 = *(int *)(param_1 + 0x40), iVar5 = (**(code **)(*plVar7 + 0x7b0))(plVar7),
       iVar3 < iVar5)) {
      lVar8 = FUN_1402d20ea(param_1 + 0x48);
      if (lVar8 != 0) {
        (**(code **)(*plVar7 + 0x638))(plVar7,*(undefined4 *)(param_1 + 0x40),lVar8);
      }
      if (((0 < *(int *)(param_1 + 0x78)) || (0 < *(int *)(param_1 + 0x88))) &&
         (lVar8 = (**(code **)(*plVar7 + 0x678))(plVar7,*(undefined4 *)(param_1 + 0x40),0,0),
         lVar8 != 0)) {
        iVar3 = *(int *)(param_1 + 0x78);
        if ((longlong)iVar3 != 0) {
          lVar4 = *(longlong *)(param_1 + 0x70);
          lVar9 = 0;
          do {
            puVar2 = (undefined8 *)(lVar4 + 8 + lVar9);
            local_138 = *puVar2;
            uStack_130 = *(undefined4 *)(puVar2 + 1);
            uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
            local_120 = *(ulonglong *)(lVar4 + lVar9);
            local_118 = CONCAT71(local_118._1_7_,2);
            local_118 = CONCAT44(0xffffffff,(undefined4)local_118);
            FUN_14016d7a8(lVar8,&local_120,&local_138);
            lVar9 = lVar9 + 0x18;
          } while ((longlong)iVar3 * 0x18 != lVar9);
        }
        iVar3 = *(int *)(param_1 + 0x88);
        if ((longlong)iVar3 != 0) {
          lVar4 = *(longlong *)(param_1 + 0x80);
          lVar9 = 0;
          do {
            local_138 = *(undefined8 *)(lVar4 + lVar9);
            uStack_130 = CONCAT31(uStack_130._1_3_,2);
            uStack_12c = 0xffffffff;
            local_120 = local_120 & 0xffffffffffffff00;
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_148 = &local_120;
            FUN_140042bb4(lVar8,&local_138,*(undefined4 *)(lVar4 + 8 + lVar9),0);
            lVar9 = lVar9 + 0xc;
          } while ((longlong)iVar3 * 0xc != lVar9);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9edb4 FUN_143d9edb4 body=69 status=ok
// SIG undefined FUN_143d9edb4(void)

void FUN_143d9edb4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b3185b0;
  param_1[6] = &PTR_FUN_14b303970;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 3;
  return;
}



// FUNCTION 143d9ee00 FUN_143d9ee00 body=321 status=ok
// SIG undefined FUN_143d9ee00(void)

void FUN_143d9ee00(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x30);
    lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      uVar4 = FUN_14050fd64();
      lVar6 = plVar7[1];
      if (lVar6 == 0) {
        uVar5 = FUN_140feeb70();
        lVar6 = FUN_14477b664(uVar5);
        plVar7[1] = lVar6;
      }
      lVar8 = plVar7[2];
      if (lVar8 == 0) {
        if (lVar6 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if (*plVar7 != 0) {
            plVar2 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar8 = FUN_144aff482(uVar5,plVar7);
            }
            plVar7[2] = lVar8;
          }
        }
      }
      local_58 = 0;
      FUN_14088df30(uVar4,&local_48,lVar8,0);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14088d55a(param_2,iVar1);
      }
      lVar6 = *param_2;
      *(undefined8 *)(lVar6 + (longlong)iVar1 * 0x10) = local_48;
      *(undefined8 *)(lVar6 + 8 + (longlong)iVar1 * 0x10) = local_40;
      plVar7 = plVar7 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d9ef42 FUN_143d9ef42 body=467 status=ok
// SIG undefined FUN_143d9ef42(void)

undefined8 FUN_143d9ef42(longlong param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 ****ppppuVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  undefined6 uStack_5e;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    local_a0[0] = *(undefined8 ****)(param_1 + 8);
    FUN_1446dcdd4(&local_78);
    lVar3 = FUN_1448fdc6e(&local_78);
    if (CONCAT62(uStack_5e,local_60) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = lVar3;
  }
  local_a8 = uVar7;
  (**(code **)(*param_3 + 0x20))(param_3,local_a0,lVar3,0);
  if (local_80 == 0) {
    cVar2 = *(char *)(param_1 + 0x2c);
  }
  else if (local_80 == 1) {
    cVar2 = FUN_140168b7a(local_a0,*(undefined1 *)(param_1 + 0x2c));
  }
  else {
    if (local_80 == 3) {
      uVar7 = local_a0[0]._0_4_;
    }
    else {
      puVar6 = &local_78;
      FUN_1400b56fe(puVar6,local_a0,3);
      uVar7 = 0;
      if (local_58 != 0) {
        uVar7 = local_78;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar6 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar1)(puVar6);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    cVar2 = FUN_140bb33a8(param_1,uVar7);
  }
  pwVar4 = L"false";
  if (cVar2 != '\0') {
    pwVar4 = L"true";
  }
  FUN_140056680(param_2,pwVar4);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar5 = local_a0;
    if (0x18 < local_88) {
      ppppuVar5 = (undefined8 ****)local_a0[0];
    }
    (*pcVar1)(ppppuVar5);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9f116 FUN_143d9f116 body=566 status=ok
// SIG undefined FUN_143d9f116(void)

undefined8 FUN_143d9f116(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 ***local_90 [3];
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  undefined6 uStack_4e;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    local_90[0] = *(undefined8 ****)(param_1 + 8);
    FUN_1446dcdd4(&local_68);
    lVar6 = FUN_1448fdc6e(&local_68);
    if (CONCAT62(uStack_4e,local_50) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) goto LAB_143d9f150;
    local_a8 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
LAB_143d9f1fc:
    local_78 = 0;
    local_70 = 0;
  }
  else {
LAB_143d9f150:
    FUN_140187aa4(lVar6 + 0x30,&local_a8);
    if (local_a8 == (longlong *)0x0) goto LAB_143d9f1fc;
    (**(code **)(*local_a8 + 0x48))(local_a8,local_90,lVar6,param_3);
    if (local_70 == 1) {
      cVar5 = FUN_140168b7a(local_90,*(undefined1 *)(param_1 + 0x2c));
      goto LAB_143d9f20b;
    }
    if (local_70 == 3) {
      uVar10 = local_90[0]._0_4_;
LAB_143d9f1a9:
      cVar5 = FUN_140bb33a8(param_1,uVar10);
      goto LAB_143d9f20b;
    }
    if (local_70 != 0) {
      puVar9 = &local_68;
      FUN_1400b56fe(puVar9,local_90,3);
      uVar10 = 0;
      if (local_48 != 0) {
        uVar10 = local_68;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_50) {
          puVar9 = (undefined4 *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar3)(puVar9);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
      goto LAB_143d9f1a9;
    }
  }
  cVar5 = *(char *)(param_1 + 0x2c);
LAB_143d9f20b:
  pwVar8 = L"false";
  if (cVar5 != '\0') {
    pwVar8 = L"true";
  }
  FUN_140056680(param_2,pwVar8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar7 = (undefined8 ****)local_90[0];
    if (local_78 < 0x19) {
      ppppuVar7 = local_90;
    }
    (*pcVar3)(ppppuVar7);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(local_90[0]);
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143d9f366 FUN_143d9f366 body=712 status=ok
// SIG undefined FUN_143d9f366(void)

void FUN_143d9f366(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_268 [38];
  char local_242 [2];
  ulonglong local_240 [13];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined2 local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_242[0] = -1;
  puVar3 = (ulonglong *)param_2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,local_242,1);
  }
  else {
    local_242[0] = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  if (local_242[0] == '\0') {
    local_240[0] = 0;
    (**(code **)(*param_2 + 0x150))(param_2,local_240);
    FUN_14621685a(param_1,local_240[0]);
  }
  else if ((((((*(int *)(param_1 + 0x6c) != 0) &&
              (uVar2 = *(uint *)(param_1 + 0x68), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
            && ((plVar5 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x6c))))) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
            (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar4 = *plVar5, lVar4 != 0)))))) &&
          ((local_242[0] == '\x01' && (*(char *)(lVar4 + 0x178) != '\x03')))) {
    local_242[1] = 1;
    local_240[0] = local_240[0] & 0xffffffff00000000;
    local_1d8 = 0;
    local_1d0 = 0x8000000000;
    uStack_1c8 = 0xffffffff;
    local_240[1] = 0;
    local_240[2] = 0;
    local_240[3] = 0;
    local_240[4] = 0;
    local_240[5] = 0;
    local_240[6] = 0;
    local_240[7] = 0;
    local_240[8] = 0;
    local_240[9] = 0;
    local_240[10] = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    local_180 = 0xf;
    local_178 = 1;
    local_174 = 0;
    uStack_16c = 0;
    local_150 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_148 = 0xffffffff;
    local_144 = 0xff00;
    local_140 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0xf;
    local_78 = 1;
    local_74 = 0;
    uStack_6c = 0;
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_48 = 0xffffffff;
    local_44 = 0xff00;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0xffffffffffffffff;
    local_28 = 0;
    FUN_141531246(local_240,param_2,0);
    if (*(longlong *)(lVar4 + 0xc38) != 0) {
      FUN_145d80c3e(*(longlong *)(lVar4 + 0xc38),local_240);
    }
    FUN_146553afa(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d9f62f FUN_143d9f62f body=169 status=ok
// SIG undefined FUN_143d9f62f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d9f62f(void)

{
  _DAT_14cb820c8 = 0;
  if (DAT_14cb820c0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb82088 = 0;
  if (DAT_14cb8208c != 0) {
    FUN_14472eb64(&DAT_14cb82080,0);
  }
  _DAT_14cb820b0 = 0xffffffff;
  _DAT_14cb820a8 = 0;
  if (0x80 < DAT_14cb820ac) {
    DAT_14cb820ac = 0x80;
    FUN_1446efbd8(&DAT_14cb82090,0);
  }
  if (DAT_14cb820a0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb82080 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d9f6d8 FUN_143d9f6d8 body=1071 status=ok
// SIG undefined FUN_143d9f6d8(void)

undefined8
FUN_143d9f6d8(longlong param_1,longlong param_2,undefined8 param_3,char param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  int local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120) == 0) {
    uVar7 = 0;
    goto LAB_143d9fad6;
  }
  plVar9 = *(longlong **)(param_1 + 0x150);
  if (plVar9 != (longlong *)0x0) {
    uVar7 = 0;
    cVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,param_2,0);
    if (cVar5 == '\0') goto LAB_143d9fad6;
  }
  *(longlong *)(param_2 + 0xf0) = param_1;
  FUN_1447a97f4(local_70,*(longlong *)(param_2 + 8) + 0x210);
  lVar6 = *(longlong *)(param_1 + 0xa0);
  uVar10 = (ulonglong)*(uint *)(lVar6 + 0x120);
  if ((int)param_5 < 0) goto LAB_143d9f8d7;
  if ((int)*(uint *)(lVar6 + 0x120) <= (int)param_5) goto LAB_143d9f852;
  lVar3 = *(longlong *)(lVar6 + 0x118);
  lVar8 = (ulonglong)param_5 * 0x150;
  lVar6 = lVar3 + lVar8;
  if (*(int *)(lVar3 + 0x110 + lVar8) == local_70[0]) goto LAB_143d9f79e;
  if ((*(int *)(lVar6 + 0x108) == -1) || (*(longlong *)(lVar6 + 0x18) == 0)) {
LAB_143d9f852:
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar10 = (ulonglong)*(uint *)(lVar6 + 0x120);
    if ((int)param_5 < (int)*(uint *)(lVar6 + 0x120)) {
      lVar3 = *(longlong *)(lVar6 + 0x118) + (ulonglong)param_5 * 0x150;
      iVar2 = *(int *)(*(longlong *)(lVar6 + 0x118) + 0x110 + (ulonglong)param_5 * 0x150);
      if (((iVar2 == 0) || (*(int *)(lVar3 + 0x114) == 0)) || (iVar2 == DAT_14c948000)) {
        if ((*(int *)(lVar3 + 0x108) == -1) || (*(longlong *)(lVar3 + 0x18) == 0))
        goto LAB_143d9fab3;
        if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar8) == 0) goto LAB_143d9fab3;
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(lVar3 + 0x30) * 8 != lVar8);
        }
      }
    }
LAB_143d9f8d7:
    if (0 < (int)uVar10) {
      uVar12 = 0;
      local_78 = param_3;
      do {
        lVar3 = *(longlong *)(lVar6 + 0x118);
        lVar8 = uVar12 * 0x150;
        lVar6 = lVar3 + lVar8;
        if (*(int *)(lVar3 + 0x110 + lVar8) == local_70[0]) goto LAB_143d9f90b;
        if ((*(int *)(lVar6 + 0x108) != -1) && (*(longlong *)(lVar6 + 0x18) != 0)) {
          if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar11) == 0) goto LAB_143d9f997;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar6 + 0x30) * 8 != lVar11);
          }
          pcVar4 = *(code **)(param_1 + 0x50);
          if (pcVar4 == (code *)0x0) {
            if (*(int *)(*(longlong *)(lVar6 + 0x18) + 0x210) == local_70[0]) goto LAB_143d9f90b;
          }
          else {
            plVar9 = *(longlong **)(param_1 + 0x60);
            if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
              plVar9 = (longlong *)(param_1 + 0x70);
            }
            uVar7 = (**(code **)(*plVar9 + 8))();
            cVar5 = (*pcVar4)(uVar7,param_2,lVar3 + lVar8 + 0x10);
            if (cVar5 != '\0') {
LAB_143d9f90b:
              if (*(uint *)(lVar6 + 0xf8) < *(uint *)(lVar6 + 0x138)) {
                local_88 = 0;
                uVar10 = uVar12 & 0xffffffff;
                param_3 = local_78;
                goto LAB_143d9fac4;
              }
            }
          }
        }
LAB_143d9f997:
        uVar12 = uVar12 + 1;
        lVar6 = *(longlong *)(param_1 + 0xa0);
        uVar10 = (ulonglong)*(int *)(lVar6 + 0x120);
        param_3 = local_78;
      } while ((longlong)uVar12 < (longlong)uVar10);
    }
    if ((((param_4 != '\0') || (*(longlong *)(param_2 + 8) == 0)) ||
        (bVar1 = *(byte *)(*(longlong *)(param_2 + 8) + 0x239), bVar1 == 0)) ||
       ((*(char *)(param_1 + 0x138) != '\0' ||
        ((int)((uint)bVar1 + *(int *)(param_1 + 0x9c)) <= *(int *)(param_1 + 0x94))))) {
      if (0 < (int)uVar10) {
        uVar12 = 0;
        do {
          lVar3 = *(longlong *)(lVar6 + 0x118) + uVar12 * 0x150;
          iVar2 = *(int *)(*(longlong *)(lVar6 + 0x118) + 0x110 + uVar12 * 0x150);
          if (((iVar2 == 0) || (*(int *)(lVar3 + 0x114) == 0)) || (iVar2 == DAT_14c948000)) {
            if ((*(int *)(lVar3 + 0x108) == -1) || (*(longlong *)(lVar3 + 0x18) == 0)) {
LAB_143d9faa3:
              local_88 = 0;
              uVar10 = uVar12 & 0xffffffff;
              goto LAB_143d9fac4;
            }
            if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
              lVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar8) == 0) goto LAB_143d9faa3;
                lVar8 = lVar8 + 8;
              } while ((longlong)*(int *)(lVar3 + 0x30) * 8 != lVar8);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != (uVar10 & 0xffffffff));
      }
      local_88 = 1;
      goto LAB_143d9fac4;
    }
    uVar7 = 0;
  }
  else {
    if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar11) == 0) goto LAB_143d9f852;
        lVar11 = lVar11 + 8;
      } while ((longlong)*(int *)(lVar6 + 0x30) * 8 != lVar11);
    }
    pcVar4 = *(code **)(param_1 + 0x50);
    if (pcVar4 == (code *)0x0) {
      if (*(int *)(*(longlong *)(lVar6 + 0x18) + 0x210) == local_70[0]) goto LAB_143d9f79e;
      goto LAB_143d9f852;
    }
    plVar9 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0x60);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar5 = (*pcVar4)(uVar7,param_2,lVar3 + lVar8 + 0x10);
    if (cVar5 == '\0') goto LAB_143d9f852;
LAB_143d9f79e:
    if (*(uint *)(lVar6 + 0x138) <= *(uint *)(lVar6 + 0xf8)) goto LAB_143d9f852;
LAB_143d9fab3:
    local_88 = 0;
    uVar10 = (ulonglong)param_5;
LAB_143d9fac4:
    uVar7 = FUN_143d9fb08(param_1,param_2,uVar10,param_3);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_143d9fad6:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143d9fb08 FUN_143d9fb08 body=1037 status=ok
// SIG undefined FUN_143d9fb08(void)

longlong FUN_143d9fb08(longlong param_1,longlong param_2,uint param_3,longlong *param_4,char param_5
                      )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = 0;
  if ((((int)param_3 < -1) || (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120) == 0)) ||
     (*(int *)(param_2 + 0xf8) == -1)) goto LAB_143d9feae;
  lVar9 = *(longlong *)(param_2 + 8);
  if (lVar9 != 0) {
    if ((longlong)*(int *)(param_2 + 0x20) != 0) {
      lVar11 = 0;
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar7) == 0) goto LAB_143d9feae;
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar7);
    }
    if (param_4 != (longlong *)0x0) {
      bVar10 = 0;
      if (*(char *)(param_2 + 0xfd) == -1) {
        bVar10 = *(byte *)(lVar9 + 0x239);
      }
      if (*(char *)(param_1 + 0x147) == '\0') {
        bVar10 = *(byte *)(lVar9 + 0x239);
      }
      FUN_1447a97f4(local_70,lVar9 + 0x210);
      if (((int)param_3 < 0) ||
         (lVar11 = *(longlong *)(param_1 + 0xa0), *(int *)(lVar11 + 0x120) <= (int)param_3)) {
        if ((param_5 != '\0') || ((bVar10 == 0 || (*(char *)(param_1 + 0x138) != '\0')))) {
          lVar11 = *(longlong *)(param_1 + 0xa0);
          iVar2 = *(int *)(lVar11 + 0x120);
          *(uint *)(lVar11 + 0x120) = param_3 + 1;
          uVar6 = (param_3 + 1) - iVar2;
          if ((uint)(*(int *)(lVar11 + 0x124) - iVar2) < uVar6) {
            FUN_145829ac4((longlong *)(lVar11 + 0x118),iVar2);
          }
          FUN_14119f8b6((longlong)iVar2 * 0x150 + *(longlong *)(lVar11 + 0x118),uVar6);
          lVar11 = *(longlong *)(param_1 + 0xa0);
          goto LAB_143d9fc3f;
        }
LAB_143d9fd8b:
        lVar11 = 0;
      }
      else {
LAB_143d9fc3f:
        lVar9 = (longlong)(int)param_3 * 0x150;
        if (*(uint *)(*(longlong *)(lVar11 + 0x118) + 0x138 + lVar9) <=
            *(uint *)(*(longlong *)(lVar11 + 0x118) + 0xf8 + lVar9)) goto LAB_143d9fd8b;
        uVar6 = *(uint *)(param_2 + 0xe8);
        if (DAT_14c947fe0 == 0) {
          lVar11 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar11);
          DAT_14c947fe0 = lVar11;
        }
        FUN_140045924(DAT_14c947fe0,&local_78,local_70,1);
        if ((longlong)*(int *)(param_1 + 200) != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar11) == local_78) {
              uVar3 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 8 + lVar11);
              goto LAB_143d9fcf8;
            }
            lVar11 = lVar11 + 0xc;
          } while ((longlong)*(int *)(param_1 + 200) * 0xc != lVar11);
        }
        uVar3 = *(uint *)(*(longlong *)(param_2 + 8) + 0x1fc);
LAB_143d9fcf8:
        if (uVar3 < uVar6) {
          *(uint *)(param_2 + 0xe8) = uVar3;
          uVar6 = uVar3;
        }
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) + lVar9;
        if ((*(int *)(lVar7 + 0x108) == -1) || (*(longlong *)(lVar7 + 0x18) == 0)) {
LAB_143d9fd93:
          FUN_1418948b2(lVar7 + 0x10,param_2);
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) + 0x138 + lVar9) = uVar3;
          uVar6 = (uint)bVar10;
          piVar4 = (int *)(param_1 + 0x9c);
        }
        else {
          iVar2 = *(int *)(lVar7 + 0x30);
          if ((longlong)iVar2 != 0) {
            lVar1 = (longlong)iVar2 * 8;
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0x28) + lVar11) == 0) goto LAB_143d9fd93;
              lVar11 = lVar11 + 8;
            } while (lVar1 - lVar11 != 0);
            if (iVar2 != 0) {
              lVar11 = 0;
              lVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0x28) + lVar8) == 0) goto LAB_143d9fea4;
                lVar8 = lVar8 + 8;
              } while (lVar1 - lVar8 != 0);
            }
          }
          if (*(int *)(*(longlong *)(lVar7 + 0x18) + 0x210) != local_70[0]) goto LAB_143d9fd8b;
          piVar4 = (int *)(lVar7 + 0xf8);
        }
        *piVar4 = *piVar4 + uVar6;
        FUN_140705884(*(longlong *)(param_1 + 0xa0),
                      *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) + lVar9);
        if (((((*(int *)(param_1 + 0x140) != 0) &&
              (uVar6 = *(uint *)(param_1 + 0x13c), -1 < (int)uVar6)) && ((int)uVar6 < DAT_14c9647dc)
             ) && ((plVar5 = (longlong *)
                             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                   plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x140))))) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && ((longlong *)*plVar5 != (longlong *)0x0)))
           ) {
          (**(code **)(*(longlong *)*plVar5 + 0x578))();
        }
        lVar11 = *(longlong *)(param_1 + 0xa0);
        if (((-1 < (int)param_3) && (lVar11 != 0)) && ((int)param_3 < *(int *)(lVar11 + 0x120))) {
          FUN_141069ce4(param_1,*(longlong *)(lVar11 + 0x118) + (ulonglong)param_3 * 0x150);
          (**(code **)(*param_4 + 0x70))
                    (param_4,*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) +
                             (ulonglong)param_3 * 0x150 + 0x10,param_1);
          FUN_1413590b2(param_4 + 1,param_1);
          lVar11 = *(longlong *)(param_1 + 0xa0);
        }
        lVar11 = *(longlong *)(lVar11 + 0x118) + lVar9 + 0x10;
      }
LAB_143d9fea4:
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143d9feae;
    }
  }
  lVar11 = 0;
LAB_143d9feae:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 143d9ffb4 FUN_143d9ffb4 body=817 status=ok
// SIG undefined FUN_143d9ffb4(void)

void FUN_143d9ffb4(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_1 == 0) goto LAB_143da025f;
  if ((longlong)(int)param_1[3] != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(param_1[2] + lVar9) == 0) goto LAB_143da025f;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)param_1[3] * 8 != lVar9);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b406f80;
  local_60 = &LAB_143da2612;
  local_88 = &LAB_140255cce;
  local_98 = 0;
  uStack_90 = 0;
  FUN_140255853(param_1,0);
  plVar11 = (longlong *)0x0;
  if (param_3 == '\0') {
LAB_143da01d5:
  }
  else {
    if (param_2 != (longlong *)0x0 && (longlong)(int)uStack_90 != 0) {
      plVar11 = (longlong *)0x0;
      lVar9 = 0;
      do {
        if ((*(byte *)(*(longlong *)(local_98 + lVar9) + 0xc) & 0x40) != 0) {
          uVar6 = (**(code **)(*param_2 + 0x180))(param_2);
          lVar9 = FUN_14088cdf8(uVar6);
          if (lVar9 == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            lVar12 = FUN_140831778();
            local_a0 = *(undefined8 *)(lVar12 + 0x88);
            FUN_14088cfbe(lVar9,&local_b0,param_1);
            plVar11 = local_a8;
            if ((local_b0 != 0) && (cVar4 = FUN_1411bd768(local_b0), cVar4 == '\0')) {
              lVar9 = (**(code **)(*param_2 + 0x180))(param_2);
              if (lVar9 != 0) {
                if (*(longlong *)(lVar9 + 0x1f0) == 0) {
                  lVar12 = lVar9 + 0x460;
                }
                else {
                  lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf8);
                }
                puVar7 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
                *puVar7 = &PTR_FUN_14b410f40;
                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                uVar3 = *(uint *)((longlong)param_2 + 0xc);
                *(uint *)(puVar7 + 1) = uVar3;
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar13 = 0;
                }
                iVar5 = *(int *)(lVar13 + 0x10);
                if (*(int *)(lVar13 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar10 = DAT_14c964868 + 1;
                  bVar14 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar14) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar10);
                  }
                  LOCK();
                  iVar5 = *(int *)(lVar13 + 0x10);
                  bVar14 = iVar5 == 0;
                  if (bVar14) {
                    *(int *)(lVar13 + 0x10) = iVar10;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  if (bVar14) {
                    iVar5 = iVar10;
                  }
                }
                *(int *)((longlong)puVar7 + 0xc) = iVar5;
                FUN_1406fd608(puVar7 + 2,param_1);
                puVar7[0x1d] = local_b0;
                puVar7[0x1e] = local_a8;
                if (local_a8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
                  UNLOCK();
                }
                FUN_140b1330e(lVar12,lVar9,0x2f091180,puVar7);
              }
              goto LAB_143da0202;
            }
          }
          break;
        }
        lVar9 = lVar9 + 0x10;
      } while ((longlong)(int)uStack_90 * 0x10 != lVar9);
      goto LAB_143da01d5;
    }
    plVar11 = (longlong *)0x0;
  }
  lVar9 = local_98;
  if ((int)uStack_90 != 0) {
    lVar12 = (longlong)(int)uStack_90;
    lVar13 = 0;
    do {
      (**(code **)(**(longlong **)(lVar9 + lVar13) + 0x38))(*(longlong **)(lVar9 + lVar13),param_2);
      lVar13 = lVar13 + 0x10;
    } while (lVar12 * 0x10 != lVar13);
  }
LAB_143da0202:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140255aed(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined1 *)0x0) {
    pppuVar8 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar8 = &local_68;
    }
    (*(code *)(*pppuVar8)[2])();
  }
LAB_143da025f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da03ec FUN_143da03ec body=114 status=ok
// SIG undefined FUN_143da03ec(void)

undefined8 FUN_143da03ec(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((((*(char *)(param_1 + 0x78) < '\0') && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (-1 < *(char *)(*(longlong *)(param_1 + 0x40) + 0x60))) &&
     ((cVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(), cVar2 == '\0' &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x120), lVar1 != 0)))) {
    lVar3 = FUN_14081cebe();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),*(undefined1 *)(lVar1 + 0x2dc)) &
              0xffffffffffffff40;
      return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 6);
    }
  }
  return 0;
}



// FUNCTION 143da04a0 FUN_143da04a0 body=256 status=ok
// SIG undefined FUN_143da04a0(void)

void FUN_143da04a0(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158 [192];
  undefined1 *local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  undefined1 *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_98 = (undefined1 *)0x0;
  local_90 = 0x1800000000;
  local_88 = FUN_143da3d42;
  local_78 = 0;
  local_68 = &PTR_LAB_14b4113e0;
  local_60 = param_4;
  local_58 = local_158;
  (**(code **)(*param_1 + 0x48))(param_1,CONCAT71(0x143da3d,*(undefined1 *)(param_4 + 0xc)));
  puVar2 = local_98;
  if (local_98 == (undefined1 *)0x0) {
    puVar2 = local_158;
  }
  lVar1 = (longlong)(int)local_90;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(puVar2 + lVar3) + 0xa08))
                (*(longlong **)(puVar2 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar1 * 8 != lVar3);
  }
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da063b FUN_143da063b body=91 status=ok
// SIG undefined FUN_143da063b(void)

void FUN_143da063b(void)

{
  if (DAT_14cb82330 != 0) {
    if (DAT_14cb82328 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb82328)(DAT_14cb82328,0);
    FUN_1446efa72(&DAT_14cb82328,0,0,0x10);
    DAT_14cb82330 = 0;
  }
  if (DAT_14cb82328 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143da0696 FUN_143da0696 body=31 status=ok
// SIG undefined FUN_143da0696(void)

undefined8 FUN_143da0696(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da06b6 FUN_143da06b6 body=95 status=ok
// SIG undefined FUN_143da06b6(void)

undefined8 * FUN_143da06b6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b410f40;
  plVar3 = (longlong *)param_1[0x1e];
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
  FUN_140368b56(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da0716 FUN_143da0716 body=214 status=ok
// SIG undefined FUN_143da0716(void)

void FUN_143da0716(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (((((*(longlong *)(param_1 + 0xe8) == 0) || (*(int *)(param_1 + 0xc) == 0)) ||
       (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0)))) ||
     ((*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0xc) ||
      ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) goto LAB_143da07dd;
  cVar2 = FUN_1411bd768();
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_143da07e8:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_143da07e8;
      uVar3 = *puVar4;
    }
  }
  FUN_143d9ffb4(param_1 + 0x10,uVar3,0);
LAB_143da07dd:
  *(undefined1 *)(param_2 + 0x60) = 1;
  return;
}



// FUNCTION 143da07ec FUN_143da07ec body=81 status=ok
// SIG undefined FUN_143da07ec(void)

void FUN_143da07ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xe8) = 0;
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143da0832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143da0840 FUN_143da0840 body=76 status=ok
// SIG undefined FUN_143da0840(void)

void FUN_143da0840(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_14081cebe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1409d939c(*(undefined8 *)*param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143da08aa FUN_143da08aa body=12 status=ok
// SIG undefined FUN_143da08aa(void)

void FUN_143da08aa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143da08b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143da08b6 FUN_143da08b6 body=29 status=ok
// SIG undefined FUN_143da08b6(void)

undefined8 FUN_143da08b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da08d4 FUN_143da08d4 body=76 status=ok
// SIG undefined FUN_143da08d4(void)

void FUN_143da08d4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_14081cebe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1409d8d1a(*(undefined8 *)*param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143da093e FUN_143da093e body=12 status=ok
// SIG undefined FUN_143da093e(void)

void FUN_143da093e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143da0947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143da094a FUN_143da094a body=29 status=ok
// SIG undefined FUN_143da094a(void)

undefined8 FUN_143da094a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da0968 FUN_143da0968 body=189 status=ok
// SIG undefined FUN_143da0968(void)

void FUN_143da0968(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0xc))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
        ((lVar2 = *plVar6, lVar2 != 0 && (lVar5 = (longlong)*(int *)(*param_1 + 0x178), lVar5 != 0))
        )))) {
      lVar3 = *(longlong *)(*param_1 + 0x170);
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + 0x540);
        if (lVar4 != 0) {
          FUN_1409804ea(lVar4,*(undefined8 *)(lVar3 + lVar7),0,0,0,0);
        }
        lVar7 = lVar7 + 8;
      } while (lVar5 * 8 != lVar7);
    }
  }
  return;
}



// FUNCTION 143da0a50 FUN_143da0a50 body=29 status=ok
// SIG undefined FUN_143da0a50(void)

undefined8 FUN_143da0a50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da12ca FUN_143da12ca body=228 status=ok
// SIG undefined FUN_143da12ca(void)

void FUN_143da12ca(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x150) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x150;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da13b0 FUN_143da13b0 body=751 status=ok
// SIG undefined FUN_143da13b0(void)

bool FUN_143da13b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_143da168b;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x150;
      } while (lVar11 * 0x150 - lVar12 != 0);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_143da15a5:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_143da15a5;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000143da15f4;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x000143da15f4:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    goto LAB_143da168b;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_143da157e:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000143da1643;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_143da1662;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_143da157e;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_143da1662:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x000143da1643:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_143da168b:
  return iVar3 != param_2;
}



// FUNCTION 143da16a0 FUN_143da16a0 body=234 status=ok
// SIG undefined FUN_143da16a0(void)

void FUN_143da16a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x150;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da178c FUN_143da178c body=1069 status=ok
// SIG undefined FUN_143da178c(void)

void FUN_143da178c(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0x150;
    } while ((longlong)iVar3 * 0x150 - lVar13 != 0);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0x150);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0x150);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_143da1905;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_143da1905:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_143da1b88;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_143da1af3;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_143da1af3:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_143da1b88;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_143da1b88:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da1bba FUN_143da1bba body=496 status=ok
// SIG undefined FUN_143da1bba(void)

void FUN_143da1bba(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da1dac FUN_143da1dac body=723 status=ok
// SIG undefined FUN_143da1dac(void)

undefined8 FUN_143da1dac(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_143da200d;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_143da200d:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143da20cc FUN_143da20cc body=29 status=ok
// SIG undefined FUN_143da20cc(void)

undefined8 FUN_143da20cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da20ea FUN_143da20ea body=255 status=ok
// SIG undefined FUN_143da20ea(void)

void FUN_143da20ea(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined *local_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140265f12();
  local_38 = &DAT_14cb83310;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = &PTR_FUN_14b1828b0;
  FUN_1488d905e(param_2,&local_40);
  FUN_1470913b8(&local_40,*param_1);
  puVar3 = (undefined8 *)*param_1;
  if ((longlong)*(int *)(puVar3 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar3;
    lVar4 = (longlong)*(int *)(puVar3 + 1) * 2;
    do {
      piVar2 = (int *)FUN_1488c9aaa(param_1[1],*puVar5,puVar5);
      *piVar2 = *piVar2 + 1;
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + -2;
    } while (lVar4 != 0);
    puVar3 = (undefined8 *)*param_1;
  }
  *(undefined4 *)(puVar3 + 1) = 0;
  if (*(int *)((longlong)puVar3 + 0xc) != 0x80) {
    FUN_1448759c8(puVar3,0x80);
  }
  local_40 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_28 >> 0x20;
  uStack_28 = uStack_28 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_30,0);
  }
  local_38 = (undefined *)0x0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da221c FUN_143da221c body=29 status=ok
// SIG undefined FUN_143da221c(void)

undefined8 FUN_143da221c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da2266 FUN_143da2266 body=12 status=ok
// SIG undefined FUN_143da2266(void)

void FUN_143da2266(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143da226f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143da2272 FUN_143da2272 body=29 status=ok
// SIG undefined FUN_143da2272(void)

undefined8 FUN_143da2272(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da2314 FUN_143da2314 body=12 status=ok
// SIG undefined FUN_143da2314(void)

void FUN_143da2314(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143da231d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143da2320 FUN_143da2320 body=29 status=ok
// SIG undefined FUN_143da2320(void)

undefined8 FUN_143da2320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da233e FUN_143da233e body=131 status=ok
// SIG undefined FUN_143da233e(void)

void FUN_143da233e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[1];
  (**(code **)(*param_3 + 0x20))(param_3,local_48,*(undefined8 *)*param_1);
  local_38 = param_2;
  local_30 = local_48;
  FUN_1406e263c(lVar1 + 8,local_24,&local_38,0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da23c2 FUN_143da23c2 body=510 status=ok
// SIG undefined FUN_143da23c2(void)

void FUN_143da23c2(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x10);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    _Src = *(void **)((longlong)param_1 + 8);
joined_r0x000143da24e8:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14) < 2) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = uVar3;
      }
      lVar7 = (longlong)(int)uVar6;
    }
    else {
      lVar7 = (longlong)(int)uVar3 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_143da249b;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_143da249b:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 8);
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar6;
      _Src = *(void **)((longlong)param_1 + 8);
      if (uVar6 < 2) goto joined_r0x000143da24e8;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,uVar8,8);
  return;
}



// FUNCTION 143da25c0 FUN_143da25c0 body=81 status=ok
// SIG undefined FUN_143da25c0(void)

ulonglong FUN_143da25c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    lVar2 = FUN_140c3fbf2();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && ((char)param_1[6] == '\x01')) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(undefined1 *)((longlong)param_1 + 0x31)) ^ 1;
    }
  }
  return 0;
}



// FUNCTION 143da262a FUN_143da262a body=89 status=ok
// SIG undefined FUN_143da262a(void)

undefined8 * FUN_143da262a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4110d0;
  if (param_1[0x20] != 0) {
    plVar1 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140368b56(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da2802 FUN_143da2802 body=194 status=ok
// SIG undefined FUN_143da2802(void)

void FUN_143da2802(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 0x14) {
    FUN_1446efa72(param_2,0,0x14,0x10);
    *(undefined4 *)(param_2 + 1) = 0x14;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4110d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  FUN_1406fd608(puVar1 + 5,param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x100);
  puVar1[0x20] = lVar2;
  puVar1[0x22] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x120);
    if (*(undefined8 **)(param_1 + 0x110) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x110);
    }
                    /* WARNING: Could not recover jumptable at 0x000143da28b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 0x22);
    return;
  }
  return;
}



// FUNCTION 143da28c4 FUN_143da28c4 body=194 status=ok
// SIG undefined FUN_143da28c4(void)

void FUN_143da28c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 0x14) {
    FUN_1446efa72(param_2,0,0x14,0x10);
    *(undefined4 *)(param_2 + 1) = 0x14;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4110d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  FUN_1406fd608(puVar1 + 5,param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x100);
  puVar1[0x20] = lVar2;
  puVar1[0x22] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x120);
    if (*(undefined8 **)(param_1 + 0x110) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x110);
    }
                    /* WARNING: Could not recover jumptable at 0x000143da297b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 0x22);
    return;
  }
  return;
}



// FUNCTION 143da2986 FUN_143da2986 body=221 status=ok
// SIG undefined FUN_143da2986(void)

void FUN_143da2986(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _LIST_ENTRY *p_Var3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x14) {
    FUN_1446efa72(param_2 + 1,0,0x14,0x10);
    param_2[1].LockCount = 0x14;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4110d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  FUN_1406fd608(&p_Var1->Flags,param_1 + 0x28);
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x100);
  p_Var1[5].ProcessLocksList.Flink = p_Var3;
  p_Var1[5].EntryCount = 0;
  p_Var1[5].ContentionCount = 0;
  if (p_Var3 != (_LIST_ENTRY *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x120);
    if (*(undefined8 **)(param_1 + 0x110) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x110);
    }
    (**(code **)*puVar4)(puVar4,&p_Var1[5].EntryCount);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143da2a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143da2a6e FUN_143da2a6e body=269 status=ok
// SIG undefined FUN_143da2a6e(void)

undefined8 FUN_143da2a6e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143da2b75;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143da2b75;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143da2b75:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143da2b29;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143da2b7c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143da2b29;
    }
  }
  uVar6 = 0;
LAB_143da2b29:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da2b7c FUN_143da2b7c body=473 status=ok
// SIG undefined FUN_143da2b7c(void)

void FUN_143da2b7c(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)(plVar1 + 0x7c) & 2) == 0) {
    cVar5 = (**(code **)(*plVar1 + 0x650))(plVar1);
    if (cVar5 == '\0') {
      (**(code **)(*plVar1 + 0x5c8))(plVar1,0);
    }
    else {
      (**(code **)(*plVar1 + 0x670))(plVar1,2);
      (**(code **)(*plVar1 + 0x658))(plVar1);
    }
    if (param_1[1] == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_140358aa8(param_1[1] + 0x428);
    }
    plVar1[0xa3] = lVar7;
    pcVar2 = (code *)param_1[0x1c];
    plVar13 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[0x1e];
    }
    uVar8 = (**(code **)(*plVar13 + 8))(plVar13);
    (*pcVar2)(uVar8);
    iVar6 = *(int *)((longlong)plVar1 + 0x3cc);
    *(int *)((longlong)plVar1 + 0x3cc) = iVar6 + 1;
    uVar9 = (ulonglong)(int)plVar1[0x78];
    if ((longlong)uVar9 < 1) {
      *(int *)((longlong)plVar1 + 0x3cc) = iVar6;
    }
    else {
      plVar13 = plVar1 + 0x77;
      bVar11 = false;
      do {
        lVar7 = uVar9 * 0x10 + -8;
        uVar14 = uVar9;
        while (((*(int *)(*plVar13 + lVar7) != 0 &&
                (plVar3 = *(longlong **)(*plVar13 + -8 + lVar7), plVar3 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar3 + 0x60))(), cVar5 != '\0'))) {
          lVar7 = lVar7 + -0x10;
          bVar4 = uVar14 < 2;
          uVar14 = uVar14 - 1;
          if (bVar4) {
            iVar6 = *(int *)((longlong)plVar1 + 0x3cc) + -1;
            *(int *)((longlong)plVar1 + 0x3cc) = iVar6;
            if (!bVar11) {
              return;
            }
            goto LAB_143da2c9f;
          }
        }
        uVar9 = uVar14 - 1;
        bVar11 = true;
      } while (1 < uVar14);
      iVar6 = *(int *)((longlong)plVar1 + 0x3cc) + -1;
      *(int *)((longlong)plVar1 + 0x3cc) = iVar6;
LAB_143da2c9f:
      if (iVar6 < 1) {
        iVar6 = (int)plVar1[0x78];
        iVar10 = iVar6;
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar13 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar13 + (longlong)iVar12 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar13,iVar12);
              FUN_14005b248(plVar13);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar10 = (int)plVar1[0x78];
          } while (iVar12 < iVar10);
        }
        iVar12 = 2;
        if (2 < iVar10 * 2) {
          iVar12 = iVar10 * 2;
        }
        *(int *)(plVar1 + 0x79) = iVar12;
        if ((iVar12 < iVar6) && (*(int *)((longlong)plVar1 + 0x3c4) != iVar10)) {
          FUN_14045812c(plVar13);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143da2d56 FUN_143da2d56 body=29 status=ok
// SIG undefined FUN_143da2d56(void)

undefined8 FUN_143da2d56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da2ef2 FUN_143da2ef2 body=93 status=ok
// SIG undefined FUN_143da2ef2(void)

void FUN_143da2ef2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b411140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da2f50 FUN_143da2f50 body=93 status=ok
// SIG undefined FUN_143da2f50(void)

void FUN_143da2f50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b411140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da2fae FUN_143da2fae body=126 status=ok
// SIG undefined FUN_143da2fae(void)

void FUN_143da2fae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b411140;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143da301d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143da303e FUN_143da303e body=282 status=ok
// SIG undefined FUN_143da303e(void)

undefined8 FUN_143da303e(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143da3152;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143da3152;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = local_30;
  }
  else {
LAB_143da3152:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143da30fe;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      if (param_2 == '\0') {
        FUN_141893b96();
      }
      else {
        FUN_1488c79be(*(undefined8 *)(param_1 + 0x20));
      }
      uVar6 = 1;
      goto LAB_143da30fe;
    }
  }
  uVar6 = 0;
LAB_143da30fe:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da315a FUN_143da315a body=29 status=ok
// SIG undefined FUN_143da315a(void)

undefined8 FUN_143da315a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da32f6 FUN_143da32f6 body=93 status=ok
// SIG undefined FUN_143da32f6(void)

void FUN_143da32f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b411220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4111b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da3354 FUN_143da3354 body=93 status=ok
// SIG undefined FUN_143da3354(void)

void FUN_143da3354(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b411220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4111b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da33b2 FUN_143da33b2 body=126 status=ok
// SIG undefined FUN_143da33b2(void)

void FUN_143da33b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b411220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4111b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143da3421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143da343a FUN_143da343a body=286 status=ok
// SIG undefined FUN_143da343a(void)

undefined8 FUN_143da343a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143da3551;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143da3551;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_143da3551:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143da34ee;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1488c816a(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      uVar6 = 1;
      goto LAB_143da34ee;
    }
  }
  uVar6 = 0;
LAB_143da34ee:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da355a FUN_143da355a body=29 status=ok
// SIG undefined FUN_143da355a(void)

undefined8 FUN_143da355a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da36f6 FUN_143da36f6 body=93 status=ok
// SIG undefined FUN_143da36f6(void)

void FUN_143da36f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b411300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b411290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da3754 FUN_143da3754 body=93 status=ok
// SIG undefined FUN_143da3754(void)

void FUN_143da3754(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b411300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b411290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da37b2 FUN_143da37b2 body=126 status=ok
// SIG undefined FUN_143da37b2(void)

void FUN_143da37b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b411300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b411290;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143da3821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143da383a FUN_143da383a body=275 status=ok
// SIG undefined FUN_143da383a(void)

undefined8 FUN_143da383a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143da3947;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143da3947;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143da3947:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143da38e9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1488c8356(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143da38e9;
    }
  }
  uVar6 = 0;
LAB_143da38e9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da394e FUN_143da394e body=29 status=ok
// SIG undefined FUN_143da394e(void)

undefined8 FUN_143da394e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da3aea FUN_143da3aea body=93 status=ok
// SIG undefined FUN_143da3aea(void)

void FUN_143da3aea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b411300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b411370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da3b48 FUN_143da3b48 body=93 status=ok
// SIG undefined FUN_143da3b48(void)

void FUN_143da3b48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b411300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b411370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143da3ba6 FUN_143da3ba6 body=126 status=ok
// SIG undefined FUN_143da3ba6(void)

void FUN_143da3ba6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b411300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b411370;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143da3c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143da3c2e FUN_143da3c2e body=275 status=ok
// SIG undefined FUN_143da3c2e(void)

undefined8 FUN_143da3c2e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143da3d3b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143da3d3b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143da3d3b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143da3cdd;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1488c841e(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143da3cdd;
    }
  }
  uVar6 = 0;
LAB_143da3cdd:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da3d42 FUN_143da3d42 body=118 status=ok
// SIG undefined FUN_143da3d42(void)

void FUN_143da3d42(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = param_2[0x1d];
  if ((((lVar2 != 0) && (plVar3 = (longlong *)*param_1, *param_2 == *plVar3)) &&
      ((*(uint *)((longlong)param_2 + 0xc) & *(uint *)(plVar3 + 2)) != 0)) &&
     (((int)plVar3[1] == 0 || ((int)param_2[3] == (int)plVar3[1])))) {
    lVar4 = param_1[1];
    iVar1 = *(int *)(lVar4 + 200);
    *(uint *)(lVar4 + 200) = iVar1 + 1U;
    if (*(uint *)(lVar4 + 0xcc) < iVar1 + 1U) {
      FUN_147e214d8(lVar4,iVar1);
    }
    lVar5 = *(longlong *)(lVar4 + 0xc0);
    if (*(longlong *)(lVar4 + 0xc0) == 0) {
      lVar5 = lVar4;
    }
    *(longlong *)(lVar5 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 143da3de2 FUN_143da3de2 body=29 status=ok
// SIG undefined FUN_143da3de2(void)

undefined8 FUN_143da3de2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143da3dff FUN_143da3dff body=1582 status=ok
// SIG undefined FUN_143da3dff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143da3dff(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = "AssetRegistry";
  uStack_30 = 0xd;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb81d68 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14cb81d70);
  if (cVar1 == '\0') {
    _DAT_14cb81d70 = 0;
    uRam000000014cb81d78 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_38 = "bone";
  uStack_30 = 4;
  uStack_2c = uStack_2c & 0xffffff00;
  FUN_14001a6c0(&local_38,1);
  _DAT_14cb81d80 = 0x47efffffe0000000;
  _DAT_14cb81d88 = 0x47efffffe0000000;
  _DAT_14cb81d90 = 0x47efffffe0000000;
  _DAT_14cb81d98 = 0x47efffffe0000000;
  _DAT_14cb81da0 = 0x47efffffe0000000;
  _DAT_14cb81da8 = 0x47efffffe0000000;
  _DAT_14cb81db0 = 0x47efffffe0000000;
  _DAT_14cb81db8 = 0x47efffffe0000000;
  _DAT_14cb81dc4 = 0;
  FUN_14052b5e0(&DAT_14cb81dc0,"default_attribute_effect",0);
  _DAT_14cb81dd0 = "default_attribute_effect";
  _DAT_14cb81ddc = 0;
  FUN_14052b5e0(&DAT_14cb81dd8,"attributeeffects",0);
  _DAT_14cb81de8 = "attributeeffects";
  _DAT_14cb81df4 = 0;
  FUN_14052b5e0(&DAT_14cb81df0,"inv_aspect",0);
  _DAT_14cb81e00 = "inv_aspect";
  local_38 = "priority";
  uStack_30 = 8;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb81e08 = (ulonglong)uVar2;
  _DAT_14cb81e14 = 0;
  FUN_14052b5e0(&DAT_14cb81e10,"stat_modifiers",0);
  _DAT_14cb81e20 = "stat_modifiers";
  _DAT_14cb81e2c = 0;
  FUN_14052b5e0(&DAT_14cb81e28,"mode_mask",0);
  _DAT_14cb81e38 = "mode_mask";
  _DAT_14cb81e44 = 0;
  FUN_14052b5e0(&DAT_14cb81e40,"usemodebitmask",0);
  _DAT_14cb81e50 = "usemodebitmask";
  _DAT_14cb81e5c = 0;
  FUN_14052b5e0(&DAT_14cb81e58,"stattag",0);
  _DAT_14cb81e68 = "stattag";
  _DAT_14cb81e74 = 0;
  FUN_14052b5e0(&DAT_14cb81e70,"stattagname",0);
  _DAT_14cb81e80 = "stattagname";
  _DAT_14cb81e8c = 0;
  FUN_14052b5e0(&DAT_14cb81e88,"modifiervalue",0);
  _DAT_14cb81e98 = "modifiervalue";
  DAT_14cb81ea0 = 0;
  atexit((_func_5014 *)&LAB_143d9f34d);
  FUN_1446f470e(&DAT_14cb82320,L"GbxInventoryChannel",1);
  _DAT_14cb82060 = &DAT_14c872bc8;
  _DAT_14cb82068 = L"InventoryEffectTypes";
  FUN_1446f470e(&DAT_14cb82070,L"Type",1);
  DAT_14cb82078 = 0;
  DAT_14cb820a0 = 0;
  _DAT_14cb820a8 = 0;
  DAT_14cb82080 = 0;
  _DAT_14cb82088 = 0;
  _DAT_14cb820ac = 0xffffffff00000080;
  _DAT_14cb820b4 = 0;
  DAT_14cb820c0 = 0;
  _DAT_14cb820c8 = 0;
  atexit(FUN_143d9f62f);
  _DAT_14cb820e0 = &LAB_143d9ff16;
  _DAT_14cb820e8 = 0x439a0000;
  DAT_14cb820ec = 1;
  DAT_14cb820d8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb820d8;
  atexit((_func_5014 *)&LAB_143d9ff1b);
  _DAT_14cb82100 = &LAB_143d9ff4f;
  _DAT_14cb82108 = 0x43998000;
  DAT_14cb8210c = 1;
  DAT_14cb820f8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb820f8;
  atexit((_func_5014 *)&LAB_143d9ff54);
  local_38 = (char *)0xfe028e14cfd07738;
  uStack_30 = 0x44efe6a3;
  uStack_2c = 0xc682f1f9;
  _DAT_14cb82118 = 0xcfd07738;
  uRam000000014cb8211c = 0xfe028e14;
  uRam000000014cb82120 = 0x44efe6a3;
  uRam000000014cb82124 = 0xc682f1f9;
  FUN_141005458(&local_38,0,L"InventoryBodyData",0);
  atexit((_func_5014 *)&LAB_143da02e6);
  _DAT_14cb821d4 = 0;
  FUN_14052b5e0(&DAT_14cb821d0,&DAT_149e377fe,0);
  _DAT_14cb821e0 = &DAT_149e377fe;
  _DAT_14cb821ec = 0;
  FUN_14052b5e0(&DAT_14cb821e8,"particles",0);
  _DAT_14cb821f8 = "particles";
  _DAT_14cb82204 = 0;
  FUN_14052b5e0(&DAT_14cb82200,"particles_collection",0);
  _DAT_14cb82210 = "particles_collection";
  _DAT_14cb8221c = 0;
  FUN_14052b5e0(&DAT_14cb82218,"socket",0);
  _DAT_14cb82228 = "socket";
  _DAT_14cb82234 = 0;
  FUN_14052b5e0(&DAT_14cb82230,"scope_socket",0);
  _DAT_14cb82240 = "scope_socket";
  _DAT_14cb8224c = 0;
  FUN_14052b5e0(&DAT_14cb82248,&DAT_14acb8ec8,0);
  _DAT_14cb82258 = &DAT_14acb8ec8;
  _DAT_14cb82264 = 0;
  FUN_14052b5e0(&DAT_14cb82260,"visibility",0);
  _DAT_14cb82270 = "visibility";
  _DAT_14cb8227c = 0;
  FUN_14052b5e0(&DAT_14cb82278,"mode_mask",0);
  _DAT_14cb82288 = "mode_mask";
  _DAT_14cb82294 = 0;
  FUN_14052b5e0(&DAT_14cb82290,&DAT_14b411478,0);
  _DAT_14cb822a0 = &DAT_14b411478;
  _DAT_14cb822ac = 0;
  FUN_14052b5e0(&DAT_14cb822a8,"flags",0);
  _DAT_14cb822b8 = "flags";
  _DAT_14cb822c4 = 0;
  FUN_14052b5e0(&DAT_14cb822c0,"rel_loc",0);
  _DAT_14cb822d0 = "rel_loc";
  _DAT_14cb822dc = 0;
  FUN_14052b5e0(&DAT_14cb822d8,"rel_rot",0);
  _DAT_14cb822e8 = "rel_rot";
  _DAT_14cb822f4 = 0;
  FUN_14052b5e0(&DAT_14cb822f0,"rel_scale",0);
  _DAT_14cb82300 = "rel_scale";
  _DAT_14cb8230c = 0;
  FUN_14052b5e0(&DAT_14cb82308,"auto_activate_mode_mask",0);
  _DAT_14cb82318 = "auto_activate_mode_mask";
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da4430 FUN_143da4430 body=41 status=ok
// SIG undefined FUN_143da4430(void)

void FUN_143da4430(void)

{
  DAT_14cb823a8 = 0;
  if (DAT_14cb823a0 != 0) {
    FUN_1400020a8();
  }
  FUN_14597b4c8();
  return;
}



// FUNCTION 143da445a FUN_143da445a body=25 status=ok
// SIG undefined FUN_143da445a(void)

longlong FUN_143da445a(longlong param_1)

{
  return (ulonglong)*(ushort *)(param_1 + 0x158) * 0x20 + *(longlong *)(DAT_14cb848c0 + 0x3a8);
}



// FUNCTION 143da4474 FUN_143da4474 body=22 status=ok
// SIG undefined FUN_143da4474(void)

longlong FUN_143da4474(longlong param_1)

{
  return (ulonglong)*(ushort *)(param_1 + 0x4c) * 0x20 + *(longlong *)(DAT_14cb848c0 + 0x3a8);
}



// FUNCTION 143da448a FUN_143da448a body=47 status=ok
// SIG undefined FUN_143da448a(void)

void FUN_143da448a(void)

{
  DAT_14cb82460._0_4_ = 0;
  if (DAT_14cb82458 != 0) {
    FUN_1400020a8();
  }
  FUN_140b786e4(&DAT_14cb82418);
  return;
}



// FUNCTION 143da44ba FUN_143da44ba body=7231 status=ok
// SIG undefined FUN_143da44ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143da44ba(longlong param_1,undefined8 param_2,int param_3,longlong *param_4,
                  longlong param_5,undefined8 *param_6,longlong *param_7,longlong param_8,
                  uint param_9)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 ***_Src;
  undefined ****ppppuVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  void *pvVar17;
  byte bVar18;
  undefined8 ****ppppuVar19;
  undefined ***pppuVar20;
  undefined *****pppppuVar21;
  undefined *_Src_00;
  undefined *puVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  code *pcVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  uint *puVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_208 [40];
  uint *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  uint local_1c0;
  int local_1bc;
  longlong local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  undefined *local_198;
  uint *local_190;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 ***local_178;
  int local_170;
  undefined4 local_16c;
  ushort local_160;
  byte local_158;
  undefined1 local_150 [16];
  undefined1 *local_140;
  int local_138;
  uint local_134;
  int local_130 [2];
  undefined **local_128;
  undefined *local_120;
  longlong local_118;
  ulonglong uStack_110;
  undefined1 local_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined ****local_d8;
  undefined *local_d0;
  undefined ***local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1bc = param_3;
  local_1b0 = param_2;
  if ((*(longlong *)(param_1 + 0x400) == 0) || (*(int *)(param_1 + 0x398) < 1)) goto LAB_143da5ec2;
  local_1a0 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb82880) && (FUN_144b3d300(&DAT_14cb82880), DAT_14cb82880 == -1)) {
    DAT_14cb82870 = (undefined8 *)0x0;
    _DAT_14cb82878 = 0x4000000000;
    atexit((_func_5014 *)&LAB_143da60fa);
    _Init_thread_footer(&DAT_14cb82880);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb82f50) && (FUN_144b3d300(&DAT_14cb82f50), DAT_14cb82f50 == -1)) {
    _DAT_14cb82888 = 0.0;
    DAT_14cb8288c = 0;
    DAT_14cb82e90 = (undefined8 *)0x0;
    _DAT_14cb82e98 = 0x4000000000;
    DAT_14cb82ea8 = (uint *)0x0;
    _DAT_14cb82eb0 = 0x4000000000;
    _DAT_14cb82eb8 = 0xffffffff;
    DAT_14cb82f40 = (undefined *)0x0;
    _DAT_14cb82f48 = 0;
    atexit(FUN_143da610b);
    _Init_thread_footer(&DAT_14cb82f50);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb82fc0) && (FUN_144b3d300(&DAT_14cb82fc0), DAT_14cb82fc0 == -1)) {
    _DAT_14cb82f88 = 0;
    uRam000000014cb82f90 = 0;
    _DAT_14cb82f78 = 0;
    uRam000000014cb82f80 = 0;
    _DAT_14cb82f68 = 0;
    uRam000000014cb82f70 = 0;
    _DAT_14cb82f98 = 0xf00000d0;
    _DAT_14cb82fa0 = 0;
    _DAT_14cb82fa8 = 0x3f800000;
    DAT_14cb82fb0 = 0;
    uRam000000014cb82fb8 = 0;
    _DAT_14cb82f58 = &DAT_100000001;
    _DAT_14cb82f60 = 0x3f000000;
    atexit((_func_5014 *)&LAB_143da613a);
    _Init_thread_footer(&DAT_14cb82fc0);
  }
  local_130[0] = local_1bc;
  FUN_140265f12();
  local_120 = &DAT_14cb83310;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = &PTR_FUN_14b1828b0;
  local_e8 = (undefined1 *)0x0;
  local_e0 = 0x800000000;
  if (param_5 != 0) {
    FUN_1405dc634(&local_128,
                  (ulonglong)*(ushort *)(param_5 + 0x158) * 0x20 +
                  *(longlong *)(DAT_14cb848c0 + 0x3a8));
    FUN_143835568(local_108,*(undefined4 *)(param_5 + 0x100),1);
  }
  if (param_8 != 0) {
    FUN_1405dc634(&local_128,param_8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb82fd8) && (FUN_144b3d300(&DAT_14cb82fd8), DAT_14cb82fd8 == -1)) {
    DAT_14cb82fc8 = (longlong *)0x0;
    _DAT_14cb82fd0 = 0;
    atexit((_func_5014 *)&LAB_143da614b);
    _Init_thread_footer(&DAT_14cb82fd8);
  }
  bVar39 = (longlong)_DAT_14cb82fd0 < 0;
  _DAT_14cb82fd0 = _DAT_14cb82fd0 & 0xffffffff00000000;
  if (bVar39) {
    FUN_1488d3796(&DAT_14cb82fc8);
  }
  local_138 = *(int *)(param_1 + 0x398);
  local_140 = (undefined1 *)0x0;
  local_134 = 0x80;
  uVar24 = local_138 + 0x1f;
  if (0x1f < uVar24) {
    if (uVar24 < 0xa0) {
      puVar16 = local_150;
LAB_143da4714:
      uVar24 = uVar24 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1446efa72(&local_140,0,uVar24 >> 5,4);
      local_134 = uVar24 & 0xffffffe0;
      puVar16 = local_150;
      if (local_140 != (undefined1 *)0x0) {
        puVar16 = local_140;
      }
      if (uVar24 < 0x120) goto LAB_143da4714;
      uVar24 = (uVar24 >> 5) << 2;
    }
    memset(puVar16,0,(ulonglong)uVar24);
    iVar9 = local_138 + 0x1f;
    if (-1 < local_138) {
      iVar9 = local_138;
    }
    if (local_138 % 0x20 != 0) {
      puVar16 = local_140;
      if (local_140 == (undefined1 *)0x0) {
        puVar16 = local_150;
      }
      bVar18 = -(char)(local_138 % 0x20);
      *(uint *)(puVar16 + (longlong)(iVar9 >> 5) * 4) =
           (uint)(*(int *)(puVar16 + (longlong)(iVar9 >> 5) * 4) << (bVar18 & 0x1f)) >>
           (bVar18 & 0x1f);
    }
  }
  uVar28 = _DAT_14cb82fd0;
  local_1d0 = param_1;
  if (param_6 != (undefined8 *)0x0) {
    uVar24 = *(uint *)(param_6 + 1);
    if (0 < (longlong)(int)uVar24) {
      iVar9 = DAT_14cb82fd0;
      lVar27 = (longlong)DAT_14cb82fd0;
      _DAT_14cb82fd0 = CONCAT44(DAT_14cb82fd4,DAT_14cb82fd0 + uVar24);
      if (DAT_14cb82fd4 - iVar9 < uVar24) {
        FUN_140feb7c0(&DAT_14cb82fc8,uVar28 & 0xffffffff);
      }
      memcpy(DAT_14cb82fc8 + lVar27 * 2,(void *)*param_6,(longlong)(int)uVar24 << 4);
      FUN_140265f12();
      local_d0 = &DAT_14cb83310;
      local_c8 = (undefined ***)0x0;
      uStack_c0 = 0;
      local_d8 = (undefined ****)&PTR_FUN_14b1828b0;
      if (0 < DAT_14cb82fd0) {
        local_1d8 = param_1 + 0x3d8;
        lVar27 = 0;
LAB_143da47f5:
        local_1e0 = (uint *)DAT_14cb82fc8[lVar27 * 2];
        local_1b8 = lVar27;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb82468) && (FUN_144b3d300(), DAT_14cb82468 == -1)) {
          DAT_14cb82410 = 0xffffffff;
          _DAT_14cb82438 = 0;
          _DAT_14cb82440 = 0;
          _DAT_14cb82418 = 0;
          uRam000000014cb82420 = 0;
          _DAT_14cb82444 = 0xffffffff00000080;
          _DAT_14cb8244c = 0;
          DAT_14cb82458 = 0;
          DAT_14cb82460._0_4_ = 0;
          atexit(FUN_143da448a);
          _Init_thread_footer();
        }
        if (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4)) {
          lVar27 = *(longlong *)(local_1e0 + 0x10);
          uVar24 = (uint)((ulonglong)lVar27 >> 0x10);
          uVar8 = (uint)lVar27 & 0xffff;
          lVar31 = *(longlong *)(param_1 + 0x3e0);
          if (*(longlong *)(param_1 + 0x3e0) == 0) {
            lVar31 = local_1d8;
          }
          iVar9 = *(int *)(lVar31 + (ulonglong)
                                    (*(int *)(param_1 + 1000) - 1U &
                                    (int)((ulonglong)lVar27 >> 0x20) +
                                    ((uint)lVar27 << 0x10 | uVar8) +
                                    (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              lVar31 = *(longlong *)(param_1 + 0x3a0) + (longlong)iVar9 * 0x68;
              if (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar9 * 0x68) == lVar27)
              goto LAB_143da48be;
              iVar9 = *(int *)(lVar31 + 0x60);
            } while (iVar9 != -1);
          }
        }
        lVar31 = 0;
LAB_143da48be:
        piVar25 = (int *)(lVar31 + 8);
        if (lVar31 == 0) {
          piVar25 = (int *)0x0;
        }
        if (piVar25 == (int *)0x0) {
          piVar25 = &DAT_14cb82410;
        }
        iVar9 = *piVar25;
        puVar16 = local_140;
        if (local_140 == (undefined1 *)0x0) {
          puVar16 = local_150;
        }
        iVar23 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar23 = iVar9;
        }
        *(uint *)(puVar16 + (longlong)(iVar23 >> 5) * 4) =
             *(uint *)(puVar16 + (longlong)(iVar23 >> 5) * 4) | 1 << ((byte)iVar9 & 0x1f);
        if (local_1e0 != (uint *)0x0) {
          lVar27 = (ulonglong)*(ushort *)((longlong)local_1e0 + 0x4e) * 0x20;
          puVar22 = *(undefined **)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar27);
          if (puVar22 != (undefined *)0x0) {
            lVar27 = *(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar27;
            uVar24 = *(uint *)(lVar27 + 0x18);
            if ((longlong)(int)uVar24 != 0) {
              lVar27 = *(longlong *)(lVar27 + 0x10);
              lVar31 = 0;
              do {
                if (*(longlong *)(lVar27 + lVar31) != 0) {
                  if (local_d0 != puVar22) goto LAB_143da49df;
                  uVar8 = uVar24;
                  if ((int)(uint)uStack_c0 < (int)uVar24) {
                    uVar8 = (uint)uStack_c0;
                  }
                  if ((int)uVar8 < 1) goto LAB_143da49b7;
                  uVar28 = 0;
                  goto LAB_143da49a2;
                }
                lVar31 = lVar31 + 8;
              } while ((longlong)(int)uVar24 * 8 - lVar31 != 0);
            }
          }
        }
        goto LAB_143da4c48;
      }
      local_d8 = (undefined ****)&DAT_14a171d50;
      goto LAB_143da4d25;
    }
  }
  goto LAB_143da4d43;
  while (uVar28 = uVar28 + 1, uVar8 != uVar28) {
LAB_143da49a2:
    if ((*(ulonglong *)(lVar27 + uVar28 * 8) & ~(ulonglong)local_c8[uVar28]) != 0)
    goto LAB_143da49df;
  }
LAB_143da49b7:
  if ((int)(uint)uStack_c0 < (int)uVar24) {
    lVar31 = 0;
    do {
      if (*(longlong *)(lVar27 + (longlong)(int)(uint)uStack_c0 * 8 + lVar31 * 8) != 0)
      goto LAB_143da49df;
      lVar31 = lVar31 + 1;
    } while (uVar24 - (uint)uStack_c0 != (int)lVar31);
  }
LAB_143da4c48:
  param_1 = local_1d0;
  lVar27 = local_1b8 + 1;
  if (DAT_14cb82fd0 <= lVar27) goto LAB_143da4ce1;
  goto LAB_143da47f5;
LAB_143da49df:
  FUN_1405dc634(&local_d8);
  uVar28 = (longlong)*piVar25;
  if (0 < (longlong)*piVar25) {
    do {
      uVar36 = uVar28 - 1;
      puVar16 = local_140;
      if (local_140 == (undefined1 *)0x0) {
        puVar16 = local_150;
      }
      local_1a8 = uVar28;
      if ((*(uint *)(puVar16 + (uVar36 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar36 & 0x1f) & 1) == 0) {
        local_1c8 = *(longlong *)(local_1d0 + 0x3f0);
        uVar24 = *(uint *)(local_1c8 + 4 + uVar36 * 8);
        if (uVar24 != 0) {
          uVar8 = *(uint *)(local_1c8 + uVar36 * 8);
          lVar27 = *(longlong *)(local_1d0 + 0x400);
          uVar28 = 0;
          lVar31 = DAT_14cb848c0;
LAB_143da4a3d:
          uVar38 = _DAT_14cb82fd0;
          lVar29 = *(longlong *)((ulonglong)uVar8 * 8 + lVar27 + uVar28 * 8);
          lVar34 = *(longlong *)(lVar31 + 0x3a8);
          lVar33 = (ulonglong)*(ushort *)(lVar29 + 0x4c) * 0x20;
          lVar32 = (ulonglong)*(ushort *)((longlong)local_1e0 + 0x4e) * 0x20;
          if (*(longlong *)(lVar34 + 8 + lVar33) == *(longlong *)(lVar34 + 8 + lVar32)) {
            lVar33 = lVar33 + lVar34;
            lVar32 = lVar32 + lVar34;
            uVar10 = *(uint *)(lVar33 + 0x18);
            uVar2 = *(uint *)(lVar32 + 0x18);
            uVar4 = uVar2;
            if ((int)uVar10 < (int)uVar2) {
              uVar4 = uVar10;
            }
            if (0 < (int)uVar4) {
              uVar30 = 0;
              do {
                if ((*(ulonglong *)(*(longlong *)(lVar32 + 0x10) + uVar30 * 8) &
                    ~*(ulonglong *)(*(longlong *)(lVar33 + 0x10) + uVar30 * 8)) != 0)
                goto LAB_143da4bdd;
                uVar30 = uVar30 + 1;
              } while (uVar4 != uVar30);
            }
            if ((int)uVar10 < (int)uVar2) {
              lVar33 = 0;
              do {
                if (*(longlong *)
                     ((longlong)(int)uVar10 * 8 + *(longlong *)(lVar32 + 0x10) + lVar33 * 8) != 0)
                goto LAB_143da4bdd;
                lVar33 = lVar33 + 1;
              } while (uVar2 - uVar10 != (int)lVar33);
            }
            lVar32 = (ulonglong)*(ushort *)(lVar29 + 0x4e) * 0x20;
            puVar22 = *(undefined **)(lVar34 + 8 + lVar32);
            if (puVar22 != (undefined *)0x0) {
              lVar34 = lVar34 + lVar32;
              uVar10 = *(uint *)(lVar34 + 0x18);
              if ((longlong)(int)uVar10 != 0) {
                lVar34 = *(longlong *)(lVar34 + 0x10);
                lVar32 = 0;
                do {
                  if (*(longlong *)(lVar34 + lVar32) != 0) {
                    if (local_120 == puVar22) {
                      uVar2 = uVar10;
                      if ((int)(uint)uStack_110 < (int)uVar10) {
                        uVar2 = (uint)uStack_110;
                      }
                      if ((int)uVar2 < 1) goto LAB_143da4b6e;
                      uVar30 = 0;
                      goto LAB_143da4b59;
                    }
                    break;
                  }
                  lVar32 = lVar32 + 8;
                } while ((longlong)(int)uVar10 * 8 - lVar32 != 0);
              }
            }
LAB_143da4af9:
            lVar34 = (longlong)DAT_14cb82fd0;
            if (lVar34 != 0) {
              lVar32 = lVar34 << 4;
              plVar37 = DAT_14cb82fc8;
              do {
                if (*plVar37 == lVar29) {
                  if (plVar37 != (longlong *)0x0) goto LAB_143da4bdd;
                  break;
                }
                plVar37 = plVar37 + 2;
                lVar32 = lVar32 + -0x10;
              } while (lVar32 != 0);
            }
            uVar24 = DAT_14cb82fd0 + 1;
            _DAT_14cb82fd0 = CONCAT44(DAT_14cb82fd4,uVar24);
            if (DAT_14cb82fd4 < uVar24) {
              FUN_140feb7c0(&DAT_14cb82fc8,uVar38 & 0xffffffff);
            }
            plVar37 = DAT_14cb82fc8;
            DAT_14cb82fc8[lVar34 * 2] = lVar29;
            *(undefined4 *)(plVar37 + lVar34 * 2 + 1) = 0x3f800000;
            uVar24 = *(uint *)(local_1c8 + 4 + uVar36 * 8);
            lVar31 = DAT_14cb848c0;
          }
          goto LAB_143da4bdd;
        }
      }
LAB_143da4c40:
      uVar28 = uVar36;
    } while (1 < (longlong)local_1a8);
  }
  goto LAB_143da4c48;
  while (uVar30 = uVar30 + 1, uVar2 != uVar30) {
LAB_143da4b59:
    if ((*(ulonglong *)(lVar34 + uVar30 * 8) & ~*(ulonglong *)(local_118 + uVar30 * 8)) != 0)
    goto LAB_143da4af9;
  }
LAB_143da4b6e:
  if ((int)(uint)uStack_110 < (int)uVar10) {
    lVar32 = 0;
    do {
      if (*(longlong *)(lVar34 + (longlong)(int)(uint)uStack_110 * 8 + lVar32 * 8) != 0)
      goto LAB_143da4af9;
      lVar32 = lVar32 + 1;
    } while (uVar10 - (uint)uStack_110 != (int)lVar32);
  }
LAB_143da4bdd:
  uVar28 = uVar28 + 1;
  if (uVar24 <= uVar28) goto LAB_143da4c40;
  goto LAB_143da4a3d;
  while (uVar30 = uVar30 + 1, uVar10 != uVar30) {
LAB_143da5188:
    if ((*(ulonglong *)(lVar29 + uVar30 * 8) & ~*(ulonglong *)(local_118 + uVar30 * 8)) != 0)
    goto LAB_143da5290;
  }
LAB_143da51a1:
  if ((int)(uint)uStack_110 < (int)uVar8) {
    lVar34 = 0;
    do {
      if (*(longlong *)(lVar29 + (longlong)(int)(uint)uStack_110 * 8 + lVar34 * 8) != 0)
      goto LAB_143da5290;
      lVar34 = lVar34 + 1;
    } while (uVar8 - (uint)uStack_110 != (int)lVar34);
  }
LAB_143da51aa:
  pppppuVar21 = (undefined *****)(puVar14 + uVar38 * 2);
  lVar29 = (ulonglong)*(ushort *)(lVar27 + 0x50) * 0x20;
  if (local_120 == *(undefined **)(lVar31 + 8 + lVar29)) {
    lVar31 = lVar31 + lVar29;
    uVar8 = *(uint *)(lVar31 + 0x18);
    if ((int)(uint)uStack_110 < (int)uVar8) {
      uVar8 = (uint)uStack_110;
    }
    if (0 < (int)uVar8) {
      uVar30 = 0;
      do {
        if ((*(ulonglong *)(local_118 + uVar30 * 8) &
            *(ulonglong *)(*(longlong *)(lVar31 + 0x10) + uVar30 * 8)) != 0) goto LAB_143da524c;
        uVar30 = uVar30 + 1;
      } while (uVar8 != uVar30);
    }
  }
  cVar6 = FUN_14189455e(local_130,lVar27,param_5,(param_9 & 2) >> 1);
  if (cVar6 == '\0') {
LAB_143da524c:
    if (uVar28 != (_DAT_14cb82878 & 0xffffffff)) {
      iVar9 = DAT_14cb82878 - (int)uVar28;
      if (0 < iVar9) {
        iVar9 = 1;
      }
      memmove(pppppuVar21,puVar14 + (longlong)(DAT_14cb82878 - iVar9) * 2,(longlong)iVar9 << 4);
    }
    _DAT_14cb82878 = CONCAT44(DAT_14cb8287c,DAT_14cb82878 + -1);
  }
  else {
    local_d8 = (undefined ****)pppppuVar21;
    FUN_1407c4470(&DAT_14cb82888,*(undefined4 *)(pppppuVar21 + 1),&local_d8);
  }
LAB_143da5290:
  bVar39 = uVar28 < 2;
  uVar28 = uVar38;
  if (bVar39) goto LAB_143da52bb;
  goto LAB_143da50dd;
code_r0x000143da5854:
  lVar34 = lVar34 + 8;
  if (lVar29 * 8 == lVar34) goto LAB_143da585d;
  goto LAB_143da584d;
LAB_143da4ce1:
  bVar39 = uStack_c0._4_4_ != 0;
  local_d8 = (undefined ****)&DAT_14a171d50;
  uStack_c0 = (ulonglong)uStack_c0._4_4_ << 0x20;
  if (bVar39) {
    FUN_140115c12(&local_c8,0);
  }
LAB_143da4d25:
  local_d0 = (undefined *)0x0;
  if (local_c8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
LAB_143da4d43:
  puVar35 = *(uint **)(param_1 + 0x3f0);
  iVar9 = *(int *)(param_1 + 0x3c8);
  if (iVar9 == 0) {
    uVar36 = 1;
    uVar28 = 0;
    iVar23 = 0;
    iVar7 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x3c0);
    if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0x3b0);
    }
    uVar24 = *puVar13;
    if (uVar24 == 0) {
      iVar23 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar23 = iVar9 + -1;
      }
      uVar28 = 0;
      uVar36 = (ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        uVar36 = uVar28;
      }
      iVar23 = 0;
      do {
        if (uVar36 == uVar28) goto LAB_143da5e4f;
        iVar23 = iVar23 + 0x20;
        uVar24 = puVar13[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar28 = 0;
      iVar23 = 0;
    }
    uVar36 = (ulonglong)(-uVar24 & uVar24);
    uVar38 = uVar36 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar7 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar7) {
      iVar7 = iVar9;
    }
  }
  if (iVar7 < iVar9) {
    uVar24 = 0xffffffff;
    local_198 = &DAT_14cb84068;
    local_1c0 = 0;
    local_190 = (uint *)(param_1 + 0x3b0);
    do {
      local_1b8 = CONCAT44(local_1b8._4_4_,uVar24);
      local_1c8 = CONCAT44(local_1c8._4_4_,iVar23);
      local_1e0 = puVar35;
      local_1a8 = uVar28;
      if (puVar35[1] != 0) {
        puVar35 = (uint *)&DAT_14cb82f58;
        if (param_5 != 0) {
          puVar35 = (uint *)FUN_140a96514(param_5,(longlong)iVar7 * 0x68 +
                                                  *(longlong *)(local_1d0 + 0x3a0));
        }
        FUN_1448729ea(puVar35 + 2,&local_178,local_1b0);
        if (local_158 == 3) {
          pcVar26 = rand_exref;
          fVar40 = local_178._0_4_;
          bVar18 = 3;
        }
        else {
          FUN_1400b56fe(&local_d8,&local_178,3);
          fVar40 = 0.0;
          if ((byte)local_b8 != 0) {
            fVar40 = local_d8._0_4_;
          }
          pcVar26 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_b8 * 0x120))
          ;
          if (pcVar26 != (code *)0x0) {
            pppppuVar21 = &local_d8;
            if (0x18 < (ushort)uStack_c0) {
              pppppuVar21 = (undefined *****)local_d8;
            }
            (*pcVar26)(pppppuVar21);
          }
          pcVar26 = rand_exref;
          bVar18 = local_158;
          if (0x18 < (ushort)uStack_c0) {
            FUN_1400020a8(local_d8);
            bVar18 = local_158;
          }
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar18 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar19 = &local_178;
          if (0x18 < local_160) {
            ppppuVar19 = (undefined8 ****)local_178;
          }
          (*pcVar3)(ppppuVar19);
        }
        if (0x18 < local_160) {
          FUN_1400020a8(local_178);
        }
        uVar24 = *puVar35;
        if (uVar24 == 0) {
          if ((int)puVar35[1] < 1) {
            uVar24 = 0;
          }
          else {
            puVar16 = local_140;
            if (local_140 == (undefined1 *)0x0) {
              puVar16 = local_150;
            }
            uVar24 = (uint)((*(uint *)(puVar16 + (ulonglong)(local_1c0 >> 5) * 4) >>
                             (local_1c0 & 0x1f) & 1) != 0);
          }
        }
        if ((int)uVar24 < (int)puVar35[1]) {
          do {
            uVar8 = (*pcVar26)();
            if (fVar40 < (float)(uVar8 & 0x7fff) / 32767.0) break;
            uVar24 = uVar24 + 1;
          } while ((int)uVar24 < (int)puVar35[1]);
        }
        puVar13 = local_1e0;
        if (0 < (int)uVar24) {
          if ((int)local_1e0[1] < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4();
          }
          uVar8 = DAT_14cb8287c;
          _DAT_14cb82878 = (ulonglong)DAT_14cb8287c << 0x20;
          if ((int)uVar8 < (int)local_1e0[1]) {
            FUN_14619bcfc();
          }
          if (puVar13[1] != 0) {
            plVar37 = (longlong *)((ulonglong)*puVar13 * 8 + *(longlong *)(local_1d0 + 0x400));
            uVar8 = 0;
            do {
              lVar27 = *plVar37;
              local_d8 = (undefined ****)((ulonglong)local_d8 & 0xffffffffffffff00);
              cVar6 = FUN_140a96144(puVar35,lVar27,&local_d8);
              if ((cVar6 != '\0') &&
                 ((((param_9 & 2) != 0 || ((char)local_d8 != '\0')) ||
                  (iVar9 = FUN_14005faec(lVar27,local_1b0,param_9 & 0xffffff01), iVar9 <= local_1bc)
                  ))) {
                if ((param_7 != (longlong *)0x0) && ((longlong)(int)param_7[1] != 0)) {
                  lVar31 = 0;
                  do {
                    if (*(longlong *)(*param_7 + lVar31) == lVar27) goto LAB_143da508d;
                    lVar31 = lVar31 + 8;
                  } while ((longlong)(int)param_7[1] * 8 != lVar31);
                }
                fVar40 = (float)FUN_140a963a0(lVar27,local_1b0);
                uVar28 = _DAT_14cb82878;
                if (0.0 < fVar40) {
                  lVar31 = (longlong)DAT_14cb82878;
                  uVar10 = DAT_14cb82878 + 1;
                  _DAT_14cb82878 = CONCAT44(DAT_14cb8287c,uVar10);
                  if (DAT_14cb8287c < uVar10) {
                    FUN_1488d1ad8(uVar28 & 0xffffffff);
                  }
                  puVar14 = DAT_14cb82870;
                  if (DAT_14cb82870 == (undefined8 *)0x0) {
                    puVar14 = &DAT_14cb82470;
                  }
                  puVar14[lVar31 * 2] = lVar27;
                  *(float *)(puVar14 + lVar31 * 2 + 1) = fVar40;
                  puVar13 = local_1e0;
                }
              }
LAB_143da508d:
              plVar37 = plVar37 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 < puVar13[1]);
          }
          uVar28 = _DAT_14cb82878 & 0xffffffff;
          while (0 < (int)uVar28) {
            _DAT_14cb82888 = 0.0;
            FUN_1409966c4(&DAT_14cb82890);
            uVar28 = (longlong)DAT_14cb82878;
            if (0 < (longlong)DAT_14cb82878) {
LAB_143da50dd:
              uVar38 = uVar28 - 1;
              puVar14 = DAT_14cb82870;
              if (DAT_14cb82870 == (undefined8 *)0x0) {
                puVar14 = &DAT_14cb82470;
              }
              lVar27 = puVar14[uVar38 * 2];
              lVar31 = *(longlong *)(DAT_14cb848c0 + 0x3a8);
              lVar29 = (ulonglong)*(ushort *)(lVar27 + 0x4e) * 0x20;
              puVar22 = *(undefined **)(lVar31 + 8 + lVar29);
              if (puVar22 != (undefined *)0x0) {
                lVar29 = lVar29 + lVar31;
                uVar8 = *(uint *)(lVar29 + 0x18);
                if ((longlong)(int)uVar8 != 0) {
                  lVar29 = *(longlong *)(lVar29 + 0x10);
                  lVar34 = 0;
                  do {
                    if (*(longlong *)(lVar29 + lVar34) != 0) {
                      if (local_120 != puVar22) goto LAB_143da5290;
                      uVar10 = uVar8;
                      if ((int)(uint)uStack_110 < (int)uVar8) {
                        uVar10 = (uint)uStack_110;
                      }
                      if ((int)uVar10 < 1) goto LAB_143da51a1;
                      uVar30 = 0;
                      goto LAB_143da5188;
                    }
                    lVar34 = lVar34 + 8;
                  } while ((longlong)(int)uVar8 * 8 - lVar34 != 0);
                }
              }
              goto LAB_143da51aa;
            }
LAB_143da52bb:
            uVar28 = 0;
            pcVar26 = rand_exref;
            if (DAT_14cb82fd0 < 1) {
LAB_143da5655:
              local_1d8 = 0;
            }
            else {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb84118) &&
                 (FUN_144b3d300(&DAT_14cb84118), DAT_14cb84118 == -1)) {
                DAT_14cb83a50 = 0.0;
                DAT_14cb83a54 = 0;
                DAT_14cb84058 = (undefined *)0x0;
                _DAT_14cb84060 = 0x4000000000;
                DAT_14cb84070 = (undefined *)0x0;
                _DAT_14cb84078 = 0x4000000000;
                DAT_14cb84080 = 0xffffffff;
                DAT_14cb84108 = (undefined *)0x0;
                DAT_14cb84110 = 0;
                atexit(FUN_143dae565);
                _Init_thread_footer(&DAT_14cb84118);
              }
              DAT_14cb83a50 = 0.0;
              FUN_1409966c4(&DAT_14cb83a58,DAT_14cb82e98 - _DAT_14cb82ebc);
              plVar37 = DAT_14cb82fc8;
              local_178 = (undefined8 ****)0x0;
              lVar27 = (longlong)DAT_14cb82fd0;
              local_170 = DAT_14cb82fd0;
              if (lVar27 == 0) {
                local_16c = 0;
                local_c8 = (undefined ***)0x0;
                local_b8 = &PTR_FUN_14b4123f0;
                local_b0 = (void *)0x0;
                local_a8 = 0;
LAB_143da540a:
                local_b0 = (void *)0x0;
                local_b8 = &PTR_FUN_14b4123f0;
                local_c8 = (undefined ***)0x0;
                local_a4 = 0;
              }
              else {
                FUN_141894126(&local_178,_DAT_14cb82fd0 & 0xffffffff,0);
                memcpy(local_178,plVar37,lVar27 << 4);
                _Src = local_178;
                lVar27 = (longlong)local_170;
                local_d8 = (undefined ****)0x0;
                local_c8 = (undefined ***)0x0;
                local_b8 = &PTR_FUN_14b4123f0;
                local_b0 = (void *)0x0;
                local_a8 = local_170;
                if (lVar27 == 0) goto LAB_143da540a;
                FUN_141894126(&local_b0,local_170,0);
                memcpy(local_b0,_Src,lVar27 << 4);
              }
              local_d8 = (undefined ****)FUN_143dae594;
              if (DAT_14cb82eb0 == 0) {
                uVar30 = 1;
                uVar38 = 0;
                iVar23 = 0;
                iVar9 = 0;
              }
              else {
                puVar35 = DAT_14cb82ea8;
                if (DAT_14cb82ea8 == (uint *)0x0) {
                  puVar35 = &DAT_14cb82ea0;
                }
                uVar8 = *puVar35;
                uVar38 = 0;
                iVar23 = 0;
                if (uVar8 == 0) {
                  iVar9 = DAT_14cb82eb0 + 0x1e;
                  if (-1 < DAT_14cb82eb0 + -1) {
                    iVar9 = DAT_14cb82eb0 + -1;
                  }
                  uVar38 = 0;
                  uVar30 = (ulonglong)(uint)(iVar9 >> 5);
                  if (iVar9 >> 5 < 1) {
                    uVar30 = uVar38;
                  }
                  do {
                    if (uVar30 == uVar38) goto LAB_143da55f2;
                    iVar23 = iVar23 + 0x20;
                    uVar8 = puVar35[uVar38 + 1];
                    uVar38 = uVar38 + 1;
                  } while (uVar8 == 0);
                }
                uVar30 = (ulonglong)(-uVar8 & uVar8);
                uVar1 = uVar30 * 2 + 1;
                lVar27 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                iVar9 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                if (DAT_14cb82eb0 <= iVar9) {
                  iVar9 = DAT_14cb82eb0;
                }
              }
              if (iVar9 < DAT_14cb82eb0) {
                uVar8 = 0xffffffff;
                do {
                  ppppuVar5 = local_d8;
                  puVar14 = DAT_14cb82e90;
                  if (DAT_14cb82e90 == (undefined8 *)0x0) {
                    puVar14 = &DAT_14cb82890;
                  }
                  local_17c = *(undefined4 *)(puVar14 + (longlong)iVar9 * 3 + 1);
                  local_188 = puVar14[(longlong)iVar9 * 3];
                  pppuVar20 = local_c8;
                  if (local_c8 == (undefined ***)0x0) {
                    pppuVar20 = &local_b8;
                  }
                  uVar15 = (*(code *)(*pppuVar20)[1])();
                  (*(code *)ppppuVar5)(uVar15,&local_188,&local_17c);
                  uVar8 = ~(uint)uVar30 & uVar8;
                  puVar35 = DAT_14cb82ea8;
                  if (DAT_14cb82ea8 == (uint *)0x0) {
                    puVar35 = &DAT_14cb82ea0;
                  }
                  iVar9 = (int)uVar38;
                  lVar27 = (longlong)iVar9;
                  uVar10 = puVar35[lVar27] & uVar8;
                  if (uVar10 == 0) {
                    iVar7 = DAT_14cb82eb0 + 0x1e;
                    if (-1 < DAT_14cb82eb0 + -1) {
                      iVar7 = DAT_14cb82eb0 + -1;
                    }
                    iVar7 = iVar7 >> 5;
                    iVar11 = iVar7;
                    if (iVar7 < iVar9) {
                      iVar11 = iVar9;
                    }
                    if (iVar7 <= iVar9) break;
                    lVar31 = 0;
                    while( true ) {
                      iVar23 = iVar23 + 0x20;
                      uVar10 = puVar35[lVar27 + lVar31 + 1];
                      if (uVar10 != 0) break;
                      lVar31 = lVar31 + 1;
                      if (iVar11 - lVar27 == lVar31) goto LAB_143da55f2;
                    }
                    uVar38 = (ulonglong)(iVar9 + (int)lVar31 + 1);
                    uVar8 = 0xffffffff;
                  }
                  uVar30 = (ulonglong)(-uVar10 & uVar10);
                  uVar1 = uVar30 * 2 + 1;
                  lVar27 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                    }
                  }
                  iVar9 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                } while (iVar9 < DAT_14cb82eb0);
              }
LAB_143da55f2:
              if ((undefined *****)local_d8 != (undefined *****)0x0) {
                pppuVar20 = local_c8;
                if (local_c8 == (undefined ***)0x0) {
                  pppuVar20 = &local_b8;
                }
                (*(code *)(*pppuVar20)[2])();
              }
              pcVar26 = rand_exref;
              if ((undefined8 ****)local_178 != (undefined8 ****)0x0) {
                FUN_1400020a8();
              }
              iVar9 = DAT_14cb84110;
              if (DAT_14cb84060 == DAT_14cb84080._4_4_) goto LAB_143da5655;
              if (DAT_14cb84060 - DAT_14cb84080._4_4_ == DAT_14cb82e98 - _DAT_14cb82ebc)
              goto LAB_143da5655;
              DAT_14cb8288c = DAT_14cb83a54;
              _DAT_14cb82888 = DAT_14cb83a50;
              lVar27 = (longlong)DAT_14cb84110;
              FUN_140437db6(&DAT_14cb82ec0,0,DAT_14cb84110,4);
              if (lVar27 != 0) {
                puVar22 = &DAT_14cb82ec0;
                if (DAT_14cb82f40 != (undefined *)0x0) {
                  puVar22 = DAT_14cb82f40;
                }
                _Src_00 = &DAT_14cb84088;
                if (DAT_14cb84108 != (undefined *)0x0) {
                  _Src_00 = DAT_14cb84108;
                }
                memcpy(puVar22,_Src_00,lVar27 << 2);
              }
              _DAT_14cb82f48 = iVar9;
              uVar8 = DAT_14cb84060;
              FUN_14099696a(&DAT_14cb82890,_DAT_14cb84060 & 0xffffffff);
              iVar9 = DAT_14cb82e98;
              _DAT_14cb82e98 = CONCAT44(DAT_14cb82e9c,DAT_14cb82e98 + uVar8);
              if ((uint)(DAT_14cb82e9c - iVar9) < uVar8) {
                FUN_1488d112c(&DAT_14cb82890);
              }
              _DAT_14cb82eb8 = DAT_14cb84080;
              uVar10 = DAT_14cb84078 + 0x1fU & 0xffffffe0;
              pvVar17 = (void *)(ulonglong)uVar10;
              iVar9 = (int)(_DAT_14cb82eb0 >> 0x20);
              _DAT_14cb82eb0 = _DAT_14cb82eb0 & 0xffffffff00000000;
              if ((iVar9 < (int)uVar10) || (0x40 < iVar9)) {
                if ((int)uVar10 < 0x41) {
                  uVar10 = 0x40;
                }
                _DAT_14cb82eb0 = (ulonglong)uVar10 << 0x20;
                pvVar17 = (void *)FUN_1401cad60(&DAT_14cb82ea0,0);
              }
              _DAT_14cb82eb0 = CONCAT44(DAT_14cb82eb4,DAT_14cb84078);
              if (DAT_14cb84078 != 0) {
                puVar22 = DAT_14cb84070;
                if (DAT_14cb84070 == (undefined *)0x0) {
                  puVar22 = local_198;
                }
                puVar35 = &DAT_14cb82ea0;
                if (DAT_14cb82ea8 != (uint *)0x0) {
                  puVar35 = DAT_14cb82ea8;
                }
                pvVar17 = memcpy(puVar35,puVar22,
                                 (ulonglong)(DAT_14cb84078 + 0x1fU >> 3 & 0xfffffffc));
              }
              local_1d8 = CONCAT71((int7)((ulonglong)pvVar17 >> 8),1);
              pcVar26 = rand_exref;
              if (uVar8 != 0) {
                puVar22 = DAT_14cb84058;
                if (DAT_14cb84058 == (undefined *)0x0) {
                  puVar22 = &DAT_14cb83a58;
                }
                puVar14 = DAT_14cb82e90;
                if (DAT_14cb82e90 == (undefined8 *)0x0) {
                  puVar14 = &DAT_14cb82890;
                }
                memcpy(puVar14,puVar22,(longlong)(int)uVar8 * 0x18);
                pcVar26 = rand_exref;
              }
            }
            uVar8 = (*pcVar26)();
            fVar40 = ((float)(uVar8 & 0x7fff) / 32767.0) * _DAT_14cb82888;
            uVar38 = 1;
            iVar23 = 0;
            iVar9 = 0;
            if (DAT_14cb82eb0 != 0) {
              puVar35 = DAT_14cb82ea8;
              if (DAT_14cb82ea8 == (uint *)0x0) {
                puVar35 = &DAT_14cb82ea0;
              }
              uVar8 = *puVar35;
              uVar28 = 0;
              iVar23 = 0;
              if (uVar8 == 0) {
                iVar9 = DAT_14cb82eb0 + 0x1e;
                if (-1 < DAT_14cb82eb0 + -1) {
                  iVar9 = DAT_14cb82eb0 + -1;
                }
                uVar28 = 0;
                uVar38 = (ulonglong)(uint)(iVar9 >> 5);
                if (iVar9 >> 5 < 1) {
                  uVar38 = uVar28;
                }
                iVar23 = 0;
                do {
                  if (uVar38 == uVar28) goto LAB_143da5ccc;
                  iVar23 = iVar23 + 0x20;
                  uVar8 = puVar35[uVar28 + 1];
                  uVar28 = uVar28 + 1;
                } while (uVar8 == 0);
              }
              uVar38 = (ulonglong)(-uVar8 & uVar8);
              uVar30 = uVar38 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar9 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if (DAT_14cb82eb0 <= iVar9) {
                iVar9 = DAT_14cb82eb0;
              }
            }
            if (iVar9 == DAT_14cb82eb0) break;
            uVar24 = uVar24 - 1;
            puVar14 = DAT_14cb82e90;
            if (DAT_14cb82e90 == (undefined8 *)0x0) {
              puVar14 = &DAT_14cb82890;
            }
            iVar7 = DAT_14cb82eb0 + 0x1e;
            if (-1 < DAT_14cb82eb0 + -1) {
              iVar7 = DAT_14cb82eb0 + -1;
            }
            iVar7 = iVar7 >> 5;
            puVar35 = DAT_14cb82ea8;
            if (DAT_14cb82ea8 == (uint *)0x0) {
              puVar35 = &DAT_14cb82ea0;
            }
            uVar8 = 0xffffffff;
            fVar41 = 0.0;
            while( true ) {
              bVar39 = fVar41 <= fVar40;
              fVar41 = fVar41 + *(float *)(puVar14 + (longlong)iVar9 * 3 + 1);
              if ((bVar39) && (fVar40 <= fVar41)) break;
              uVar8 = uVar8 & ~(uint)uVar38;
              iVar9 = (int)uVar28;
              lVar27 = (longlong)iVar9;
              uVar10 = puVar35[lVar27] & uVar8;
              if (uVar10 == 0) {
                iVar11 = iVar7;
                if (iVar7 < iVar9) {
                  iVar11 = iVar9;
                }
                if (iVar7 <= iVar9) goto LAB_143da5ccc;
                lVar31 = 0;
                while( true ) {
                  iVar23 = iVar23 + 0x20;
                  uVar10 = puVar35[lVar27 + lVar31 + 1];
                  if (uVar10 != 0) break;
                  lVar31 = lVar31 + 1;
                  if (iVar11 - lVar27 == lVar31) goto LAB_143da5ccc;
                }
                uVar28 = (ulonglong)(iVar9 + (int)lVar31 + 1);
                uVar8 = 0xffffffff;
              }
              uVar38 = (ulonglong)(-uVar10 & uVar10);
              uVar30 = uVar38 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar9 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if (DAT_14cb82eb0 <= iVar9) goto LAB_143da5ccc;
            }
            plVar37 = (longlong *)puVar14[(longlong)iVar9 * 3];
            lVar27 = *plVar37;
            FUN_1405dc634();
            if ((param_5 != 0) && (0 < (int)local_e0)) {
              lVar31 = (ulonglong)*(ushort *)(lVar27 + 0x4c) * 0x20;
              if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar31) != 0) {
                lVar31 = *(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar31;
                lVar29 = (longlong)*(int *)(lVar31 + 0x18);
                if (lVar29 != 0) {
                  lVar34 = 0;
LAB_143da584d:
                  if (*(longlong *)(*(longlong *)(lVar31 + 0x10) + lVar34) == 0)
                  goto code_r0x000143da5854;
                  lVar34 = 0;
                  lVar29 = 0;
                  lVar31 = DAT_14cb848c0;
                  iVar9 = (int)local_e0;
                  do {
                    cVar6 = FUN_1405d595e(*(longlong *)(param_5 + 0xf8) + lVar34,
                                          (ulonglong)*(ushort *)(lVar27 + 0x4c) * 0x20 +
                                          *(longlong *)(lVar31 + 0x3a8));
                    if (cVar6 != '\0') {
                      puVar16 = local_e8;
                      if (local_e8 == (undefined1 *)0x0) {
                        puVar16 = local_108;
                      }
                      *(int *)(puVar16 + lVar29 * 4) = *(int *)(puVar16 + lVar29 * 4) + 1;
                      lVar31 = DAT_14cb848c0;
                      iVar9 = (int)local_e0;
                    }
                    lVar29 = lVar29 + 1;
                    lVar34 = lVar34 + 0x38;
                  } while (lVar29 < iVar9);
                }
              }
            }
LAB_143da585d:
            if ((char)local_1d8 != '\0') {
              if ((longlong)DAT_14cb82fd0 != 0) {
                iVar9 = 1;
                lVar31 = 0;
                lVar27 = 0;
                do {
                  if (*(longlong *)((longlong)DAT_14cb82fc8 + lVar31) == *plVar37) {
                    if (iVar9 != 0) {
                      iVar9 = DAT_14cb82fd0 - iVar9;
                      if (iVar9 != 0) {
                        if (0 < iVar9) {
                          iVar9 = 1;
                        }
                        memmove(DAT_14cb82fc8 + (lVar27 >> 0x20) * 2,
                                DAT_14cb82fc8 + (longlong)(DAT_14cb82fd0 - iVar9) * 2,
                                (longlong)iVar9 << 4);
                      }
                      _DAT_14cb82fd0 = CONCAT44(DAT_14cb82fd4,DAT_14cb82fd0 + -1);
                    }
                    break;
                  }
                  lVar27 = lVar27 + 0x100000000;
                  iVar9 = iVar9 + 1;
                  lVar31 = lVar31 + 0x10;
                } while ((longlong)DAT_14cb82fd0 << 4 != lVar31);
              }
            }
            iVar9 = (int)local_1a0[1];
            *(uint *)(local_1a0 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)local_1a0 + 0xc) < iVar9 + 1U) {
              FUN_140a96716(local_1a0,iVar9);
            }
            lVar27 = *plVar37;
            *(longlong *)(*local_1a0 + (longlong)iVar9 * 8) = lVar27;
            puVar14 = DAT_14cb82870;
            if (DAT_14cb82870 == (undefined8 *)0x0) {
              puVar14 = &DAT_14cb82470;
            }
            uVar28 = (ulonglong)DAT_14cb82878;
            if (uVar28 == 0) {
              uVar28 = 0;
            }
            else {
              iVar9 = 1;
              lVar29 = 0;
              lVar31 = 0;
              do {
                if (*(longlong *)((longlong)puVar14 + lVar29) == lVar27) {
                  if (iVar9 != 0) {
                    iVar9 = DAT_14cb82878 - iVar9;
                    if (iVar9 != 0) {
                      if (0 < iVar9) {
                        iVar9 = 1;
                      }
                      memmove(puVar14 + (lVar31 >> 0x20) * 2,
                              puVar14 + (longlong)(DAT_14cb82878 - iVar9) * 2,(longlong)iVar9 << 4);
                    }
                    uVar28 = (ulonglong)(DAT_14cb82878 - 1U);
                    _DAT_14cb82878 = CONCAT44(DAT_14cb8287c,DAT_14cb82878 - 1U);
                  }
                  break;
                }
                lVar31 = lVar31 + 0x100000000;
                iVar9 = iVar9 + 1;
                lVar29 = lVar29 + 0x10;
              } while (uVar28 << 4 != lVar29);
            }
            if (uVar24 == 0) break;
          }
        }
      }
LAB_143da5ccc:
      uVar24 = (uint)local_1b8 & ~(uint)uVar36;
      puVar35 = *(uint **)(local_1d0 + 0x3c0);
      if (*(uint **)(local_1d0 + 0x3c0) == (uint *)0x0) {
        puVar35 = local_190;
      }
      iVar9 = *(int *)(local_1d0 + 0x3c8);
      iVar7 = (int)local_1a8;
      lVar27 = (longlong)iVar7;
      uVar8 = puVar35[lVar27] & uVar24;
      uVar28 = local_1a8;
      iVar23 = (int)local_1c8;
      if (uVar8 == 0) {
        iVar11 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar11 = iVar9 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar7) {
          iVar12 = iVar7;
        }
        if (iVar11 <= iVar7) break;
        lVar31 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar8 = puVar35[lVar27 + lVar31 + 1];
          if (uVar8 != 0) break;
          lVar31 = lVar31 + 1;
          if (iVar12 - lVar27 == lVar31) goto LAB_143da5e4f;
        }
        uVar24 = 0xffffffff;
        uVar28 = (ulonglong)(iVar7 + (int)lVar31 + 1);
      }
      puVar35 = local_1e0 + 2;
      uVar36 = (ulonglong)(-uVar8 & uVar8);
      uVar38 = uVar36 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar7 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      local_1c0 = local_1c0 + 1;
    } while (iVar7 < iVar9);
  }
LAB_143da5e4f:
  if (local_140 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_128 = (undefined **)&DAT_14a171d50;
  uVar28 = uStack_110 >> 0x20;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  if ((int)uVar28 != 0) {
    FUN_140115c12(&local_118,0);
  }
  local_120 = (undefined *)0x0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
LAB_143da5ec2:
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da610b FUN_143da610b body=47 status=ok
// SIG undefined FUN_143da610b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143da610b(void)

{
  _DAT_14cb82f48 = 0;
  if (DAT_14cb82f40 != 0) {
    FUN_1400020a8();
  }
  FUN_1465540d4(&DAT_14cb82890);
  return;
}



// FUNCTION 143da615c FUN_143da615c body=22 status=ok
// SIG undefined FUN_143da615c(void)

longlong FUN_143da615c(longlong param_1)

{
  return (ulonglong)*(ushort *)(param_1 + 0x4e) * 0x20 + *(longlong *)(DAT_14cb848c0 + 0x3a8);
}



// FUNCTION 143da6172 FUN_143da6172 body=840 status=ok
// SIG undefined FUN_143da6172(void)

void FUN_143da6172(longlong param_1,undefined8 param_2,longlong param_3,int param_4,longlong param_5
                  ,longlong param_6,undefined8 param_7,longlong *param_8,uint param_9)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_98 [32];
  uint local_78;
  int local_74;
  longlong local_70;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_8 + 1) = 0;
  local_74 = param_4;
  if (*(int *)((longlong)param_8 + 0xc) < 0) {
    FUN_1407d6a5a(param_8,0);
  }
  if ((*(longlong *)(param_1 + 0x400) != 0) &&
     (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4))) {
    uVar10 = (uint)((ulonglong)param_3 >> 0x10);
    uVar9 = (uint)param_3 & 0xffff;
    lVar14 = param_1 + 0x3d8;
    if (*(longlong *)(param_1 + 0x3e0) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x3e0);
    }
    iVar7 = *(int *)(lVar14 + (ulonglong)
                              (*(int *)(param_1 + 1000) - 1U &
                              (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar9) +
                              (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar14 = *(longlong *)(param_1 + 0x3a0) + (longlong)iVar7 * 0x68;
        if (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar7 * 0x68) == param_3) {
          if ((int *)(lVar14 + 8) != (int *)0x0 && lVar14 != 0) {
            lVar2 = *(longlong *)(param_1 + 0x3f0);
            lVar14 = (longlong)*(int *)(lVar14 + 8);
            if (*(int *)(lVar2 + 4 + lVar14 * 8) != 0) {
              plVar15 = (longlong *)
                        (*(longlong *)(param_1 + 0x400) +
                        (ulonglong)*(uint *)(lVar2 + lVar14 * 8) * 8);
              local_70 = param_5 + 8;
              uVar10 = 0;
              local_78 = (param_9 & 2) >> 1;
              goto LAB_143da62c5;
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar14 + 0x60);
      } while (iVar7 != -1);
    }
  }
LAB_143da648e:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143da62c5:
  lVar3 = *plVar15;
  if ((param_9 & 4) != 0) goto LAB_143da6432;
  fVar16 = (float)FUN_140a963a0(lVar3,param_2);
  if (0.0 < fVar16) {
    if ((param_9 & 8) == 0) {
      lVar4 = *(longlong *)(DAT_14cb848c0 + 0x3a8);
      lVar8 = (ulonglong)*(ushort *)(lVar3 + 0x4e) * 0x20;
      lVar11 = *(longlong *)(lVar4 + 8 + lVar8);
      if (lVar11 != 0) {
        lVar8 = lVar8 + lVar4;
        uVar9 = *(uint *)(lVar8 + 0x18);
        if ((longlong)(int)uVar9 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x10);
          lVar12 = 0;
          do {
            if (*(longlong *)(lVar8 + lVar12) != 0) {
              if (*(longlong *)(param_5 + 0x10) != lVar11) goto LAB_143da645c;
              uVar1 = *(uint *)(param_5 + 0x20);
              uVar5 = uVar9;
              if ((int)uVar1 < (int)uVar9) {
                uVar5 = uVar1;
              }
              if ((int)uVar5 < 1) goto LAB_143da639d;
              uVar13 = 0;
              goto LAB_143da637c;
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)(int)uVar9 * 8 - lVar12 != 0);
        }
      }
      goto LAB_143da63a6;
    }
    goto LAB_143da63e4;
  }
  goto LAB_143da645c;
  while (uVar13 = uVar13 + 1, uVar5 != uVar13) {
LAB_143da637c:
    if ((*(ulonglong *)(lVar8 + uVar13 * 8) &
        ~*(ulonglong *)(*(longlong *)(param_5 + 0x18) + uVar13 * 8)) != 0) goto LAB_143da645c;
  }
LAB_143da639d:
  if ((int)uVar1 < (int)uVar9) {
    lVar11 = 0;
    do {
      if (*(longlong *)(lVar8 + (longlong)(int)uVar1 * 8 + lVar11 * 8) != 0) goto LAB_143da645c;
      lVar11 = lVar11 + 1;
    } while (uVar9 - uVar1 != (int)lVar11);
  }
LAB_143da63a6:
  cVar6 = FUN_1405d595e(local_70,lVar4 + (ulonglong)*(ushort *)(lVar3 + 0x50) * 0x20);
  if ((cVar6 == '\0') && (cVar6 = FUN_14189455e(param_5,lVar3,param_7,local_78), cVar6 != '\0')) {
LAB_143da63e4:
    local_61 = '\0';
    if (((param_6 == 0) || (cVar6 = FUN_140a96144(param_6,lVar3,&local_61), cVar6 != '\0')) &&
       ((((param_9 & 2) != 0 || (local_61 != '\0')) ||
        (iVar7 = FUN_14005faec(lVar3,param_2,param_9 & 0xffffff01), iVar7 <= local_74)))) {
LAB_143da6432:
      iVar7 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar7 + 1U) {
        FUN_140a96716(param_8,iVar7);
      }
      *(longlong *)(*param_8 + (longlong)iVar7 * 8) = lVar3;
    }
  }
LAB_143da645c:
  plVar15 = plVar15 + 1;
  uVar10 = uVar10 + 1;
  if (*(uint *)(lVar2 + 4 + lVar14 * 8) <= uVar10) goto LAB_143da648e;
  goto LAB_143da62c5;
}



// FUNCTION 143da64cc FUN_143da64cc body=1502 status=ok
// SIG undefined FUN_143da64cc(void)

void FUN_143da64cc(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  size_t _Size;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  int *local_78;
  longlong local_70;
  undefined **local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar13 = *(longlong *)(param_2 + 0x60);
    if (lVar13 != 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(longlong *)(param_1 + 0x60) = lVar13;
    if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) {
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    uVar10 = FUN_14477b664();
    uVar10 = FUN_14477b664(uVar10);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  }
  bVar8 = *(byte *)(param_1 + 0x150);
  if ((bVar8 & 4) == 0) {
    bVar8 = bVar8 & 0xf3 | *(byte *)(param_2 + 0x150) & 8;
    *(byte *)(param_1 + 0x150) = bVar8;
  }
  if ((bVar8 & 1) == 0) {
    *(byte *)(param_1 + 0x150) = bVar8 & 0xfc | *(byte *)(param_2 + 0x150) & 2;
  }
  if (param_3 == '\0') {
    if ((*(longlong *)(param_1 + 0x130) == 0) && (*(longlong *)(param_2 + 0x130) != 0)) {
      *(longlong *)(param_1 + 0x130) = *(longlong *)(param_2 + 0x130);
    }
    if ((*(longlong *)(param_1 + 0x138) == 0) && (*(longlong *)(param_2 + 0x138) != 0)) {
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_2 + 0x138);
    }
    lVar11 = DAT_14cb848c0;
    lVar13 = DAT_14cb848c0 + 0x3a8;
    local_68 = (undefined **)&DAT_14a171d50;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = *(undefined8 *)
                (*(longlong *)(DAT_14cb848c0 + 0x3a8) +
                 (ulonglong)*(ushort *)(param_1 + 0x158) * 0x20 + 8);
    FUN_1406022fe(&local_58);
    local_68 = &PTR_FUN_14b1828b0;
    FUN_1405dc634(&local_68,
                  (ulonglong)*(ushort *)(param_2 + 0x158) * 0x20 + *(longlong *)(lVar11 + 0x3a8));
    uVar9 = FUN_144914e1c(lVar13,&local_68);
    *(undefined2 *)(param_1 + 0x158) = uVar9;
    local_68 = (undefined **)&DAT_14a171d50;
    uVar17 = uStack_50 >> 0x20;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      FUN_140115c12(&local_58,0);
    }
    local_60 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar11 = DAT_14cb848c0;
    lVar13 = DAT_14cb848c0 + 0x3a8;
    local_68 = (undefined **)&DAT_14a171d50;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = *(undefined8 *)
                (*(longlong *)(DAT_14cb848c0 + 0x3a8) +
                 (ulonglong)*(ushort *)(param_1 + 0x15a) * 0x20 + 8);
    FUN_1406022fe(&local_58);
    local_68 = &PTR_FUN_14b1828b0;
    FUN_1405dc634(&local_68,
                  (ulonglong)*(ushort *)(param_2 + 0x15a) * 0x20 + *(longlong *)(lVar11 + 0x3a8));
    uVar9 = FUN_144914e1c(lVar13,&local_68);
    *(undefined2 *)(param_1 + 0x15a) = uVar9;
    local_68 = (undefined **)&DAT_14a171d50;
    uVar17 = uStack_50 >> 0x20;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      FUN_140115c12(&local_58,0);
    }
    local_60 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (0 < *(int *)(param_2 + 0x100)) {
      local_88 = (longlong *)(param_1 + 0xf8);
      local_90 = *(longlong *)(param_1 + 0xf8);
      lVar13 = (longlong)*(int *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      FUN_140c1dafa(local_88,param_2 + 0xf8);
      local_80 = lVar13;
      if (lVar13 != 0) {
        local_70 = lVar13 * 0x38 + local_90;
        lVar13 = local_90;
        do {
          plVar1 = local_88;
          lVar11 = *(longlong *)(param_1 + 0xf8);
          iVar3 = *(int *)(param_1 + 0x100);
          lVar16 = (longlong)iVar3 * 0x38;
          if ((longlong)iVar3 != 0) {
            lVar14 = lVar11;
            do {
              if (*(longlong *)(lVar14 + 8) == *(longlong *)(lVar13 + 8)) {
                uVar4 = *(uint *)(lVar14 + 0x18);
                uVar5 = *(uint *)(lVar13 + 0x18);
                uVar7 = uVar5;
                if ((int)uVar4 < (int)uVar5) {
                  uVar7 = uVar4;
                }
                if (0 < (int)uVar7) {
                  uVar17 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar14 + 0x10) + uVar17 * 8) !=
                        *(longlong *)(*(longlong *)(lVar13 + 0x10) + uVar17 * 8))
                    goto LAB_143da683c;
                    uVar17 = uVar17 + 1;
                  } while (uVar7 != uVar17);
                }
                if ((int)uVar5 < (int)uVar4) {
                  lVar15 = 0;
                  while (*(longlong *)
                          ((longlong)(int)uVar5 * 8 + *(longlong *)(lVar14 + 0x10) + lVar15 * 8) ==
                         0) {
                    lVar15 = lVar15 + 1;
                    if (uVar4 - uVar5 == (int)lVar15) goto LAB_143da688b;
                  }
                }
                else {
                  if ((int)uVar5 <= (int)uVar4) {
LAB_143da688b:
                    if (lVar14 != 0) {
                      *(undefined4 *)(lVar14 + 0x20) = *(undefined4 *)(lVar13 + 0x20);
                      if ((longlong)*(int *)(lVar13 + 0x30) != 0) {
                        plVar1 = (longlong *)(lVar14 + 0x28);
                        if (*(int *)(lVar14 + 0x30) == 0) {
                          FUN_14875f22c(plVar1);
                        }
                        else {
                          piVar19 = *(int **)(lVar13 + 0x28);
                          local_78 = piVar19 + (longlong)*(int *)(lVar13 + 0x30) * 2;
                          do {
                            uVar4 = *(uint *)(lVar14 + 0x30);
                            uVar12 = (ulonglong)uVar4;
                            _Size = 0;
                            uVar17 = uVar12;
                            do {
                              if ((int)(uint)uVar17 < 1) {
                                *(uint *)(lVar14 + 0x30) = uVar4 + 1;
                                if (*(uint *)(lVar14 + 0x34) < uVar4 + 1) {
                                  FUN_1488d1c78(plVar1,uVar12);
                                }
                                memmove((void *)(*plVar1 + 8),(void *)*plVar1,uVar12 << 3);
                                puVar18 = (undefined8 *)*plVar1;
                                goto LAB_143da6941;
                              }
                              lVar11 = *plVar1;
                              iVar3 = *(int *)(lVar11 + -8 + uVar17 * 8);
                              if (iVar3 < *piVar19) {
                                *(uint *)(lVar14 + 0x30) = uVar4 + 1;
                                if (*(uint *)(lVar14 + 0x34) < uVar4 + 1) {
                                  FUN_1488d1c78(plVar1,uVar12);
                                  lVar11 = *plVar1;
                                }
                                lVar16 = (ulonglong)((uint)uVar17 & 0x7fffffff) * 8;
                                memmove((void *)(lVar11 + lVar16 + 8),(void *)(lVar11 + lVar16),
                                        _Size);
                                puVar18 = (undefined8 *)(lVar16 + *plVar1);
                                goto LAB_143da6941;
                              }
                              _Size = _Size + 8;
                              uVar17 = uVar17 - 1;
                            } while (*piVar19 != iVar3);
                            puVar18 = (undefined8 *)((lVar11 + uVar12 * 8) - _Size);
LAB_143da6941:
                            *puVar18 = *(undefined8 *)piVar19;
                            piVar19 = piVar19 + 2;
                          } while (piVar19 != local_78);
                        }
                      }
                      goto LAB_143da6865;
                    }
                    break;
                  }
                  lVar15 = 0;
                  while (*(longlong *)
                          ((longlong)(int)uVar4 * 8 + *(longlong *)(lVar13 + 0x10) + lVar15 * 8) ==
                         0) {
                    lVar15 = lVar15 + 1;
                    if (uVar5 - uVar4 == (int)lVar15) goto LAB_143da688b;
                  }
                }
              }
LAB_143da683c:
              lVar14 = lVar14 + 0x38;
            } while (lVar14 != lVar11 + lVar16);
          }
          *(uint *)(param_1 + 0x100) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x104) < iVar3 + 1U) {
            FUN_1488d1cfe(local_88);
            lVar11 = *plVar1;
          }
          FUN_1488d1be0(lVar11 + lVar16,lVar13);
LAB_143da6865:
          lVar13 = lVar13 + 0x38;
        } while (lVar13 != local_70);
      }
      local_68 = *(undefined ***)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0xf8) = 0;
      local_60 = *(ulonglong *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x100) = 0;
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(byte *)(lVar13 + 0xc80) & 1) == 0) {
        FUN_140c1dafa(local_88,&local_68);
      }
      else {
        puVar2 = (undefined1 *)(lVar13 + 0xc80);
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        uVar6 = *(undefined4 *)(lVar13 + 0xc7c);
        *puVar2 = 0;
        *(undefined4 *)(lVar13 + 0xc7c) = 0xffffffff;
        FUN_140c1dafa(local_88,&local_68);
        *(undefined4 *)(lVar13 + 0xc7c) = uVar6;
        *puVar2 = 1;
      }
      lVar13 = local_90;
      FUN_140c1db57(local_68,local_60 & 0xffffffff);
      if (local_68 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      FUN_140c1db57(lVar13,local_80);
      if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da6ac3 FUN_143da6ac3 body=41 status=ok
// SIG undefined FUN_143da6ac3(void)

void FUN_143da6ac3(void)

{
  DAT_14cb83098 = 0;
  if (DAT_14cb83090 != 0) {
    FUN_1400020a8();
  }
  FUN_146163106();
  return;
}



// FUNCTION 143da6aec FUN_143da6aec body=32 status=ok
// SIG undefined FUN_143da6aec(void)

undefined8 FUN_143da6aec(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 143da6b0c FUN_143da6b0c body=125 status=ok
// SIG undefined FUN_143da6b0c(void)

undefined8 * FUN_143da6b0c(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3184b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_2 != (undefined8 *)0x0) {
    param_1[5] = *param_2;
    param_1[6] = param_2[1];
    FUN_1407b26d0(param_1 + 7,param_2 + 2);
    FUN_1407b2728(param_1 + 9,param_2 + 4);
    FUN_1408fbb98(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 143da6b8a FUN_143da6b8a body=2693 status=ok
// SIG undefined FUN_143da6b8a(void)

char FUN_143da6b8a(longlong param_1)

{
  int *piVar1;
  wchar_t *_Str;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  size_t sVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  short *psVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  char local_1b1;
  longlong *local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined1 local_178;
  undefined7 uStack_177;
  undefined1 local_16c [4];
  ulonglong local_168;
  ulonglong uStack_160;
  undefined1 local_158;
  undefined7 uStack_157;
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar7 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b3e6280;
  FUN_140be3cb8(plVar7 + 2,&DAT_14cb83188);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar9 == (longlong *)0x0) goto LAB_143da6c93;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_143da6c35:
    LOCK();
    plVar16 = plVar9 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_143da6c93;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x10) = plVar7 + 2;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar7 == plVar9) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_143da6c35;
    }
  }
  LOCK();
  plVar9 = plVar7 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_143da6c93:
  uVar10 = *(ulonglong *)(param_1 + 0x10);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  if (uVar10 != 0) {
    uStack_180 = *(ulonglong *)(uVar10 + 0x68);
    local_188 = uVar10;
  }
  cVar3 = FUN_143e21ad4(&local_188,&DAT_14cb841d0,*(undefined8 *)(param_1 + 0x28));
  if (cVar3 != '\0') {
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_1b1 = cVar3;
    FUN_140834900();
    if ((*(char *)(param_1 + 0x58) == '\0') && (*(longlong *)(param_1 + 0x28) != 0)) {
      local_e8 = 0;
      local_e0 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_8c = 0x80;
      local_88 = 0xffffffff;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      uVar12 = FUN_14087ecb8();
      FUN_14087e82c(&local_118,uVar12);
      if (*(longlong *)(param_1 + 0x30) != 0) {
        uVar12 = FUN_14087ea48();
        FUN_14087e82c(&local_118,uVar12);
        FUN_14087e702(&local_118,*(longlong *)(param_1 + 0x30) + 0x108);
        lVar24 = FUN_140a9668e(*(undefined8 *)(param_1 + 0x30));
        if (lVar24 != 0) {
          do {
            uVar12 = FUN_14087ea48(lVar24);
            FUN_14087e82c(&local_118,uVar12);
            FUN_14087e702(&local_118,lVar24 + 0x108);
            lVar24 = FUN_140a9668e(lVar24);
          } while (lVar24 != 0);
        }
      }
      iVar21 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar21 != 0) {
        lVar24 = *(longlong *)(param_1 + 0x38);
        lVar26 = 0;
        do {
          lVar2 = *(longlong *)(lVar24 + lVar26);
          if (lVar2 != 0) {
            uVar12 = FUN_14087e66a(lVar2);
            FUN_14087e82c(&local_118,uVar12);
            FUN_14087e702(&local_118,lVar2 + 0x58);
          }
          lVar26 = lVar26 + 8;
        } while ((longlong)iVar21 * 8 != lVar26);
      }
      FUN_14087ed52(&local_118);
      local_148 = 0;
      local_140 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_13c = 0x80;
      uStack_138 = 0xffffffff;
      local_134 = 0;
      local_128 = 0;
      local_120 = 0;
      if ((longlong)*(int *)(param_1 + 0x68) == 0) {
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      else {
        psVar22 = (short *)(*(longlong *)(param_1 + 0x60) + 8);
        lVar24 = (longlong)*(int *)(param_1 + 0x68) * 0x50;
        do {
          if (*psVar22 < 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)FUN_1488cc12a(&local_118,psVar22);
          }
          plVar9 = (longlong *)(psVar22 + -4);
          if ((plVar7 == (longlong *)0x0) && (*plVar9 != 0)) {
            plVar7 = (longlong *)FUN_1488cc070(&local_118,plVar9);
          }
          if (plVar7 == (longlong *)0x0) {
            FUN_144a13f80(&local_168,local_16c,plVar9,0);
          }
          else {
            *plVar9 = *plVar7;
            if (0 < *(short *)((longlong)plVar7 + 0x26)) {
              *psVar22 = *(short *)((longlong)plVar7 + 0x26);
            }
          }
          psVar22 = psVar22 + 0x28;
          lVar24 = lVar24 + -0x50;
        } while (lVar24 != 0);
        *(undefined1 *)(param_1 + 0x58) = 1;
        local_120 = 0;
        if (local_128 != 0) {
          FUN_1400020a8();
        }
      }
      uVar10 = uStack_160 >> 0x20;
      uStack_160 = uStack_160 & 0xffffffff00000000;
      if ((int)uVar10 != 0) {
        FUN_14472eb64(&local_168,0);
      }
      uStack_138 = 0xffffffff;
      local_134 = 0;
      local_140 = 0;
      if (0x80 < local_13c) {
        local_13c = 0x80;
        FUN_1446efbd8(&local_158,0);
      }
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_1488cbd30(&local_118);
    }
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x60);
      plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x68) * 10;
      local_1b0 = plVar9;
      do {
        if ((char)plVar7[9] == '\x01') {
          puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *(undefined2 *)((longlong)puVar8 + 0xc) = 0xffff;
          puVar8[4] = 0;
          puVar8[5] = 0xf;
          *(undefined2 *)(puVar8 + 6) = 0xffff;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          if (-1 < (short)plVar7[1]) {
            *(short *)((longlong)puVar8 + 0xc) = (short)plVar7[1];
          }
          if (*plVar7 != 0) {
            *(longlong *)((longlong)puVar8 + 4) = *plVar7;
          }
          if ((int)plVar7[8] < 2) {
            *(undefined2 *)(puVar8 + 6) = 0xfffe;
            plVar9 = (longlong *)FUN_14067ab68(puVar8 + 7);
            if ((int)plVar7[6] == 0) {
              local_118 = plVar7[2];
              if (local_118 == 0) {
                uVar4 = 0x40;
              }
              else {
                lVar24 = 0x3f;
                if (local_118 != 0) {
                  for (; local_118 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                uVar4 = (uint)lVar24 ^ 0x3f;
              }
              uVar4 = (0x40 - uVar4) + (uint)((short)(0x40 - uVar4) == 0) & 0xff;
              *(undefined4 *)(plVar9 + 3) = 0;
              iVar21 = -1;
              if ((0x80 < *(int *)((longlong)plVar9 + 0x1c)) ||
                 (iVar25 = 0, *(int *)((longlong)plVar9 + 0x1c) < (int)(uVar4 + 0x1f & 0xe0))) {
                *(undefined4 *)((longlong)plVar9 + 0x1c) = 0x80;
                FUN_1446efbd8(plVar9,0);
                iVar13 = (int)plVar9[3];
                iVar25 = 0;
                if (iVar13 != 0) {
                  iVar21 = iVar13 + 0x1e;
                  if (-1 < iVar13 + -1) {
                    iVar21 = iVar13 + -1;
                  }
                  iVar21 = iVar21 >> 5;
                  iVar25 = iVar13;
                }
              }
              iVar19 = uVar4 + iVar25;
              iVar5 = uVar4 + iVar25 + -1;
              iVar13 = uVar4 + iVar25 + 0x1e;
              if (-1 < iVar5) {
                iVar13 = iVar5;
              }
              if (iVar13 >> 5 == iVar21) {
                *(int *)(plVar9 + 3) = iVar19;
              }
              else {
                if (*(int *)((longlong)plVar9 + 0x1c) < iVar19) {
                  iVar21 = iVar25;
                  if (iVar19 + 0x1fU < 0xa0) {
                    iVar13 = 0x80;
                  }
                  else {
                    uVar20 = iVar19 + 0x1fU >> 5;
                    if (*(int *)((longlong)plVar9 + 0x1c) + 0x1fU < 0xa0) {
                      uVar15 = 4;
                      if (4 < uVar20) {
                        uVar15 = uVar20;
                      }
                    }
                    else {
                      uVar15 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
                    }
                    uVar10 = (ulonglong)(uVar15 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar6 = (uint)(uVar10 + 0xf);
                        if (uVar15 < 0x1ffd) {
                          uVar10 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
                        }
                        else {
                          uVar14 = (ulonglong)(uVar6 & 0xfffffff0);
                          if (uVar14 < 0x7ff1) {
                            bVar18 = (&DAT_14c841e00)[uVar6 >> 4];
                            uVar17 = 0x32;
                            if (0x32 < bVar18) {
                              uVar17 = (ulonglong)bVar18;
                            }
                            uVar23 = 0x32 - (ulonglong)bVar18;
                            do {
                              uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0)
                              goto LAB_143da6f73;
                              lVar24 = uVar17 + 1 + uVar23;
                              uVar23 = uVar23 - 1;
                            } while (lVar24 != 0x33);
                          }
                          uVar10 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar10 = 0x10;
                          }
                          uVar10 = -uVar10 & (uVar14 + uVar10) - 1;
                        }
                      }
                      else {
                        uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
                        iVar21 = (int)plVar9[3];
                      }
                    }
LAB_143da6f73:
                    iVar5 = (int)(uVar10 >> 2);
                    iVar13 = iVar5 << 5;
                    if (iVar5 < (int)uVar20) {
                      iVar13 = -0x20;
                    }
                  }
                  *(int *)((longlong)plVar9 + 0x1c) = iVar13;
                  FUN_1446efbd8(plVar9,iVar21);
                  iVar19 = (int)plVar9[3] + uVar4;
                }
                iVar21 = iVar19 + 0x1f;
                if (-1 < iVar19) {
                  iVar21 = iVar19;
                }
                *(int *)(plVar9 + 3) = iVar19;
                if (iVar19 % 0x20 != 0) {
                  plVar16 = (longlong *)plVar9[2];
                  if ((longlong *)plVar9[2] == (longlong *)0x0) {
                    plVar16 = plVar9;
                  }
                  bVar18 = -(char)(iVar19 % 0x20);
                  *(uint *)((longlong)plVar16 + (longlong)(iVar21 >> 5) * 4) =
                       (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar21 >> 5) * 4) <<
                             (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
                }
              }
              if ((longlong *)plVar9[2] != (longlong *)0x0) {
                plVar9 = (longlong *)plVar9[2];
              }
              local_1c8 = uVar4;
              FUN_14493566c(plVar9,iVar25,&local_118,0);
            }
            else if (plVar9 != plVar7 + 3) {
              uVar4 = (int)plVar7[6] + 0x1fU & 0xffffffe0;
              *(undefined4 *)(plVar9 + 3) = 0;
              if ((*(int *)((longlong)plVar9 + 0x1c) < (int)uVar4) ||
                 (0x80 < *(int *)((longlong)plVar9 + 0x1c))) {
                if ((int)uVar4 < 0x81) {
                  uVar4 = 0x80;
                }
                *(uint *)((longlong)plVar9 + 0x1c) = uVar4;
                FUN_1446efbd8(plVar9,0);
              }
              iVar21 = (int)plVar7[6];
              *(int *)(plVar9 + 3) = iVar21;
              if (iVar21 != 0) {
                plVar16 = plVar7 + 3;
                if ((longlong *)plVar7[5] != (longlong *)0x0) {
                  plVar16 = (longlong *)plVar7[5];
                }
                if ((longlong *)plVar9[2] != (longlong *)0x0) {
                  plVar9 = (longlong *)plVar9[2];
                }
                memcpy(plVar9,plVar16,(ulonglong)(iVar21 + 0x1fU >> 3 & 0xfffffffc));
              }
            }
          }
          else {
            _Str = (wchar_t *)plVar7[7];
            local_98 = 0;
            if (_Str == (wchar_t *)0x0) {
              local_90 = 0;
              uStack_8c = 0;
              local_88 = 0;
              uVar12 = 0;
            }
            else {
              sVar11 = wcslen(_Str);
              FUN_1449b853c(&local_118,_Str,sVar11 & 0xffffffff,1);
              uVar12 = CONCAT44(uStack_8c,local_90);
            }
            FUN_1401d7cf8(puVar8 + 2,uVar12);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
          }
          uVar10 = uStack_1a0;
          plVar9 = local_1b0;
          lVar24 = (longlong)(int)uStack_1a0;
          uVar4 = (int)uStack_1a0 + 1;
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar4);
          if (uStack_1a0._4_4_ < uVar4) {
            FUN_140dea44c(&local_1a8,uVar10 & 0xffffffff);
          }
          *(undefined8 **)(local_1a8 + lVar24 * 8) = puVar8;
        }
        plVar7 = plVar7 + 10;
      } while (plVar7 != plVar9);
    }
    FUN_1407e122c(&local_188,&local_1a8,0);
    local_118 = local_188;
    uStack_110 = uStack_180;
    local_108 = CONCAT71(uStack_177,1);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_143e21ad4(&local_118,&DAT_14cb841d0);
    }
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar24 = 0;
      do {
        FUN_143e21ad4(&local_118,&DAT_14cb841d0,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar24 * 8));
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(param_1 + 0x40));
    }
    if ((0 < *(int *)(param_1 + 0x50)) && (lVar24 = FUN_140be360c(&local_188), lVar24 != 0)) {
      FUN_1400b22c2(&local_168,&DAT_14a157a0f);
      FUN_1407e14ea(lVar24,&local_168,0);
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      local_168 = local_188;
      uStack_160 = uStack_180;
      _local_158 = CONCAT71(uStack_177,1);
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar24 = 0;
        do {
          FUN_143e21ad4(&local_168,&DAT_14cb842d8,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar24 * 8));
          lVar24 = lVar24 + 1;
        } while (lVar24 < *(int *)(param_1 + 0x50));
      }
    }
    FUN_1408348da(&local_1a8);
    cVar3 = local_1b1;
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar3;
}



// FUNCTION 143da7610 FUN_143da7610 body=127 status=ok
// SIG undefined FUN_143da7610(void)

undefined8 FUN_143da7610(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_140b47a16();
  if ((lVar2 == 0) || (*(char *)(lVar2 + 8) != '\x02')) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(lVar2 + 0x38);
    if (puVar4 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(lVar2 + 0x40) = iVar1;
      if (iVar1 == 0 && *(int *)(lVar2 + 0x44) == 0) {
        *(undefined4 *)(lVar2 + 0x44) = 0;
      }
      else {
        FUN_1446dd670(puVar4,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*puVar4,_Src,(longlong)iVar1 * 2);
        }
      }
    }
    *(undefined1 *)(param_1 + 0xc0) = 1;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143da7690 FUN_143da7690 body=4020 status=ok
// SIG undefined FUN_143da7690(void)

void FUN_143da7690(longlong *param_1,longlong *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  byte bVar19;
  longlong lVar20;
  undefined8 unaff_R13;
  undefined7 uVar21;
  longlong lVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_128 [40];
  longlong local_100;
  uint local_f4;
  int *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  byte local_d5;
  int local_d4;
  ulonglong local_d0;
  int local_c8;
  longlong local_b8;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  ulonglong local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_1[0x12] = 0;
    plVar15 = (longlong *)param_1[0x13];
    if (plVar15 != (longlong *)0x0) {
      param_1[0x13] = 0;
      LOCK();
      plVar14 = plVar15 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    FUN_1401b9920(param_1[6],(int)param_1[7]);
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      FUN_140cd20a6(param_1 + 6,0);
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_d4 = -2;
    lVar22 = -1;
    uVar8 = 0;
  }
  else {
    lVar22 = (**(code **)(*param_2 + 0x30))(param_2);
    local_d4 = -2;
    uVar21 = (undefined7)((ulonglong)unaff_R13 >> 8);
    uVar8 = (uint)CONCAT71(uVar21,-1 < lVar22);
    if ((-1 < lVar22) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      lVar9 = (**(code **)(*param_2 + 0x28))(param_2);
      uVar8 = (uint)CONCAT71(uVar21,1);
      if (lVar22 < lVar9 + 4) goto LAB_143da7932;
    }
  }
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_d4,4);
    }
    else {
      FUN_14572512c(param_2,&local_d4);
    }
  }
  else {
    local_d4 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  bVar6 = *(byte *)(param_2 + 5);
  if (((bVar6 & 1) == 0) || (local_d4 < 0)) {
    bVar19 = (byte)uVar8 ^ 1;
    if (((bVar6 & 1) != 0 && bVar19 == 0) &&
       (lVar9 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 < lVar9 + 4)) goto LAB_143da7932;
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
      }
      else {
        FUN_14572512c(param_2,param_3);
      }
    }
    else {
      *param_3 = *piVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    bVar6 = *(byte *)(param_2 + 5);
    if (local_d4 < 0) {
      if (((bVar6 & 1) != 0 && bVar19 == 0) &&
         (lVar9 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 < lVar9 + 4)) goto LAB_143da7932;
      puVar4 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_4,4);
        }
        else {
          FUN_14572512c(param_2,param_4);
        }
      }
      else {
        *param_4 = *puVar4;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      bVar6 = *(byte *)(param_2 + 5);
      if (local_d4 < -1) {
        local_78[0]._0_2_ = 0;
        if ((bVar19 == 0 && (bVar6 & 1) != 0) &&
           (lVar9 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 < lVar9 + 2))
        goto LAB_143da7932;
        puVar3 = (ulonglong *)param_2[1];
        if (puVar3[1] < *puVar3 + 2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_78,2);
          }
          else {
            FUN_1457251a8(param_2,local_78);
          }
        }
        else {
          *puVar3 = *puVar3 + 2;
        }
        bVar6 = *(byte *)(param_2 + 5);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_50 = 0x400000000;
  local_88 = (undefined1 *)0x0;
  local_80 = 0x2000000000;
  local_d5 = 0;
  local_e0 = 0;
  local_100 = lVar22;
  local_f4 = uVar8;
  local_f0 = param_3;
  if ((bVar6 & 4) == 0) {
    local_d0 = local_d0 & 0xffffffff00000000;
    bVar19 = (byte)uVar8 ^ 1;
    if (((bVar6 & 1) == 0 || bVar19 != 0) ||
       (lVar22 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 + 4 <= local_100)) {
      puVar3 = (ulonglong *)param_2[1];
      piVar1 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_d0,4);
        }
        else {
          FUN_14572512c(param_2,&local_d0);
        }
        iVar23 = (int)local_d0;
      }
      else {
        iVar23 = *(int *)*puVar3;
        local_d0 = CONCAT44(local_d0._4_4_,iVar23);
        *puVar3 = (ulonglong)piVar1;
      }
      if (0 < iVar23) {
        FUN_1488cbe4c(local_78);
        if (0 < (int)local_d0) {
          lVar9 = 0;
          lVar20 = 0;
          lVar22 = local_100;
          do {
            if ((*(byte *)(param_2 + 5) & 1) != 0 && bVar19 == 0) {
              lVar10 = (**(code **)(*param_2 + 0x28))(param_2);
              if (lVar22 < lVar10 + 4) goto LAB_143da790e;
              local_e8 = 0;
              puVar3 = (ulonglong *)param_2[1];
              piVar1 = (int *)*puVar3 + 1;
              if ((int *)puVar3[1] < piVar1) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))(param_2,&local_e8,4);
                }
                else {
                  FUN_14572512c(param_2,&local_e8);
                }
              }
              else {
                local_e8 = *(int *)*puVar3;
                *puVar3 = (ulonglong)piVar1;
              }
              lVar22 = local_100;
              if ((local_e8 < 0) ||
                 (lVar11 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 < local_e8 + lVar11))
              goto LAB_143da790e;
              (**(code **)(*param_2 + 0x1a0))(param_2,lVar10);
            }
            plVar15 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar15 = local_78;
            }
            (**(code **)(*param_2 + 0x160))(param_2,(longlong)plVar15 + lVar9);
            lVar20 = lVar20 + 1;
            lVar9 = lVar9 + 8;
          } while (lVar20 < (int)local_d0);
        }
        if (((*(byte *)(param_2 + 5) & 1) == 0 || bVar19 != 0) ||
           (lVar22 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 < local_100)) {
          puVar3 = (ulonglong *)param_2[1];
          pbVar2 = (byte *)*puVar3 + 1;
          if ((byte *)puVar3[1] < pbVar2) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_d5,1);
          }
          else {
            local_d5 = *(byte *)*puVar3;
            *puVar3 = (ulonglong)pbVar2;
          }
          plVar15 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar15 = local_58;
          }
          if ((*plVar15 == 0) || ((int)(uint)local_d5 < (int)local_50)) {
            if ((*(byte *)(param_2 + 5) & 1) == 0 || bVar19 != 0) {
LAB_143da8418:
              (**(code **)(*param_2 + 0x160))(param_2,&local_e0);
              if (((*(byte *)(param_2 + 5) & 1) == 0 || bVar19 != 0) ||
                 (lVar22 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 + 4 <= local_100)) {
                puVar3 = (ulonglong *)param_2[1];
                piVar1 = (int *)*puVar3 + 1;
                if ((int *)puVar3[1] < piVar1) {
                  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_2 + 0x170))(param_2,&local_d0,4);
                  }
                  else {
                    FUN_14572512c(param_2,&local_d0);
                  }
                  iVar23 = (int)local_d0;
                }
                else {
                  iVar23 = *(int *)*puVar3;
                  local_d0 = CONCAT44(local_d0._4_4_,iVar23);
                  *puVar3 = (ulonglong)piVar1;
                }
                if (-1 < iVar23) {
                  FUN_1488cbdd4(local_a8);
                  param_3 = local_f0;
                  lVar22 = local_100;
                  if (0 < (int)local_d0) {
                    lVar9 = 0;
                    do {
                      if (((*(byte *)(param_2 + 5) & 1) != 0 && bVar19 == 0) &&
                         (lVar22 = (**(code **)(*param_2 + 0x28))(param_2), local_100 <= lVar22))
                      goto LAB_143da790e;
                      puVar12 = local_88;
                      if (local_88 == (undefined1 *)0x0) {
                        puVar12 = local_a8;
                      }
                      puVar5 = *(undefined1 **)param_2[1];
                      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
                        (**(code **)(*param_2 + 0x170))(param_2,puVar12 + lVar9,1);
                      }
                      else {
                        puVar12[lVar9] = *puVar5;
                        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
                      }
                      lVar9 = lVar9 + 1;
                      param_3 = local_f0;
                      lVar22 = local_100;
                    } while (lVar9 < (int)local_d0);
                  }
                  goto LAB_143da7f00;
                }
              }
            }
            else {
              lVar22 = (**(code **)(*param_2 + 0x28))(param_2);
              if (lVar22 + 4 <= local_100) {
                local_e8 = 0;
                puVar3 = (ulonglong *)param_2[1];
                piVar1 = (int *)*puVar3 + 1;
                if ((int *)puVar3[1] < piVar1) {
                  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_2 + 0x170))(param_2,&local_e8,4);
                  }
                  else {
                    FUN_14572512c(param_2,&local_e8);
                  }
                }
                else {
                  local_e8 = *(int *)*puVar3;
                  *puVar3 = (ulonglong)piVar1;
                }
                lVar9 = local_100;
                if ((-1 < local_e8) &&
                   (lVar20 = (**(code **)(*param_2 + 0x28))(param_2), local_e8 + lVar20 <= lVar9)) {
                  (**(code **)(*param_2 + 0x1a0))(param_2,lVar22);
                  goto LAB_143da8418;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*param_1 == 0) {
      local_d0 = 0;
      iVar23 = 0;
      uVar8 = 4;
    }
    else {
      puVar4 = *(undefined4 **)(*param_1 + 8);
      puVar18 = &DAT_14c9485f0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar18 = puVar4;
      }
      if (DAT_14c947fe0 == 0) {
        lVar22 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar22);
        DAT_14c947fe0 = lVar22;
      }
      FUN_140045924(DAT_14c947fe0,&local_d0,puVar18,1);
      iVar23 = (int)local_50;
      uVar8 = local_50._4_4_;
    }
    local_50 = CONCAT44(local_50._4_4_,iVar23 + 1U);
    if (uVar8 < iVar23 + 1U) {
      FUN_1456af342(local_78,iVar23);
    }
    plVar15 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar15 = local_78;
    }
    plVar15[iVar23] = local_d0;
    if (param_1[1] == 0) {
      local_d0 = 0;
    }
    else {
      puVar4 = *(undefined4 **)(*(longlong *)(param_1[1] + 0x30) + 8);
      puVar18 = &DAT_14c9485f0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar18 = puVar4;
      }
      if (DAT_14c947fe0 == 0) {
        lVar22 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar22);
        DAT_14c947fe0 = lVar22;
      }
      FUN_140045924(DAT_14c947fe0,&local_d0,puVar18,1);
    }
    local_d5 = FUN_1477aa8ca(local_78,&local_d0);
    if (param_1[1] == 0) {
      local_e0 = 0;
    }
    else {
      puVar4 = *(undefined4 **)(param_1[1] + 8);
      puVar18 = &DAT_14c9485f0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar18 = puVar4;
      }
      if (DAT_14c947fe0 == 0) {
        lVar22 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar22);
        DAT_14c947fe0 = lVar22;
      }
      FUN_140045924(DAT_14c947fe0,&local_d0,puVar18,1);
      local_e0 = local_d0;
    }
    iVar23 = (int)param_1[3];
    FUN_1488cbdd4(local_a8,iVar23);
    if (0 < (longlong)iVar23) {
      lVar22 = 0;
      do {
        lVar9 = *(longlong *)(param_1[2] + lVar22 * 8);
        if (lVar9 == 0) {
          local_d0 = 0;
        }
        else {
          puVar4 = *(undefined4 **)(*(longlong *)(lVar9 + 0x30) + 8);
          puVar18 = &DAT_14c9485f0;
          if (puVar4 != (undefined4 *)0x0) {
            puVar18 = puVar4;
          }
          if (DAT_14c947fe0 == 0) {
            lVar9 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar9);
            DAT_14c947fe0 = lVar9;
          }
          FUN_140045924(DAT_14c947fe0,&local_d0,puVar18,1);
          param_3 = local_f0;
        }
        uVar7 = FUN_1477aa8ca(local_78,&local_d0);
        puVar12 = local_88;
        if (local_88 == (undefined1 *)0x0) {
          puVar12 = local_a8;
        }
        puVar12[lVar22] = uVar7;
        lVar22 = lVar22 + 1;
      } while (iVar23 != lVar22);
    }
    local_d0 = CONCAT44(local_d0._4_4_,(int)local_50);
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_d0,4);
      }
      else {
        FUN_14572512c(param_2,&local_d0);
      }
      iVar23 = (int)local_d0;
    }
    else {
      iVar23 = *(int *)*puVar3;
      local_d0 = CONCAT44(local_d0._4_4_,iVar23);
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < iVar23) {
      lVar22 = 0;
      lVar9 = 0;
      do {
        plVar15 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar15 = local_78;
        }
        (**(code **)(*param_2 + 0x160))(param_2,(longlong)plVar15 + lVar22);
        lVar9 = lVar9 + 1;
        lVar22 = lVar22 + 8;
      } while (lVar9 < (int)local_d0);
    }
    puVar3 = (ulonglong *)param_2[1];
    pbVar2 = (byte *)*puVar3 + 1;
    if ((byte *)puVar3[1] < pbVar2) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_d5,1);
    }
    else {
      local_d5 = *(byte *)*puVar3;
      *puVar3 = (ulonglong)pbVar2;
    }
    lVar22 = local_100;
    (**(code **)(*param_2 + 0x160))(param_2,&local_e0);
    local_d0 = CONCAT44(local_d0._4_4_,(uint)local_80);
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_d0,4);
      }
      else {
        FUN_14572512c(param_2,&local_d0);
      }
      iVar23 = (int)local_d0;
    }
    else {
      iVar23 = *(int *)*puVar3;
      local_d0 = CONCAT44(local_d0._4_4_,iVar23);
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < iVar23) {
      lVar9 = 0;
      do {
        puVar12 = local_88;
        if (local_88 == (undefined1 *)0x0) {
          puVar12 = local_a8;
        }
        puVar5 = *(undefined1 **)param_2[1];
        if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar12 + lVar9,1);
        }
        else {
          puVar12[lVar9] = *puVar5;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)local_d0);
    }
LAB_143da7f00:
    bVar6 = *(byte *)(param_2 + 5);
    if ((bVar6 & 4) != 0) {
      local_d0 = 0;
      lVar9 = (longlong)(int)(uint)local_80;
      param_3 = local_f0;
      if (0 < lVar9) {
        lVar22 = 0;
        do {
          lVar20 = *(longlong *)(param_1[2] + lVar22 * 8);
          if (lVar20 == 0) {
            local_d0 = 0;
          }
          else {
            puVar4 = *(undefined4 **)(lVar20 + 8);
            puVar18 = &DAT_14c9485f0;
            if (puVar4 != (undefined4 *)0x0) {
              puVar18 = puVar4;
            }
            if (DAT_14c947fe0 == 0) {
              lVar20 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar20);
              DAT_14c947fe0 = lVar20;
            }
            FUN_140045924(DAT_14c947fe0,&local_e8,puVar18,1);
            local_d0 = CONCAT44(uStack_e4,local_e8);
          }
          (**(code **)(*param_2 + 0x160))(param_2,&local_d0);
          lVar22 = lVar22 + 1;
        } while (lVar9 != lVar22);
        bVar6 = *(byte *)(param_2 + 5);
        param_3 = local_f0;
        lVar22 = local_100;
      }
    }
    if ((bVar6 & 1) != 0) {
      plVar15 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar15 = local_78;
      }
      if (*plVar15 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        FUN_1446dcdd4(&local_d0);
        lVar9 = FUN_140cde312(&local_d0);
        *param_1 = lVar9;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        param_1[1] = 0;
        plVar15 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar15 = local_78;
        }
        if ((plVar15[local_d5] != 0) && (local_e0 != 0)) {
          FUN_1400021e4(&local_e0);
          bVar24 = true;
          if ((longlong)local_c8 != 0) {
            uVar17 = 0;
            do {
              if (*(short *)(local_d0 + uVar17) == 0x2e) {
                bVar24 = (int)(~uVar17 >> 1) == 0;
                break;
              }
              uVar17 = uVar17 + 2;
            } while ((longlong)local_c8 * 2 != uVar17);
          }
          if (local_d0 != 0) {
            FUN_1400020a8();
          }
          if (bVar24) {
            plVar15 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar15 = local_78;
            }
            lVar9 = FUN_1488d6678(plVar15 + local_d5,&local_e0);
          }
          else {
            lVar9 = FUN_1488d78c3(&local_e0);
          }
          param_1[1] = lVar9;
        }
      }
      if ((int)(uint)local_80 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_80 & 0xffffffff);
      }
      plVar15 = param_1 + 2;
      *(undefined4 *)(param_1 + 3) = 0;
      iVar23 = 0;
      uVar8 = (uint)local_80;
      uVar16 = (uint)local_80;
      if (*(uint *)((longlong)param_1 + 0x1c) != (uint)local_80) {
        FUN_1407d6a5a(plVar15);
        iVar23 = (int)param_1[3];
        uVar8 = (uint)local_80;
        uVar16 = *(uint *)((longlong)param_1 + 0x1c);
      }
      *(uint *)(param_1 + 3) = uVar8 + iVar23;
      if (uVar16 - iVar23 < uVar8) {
        FUN_140a96716(plVar15);
      }
      memset((void *)((longlong)iVar23 * 8 + *plVar15),0,(longlong)(int)uVar8 << 3);
      local_d0 = 0;
      lVar9 = (longlong)(int)(uint)local_80;
      if (0 < lVar9) {
        lVar20 = 0;
        local_f4 = local_f4 ^ 1;
        do {
          if ((*(byte *)(param_2 + 5) & 1) != 0 && (char)local_f4 == '\0') {
            lVar10 = (**(code **)(*param_2 + 0x28))(param_2);
            if (lVar22 < lVar10 + 4) goto LAB_143da790e;
            local_e8 = 0;
            puVar3 = (ulonglong *)param_2[1];
            piVar1 = (int *)*puVar3 + 1;
            if ((int *)puVar3[1] < piVar1) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_e8,4);
              }
              else {
                FUN_14572512c(param_2,&local_e8);
              }
            }
            else {
              local_e8 = *(int *)*puVar3;
              *puVar3 = (ulonglong)piVar1;
            }
            if ((local_e8 < 0) ||
               (lVar11 = (**(code **)(*param_2 + 0x28))(param_2), lVar22 < local_e8 + lVar11))
            goto LAB_143da790e;
            (**(code **)(*param_2 + 0x1a0))(param_2,lVar10);
            param_3 = local_f0;
          }
          (**(code **)(*param_2 + 0x160))(param_2,&local_d0);
          puVar12 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar12 = local_a8;
          }
          plVar14 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          uVar13 = FUN_1488d61ea(plVar14 + (byte)puVar12[lVar20],&local_d0);
          *(undefined8 *)(*plVar15 + lVar20 * 8) = uVar13;
          lVar20 = lVar20 + 1;
        } while (lVar9 != lVar20);
      }
      bVar6 = *(byte *)(param_2 + 5);
    }
    if ((bVar6 & 4) == 0) {
      iVar23 = *param_3;
      lVar22 = FUN_140b47a16(param_1,&DAT_14cb843e8);
      if ((lVar22 != 0) && (*(char *)(lVar22 + 8) == '\0')) {
        *(longlong *)(lVar22 + 0x28) = (longlong)iVar23;
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      FUN_140cd1b28(param_1);
    }
  }
LAB_143da790e:
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143da7932:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da864a FUN_143da864a body=84 status=ok
// SIG undefined FUN_143da864a(void)

void FUN_143da864a(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    FUN_146554112(param_1 + 0x120,local_18);
    FUN_143dae6bd(*(undefined8 *)(param_1 + 0x30));
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da869f FUN_143da869f body=227 status=ok
// SIG undefined FUN_143da869f(void)

void FUN_143da869f(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = (**(code **)(*param_1 + 0x180))();
  FUN_1459ae126(local_78,&DAT_14cb841c0);
  lVar2 = local_50;
  lVar1 = local_68;
  LOCK();
  *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
  UNLOCK();
  puVar3 = local_70;
LAB_143da8700:
  do {
    if (puVar3 == local_58) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + -1;
      UNLOCK();
      if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1488cc822(puVar3[2],param_1);
    for (puVar3 = (undefined8 *)FUN_1459ae1d6(*puVar3); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)FUN_1459ae1d6(*puVar3)) {
      lVar4 = FUN_1447210f0(puVar3[2]);
      if (lVar4 == *local_60) goto LAB_143da8700;
    }
    puVar3 = (undefined8 *)0x0;
  } while( true );
}



// FUNCTION 143da8783 FUN_143da8783 body=69 status=ok
// SIG undefined FUN_143da8783(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143da8783(void)

{
  _DAT_14cb83108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143da87c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb83110,1);
  return;
}



// FUNCTION 143da87c8 FUN_143da87c8 body=69 status=ok
// SIG undefined FUN_143da87c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143da87c8(void)

{
  _DAT_14cb83120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143da880a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb83128,1);
  return;
}



// FUNCTION 143da880d FUN_143da880d body=69 status=ok
// SIG undefined FUN_143da880d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143da880d(void)

{
  _DAT_14cb83138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143da884f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb83140,1);
  return;
}



// FUNCTION 143da8852 FUN_143da8852 body=3984 status=ok
// SIG undefined FUN_143da8852(void)

ulonglong FUN_143da8852(longlong param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 local_a1;
  longlong local_a0;
  uint *local_98;
  undefined8 local_90;
  code *local_88;
  wchar_t awStack_80 [2];
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  wchar_t awStack_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar7 = FUN_140d0e492();
  uVar24 = (ulonglong)uVar7;
  lVar10 = FUN_1447210f0(param_1);
  if ((lVar10 == 0) ||
     ((((bVar5 = *(byte *)(lVar10 + 0x152), bVar5 != 1 &&
        ((6 < bVar5 || ((0x68U >> (bVar5 & 0x1f) & 1) == 0)))) || ((bVar5 & 0xfe) == 4)) ||
      (*(longlong *)(param_1 + 0x3f0) == 0)))) goto LAB_143da958c;
  lVar10 = *(longlong *)(param_1 + 0x1c8);
  if (lVar10 == 0) {
LAB_143da922d:
    *(undefined8 *)(param_1 + 0x788) = 0;
  }
  else {
    if (DAT_14cac6e60 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_142b47bc4;
      local_c8 = &LAB_1478989f1;
      local_d0 = &LAB_146391124;
      local_d8 = L"Engine";
      local_e0 = 0x10000000000;
      local_e8 = 0x10000005;
      local_f0 = 0x10;
      local_f8 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar10 = *(longlong *)(param_1 + 0x1c8);
      if (lVar10 == 0) goto LAB_143da922d;
    }
    if ((((DAT_14cac6e60 == 0) || (lVar14 = *(longlong *)(lVar10 + 0x10), lVar14 == 0)) ||
        (*(int *)(lVar14 + 0x38) < *(int *)(DAT_14cac6e60 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
        != DAT_14cac6e60 + 0x30)) goto LAB_143da922d;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x788) = lVar10;
    (**(code **)(*(longlong *)(param_1 + 0x528) + 0x20))(param_1 + 0x528,&local_88);
    if ((int)local_88 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x788);
      lVar14 = lVar10;
      if (DAT_14c76142c == 1) {
        do {
          if ((*(byte *)(lVar14 + 0x1f8) & 2) == 0) break;
          *(byte *)(lVar14 + 0x1f8) = *(byte *)(lVar14 + 0x1f8) & 0xfd;
          plVar13 = (longlong *)(lVar14 + 0x120);
          lVar14 = *plVar13;
        } while (*plVar13 != 0);
      }
      pbVar1 = (byte *)(lVar10 + 0x1f9);
      *pbVar1 = *pbVar1 | 4;
    }
    lVar10 = FUN_140831778();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb83158) && (FUN_144b3d300(&DAT_14cb83158), DAT_14cb83158 == -1)) {
      local_88 = (code *)0x14b41181a;
      awStack_80[0] = L'\x06';
      awStack_80[1] = L'\0';
      uStack_7c = 0;
      uVar18 = FUN_14001a6c0(&local_88,1);
      DAT_14cb83150 = (ulonglong)uVar18;
      _Init_thread_footer(&DAT_14cb83158);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x788) + 0x2eb) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x728))
              (*(longlong **)(param_1 + 0x788),DAT_14cb83150,1);
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x898))
              (*(longlong **)(param_1 + 0x788),*(undefined4 *)(lVar10 + 0x54));
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x8a8))
              (*(longlong **)(param_1 + 0x788),*(undefined4 *)(lVar10 + 0x58));
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x690))
              (*(longlong **)(param_1 + 0x788),(*(byte *)(param_1 + 0x968) & 2) == 0);
    plVar13 = *(longlong **)(param_1 + 0x788);
    if (plVar13[0xa6] == 0) {
      uVar11 = FUN_1401f2ad8(lVar10 + 0x60);
      (**(code **)(*plVar13 + 0x968))(plVar13,uVar11);
      plVar13 = *(longlong **)(param_1 + 0x788);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb84198) && (FUN_144b3d300(&DAT_14cb84198), DAT_14cb84198 == -1)) {
      local_78 = 0x570073;
      uStack_74 = 0x61;
      uStack_72 = 0x6b;
      uStack_70 = 0x65;
      local_88 = (code *)0x680050006e004f;
      awStack_80[0] = L'y';
      awStack_80[1] = L's';
      uStack_7c = 0x69;
      uStack_7b = 0;
      uStack_7a = 99;
      FUN_1446f470e(&DAT_14cb84190,&local_88,1);
      _Init_thread_footer(&DAT_14cb84198);
    }
    lVar14 = DAT_14cb84190;
    local_a1 = (undefined1)uVar7;
    local_a0 = lVar10;
    if (param_1 == 0) {
      uVar24 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar18 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar21 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar21);
        }
        LOCK();
        uVar18 = *(uint *)(lVar10 + 0x10);
        bVar26 = uVar18 == 0;
        if (bVar26) {
          *(uint *)(lVar10 + 0x10) = uVar21;
          uVar18 = 0;
        }
        UNLOCK();
        if (bVar26) {
          uVar18 = uVar21;
        }
      }
      uVar24 = (ulonglong)uVar18;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else if (uVar18 == 0) {
        uVar24 = 0;
      }
      else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
               (plVar12 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0)) &&
              (((*(uint *)(plVar12 + 2) == uVar18 && ((*(uint *)(plVar12 + 1) & 0x10200000) == 0))
               && (*plVar12 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar12 + 0x10),lVar14,1);
      }
    }
    FUN_1401895dc((longlong)plVar13 + 0x59b,&local_90);
    awStack_80 = SUB84(lVar14,0);
    uStack_7c = (undefined1)((ulonglong)lVar14 >> 0x20);
    uStack_7b = (undefined1)((ulonglong)lVar14 >> 0x28);
    uStack_7a = (undefined2)((ulonglong)lVar14 >> 0x30);
    local_88 = (code *)((ulonglong)uVar7 | uVar24 << 0x20);
    bVar5 = FUN_140a28ca8(plVar13,local_90);
    *(byte *)((longlong)plVar13 + 0x59b) = *(byte *)((longlong)plVar13 + 0x59b) | bVar5;
    lVar10 = *(longlong *)(param_1 + 0x788);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb841a8) && (FUN_144b3d300(&DAT_14cb841a8), DAT_14cb841a8 == -1)) {
      local_78 = 0x530073;
      uStack_74 = 0x6c;
      uStack_72 = 0x65;
      uStack_70 = 0x700065;
      uStack_6c = 0;
      local_88 = (code *)0x680050006e004f;
      awStack_80[0] = L'y';
      awStack_80[1] = L's';
      uStack_7c = 0x69;
      uStack_7b = 0;
      uStack_7a = 99;
      FUN_1446f470e(&DAT_14cb841a0,&local_88,1);
      _Init_thread_footer(&DAT_14cb841a8);
    }
    lVar14 = DAT_14cb841a0;
    if (param_1 == 0) {
      uVar24 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      uVar18 = *(uint *)(lVar20 + 0x10);
      if (*(uint *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar21 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar21);
        }
        LOCK();
        uVar18 = *(uint *)(lVar20 + 0x10);
        bVar26 = uVar18 == 0;
        if (bVar26) {
          *(uint *)(lVar20 + 0x10) = uVar21;
          uVar18 = 0;
        }
        UNLOCK();
        if (bVar26) {
          uVar18 = uVar21;
        }
      }
      uVar24 = (ulonglong)uVar18;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else if (uVar18 == 0) {
        uVar24 = 0;
      }
      else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
               (plVar13 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar13 != (longlong *)0x0)) &&
              (((*(uint *)(plVar13 + 2) == uVar18 && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0))
               && (*plVar13 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar13 + 0x10),lVar14,1);
      }
    }
    FUN_1401892b6(lVar10 + 0x59c,&local_90);
    awStack_80 = SUB84(lVar14,0);
    uStack_7c = (undefined1)((ulonglong)lVar14 >> 0x20);
    uStack_7b = (undefined1)((ulonglong)lVar14 >> 0x28);
    uStack_7a = (undefined2)((ulonglong)lVar14 >> 0x30);
    local_88 = (code *)((ulonglong)uVar7 | uVar24 << 0x20);
    bVar5 = FUN_140a28ca8(lVar10,local_90);
    *(byte *)(lVar10 + 0x59c) = *(byte *)(lVar10 + 0x59c) | bVar5;
    lVar10 = *(longlong *)(param_1 + 0x3f0);
    lVar14 = *(longlong *)(lVar10 + 0x340);
    if (lVar14 == 0) {
      uVar11 = FUN_1405bb4b8();
      lVar14 = FUN_14477b664(uVar11);
      *(longlong *)(lVar10 + 0x340) = lVar14;
    }
    uVar24 = CONCAT71((int7)((ulonglong)&local_90 >> 8),local_a1);
    if (*(longlong *)(lVar10 + 0x348) == 0) {
      if ((lVar14 != 0) && (*(longlong *)(lVar10 + 0x338) != 0)) {
        plVar13 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar13 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar6 == '\0')) {
          *(undefined8 *)(lVar10 + 0x348) = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
          lVar14 = FUN_144aff482(uVar11,(longlong *)(lVar10 + 0x338));
          *(longlong *)(lVar10 + 0x348) = lVar14;
          if (lVar14 != 0) goto LAB_143da8cc1;
        }
      }
    }
    else {
LAB_143da8cc1:
      uVar24 = uVar24 & 0xffffffff;
      lVar10 = *(longlong *)(param_1 + 0x788);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb841b8) && (FUN_144b3d300(&DAT_14cb841b8), DAT_14cb841b8 == -1))
      {
        builtin_wcsncpy(awStack_68 + 8,L"ffect",6);
        builtin_wcsncpy(awStack_68,L"kImpactE",8);
        local_78 = 0x690048;
        uStack_74 = 0x74;
        uStack_72 = 0x5f;
        uStack_70 = 0x680043;
        uStack_6c = 0x65;
        uStack_6a = 99;
        local_88 = (code *)0x690050006e004f;
        awStack_80[0] = L'c';
        awStack_80[1] = L'k';
        uStack_7c = 0x75;
        uStack_7b = 0;
        uStack_7a = 0x70;
        FUN_1446f470e(&DAT_14cb841b0,&local_88,1);
        _Init_thread_footer(&DAT_14cb841b8);
      }
      lVar14 = DAT_14cb841b0;
      if (param_1 == 0) {
        uVar19 = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(param_1 + 0xc);
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar20 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        uVar18 = *(uint *)(lVar20 + 0x10);
        if (*(uint *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar21 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          uVar18 = *(uint *)(lVar20 + 0x10);
          bVar26 = uVar18 == 0;
          if (bVar26) {
            *(uint *)(lVar20 + 0x10) = uVar21;
            uVar18 = 0;
          }
          UNLOCK();
          if (bVar26) {
            uVar18 = uVar21;
          }
        }
        uVar19 = (ulonglong)uVar18;
        if (lVar14 == 0) {
          lVar14 = 0;
        }
        else if (uVar18 == 0) {
          uVar19 = 0;
        }
        else if (((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
                  (plVar13 = (longlong *)
                             ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                  plVar13 != (longlong *)0x0)) &&
                 ((*(uint *)(plVar13 + 2) == uVar18 && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0))
                 )) && (*plVar13 != 0)) {
          FUN_1400796d0(*(undefined8 *)(*plVar13 + 0x10),lVar14,1);
        }
      }
      FUN_1400dccb8(lVar10 + 0x598,&local_90);
      awStack_80 = SUB84(lVar14,0);
      uStack_7c = (undefined1)((ulonglong)lVar14 >> 0x20);
      uStack_7b = (undefined1)((ulonglong)lVar14 >> 0x28);
      uStack_7a = (undefined2)((ulonglong)lVar14 >> 0x30);
      local_88 = (code *)((ulonglong)uVar7 | uVar19 << 0x20);
      bVar5 = FUN_140a28ca8(lVar10,local_90);
      *(byte *)(lVar10 + 0x598) = *(byte *)(lVar10 + 0x598) | bVar5;
    }
    lVar10 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x7b8))
                       (*(longlong **)(param_1 + 0x788),0,1,0xffffffff);
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) | 0x40;
    }
    uVar8 = *(undefined4 *)(local_a0 + 0x90);
    lVar10 = *(longlong *)(param_1 + 0x3f0);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x379) == '\x01')) {
      uVar8 = *(undefined4 *)(lVar10 + 0x37c);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x788) + 0x2c4) = uVar8;
    FUN_140bd5c3e(*(undefined8 *)(param_1 + 0x788));
    lVar10 = *(longlong *)(param_1 + 0x788);
    if (lVar10 != 0) {
      if (DAT_14cad2858 == 0) {
        local_88 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = (code *)&LAB_146395584;
        local_c0 = &local_88;
        local_c8 = &LAB_147a0ba80;
        local_d0 = &LAB_14575ccce;
        local_d8 = L"Engine";
        local_e0 = 0x40000000000;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        lVar10 = *(longlong *)(param_1 + 0x788);
        if (lVar10 == 0) goto LAB_143da9238;
      }
      if ((((DAT_14cad2858 != 0) && (lVar14 = *(longlong *)(lVar10 + 0x10), lVar14 != 0)) &&
          (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar14 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          == DAT_14cad2858 + 0x30)) {
        *(byte *)(lVar10 + 0xc70) = *(byte *)(lVar10 + 0xc70) | 0x10;
      }
    }
  }
LAB_143da9238:
  lVar10 = *(longlong *)(param_1 + 0x3f0);
  if (*(char *)(lVar10 + 0x279) != '\x02') {
    *(undefined1 *)(param_1 + 0x96a) = 3;
    bVar5 = *(byte *)(param_1 + 0x968);
    *(byte *)(param_1 + 0x968) = bVar5 | 0x20;
    FUN_140b3b830(param_1,*(byte *)(param_1 + 0x79c) ^ 1 | (bVar5 & 0x10) >> 4);
    lVar10 = *(longlong *)(param_1 + 0x3f0);
  }
  *(byte *)(param_1 + 0x969) = *(byte *)(param_1 + 0x969) & 0xfe | *(byte *)(lVar10 + 0x369) & 1;
  *(undefined4 *)(param_1 + 0x780) = 0;
  plVar13 = *(longlong **)(param_1 + 0x168);
  if (plVar13 != (longlong *)0x0) {
    if (DAT_14cb61cd0 == 0) {
      local_c0 = &local_88;
      local_88 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = (code *)&LAB_1463b31ae;
      local_c8 = &LAB_1486dca4f;
      local_d0 = &LAB_1464f50a6;
      local_d8 = L"Game";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
        DAT_14cb61cd0 + 0x30)) {
      uVar8 = (**(code **)(*plVar13 + 0x1070))(plVar13);
      *(undefined4 *)(param_1 + 0x780) = uVar8;
    }
  }
  lVar10 = FUN_140543396();
  if (lVar10 == 0) {
    local_a0._0_4_ = 0xffffffff;
  }
  else {
    local_a0._0_4_ = ~*(uint *)(lVar10 + 100);
  }
  iVar3 = *(int *)(param_1 + 0x268);
  puVar22 = (uint *)(param_1 + 0x250);
  if (iVar3 == 0) {
    uVar23 = 0;
    uVar19 = 1;
    iVar9 = 0;
    iVar25 = 0;
  }
  else {
    puVar15 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar15 = puVar22;
    }
    uVar7 = *puVar15;
    if (uVar7 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      uVar23 = 0;
      uVar19 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar19 = uVar23;
      }
      iVar25 = 0;
      do {
        if (uVar19 == uVar23) goto LAB_143da958c;
        iVar25 = iVar25 + 0x20;
        uVar7 = puVar15[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar23 = 0;
      iVar25 = 0;
    }
    uVar19 = (ulonglong)(-uVar7 & uVar7);
    uVar2 = uVar19 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (iVar25 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar9) {
      iVar9 = iVar3;
    }
  }
  if (iVar9 != iVar3) {
    uVar7 = 0xffffffff;
    do {
      uVar24 = uVar24 & 0xffffffff;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar9 * 0x10);
      if (lVar10 != 0) {
        if (DAT_14cac6e60 == 0) {
          local_88 = FUN_144a7958c;
          local_b0 = FUN_14081d0ea;
          local_b8 = FUN_142b47bc4;
          local_c0 = &local_88;
          local_c8 = &LAB_1478989f1;
          local_d0 = &LAB_146391124;
          local_d8 = L"Engine";
          local_e0 = 0x10000000000;
          local_e8 = 0x10000005;
          local_f0 = 0x10;
          local_f8 = 0x620;
          local_98 = puVar22;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          puVar22 = local_98;
        }
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
          uVar18 = *(uint *)(lVar10 + 0x5c8) & (uint)local_a0;
          if (*(uint *)(param_1 + 0x780) != 0) {
            uVar18 = *(uint *)(lVar10 + 0x5c8) | *(uint *)(param_1 + 0x780);
          }
          FUN_140357fa8(lVar10,uVar18,0);
        }
      }
      uVar7 = uVar7 & ~(uint)uVar19;
      puVar15 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar15 = puVar22;
      }
      iVar4 = *(int *)(param_1 + 0x268);
      iVar9 = (int)uVar23;
      lVar10 = (longlong)iVar9;
      uVar18 = puVar15[lVar10] & uVar7;
      if (uVar18 == 0) {
        iVar16 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar16 = iVar4 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar17 = iVar16;
        if (iVar16 < iVar9) {
          iVar17 = iVar9;
        }
        if (iVar9 < iVar16) {
          lVar14 = 0;
          do {
            uVar18 = puVar15[lVar10 + lVar14 + 1];
            if (uVar18 != 0) {
              uVar23 = (ulonglong)(iVar9 + (int)lVar14 + 1);
              uVar7 = 0xffffffff;
              goto LAB_143da9489;
            }
            iVar25 = iVar25 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar17 - lVar10 != lVar14);
          uVar7 = 0xffffffff;
          iVar9 = iVar17;
        }
        uVar23 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar4;
      }
      else {
LAB_143da9489:
        uVar19 = (ulonglong)(-uVar18 & uVar18);
        uVar2 = uVar19 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar9 = (iVar25 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar9) {
          iVar9 = iVar4;
        }
      }
    } while (iVar9 != iVar3);
  }
LAB_143da958c:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24 & 0xffffffff;
}



// FUNCTION 143da97e4 FUN_143da97e4 body=409 status=ok
// SIG undefined FUN_143da97e4(void)

void FUN_143da97e4(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b3c4ca(param_2);
  if (*(char *)*param_1 != '\x01') goto LAB_143da989f;
  iVar4 = 0xff;
  if (*(int *)param_1[1] < 0xff) {
    iVar4 = *(int *)param_1[1];
  }
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  if (*(int *)(param_2 + 0x33c) != iVar5) {
    *(int *)(param_2 + 0x33c) = iVar5;
    if (*(longlong *)(param_2 + 0x5a8) != 0) {
      FUN_1413672a8();
    }
  }
  puVar1 = (undefined4 *)param_1[2];
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FUN_140b3c54c(param_2,0);
  if ((**(char **)(param_2 + 0x5d0) == '\0') &&
     (**(char **)(param_2 + 0x5d0) = '\x01', (~*(byte *)(param_2 + 0x9c) & 3) == 0)) {
    bVar2 = *(byte *)(param_2 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_143da98f3:
      *(byte *)(param_2 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_2);
      FUN_14010586c(&DAT_14cad0140,param_2);
    }
    else if (*(longlong *)(param_2 + 0xb0) == 0) {
      lVar3 = FUN_1448abda6(param_2);
      if (lVar3 == 0) {
        bVar2 = *(byte *)(param_2 + 0x9d);
        goto LAB_143da98f3;
      }
    }
  }
  lVar3 = param_1[2];
  local_28 = *(undefined4 *)(lVar3 + 0x10);
  uStack_24 = *(undefined4 *)(lVar3 + 0x14);
  uStack_20 = *(undefined4 *)(lVar3 + 0x18);
  uStack_1c = *(undefined4 *)(lVar3 + 0x1c);
  FUN_140b3c54c(param_2,1);
  if ((*(char *)(*(longlong *)(param_2 + 0x5d0) + 1) == '\0') &&
     (*(undefined1 *)(*(longlong *)(param_2 + 0x5d0) + 1) = 1, (~*(byte *)(param_2 + 0x9c) & 3) == 0
     )) {
    bVar2 = *(byte *)(param_2 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_143da995a:
      *(byte *)(param_2 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if (*(longlong *)(param_2 + 0xb0) == 0) {
      lVar3 = FUN_1448abda6(param_2);
      if (lVar3 == 0) {
        bVar2 = *(byte *)(param_2 + 0x9d);
        goto LAB_143da995a;
      }
    }
  }
LAB_143da989f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143da9998 FUN_143da9998 body=635 status=ok
// SIG undefined FUN_143da9998(void)

void FUN_143da9998(longlong param_1,undefined4 *param_2,double *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
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
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x1c8) == 0) || ((*(byte *)(param_1 + 0x968) & 2) != 0))
  goto LAB_143da9b3b;
  *(undefined4 *)(param_1 + 0x93c) = 0xbf800000;
  *(byte *)(param_1 + 0x968) = *(byte *)(param_1 + 0x968) & 0xf5;
  FUN_1414f6f94(param_1);
  plVar2 = *(longlong **)(param_1 + 0x788);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)((longlong)plVar2 + 0x9c) & 8) == 0) {
      FUN_141062a52(plVar2,0);
      plVar2 = *(longlong **)(param_1 + 0x788);
    }
    (**(code **)(*plVar2 + 0x4a0))(plVar2,&DAT_14cadad9c);
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x690))(*(longlong **)(param_1 + 0x788),1);
    local_48 = *(undefined8 *)(param_2 + 4);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x700))
              (*(longlong **)(param_1 + 0x788),&local_58,1);
    local_28 = param_3[2] * 0.01745329238474369;
    local_30 = param_3[1] * 0.01745329238474369;
    local_38 = (code *)(*param_3 * 0.01745329238474369);
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x850))
              (*(longlong **)(param_1 + 0x788),&local_38,1);
    lVar3 = *(longlong *)(param_1 + 0x788);
    if (lVar3 != 0) {
      if (DAT_14cad2858 == 0) {
        local_38 = FUN_144a7958c;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_146395584;
        local_78 = &LAB_147a0ba80;
        local_80 = &LAB_14575ccce;
        local_88 = L"Engine";
        local_90 = 0x40000000000;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x1180;
        local_70 = &local_38;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        lVar3 = *(longlong *)(param_1 + 0x788);
        if (lVar3 == 0) goto LAB_143da9afa;
      }
      if ((((DAT_14cad2858 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
          (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          == DAT_14cad2858 + 0x30)) {
        FUN_1417ef39a(lVar3,0,0);
      }
    }
  }
LAB_143da9afa:
  if (*(char *)(param_1 + 0x828) == '\x01') {
    if (*(char *)(param_1 + 0x829) == '\x01') {
      (**(code **)(*(longlong *)(param_1 + 0x520) + 0x40))(param_1 + 0x520);
    }
    *(undefined2 *)(param_1 + 0x828) = 0;
  }
  if ((*(byte *)(param_1 + 100) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x9a1) = 1;
    FUN_14022e476(param_1);
  }
LAB_143da9b3b:
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da9c3e FUN_143da9c3e body=456 status=ok
// SIG undefined FUN_143da9c3e(void)

void FUN_143da9c3e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 0x788);
  if (plVar4 == (longlong *)0x0) goto LAB_143da9d30;
  if (DAT_14cad2858 == 0) {
    local_30 = &local_18;
    local_18 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146395584;
    local_38 = &LAB_147a0ba80;
    local_40 = &LAB_14575ccce;
    local_48 = L"Engine";
    local_50 = 0x40000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    plVar4 = *(longlong **)(param_1 + 0x788);
    if (plVar4 != (longlong *)0x0) goto LAB_143da9c78;
    plVar4 = (longlong *)0x0;
  }
  else {
LAB_143da9c78:
    if ((((DAT_14cad2858 != 0) && (lVar3 = plVar4[2], lVar3 != 0)) &&
        (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      lVar3 = plVar4[0x1af];
      if ((longlong)(int)lVar3 != 0) {
        lVar1 = plVar4[0x1ae];
        lVar5 = 0;
        do {
          if (((*(longlong *)(lVar1 + lVar5) != 0) &&
              (lVar2 = *(longlong *)(*(longlong *)(lVar1 + lVar5) + 0x138), lVar2 != 0)) &&
             ((lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 != 0 && (1 < *(byte *)(lVar2 + 0x90))))) {
            *(undefined1 *)(lVar2 + 0x1c1) = 0;
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)lVar3 * 8 != lVar5);
      }
      goto LAB_143da9d30;
    }
  }
  lVar3 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x138) != 0)) &&
     ((lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x138) + 0x40), lVar3 != 0 &&
      (1 < *(byte *)(lVar3 + 0x90))))) {
    *(undefined1 *)(lVar3 + 0x1c1) = 0;
  }
LAB_143da9d30:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da9e14 FUN_143da9e14 body=483 status=ok
// SIG undefined FUN_143da9e14(void)

void FUN_143da9e14(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  undefined8 uStack_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  if (lVar4 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_60 = &local_38;
      local_38 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_142b47bc4;
      local_68 = &LAB_1478989f1;
      local_70 = &LAB_146391124;
      local_78 = L"Engine";
      local_80 = 0x10000000000;
      local_88 = 0x10000005;
      local_90 = 0x10;
      local_98 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar4 = *(longlong *)(param_1 + 0x1c8);
      if (lVar4 == 0) goto LAB_143da9e81;
    }
    if ((((DAT_14cac6e60 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 != 0)) &&
        (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      FUN_1404dedd4(lVar4,&local_48);
      goto LAB_143da9e9a;
    }
  }
LAB_143da9e81:
  FUN_1478b78fc(param_1,&local_48);
LAB_143da9e9a:
  lVar4 = local_48;
  lVar5 = (longlong)(int)uStack_40;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + lVar6);
      if (lVar1 != 0) {
        lVar3 = FUN_140bedf02();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          plVar2 = *(longlong **)(param_1 + 0x1c8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x490))(plVar2,lVar1,&DAT_14cadad90,0);
          }
          break;
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143da9ff8 FUN_143da9ff8 body=69 status=ok
// SIG undefined FUN_143da9ff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143da9ff8(void)

{
  _DAT_14cb83160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143daa03a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb83168,1);
  return;
}



// FUNCTION 143daa03e FUN_143daa03e body=316 status=ok
// SIG undefined FUN_143daa03e(void)

longlong FUN_143daa03e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  
  *(undefined8 *)(param_1 + 0x18) = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x3c) = iVar4;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 *)(param_1 + 0x48) = param_5;
  if ((undefined8 *)(param_1 + 0x50) != param_4) {
    if (*(char *)(param_4 + 0xc) == '\x01') {
      puVar6 = (undefined8 *)(param_1 + 0x50);
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar6 = *param_4;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar3 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xb0) != '\x01') {
        return param_1;
      }
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0xb0) = uVar3;
  }
  return param_1;
}



// FUNCTION 143daa17a FUN_143daa17a body=41 status=ok
// SIG undefined FUN_143daa17a(void)

undefined8 FUN_143daa17a(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)param_1[3] >> 8),*(longlong *)param_1[3] != 0);
  }
  return uVar2;
}



// FUNCTION 143daa1d1 FUN_143daa1d1 body=190 status=ok
// SIG undefined FUN_143daa1d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143daa1d1(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  _DAT_14cb842d8 = &PTR_FUN_14b3e7b10;
  _DAT_14cb843d0 = 0;
  if (DAT_14cb843c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bd72(&DAT_14cb84388);
  _DAT_14cb84380 = 0;
  if (DAT_14cb84378 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bdaa(&DAT_14cb84338);
  _DAT_14cb842d8 = &PTR_LAB_14b424db0;
  if (DAT_14cb8a6f8 != (undefined *)0x0) {
    puVar1 = DAT_14cb8a6f8;
    if (DAT_14cb8a6f8 == &DAT_14cb842d8) {
      puVar3 = &DAT_14cb8a6f8;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = *(undefined **)(puVar2 + 0x28);
        if (puVar1 == (undefined *)0x0) {
          _DAT_14cb842d8 = &PTR_LAB_14b424db0;
          return;
        }
      } while (puVar1 != &DAT_14cb842d8);
      puVar3 = (undefined8 *)(puVar2 + 0x28);
    }
    *puVar3 = DAT_14cb84300;
    DAT_14cb84300 = 0;
  }
  return;
}



// FUNCTION 143daa290 FUN_143daa290 body=2495 status=ok
// SIG undefined FUN_143daa290(void)

ulonglong FUN_143daa290(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *_Src;
  longlong lVar10;
  ulonglong uVar11;
  longlong *_Dst;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong *local_1c0;
  wchar_t *local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong *local_158;
  longlong lStack_150;
  undefined1 local_148;
  undefined8 local_140;
  longlong lStack_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar11 = 0;
  FUN_1407d69ac(param_1,0);
  cVar3 = FUN_140d4c998(*(undefined8 *)(param_1 + 0x10),DAT_14cb83188,&DAT_14cb83190);
  if (cVar3 == '\0') goto LAB_143daabac;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1447715ec(&local_98,&DAT_14c9485f0);
  local_70 = 0xffffffff;
  plVar9 = *(longlong **)(param_1 + 0x10);
  local_158 = (longlong *)0x0;
  lStack_150 = 0;
  local_148 = 2;
  local_140 = 0;
  lStack_138 = 0;
  local_130 = 2;
  if (plVar9 != (longlong *)0x0) {
    FUN_140d4cc24(plVar9,1);
    lStack_150 = plVar9[0xd];
    local_158 = plVar9;
    if (lStack_150 == 0) {
      lStack_138 = 0;
    }
    else {
      lStack_138 = *(longlong *)(lStack_150 + 0x48);
    }
  }
  local_140 = 0;
  local_148 = 2;
  plVar6 = (longlong *)FUN_140bddbca(&local_158,&DAT_14cb841d0,&local_98);
  if (plVar6 == (longlong *)0x0) {
LAB_143daa3dc:
    *(undefined8 *)(param_1 + 0x28) = 0;
    if ((int)local_98 == 0) {
      if ((short)local_70 == -1) goto LAB_143daa427;
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)0x0;
      if (((int)local_98 == DAT_14c948000 || local_98._4_4_ == 0) && ((short)local_70 == -1)) {
LAB_143daa427:
        plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),local_70._2_2_ == -1);
      }
    }
    uVar11 = (ulonglong)plVar9 ^ 1;
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar8 = FUN_14042c486();
    plVar9 = plVar6;
    if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_143daa3dc;
    *(longlong **)(param_1 + 0x28) = plVar6;
    uVar11 = 0;
  }
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_140de9ff0(&local_158,&local_178,0);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_1447715ec(&local_c8,&DAT_14c9485f0);
  local_a0 = 0xffffffff;
  local_1a8 = 0;
  lStack_1a0 = 0;
  local_198 = 2;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 2;
  if ((lStack_138 != 0) && (*(longlong *)(lStack_138 + 0x58) != 0)) {
    lStack_1a0 = lStack_138;
    uStack_188 = *(undefined8 *)(lStack_138 + 0x48);
    local_1a8 = *(longlong *)(lStack_138 + 0x58);
  }
  plVar9 = (longlong *)FUN_140bddbca(&local_1a8,&DAT_14cb841d0,&local_c8);
  if (plVar9 == (longlong *)0x0) {
LAB_143daa51a:
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar9 = (longlong *)FUN_140bddbca(&local_1a8,&DAT_14cb841d0,&local_c8);
    if (plVar9 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar9 + 8))(plVar9);
      lVar8 = FUN_140a90a2c();
      if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        iVar4 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar4 + 1U) {
          FUN_140a96716((longlong *)(param_1 + 0x38),iVar4);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 8) = plVar9;
        goto LAB_143daa5ca;
      }
    }
    if ((int)local_c8 == 0) {
      if ((short)local_a0 == -1) goto LAB_143daa5b9;
      bVar13 = false;
    }
    else {
      bVar13 = false;
      if (((int)local_c8 == DAT_14c948000 || local_c8._4_4_ == 0) && ((short)local_a0 == -1)) {
LAB_143daa5b9:
        bVar13 = local_a0._2_2_ == -1;
      }
    }
    uVar11 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 | bVar13 ^ 1U);
  }
  else {
    lVar7 = (**(code **)(*plVar9 + 8))(plVar9);
    lVar8 = FUN_14005f2f0();
    if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_143daa51a;
    *(longlong **)(param_1 + 0x30) = plVar9;
  }
LAB_143daa5ca:
  cVar3 = FUN_140bdd98c(&local_1a8);
  local_1c8 = param_1;
  if (cVar3 != '\0') {
    local_1c0 = (longlong *)(param_1 + 0x38);
    do {
      local_f8 = (wchar_t *)0x0;
      uStack_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      FUN_1447715ec(&local_f8,&DAT_14c9485f0);
      local_d0 = 0xffffffff;
      plVar9 = (longlong *)FUN_140bddbca(&local_1a8,&DAT_14cb841d0,&local_f8);
      if (plVar9 == (longlong *)0x0) {
LAB_143daa67f:
        if ((int)local_f8 == 0) {
          if ((short)local_d0 == -1) goto LAB_143daa6bf;
          bVar13 = false;
        }
        else {
          bVar13 = false;
          if (((int)local_f8 == DAT_14c948000 || local_f8._4_4_ == 0) && ((short)local_d0 == -1)) {
LAB_143daa6bf:
            bVar13 = local_d0._2_2_ == -1;
          }
        }
        uVar11 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 | bVar13 ^ 1U);
      }
      else {
        lVar7 = (**(code **)(*plVar9 + 8))(plVar9);
        lVar8 = FUN_140a90a2c();
        if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)) goto LAB_143daa67f;
        iVar4 = *(int *)(local_1c8 + 0x40);
        *(uint *)(local_1c8 + 0x40) = iVar4 + 1U;
        if (*(uint *)(local_1c8 + 0x44) < iVar4 + 1U) {
          FUN_140a96716(local_1c0,iVar4);
        }
        *(longlong **)(*local_1c0 + (longlong)iVar4 * 8) = plVar9;
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_140bdd98c(&local_1a8);
    } while (cVar3 != '\0');
  }
  FUN_140bdd98c(&local_158);
  lVar7 = local_1c8;
  if (lStack_150 != 0) {
    local_1b8 = (wchar_t *)0x0;
    uStack_1b0 = 0;
    FUN_140bddd88(lStack_150,&local_1b8,0);
    lVar7 = local_1c8;
    if (1 < (int)uStack_1b0) {
      FUN_1400b22c2(&local_f8,&DAT_14a157a0f);
      pwVar2 = local_f8;
      if ((int)uStack_1b0 == (int)uStack_f0) {
        bVar13 = true;
        if (1 < (int)uStack_1b0) {
          iVar4 = wcscmp(local_1b8,local_f8);
          bVar13 = iVar4 == 0;
        }
      }
      else {
        bVar13 = (int)uStack_f0 + (int)uStack_1b0 == 1;
      }
      if (pwVar2 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar2);
      }
      if (bVar13) {
        local_f8 = (wchar_t *)0x0;
        uStack_f0 = 0;
        local_e8 = CONCAT31(local_e8._1_3_,2);
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = CONCAT31(local_d0._1_3_,2);
        if ((lStack_138 != 0) && (*(wchar_t **)(lStack_138 + 0x58) != (wchar_t *)0x0)) {
          uStack_f0 = lStack_138;
          uStack_d8 = *(undefined8 *)(lStack_138 + 0x48);
          local_f8 = *(wchar_t **)(lStack_138 + 0x58);
        }
        local_1c0 = (longlong *)(lVar7 + 0x48);
        do {
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          local_110 = 0;
          uStack_108 = 0;
          FUN_1447715ec(&local_128,&DAT_14c9485f0);
          local_100 = 0xffffffff;
          plVar9 = (longlong *)FUN_140bddbca(&local_f8,&DAT_14cb842d8,&local_128);
          if (plVar9 == (longlong *)0x0) {
LAB_143daa8d2:
            if ((int)local_128 == 0) {
              if ((short)local_100 == -1) goto LAB_143daa912;
              bVar13 = false;
            }
            else {
              bVar13 = false;
              if (((int)local_128 == DAT_14c948000 || local_128._4_4_ == 0) &&
                 ((short)local_100 == -1)) {
LAB_143daa912:
                bVar13 = local_100._2_2_ == -1;
              }
            }
            uVar11 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 | bVar13 ^ 1U);
          }
          else {
            lVar7 = (**(code **)(*plVar9 + 8))(plVar9);
            lVar8 = FUN_141340f56();
            if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                lVar8 + 0x30)) goto LAB_143daa8d2;
            iVar4 = *(int *)(local_1c8 + 0x50);
            *(uint *)(local_1c8 + 0x50) = iVar4 + 1U;
            if (*(uint *)(local_1c8 + 0x54) < iVar4 + 1U) {
              FUN_141895c4e(local_1c0,iVar4);
            }
            *(longlong **)(*local_1c0 + (longlong)iVar4 * 8) = plVar9;
          }
          if (local_110 != 0) {
            FUN_1400020a8();
          }
          cVar3 = FUN_140bdd98c(&local_f8);
          lVar7 = local_1c8;
        } while (cVar3 != '\0');
      }
    }
    if (local_1b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(lVar7 + 0x58) = 0;
  FUN_1407d6a19(*(undefined8 *)(lVar7 + 0x60),*(undefined4 *)(lVar7 + 0x68));
  *(undefined4 *)(lVar7 + 0x68) = 0;
  if (*(int *)(lVar7 + 0x6c) != 0) {
    FUN_1407d6aba(lVar7 + 0x60,0);
  }
  lVar8 = local_178;
  lVar12 = (longlong)(int)uStack_170;
  if (lVar12 != 0) {
    lVar10 = 0;
    do {
      lVar1 = *(longlong *)(lVar8 + lVar10);
      if (((*(longlong *)(lVar1 + 0x20) != 0) || (*(short *)(lVar1 + 0x30) != -1)) &&
         ((-1 < *(short *)(lVar1 + 0xc) || (*(longlong *)(lVar1 + 4) != 0)))) {
        plVar9 = (longlong *)FUN_1408fbec4(lVar7 + 0x60);
        if (*(longlong *)(lVar1 + 4) != 0) {
          *plVar9 = *(longlong *)(lVar1 + 4);
        }
        if (0 < *(short *)(lVar1 + 0xc)) {
          *(short *)(plVar9 + 1) = *(short *)(lVar1 + 0xc);
        }
        if (*(longlong *)(lVar1 + 0x20) == 0) {
          if ((longlong)*(short *)(lVar1 + 0x30) == -2) {
            if (0 < *(int *)(lVar1 + 0x40)) {
              plVar6 = *(longlong **)(lVar1 + 0x38);
              _Dst = plVar9 + 3;
              if (_Dst != plVar6) {
                uVar5 = (int)plVar6[3] + 0x1fU & 0xffffffe0;
                *(undefined4 *)(plVar9 + 6) = 0;
                if ((*(int *)((longlong)plVar9 + 0x34) < (int)uVar5) ||
                   (0x80 < *(int *)((longlong)plVar9 + 0x34))) {
                  if ((int)uVar5 < 0x81) {
                    uVar5 = 0x80;
                  }
                  *(uint *)((longlong)plVar9 + 0x34) = uVar5;
                  FUN_1446efbd8(_Dst,0);
                }
                iVar4 = (int)plVar6[3];
                *(int *)(plVar9 + 6) = iVar4;
                if (iVar4 != 0) {
                  _Src = (longlong *)plVar6[2];
                  if ((longlong *)plVar6[2] == (longlong *)0x0) {
                    _Src = plVar6;
                  }
                  if ((longlong *)plVar9[5] != (longlong *)0x0) {
                    _Dst = (longlong *)plVar9[5];
                  }
                  memcpy(_Dst,_Src,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
                }
              }
            }
          }
          else {
            plVar9[2] = (longlong)*(short *)(lVar1 + 0x30);
          }
        }
        else {
          FUN_1400b22c2(&local_f8);
          if (plVar9 + 7 == &local_f8) {
            if (local_f8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (plVar9[7] != 0) {
              FUN_1400020a8();
            }
            plVar9[7] = (longlong)local_f8;
            local_f8 = (wchar_t *)0x0;
            *(int *)(plVar9 + 8) = (int)uStack_f0;
            *(undefined4 *)((longlong)plVar9 + 0x44) = uStack_f0._4_4_;
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while (lVar12 * 8 != lVar10);
  }
  *(undefined1 *)(local_1c8 + 0x20) = 1;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1408348da(&local_178);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  uVar11 = uVar11 ^ 1;
LAB_143daabac:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar11 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143daac50 FUN_143daac50 body=69 status=ok
// SIG undefined FUN_143daac50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143daac50(void)

{
  _DAT_14cb831f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143daac92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb83200,1);
  return;
}



// FUNCTION 143daac96 FUN_143daac96 body=62 status=ok
// SIG undefined FUN_143daac96(void)

ulonglong FUN_143daac96(longlong param_1)

{
  float fVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  fVar1 = *(float *)(param_1 + 0xc);
  auVar3 = ZEXT416((uint)fVar1);
  cVar2 = *(char *)(param_1 + 0x14);
  if (cVar2 == '\x03') {
    auVar3 = roundps(auVar3,ZEXT416((uint)fVar1),2);
    return auVar3._0_8_;
  }
  if (cVar2 != '\x02') {
    if (cVar2 != '\x01') {
      return (ulonglong)(uint)fVar1;
    }
    auVar3 = ZEXT416((uint)(fVar1 + 0.5));
  }
  auVar3 = roundps(auVar3,ZEXT416(auVar3._0_4_),1);
  return auVar3._0_8_;
}



// FUNCTION 143daacd4 FUN_143daacd4 body=212 status=ok
// SIG undefined FUN_143daacd4(void)

void FUN_143daacd4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar2 = *(int *)(param_1 + 0x114);
  FUN_140944385(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x110) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x114) != 0)) {
    FUN_140ae7778(param_1 + 0x108,0);
  }
  iVar2 = *(int *)(param_1 + 0x124);
  FUN_140944221(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x124) != 0)) {
    FUN_1488d2c18(param_1 + 0x118);
  }
  FUN_1488cd3de(param_1 + 0x148);
  FUN_1488cd3de(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x140) = 0;
  return;
}



// FUNCTION 143daada8 FUN_143daada8 body=4 status=ok
// SIG undefined FUN_143daada8(void)

undefined4 FUN_143daada8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 143daadac FUN_143daadac body=1 status=ok
// SIG undefined FUN_143daadac(void)

void FUN_143daadac(void)

{
  return;
}



// FUNCTION 143daadad FUN_143daadad body=64 status=ok
// SIG undefined FUN_143daadad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143daadad(void)

{
  if (DAT_14cb832e0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb832d8 = 0;
  if (DAT_14cb832d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb83290);
  return;
}



// FUNCTION 143daaded FUN_143daaded body=64 status=ok
// SIG undefined FUN_143daaded(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143daaded(void)

{
  if (DAT_14cb83360 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb83358 = 0;
  if (DAT_14cb83350 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb83310);
  return;
}



// FUNCTION 143daae39 FUN_143daae39 body=69 status=ok
// SIG undefined FUN_143daae39(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143daae39(void)

{
  _DAT_14cb83548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143daae7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb83550,1);
  return;
}



// FUNCTION 143daae98 FUN_143daae98 body=670 status=ok
// SIG undefined FUN_143daae98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143daae98(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  DAT_14cb835c8 = 0;
  if (DAT_14cb835c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb835a8 == 0) {
    uVar10 = 0;
    uVar11 = 1;
    iVar7 = 0;
    iVar2 = 0;
  }
  else {
    puVar6 = &DAT_14cb83590;
    if (DAT_14cb835a0 != (uint *)0x0) {
      puVar6 = DAT_14cb835a0;
    }
    uVar8 = *puVar6;
    if (uVar8 == 0) {
      iVar2 = DAT_14cb835a8 + 0x1e;
      if (-1 < DAT_14cb835a8 + -1) {
        iVar2 = DAT_14cb835a8 + -1;
      }
      uVar10 = 0;
      uVar11 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar11 = uVar10;
      }
      iVar7 = 0;
      do {
        if (uVar11 == uVar10) goto LAB_143dab08e;
        iVar7 = iVar7 + 0x20;
        uVar8 = puVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar10 = 0;
      iVar7 = 0;
    }
    uVar11 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar2 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (DAT_14cb835a8 <= iVar2) {
      iVar2 = DAT_14cb835a8;
    }
  }
  if (iVar2 < DAT_14cb835a8) {
    uVar8 = 0xffffffff;
    do {
      lVar9 = DAT_14cb83580;
      lVar12 = (longlong)iVar2 * 0x60;
      *(undefined4 *)(DAT_14cb83580 + 0x50 + lVar12) = 0;
      if (*(longlong *)(lVar9 + 0x48 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + lVar12;
      *(undefined4 *)(lVar9 + 0x10) = 0;
      if (*(int *)(lVar9 + 0x14) != 0) {
        FUN_1446f4a44((longlong *)(lVar9 + 8),0);
      }
      *(undefined8 *)(lVar9 + 0x38) = 0xffffffff;
      *(undefined4 *)(lVar9 + 0x30) = 0;
      if (0x80 < *(uint *)(lVar9 + 0x34)) {
        *(undefined4 *)(lVar9 + 0x34) = 0x80;
        FUN_1446efbd8(lVar9 + 0x18,0);
      }
      if (*(longlong *)(lVar9 + 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar9 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 & ~(uint)uVar11;
      puVar6 = DAT_14cb835a0;
      if (DAT_14cb835a0 == (uint *)0x0) {
        puVar6 = &DAT_14cb83590;
      }
      iVar2 = (int)uVar10;
      lVar9 = (longlong)iVar2;
      uVar3 = puVar6[lVar9] & uVar8;
      if (uVar3 == 0) {
        iVar4 = DAT_14cb835a8 + 0x1e;
        if (-1 < DAT_14cb835a8 + -1) {
          iVar4 = DAT_14cb835a8 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) break;
        lVar12 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar3 = puVar6[lVar9 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar5 - lVar9 == lVar12) goto LAB_143dab08e;
        }
        uVar10 = (ulonglong)(iVar2 + (int)lVar12 + 1);
        uVar8 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar2 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar2 < DAT_14cb835a8);
  }
LAB_143dab08e:
  DAT_14cb83588 = 0;
  if (DAT_14cb8358c != 0) {
    FUN_1448fc38a(&DAT_14cb83580,0);
  }
  _DAT_14cb835b0 = 0xffffffff;
  DAT_14cb835a8 = 0;
  if (0x80 < DAT_14cb835ac) {
    DAT_14cb835ac = 0x80;
    FUN_1446efbd8(&DAT_14cb83590,0);
  }
  if (DAT_14cb835a0 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb83580 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143dab1c6 FUN_143dab1c6 body=232 status=ok
// SIG undefined FUN_143dab1c6(void)

void FUN_143dab1c6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x39) != '\x01') || (*(longlong *)(param_1 + 0x40) != DAT_14c872be0)) {
    *(longlong *)(param_1 + 0x40) = DAT_14c872be0;
    *(undefined2 *)(param_1 + 0x38) = 0x100;
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x128;
      lVar3 = *(longlong *)(param_1 + 0x48) + 8;
      do {
        lVar1 = FUN_140372754(lVar3);
        if ((lVar1 != 0) &&
           ((lVar2 = FUN_140d2f9d0(lVar1), lVar2 == 0 ||
            (lVar1 = FUN_1488ce926(lVar2,lVar1), lVar1 != 0)))) {
          FUN_140cddd76(lVar1);
          if (*(byte *)(param_1 + 0x38) < *(byte *)(lVar1 + 0x38)) {
            *(byte *)(param_1 + 0x38) = *(byte *)(lVar1 + 0x38);
          }
        }
        lVar3 = lVar3 + 0x128;
        lVar4 = lVar4 + -0x128;
      } while (lVar4 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
      lVar4 = (longlong)*(int *)(param_1 + 0x60) * 0x18;
      do {
        lVar1 = FUN_1488ceeca(lVar3);
        if (lVar1 != 0) {
          FUN_143dab1c6(lVar1);
          if (*(byte *)(param_1 + 0x38) < *(byte *)(lVar1 + 0x38)) {
            *(byte *)(param_1 + 0x38) = *(byte *)(lVar1 + 0x38);
          }
        }
        lVar3 = lVar3 + 0x18;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143dab2ae FUN_143dab2ae body=5801 status=ok
// SIG undefined FUN_143dab2ae(void)

ulonglong FUN_143dab2ae(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                       undefined4 param_5,int param_6,undefined4 param_7,int param_8,
                       undefined8 param_9,undefined1 param_10,undefined8 param_11,
                       undefined4 param_12,undefined1 param_13,undefined1 param_14,uint param_15)

{
  undefined8 *puVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong *plVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  longlong unaff_R13;
  undefined4 *puVar34;
  undefined7 uVar35;
  longlong lVar36;
  uint uVar37;
  undefined8 *puVar38;
  undefined4 uVar39;
  float fVar40;
  undefined1 auStack_3a8 [32];
  undefined4 local_388;
  int local_380;
  undefined8 local_378;
  int local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_340;
  uint local_338;
  undefined1 local_328;
  uint local_320;
  longlong *local_318;
  longlong local_310;
  longlong *local_308;
  longlong local_300;
  longlong local_2f8;
  uint *local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  ulonglong local_2d8;
  int local_2d0;
  int local_2cc;
  longlong local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 *local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  float local_238;
  float local_234;
  longlong *local_230;
  int local_228;
  undefined4 local_224;
  float local_21c;
  longlong local_218;
  undefined8 uStack_210;
  int local_1fc;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined1 local_1f0 [256];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_1f4 = 0;
  iVar23 = 0;
  local_f0 = 0;
  local_e8 = 0x1000000000;
  local_d8 = 0;
  local_d0 = 0;
  uStack_cc = 0x20;
  uStack_c8 = 0xffffffff;
  uStack_c4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_1f8 = 0;
  local_2f8 = param_3;
  local_2c8 = param_1;
  FUN_140a8e708(local_1f0,*(undefined4 *)(*param_2 + 0x20));
  local_288 = (ulonglong)local_288._4_4_ << 0x20;
  lVar36 = *param_2;
  local_2c0 = param_2;
  if (0 < *(int *)(lVar36 + 0x20)) {
    do {
      if (param_4 == 0) {
        uVar39 = 0x3f800000;
LAB_143dab44e:
        FUN_140a8d520(&local_1f8,uVar39);
      }
      else {
        lVar36 = *(longlong *)(lVar36 + 0x18);
        unaff_R13 = (longlong)iVar23;
        uVar14 = *(undefined8 *)(lVar36 + unaff_R13 * 8);
        lVar7 = FUN_140c7c082(param_4 + 8);
        lVar9 = lVar7 + 0x30;
        if (lVar7 == 0) {
          lVar9 = param_4 + 0x20;
        }
        cVar5 = FUN_140cde234(lVar9,uVar14);
        if (cVar5 != '\0') {
          local_218 = CONCAT44(local_218._4_4_,0x3f800000);
          local_230 = (longlong *)CONCAT44(local_230._4_4_,1);
          if ((((param_15 & 2) != 0) ||
              (cVar5 = FUN_140c7bf14(param_4,*(undefined8 *)(lVar36 + unaff_R13 * 8),param_9,
                                     &local_230), cVar5 == '\0')) || ((int)local_230 <= param_6)) {
            FUN_141894c3a(param_4,*(undefined8 *)(lVar36 + unaff_R13 * 8),param_9,&local_218);
            uVar39 = (undefined4)local_218;
            goto LAB_143dab44e;
          }
        }
      }
      iVar23 = (int)local_288 + 1;
      local_288 = CONCAT44(local_288._4_4_,iVar23);
      lVar36 = *local_2c0;
    } while (iVar23 < *(int *)(lVar36 + 0x20));
  }
  lVar36 = local_2f8;
  puVar34 = (undefined4 *)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_14);
  local_2e8 = *(longlong *)(local_2f8 + 0x18);
  cVar5 = FUN_143dac95a(&local_1f8,&local_1fc);
  if (cVar5 != '\0') {
    lVar9 = lVar36 + 0x70;
    local_2b0 = local_2e8 + 8;
    local_2b8 = local_2e8 + 0x20;
    local_2a8 = (undefined8 *)(lVar36 + 0x20);
    local_308 = (longlong *)0x0;
    lVar7 = local_2c8;
    do {
      plVar11 = (longlong *)(*(longlong *)(*local_2c0 + 0x18) + (longlong)local_1fc * 8);
      local_2d0 = *(int *)(lVar7 + 8);
      if ((int)((longlong *)*plVar11)[2] == 0) {
        plVar24 = *(longlong **)*plVar11;
        if (plVar24 == (longlong *)0x0) {
          local_288 = 0;
        }
        else {
          local_288 = *plVar24;
        }
        uVar14 = FUN_140cde484(lVar36,&local_288);
        local_340 = CONCAT71(local_340._1_7_,(char)puVar34);
        local_348 = CONCAT71(local_348._1_7_,param_13);
        local_358 = param_11;
        local_360 = CONCAT31(local_360._1_3_,param_10);
        local_368 = param_9;
        local_370 = param_8;
        local_378 = CONCAT44(local_378._4_4_,param_7);
        local_380 = param_6;
        local_388 = param_5;
        uStack_350 = CONCAT44(uStack_350._4_4_,0x3f800000);
        local_338 = param_15;
        cVar5 = FUN_143dab2ae(lVar7,plVar11,lVar36,uVar14);
      }
      else {
        local_218 = 0;
        uStack_210 = 0;
        iVar23 = *(int *)(*plVar11 + 0x10);
        if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar23);
        }
        if (iVar23 != 0) {
          FUN_1418963e0(&local_218);
          lVar7 = (longlong)*(int *)(*plVar11 + 0x10);
          if (lVar7 != 0) {
            puVar22 = *(undefined8 **)(*plVar11 + 8);
            local_290 = puVar22 + lVar7;
            local_300 = lVar9;
            do {
              plVar11 = (longlong *)*puVar22;
              lVar7 = (ulonglong)*(ushort *)((longlong)plVar11 + 0x386) * 0x20;
              if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar7) != 0) {
                lVar7 = *(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar7;
                lVar8 = (longlong)*(int *)(lVar7 + 0x18);
                if (lVar8 != 0) {
                  lVar28 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar28) != 0) {
                      cVar5 = FUN_1405d595e(lVar9);
                      if (cVar5 != '\0') goto LAB_143dab889;
                      break;
                    }
                    lVar28 = lVar28 + 8;
                  } while (lVar8 * 8 != lVar28);
                }
              }
              iVar23 = -1;
              if (((param_15 & 2) != 0) ||
                 (iVar23 = FUN_14005f6be(plVar11,param_9), iVar23 <= param_6)) {
                lVar7 = *(longlong *)(lVar36 + 0x10);
                local_21c = 1.0;
                if ((lVar7 == 0) || (lVar9 = FUN_140a2d0dc(plVar11), lVar9 == 0)) {
LAB_143dab6fd:
                  local_230 = (longlong *)0x0;
                  local_228 = (int)plVar11[0x82];
                  lVar9 = (longlong)local_228;
                  _Src = (void *)plVar11[0x81];
                  if (lVar9 == 0) {
                    local_224 = 0;
LAB_143dab7b7:
                    uVar16 = uStack_210;
                    local_288 = CONCAT44(local_288._4_4_,local_21c);
                    local_260 = 0;
                    uStack_258 = 0;
                    local_270 = 0;
                    uStack_268 = 0;
                    local_280 = 0;
                    uStack_278 = 0;
                    local_250 = 0xf00000d0;
                    local_248 = 0;
                    local_240 = 0x3f800000;
                    lVar9 = (longlong)(int)uStack_210;
                    uVar18 = (int)uStack_210 + 1;
                    uStack_210 = CONCAT44(uStack_210._4_4_,uVar18);
                    if (uStack_210._4_4_ < uVar18) {
                      FUN_1418964ba(&local_218,uVar16 & 0xffffffff);
                    }
                    FUN_1418956f4(lVar9 * 0xc0 + local_218,plVar11);
                    *(int *)(local_218 + 0xb8 + (longlong)((int)uStack_210 + -1) * 0xc0) = iVar23;
                    lVar9 = local_300;
                  }
                  else {
                    FUN_140c7c212(&local_230,local_228,0);
                    memcpy(local_230,_Src,lVar9 << 3);
                    if ((longlong)local_228 < 1) goto LAB_143dab7b7;
                    if (plVar11[0x4d] == 0) {
                      plVar11 = local_230 + local_228;
                      lVar7 = 0;
LAB_143dab8b6:
                      local_298 = lVar7 + 8;
                      local_2a0 = lVar7 + 0x20;
                      plVar24 = local_230;
                      lVar9 = local_300;
                      local_318 = plVar11;
                      local_310 = lVar7;
                      do {
                        lVar8 = *plVar24;
                        if ((*(byte *)(lVar8 + 0x150) & 8) == 0) {
                          lVar28 = (ulonglong)*(ushort *)(lVar8 + 0x15a) * 0x20;
                          if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar28) != 0)
                          {
                            lVar28 = *(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar28;
                            lVar10 = (longlong)*(int *)(lVar28 + 0x18);
                            if (lVar10 != 0) {
                              lVar29 = 0;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar29) != 0) {
                                  cVar5 = FUN_1405d595e(lVar9);
                                  plVar11 = local_318;
                                  if (cVar5 != '\0') goto LAB_143dac4e3;
                                  break;
                                }
                                lVar29 = lVar29 + 8;
                              } while (lVar10 * 8 != lVar29);
                            }
                          }
                          iVar23 = -1;
                          if (((param_15 & 2) != 0) ||
                             (iVar23 = FUN_14005f32a(lVar8), plVar11 = local_318, iVar23 <= param_6)
                             ) {
                            local_234 = 1.0;
                            local_2cc = iVar23;
                            if (lVar7 == 0) {
LAB_143daba0a:
                              if (((local_2e8 == 0) || (lVar7 = FUN_14087df18(lVar8), lVar7 == 0))
                                 || (*(longlong *)(lVar7 + 0x208) == 0)) {
                                fVar40 = 1.0;
LAB_143dabae7:
                                if (*(longlong *)(lVar8 + 0x130) != 0) {
                                  lVar28 = FUN_140cde484(lVar36);
                                  if ((lVar28 == 0) &&
                                     (plVar11 = local_318, lVar7 = local_310,
                                     (*(byte *)(lVar8 + 0x150) & 2) != 0)) goto LAB_143dac4e3;
                                  if (lVar28 == 0) goto LAB_143dac098;
                                  puVar34 = (undefined4 *)(lVar8 + 0x148);
                                  lVar7 = *(longlong *)(lVar8 + 0x148);
                                  lVar10 = FUN_140c7c082(lVar28 + 8);
                                  if (lVar7 == 0) {
                                    if (lVar10 != 0) {
                                      cVar5 = *(char *)(lVar10 + 0x50);
                                      goto joined_r0x000143dabb79;
                                    }
                                    if (*(char *)(lVar28 + 0xe0) != '\x01') goto LAB_143dac4c3;
                                  }
                                  else {
                                    lVar7 = lVar28 + 0x20;
                                    if (lVar10 != 0) {
                                      lVar7 = lVar10 + 0x30;
                                    }
                                    cVar5 = FUN_140cde234(lVar7,puVar34);
joined_r0x000143dabb79:
                                    if (cVar5 == '\0') goto LAB_143dac4c3;
                                  }
                                  local_288 = CONCAT44(local_288._4_4_,1);
                                  if ((((param_15 & 2) == 0) &&
                                      (cVar5 = FUN_1488ccc98(lVar28,(ulonglong)
                                                                    *(ushort *)(lVar8 + 0x158) *
                                                                    0x20 + *(longlong *)
                                                                            (DAT_14cb848c0 + 0x3a8),
                                                             param_9,&local_288), cVar5 != '\0')) &&
                                     (param_6 < (int)local_288)) goto LAB_143dac4c3;
                                  local_238 = 1.0;
                                  cVar5 = FUN_141894c3a(lVar28,puVar34,param_9,&local_238);
                                  if (cVar5 != '\0') {
                                    local_234 = local_238 * local_234;
                                  }
                                }
LAB_143dac098:
                                puVar38 = *(undefined8 **)(lVar36 + 0x60);
                                if (*(undefined8 **)(lVar36 + 0x60) == (undefined8 *)0x0) {
                                  puVar38 = local_2a8;
                                }
                                if ((longlong)*(int *)(lVar36 + 0x68) != 0) {
                                  puVar1 = puVar38 + *(int *)(lVar36 + 0x68);
                                  do {
                                    puVar34 = (undefined4 *)*puVar38;
                                    puVar30 = puVar34 + 2;
                                    lVar36 = FUN_140c7c082(puVar30);
                                    puVar17 = (undefined4 *)(lVar36 + 0x30);
                                    if (lVar36 == 0) {
                                      puVar17 = puVar34 + 8;
                                    }
                                    if ((*(longlong *)(puVar17 + 2) != 0) &&
                                       ((longlong)(int)puVar17[6] != 0)) {
                                      lVar36 = 0;
                                      do {
                                        if (*(longlong *)(*(longlong *)(puVar17 + 4) + lVar36) != 0)
                                        {
                                          lVar36 = FUN_140c7c082(puVar30);
                                          if (lVar36 == 0) {
                                            cVar5 = *(char *)(puVar34 + 0x38);
                                          }
                                          else {
                                            cVar5 = *(char *)(lVar36 + 0x50);
                                          }
                                          if (cVar5 == '\0') {
                                            puVar34 = (undefined4 *)
                                                      ((ulonglong)*(ushort *)(lVar8 + 0x15c) * 0x20
                                                      + *(longlong *)(DAT_14cb848c0 + 0x3a8));
                                            FUN_140c7c082(puVar30);
                                            cVar5 = FUN_1405d595e(puVar34);
                                            if (cVar5 == '\0') {
                                              puVar34 = (undefined4 *)
                                                        CONCAT71((int7)((ulonglong)puVar34 >> 8),
                                                                 param_14);
                                              plVar11 = local_318;
                                              lVar36 = local_2f8;
                                              lVar7 = local_310;
                                              lVar9 = local_300;
                                              goto LAB_143dac4e3;
                                            }
                                          }
                                          break;
                                        }
                                        lVar36 = lVar36 + 8;
                                      } while ((longlong)(int)puVar17[6] * 8 != lVar36);
                                    }
                                    puVar38 = puVar38 + 1;
                                  } while (puVar38 != puVar1);
                                }
                                uVar16 = uStack_210;
                                lVar9 = local_300;
                                local_288 = CONCAT44(local_288._4_4_,fVar40 * local_21c * local_234)
                                ;
                                local_260 = 0;
                                uStack_258 = 0;
                                local_270 = 0;
                                uStack_268 = 0;
                                local_280 = 0;
                                uStack_278 = 0;
                                local_250 = 0xf00000d0;
                                local_248 = 0;
                                local_240 = 0x3f800000;
                                lVar36 = (longlong)(int)uStack_210;
                                uVar18 = (int)uStack_210 + 1;
                                uStack_210 = CONCAT44(uStack_210._4_4_,uVar18);
                                puVar34 = (undefined4 *)
                                          CONCAT71((int7)((ulonglong)puVar34 >> 8),param_14);
                                if (uStack_210._4_4_ < uVar18) {
                                  FUN_1418964ba(&local_218,uVar16 & 0xffffffff);
                                }
                                FUN_1418956f4(lVar36 * 0xc0 + local_218,lVar8);
                                *(int *)(local_218 + 0xb8 + (longlong)((int)uStack_210 + -1) * 0xc0)
                                     = local_2cc;
                                plVar11 = local_318;
                                lVar36 = local_2f8;
                                lVar7 = local_310;
                              }
                              else {
                                plVar11 = local_308;
                                if (local_308 == (longlong *)0x0) {
                                  plVar11 = (longlong *)FUN_143dacb49(param_9,local_2e8);
                                }
                                uVar37 = (int)((ulonglong)lVar7 >> 0x20) * 0x17 + (int)lVar7;
                                uVar18 = *(uint *)(plVar11 + 1);
                                uVar16 = (ulonglong)uVar18;
                                uVar25 = *(uint *)((longlong)plVar11 + 0x34);
                                local_308 = plVar11;
                                if (uVar18 != uVar25) {
                                  plVar13 = plVar11 + 7;
                                  if ((longlong *)plVar11[8] != (longlong *)0x0) {
                                    plVar13 = (longlong *)plVar11[8];
                                  }
                                  iVar23 = *(int *)((longlong)plVar13 +
                                                   (ulonglong)((int)plVar11[9] - 1U & uVar37) * 4);
                                  if (iVar23 != -1) {
                                    do {
                                      lVar28 = *plVar11 + (longlong)iVar23 * 0x20;
                                      if (*(longlong *)(*plVar11 + (longlong)iVar23 * 0x20) == lVar7
                                         ) {
                                        if (lVar28 != 0) goto LAB_143dac3b7;
                                        break;
                                      }
                                      iVar23 = *(int *)(lVar28 + 0x18);
                                    } while (iVar23 != -1);
                                  }
                                }
                                if (uVar25 == 0) {
                                  *(uint *)(plVar11 + 1) = uVar18 + 1;
                                  if (*(uint *)((longlong)plVar11 + 0xc) == uVar18) {
                                    FUN_1447711aa(plVar11,uVar16);
                                  }
                                  iVar23 = (int)plVar11[5];
                                  if (iVar23 == 0) {
                                    iVar33 = -1;
                                  }
                                  else {
                                    iVar33 = iVar23 + 0x1e;
                                    if (-1 < iVar23 + -1) {
                                      iVar33 = iVar23 + -1;
                                    }
                                    iVar33 = iVar33 >> 5;
                                  }
                                  plVar13 = plVar11 + 2;
                                  iVar19 = iVar23 + 1;
                                  iVar26 = iVar23 + 0x1f;
                                  if (-1 < iVar23) {
                                    iVar26 = iVar23;
                                  }
                                  iVar26 = iVar26 >> 5;
                                  if (iVar26 == iVar33) {
                                    *(int *)(plVar11 + 5) = iVar19;
                                  }
                                  else {
                                    if (*(int *)((longlong)plVar11 + 0x2c) <= iVar23) {
                                      local_2f0 = (uint *)CONCAT44(local_2f0._4_4_,iVar26);
                                      local_2e0 = uVar16;
                                      iVar33 = iVar23;
                                      if (iVar23 + 0x20U < 0xa0) {
                                        iVar19 = 0x80;
                                      }
                                      else {
                                        uVar18 = iVar23 + 0x20U >> 5;
                                        if (*(int *)((longlong)plVar11 + 0x2c) + 0x1fU < 0xa0) {
                                          uVar25 = 4;
                                          if (4 < uVar18) {
                                            uVar25 = uVar18;
                                          }
                                        }
                                        else {
                                          uVar25 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
                                        }
                                        uVar16 = (ulonglong)(uVar25 * 4);
                                        if (DAT_14c872d28 != (longlong *)0x0) {
                                          if (*(code **)(*DAT_14c872d28 + 0x60) ==
                                              (code *)&LAB_14489e5c8) {
                                            uVar6 = (uint)(uVar16 + 0xf);
                                            if (uVar25 < 0x1ffd) {
                                              uVar16 = (ulonglong)
                                                       (ushort)(&DAT_14c841d90)
                                                               [0x32 - (byte)(&DAT_14c841e00)
                                                                             [uVar16 + 0xf >> 4]];
                                            }
                                            else {
                                              uVar31 = (ulonglong)(uVar6 & 0xfffffff0);
                                              plVar11 = local_308;
                                              if (uVar31 < 0x7ff1) {
                                                bVar15 = (&DAT_14c841e00)[uVar6 >> 4];
                                                uVar21 = 0x32;
                                                if (0x32 < bVar15) {
                                                  uVar21 = (ulonglong)bVar15;
                                                }
                                                uVar32 = 0x32 - (ulonglong)bVar15;
                                                do {
                                                  uVar16 = (ulonglong)
                                                           (ushort)(&DAT_14c841d90)
                                                                   [uVar32 & 0xffffffff];
                                                  if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf)
                                                      == 0) goto LAB_143dac5f8;
                                                  lVar36 = uVar21 + 1 + uVar32;
                                                  uVar32 = uVar32 - 1;
                                                } while (lVar36 != 0x33);
                                              }
                                              uVar16 = (ulonglong)DAT_14c841df8;
                                              if (DAT_14c841df8 < 0x11) {
                                                uVar16 = 0x10;
                                              }
                                              uVar16 = -uVar16 & (uVar31 + uVar16) - 1;
                                            }
                                          }
                                          else {
                                            local_2d8 = (ulonglong)uVar18;
                                            uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                               (DAT_14c872d28,uVar16,0);
                                            uVar18 = (uint)local_2d8;
                                            iVar33 = (int)plVar11[5];
                                          }
                                        }
LAB_143dac5f8:
                                        iVar26 = (int)(uVar16 >> 2);
                                        iVar19 = iVar26 << 5;
                                        if (iVar26 < (int)uVar18) {
                                          iVar19 = -0x20;
                                        }
                                      }
                                      *(int *)((longlong)plVar11 + 0x2c) = iVar19;
                                      FUN_1446efbd8(plVar13,iVar33);
                                      iVar19 = (int)plVar11[5] + 1;
                                      uVar16 = local_2e0;
                                      iVar26 = (int)local_2f0;
                                    }
                                    iVar33 = iVar19 + 0x1f;
                                    if (-1 < iVar19) {
                                      iVar33 = iVar19;
                                    }
                                    *(int *)(plVar11 + 5) = iVar19;
                                    if (iVar19 % 0x20 != 0) {
                                      plVar20 = (longlong *)plVar11[4];
                                      if ((longlong *)plVar11[4] == (longlong *)0x0) {
                                        plVar20 = plVar13;
                                      }
                                      bVar15 = -(char)(iVar19 % 0x20);
                                      *(uint *)((longlong)plVar20 + (longlong)(iVar33 >> 5) * 4) =
                                           (uint)(*(int *)((longlong)plVar20 +
                                                          (longlong)(iVar33 >> 5) * 4) <<
                                                 (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
                                    }
                                  }
                                  lVar36 = (longlong)(int)uVar16;
                                  if ((longlong *)plVar11[4] != (longlong *)0x0) {
                                    plVar13 = (longlong *)plVar11[4];
                                  }
                                  bVar15 = (byte)iVar23 & 0x1f;
                                  puVar12 = (uint *)((longlong)plVar13 + (longlong)iVar26 * 4);
                                  *puVar12 = *puVar12 &
                                             (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                                }
                                else {
                                  uVar16 = (ulonglong)*(uint *)(plVar11 + 6);
                                  lVar36 = (longlong)(int)*(uint *)(plVar11 + 6);
                                  iVar23 = *(int *)(*plVar11 + 4 + lVar36 * 0x20);
                                  *(int *)(plVar11 + 6) = iVar23;
                                  *(uint *)((longlong)plVar11 + 0x34) = uVar25 - 1;
                                  if (uVar25 - 1 != 0) {
                                    *(undefined4 *)(*plVar11 + (longlong)iVar23 * 0x20) = 0xffffffff
                                    ;
                                  }
                                }
                                local_2f0 = (uint *)(plVar11 + 2);
                                puVar34 = (undefined4 *)&DAT_00000001;
                                iVar23 = (int)uVar16;
                                uVar18 = 1 << ((byte)uVar16 & 0x1f);
                                puVar12 = (uint *)plVar11[4];
                                if ((uint *)plVar11[4] == (uint *)0x0) {
                                  puVar12 = local_2f0;
                                }
                                iVar33 = iVar23 + 0x1f;
                                if (-1 < iVar23) {
                                  iVar33 = iVar23;
                                }
                                puVar12[iVar33 >> 5] = puVar12[iVar33 >> 5] | uVar18;
                                lVar9 = *plVar11;
                                local_2d8 = lVar36 * 0x20;
                                puVar30 = (undefined4 *)(lVar9 + local_2d8);
                                *(longlong *)(lVar9 + local_2d8) = lVar7;
                                *(undefined8 *)(lVar9 + 8 + local_2d8) = 0;
                                *(undefined4 *)(lVar9 + 0x10 + local_2d8) = 0;
                                *(undefined4 *)(lVar9 + 0x18 + local_2d8) = 0xffffffff;
                                uVar25 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
                                if (uVar25 == 1) {
LAB_143dabd57:
                                  iVar33 = (int)plVar11[9];
                                  if ((int)puVar34 <= iVar33) goto LAB_143dabd96;
                                  *(int *)(plVar11 + 9) = (int)puVar34;
                                  plVar13 = plVar11 + 8;
                                  if (plVar11[8] == 0) {
                                    lVar36 = 0;
LAB_143dabde2:
                                    uVar18 = (uint)puVar34;
                                    if ((1 < uVar18) || (lVar36 != 0)) {
                                      puVar30 = (undefined4 *)0x0;
                                      if (1 < uVar18) {
                                        puVar30 = puVar34;
                                      }
                                      FUN_1446efa72(plVar13,0,puVar30,4);
                                    }
                                    plVar13 = plVar11 + 7;
                                    if (0 < (int)uVar18) {
                                      uVar25 = 0;
                                      do {
                                        plVar20 = (longlong *)plVar11[8];
                                        if ((longlong *)plVar11[8] == (longlong *)0x0) {
                                          plVar20 = plVar13;
                                        }
                                        *(undefined4 *)
                                         ((longlong)plVar20 +
                                         (ulonglong)((int)plVar11[9] + 0x7fffffffU & uVar25) * 4) =
                                             0xffffffff;
                                        uVar25 = uVar25 + 1;
                                      } while (uVar18 != uVar25);
                                    }
                                    iVar23 = (int)plVar11[5];
                                    if (iVar23 == 0) {
                                      uVar16 = 0;
                                      uVar31 = 1;
                                      iVar19 = 0;
                                      iVar33 = 0;
                                    }
                                    else {
                                      puVar12 = (uint *)plVar11[4];
                                      if ((uint *)plVar11[4] == (uint *)0x0) {
                                        puVar12 = local_2f0;
                                      }
                                      uVar18 = *puVar12;
                                      if (uVar18 == 0) {
                                        iVar33 = iVar23 + 0x1e;
                                        if (-1 < iVar23 + -1) {
                                          iVar33 = iVar23 + -1;
                                        }
                                        uVar16 = 0;
                                        uVar31 = (ulonglong)(uint)(iVar33 >> 5);
                                        if (iVar33 >> 5 < 1) {
                                          uVar31 = uVar16;
                                        }
                                        iVar19 = 0;
                                        do {
                                          if (uVar31 == uVar16) goto LAB_143dac3a3;
                                          iVar19 = iVar19 + 0x20;
                                          uVar18 = puVar12[uVar16 + 1];
                                          uVar16 = uVar16 + 1;
                                        } while (uVar18 == 0);
                                      }
                                      else {
                                        uVar16 = 0;
                                        iVar19 = 0;
                                      }
                                      uVar31 = (ulonglong)(-uVar18 & uVar18);
                                      uVar21 = uVar31 * 2 + 1;
                                      lVar36 = 0x3f;
                                      if (uVar21 != 0) {
                                        for (; uVar21 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                                        }
                                      }
                                      iVar33 = (iVar19 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                                      if (iVar23 <= iVar33) {
                                        iVar33 = iVar23;
                                      }
                                    }
                                    if (iVar33 < iVar23) {
                                      uVar18 = 0xffffffff;
                                      do {
                                        lVar36 = *plVar11;
                                        lVar9 = (longlong)iVar33 * 0x20;
                                        puVar34 = (undefined4 *)
                                                  ((longlong)
                                                   ((int)((ulonglong)*(undefined8 *)(lVar36 + lVar9)
                                                         >> 0x20) * 0x17 +
                                                   (int)*(undefined8 *)(lVar36 + lVar9)) &
                                                  (longlong)(int)local_308[9] - 1U);
                                        *(int *)(lVar36 + 0x1c + lVar9) = (int)puVar34;
                                        plVar11 = (longlong *)local_308[8];
                                        if ((longlong *)local_308[8] == (longlong *)0x0) {
                                          plVar11 = plVar13;
                                        }
                                        *(undefined4 *)(lVar36 + 0x18 + lVar9) =
                                             *(undefined4 *)
                                              ((longlong)plVar11 +
                                              ((longlong)(int)local_308[9] - 1U & (ulonglong)puVar34
                                              ) * 4);
                                        plVar11 = (longlong *)local_308[8];
                                        if ((longlong *)local_308[8] == (longlong *)0x0) {
                                          plVar11 = plVar13;
                                        }
                                        *(int *)((longlong)plVar11 +
                                                ((longlong)(int)puVar34 &
                                                (longlong)(int)local_308[9] - 1U) * 4) = iVar33;
                                        uVar18 = ~(uint)uVar31 & uVar18;
                                        puVar12 = (uint *)local_308[4];
                                        if ((uint *)local_308[4] == (uint *)0x0) {
                                          puVar12 = local_2f0;
                                        }
                                        iVar23 = (int)local_308[5];
                                        iVar33 = (int)uVar16;
                                        lVar36 = (longlong)iVar33;
                                        uVar25 = puVar12[lVar36] & uVar18;
                                        plVar11 = local_308;
                                        if (uVar25 == 0) {
                                          iVar26 = iVar23 + 0x1e;
                                          if (-1 < iVar23 + -1) {
                                            iVar26 = iVar23 + -1;
                                          }
                                          iVar26 = iVar26 >> 5;
                                          iVar27 = iVar26;
                                          if (iVar26 < iVar33) {
                                            iVar27 = iVar33;
                                          }
                                          if (iVar26 <= iVar33) break;
                                          lVar9 = 0;
                                          while( true ) {
                                            iVar19 = iVar19 + 0x20;
                                            uVar25 = puVar12[lVar36 + lVar9 + 1];
                                            if (uVar25 != 0) break;
                                            lVar9 = lVar9 + 1;
                                            if (iVar27 - lVar36 == lVar9) goto LAB_143dac3a3;
                                          }
                                          uVar16 = (ulonglong)(iVar33 + (int)lVar9 + 1);
                                          uVar18 = 0xffffffff;
                                        }
                                        uVar31 = (ulonglong)(-uVar25 & uVar25);
                                        uVar21 = uVar31 * 2 + 1;
                                        lVar36 = 0x3f;
                                        if (uVar21 != 0) {
                                          for (; uVar21 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                                          }
                                        }
                                        iVar33 = (iVar19 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                                      } while (iVar33 < iVar23);
                                    }
                                  }
                                  else {
                                    FUN_1446efa72(plVar13,0,0,4);
                                    puVar34 = (undefined4 *)(ulonglong)*(uint *)(plVar11 + 9);
                                    if (*(uint *)(plVar11 + 9) != 0) {
                                      lVar36 = *plVar13;
                                      goto LAB_143dabde2;
                                    }
                                  }
                                }
                                else {
                                  local_2e0 = uVar16;
                                  if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
                                    plVar13 = plVar11 + 7;
                                    if ((longlong *)plVar11[8] != (longlong *)0x0) {
                                      plVar13 = (longlong *)plVar11[8];
                                    }
                                    iVar19 = *(int *)((longlong)plVar13 +
                                                     (ulonglong)((int)plVar11[9] - 1U & uVar37) * 4)
                                    ;
                                    if (iVar19 != -1) {
                                      do {
                                        puVar17 = (undefined4 *)(*plVar11 + (longlong)iVar19 * 0x20)
                                        ;
                                        if (*(longlong *)(*plVar11 + (longlong)iVar19 * 0x20) ==
                                            lVar7) {
                                          uVar39 = *puVar30;
                                          uVar2 = puVar30[1];
                                          uVar3 = puVar30[2];
                                          uVar4 = puVar30[3];
                                          *(undefined8 *)(puVar17 + 4) =
                                               *(undefined8 *)(puVar30 + 4);
                                          *puVar17 = uVar39;
                                          puVar17[1] = uVar2;
                                          puVar17[2] = uVar3;
                                          puVar17[3] = uVar4;
                                          lVar36 = *plVar11;
                                          if (*(int *)((longlong)plVar11 + 0x34) != 0) {
                                            *(int *)(lVar36 + (longlong)(int)plVar11[6] * 0x20) =
                                                 iVar23;
                                          }
                                          *(undefined4 *)(lVar36 + local_2d8) = 0xffffffff;
                                          if (*(int *)((longlong)plVar11 + 0x34) < 1) {
                                            uVar39 = 0xffffffff;
                                          }
                                          else {
                                            uVar39 = (undefined4)plVar11[6];
                                          }
                                          *(undefined4 *)(lVar36 + local_2d8 + 4) = uVar39;
                                          *(int *)(plVar11 + 6) = iVar23;
                                          *(int *)((longlong)plVar11 + 0x34) =
                                               *(int *)((longlong)plVar11 + 0x34) + 1;
                                          puVar12 = local_2f0;
                                          if ((uint *)plVar11[4] != (uint *)0x0) {
                                            puVar12 = (uint *)plVar11[4];
                                          }
                                          puVar12[iVar33 >> 5] = puVar12[iVar33 >> 5] & ~uVar18;
                                          goto LAB_143dac3a3;
                                        }
                                        iVar19 = puVar17[6];
                                      } while (iVar19 != -1);
                                    }
                                  }
                                  puVar34 = (undefined4 *)&DAT_00000001;
                                  if (3 < uVar25) {
                                    uVar16 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
                                    lVar36 = 0x3f;
                                    if (uVar16 != 0) {
                                      for (; uVar16 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                                      }
                                    }
                                    puVar34 = (undefined4 *)
                                              (ulonglong)(uint)(1 << ((byte)lVar36 & 0x1f));
                                  }
                                  if (0 < (int)uVar25) goto LAB_143dabd57;
                                  iVar33 = (int)plVar11[9];
LAB_143dabd96:
                                  uVar37 = iVar33 - 1U & uVar37;
                                  puVar30[7] = uVar37;
                                  plVar13 = (longlong *)plVar11[8];
                                  if ((longlong *)plVar11[8] == (longlong *)0x0) {
                                    plVar13 = plVar11 + 7;
                                  }
                                  puVar30[6] = *(undefined4 *)
                                                ((longlong)plVar13 +
                                                ((longlong)(int)plVar11[9] - 1U &
                                                (longlong)(int)uVar37) * 4);
                                  plVar13 = (longlong *)plVar11[8];
                                  if ((longlong *)plVar11[8] == (longlong *)0x0) {
                                    plVar13 = plVar11 + 7;
                                  }
                                  *(int *)((longlong)plVar13 +
                                          ((longlong)(int)plVar11[9] - 1U & (longlong)(int)uVar37) *
                                          4) = iVar23;
                                }
LAB_143dac3a3:
                                lVar28 = *plVar11 + local_2d8;
LAB_143dac3b7:
                                lVar9 = local_300;
                                if (*(char *)(lVar28 + 8) != '\0') {
LAB_143dac3c5:
                                  uVar35 = (undefined7)((ulonglong)puVar34 >> 8);
                                  lVar36 = local_2f8;
                                  plVar11 = local_318;
                                  lVar7 = local_310;
                                  if (*(char *)(lVar28 + 9) == '\0') {
                                    puVar34 = (undefined4 *)CONCAT71(uVar35,param_14);
                                    if (((param_15 & 2) != 0) || (*(int *)(lVar28 + 0xc) <= param_6)
                                       ) {
                                      fVar40 = *(float *)(lVar28 + 0x10);
                                      goto LAB_143dabae7;
                                    }
                                  }
                                  else {
                                    puVar34 = (undefined4 *)CONCAT71(uVar35,param_14);
                                  }
                                  goto LAB_143dac4e3;
                                }
                                lVar7 = lVar7 + 0x208;
                                *(char *)(lVar28 + 8) = '\x01';
                                lVar10 = FUN_140c7c082(local_2b0);
                                lVar36 = lVar10 + 0x30;
                                if (lVar10 == 0) {
                                  lVar36 = local_2b8;
                                }
                                cVar5 = FUN_140cde234(lVar36,lVar7);
                                if (cVar5 != '\0') {
                                  cVar5 = FUN_140c7bf14(local_2e8,lVar7,param_9,
                                                        (undefined4 *)(lVar28 + 0xc));
                                  if (cVar5 == '\0') {
                                    *(undefined4 *)(lVar28 + 0xc) = 1;
                                  }
                                  puVar34 = (undefined4 *)(lVar28 + 0x10);
                                  cVar5 = FUN_141894c3a(local_2e8,lVar7,param_9,puVar34);
                                  if (cVar5 == '\0') {
                                    *puVar34 = 0x3f800000;
                                  }
                                  goto LAB_143dac3c5;
                                }
                                *(undefined1 *)(lVar28 + 9) = 1;
                                lVar36 = local_2f8;
LAB_143dac4c3:
                                puVar34 = (undefined4 *)
                                          CONCAT71((int7)((ulonglong)puVar34 >> 8),param_14);
                                plVar11 = local_318;
                                lVar7 = local_310;
                              }
                            }
                            else {
                              plVar11 = local_318;
                              if (*(longlong *)(lVar8 + 0x140) != 0) {
                                lVar28 = FUN_140c7c082(local_298);
                                lVar7 = lVar28 + 0x30;
                                if (lVar28 == 0) {
                                  lVar7 = local_2a0;
                                }
                                cVar5 = FUN_140cde234(lVar7,lVar8 + 0x140);
                                plVar11 = local_318;
                                lVar7 = local_310;
                                if (cVar5 != '\0') {
                                  local_288 = CONCAT44(local_288._4_4_,1);
                                  if ((((param_15 & 2) != 0) ||
                                      (cVar5 = FUN_1488ccc98(local_310,
                                                             (ulonglong)*(ushort *)(lVar8 + 0x158) *
                                                             0x20 + *(longlong *)
                                                                     (DAT_14cb848c0 + 0x3a8),param_9
                                                             ,&local_288), cVar5 == '\0')) ||
                                     (plVar11 = local_318, lVar7 = local_310,
                                     (int)local_288 <= param_6)) {
                                    FUN_141894c3a(local_310,lVar8 + 0x140,param_9,&local_234);
                                    goto LAB_143daba0a;
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_143dac4e3:
                        plVar24 = plVar24 + 1;
                      } while (plVar24 != plVar11);
                    }
                    else {
                      lVar7 = FUN_140cde484(lVar36,plVar11 + 0x4d);
                      lVar9 = local_300;
                      if ((longlong)local_228 != 0) {
                        plVar11 = local_230 + local_228;
                        goto LAB_143dab8b6;
                      }
                    }
                  }
                  plVar11 = local_230;
                  if (local_230 != (longlong *)0x0) {
                    FUN_1400020a8(local_230);
                  }
                }
                else {
                  lVar8 = FUN_140a2d0dc(plVar11);
                  lVar28 = FUN_140c7c082(lVar7 + 8);
                  lVar9 = lVar7 + 0x20;
                  if (lVar28 != 0) {
                    lVar9 = lVar28 + 0x30;
                  }
                  cVar5 = FUN_140cde234(lVar9,lVar8 + 0xf0);
                  lVar9 = local_300;
                  if (cVar5 != '\0') {
                    local_288 = CONCAT44(local_288._4_4_,1);
                    if ((((param_15 & 2) != 0) ||
                        (cVar5 = FUN_140c7bf14(lVar7,lVar8 + 0xf0,param_9,&local_288), cVar5 == '\0'
                        )) || (lVar9 = local_300, (int)local_288 <= param_6)) {
                      lVar9 = FUN_140a2d0dc(plVar11);
                      FUN_141894c3a(lVar7,lVar9 + 0xf0,param_9,&local_21c);
                      goto LAB_143dab6fd;
                    }
                  }
                }
              }
LAB_143dab889:
              puVar22 = puVar22 + 1;
            } while (puVar22 != local_290);
          }
        }
        lVar7 = local_2c8;
        local_328 = SUB81(puVar34,0);
        local_338 = CONCAT31(local_338._1_3_,param_13);
        local_358 = 0;
        uStack_350 = 0;
        local_360 = param_12;
        local_368 = param_11;
        local_370 = CONCAT31(local_370._1_3_,param_10);
        local_378 = param_9;
        local_380 = param_8;
        local_388 = param_7;
        local_348 = 0;
        local_340 = lVar36;
        local_320 = param_15;
        cVar5 = FUN_14145a380(local_2c8,&local_218,param_5,param_6);
        FUN_1404858e9(local_218,uStack_210 & 0xffffffff);
        if (local_218 != 0) {
          FUN_1400020a8();
        }
      }
      if (((char)puVar34 == '\0') &&
         ((uVar16 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1), cVar5 != '\0' ||
          (local_2d0 != *(int *)(lVar7 + 8))))) goto LAB_143dac8d4;
      FUN_145b23e28(&local_1f8,&local_1fc);
      cVar5 = FUN_143dac95a(&local_1f8,&local_1fc);
    } while (cVar5 != '\0');
  }
  uVar16 = ((ulonglong)puVar34 ^ 1) & 0xffffffff;
LAB_143dac8d4:
  local_98 = 0;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a8dac6(local_1f0);
  if ((local_90 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 143dac95a FUN_143dac95a body=495 status=ok
// SIG undefined FUN_143dac95a(void)

undefined8 FUN_143dac95a(float *param_1,float *param_2)

{
  ulonglong uVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  
  uVar4 = rand();
  fVar16 = ((float)(uVar4 & 0x7fff) / 32767.0) * *param_1;
  fVar2 = param_1[0x4a];
  if (fVar2 == 0.0) {
    uVar12 = 1;
    uVar9 = 0;
    fVar13 = 0.0;
    iVar10 = 0;
  }
  else {
    pfVar7 = *(float **)(param_1 + 0x48);
    if (*(float **)(param_1 + 0x48) == (float *)0x0) {
      pfVar7 = param_1 + 0x46;
    }
    fVar13 = *pfVar7;
    if (fVar13 == 0.0) {
      iVar10 = (int)fVar2 + 0x1e;
      if (-1 < (int)fVar2 + -1) {
        iVar10 = (int)fVar2 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar12 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar9) {
          return 0;
        }
        iVar10 = iVar10 + 0x20;
        fVar13 = pfVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (fVar13 == 0.0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-(int)fVar13 & (uint)fVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    fVar13 = (float)((iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e);
    if ((int)fVar2 <= (int)fVar13) {
      fVar13 = fVar2;
    }
  }
  if (fVar13 != fVar2) {
    pfVar7 = param_1 + 2;
    if (*(float **)(param_1 + 0x42) != (float *)0x0) {
      pfVar7 = *(float **)(param_1 + 0x42);
    }
    uVar4 = 0xffffffff;
    fVar17 = 0.0;
    do {
      bVar3 = fVar17 <= fVar16;
      fVar17 = fVar17 + pfVar7[(longlong)(int)fVar13 * 4 + 1];
      if ((bVar3) && (fVar16 <= fVar17)) {
        fVar2 = pfVar7[(longlong)(int)fVar13 * 4];
        *param_2 = fVar2;
        return CONCAT71((uint7)(uint3)((uint)fVar2 >> 8),1);
      }
      uVar4 = uVar4 & ~(uint)uVar12;
      pfVar14 = *(float **)(param_1 + 0x48);
      if (*(float **)(param_1 + 0x48) == (float *)0x0) {
        pfVar14 = param_1 + 0x46;
      }
      iVar8 = (int)uVar9;
      lVar11 = (longlong)iVar8;
      fVar13 = (float)((uint)pfVar14[lVar11] & uVar4);
      if (fVar13 == 0.0) {
        iVar5 = (int)fVar2 + -1;
        if ((int)fVar2 + -1 < 0) {
          iVar5 = (int)fVar2 + 0x1e;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar5 <= iVar8) {
          return 0;
        }
        lVar15 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          fVar13 = pfVar14[lVar11 + lVar15 + 1];
          if (fVar13 != 0.0) break;
          lVar15 = lVar15 + 1;
          if (iVar6 - lVar11 == lVar15) {
            return 0;
          }
        }
        uVar9 = (ulonglong)(iVar8 + (int)lVar15 + 1);
        uVar4 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-(int)fVar13 & (uint)fVar13);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      fVar13 = (float)((iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e);
    } while ((int)fVar13 < (int)fVar2);
  }
  return 0;
}



// FUNCTION 143dacb49 FUN_143dacb49 body=3871 status=ok
// SIG undefined FUN_143dacb49(void)

/* WARNING: Removing unreachable block (ram,0x000143dad194) */
/* WARNING: Removing unreachable block (ram,0x000143dad1a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143dacb49(longlong param_1,ulonglong param_2)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int *_Src;
  undefined *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98 [11];
  
  iVar15 = DAT_14cb835a8;
  local_98[10] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb84188 != DAT_14c872be0) {
    DAT_14cb84188 = DAT_14c872be0;
    if (DAT_14cb83588 != DAT_14cb835b4) {
      puVar18 = &DAT_14cb835b8;
      if (DAT_14cb835c0 != (undefined *)0x0) {
        puVar18 = DAT_14cb835c0;
      }
      uVar16 = DAT_14cb835c8 + 3;
      if (-1 < (int)DAT_14cb835c8) {
        uVar16 = DAT_14cb835c8;
      }
      if (DAT_14cb83588 - DAT_14cb835b4 < (int)uVar16 >> 2) {
        if (DAT_14cb835a8 == 0) {
          uVar21 = 1;
          iVar7 = 0;
          uVar2 = 0;
          iVar6 = 0;
        }
        else {
          puVar10 = &DAT_14cb83590;
          if (DAT_14cb835a0 != (uint *)0x0) {
            puVar10 = DAT_14cb835a0;
          }
          uVar16 = *puVar10;
          if (uVar16 == 0) {
            iVar7 = DAT_14cb835a8 + 0x1e;
            if (-1 < DAT_14cb835a8 + -1) {
              iVar7 = DAT_14cb835a8 + -1;
            }
            uVar2 = 0;
            uVar5 = iVar7 >> 5;
            if (iVar7 >> 5 < 1) {
              uVar5 = 0;
            }
            iVar7 = 0;
            do {
              if (uVar5 == uVar2) goto LAB_143dacc97;
              iVar7 = iVar7 + 0x20;
              uVar16 = puVar10[uVar2 + 1];
              uVar2 = uVar2 + 1;
            } while (uVar16 == 0);
          }
          else {
            iVar7 = 0;
            uVar2 = 0;
          }
          uVar21 = (ulonglong)(-uVar16 & uVar16);
          uVar19 = uVar21 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar6 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (DAT_14cb835a8 <= iVar6) {
            iVar6 = DAT_14cb835a8;
          }
        }
        if (iVar6 != DAT_14cb835a8) {
          uVar16 = 0xffffffff;
          do {
            *(undefined4 *)
             (puVar18 + (longlong)*(int *)(DAT_14cb83580 + 0x5c + (longlong)iVar6 * 0x60) * 4) =
                 0xffffffff;
            uVar16 = ~(uint)uVar21 & uVar16;
            puVar10 = DAT_14cb835a0;
            if (DAT_14cb835a0 == (uint *)0x0) {
              puVar10 = &DAT_14cb83590;
            }
            iVar6 = (int)uVar2;
            lVar14 = (longlong)iVar6;
            uVar5 = puVar10[lVar14] & uVar16;
            if (uVar5 == 0) {
              iVar8 = DAT_14cb835a8 + 0x1e;
              if (-1 < DAT_14cb835a8 + -1) {
                iVar8 = DAT_14cb835a8 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar7 = iVar7 + 0x20;
              iVar12 = iVar8;
              if (iVar8 < iVar6) {
                iVar12 = iVar6;
              }
              if (iVar6 < iVar8) {
                lVar17 = 0;
                do {
                  uVar5 = puVar10[lVar14 + lVar17 + 1];
                  if (uVar5 != 0) {
                    uVar2 = (ulonglong)(iVar6 + (int)lVar17 + 1);
                    uVar16 = 0xffffffff;
                    goto LAB_143dad893;
                  }
                  iVar7 = iVar7 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar12 - lVar14 != lVar17);
                uVar16 = 0xffffffff;
                lVar14 = (longlong)iVar12;
              }
              uVar2 = lVar14 + 1U & 0xffffffff;
              iVar6 = DAT_14cb835a8;
            }
            else {
LAB_143dad893:
              uVar21 = (ulonglong)(-uVar5 & uVar5);
              uVar19 = uVar21 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar6 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              if (DAT_14cb835a8 <= iVar6) {
                iVar6 = DAT_14cb835a8;
              }
            }
          } while (iVar6 != iVar15);
        }
      }
      else if (0 < (int)DAT_14cb835c8) {
        lVar14 = 0;
        do {
          *(undefined4 *)(puVar18 + lVar14 * 4) = 0xffffffff;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)DAT_14cb835c8);
      }
LAB_143dacc97:
      local_a8 = param_1;
      local_a0 = param_2;
      if (DAT_14cb835a8 == 0) {
        uVar21 = 1;
        iVar15 = 0;
        uVar2 = 0;
        iVar7 = 0;
      }
      else {
        puVar10 = &DAT_14cb83590;
        if (DAT_14cb835a0 != (uint *)0x0) {
          puVar10 = DAT_14cb835a0;
        }
        uVar16 = *puVar10;
        if (uVar16 == 0) {
          iVar15 = DAT_14cb835a8 + 0x1e;
          if (-1 < DAT_14cb835a8 + -1) {
            iVar15 = DAT_14cb835a8 + -1;
          }
          uVar2 = 0;
          uVar19 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar19 = uVar2;
          }
          iVar15 = 0;
          do {
            if (uVar19 == uVar2) goto LAB_143dace72;
            iVar15 = iVar15 + 0x20;
            uVar16 = puVar10[uVar2 + 1];
            uVar2 = uVar2 + 1;
          } while (uVar16 == 0);
        }
        else {
          iVar15 = 0;
          uVar2 = 0;
        }
        uVar21 = (ulonglong)(-uVar16 & uVar16);
        uVar19 = uVar21 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (DAT_14cb835a8 <= iVar7) {
          iVar7 = DAT_14cb835a8;
        }
      }
      if (iVar7 < DAT_14cb835a8) {
        uVar16 = 0xffffffff;
        do {
          lVar14 = DAT_14cb83580;
          lVar17 = (longlong)iVar7 * 0x60;
          *(undefined4 *)(DAT_14cb83580 + 0x50 + lVar17) = 0;
          if (*(longlong *)(lVar14 + 0x48 + lVar17) != 0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + lVar17;
          *(undefined4 *)(lVar14 + 0x10) = 0;
          if (*(int *)(lVar14 + 0x14) != 0) {
            FUN_1446f4a44((longlong *)(lVar14 + 8),0);
          }
          *(undefined8 *)(lVar14 + 0x38) = 0xffffffff;
          *(undefined4 *)(lVar14 + 0x30) = 0;
          if (0x80 < *(uint *)(lVar14 + 0x34)) {
            *(undefined4 *)(lVar14 + 0x34) = 0x80;
            FUN_1446efbd8(lVar14 + 0x18,0);
          }
          if (*(longlong *)(lVar14 + 0x28) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar14 + 8) != 0) {
            FUN_1400020a8();
          }
          uVar16 = uVar16 & ~(uint)uVar21;
          puVar10 = DAT_14cb835a0;
          if (DAT_14cb835a0 == (uint *)0x0) {
            puVar10 = &DAT_14cb83590;
          }
          iVar7 = (int)uVar2;
          lVar14 = (longlong)iVar7;
          uVar5 = puVar10[lVar14] & uVar16;
          if (uVar5 == 0) {
            iVar6 = DAT_14cb835a8 + 0x1e;
            if (-1 < DAT_14cb835a8 + -1) {
              iVar6 = DAT_14cb835a8 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar8 = iVar6;
            if (iVar6 < iVar7) {
              iVar8 = iVar7;
            }
            if (iVar6 <= iVar7) break;
            lVar17 = 0;
            while( true ) {
              iVar15 = iVar15 + 0x20;
              uVar5 = puVar10[lVar14 + lVar17 + 1];
              if (uVar5 != 0) break;
              lVar17 = lVar17 + 1;
              if (iVar8 - lVar14 == lVar17) goto LAB_143dace72;
            }
            uVar2 = (ulonglong)(iVar7 + (int)lVar17 + 1);
            uVar16 = 0xffffffff;
          }
          uVar21 = (ulonglong)(-uVar5 & uVar5);
          uVar19 = uVar21 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < DAT_14cb835a8);
      }
LAB_143dace72:
      DAT_14cb83588 = 0;
      if (DAT_14cb8358c < 0) {
        FUN_1448fc38a(&DAT_14cb83580,0);
      }
      _DAT_14cb835b0 = 0xffffffff;
      DAT_14cb835a8 = 0;
      param_2 = local_a0;
      param_1 = local_a8;
    }
  }
  uVar16 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_140c7c082(param_2 + 8);
    if (uVar2 == 0) {
      uVar16 = (uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4);
    }
    else {
      uVar16 = (uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4);
    }
    uVar16 = (uVar16 * -0x7a143595 >> 0xd ^ uVar16 * -0x7a143595) * -0x3d4d51cb;
    uVar16 = uVar16 >> 0x10 ^ uVar16;
  }
  uVar2 = FUN_1447262c2(param_1);
  uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + uVar16 + 0x9e3779b9 ^ uVar5;
  if (((longlong)*(int *)(param_1 + 0x28) != 0) &&
     (lVar14 = FUN_140a495b0(DAT_14c9a3da0 + (longlong)*(int *)(param_1 + 0x28) * 0x10 + -0x10),
     lVar14 != 0)) {
    if (*(int *)(lVar14 + 0xc) == 0) {
LAB_143dad8f6:
      uVar2 = 0;
    }
    else {
      uVar16 = *(uint *)(lVar14 + 8);
      uVar2 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        puVar3 = (ulonglong *)
                 ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((puVar3 == (ulonglong *)0x0) ||
           (((int)puVar3[2] != *(int *)(lVar14 + 0xc) || ((puVar3[1] & 0x10200000) != 0))))
        goto LAB_143dad8f6;
        uVar2 = *puVar3;
      }
    }
    uVar16 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
    uVar5 = uVar5 ^ (uVar16 >> 0x10 ^ uVar16) + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9;
  }
  iVar15 = DAT_14cb83588;
  if (DAT_14cb83588 != DAT_14cb835b4) {
    puVar18 = &DAT_14cb835b8;
    if (DAT_14cb835c0 != (undefined *)0x0) {
      puVar18 = DAT_14cb835c0;
    }
    iVar7 = *(int *)(puVar18 + (ulonglong)(DAT_14cb835c8 - 1 & uVar5) * 4);
    while (iVar7 != -1) {
      lVar14 = DAT_14cb83580 + (longlong)iVar7 * 0x60;
      if (*(uint *)(DAT_14cb83580 + (longlong)iVar7 * 0x60) == uVar5) {
        if (lVar14 != 0) goto LAB_143dad75d;
        break;
      }
      iVar7 = *(int *)(lVar14 + 0x58);
    }
  }
  if (DAT_14cb835b4 == 0) {
    iVar7 = DAT_14cb83588 + 1;
    bVar23 = DAT_14cb8358c == DAT_14cb83588;
    DAT_14cb83588 = iVar7;
    if (bVar23) {
      FUN_14488f93c(&DAT_14cb83580,iVar15);
    }
    iVar7 = DAT_14cb835a8;
    if (DAT_14cb835a8 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = DAT_14cb835a8 + 0x1e;
      if (-1 < DAT_14cb835a8 + -1) {
        iVar6 = DAT_14cb835a8 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    iVar8 = DAT_14cb835a8 + 1;
    iVar12 = DAT_14cb835a8 + 0x1f;
    if (-1 < DAT_14cb835a8) {
      iVar12 = DAT_14cb835a8;
    }
    if (iVar12 >> 5 != iVar6) {
      if (DAT_14cb835ac <= DAT_14cb835a8) {
        if (DAT_14cb835a8 + 0x20U < 0xa0) {
          DAT_14cb835ac = 0x80;
        }
        else {
          uVar16 = DAT_14cb835a8 + 0x20U >> 5;
          if (DAT_14cb835ac + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar16) {
              uVar13 = uVar16;
            }
          }
          else {
            uVar13 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
          }
          uVar2 = (ulonglong)(uVar13 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar1 = (uint)(uVar2 + 0xf);
              if (uVar13 < 0x1ffd) {
                uVar2 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 + 0xf >> 4]];
              }
              else {
                uVar19 = (ulonglong)(uVar1 & 0xfffffff0);
                if (uVar19 < 0x7ff1) {
                  bVar4 = (&DAT_14c841e00)[uVar1 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar4) {
                    uVar21 = (ulonglong)bVar4;
                  }
                  uVar20 = 0x32 - (ulonglong)bVar4;
                  do {
                    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_143dad985;
                    lVar14 = uVar21 + 1 + uVar20;
                    uVar20 = uVar20 - 1;
                  } while (lVar14 != 0x33);
                }
                uVar2 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar2 = (ulonglong)DAT_14c841df8;
                }
                uVar2 = -uVar2 & (uVar19 + uVar2) - 1;
              }
            }
            else {
              uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
            }
          }
LAB_143dad985:
          iVar6 = (int)(uVar2 >> 2);
          DAT_14cb835ac = -0x20;
          if ((int)uVar16 <= iVar6) {
            DAT_14cb835ac = iVar6 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb83590,DAT_14cb835a8);
        iVar8 = DAT_14cb835a8 + 1;
      }
      iVar6 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      if (iVar8 % 0x20 != 0) {
        puVar10 = &DAT_14cb83590;
        if (DAT_14cb835a0 != (uint *)0x0) {
          puVar10 = DAT_14cb835a0;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        DAT_14cb835a8 = iVar8;
        puVar10[iVar6 >> 5] = (puVar10[iVar6 >> 5] << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
        iVar8 = DAT_14cb835a8;
      }
    }
    DAT_14cb835a8 = iVar8;
    lVar14 = (longlong)iVar15;
    puVar10 = &DAT_14cb83590;
    if (DAT_14cb835a0 != (uint *)0x0) {
      puVar10 = DAT_14cb835a0;
    }
    bVar4 = (byte)iVar7 & 0x1f;
    puVar10[iVar12 >> 5] = puVar10[iVar12 >> 5] & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar15 = DAT_14cb835b0;
    lVar14 = (longlong)DAT_14cb835b0;
    iVar7 = *(int *)(DAT_14cb83580 + 4 + lVar14 * 0x60);
    iVar6 = DAT_14cb835b4 + -1;
    _DAT_14cb835b0 = CONCAT44(iVar6,iVar7);
    if (iVar6 != 0) {
      *(undefined4 *)(DAT_14cb83580 + (longlong)iVar7 * 0x60) = 0xffffffff;
    }
  }
  uVar16 = 1 << ((byte)iVar15 & 0x1f);
  puVar10 = DAT_14cb835a0;
  if (DAT_14cb835a0 == (uint *)0x0) {
    puVar10 = &DAT_14cb83590;
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  lVar17 = (longlong)(iVar7 >> 5);
  puVar10[lVar17] = puVar10[lVar17] | uVar16;
  lVar14 = lVar14 * 0x60;
  local_98[5] = 0x8000000000;
  puVar10 = (uint *)(DAT_14cb83580 + lVar14);
  puVar11 = puVar10 + 2;
  _Src = (int *)(DAT_14cb83580 + lVar14);
  *puVar10 = uVar5;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar11[0] = 0;
  puVar11[1] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[0xd] = 0x80;
  puVar10[0xe] = 0xffffffff;
  puVar10[0xf] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  if (puVar11 != (uint *)local_98) {
    _Src[6] = 0;
    _Src[7] = 0;
    _Src[8] = 0;
    _Src[9] = 0;
    _Src[10] = 0;
    _Src[0xb] = 0;
    _Src[0xc] = 0;
    _Src[0xd] = 0x80;
    local_98[5] = 0;
    _Src[0xe] = -1;
    _Src[0xf] = 0;
  }
  _Src[0x10] = 0;
  _Src[0x12] = 0;
  _Src[0x13] = 0;
  _Src[0x14] = 0;
  local_98[9] = 0;
  local_98[8] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[3] = 0;
  local_98[2] = 0;
  local_98[1] = 0;
  local_98[0] = 0;
  local_98[6] = 0xffffffff;
  if (0x80 < (uint)((ulonglong)local_98[5] >> 0x20)) {
    local_98[5] = 0x8000000000;
    FUN_1446efbd8(local_98 + 2,0);
  }
  if (local_98[4] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  _Src[0x16] = -1;
  uVar1 = DAT_14cb83588 - DAT_14cb835b4;
  uVar13 = 1;
  if (uVar1 != 1) {
    local_a8 = lVar17;
    if (DAT_14cb83588 != DAT_14cb835b4) {
      puVar18 = &DAT_14cb835b8;
      if (DAT_14cb835c0 != (undefined *)0x0) {
        puVar18 = DAT_14cb835c0;
      }
      iVar7 = *(int *)(puVar18 + (ulonglong)(DAT_14cb835c8 - 1 & uVar5) * 4);
      if (iVar7 != -1) {
        do {
          _Dst = (void *)(DAT_14cb83580 + (longlong)iVar7 * 0x60);
          if (*(int *)(DAT_14cb83580 + (longlong)iVar7 * 0x60) == *_Src) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            *(undefined4 *)((longlong)_Dst + 0x10) = 0;
            if (*(int *)((longlong)_Dst + 0x14) != 0) {
              FUN_1446f4a44((longlong *)((longlong)_Dst + 8),0);
            }
            *(undefined8 *)((longlong)_Dst + 0x38) = 0xffffffff;
            *(undefined4 *)((longlong)_Dst + 0x30) = 0;
            if (0x80 < *(uint *)((longlong)_Dst + 0x34)) {
              *(undefined4 *)((longlong)_Dst + 0x34) = 0x80;
              FUN_1446efbd8((longlong)_Dst + 0x18,0);
            }
            if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
              FUN_1400020a8();
            }
            if (*(longlong *)((longlong)_Dst + 8) != 0) {
              FUN_1400020a8();
            }
            memmove(_Dst,_Src,0x58);
            lVar17 = DAT_14cb83580;
            if (DAT_14cb835b4 != 0) {
              *(int *)(DAT_14cb83580 + (longlong)DAT_14cb835b0 * 0x60) = iVar15;
            }
            *(undefined4 *)(lVar17 + lVar14) = 0xffffffff;
            uVar9 = 0xffffffff;
            if (0 < DAT_14cb835b4) {
              uVar9 = DAT_14cb835b0;
            }
            *(undefined4 *)(lVar17 + 4 + lVar14) = uVar9;
            DAT_14cb835b4 = DAT_14cb835b4 + 1;
            _DAT_14cb835b0 = CONCAT44(DAT_14cb835b4,iVar15);
            puVar10 = &DAT_14cb83590;
            if (DAT_14cb835a0 != (uint *)0x0) {
              puVar10 = DAT_14cb835a0;
            }
            puVar10[local_a8] = puVar10[local_a8] & (uVar16 ^ 0xffffffff);
            goto LAB_143dad74f;
          }
          iVar7 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar7 != -1);
      }
    }
    if (3 < uVar1) {
      uVar2 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar13 = 1 << ((byte)lVar17 & 0x1f);
    }
  }
  if (((int)uVar1 < 1) || ((int)uVar13 <= (int)DAT_14cb835c8)) {
    uVar5 = DAT_14cb835c8 - 1 & uVar5;
    _Src[0x17] = uVar5;
    puVar18 = DAT_14cb835c0;
    if (DAT_14cb835c0 == (undefined *)0x0) {
      puVar18 = &DAT_14cb835b8;
    }
    _Src[0x16] = *(int *)(puVar18 + ((longlong)(int)DAT_14cb835c8 - 1U & (longlong)(int)uVar5) * 4);
    puVar18 = DAT_14cb835c0;
    if (DAT_14cb835c0 == (undefined *)0x0) {
      puVar18 = &DAT_14cb835b8;
    }
    *(int *)(puVar18 + ((longlong)(int)DAT_14cb835c8 - 1U & (longlong)(int)uVar5) * 4) = iVar15;
    goto LAB_143dad74f;
  }
  DAT_14cb835c8 = uVar13;
  if (DAT_14cb835c0 == (undefined *)0x0) {
    if (1 < uVar13) {
LAB_143dad43a:
      uVar13 = DAT_14cb835c8;
      FUN_1446efa72(&DAT_14cb835c0,0,DAT_14cb835c8,4);
    }
    if (0 < (int)uVar13) goto LAB_143dad455;
  }
  else {
    FUN_1446efa72(&DAT_14cb835c0,0,0,4);
    if (DAT_14cb835c8 == 0) goto LAB_143dad74f;
    if (DAT_14cb835c8 != 1) goto LAB_143dad43a;
    uVar13 = 1;
    if (DAT_14cb835c0 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cb835c0,0,0,4);
    }
LAB_143dad455:
    uVar16 = 0;
    do {
      puVar18 = DAT_14cb835c0;
      if (DAT_14cb835c0 == (undefined *)0x0) {
        puVar18 = &DAT_14cb835b8;
      }
      *(undefined4 *)(puVar18 + (ulonglong)(DAT_14cb835c8 + 0x7fffffff & uVar16) * 4) = 0xffffffff;
      uVar16 = uVar16 + 1;
    } while (uVar13 != uVar16);
  }
  if (DAT_14cb835a8 == 0) {
    uVar19 = 1;
    uVar2 = 0;
    iVar7 = 0;
    iVar15 = 0;
  }
  else {
    puVar10 = DAT_14cb835a0;
    if (DAT_14cb835a0 == (uint *)0x0) {
      puVar10 = &DAT_14cb83590;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar15 = DAT_14cb835a8 + 0x1e;
      if (-1 < DAT_14cb835a8 + -1) {
        iVar15 = DAT_14cb835a8 + -1;
      }
      uVar2 = 0;
      uVar19 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar19 = uVar2;
      }
      iVar7 = 0;
      do {
        if (uVar19 == uVar2) goto LAB_143dad74f;
        iVar7 = iVar7 + 0x20;
        uVar16 = puVar10[uVar2 + 1];
        uVar2 = uVar2 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar2 = 0;
      iVar7 = 0;
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16);
    uVar21 = uVar19 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar15 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (DAT_14cb835a8 <= iVar15) {
      iVar15 = DAT_14cb835a8;
    }
  }
  if (iVar15 < DAT_14cb835a8) {
    uVar16 = 0xffffffff;
    do {
      lVar17 = DAT_14cb83580;
      lVar22 = (longlong)iVar15 * 0x60;
      uVar21 = (longlong)(int)DAT_14cb835c8 - 1U & (longlong)*(int *)(DAT_14cb83580 + lVar22);
      iVar6 = (int)uVar21;
      *(int *)(DAT_14cb83580 + 0x5c + lVar22) = iVar6;
      puVar18 = DAT_14cb835c0;
      if (DAT_14cb835c0 == (undefined *)0x0) {
        puVar18 = &DAT_14cb835b8;
      }
      *(undefined4 *)(lVar17 + 0x58 + lVar22) =
           *(undefined4 *)(puVar18 + ((longlong)(int)DAT_14cb835c8 - 1U & uVar21) * 4);
      puVar18 = DAT_14cb835c0;
      if (DAT_14cb835c0 == (undefined *)0x0) {
        puVar18 = &DAT_14cb835b8;
      }
      *(int *)(puVar18 + ((longlong)iVar6 & (longlong)(int)DAT_14cb835c8 - 1U) * 4) = iVar15;
      uVar16 = ~(uint)uVar19 & uVar16;
      puVar10 = DAT_14cb835a0;
      if (DAT_14cb835a0 == (uint *)0x0) {
        puVar10 = &DAT_14cb83590;
      }
      iVar15 = (int)uVar2;
      lVar17 = (longlong)iVar15;
      uVar5 = puVar10[lVar17] & uVar16;
      if (uVar5 == 0) {
        iVar6 = DAT_14cb835a8 + 0x1e;
        if (-1 < DAT_14cb835a8 + -1) {
          iVar6 = DAT_14cb835a8 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar8 = iVar6;
        if (iVar6 < iVar15) {
          iVar8 = iVar15;
        }
        if (iVar6 <= iVar15) break;
        lVar22 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar5 = puVar10[lVar17 + lVar22 + 1];
          if (uVar5 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar8 - lVar17 == lVar22) goto LAB_143dad74f;
        }
        uVar2 = (ulonglong)(iVar15 + (int)lVar22 + 1);
        uVar16 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar5 & uVar5);
      uVar21 = uVar19 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar15 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar15 < DAT_14cb835a8);
  }
LAB_143dad74f:
  lVar14 = DAT_14cb83580 + lVar14;
LAB_143dad75d:
  if ((local_98[10] ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar14 + 8;
}



// FUNCTION 143dada69 FUN_143dada69 body=179 status=ok
// SIG undefined FUN_143dada69(void)

bool FUN_143dada69(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      local_58 = *param_2;
      FUN_1446dcdd4(local_50);
      if (DAT_14cb83a10 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_144837462(DAT_14cb83a10,local_50);
      }
      *param_3 = lVar2;
      if (local_38 != 0) {
        FUN_1400020a8();
        lVar2 = *param_3;
      }
      if (lVar2 != 0) {
        lVar1 = FUN_14007a5e6(lVar1);
        *param_4 = lVar1;
        bVar3 = lVar1 != 0;
        goto LAB_143dadaf2;
      }
    }
  }
  bVar3 = false;
LAB_143dadaf2:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dadb1e FUN_143dadb1e body=1884 status=ok
// SIG undefined FUN_143dadb1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dadb1e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  double *pdVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  double dVar24;
  double _X;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined1 local_3d0;
  undefined4 local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  ulonglong uStack_3b0;
  undefined8 local_3a0;
  longlong *local_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined8 local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined8 local_338;
  ulonglong uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  ulonglong uStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined8 uStack_2bc;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined1 local_2a4;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  longlong lStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  longlong local_260;
  char local_1f8;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 local_1df;
  undefined1 uStack_1d8;
  undefined8 uStack_1d7;
  longlong local_1c8 [2];
  ulonglong *local_1b8;
  int local_1b0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_398 = (longlong *)0x0;
  local_3a0 = 0;
  cVar2 = FUN_143dada69();
  if ((param_1 != 0) && (cVar2 != '\0')) {
    uVar5 = FUN_140427846();
    lVar6 = FUN_144718840(param_1,uVar5);
    if (lVar6 != 0) {
      uVar3 = FUN_1488cf67c(param_1);
      local_3b8 = 0;
      uStack_3b0 = 0;
      uVar12 = 0;
      local_358 = (double)((ulonglong)local_358 & 0xffffffffffffff00);
      uStack_330 = uStack_330 & 0xffffffff00000000;
      FUN_1456bb102(&local_358,param_1);
      local_3c8 = 0;
      local_3d0 = 0;
      local_3d8 = 0;
      local_3e0 = 0;
      local_3e8 = 0;
      FUN_140cc60a8(&local_3b8,local_3a0,uVar3,&local_358);
      FUN_1448173f8(&uStack_330);
      if ((local_358._0_1_ == '\x03') && ((longlong *)local_348._0_8_ != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)(local_348._0_8_ + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)local_348._0_8_ + 0x10))();
        }
      }
      if ((longlong)(int)uStack_3b0 != 0) {
        local_3c0 = (longlong)(int)uStack_3b0 * 0x68 + local_3b8;
        lVar13 = local_3b8;
        do {
          local_358 = (double)((ulonglong)local_358 & 0xffffffffffffff00);
          uStack_330 = uStack_330 & 0xffffffff00000000;
          FUN_1456bb102(&local_358,param_1);
          FUN_140368c94(lVar13,local_1c8,&local_358,0);
          puVar10 = &uStack_330;
          FUN_1448173f8();
          if ((local_358._0_1_ == '\x03') &&
             (puVar10 = (ulonglong *)local_348._0_8_,
             (ulonglong *)local_348._0_8_ != (ulonglong *)0x0)) {
            LOCK();
            piVar1 = (int *)(local_348._0_8_ + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*(ulonglong *)local_348._0_8_ + 0x10))();
            }
          }
          if (local_1c8[0] != 0) {
            if ((longlong)local_1b0 != 0) {
              lVar11 = 0;
              do {
                if (*(longlong *)((longlong)local_1b8 + lVar11) == 0) goto LAB_143dae190;
                lVar11 = lVar11 + 8;
                puVar10 = local_1b8;
              } while ((longlong)local_1b0 * 8 != lVar11);
            }
            uVar3 = SUB84(puVar10,0);
            local_358 = 0.0;
            dStack_350 = 0.0;
            local_348._0_12_ = ZEXT812(0);
            local_348._12_4_ = 0x3ff00000;
            local_318 = 0x3ff0000000000000;
            uStack_310 = 0x3ff0000000000000;
            local_308 = 0x3ff0000000000000;
            uStack_300 = 0;
            local_2e8 = DAT_14c8464f0;
            local_2f8 = DAT_14c8464e0;
            uStack_2f0 = DAT_14c8464e8;
            local_2e0 = 0;
            local_2d4 = DAT_14cb7bd70;
            local_2dc = DAT_14cb7bd68;
            local_2c8 = DAT_14cb7bd88;
            local_2d0 = DAT_14cb7bd80;
            dVar7 = 0.0;
            local_2a4 = 0;
            local_2b4 = 0;
            uStack_2ac = 0;
            local_2c4 = 0;
            uStack_2bc = 0;
            local_2a0 = 0xffffffff;
            local_278 = 0;
            local_288 = 0;
            lStack_280 = 0;
            local_298 = 0;
            uStack_290 = 0;
            lVar11 = *(longlong *)(param_1 + 0x1c8);
            local_1f8 = '\0';
            local_260 = 0;
            local_270 = 0;
            uStack_268 = 0;
            uStack_1d8 = 0;
            uStack_1d7 = 0;
            uStack_1e8 = 0;
            uStack_1e0 = 0;
            local_1df = 0;
            if (lVar11 == 0) {
              local_338 = DAT_14c8464e0;
              uStack_330 = DAT_14c8464e8;
              local_328 = DAT_14c8464f0;
              uStack_320 = 0;
              uVar3 = SUB84(DAT_14c8464f8,0);
              uVar23 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
              dVar7 = DAT_14c846500;
              dVar14 = DAT_14c846508;
            }
            else {
              local_328 = *(undefined8 *)(lVar11 + 0x270);
              local_338 = *(undefined8 *)(lVar11 + 0x260);
              uStack_330 = *(ulonglong *)(lVar11 + 0x268);
              uStack_320 = 0;
              dVar14 = *(double *)(lVar11 + 0x240);
              dVar17 = *(double *)(lVar11 + 0x248);
              dVar15 = *(double *)(lVar11 + 0x250);
              dVar16 = *(double *)(lVar11 + 600);
              pdVar8 = *(double **)(lVar11 + 0x228);
              local_378 = dVar14;
              dStack_370 = dVar17;
              local_368 = dVar15;
              dStack_360 = dVar16;
              if (pdVar8 == (double *)0x0) {
                uVar3 = 0x40;
                pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
                dVar7 = DAT_14c8463d8;
                *pdVar8 = DAT_14c8463d0;
                pdVar8[1] = dVar7;
                dVar7 = DAT_14c8463e8;
                pdVar8[2] = DAT_14c8463e0;
                pdVar8[3] = dVar7;
                dVar7 = DAT_14c846500;
                pdVar8[4] = DAT_14c8464f8;
                pdVar8[5] = dVar7;
                dVar7 = DAT_14c846508;
                pdVar8[6] = DAT_14c846508;
                *(double **)(lVar11 + 0x228) = pdVar8;
              }
              auVar22._8_8_ = -(ulonglong)(dVar16 != pdVar8[3]);
              auVar22._0_8_ = -(ulonglong)(dVar15 != pdVar8[2]);
              auVar21._8_4_ = (int)-(ulonglong)(dVar17 != pdVar8[1]);
              auVar21._0_8_ = -(ulonglong)(dVar14 != *pdVar8);
              auVar21._12_4_ = (int)(-(ulonglong)(dVar17 != pdVar8[1]) >> 0x20);
              iVar4 = movmskpd(SUB84(dVar7,0),auVar21);
              uVar9 = movmskpd(uVar3,auVar22);
              if ((uVar9 & 0x3fffffff) != 0 || iVar4 != 0) {
                pdVar8[2] = local_368;
                pdVar8[3] = dStack_360;
                *pdVar8 = local_378;
                pdVar8[1] = dStack_370;
                FUN_1448052ee(&local_378,&local_390);
                pdVar8[6] = local_380;
                pdVar8[4] = local_390;
                pdVar8[5] = dStack_388;
              }
              uVar3 = SUB84(pdVar8[4],0);
              uVar23 = (undefined4)((ulonglong)pdVar8[4] >> 0x20);
              dVar7 = pdVar8[5];
              dVar14 = pdVar8[6];
            }
            auVar20._4_4_ = uVar23;
            auVar20._0_4_ = uVar3;
            auVar20._8_8_ = dVar7;
            auVar21 = divpd(auVar20,_DAT_1499387d0);
            auVar19._0_8_ = dVar14 / 360.0;
            auVar19._8_8_ = 0;
            auVar22 = roundpd(auVar21,auVar21,3);
            auVar21 = roundpd(auVar19,auVar19,3);
            dVar17 = ((double)CONCAT44(uVar23,uVar3) - auVar22._0_8_ * (double)DAT_1499387d0) *
                     0.008726646259971648;
            dVar7 = (dVar7 - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar24 = (dVar14 - auVar21._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            _X = (0.0 - auVar21._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar14 = sin(dVar17);
            dVar15 = sin(dVar7);
            dVar16 = sin(dVar24);
            sin(_X);
            dVar17 = cos(dVar17);
            dVar18 = cos(dVar7);
            dVar24 = cos(dVar24);
            cos(_X);
            dVar7 = dVar15 * dVar14 * dVar16 + dVar18 * dVar17 * dVar24;
            local_358 = dVar14 * dVar15 * dVar24 - dVar17 * dVar18 * dVar16;
            dStack_350 = -(dVar14 * dVar18 * dVar24) - dVar17 * dVar15 * dVar16;
            local_348._8_4_ = SUB84(dVar7,0);
            local_348._0_8_ = -(dVar18 * dVar14 * dVar16) + dVar15 * dVar17 * dVar24;
            local_348._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            local_270 = param_3;
            local_260 = lVar6;
            (**(code **)(*local_398 + 0x10))(local_398,&local_378,local_1c8);
            if (local_378._4_1_ == '\x01') {
              iVar4 = (int)param_4[1];
              *(uint *)(param_4 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
                FUN_14573f2d4(param_4,iVar4);
              }
              *(undefined4 *)(*param_4 + (longlong)iVar4 * 4) = (undefined4)local_378;
            }
            if (local_1f8 == '\x01') {
              local_1f8 = '\0';
            }
            if (lStack_280 != 0) {
              FUN_1400020a8();
            }
          }
LAB_143dae190:
          FUN_140368b56(local_1c8);
          lVar13 = lVar13 + 0x68;
        } while (lVar13 != local_3c0);
        uVar12 = uStack_3b0 & 0xffffffff;
      }
      FUN_14036924e(local_3b8,uVar12);
      if (local_3b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dae27b FUN_143dae27b body=41 status=ok
// SIG undefined FUN_143dae27b(void)

void FUN_143dae27b(void)

{
  DAT_14cb83620 = 0;
  if (DAT_14cb83618 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66c84();
  return;
}



// FUNCTION 143dae2a9 FUN_143dae2a9 body=41 status=ok
// SIG undefined FUN_143dae2a9(void)

void FUN_143dae2a9(void)

{
  DAT_14cb83710 = 0;
  if (DAT_14cb83708 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66d22();
  return;
}



// FUNCTION 143dae2d7 FUN_143dae2d7 body=41 status=ok
// SIG undefined FUN_143dae2d7(void)

void FUN_143dae2d7(void)

{
  DAT_14cb83800 = 0;
  if (DAT_14cb837f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66dc0();
  return;
}



// FUNCTION 143dae305 FUN_143dae305 body=41 status=ok
// SIG undefined FUN_143dae305(void)

void FUN_143dae305(void)

{
  DAT_14cb838f0 = 0;
  if (DAT_14cb838e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66e5e();
  return;
}



// FUNCTION 143dae3de FUN_143dae3de body=300 status=ok
// SIG undefined FUN_143dae3de(void)

double * FUN_143dae3de(double *param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = rand();
  fVar2 = (float)(uVar1 & 0x7fff) / 32767.0;
  uVar1 = rand();
  param_3 = param_3 - param_2;
  fVar3 = ((float)(uVar1 & 0x7fff) / 32767.0) * param_3 + param_2;
  if (0 < (int)(fVar2 + fVar2)) {
    fVar3 = -fVar3;
  }
  *param_1 = (double)fVar3;
  uVar1 = rand();
  fVar2 = (float)(uVar1 & 0x7fff) / 32767.0;
  uVar1 = rand();
  fVar3 = ((float)(uVar1 & 0x7fff) / 32767.0) * param_3 + param_2;
  if (0 < (int)(fVar2 + fVar2)) {
    fVar3 = -fVar3;
  }
  param_1[1] = (double)fVar3;
  uVar1 = rand();
  fVar2 = (float)(uVar1 & 0x7fff) / 32767.0;
  uVar1 = rand();
  param_2 = param_3 * ((float)(uVar1 & 0x7fff) / 32767.0) + param_2;
  if (0 < (int)(fVar2 + fVar2)) {
    param_2 = -param_2;
  }
  param_1[2] = (double)param_2;
  return param_1;
}



// FUNCTION 143dae50a FUN_143dae50a body=91 status=ok
// SIG undefined FUN_143dae50a(void)

void FUN_143dae50a(void)

{
  if (DAT_14cb83a40 != 0) {
    if (DAT_14cb83a38 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb83a38)(DAT_14cb83a38,0);
    FUN_1446efa72(&DAT_14cb83a38,0,0,0x10);
    DAT_14cb83a40 = 0;
  }
  if (DAT_14cb83a38 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143dae565 FUN_143dae565 body=47 status=ok
// SIG undefined FUN_143dae565(void)

void FUN_143dae565(void)

{
  DAT_14cb84110 = 0;
  if (DAT_14cb84108 != 0) {
    FUN_1400020a8();
  }
  FUN_1465540d4(&DAT_14cb83a58);
  return;
}



// FUNCTION 143dae594 FUN_143dae594 body=122 status=ok
// SIG undefined FUN_143dae594(void)

void FUN_143dae594(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = (longlong *)*param_2;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar1 = (longlong *)*param_1;
    lVar2 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      if (*plVar1 == *local_10) {
        if (plVar1 != (longlong *)0x0) {
          FUN_1407c4470(&DAT_14cb83a50,*param_3 * *(float *)(plVar1 + 1),&local_10);
        }
        break;
      }
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dae610 FUN_143dae610 body=97 status=ok
// SIG undefined FUN_143dae610(void)

undefined8 * FUN_143dae610(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b4123f0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_141894126(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 4);
  }
  return puVar1;
}



// FUNCTION 143dae672 FUN_143dae672 body=5 status=ok
// SIG undefined FUN_143dae672(void)

longlong FUN_143dae672(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143dae678 FUN_143dae678 body=12 status=ok
// SIG undefined FUN_143dae678(void)

void FUN_143dae678(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dae681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dae684 FUN_143dae684 body=57 status=ok
// SIG undefined FUN_143dae684(void)

undefined8 * FUN_143dae684(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4123f0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dae6bd FUN_143dae6bd body=532 status=ok
// SIG undefined FUN_143dae6bd(void)

void FUN_143dae6bd(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
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
  undefined1 *local_80;
  code *local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_1 != 0) && (plVar5 = *(longlong **)(param_1 + 0x430), plVar5 != (longlong *)0x0)) {
    if (DAT_14cae9568 == 0) {
      local_90 = &local_78;
      local_78 = FUN_1417de738;
      local_80 = &LAB_145893408;
      local_88 = &LAB_1458cbbd2;
      local_98 = &LAB_147ba21f1;
      local_a0 = &LAB_1463e9233;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x1000000c;
      local_c0 = 8;
      local_c8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      plVar5 = *(longlong **)(param_1 + 0x430);
      if (plVar5 == (longlong *)0x0) goto LAB_143dae748;
    }
    if ((((DAT_14cae9568 != 0) && (lVar2 = plVar5[2], lVar2 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      lVar2 = FUN_140628492();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        local_40 = (**(code **)(*plVar5 + 0x180))(plVar5);
        FUN_1459ae126(&local_78,&DAT_14cb841c0);
        lVar1 = local_50;
        lVar2 = local_68;
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
        puVar3 = local_70;
LAB_143dae7bb:
        if (puVar3 != local_58) {
          FUN_1488cc822(puVar3[2],plVar5);
          for (puVar3 = (undefined8 *)FUN_1459ae1d6(*puVar3); puVar3 != (undefined8 *)0x0;
              puVar3 = (undefined8 *)FUN_1459ae1d6(*puVar3)) {
            lVar4 = FUN_1447210f0(puVar3[2]);
            if (lVar4 == *local_60) goto LAB_143dae7bb;
          }
          puVar3 = (undefined8 *)0x0;
          goto LAB_143dae7bb;
        }
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + -1;
        UNLOCK();
      }
    }
  }
LAB_143dae748:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dae8d2 FUN_143dae8d2 body=49 status=ok
// SIG undefined FUN_143dae8d2(void)

void FUN_143dae8d2(longlong param_1,int param_2)

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



// FUNCTION 143dae904 FUN_143dae904 body=183 status=ok
// SIG undefined FUN_143dae904(void)

void FUN_143dae904(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  dVar1 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  if (((*(int *)(param_2 + 0x78) == 0) ||
      (*(double *)(param_2 + 0x70) <= dVar1 && dVar1 != *(double *)(param_2 + 0x70))) ||
     (*(longlong *)*param_1 != *(longlong *)(param_2 + 0x80))) {
    *(double *)(param_2 + 0x70) = dVar1 + 1.0;
    DAT_14cb83558 = DAT_14cb83558 + 1;
    *(int *)(param_2 + 0x78) = DAT_14cb83558;
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)*param_1;
    *(undefined4 *)(param_2 + 0x7c) = 0;
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)param_1[1];
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dae9bc FUN_143dae9bc body=47 status=ok
// SIG undefined FUN_143dae9bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dae9bc(void)

{
  _DAT_14cb84168 = 0;
  if (DAT_14cb84160 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&DAT_14cb84120);
  return;
}



// FUNCTION 143dae9eb FUN_143dae9eb body=19 status=ok
// SIG undefined FUN_143dae9eb(void)

void FUN_143dae9eb(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 143daea26 FUN_143daea26 body=29 status=ok
// SIG undefined FUN_143daea26(void)

undefined8 FUN_143daea26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143daebc2 FUN_143daebc2 body=93 status=ok
// SIG undefined FUN_143daebc2(void)

void FUN_143daebc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4128a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143daec20 FUN_143daec20 body=93 status=ok
// SIG undefined FUN_143daec20(void)

void FUN_143daec20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4128a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143daec7e FUN_143daec7e body=126 status=ok
// SIG undefined FUN_143daec7e(void)

void FUN_143daec7e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4128a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143daeced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143daed08 FUN_143daed08 body=268 status=ok
// SIG undefined FUN_143daed08(void)

undefined8 FUN_143daed08(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_143daee0e;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143daee0e;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_143daee0e:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143daedc6;
    lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 0x969);
      *pbVar1 = *pbVar1 | 1;
      uVar6 = 1;
      goto LAB_143daedc6;
    }
  }
  uVar6 = 0;
LAB_143daedc6:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143daee16 FUN_143daee16 body=350 status=ok
// SIG undefined FUN_143daee16(void)

void FUN_143daee16(longlong *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong in_stack_ffffffffffffffe8;
  
  FUN_14113775c(*param_1,param_1 + 2,0,0,in_stack_ffffffffffffffe8 & 0xffffffffffffff00);
  lVar4 = *(longlong *)(*param_1 + 0x788);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x9c) & 8) == 0)) {
    FUN_141062a52(lVar4,0);
  }
  if ((((*(int *)((longlong)param_1 + 0xac) == 0) ||
       (uVar2 = *(uint *)(param_1 + 0x15), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0xac))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))))) {
    iVar3 = (int)param_1[0xe];
    if (iVar3 == 2) {
      (**(code **)(*(longlong *)(*param_1 + 0x520) + 0x40))(*param_1 + 0x520);
    }
    else if (iVar3 == 1) {
      lVar4 = *param_1;
      pbVar1 = (byte *)(lVar4 + 0x968);
      *pbVar1 = *pbVar1 | 2;
      plVar6 = *(longlong **)(lVar4 + 0x788);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x690))(plVar6,0);
      }
    }
    else if (iVar3 == 0) {
      FUN_143da9998(*param_1,param_1 + 0xf,param_1 + 0x12);
    }
  }
  else {
    (**(code **)(*(longlong *)(*param_1 + 0x520) + 0x68))
              (*param_1 + 0x520,*plVar6,param_1[0x16],param_1 + 0x18,param_1[0x17]);
  }
  lVar4 = FUN_141450dba(param_1 + 0x26);
  if (lVar4 != 0) {
    uVar5 = FUN_141450dba(param_1 + 0x26);
    FUN_140e6453c(*param_1,uVar5);
  }
  FUN_143da9c3e(*param_1);
  return;
}



// FUNCTION 143daef74 FUN_143daef74 body=259 status=ok
// SIG undefined FUN_143daef74(void)

undefined8 * FUN_143daef74(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x170,0x10);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14b412910;
  puVar8 = (undefined8 *)(param_1 + 0x10);
  puVar9 = puVar6 + 2;
  for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined8 *)(param_1 + 0x80);
  puVar9 = puVar6 + 0x10;
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  cVar1 = *(char *)(param_1 + 0x130);
  *(char *)(puVar6 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    puVar8 = (undefined8 *)(param_1 + 0xd0);
    puVar9 = puVar6 + 0x1a;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  puVar6[0x28] = *(undefined8 *)(param_1 + 0x140);
  uVar3 = *(undefined4 *)(param_1 + 0x14c);
  uVar4 = *(undefined4 *)(param_1 + 0x150);
  uVar5 = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(puVar6 + 0x29) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)((longlong)puVar6 + 0x14c) = uVar3;
  *(undefined4 *)(puVar6 + 0x2a) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x154) = uVar5;
  puVar6[0x2b] = 0;
  iVar2 = *(int *)(param_1 + 0x160);
  _Src = *(void **)(param_1 + 0x158);
  *(int *)(puVar6 + 0x2c) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x164) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 0x2b,iVar2,0);
    memcpy((void *)puVar6[0x2b],_Src,(longlong)iVar2 * 2);
  }
  return puVar6 + 2;
}



// FUNCTION 143daf07e FUN_143daf07e body=29 status=ok
// SIG undefined FUN_143daf07e(void)

void FUN_143daf07e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143daf09c FUN_143daf09c body=76 status=ok
// SIG undefined FUN_143daf09c(void)

undefined8 * FUN_143daf09c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b412910;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x26) == '\x01') {
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143daf0e8 FUN_143daf0e8 body=362 status=ok
// SIG undefined FUN_143daf0e8(void)

void FUN_143daf0e8(longlong *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong in_stack_ffffffffffffffe8;
  
  FUN_14113775c(*param_1,param_1 + 0x1e,0,0,in_stack_ffffffffffffffe8 & 0xffffffffffffff00);
  lVar4 = *(longlong *)(*param_1 + 0x788);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x9c) & 8) == 0)) {
    FUN_141062a52(lVar4,0);
  }
  if ((((*(int *)((longlong)param_1 + 0x18c) == 0) ||
       (uVar2 = *(uint *)(param_1 + 0x31), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x18c))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))))) {
    iVar3 = (int)param_1[0x2a];
    if (iVar3 == 2) {
      (**(code **)(*(longlong *)(*param_1 + 0x520) + 0x40))(*param_1 + 0x520);
    }
    else if (iVar3 == 1) {
      lVar4 = *param_1;
      pbVar1 = (byte *)(lVar4 + 0x968);
      *pbVar1 = *pbVar1 | 2;
      plVar6 = *(longlong **)(lVar4 + 0x788);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x690))(plVar6,0);
      }
    }
    else if (iVar3 == 0) {
      FUN_143da9998(*param_1,param_1 + 0x2b,param_1 + 0x2e);
    }
  }
  else {
    (**(code **)(*(longlong *)(*param_1 + 0x520) + 0x68))
              (*param_1 + 0x520,*plVar6,param_1[0x32],param_1 + 0x34,param_1[0x33]);
  }
  lVar4 = FUN_141450dba(param_1 + 0x42);
  if (lVar4 != 0) {
    uVar5 = FUN_141450dba(param_1 + 0x42);
    FUN_140e6453c(*param_1,uVar5);
  }
  FUN_143da9c3e(*param_1);
  return;
}



// FUNCTION 143daf252 FUN_143daf252 body=375 status=ok
// SIG undefined FUN_143daf252(void)

undefined8 * FUN_143daf252(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar7 = (undefined8 *)FUN_14001cc68(0x280,0x10);
  *param_2 = puVar7;
  *puVar7 = &PTR_FUN_14b412930;
  puVar7[2] = param_1[2];
  FUN_1406fd608(puVar7 + 4,param_1 + 4);
  puVar9 = param_1 + 0x20;
  puVar10 = puVar7 + 0x20;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = param_1 + 0x2c;
  puVar10 = puVar7 + 0x2c;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  cVar1 = *(char *)(param_1 + 0x42);
  *(char *)(puVar7 + 0x42) = cVar1;
  if (cVar1 == '\x01') {
    puVar9 = param_1 + 0x36;
    puVar10 = puVar7 + 0x36;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  puVar7[0x44] = param_1[0x44];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x22c);
  uVar4 = *(undefined4 *)(param_1 + 0x46);
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x234);
  *(undefined4 *)(puVar7 + 0x45) = *(undefined4 *)(param_1 + 0x45);
  *(undefined4 *)((longlong)puVar7 + 0x22c) = uVar3;
  *(undefined4 *)(puVar7 + 0x46) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x234) = uVar5;
  puVar7[0x47] = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  _Src = (void *)param_1[0x47];
  *(int *)(puVar7 + 0x48) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x244) = 0;
  }
  else {
    FUN_1446dd670(puVar7 + 0x47,iVar2,0);
    memcpy((void *)puVar7[0x47],_Src,(longlong)iVar2 * 2);
  }
  uVar6 = param_1[0x4b];
  puVar7[0x4a] = param_1[0x4a];
  puVar7[0x4b] = uVar6;
  puVar7[0x4c] = 0;
  puVar7[0x4d] = 0;
  puVar7[0x4e] = 2;
  if (puVar7 != param_1) {
    FUN_141290efc(puVar7 + 0x4c,param_1 + 0x4c);
  }
  puVar7[0x4f] = param_1[0x4f];
  return puVar7 + 2;
}



// FUNCTION 143daf3d0 FUN_143daf3d0 body=29 status=ok
// SIG undefined FUN_143daf3d0(void)

void FUN_143daf3d0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143daf3ee FUN_143daf3ee body=124 status=ok
// SIG undefined FUN_143daf3ee(void)

undefined8 * FUN_143daf3ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b412930;
  FUN_144760e21(param_1[0x4c],*(undefined4 *)(param_1 + 0x4d));
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  FUN_140368b56(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143daf46a FUN_143daf46a body=71 status=ok
// SIG undefined FUN_143daf46a(void)

undefined8 * FUN_143daf46a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b412950;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143daf630 FUN_143daf630 body=152 status=ok
// SIG undefined FUN_143daf630(void)

void FUN_143daf630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000143daf6bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 143daf6c8 FUN_143daf6c8 body=152 status=ok
// SIG undefined FUN_143daf6c8(void)

void FUN_143daf6c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000143daf755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 143daf760 FUN_143daf760 body=179 status=ok
// SIG undefined FUN_143daf760(void)

void FUN_143daf760(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b412950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143daf803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143daf814 FUN_143daf814 body=91 status=ok
// SIG undefined FUN_143daf814(void)

void FUN_143daf814(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_20 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143daf870 FUN_143daf870 body=311 status=ok
// SIG undefined FUN_143daf870(void)

undefined8 FUN_143daf870(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143daf9a1;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143daf9a1;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar8 = local_38;
  }
  else {
LAB_143daf9a1:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143daf952;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pcVar3 = *(code **)(param_1 + 0x20);
      plVar9 = (longlong *)(param_1 + 0x40);
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x30);
      }
      local_38 = param_2;
      uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
      (*pcVar3)(uVar6,&local_38);
      uVar6 = 1;
      goto LAB_143daf952;
    }
  }
  uVar6 = 0;
LAB_143daf952:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143daf9a8 FUN_143daf9a8 body=29 status=ok
// SIG undefined FUN_143daf9a8(void)

undefined8 FUN_143daf9a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143daf9da FUN_143daf9da body=85 status=ok
// SIG undefined FUN_143daf9da(void)

void FUN_143daf9da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4129e0;
  return;
}



// FUNCTION 143dafa30 FUN_143dafa30 body=85 status=ok
// SIG undefined FUN_143dafa30(void)

void FUN_143dafa30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4129e0;
  return;
}



// FUNCTION 143dafa86 FUN_143dafa86 body=118 status=ok
// SIG undefined FUN_143dafa86(void)

void FUN_143dafa86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4129e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dafaed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dafb04 FUN_143dafb04 body=19 status=ok
// SIG undefined FUN_143dafb04(void)

undefined1 FUN_143dafb04(undefined8 param_1,undefined8 param_2)

{
  FUN_143dafb18(param_2);
  return 1;
}



// FUNCTION 143dafb18 FUN_143dafb18 body=254 status=ok
// SIG undefined FUN_143dafb18(void)

void FUN_143dafb18(undefined8 *param_1)

{
  undefined1 auStack_138 [32];
  longlong local_118 [14];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (0 < *(int *)(param_1 + 1)) {
    local_a8 = 0;
    local_a0 = 0;
    uStack_9c = 0x80;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[4] = 0;
    local_118[5] = 0;
    local_118[6] = 0;
    local_118[7] = 0;
    local_118[8] = 0;
    local_118[9] = 0;
    local_118[10] = 0;
    local_118[0xb] = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    local_48 = 1;
    local_44 = 0;
    uStack_3c = 0;
    FUN_145751316(local_118 + 2,*param_1);
    local_118[0] = 0;
    local_118[1] = 0;
    FUN_140baf362(local_118 + 2,local_118,0);
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140368b56(local_118 + 2);
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dafc18 FUN_143dafc18 body=164 status=ok
// SIG undefined FUN_143dafc18(void)

void FUN_143dafc18(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x128);
  iVar1 = *(int *)(lVar2 + 0x130);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar6 = lVar5 << 4;
    plVar4 = plVar3;
    do {
      if (*plVar4 == *param_2) {
        if (plVar4 != (longlong *)0x0) {
          fVar7 = *(float *)(plVar4 + 1);
          goto LAB_143dafca8;
        }
        break;
      }
      plVar4 = plVar4 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  *(uint *)(lVar2 + 0x130) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x134) < iVar1 + 1U) {
    FUN_141896134((undefined8 *)(lVar2 + 0x128),iVar1);
    plVar3 = *(longlong **)(lVar2 + 0x128);
  }
  plVar4 = plVar3 + lVar5 * 2;
  plVar3[lVar5 * 2] = *param_2;
  *(undefined4 *)(plVar3 + lVar5 * 2 + 1) = 0;
  fVar7 = 0.0;
LAB_143dafca8:
  *(float *)(plVar4 + 1) = fVar7 + *(float *)(param_1 + 1);
  return;
}



// FUNCTION 143dafcbc FUN_143dafcbc body=1 status=ok
// SIG undefined FUN_143dafcbc(void)

void FUN_143dafcbc(void)

{
  return;
}



// FUNCTION 143dafcbe FUN_143dafcbe body=97 status=ok
// SIG undefined FUN_143dafcbe(void)

void FUN_143dafcbe(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x28) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x2c) < iVar1 + 1U) {
    FUN_1488d2d82(lVar3,iVar1);
  }
  lVar2 = *(longlong *)(lVar3 + 0x20);
  if (*(longlong *)(lVar3 + 0x20) == 0) {
    lVar2 = lVar3;
  }
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return;
}



// FUNCTION 143dafd3e FUN_143dafd3e body=12 status=ok
// SIG undefined FUN_143dafd3e(void)

void FUN_143dafd3e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dafd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dafd4a FUN_143dafd4a body=29 status=ok
// SIG undefined FUN_143dafd4a(void)

undefined8 FUN_143dafd4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dafd84 FUN_143dafd84 body=151 status=ok
// SIG undefined FUN_143dafd84(void)

void FUN_143dafd84(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xe00);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xe0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xe00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xe00),param_1,(longlong)param_2 * 0xe0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xe00,param_2,param_3,param_4);
  return;
}



// FUNCTION 143dafe1c FUN_143dafe1c body=53 status=ok
// SIG undefined FUN_143dafe1c(void)

void FUN_143dafe1c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140372d56(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 143dafe85 FUN_143dafe85 body=3799 status=ok
// SIG undefined FUN_143dafe85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dafe85(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 local_a0;
  char *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb82340 = (ulonglong)uVar3;
  local_98 = "Type";
  local_90 = 4;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb82348 = (ulonglong)uVar3;
  local_98 = "Manufacturer";
  local_90 = 0xc;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb82350 = (ulonglong)uVar3;
  local_98 = "Rarity";
  local_90 = 6;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb82358 = (ulonglong)uVar3;
  local_98 = "Composition";
  local_90 = 0xb;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  DAT_14cb82380 = 0;
  DAT_14cb82388 = 0;
  DAT_14cb82360 = 0;
  _DAT_14cb82368 = 0;
  _DAT_14cb8238c = 0xffffffff00000080;
  DAT_14cb82394 = 0;
  DAT_14cb823a0 = 0;
  DAT_14cb823a8 = 0;
  atexit(FUN_143da4430);
  local_98 = "nexus";
  local_90 = 5;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823b0 = (ulonglong)uVar3;
  local_98 = "mingamestage";
  local_90 = 0xc;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823b8 = (ulonglong)uVar3;
  local_98 = "aimingamestage";
  local_90 = 0xe;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823c0 = (ulonglong)uVar3;
  local_98 = "weight";
  local_90 = 6;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823c8 = (ulonglong)uVar3;
  local_98 = "monetaryvaluemodifier";
  local_90 = 0x15;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823d0 = (ulonglong)uVar3;
  local_98 = "monetaryvalue";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823d8 = (ulonglong)uVar3;
  local_98 = "addtags";
  local_90 = 7;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823e0 = (ulonglong)uVar3;
  local_98 = "basetags";
  local_90 = 8;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823e8 = (ulonglong)uVar3;
  local_98 = "criteriatags";
  local_90 = 0xc;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823f0 = (ulonglong)uVar3;
  local_98 = "dependencytags";
  local_90 = 0xe;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb823f8 = (ulonglong)uVar3;
  local_98 = "exclusiontags";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb82400 = (ulonglong)uVar3;
  local_98 = "requiredcriteriatags";
  local_90 = 0x14;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb82408 = (ulonglong)uVar3;
  DAT_14cb83070 = 0;
  DAT_14cb83078 = 0;
  DAT_14cb83050 = 0;
  _DAT_14cb83058 = 0;
  _DAT_14cb8307c = 0xffffffff00000080;
  DAT_14cb83084 = 0;
  DAT_14cb83090 = 0;
  DAT_14cb83098 = 0;
  atexit(FUN_143da6ac3);
  local_98 = "gs";
  local_90 = 2;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb843e8 = (ulonglong)uVar3;
  _DAT_14cb830a8 = 0x47efffffe0000000;
  _DAT_14cb830b0 = 0x47efffffe0000000;
  _DAT_14cb830b8 = 0x47efffffe0000000;
  _DAT_14cb830c0 = 0x47efffffe0000000;
  _DAT_14cb830c8 = 0x47efffffe0000000;
  _DAT_14cb830d0 = 0x47efffffe0000000;
  _DAT_14cb830d8 = 0x47efffffe0000000;
  _DAT_14cb830e0 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cb830e8);
  if (cVar2 == '\0') {
    _DAT_14cb830e8 = 0;
    uRam000000014cb830f0 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb830f8 = 0xffffffff;
  _DAT_14cb830fc = 0;
  local_98 = "bone";
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  _DAT_14cb841c8 = 0;
  LOCK();
  DAT_14cb841c0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143da8645);
  local_98._0_4_ = 0x42960000;
  local_a8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb83108,L"gbx.facts.junk.pickup_flyto_stop_distance",&local_98,&DAT_149dfb77a
               );
  atexit(FUN_143da8783);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x41200000);
  local_a8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb83120,L"gbx.facts.junk.forced_come_to_rest_time",&local_98,
                L"Set this to a negative number to turn off the forced-come-to-rest feature.");
  atexit(FUN_143da87c8);
  local_98 = (char *)CONCAT71(local_98._1_7_,1);
  local_a8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb83138,L"p.gbx.physics.pickups_use_ccd",&local_98,
                L"Whether or not pickups use CCD.");
  atexit(FUN_143da880d);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x43480000);
  local_a8 = (undefined *)((ulonglong)local_a8._4_4_ << 0x20);
  FUN_140a6b41e(&DAT_14cb83160,L"gbx.facts.junk.pickup_coming_to_rest_threshold",&local_98,
                &DAT_149dfb77a);
  atexit(FUN_143da9ff8);
  DAT_14cb83178 = 0;
  _DAT_14cb83180 = 0;
  atexit((_func_5014 *)&LAB_143daa1a8);
  local_a8 = &DAT_14b412d18;
  local_a0 = 0;
  FUN_14655db90(&DAT_14cb83188,FUN_141894e5a,"FInventorySerialNumber",1);
  atexit((_func_5014 *)&LAB_143daa1b9);
  FUN_14655da9e(&DAT_14cb841d0,"inv_type",1,1);
  atexit((_func_5014 *)&LAB_143daa1c5);
  FUN_145ac34fe(&DAT_14cb842d8,"inv_custom",1);
  atexit(FUN_143daa1d1);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_98 + 0x10) = lVar6;
  *(undefined ***)local_98 = &PTR_FUN_14b4129e0;
  local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14cb831f8,L"gbx.Inventory.LegacyTranslate",
                L"Convert an older Serial Number to a new SN 2.0 instance",&local_98);
  if (local_90 != 0) {
    if (local_98 == (char *)0x0) goto LAB_143db05a6;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143db05a6:
  atexit(FUN_143daac50);
  local_98 = "categories";
  local_90 = 10;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83208 = (ulonglong)uVar3;
  local_98 = "category";
  local_90 = 8;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83210 = (ulonglong)uVar3;
  local_98 = "stats";
  local_90 = 5;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83218 = (ulonglong)uVar3;
  local_98 = "stat";
  local_90 = 4;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83220 = (ulonglong)uVar3;
  local_98 = "attributes";
  local_90 = 10;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83228 = (ulonglong)uVar3;
  local_98 = "attribute";
  local_90 = 9;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83230 = (ulonglong)uVar3;
  local_98 = "att_def";
  local_90 = 7;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83238 = (ulonglong)uVar3;
  local_98 = "display_group";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83240 = (ulonglong)uVar3;
  local_98 = "modifier_scalar";
  local_90 = 0xf;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83248 = (ulonglong)uVar3;
  local_98 = "base_multiplier";
  local_90 = 0xf;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83250 = (ulonglong)uVar3;
  local_98 = "value_closer_to_zero_is_better";
  local_90 = 0x1e;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83258 = (ulonglong)uVar3;
  local_98 = "positive_modifier_limit";
  local_90 = 0x17;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83260 = (ulonglong)uVar3;
  local_98 = "negative_modifier_limit";
  local_90 = 0x17;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83268 = (ulonglong)uVar3;
  local_98 = "basemultiplier";
  local_90 = 0xe;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83270 = (ulonglong)uVar3;
  local_98 = "stattoattributemodifierscalar";
  local_90 = 0x1d;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83278 = (ulonglong)uVar3;
  local_98 = "positivemodifierlimit";
  local_90 = 0x15;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83280 = (ulonglong)uVar3;
  local_98 = "negativemodifierlimit";
  local_90 = 0x15;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb83288 = (ulonglong)uVar3;
  FUN_145a0a3d0();
  atexit((_func_5014 *)&LAB_143daae2d);
  local_98 = "Gbx Inventory";
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb83540 = (ulonglong)uVar3;
  local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb83548,L"gbx.analytics.player_transactions.MinRarity",&DAT_14c76398c,
                L"Rarity SortValues less than specified are aggregated.");
  atexit(FUN_143daae39);
  DAT_14cb83570 = 0;
  DAT_14cb83578 = 0;
  atexit((_func_5014 *)&LAB_143daae7e);
  local_98 = "GlobalItemPool";
  local_90 = 0xe;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  DAT_14cb835a0 = 0;
  DAT_14cb835a8 = 0;
  DAT_14cb83580 = 0;
  _DAT_14cb83588 = 0;
  _DAT_14cb835ac = 0xffffffff00000080;
  DAT_14cb835b4 = 0;
  DAT_14cb835c0 = 0;
  DAT_14cb835c8 = 0;
  atexit(FUN_143daae98);
  DAT_14cb83630 = (undefined8 *)0x0;
  _DAT_14cb83638 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x1000,0);
  lVar7 = 0x3f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 8;
    *puVar1 = puVar5;
    lVar7 = lVar7 + -1;
    puVar1 = puVar5;
  } while (lVar7 != 0);
  *puVar5 = DAT_14cb83630;
  _DAT_14cb83638 = _DAT_14cb83638 + 0x40;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143dafe52;
  local_98 = &DAT_14011fc1e;
  DAT_14cb83630 = puVar4;
  FUN_1460f15ec();
  atexit((_func_5014 *)&LAB_143dae2a4);
  DAT_14cb83720 = (undefined8 *)0x0;
  _DAT_14cb83728 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x2400,0);
  lVar7 = 0x3f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x12;
    *puVar1 = puVar5;
    lVar7 = lVar7 + -1;
    puVar1 = puVar5;
  } while (lVar7 != 0);
  _DAT_14cb83728 = _DAT_14cb83728 + 0x40;
  *puVar5 = DAT_14cb83720;
  DAT_14cb83720 = puVar4;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143dafe58;
  local_98 = &DAT_14011fc1e;
  FUN_1460f1d82();
  atexit((_func_5014 *)&LAB_143dae2d2);
  DAT_14cb83810 = (undefined8 *)0x0;
  _DAT_14cb83818 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x1000,0);
  lVar7 = 0x3f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 8;
    *puVar1 = puVar5;
    lVar7 = lVar7 + -1;
    puVar1 = puVar5;
  } while (lVar7 != 0);
  _DAT_14cb83818 = _DAT_14cb83818 + 0x40;
  *puVar5 = DAT_14cb83810;
  DAT_14cb83810 = puVar4;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143dafe5e;
  local_98 = &DAT_14011fc1e;
  FUN_1460f2518();
  atexit((_func_5014 *)&LAB_143dae300);
  DAT_14cb83900 = (undefined8 *)0x0;
  _DAT_14cb83908 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x2400,0);
  lVar7 = 0x3f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x12;
    *puVar1 = puVar5;
    lVar7 = lVar7 + -1;
    puVar1 = puVar5;
  } while (lVar7 != 0);
  _DAT_14cb83908 = _DAT_14cb83908 + 0x40;
  *puVar5 = DAT_14cb83900;
  DAT_14cb83900 = puVar4;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143dafe64;
  local_98 = &DAT_14011fc1e;
  FUN_1460f2cae();
  atexit((_func_5014 *)&LAB_143dae32e);
  ram0x00014cb83994 = 0;
  FUN_14052b5e0(&DAT_14cb83990,"Handle",0);
  _DAT_14cb839a0 = "Handle";
  ram0x00014cb839ac = 0;
  FUN_14052b5e0(&DAT_14cb839a8,&DAT_14a50b8bf,0);
  _DAT_14cb839b8 = &DAT_14a50b8bf;
  ram0x00014cb839c4 = 0;
  FUN_14052b5e0(&DAT_14cb839c0,"Criteria",0);
  _DAT_14cb839d0 = "Criteria";
  _DAT_14cb839e0 = &LAB_143dae333;
  _DAT_14cb839e8 = 0x442a0ccd;
  DAT_14cb839ec = 1;
  DAT_14cb839d8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb839d8;
  atexit((_func_5014 *)&LAB_143dae338);
  _DAT_14cb83a00 = &LAB_143dae36c;
  _DAT_14cb83a08 = 0x442a1333;
  DAT_14cb83a0c = 1;
  DAT_14cb839f8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb839f8;
  atexit((_func_5014 *)&LAB_143dae371);
  _DAT_14cb83a20 = &LAB_143dae3a5;
  _DAT_14cb83a28 = 0x442a199a;
  DAT_14cb83a2c = 1;
  DAT_14cb83a18 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb83a18;
  atexit((_func_5014 *)&LAB_143dae3aa);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db0d60 FUN_143db0d60 body=1277 status=ok
// SIG undefined FUN_143db0d60(void)

undefined4
FUN_143db0d60(longlong param_1,undefined8 *param_2,char *param_3,longlong param_4,longlong *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
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
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
    uVar6 = *(undefined4 *)(param_2 + 1);
  }
  else {
    uVar6 = 0;
    if (DAT_14cb84b50 != (longlong *)0x0 && DAT_14cb84b58 != 0) {
      uVar7 = *param_2;
      cVar4 = (**(code **)(*DAT_14cb84b50 + 0x30))();
      if (cVar4 != '\0') {
        plVar10 = DAT_14cb84b50;
        if (DAT_14cb84b58 == 0) {
          plVar10 = (longlong *)0x0;
        }
        uVar6 = (**(code **)(*plVar10 + 0x58))(plVar10,uVar7,param_5);
      }
    }
  }
  if (param_2[4] != 0) {
    *param_5 = param_2[4];
  }
  *param_3 = '\0';
  cVar4 = *(char *)(param_2 + 2);
  if (cVar4 == '\0') {
    if (DAT_14cb84b60 != (longlong *)0x0 && DAT_14cb84b68 != 0) {
      uVar7 = *param_2;
      cVar4 = (**(code **)(*DAT_14cb84b60 + 0x30))();
      if (cVar4 != '\0') {
        plVar10 = DAT_14cb84b60;
        if (DAT_14cb84b68 == 0) {
          plVar10 = (longlong *)0x0;
        }
        cVar4 = (**(code **)(*plVar10 + 0x58))(plVar10,uVar7);
        if (cVar4 != '\0') goto LAB_143db0ead;
      }
    }
  }
  else if ((cVar4 == '\x01') ||
          ((((((cVar4 == '\x03' && (*(int *)(param_2 + 3) != 0)) &&
              (uVar1 = *(uint *)((longlong)param_2 + 0x14), -1 < (int)uVar1)) &&
             (((int)uVar1 < DAT_14c9647dc &&
              (lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 != 0))))
            && (*(int *)(lVar9 + 0x10) == *(int *)(param_2 + 3))) &&
           ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
LAB_143db0ead:
    *param_3 = '\x01';
  }
  if (*param_3 != '\x01') goto LAB_143db11f1;
  if (((*(int *)(param_2 + 3) == 0) || (uVar1 = *(uint *)((longlong)param_2 + 0x14), (int)uVar1 < 0)
      ) || ((DAT_14c9647dc <= (int)uVar1 ||
            (((lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 == 0 ||
              (*(int *)(lVar9 + 0x10) != *(int *)(param_2 + 3))) ||
             ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))))) {
    if (0 < *(int *)(param_1 + 0x238)) {
      lVar9 = 0;
      do {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x230) + 4 + lVar9 * 8);
        if ((((iVar2 != 0) &&
             (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x230) + lVar9 * 8), -1 < (int)uVar1)) &&
            ((int)uVar1 < DAT_14c9647dc)) &&
           (((plVar10 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar2)) &&
            (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar3 = *plVar10, lVar3 != 0)))))) {
          if (DAT_14cb61cd0 == 0) {
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1463b31ae;
            local_70 = &local_50;
            local_78 = &LAB_1486dca4f;
            local_80 = &LAB_1464f50a6;
            local_88 = &DAT_149e063b2;
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 8;
            local_a8 = 0xd70;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
            uVar7 = FUN_140cc62c2();
            uVar5 = FUN_143cd24ea(uVar7,lVar3,uVar6);
            iVar2 = *(int *)(param_4 + 0x88);
            *(uint *)(param_4 + 0x88) = iVar2 + 1U;
            if (*(uint *)(param_4 + 0x8c) < iVar2 + 1U) {
              FUN_1488db5b6(param_4,iVar2);
            }
            lVar8 = *(longlong *)(param_4 + 0x80);
            if (*(longlong *)(param_4 + 0x80) == 0) {
              lVar8 = param_4;
            }
            *(longlong *)(lVar8 + (longlong)iVar2 * 0x10) = lVar3;
            *(undefined4 *)(lVar8 + 8 + (longlong)iVar2 * 0x10) = uVar5;
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(param_1 + 0x238));
    }
    if ((*(int *)(param_4 + 0x88) != 0) && (DAT_14cb84b70 != (longlong *)0x0 && DAT_14cb84b78 != 0))
    {
      uVar7 = *param_2;
      cVar4 = (**(code **)(*DAT_14cb84b70 + 0x30))();
      if (cVar4 != '\0') {
        plVar10 = DAT_14cb84b70;
        if (DAT_14cb84b78 == 0) {
          plVar10 = (longlong *)0x0;
        }
        cVar4 = (**(code **)(*plVar10 + 0x58))(plVar10,uVar7);
        if (cVar4 != '\0') {
          lVar9 = *(longlong *)(param_4 + 0x80);
          if (*(longlong *)(param_4 + 0x80) == 0) {
            lVar9 = param_4;
          }
          uVar6 = *(undefined4 *)(lVar9 + 8);
        }
      }
    }
    goto LAB_143db11f1;
  }
  uVar7 = FUN_140cc62c2();
  if (*(int *)(param_2 + 3) == 0) {
LAB_143db124f:
    uVar11 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_2 + 0x14);
    uVar11 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_2 + 3) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143db124f;
      uVar11 = *puVar12;
    }
  }
  uVar6 = FUN_143cd24ea(uVar7,uVar11,uVar6);
  if (*(int *)(param_2 + 3) == 0) {
LAB_143db1256:
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_2 + 0x14);
    uVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_2 + 3) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143db1256;
      uVar7 = *puVar12;
    }
  }
  iVar2 = *(int *)(param_4 + 0x88);
  *(uint *)(param_4 + 0x88) = iVar2 + 1U;
  if (*(uint *)(param_4 + 0x8c) < iVar2 + 1U) {
    FUN_1488db5b6(param_4,iVar2);
  }
  lVar9 = *(longlong *)(param_4 + 0x80);
  if (*(longlong *)(param_4 + 0x80) == 0) {
    lVar9 = param_4;
  }
  *(undefined8 *)(lVar9 + (longlong)iVar2 * 0x10) = uVar7;
  *(undefined4 *)(lVar9 + 8 + (longlong)iVar2 * 0x10) = uVar6;
LAB_143db11f1:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143db125e FUN_143db125e body=2044 status=ok
// SIG undefined FUN_143db125e(void)

ulonglong FUN_143db125e(longlong *param_1,undefined8 param_2,longlong param_3,char *param_4,
                       int *param_5,undefined8 *param_6,longlong *param_7,longlong param_8,
                       longlong *param_9)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 unaff_RBX;
  int iVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  bool bVar20;
  undefined1 auStack_308 [40];
  char *local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [216];
  undefined8 local_1d8 [2];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined1 local_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  void *pvStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 auStack_d8 [12];
  char local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  iVar2 = *param_5;
  lVar4 = *(longlong *)(param_5 + 2);
  if (lVar4 == 0 || 0 >= iVar2) goto LAB_143db1898;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0x3ff00000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_194 = 0x3ff00000;
  uStack_190 = 0;
  uStack_18c = 0x3ff00000;
  local_188 = 0x3ff0000000000000;
  uStack_180 = 0;
  local_178 = (undefined4)DAT_14c8464e0;
  uStack_174 = DAT_14c8464e0._4_4_;
  uStack_170 = (undefined4)DAT_14c8464e8;
  uStack_16c = DAT_14c8464e8._4_4_;
  local_168 = DAT_14c8464f0;
  local_160 = 0;
  local_15c = DAT_14cb7bd68;
  uStack_154 = DAT_14cb7bd70;
  uStack_150 = (undefined4)DAT_14cb7bd80;
  uStack_14c = (undefined4)((ulonglong)DAT_14cb7bd80 >> 0x20);
  uStack_148 = DAT_14cb7bd88;
  lVar13 = 0;
  local_124 = 0;
  local_134 = 0;
  uStack_12c = 0;
  uStack_144 = 0;
  uStack_13c = 0;
  local_120 = 0xffffffff;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  pvStack_100 = (void *)0x0;
  local_f8 = 0;
  lVar14 = *(longlong *)(param_3 + 0x58);
  local_78 = '\0';
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uVar10 = 0;
  local_2e0 = param_4;
  local_2d8 = param_2;
  local_2d0 = param_1;
  if (lVar14 != 0) {
    uVar10 = FUN_140427846();
    uVar10 = FUN_144718840(lVar14,uVar10);
    lVar13 = *(longlong *)(param_3 + 0x58);
  }
  local_f0 = *param_6;
  puVar11 = &DAT_14c846480;
  if (*(longlong *)(lVar13 + 0x1c8) != 0) {
    puVar11 = (undefined8 *)(*(longlong *)(lVar13 + 0x1c8) + 0x240);
  }
  puVar17 = local_1d8;
  local_e0 = uVar10;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar17 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar17 = puVar17 + 1;
  }
  uStack_13c = CONCAT44(uStack_13c._4_4_,*(undefined4 *)(param_3 + 0x48));
  local_15c = *(undefined8 *)(param_3 + 0x28);
  uStack_14c = *(undefined4 *)(param_3 + 0x38);
  uStack_148 = *(undefined4 *)(param_3 + 0x3c);
  uStack_144 = *(undefined8 *)(param_3 + 0x40);
  uStack_154 = (undefined4)*(undefined8 *)(param_3 + 0x30);
  uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  local_118 = *(undefined8 *)(param_3 + 0x60);
  uStack_110 = *(undefined8 *)(param_3 + 0x68);
  local_108 = *(undefined8 *)(param_3 + 0x70);
  if (&pvStack_100 != (void **)(param_3 + 0x78)) {
    uVar3 = *(uint *)(param_3 + 0x80);
    pvVar5 = *(void **)(param_3 + 0x78);
    local_f8 = CONCAT44(local_f8._4_4_,uVar3);
    if (uVar3 == 0 && local_f8._4_4_ == 0) {
      local_f8 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&pvStack_100,uVar3);
      if (uVar3 != 0) {
        memcpy(pvStack_100,pvVar5,(longlong)(int)uVar3 * 2);
      }
    }
  }
  iVar9 = local_54;
  uVar7 = local_50;
  if ((param_7 != (longlong *)0x0) &&
     ((uVar19 = 2, *(char *)(param_3 + 0x10) == '\x03' ||
      (uVar19 = 1, (*(byte *)(*(longlong *)(param_5 + 2) + 0x368) & 0x40) != 0)))) {
    local_58 = *(uint *)((longlong)param_7 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((local_58 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar9 = *(int *)(lVar14 + 0x10);
    uVar7 = uVar19;
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar9 = *(int *)(lVar14 + 0x10);
      bVar20 = iVar9 == 0;
      if (bVar20) {
        *(int *)(lVar14 + 0x10) = iVar15;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar9 = iVar15;
      }
    }
  }
  local_50 = uVar7;
  local_54 = iVar9;
  if (param_8 == 0) {
    FUN_140368c94(param_5,local_2b0,local_2e0,0);
    if (((param_7 != (longlong *)0x0) && (local_54 != 0 || local_58 != 0)) &&
       (cVar8 = (**(code **)(*param_7 + 0x6c8))(param_7), cVar8 != '\0')) {
      lVar14 = FUN_140831778();
      local_2b8 = *(undefined8 *)(lVar14 + 0x88);
      FUN_14088cfbe(local_2d8,local_2c8,local_2b0);
      if (local_2c0 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_2c0 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_2c0)(local_2c0);
          LOCK();
          piVar1 = (int *)((longlong)local_2c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2c0 + 0x10))(local_2c0);
          }
        }
      }
    }
    (**(code **)(*local_2d0 + 0x10))(local_2d0,&local_2b8,local_2b0,local_1d8);
    if ((param_9 != (longlong *)0x0) && (local_2b8._4_1_ == '\x01')) {
      iVar9 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar9 + 1U) {
        FUN_14573f2d4(param_9,iVar9);
      }
      *(undefined4 *)(*param_9 + (longlong)iVar9 * 4) = (undefined4)local_2b8;
    }
    FUN_140368b56(local_2b0);
  }
  else {
    puVar11 = (undefined8 *)FUN_140f8f1f8(param_8);
    pcVar16 = local_2e0;
    cVar8 = *(char *)(puVar11 + 0x4d);
    if (cVar8 != '\0') {
      if (cVar8 == '\x03') {
        plVar12 = (longlong *)puVar11[0x4f];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
      }
      else if (cVar8 == '\x01') {
        puVar11[0x4e] = 0;
      }
      *(undefined1 *)(puVar11 + 0x4d) = 0;
    }
    cVar8 = *pcVar16;
    *(char *)(puVar11 + 0x4d) = cVar8;
    if (cVar8 == '\x01') {
      plVar12 = (longlong *)(pcVar16 + 8);
LAB_143db1556:
      lVar14 = *plVar12;
      *(undefined1 *)(puVar11 + 0x4d) = 2;
      puVar11[0x4e] = 0;
      if (lVar14 == 0) {
        iVar9 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar14 + 0xc);
        *(uint *)(puVar11 + 0x4e) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar9 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar9 = *(int *)(lVar14 + 0x10);
          bVar20 = iVar9 == 0;
          if (bVar20) {
            *(int *)(lVar14 + 0x10) = iVar15;
            iVar9 = 0;
          }
          UNLOCK();
          pcVar16 = local_2e0;
          if (bVar20) {
            iVar9 = iVar15;
          }
        }
      }
      *(int *)((longlong)puVar11 + 0x274) = iVar9;
    }
    else if (cVar8 == '\x02') {
      puVar11[0x4e] = *(undefined8 *)(pcVar16 + 8);
    }
    else if (cVar8 == '\x03') {
      puVar11[0x4e] = *(undefined8 *)(pcVar16 + 8);
      lVar14 = *(longlong *)(pcVar16 + 0x10);
      puVar11[0x4f] = lVar14;
      if (lVar14 == 0) {
        puVar11[0x50] = *(undefined8 *)(pcVar16 + 0x18);
        *(char *)(puVar11 + 0x51) = pcVar16[0x20];
      }
      else {
        LOCK();
        *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
        UNLOCK();
        puVar11[0x50] = *(undefined8 *)(pcVar16 + 0x18);
        *(char *)(puVar11 + 0x51) = pcVar16[0x20];
        if (*(char *)(puVar11 + 0x4d) == '\x01') {
          plVar12 = puVar11 + 0x4e;
          goto LAB_143db1556;
        }
      }
    }
    FUN_14495544a(puVar11 + 0x52,pcVar16 + 0x28);
    iVar9 = param_5[1];
    iVar15 = param_5[2];
    iVar6 = param_5[3];
    *(int *)(puVar11 + 0x53) = *param_5;
    *(int *)((longlong)puVar11 + 0x29c) = iVar9;
    *(int *)(puVar11 + 0x54) = iVar15;
    *(int *)((longlong)puVar11 + 0x2a4) = iVar6;
    puVar11[0x55] = *(undefined8 *)(param_5 + 4);
    FUN_143dbbff8(puVar11 + 0x56,param_5 + 6);
    FUN_1407b26d0(puVar11 + 0x58,param_5 + 10);
    (**(code **)(puVar11[0x5a] + 0x20))(puVar11 + 0x5a,0);
    puVar11[0x5b] = *(undefined8 *)(param_5 + 0x10);
    FUN_1406022fe(puVar11 + 0x5c,param_5 + 0x12);
    FUN_1407b2728(puVar11 + 0x5e,param_5 + 0x16);
    memcpy(puVar11,local_1d8,0xbc);
    pvVar5 = pvStack_100;
    puVar11[0x18] = local_118;
    *(undefined4 *)(puVar11 + 0x19) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)puVar11 + 0xcc) = uStack_110._4_4_;
    *(undefined4 *)(puVar11 + 0x1a) = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar11 + 0xd4) = local_108._4_4_;
    if (puVar11 == local_1d8) {
      puVar11[0x1f] = local_e0;
      puVar11[0x1d] = local_f0;
      puVar11[0x1e] = uStack_e8;
    }
    else {
      iVar9 = (int)local_f8;
      lVar14 = (longlong)(int)local_f8;
      *(int *)(puVar11 + 0x1c) = (int)local_f8;
      if ((int)local_f8 == 0 && *(int *)((longlong)puVar11 + 0xe4) == 0) {
        *(undefined4 *)((longlong)puVar11 + 0xe4) = 0;
      }
      else {
        FUN_1446dd670(puVar11 + 0x1b,local_f8 & 0xffffffff);
        if (iVar9 != 0) {
          memcpy((void *)puVar11[0x1b],pvVar5,lVar14 * 2);
        }
      }
      puVar11[0x1f] = local_e0;
      puVar11[0x1d] = local_f0;
      puVar11[0x1e] = uStack_e8;
      if (local_78 == '\x01') {
        puVar17 = auStack_d8;
        puVar18 = puVar11 + 0x20;
        for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        *(undefined1 *)(puVar11 + 0x2c) = 1;
      }
      else if (*(char *)(puVar11 + 0x2c) == '\x01') {
        *(undefined1 *)(puVar11 + 0x2c) = 0;
      }
    }
    *(ulonglong *)((longlong)puVar11 + 0x179) =
         CONCAT17((undefined1)local_58,CONCAT43(uStack_5c,uStack_60._1_3_));
    *(ulonglong *)((longlong)puVar11 + 0x181) = CONCAT17(local_50,CONCAT43(local_54,local_58._1_3_))
    ;
    *(undefined4 *)(puVar11 + 0x2e) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar11 + 0x174) = local_68._4_4_;
    *(undefined4 *)(puVar11 + 0x2f) = uStack_60;
    *(undefined4 *)((longlong)puVar11 + 0x17c) = uStack_5c;
  }
  if (local_78 == '\x01') {
    local_78 = '\0';
  }
  if (pvStack_100 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143db1898:
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar4 != 0 && 0 < iVar2) & 0xffffffff;
}



// FUNCTION 143db1a5b FUN_143db1a5b body=1164 status=ok
// SIG undefined FUN_143db1a5b(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143db1a5b(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,longlong param_7,longlong *param_8,
                  ulonglong param_9,ulonglong param_10)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0 [2];
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined4 local_80;
  char local_7c;
  char local_78 [16];
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = 0;
  uStack_90 = 0;
  local_78[0] = '\0';
  local_50[0] = 0;
  local_c0 = param_1;
  FUN_1456bb102(local_78,*param_4);
  if (0 < (int)param_8[0x11]) {
    plVar6 = (longlong *)param_8[0x10];
    if ((longlong *)param_8[0x10] == (longlong *)0x0) {
      plVar6 = param_8;
    }
    lVar7 = FUN_1447210f0(*plVar6);
    plVar6 = (longlong *)param_8[0x10];
    if ((longlong *)param_8[0x10] == (longlong *)0x0) {
      plVar6 = param_8;
    }
    uVar8 = FUN_1448174c4(local_50);
    FUN_14189791a(uVar8,plVar6);
    if (lVar7 != 0) goto LAB_143db1b1c;
  }
  lVar7 = (**(code **)(*param_2 + 0x118))(param_2);
LAB_143db1b1c:
  if (*(char *)((longlong)param_4 + 0x4c) == '\x01') {
    local_f8 = param_4[10];
  }
  else {
    *(undefined1 *)((longlong)param_4 + 0x4c) = 1;
    local_f8 = FUN_140cbc0d8(lVar7);
    param_4[10] = local_f8;
  }
  plVar6 = local_b0 + 1;
  local_b0[1] = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_e0 = local_e0 & 0xffffffffffffff00;
  local_e8 = param_7;
  local_f0 = CONCAT71(local_f0._1_7_,1);
  local_c8 = plVar6;
  FUN_1403695ab(&local_98,local_c0,param_6,local_78);
  if ((int)uStack_90 != 0) {
    if ((int)param_8[0x11] < 1) {
      local_e8 = 0;
    }
    else {
      plVar9 = (longlong *)param_8[0x10];
      if ((longlong *)param_8[0x10] == (longlong *)0x0) {
        plVar9 = param_8;
      }
      local_e8 = *plVar9;
    }
    local_d8 = param_10;
    local_e0 = param_9;
    local_f0 = param_5;
    local_f8 = local_98;
    cVar5 = FUN_143db125e(param_2,param_3,param_4,local_78);
    if (((cVar5 != '\0') && (1 < (int)param_8[0x11])) &&
       ((*(byte *)(*(longlong *)(local_98 + 8) + 0x368) & 0x40) != 0)) {
      lVar7 = 1;
      lVar10 = 0;
      local_b8 = param_3;
      do {
        plVar9 = (longlong *)param_8[0x10];
        if ((longlong *)param_8[0x10] == (longlong *)0x0) {
          plVar9 = param_8;
        }
        local_b0[0] = *(longlong *)((longlong)plVar9 + lVar10 + 0x10);
        if (*(longlong *)(local_b0[0] + 0x3d0) != 0) {
          uVar8 = FUN_1448174c4(local_50);
          FUN_146554956(uVar8,local_b0);
          uVar4 = uStack_90;
          plVar9 = (longlong *)param_8[0x10];
          if ((longlong *)param_8[0x10] == (longlong *)0x0) {
            plVar9 = param_8;
          }
          uVar2 = *(undefined4 *)((longlong)plVar9 + lVar10 + 0x18);
          FUN_14036924e(local_98,uStack_90 & 0xffffffff);
          uVar3 = uStack_90 >> 0x20;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          if (((longlong)uVar4 < 0) && ((int)uVar3 != 0)) {
            FUN_1457048a4(&local_98,0);
          }
          local_b0[1] = 0;
          local_a0 = 0;
          local_f8 = param_4[10];
          local_d0 = 0;
          local_d8 = CONCAT71(local_d8._1_7_,1);
          local_e8 = param_7;
          local_f0 = CONCAT71(local_f0._1_7_,1);
          local_e0 = local_e0 & 0xffffffffffffff00;
          local_c8 = plVar6;
          FUN_1403695ab(&local_98,local_c0,uVar2,local_78);
          uVar8 = local_b8;
          if ((int)uStack_90 == 0) {
            local_f8 = param_4[10];
            FUN_145760262(&local_80,local_c0,local_78,uVar2);
            if (local_7c == '\x01') {
              local_b0[1] = 0;
              local_a0 = 0;
              local_f8 = param_4[10];
              local_d0 = 0;
              local_d8 = CONCAT71(local_d8._1_7_,1);
              local_e8 = 0;
              local_f0 = CONCAT71(local_f0._1_7_,1);
              local_e0 = local_e0 & 0xffffffffffffff00;
              local_c8 = plVar6;
              FUN_1403695ab(&local_98,local_c0,local_80,local_78);
            }
          }
          if (0 < (int)uStack_90) {
            local_d8 = param_10;
            local_e0 = param_9;
            local_e8 = local_b0[0];
            local_f0 = param_5;
            local_f8 = local_98;
            FUN_143db125e(param_2,uVar8,param_4,local_78);
          }
        }
        lVar7 = lVar7 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar7 < (int)param_8[0x11]);
    }
  }
  FUN_1448173f8(local_50);
  if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_14036924e(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143db1ee8 FUN_143db1ee8 body=2459 status=ok
// SIG undefined FUN_143db1ee8(void)

ulonglong FUN_143db1ee8(longlong *param_1,undefined8 param_2,longlong param_3,char *param_4,
                       int *param_5,longlong *param_6,longlong param_7,longlong *param_8)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  void *_Src;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined1 *_Dst;
  longlong *plVar13;
  undefined8 unaff_RBX;
  undefined1 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined5 uStack_180;
  undefined3 uStack_17b;
  undefined5 uStack_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  void *pvStack_150;
  ulonglong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [12];
  char local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int local_a4;
  undefined1 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_348;
  iVar2 = *param_5;
  lVar3 = *(longlong *)(param_5 + 2);
  if (lVar3 == 0 || 0 >= iVar2) goto LAB_143db26a6;
  local_228 = ZEXT816(0);
  local_218._0_12_ = ZEXT812(0);
  local_218._12_4_ = 0x3ff00000;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e4 = 0x3ff00000;
  uStack_1e0 = 0;
  uStack_1dc = 0x3ff00000;
  local_1d8 = 0x3ff0000000000000;
  uStack_1d0 = 0;
  local_1b8 = DAT_14c8464f0;
  local_1c8 = DAT_14c8464e0;
  uStack_1c0 = DAT_14c8464e8;
  local_1b0 = 0.0;
  local_188 = 0;
  uStack_180 = 0;
  uStack_17b = 0;
  uStack_178 = 0;
  local_170 = 0xffffffff;
  local_c8 = '\0';
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  pvStack_150 = (void *)0x0;
  local_168 = 0;
  uStack_160 = 0;
  local_18c = *(undefined4 *)(param_3 + 0x48);
  local_1ac = *(undefined4 *)(param_3 + 0x28);
  uStack_1a8 = *(undefined4 *)(param_3 + 0x2c);
  uStack_1a4 = *(undefined4 *)(param_3 + 0x30);
  uStack_1a0 = *(undefined4 *)(param_3 + 0x34);
  local_19c = *(undefined4 *)(param_3 + 0x38);
  uStack_198 = *(undefined4 *)(param_3 + 0x3c);
  uStack_194 = *(undefined4 *)(param_3 + 0x40);
  uStack_190 = *(undefined4 *)(param_3 + 0x44);
  local_328 = param_2;
  iVar12 = local_a4;
  uVar9 = local_a0;
  if ((param_6 != (longlong *)0x0) &&
     ((uVar14 = 2, *(char *)(param_3 + 0x10) == '\x03' ||
      (uVar14 = 1, (*(byte *)(lVar3 + 0x368) & 0x40) != 0)))) {
    local_a8 = *(uint *)((longlong)param_6 + 0xc);
    if ((int)local_a8 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((local_a8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a8 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar12 = *(int *)(lVar18 + 0x10);
    uVar9 = uVar14;
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar12 = *(int *)(lVar18 + 0x10);
      bVar19 = iVar12 == 0;
      if (bVar19) {
        *(int *)(lVar18 + 0x10) = iVar15;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar12 = iVar15;
      }
    }
  }
  local_a0 = uVar9;
  local_a4 = iVar12;
  lVar18 = FUN_140350bfe(param_3 + 0x60);
  if (lVar18 == 0) {
    if (*(char *)(param_3 + 0x59) == '\x01') {
      lVar18 = FUN_140831778();
      lVar18 = FUN_140350bfe(lVar18 + 0x30);
      if (lVar18 != 0) goto LAB_143db20e4;
    }
    puVar16 = (undefined8 *)(param_3 + 0xc0);
    puVar17 = (undefined8 *)local_228;
    for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar17 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar17 = puVar17 + 1;
    }
    FUN_143dae3de(&local_1c8,0x42c80000,0x43160000);
    uVar11 = rand();
    local_1b0 = ((float)(uVar11 & 0x7fff) / 32767.0) * 200.0 + 400.0;
  }
  else {
LAB_143db20e4:
    local_2e8 = 0.0;
    dStack_2e0 = 0.0;
    local_2f8 = 0;
    dStack_2f0 = 0.0;
    local_308 = 0;
    uStack_300 = 0;
    local_2d8 = 1;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 1;
    FUN_141035d0a(lVar18,param_3 + 0x78,&local_308);
    local_208 = local_308;
    uStack_200 = uStack_300;
    local_1f8 = local_2f8;
    uStack_1f0 = 0;
    uVar22 = SUB84(dStack_2f0,0);
    uVar23 = (undefined4)((ulonglong)dStack_2f0 >> 0x20);
    uVar20 = SUB84(local_2e8,0);
    uVar21 = (undefined4)((ulonglong)local_2e8 >> 0x20);
    dVar4 = 0.0;
    if ((((dStack_2f0 != 0.0) || (NAN(dStack_2f0))) || (local_2e8 != 0.0)) || (NAN(local_2e8))) {
      dVar4 = atan2(local_2e8,dStack_2f0);
      dVar4 = dVar4 * 0.5;
      uVar22 = SUB84(dStack_2f0,0);
      uVar23 = (undefined4)((ulonglong)dStack_2f0 >> 0x20);
      uVar20 = SUB84(local_2e8,0);
      uVar21 = (undefined4)((ulonglong)local_2e8 >> 0x20);
    }
    dVar7 = SQRT((double)CONCAT44(uVar23,uVar22) * (double)CONCAT44(uVar23,uVar22) +
                 (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20));
    dVar5 = 0.0;
    if (((dStack_2e0 != 0.0) || (NAN(dStack_2e0))) || ((dVar7 != 0.0 || (NAN(dVar7))))) {
      dVar5 = atan2(dStack_2e0,dVar7);
      dVar5 = dVar5 * 0.5;
    }
    dVar7 = sin(dVar5);
    dVar5 = cos(dVar5);
    dVar6 = sin(dVar4);
    dVar4 = cos(dVar4);
    local_228._8_4_ = SUB84(-dVar7 * dVar4,0);
    local_228._0_8_ = dVar7 * dVar6;
    local_228._12_4_ = (int)((ulonglong)(-dVar7 * dVar4) >> 0x20);
    local_218._8_4_ = SUB84(dVar5 * dVar4,0);
    local_218._0_8_ = dVar6 * dVar5;
    local_218._12_4_ = (int)((ulonglong)(dVar5 * dVar4) >> 0x20);
    local_1b8 = local_2c0;
    local_1c8 = local_2d0;
    uStack_1c0 = uStack_2c8;
    local_1b0 = (float)SQRT(dStack_2e0 * dStack_2e0 +
                            dStack_2f0 * dStack_2f0 + local_2e8 * local_2e8);
  }
  if (param_7 == 0) {
    FUN_140368c94(param_5,&local_308,param_4,0);
    if (((param_6 != (longlong *)0x0) && (local_a4 != 0 || local_a8 != 0)) &&
       (cVar10 = (**(code **)(*param_6 + 0x6c8))(), cVar10 != '\0')) {
      lVar18 = FUN_140831778();
      local_310 = *(undefined8 *)(lVar18 + 0x88);
      FUN_14088cfbe(local_328,local_320,&local_308);
      if (local_318 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_318 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_318)(local_318);
          LOCK();
          piVar1 = (int *)((longlong)local_318 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_318 + 0x10))(local_318);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x10))(param_1,&local_310,&local_308,local_228);
    if ((param_8 != (longlong *)0x0) && (local_310._4_1_ == '\x01')) {
      iVar12 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar12 + 1U) {
        FUN_14573f2d4(param_8,iVar12);
      }
      *(undefined4 *)(*param_8 + (longlong)iVar12 * 4) = (undefined4)local_310;
    }
    FUN_140368b56(&local_308);
  }
  else {
    _Dst = (undefined1 *)FUN_140f8f1f8(param_7);
    cVar10 = _Dst[0x268];
    if (cVar10 != '\0') {
      if (cVar10 == '\x03') {
        plVar13 = *(longlong **)(_Dst + 0x278);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
      }
      else if (cVar10 == '\x01') {
        *(undefined8 *)(_Dst + 0x270) = 0;
      }
      _Dst[0x268] = 0;
    }
    cVar10 = *param_4;
    _Dst[0x268] = cVar10;
    if (cVar10 == '\x01') {
      plVar13 = (longlong *)(param_4 + 8);
LAB_143db2338:
      lVar18 = *plVar13;
      _Dst[0x268] = 2;
      *(undefined8 *)(_Dst + 0x270) = 0;
      if (lVar18 == 0) {
        iVar12 = 0;
      }
      else {
        uVar11 = *(uint *)(lVar18 + 0xc);
        *(uint *)(_Dst + 0x270) = uVar11;
        if ((int)uVar11 < DAT_14c9647dc) {
          lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
        }
        else {
          lVar18 = 0;
        }
        iVar12 = *(int *)(lVar18 + 0x10);
        if (*(int *)(lVar18 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar12 = *(int *)(lVar18 + 0x10);
          bVar19 = iVar12 == 0;
          if (bVar19) {
            *(int *)(lVar18 + 0x10) = iVar15;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar12 = iVar15;
          }
        }
      }
      *(int *)(_Dst + 0x274) = iVar12;
    }
    else if (cVar10 == '\x02') {
      *(undefined8 *)(_Dst + 0x270) = *(undefined8 *)(param_4 + 8);
    }
    else if (cVar10 == '\x03') {
      *(undefined8 *)(_Dst + 0x270) = *(undefined8 *)(param_4 + 8);
      lVar18 = *(longlong *)(param_4 + 0x10);
      *(longlong *)(_Dst + 0x278) = lVar18;
      if (lVar18 == 0) {
        *(undefined8 *)(_Dst + 0x280) = *(undefined8 *)(param_4 + 0x18);
        _Dst[0x288] = param_4[0x20];
      }
      else {
        LOCK();
        *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + 1;
        UNLOCK();
        *(undefined8 *)(_Dst + 0x280) = *(undefined8 *)(param_4 + 0x18);
        _Dst[0x288] = param_4[0x20];
        if (_Dst[0x268] == '\x01') {
          plVar13 = (longlong *)(_Dst + 0x270);
          goto LAB_143db2338;
        }
      }
    }
    FUN_14495544a(_Dst + 0x290,param_4 + 0x28);
    iVar12 = param_5[1];
    iVar15 = param_5[2];
    iVar8 = param_5[3];
    *(int *)(_Dst + 0x298) = *param_5;
    *(int *)(_Dst + 0x29c) = iVar12;
    *(int *)(_Dst + 0x2a0) = iVar15;
    *(int *)(_Dst + 0x2a4) = iVar8;
    *(undefined8 *)(_Dst + 0x2a8) = *(undefined8 *)(param_5 + 4);
    FUN_143dbbff8(_Dst + 0x2b0,param_5 + 6);
    FUN_1407b26d0(_Dst + 0x2c0,param_5 + 10);
    (**(code **)(*(longlong *)(_Dst + 0x2d0) + 0x20))(_Dst + 0x2d0,0);
    *(undefined8 *)(_Dst + 0x2d8) = *(undefined8 *)(param_5 + 0x10);
    FUN_1406022fe(_Dst + 0x2e0,param_5 + 0x12);
    FUN_1407b2728(_Dst + 0x2f0,param_5 + 0x16);
    memcpy(_Dst,local_228,0xbc);
    _Src = pvStack_150;
    *(undefined8 *)(_Dst + 0xc0) = local_168;
    *(undefined4 *)(_Dst + 200) = (undefined4)uStack_160;
    *(undefined4 *)(_Dst + 0xcc) = uStack_160._4_4_;
    *(undefined4 *)(_Dst + 0xd0) = (undefined4)local_158;
    *(undefined4 *)(_Dst + 0xd4) = local_158._4_4_;
    if (_Dst == local_228) {
      *(undefined8 *)(_Dst + 0xf8) = uStack_130;
      *(undefined8 *)(_Dst + 0xe8) = uStack_140;
      *(undefined8 *)(_Dst + 0xf0) = local_138;
    }
    else {
      iVar12 = (int)local_148;
      lVar18 = (longlong)(int)local_148;
      *(int *)(_Dst + 0xe0) = (int)local_148;
      if ((int)local_148 == 0 && *(int *)(_Dst + 0xe4) == 0) {
        *(undefined4 *)(_Dst + 0xe4) = 0;
      }
      else {
        FUN_1446dd670(_Dst + 0xd8,local_148 & 0xffffffff);
        if (iVar12 != 0) {
          memcpy(*(void **)(_Dst + 0xd8),_Src,lVar18 * 2);
        }
      }
      *(undefined8 *)(_Dst + 0xf8) = uStack_130;
      *(undefined8 *)(_Dst + 0xe8) = uStack_140;
      *(undefined8 *)(_Dst + 0xf0) = local_138;
      if (local_c8 == '\x01') {
        puVar16 = auStack_128;
        puVar17 = (undefined8 *)(_Dst + 0x100);
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
        }
        _Dst[0x160] = 1;
      }
      else if (_Dst[0x160] == '\x01') {
        _Dst[0x160] = 0;
      }
    }
    *(ulonglong *)(_Dst + 0x179) =
         CONCAT17((undefined1)local_a8,CONCAT43(uStack_ac,uStack_b0._1_3_));
    *(ulonglong *)(_Dst + 0x181) = CONCAT17(local_a0,CONCAT43(local_a4,local_a8._1_3_));
    *(undefined4 *)(_Dst + 0x170) = (undefined4)local_b8;
    *(undefined4 *)(_Dst + 0x174) = local_b8._4_4_;
    *(undefined4 *)(_Dst + 0x178) = uStack_b0;
    *(undefined4 *)(_Dst + 0x17c) = uStack_ac;
  }
  if (local_c8 == '\x01') {
    local_c8 = '\0';
  }
  if (pvStack_150 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143db26a6:
  if ((local_90 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar3 != 0 && 0 < iVar2) & 0xffffffff;
}



// FUNCTION 143db2884 FUN_143db2884 body=91 status=ok
// SIG undefined FUN_143db2884(void)

void FUN_143db2884(void)

{
  if (DAT_14cb84b58 != 0) {
    if (DAT_14cb84b50 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb84b50)(DAT_14cb84b50,0);
    FUN_1446efa72(&DAT_14cb84b50,0,0,0x10);
    DAT_14cb84b58 = 0;
  }
  if (DAT_14cb84b50 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143db28df FUN_143db28df body=91 status=ok
// SIG undefined FUN_143db28df(void)

void FUN_143db28df(void)

{
  if (DAT_14cb84b68 != 0) {
    if (DAT_14cb84b60 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb84b60)(DAT_14cb84b60,0);
    FUN_1446efa72(&DAT_14cb84b60,0,0,0x10);
    DAT_14cb84b68 = 0;
  }
  if (DAT_14cb84b60 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143db293a FUN_143db293a body=91 status=ok
// SIG undefined FUN_143db293a(void)

void FUN_143db293a(void)

{
  if (DAT_14cb84b78 != 0) {
    if (DAT_14cb84b70 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb84b70)(DAT_14cb84b70,0);
    FUN_1446efa72(&DAT_14cb84b70,0,0,0x10);
    DAT_14cb84b78 = 0;
  }
  if (DAT_14cb84b70 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143db2996 FUN_143db2996 body=1548 status=ok
// SIG undefined FUN_143db2996(void)

void FUN_143db2996(longlong param_1,longlong *param_2,undefined1 param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,double *param_7,undefined4 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  double *pdVar17;
  bool bVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined2 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  undefined1 *local_1c8;
  code *local_1c0;
  code *local_1b0;
  longlong local_1a8;
  undefined1 local_19c;
  undefined1 local_198;
  undefined8 local_194;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined5 local_168;
  undefined3 uStack_163;
  undefined5 uStack_160;
  undefined8 local_158;
  undefined2 local_150;
  longlong local_148;
  int local_140;
  undefined8 local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_1 == 0) goto LAB_143db2e15;
  lVar13 = param_1;
  uVar10 = FUN_1447210f0();
  uVar20 = (undefined4)lVar13;
  if (uVar10 == 0) goto LAB_143db2e15;
  uVar11 = uVar10;
  if (param_2[1] == 0) {
LAB_143db2a04:
    uVar8 = (uint)uVar11;
    if (param_2[5] == 0) {
      plVar15 = param_2;
      uVar8 = (**(code **)(*param_2 + 8))();
      uVar20 = SUB84(plVar15,0);
      if ((char)uVar8 == '\0') goto LAB_143db2e15;
    }
  }
  else {
    uVar8 = (int)param_2[2] - 1;
    uVar11 = (ulonglong)uVar8;
    if (0xfffffffd < uVar8) goto LAB_143db2a04;
  }
  bVar19 = true;
  if (param_6 == 0) {
    auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[5] - DAT_14c8464a8));
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[4] - DAT_14c8464a0));
    iVar9 = movmskpd(uVar8,auVar4);
    auVar24._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[7] - DAT_14c8464b8));
    auVar24._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[6] - DAT_14c8464b0));
    uVar8 = movmskpd(uVar20,auVar24);
    if ((uVar8 & 0x3fffffff) == 0 && iVar9 == 0) {
      lVar13 = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[1] - DAT_14c846488));
      auVar7._8_4_ = (int)lVar13;
      auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_7 - DAT_14c846480));
      auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar8 = movmskpd(iVar9,auVar7);
      lVar13 = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[3] - DAT_14c846498));
      auVar6._8_4_ = (int)lVar13;
      auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[2] - DAT_14c846490));
      auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      iVar9 = movmskpd(0,auVar6);
      uVar14 = iVar9 << 2 | uVar8;
      if (uVar14 != 0) {
        auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[1] + DAT_14c846488));
        auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_7 + DAT_14c846480));
        uVar8 = movmskpd(uVar8,auVar5);
        auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[3] + DAT_14c846498));
        auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[2] + DAT_14c846490));
        uVar14 = movmskpd(uVar14,auVar3);
        if ((uVar14 & 0x3fffffff) != 0 || uVar8 != 0) goto LAB_143db2a96;
      }
      auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[9] - DAT_14c8464c8));
      auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[8] - DAT_14c8464c0));
      iVar9 = movmskpd(uVar8,auVar2);
      lVar13 = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[0xb] - dRam000000014c8464d8));
      auVar1._8_4_ = (int)lVar13;
      auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_7[10] - DAT_14c8464d0));
      auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar8 = movmskpd(0,auVar1);
      bVar19 = (uVar8 & 0x3fffffff) == 0 && iVar9 == 0;
    }
    else {
LAB_143db2a96:
      bVar19 = false;
    }
  }
  local_19c = 0;
  local_194 = 0;
  local_188 = 0;
  local_180 = DAT_14cb7bd68;
  local_178 = DAT_14cb7bd70;
  local_174 = DAT_14cb7bd80;
  local_16c = DAT_14cb7bd88;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_168 = 0;
  uStack_163 = 0;
  uStack_160 = 0;
  local_140 = 0xc000;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  if (bVar19 == false) {
    pdVar17 = (double *)&local_e8;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar17 = *param_7;
      param_7 = param_7 + 1;
      pdVar17 = pdVar17 + 1;
    }
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x1c8);
    if (lVar13 == 0) {
      local_d8 = 0;
      uStack_d0 = 0x3ff0000000000000;
      puVar12 = &DAT_14c8464e0;
      local_b8 = DAT_14c8464f0;
    }
    else {
      puVar12 = (undefined8 *)(lVar13 + 0x260);
      uVar20 = *(undefined4 *)(lVar13 + 0x240);
      uVar21 = *(undefined4 *)(lVar13 + 0x244);
      uVar22 = *(undefined4 *)(lVar13 + 0x248);
      uVar23 = *(undefined4 *)(lVar13 + 0x24c);
      local_d8 = *(undefined8 *)(lVar13 + 0x250);
      uStack_d0 = *(undefined8 *)(lVar13 + 600);
      local_b8 = *(undefined8 *)(lVar13 + 0x270);
    }
    local_c8 = *puVar12;
    uStack_c0 = puVar12[1];
    uStack_b0 = 0;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0x3ff0000000000000;
    local_98 = 0x3ff0000000000000;
    uStack_90 = 0;
    local_e8._0_4_ = uVar20;
    local_e8._4_4_ = uVar21;
    uStack_e0 = uVar22;
    uStack_dc = uVar23;
  }
  local_1a8 = param_1;
  local_198 = param_3;
  if ((param_4 == (longlong *)0x0) || (lVar13 = (**(code **)(*param_4 + 0x5d8))(), lVar13 == 0)) {
LAB_143db2d38:
    local_194 = 0;
    iVar9 = 0;
  }
  else {
    if (DAT_14cb61cd0 == 0) {
      local_1d0 = &local_1b0;
      local_1b0 = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = &LAB_1463b31ae;
      local_1d8 = &LAB_1486dca4f;
      local_1e0 = &LAB_1464f50a6;
      local_1e8 = &DAT_149e063b2;
      local_1f0 = 0;
      local_1f8 = CONCAT44(local_1f8._4_4_,0x10000004);
      uStack_200 = CONCAT44(uStack_200._4_4_,8);
      local_208 = CONCAT44(local_208._4_4_,0xd70);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_143db2d38;
    uVar8 = *(uint *)(lVar13 + 0xc);
    local_194 = CONCAT44(local_194._4_4_,uVar8);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar9 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar9 = *(int *)(lVar13 + 0x10);
      bVar18 = iVar9 == 0;
      if (bVar18) {
        *(int *)(lVar13 + 0x10) = iVar16;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar9 = iVar16;
      }
    }
  }
  local_194 = CONCAT44(iVar9,(undefined4)local_194);
  lVar13 = *param_5;
  if (lVar13 == 0) {
    bVar18 = false;
  }
  else {
    bVar18 = (int)param_5[1] - 1U < 0xfffffffe;
  }
  local_150 = CONCAT11(bVar18,(undefined1)local_150);
  if (local_148 == lVar13) {
    iVar9 = (int)param_5[1];
    if (local_140 != iVar9) goto LAB_143db2d85;
  }
  else {
    iVar9 = (int)param_5[1];
LAB_143db2d85:
    local_138 = 0;
    local_148 = lVar13;
    local_140 = iVar9;
  }
  lVar13 = 0;
  if (bVar19 != false) {
    lVar13 = param_1;
  }
  if ((bVar19 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar13);
  }
  uStack_120 = local_c8;
  local_118 = uStack_c0;
  uStack_110 = local_b8;
  local_128 = param_6;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  lStack_130 = lVar13;
  FUN_1411f3ef0(uVar10,param_2,&local_1a8,param_8);
LAB_143db2e15:
  if ((local_80 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143db2fa4 FUN_143db2fa4 body=841 status=ok
// SIG undefined FUN_143db2fa4(void)

void FUN_143db2fa4(longlong param_1,longlong *param_2,undefined1 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_dc;
  undefined1 local_d8;
  uint local_d4;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined5 local_a8;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  code *local_60 [3];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((param_1 == 0) || (lVar2 = FUN_1447210f0(), lVar2 == 0)) || (*param_2 == 0)) ||
     (0xfffffffd < (int)param_2[1] - 1U)) goto LAB_143db3185;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = DAT_14cb7bd68;
  local_b8 = DAT_14cb7bd70;
  local_b4 = DAT_14cb7bd80;
  local_ac = DAT_14cb7bd88;
  local_a8 = 0;
  uStack_a3 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_e8 = param_1;
  local_d8 = param_3;
  if ((param_4 == (longlong *)0x0) || (lVar3 = (**(code **)(*param_4 + 0x5d8))(param_4), lVar3 == 0)
     ) {
LAB_143db30e4:
    local_d4 = 0;
    iVar1 = 0;
  }
  else {
    if (DAT_14cb61cd0 == 0) {
      local_110 = local_60;
      local_60[0] = FUN_141030f22;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_1463b31ae;
      local_118 = &LAB_1486dca4f;
      local_120 = &LAB_1464f50a6;
      local_128 = &DAT_149e063b2;
      local_130 = 0;
      local_138 = 0x10000004;
      local_140 = 8;
      local_148 = CONCAT44(local_148._4_4_,0xd70);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_143db30e4;
    local_d4 = *(uint *)(lVar3 + 0xc);
    if ((int)local_d4 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_d4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_d4 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar1 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar1 = iVar4;
      }
    }
  }
  lVar3 = param_2[2];
  local_d0 = iVar1;
  lStack_90 = param_1;
  if (lVar3 == 0) {
    local_f0 = *param_2;
    FUN_1446dcdd4(local_60);
    if (DAT_14cb84648 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_144837462(DAT_14cb84648,local_60);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    param_2[2] = lVar3;
  }
  local_148 = 0;
  FUN_1414d868d(lVar2,lVar3,&local_e8,0);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
LAB_143db3185:
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143db32ee FUN_143db32ee body=1010 status=ok
// SIG undefined FUN_143db32ee(void)

void FUN_143db32ee(longlong param_1,longlong *param_2,undefined1 param_3,longlong *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  code **local_1a0;
  undefined2 *local_198;
  undefined1 *puStack_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  undefined8 local_168;
  undefined1 local_159;
  longlong local_158;
  undefined1 local_14c;
  undefined1 local_148;
  uint local_144;
  int local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined5 local_118;
  undefined3 uStack_113;
  undefined4 uStack_110;
  char local_10c;
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  code *local_d0 [16];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((param_1 == 0) || (lVar4 = FUN_1447210f0(), lVar4 == 0)) ||
     (((param_2[1] == 0 || (0xfffffffd < (int)param_2[2] - 1U)) &&
      ((param_2[5] == 0 && (cVar1 = (**(code **)(*param_2 + 8))(param_2), cVar1 == '\0'))))))
  goto LAB_143db3580;
  local_14c = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = DAT_14cb7bd68;
  local_128 = DAT_14cb7bd70;
  local_124 = DAT_14cb7bd80;
  local_11c = DAT_14cb7bd88;
  local_118 = 0;
  uStack_113 = 0;
  uStack_110 = 0;
  local_10c = '\0';
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  local_158 = param_1;
  local_148 = param_3;
  if ((param_4 == (longlong *)0x0) || (lVar5 = (**(code **)(*param_4 + 0x5d8))(param_4), lVar5 == 0)
     ) {
LAB_143db3442:
    local_144 = 0;
    iVar3 = 0;
  }
  else {
    if (DAT_14cb61cd0 == 0) {
      local_180 = local_d0;
      local_d0[0] = FUN_141030f22;
      local_170 = FUN_14081d0ea;
      local_178 = &LAB_1463b31ae;
      local_188 = &LAB_1486dca4f;
      puStack_190 = &LAB_1464f50a6;
      local_198 = &DAT_149e063b2;
      local_1a0 = (code **)0x0;
      local_1a8 = CONCAT44(local_1a8._4_4_,0x10000004);
      local_1b0 = 8;
      local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0xd70);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_143db3442;
    local_144 = *(uint *)(lVar5 + 0xc);
    if ((int)local_144 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_144 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar5 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar7;
      }
    }
  }
  local_140 = iVar3;
  lStack_100 = param_1;
  if (((local_158 != 0) &&
      ((((param_2[1] != 0 && ((int)param_2[2] - 1U < 0xfffffffe)) || (param_2[5] != 0)) ||
       (cVar1 = (**(code **)(*param_2 + 8))(param_2), cVar1 != '\0')))) &&
     (lVar5 = FUN_14007a5e6(lVar4), lVar5 != 0)) {
    if (local_10c == '\0') {
      local_10c = '\x01';
      local_108 = FUN_140cbc0d8(lVar4);
    }
    local_159 = 0;
    local_50 = 0;
    local_48 = 0x800000000;
    local_1b8 = &local_168;
    local_168 = 0;
    uVar2 = FUN_143db0d60(lVar4,&local_158,&local_159,local_d0);
    uVar6 = FUN_14088cdf8(lVar4);
    local_198 = (undefined2 *)0x0;
    puStack_190 = (undefined1 *)0x0;
    local_1a8 = local_168;
    local_1b8 = (undefined8 *)&stack0x00000028;
    local_1b0 = uVar2;
    local_1a0 = local_d0;
    FUN_143db1a5b(param_2,lVar5,uVar6,&local_158);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (lStack_e0 != 0) {
    FUN_1400020a8();
  }
LAB_143db3580:
  if ((local_40 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143db36e2 FUN_143db36e2 body=43 status=ok
// SIG undefined FUN_143db36e2(void)

void FUN_143db36e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  FUN_140485912(param_3);
  if (*param_6 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143db370d FUN_143db370d body=41 status=ok
// SIG undefined FUN_143db370d(void)

void FUN_143db370d(void)

{
  DAT_14cb84478 = 0;
  if (DAT_14cb84470 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66efc();
  return;
}



// FUNCTION 143db373b FUN_143db373b body=41 status=ok
// SIG undefined FUN_143db373b(void)

void FUN_143db373b(void)

{
  DAT_14cb84570 = 0;
  if (DAT_14cb84568 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66f9a();
  return;
}



// FUNCTION 143db376a FUN_143db376a body=655 status=ok
// SIG undefined FUN_143db376a(void)

void FUN_143db376a(longlong param_1,longlong *param_2,undefined8 ****param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 **local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70[0] = param_3;
  iVar9 = FUN_1406fc600((longlong *)(param_1 + 0x30),
                        (uint)((ulonglong)param_3 >> 0x20) ^ (uint)param_3,local_70);
  if (iVar9 != -1) {
    lVar14 = *(longlong *)(param_1 + 0x30);
    if ((lVar14 + (longlong)iVar9 * 0x260 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar14 = lVar14 + (longlong)iVar9 * 0x260;
      lVar13 = *(longlong *)(lVar14 + 0x228);
      if (*param_2 == lVar13) {
        puVar12 = (undefined4 *)(lVar13 + 0x4f8);
        if (*(undefined4 **)(lVar13 + 0x878) != (undefined4 *)0x0) {
          puVar12 = *(undefined4 **)(lVar13 + 0x878);
        }
        if ((longlong)*(int *)(lVar13 + 0x880) != 0) {
          lVar13 = (longlong)*(int *)(lVar13 + 0x880) * 0x38;
          do {
            if ((*(byte *)(puVar12 + 0xd) & 1) != 0) goto LAB_143db3972;
            bVar4 = *(byte *)(puVar12 + 8);
            if ((undefined1 *)(ulonglong)bVar4 == &DAT_00000004) {
LAB_143db3921:
              local_78 = *(undefined8 ***)(puVar12 + 4);
              local_88 = *puVar12;
              uStack_84 = puVar12[1];
              uStack_80 = puVar12[2];
              uStack_7c = puVar12[3];
LAB_143db3932:
              iVar9 = *(int *)(lVar14 + 0x240);
              *(uint *)(lVar14 + 0x240) = iVar9 + 1U;
              if (*(uint *)(lVar14 + 0x244) < iVar9 + 1U) {
                FUN_1403e3958((longlong *)(lVar14 + 0x238),iVar9);
              }
              lVar6 = *(longlong *)(lVar14 + 0x238);
              *(undefined8 ***)(lVar6 + 0x10 + (longlong)iVar9 * 0x18) = local_78;
              puVar3 = (undefined4 *)(lVar6 + (longlong)iVar9 * 0x18);
              *puVar3 = local_88;
              puVar3[1] = uStack_84;
              puVar3[2] = uStack_80;
              puVar3[3] = uStack_7c;
            }
            else {
              uVar11 = (uint)bVar4 * 0x120;
              if (*(code **)(&DAT_14c9a8560 + uVar11) != (code *)0x0) {
                cVar8 = (**(code **)(&DAT_14c9a8560 + uVar11))(4);
                if (cVar8 == '\0') goto LAB_143db3872;
LAB_143db38ac:
                if (*(char *)(puVar12 + 8) == '\x04') goto LAB_143db3921;
                FUN_1400b56fe(local_70,puVar12,4);
                ppppuVar10 = local_70;
                if (local_50 == 0) {
                  ppppuVar10 = (undefined8 ****)&DAT_14c9ab228;
                }
                local_78 = ppppuVar10[2];
                local_88 = *(undefined4 *)ppppuVar10;
                uStack_84 = *(undefined4 *)((longlong)ppppuVar10 + 4);
                uStack_80 = *(undefined4 *)(ppppuVar10 + 1);
                uStack_7c = *(undefined4 *)((longlong)ppppuVar10 + 0xc);
                pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
                if (pcVar5 != (code *)0x0) {
                  ppppuVar10 = local_70;
                  if (0x18 < local_58) {
                    ppppuVar10 = (undefined8 ****)local_70[0];
                  }
                  (*pcVar5)(ppppuVar10);
                }
                if (0x18 < local_58) {
                  FUN_1400020a8(local_70[0]);
                }
                goto LAB_143db3932;
              }
LAB_143db3872:
              if ((DAT_14c9a89e8 != (code *)0x0) &&
                 (cVar8 = (*DAT_14c9a89e8)((undefined1 *)(ulonglong)bVar4), cVar8 != '\0'))
              goto LAB_143db38ac;
              if ((((&DAT_14c9a8514)[uVar11] & 0x20) != 0) && ((DAT_14c9a8994 & 0x20) == 0)) {
                if (*(code **)(&DAT_14c9a8588 + uVar11) != (code *)0x0) {
                  cVar8 = (**(code **)(&DAT_14c9a8588 + uVar11))(4);
                  if (cVar8 == '\0') goto LAB_143db3972;
                }
                goto LAB_143db38ac;
              }
            }
LAB_143db3972:
            puVar12 = puVar12 + 0xe;
            lVar13 = lVar13 + -0x38;
          } while (lVar13 != 0);
        }
        *(undefined1 *)(lVar14 + 0x248) = 0;
        *(undefined8 *)(lVar14 + 0x228) = 0;
        plVar7 = *(longlong **)(lVar14 + 0x230);
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(lVar14 + 0x230) = 0;
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar7)(plVar7);
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143db39fa FUN_143db39fa body=1627 status=ok
// SIG undefined FUN_143db39fa(void)

void FUN_143db39fa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar11 = (**(code **)(*param_1 + 0x48))();
  if (((lVar11 != 0) &&
      ((((*(longlong *)(lVar11 + 0x30) == 0 ||
         (lVar16 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x2b0), lVar16 == 0)) ||
        (*(longlong *)(lVar16 + 0x588) == 0)) ||
       (*(double *)(lVar11 + 0x6d0) < *(double *)(lVar11 + 0x708))))) &&
     (((*(byte *)(lVar11 + 0x154) & 0x40) == 0 || (iVar10 = FUN_14490d72a(lVar11), iVar10 != 3)))) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar16 = 0;
      do {
        lVar20 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar16);
        if (*(longlong *)(lVar20 + 0x360) == lVar11) {
          if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x278) & 1) != 0)) goto LAB_143db3abe;
          break;
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar16);
    }
    bVar8 = FUN_144a80e00(lVar11);
    if ((((*(byte *)(lVar11 + 0x155) & 4) == 0 & (~bVar8 | -1 < (char)*(byte *)(lVar11 + 0x155))) ==
         1) && (iVar10 = FUN_14490d72a(lVar11), iVar10 != 3)) {
      dVar4 = *(double *)(lVar11 + 0x6d0);
      local_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      uVar18 = (int)param_1[3] - *(int *)((longlong)param_1 + 0x44);
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if (uVar18 != 0) {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar18);
        }
        FUN_140374d2c(&local_b8,uVar18);
        iVar10 = 1;
        if (3 < uVar18) {
          uVar18 = (uVar18 | 1) + 0xe;
          iVar10 = 0x1f;
          if (uVar18 != 0) {
            for (; uVar18 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          iVar10 = 1 << ((byte)iVar10 & 0x1f);
        }
        if ((local_70 == 0) || (local_70 < iVar10)) {
          local_70 = iVar10;
          FUN_14037622e();
        }
      }
      iVar10 = (int)param_1[3] - *(int *)((longlong)param_1 + 0x44);
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if ((int)uStack_d0._4_4_ < iVar10) {
        FUN_140373bdc();
      }
      plVar1 = param_1 + 2;
      local_e8 = (uint *)(param_1 + 4);
      iVar10 = (int)param_1[7];
      if (iVar10 == 0) {
        uVar19 = 1;
        uVar22 = 0;
        iVar12 = 0;
        iVar17 = 0;
      }
      else {
        puVar15 = (uint *)param_1[6];
        if ((uint *)param_1[6] == (uint *)0x0) {
          puVar15 = local_e8;
        }
        uVar18 = *puVar15;
        if (uVar18 == 0) {
          iVar12 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar12 = iVar10 + -1;
          }
          uVar22 = 0;
          uVar19 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar19 = uVar22;
          }
          iVar17 = 0;
          do {
            if (uVar19 == uVar22) goto LAB_143db3da8;
            iVar17 = iVar17 + 0x20;
            uVar18 = puVar15[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar22 = 0;
          iVar17 = 0;
        }
        uVar19 = (ulonglong)(-uVar18 & uVar18);
        uVar3 = uVar19 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar12 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar12) {
          iVar12 = iVar10;
        }
      }
      if (iVar12 < iVar10) {
        local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,0xffffffff);
        do {
          lVar11 = (longlong)iVar12 * 0x260;
          local_c0 = *(undefined8 *)(*plVar1 + lVar11);
          iVar10 = FUN_1403682a2(&local_b8,(uint)((ulonglong)local_c0 >> 0x20) ^ (uint)local_c0,
                                 &local_c0);
          uVar3 = uStack_d0;
          if (iVar10 == -1) {
            lVar16 = *plVar1;
            lVar20 = (longlong)(int)uStack_d0;
            uVar18 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar18);
            if (uStack_d0._4_4_ < uVar18) {
              FUN_140155462(&local_d8,uVar3 & 0xffffffff);
            }
            local_d8[lVar20] = *(undefined8 *)(lVar16 + lVar11);
            FUN_140367fe4(&local_b8,&local_c0,lVar11 + *plVar1,0);
          }
          uVar18 = (uint)local_e0 & ~(uint)uVar19;
          puVar15 = (uint *)param_1[6];
          if ((uint *)param_1[6] == (uint *)0x0) {
            puVar15 = local_e8;
          }
          iVar10 = (int)param_1[7];
          iVar12 = (int)uVar22;
          lVar11 = (longlong)iVar12;
          local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,uVar18);
          uVar18 = puVar15[lVar11] & uVar18;
          if (uVar18 == 0) {
            iVar13 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar13 = iVar10 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar14 = iVar13;
            if (iVar13 < iVar12) {
              iVar14 = iVar12;
            }
            if (iVar13 <= iVar12) break;
            lVar16 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar18 = puVar15[lVar11 + lVar16 + 1];
              if (uVar18 != 0) break;
              lVar16 = lVar16 + 1;
              if (iVar14 - lVar11 == lVar16) goto LAB_143db3da8;
            }
            uVar22 = (ulonglong)(iVar12 + (int)lVar16 + 1);
            local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,0xffffffff);
          }
          uVar19 = (ulonglong)(-uVar18 & uVar18);
          uVar3 = uVar19 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar12 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        } while (iVar12 < iVar10);
      }
LAB_143db3da8:
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + -4;
      FUN_140367f32(&local_b8);
      if ((longlong)(int)uStack_d0 != 0) {
        local_e0 = local_d8 + (int)uStack_d0;
        uVar19 = 0;
        puVar21 = local_d8;
        do {
          uVar5 = *puVar21;
          local_b8 = uVar5;
          iVar10 = FUN_1406fc600(plVar1,(uint)((ulonglong)uVar5 >> 0x20) ^ (uint)uVar5,&local_b8);
          if (iVar10 == -1) {
LAB_143db3e3a:
            FUN_140cfe13c(plVar1,uVar5);
          }
          else {
            lVar16 = (longlong)iVar10 * 0x260 + *plVar1;
            lVar11 = lVar16 + 0x10;
            if (lVar11 == 0 || lVar16 == 0) goto LAB_143db3e3a;
            if (*(char *)(lVar16 + 0x248) == '\0') {
              local_e8 = (uint *)CONCAT44(local_e8._4_4_,
                                          (int)CONCAT71((int7)(int3)((uint)iVar10 >> 8),1));
              if ((uVar19 & 1) == 0) {
                if ((*(int *)(lVar16 + 0x1ac) < 0) ||
                   (*(int *)(lVar16 + 0x30) <= *(int *)(lVar16 + 0x1ac))) {
                  local_e8 = (uint *)((ulonglong)local_e8._4_4_ << 0x20);
                }
                else {
                  cVar9 = FUN_1411f37f8(param_1,lVar11);
                  if (cVar9 == '\0') {
                    uVar19 = 1;
                    if ((*(int *)(lVar16 + 0x220) != 0) &&
                       (*(longlong **)(lVar16 + 0x218) != (longlong *)0x0)) {
                      (**(code **)(**(longlong **)(lVar16 + 0x218) + 0x60))();
                    }
                    goto LAB_143db3e3a;
                  }
                }
              }
              if (*(char *)(lVar16 + 0x160) == '\x01') {
                uVar18 = *(uint *)(lVar16 + 0x20);
LAB_143db3f5b:
                if (0 < (int)uVar18) {
                  plVar2 = (longlong *)(lVar16 + 0x18);
                  lVar11 = (ulonglong)uVar18 * 0x28 + -0x10;
                  uVar19 = (ulonglong)uVar18;
                  do {
                    if (*(int *)(*plVar2 + lVar11) == 0) {
                      FUN_141897bae(plVar2,(int)uVar19 + -1);
                      FUN_141897c1a(plVar2);
                      if (((*(int *)(lVar16 + 0x1ac) < 0) ||
                          (*(int *)(lVar16 + 0x30) <= *(int *)(lVar16 + 0x1ac))) &&
                         (*(int *)(lVar16 + 0x20) == 0)) {
                        if ((*(int *)(lVar16 + 0x220) != 0) &&
                           (*(longlong **)(lVar16 + 0x218) != (longlong *)0x0)) {
                          (**(code **)(**(longlong **)(lVar16 + 0x218) + 0x60))();
                        }
                        FUN_140cfe13c(plVar1,uVar5);
                      }
                    }
                    lVar11 = lVar11 + -0x28;
                    bVar6 = 1 < uVar19;
                    uVar19 = uVar19 - 1;
                  } while (bVar6);
                }
              }
              else {
                uVar18 = *(uint *)(lVar16 + 0x20);
                if (0 < (int)uVar18) {
                  uVar19 = 0;
                  do {
                    lVar20 = *(longlong *)(lVar16 + 0x18);
                    dVar7 = (double)*(float *)(lVar20 + 4 + uVar19 * 0x28);
                    if ((((dVar7 <= dVar4) && (*(int *)(lVar20 + uVar19 * 0x28 + 0x18) != 0)) &&
                        (iVar10 = *(int *)(lVar16 + 400), 0 < iVar10)) && (dVar7 <= dVar4)) {
                      do {
                        if (((*(int *)(lVar20 + 0x18 + uVar19 * 0x28) == 0) || (iVar10 < 1)) ||
                           (cVar9 = FUN_140cfe342(param_1,lVar11,uVar19 & 0xffffffff), cVar9 == '\0'
                           )) break;
                        iVar10 = *(int *)(lVar16 + 400) + -1;
                        *(int *)(lVar16 + 400) = iVar10;
                        lVar20 = *(longlong *)(lVar16 + 0x18);
                      } while ((double)*(float *)(lVar20 + 4 + uVar19 * 0x28) <= dVar4);
                      uVar18 = *(uint *)(lVar16 + 0x20);
                    }
                    uVar19 = uVar19 + 1;
                  } while ((longlong)uVar19 < (longlong)(int)uVar18);
                  goto LAB_143db3f5b;
                }
              }
              uVar19 = (ulonglong)local_e8 & 0xffffffff;
            }
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != local_e0);
      }
      FUN_1406fc6c4(param_1);
      if (local_d8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143db3abe:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db40ba FUN_143db40ba body=3037 status=ok
// SIG undefined FUN_143db40ba(void)

void FUN_143db40ba(longlong param_1)

{
  ulonglong uVar1;
  void *_Src;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  longlong lVar21;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong *local_360;
  uint local_354;
  longlong *local_350;
  longlong *local_348;
  int local_33c;
  ulonglong local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  ulonglong local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0 [24];
  longlong local_2d8;
  ulonglong uStack_2d0;
  undefined8 *local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  ulonglong uStack_2b0;
  undefined4 *local_2a0;
  undefined8 *local_298;
  int local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  ulonglong uStack_240;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  int local_c0;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < *(int *)(param_1 + 0x410)) {
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_368 = param_1;
    FUN_1403de9f2(param_1 + 0x408,&local_2b8,&DAT_149e06196,1);
    local_2c8 = (undefined8 *)0x0;
    uStack_2c0 = 0;
    if ((int)uStack_2b0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_2b0 & 0xffffffff);
    }
    if ((uStack_2b0 & 0xffffffff) != 0) {
      FUN_1402191ca(&local_2c8);
      lVar14 = local_2b8;
      lVar13 = (longlong)(int)uStack_2b0;
      if (lVar13 != 0) {
        lVar12 = 0;
        do {
          local_288._0_4_ = 0;
          local_288._4_4_ = 0;
          uStack_280._0_4_ = *(int *)(lVar14 + 8 + lVar12);
          lVar21 = (longlong)(int)uStack_280;
          _Src = *(void **)(lVar14 + lVar12);
          if (lVar21 == 0) {
            uStack_280._4_4_ = 0;
LAB_143db41e5:
            puVar10 = &DAT_149dfb77a;
          }
          else {
            FUN_1446dd670(&local_288,(int)uStack_280,0);
            memcpy((void *)CONCAT44(local_288._4_4_,(undefined4)local_288),_Src,lVar21 * 2);
            if ((int)uStack_280 == 0) goto LAB_143db41e5;
            puVar10 = (undefined2 *)CONCAT44(local_288._4_4_,(undefined4)local_288);
          }
          FUN_1446f470e(local_b8,puVar10);
          uVar18 = uStack_2c0;
          lVar21 = (longlong)(int)(uint)uStack_2c0;
          uVar2 = (uint)uStack_2c0 + 1;
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar2);
          if (uStack_2c0._4_4_ < uVar2) {
            FUN_1446f84a2(&local_2c8,uVar18 & 0xffffffff);
          }
          local_2c8[lVar21] = local_b8[0];
          if (CONCAT44(local_288._4_4_,(undefined4)local_288) != 0) {
            FUN_1400020a8();
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar13 * 0x10 != lVar12);
      }
    }
    (**(code **)(*DAT_14c9485b8 + 0x270))();
    lVar14 = local_368;
    local_2d8 = 0;
    uStack_2d0 = 0;
    FUN_141305782(local_368);
    LOCK();
    *(undefined1 *)(lVar14 + 0x155) = 1;
    UNLOCK();
    local_348 = (longlong *)(lVar14 + 0x340);
    uVar2 = (uint)uStack_2c0;
    uVar18 = (ulonglong)(int)(uint)uStack_2c0;
    if ((uint)(*(int *)(lVar14 + 0x348) - *(int *)(lVar14 + 0x374)) < (uint)uStack_2c0) {
      if ((int)(uint)uStack_2c0 < 0) goto LAB_143db4c79;
      FUN_146554dac(local_348,uStack_2c0 & 0xffffffff);
      iVar3 = 1;
      if (3 < uVar2) {
        uVar2 = (uVar2 | 1) + 0xe;
        iVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = 1 << ((byte)iVar3 & 0x1f);
      }
      if ((*(int *)(local_368 + 0x388) == 0) || (*(int *)(local_368 + 0x388) < iVar3)) {
        *(int *)(local_368 + 0x388) = iVar3;
        FUN_146554f5c(local_348);
      }
    }
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_108[0] = 0;
    local_108[1] = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    uVar18 = (longlong)(int)(uint)uStack_2c0 * (longlong)(int)(uint)uStack_2d0;
    uVar2 = (uint)uVar18;
    if (uVar2 != 0) {
      if ((int)uVar2 < 0) {
LAB_143db4c79:
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar18);
      }
      FUN_140395be6(local_108,uVar18 & 0xffffffff);
      iVar3 = 1;
      if (3 < uVar2) {
        uVar2 = (uVar2 | 1) + 0xe;
        iVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = 1 << ((byte)iVar3 & 0x1f);
      }
      if ((local_c0 == 0) || (local_c0 < iVar3)) {
        local_c0 = iVar3;
        FUN_14039602e();
      }
    }
    iVar3 = (uint)uStack_2c0 * (uint)uStack_2d0;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    local_350 = (longlong *)(local_368 + 0x158);
    if (*(int *)(local_368 + 0x164) < iVar3) {
      FUN_140395806(local_350);
    }
    FUN_140741ce4(local_2f0,10);
    if ((longlong)(int)(uint)uStack_2c0 != 0) {
      local_330 = local_2c8 + (int)(uint)uStack_2c0;
      puVar17 = local_2c8;
      do {
        local_2f8 = *puVar17;
        local_328 = puVar17;
        FUN_146127d96(local_b8,uStack_2d0 & 0xffffffff);
        lVar14 = local_2d8;
        lVar13 = (longlong)(int)(uint)uStack_2d0;
        if (lVar13 != 0) {
          lVar12 = 0;
          do {
            uVar7 = local_2f8;
            plVar15 = *(longlong **)(lVar14 + lVar12);
            puVar20 = (undefined4 *)plVar15[1];
            if (puVar20 == (undefined4 *)0x0) {
              puVar20 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar21 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar21);
              DAT_14c947fe0 = lVar21;
            }
            FUN_140045924(DAT_14c947fe0,&local_318,puVar20,1);
            local_288._0_4_ = 0x4a177c6a;
            local_288._4_4_ = 1;
            uStack_280._0_4_ = 8;
            uStack_280._4_4_ = uStack_280._4_4_ & 0xffffff00;
            uVar2 = FUN_14001a6c0(&local_288,1);
            local_310 = (undefined8 *)(ulonglong)uVar2;
            local_308 = local_318;
            local_300 = uVar7;
            FUN_14050fa82(&local_288,&local_310,0);
            local_2a0 = (undefined4 *)plVar15[1];
            if (local_2a0 == (undefined4 *)0x0) {
              local_2a0 = &DAT_14c9485f0;
            }
            local_298 = &local_288;
            FUN_1401b2bf4(local_b8,&local_28c,&local_2a0,0);
            lVar21 = local_b8[0] + (longlong)local_28c * 0x1a8 + 0x28;
            FUN_1401a53d4(&local_288);
            FUN_14050f264(lVar21,*(undefined8 *)(local_368 + 0x148));
            local_288._0_4_ = 6;
            local_288._4_4_ = (undefined4)local_2f8;
            uStack_280._0_4_ = (int)((ulonglong)local_2f8 >> 0x20);
            local_278 = 0;
            uStack_270 = 0;
            uVar7 = (**(code **)(*plVar15 + 8))(plVar15);
            FUN_14045bbc6(lVar21,plVar15,uVar7,&local_288);
            FUN_143dae8d2(local_278,uStack_270 & 0xffffffff);
            if (local_278 != 0) {
              FUN_1400020a8();
            }
            FUN_1403af10e(lVar21);
            lVar12 = lVar12 + 8;
          } while (lVar13 * 8 != lVar12);
        }
        plVar15 = local_348;
        local_268 = 0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_288._0_4_ = 0;
        local_288._4_4_ = 0;
        uStack_280._0_4_ = 0;
        uStack_280._4_4_ = 0;
        uStack_260 = 0x8000000000;
        local_258 = 0xffffffff;
        local_310 = &local_2f8;
        local_308 = &local_288;
        FUN_145c42950(local_348,&local_2a0,&local_310);
        lVar13 = (longlong)(int)local_2a0;
        lVar14 = *plVar15;
        uStack_240 = uStack_240 & 0xffffffff00000000;
        if (local_248 != 0) {
          FUN_1400020a8();
        }
        lVar14 = lVar14 + lVar13 * 0x60;
        plVar15 = (longlong *)(lVar14 + 8);
        FUN_140bd50c4(&local_288);
        uVar2 = (uint)uStack_2d0;
        local_360 = plVar15;
        if ((uint)(*(int *)(lVar14 + 0x10) - *(int *)(lVar14 + 0x3c)) < (uint)uStack_2d0) {
          if ((int)(uint)uStack_2d0 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)(uint)uStack_2d0);
          }
          FUN_140395a1c(plVar15,uStack_2d0 & 0xffffffff);
          iVar3 = 1;
          if (3 < uVar2) {
            uVar2 = (uVar2 | 1) + 0xe;
            iVar3 = 0x1f;
            if (uVar2 != 0) {
              for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
              }
            }
            iVar3 = 1 << ((byte)iVar3 & 0x1f);
          }
          if (((int)local_360[9] == 0) || ((int)local_360[9] < iVar3)) {
            *(int *)(local_360 + 9) = iVar3;
            FUN_140395db0();
          }
        }
        uVar18 = (ulonglong)local_90;
        if (local_90 == 0) {
          uVar19 = 1;
          uVar16 = 0;
          iVar3 = 0;
          uVar2 = 0;
        }
        else {
          puVar6 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar6 = local_a8;
          }
          uVar2 = *puVar6;
          if (uVar2 == 0) {
            iVar3 = local_90 + 0x1e;
            if (-1 < (int)(local_90 - 1)) {
              iVar3 = local_90 - 1;
            }
            uVar16 = 0;
            uVar19 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar19 = uVar16;
            }
            iVar3 = 0;
            do {
              local_288 = (undefined8 **)CONCAT44(local_288._4_4_,(undefined4)local_288);
              if (uVar19 == uVar16) goto LAB_143db47c0;
              iVar3 = iVar3 + 0x20;
              uVar2 = puVar6[uVar16 + 1];
              uVar16 = uVar16 + 1;
            } while (uVar2 == 0);
          }
          else {
            uVar16 = 0;
            iVar3 = 0;
          }
          uVar19 = (ulonglong)(-uVar2 & uVar2);
          uVar1 = uVar19 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar2 = (iVar3 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)local_90 <= (int)uVar2) {
            uVar2 = local_90;
          }
        }
        local_288 = (undefined8 **)CONCAT44(local_288._4_4_,(undefined4)local_288);
        if (uVar2 != local_90) {
          uVar11 = 0xffffffff;
          local_320 = uVar18;
          do {
            lVar13 = (longlong)(int)uVar2 * 0x1a8;
            lVar14 = local_b8[0] + lVar13;
            local_354 = uVar11;
            if (*(int *)(local_b8[0] + 0x88 + lVar13) < 1) {
              local_2a0 = (undefined4 *)CONCAT62(local_2a0._2_6_,0xffff);
              uStack_280 = &local_2a0;
              local_288 = (undefined8 **)lVar14;
              FUN_140394d20(local_360,&local_310,&local_288,0);
              uVar11 = local_354;
            }
            else {
              puVar17 = (undefined8 *)(local_b8[0] + lVar13 + 0x28);
              local_338 = uVar16;
              local_288 = (undefined8 **)puVar17;
              uVar4 = FUN_144972764(&local_288);
              iVar5 = FUN_140394cb2(local_108,uVar4,&local_288);
              plVar15 = local_360;
              lVar13 = local_368;
              lVar12 = (longlong)iVar5 * 0x18 + local_108[0];
              if (lVar12 == 0 || iVar5 == -1) {
                local_28c = CONCAT22(local_28c._2_2_,*(undefined2 *)(local_368 + 0x160));
                uStack_280 = (undefined4 **)&local_28c;
                local_33c = iVar3;
                local_288 = (undefined8 **)lVar14;
                FUN_140394d20(local_360,&local_310,&local_288,0);
                uStack_280 = (undefined4 **)((longlong)(int)local_310 * 0x38 + *plVar15 + 0x28);
                local_310 = puVar17;
                local_288 = &local_310;
                FUN_14039545c(local_108,&local_2a0,&local_288,0);
                FUN_1401b2fd2(&local_288);
                iVar3 = *(int *)(lVar13 + 0x160);
                uVar2 = iVar3 + 1;
                *(uint *)(lVar13 + 0x160) = uVar2;
                lVar14 = (longlong)uStack_280;
                if (*(uint *)(lVar13 + 0x164) < uVar2) {
                  FUN_14709f260(local_350);
                  lVar14 = (longlong)uStack_280;
                }
                uStack_280._4_4_ = (uint)((ulonglong)lVar14 >> 0x20);
                uStack_280._0_4_ = (int)lVar14;
                lVar14 = *local_350;
                lVar13 = (longlong)iVar3 * 0x10;
                *(undefined8 *)(lVar14 + lVar13) = 0;
                *(undefined8 ***)(lVar14 + lVar13) = local_288;
                local_288._0_4_ = 0;
                local_288._4_4_ = 0;
                *(int *)(lVar14 + 8 + lVar13) = (int)uStack_280;
                *(uint *)(lVar14 + 0xc + lVar13) = uStack_280._4_4_;
                uStack_280._0_4_ = 0;
                uStack_280._4_4_ = 0;
                FUN_1401a56c2(0,0);
                uVar16 = local_338;
                iVar3 = local_33c;
                uVar11 = local_354;
                if (CONCAT44(local_288._4_4_,(undefined4)local_288) != 0) {
                  FUN_1400020a8();
                }
                uVar18 = local_320;
              }
              else {
                uStack_280 = (undefined4 **)(lVar12 + 8);
                local_288 = (undefined8 **)lVar14;
                FUN_14039531e(local_360,&local_310,&local_288,0);
                uVar16 = local_338;
                uVar11 = local_354;
              }
            }
            uVar11 = uVar11 & ~(uint)uVar19;
            puVar6 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar6 = local_a8;
            }
            iVar5 = (int)uVar16;
            lVar14 = (longlong)iVar5;
            uVar2 = puVar6[lVar14] & uVar11;
            if (uVar2 == 0) {
              iVar8 = local_90 + 0x1e;
              if (-1 < (int)(local_90 - 1)) {
                iVar8 = local_90 - 1;
              }
              iVar8 = iVar8 >> 5;
              iVar3 = iVar3 + 0x20;
              iVar9 = iVar8;
              if (iVar8 < iVar5) {
                iVar9 = iVar5;
              }
              if (iVar5 < iVar8) {
                lVar13 = 0;
                do {
                  uVar2 = (puVar6 + lVar14 + 1)[lVar13];
                  if (uVar2 != 0) {
                    uVar16 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                    uVar11 = 0xffffffff;
                    goto LAB_143db4aad;
                  }
                  iVar3 = iVar3 + 0x20;
                  lVar13 = lVar13 + 1;
                } while (iVar9 - lVar14 != lVar13);
                uVar11 = 0xffffffff;
                iVar5 = iVar9;
              }
              uVar16 = (ulonglong)(iVar5 + 1);
              uVar2 = local_90;
            }
            else {
LAB_143db4aad:
              uVar19 = (ulonglong)(-uVar2 & uVar2);
              uVar1 = uVar19 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar2 = (iVar3 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              if ((int)local_90 <= (int)uVar2) {
                uVar2 = local_90;
              }
            }
          } while (uVar2 != (uint)uVar18);
        }
LAB_143db47c0:
        plVar15 = local_360;
        FUN_1403958e8(local_360);
        FUN_14039572e(plVar15,(int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34),1);
        puVar17 = local_328 + 1;
      } while (puVar17 != local_330);
    }
    if (*(int *)(local_368 + 0x164) != *(int *)(local_368 + 0x160)) {
      FUN_140395806(local_350);
    }
    LOCK();
    *(undefined1 *)(local_368 + 0x155) = 0;
    UNLOCK();
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1403956f6(local_108);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401a5186(local_b8);
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (local_2c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_2b8,uStack_2b0 & 0xffffffff);
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db4dce FUN_143db4dce body=8 status=ok
// SIG undefined FUN_143db4dce(void)

undefined8 FUN_143db4dce(void)

{
  return DAT_14cb84940;
}



// FUNCTION 143db4f2c FUN_143db4f2c body=228 status=ok
// SIG undefined FUN_143db4f2c(void)

longlong FUN_143db4f2c(void)

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
  if (DAT_14cb6a468 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940a0a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c10;
    local_38 = &LAB_14876160d;
    local_40 = &LAB_140e30382;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9c0;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db5012 FUN_143db5012 body=1332 status=ok
// SIG undefined FUN_143db5012(void)

void FUN_143db5012(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint **ppuVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  longlong lVar22;
  uint *puVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_398 [32];
  uint *local_378;
  undefined8 uStack_370;
  uint *local_368;
  uint *local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (0 < *(int *)(param_1 + 0x210)) {
    local_378 = (uint *)0x0;
    uStack_370 = 0;
    FUN_141837fac(&local_378);
    iVar13 = *(int *)(param_1 + 0x210);
    uVar19 = iVar13 - 1U;
    if (*(uint *)(param_1 + 0x218) < iVar13 - 1U) {
      uVar19 = *(uint *)(param_1 + 0x218);
    }
    uVar9 = (ulonglong)uVar19;
    *(uint *)(param_1 + 0x218) = uVar19;
    uVar19 = 0;
    bVar24 = true;
    bVar25 = false;
    do {
      while( true ) {
        uVar14 = uStack_370;
        uVar8 = (uint)uVar9;
        if ((bVar25) && (uVar8 == *(uint *)(param_1 + 0x218))) goto LAB_143db517c;
        lVar22 = *(longlong *)(param_1 + 0x208);
        if (*(longlong *)(param_1 + 0x208) == 0) {
          lVar22 = param_1 + 8;
        }
        iVar13 = *(int *)(lVar22 + 4 + (longlong)(int)uVar8 * 8);
        if (((((iVar13 != 0) &&
              (uVar2 = *(uint *)(lVar22 + (longlong)(int)uVar8 * 8), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) &&
            ((puVar6 = (undefined8 *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == iVar13)))) &&
           ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) break;
        lVar22 = (longlong)(int)uStack_370;
        uVar2 = (int)uStack_370 + 1;
        uStack_370 = CONCAT44(uStack_370._4_4_,uVar2);
        if (uStack_370._4_4_ < uVar2) {
          FUN_141838130(&local_378,uVar14 & 0xffffffff);
        }
        local_378[lVar22] = uVar8;
        iVar13 = *(int *)(param_1 + 0x210);
        uVar14 = (longlong)(int)(uVar8 + 1) % (longlong)iVar13;
        bVar25 = true;
        uVar9 = uVar14 & 0xffffffff;
        uVar8 = (uint)uVar14;
        if (!bVar24) goto LAB_143db517c;
      }
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar6;
      }
      else {
        uVar4 = 0;
      }
      FUN_140ef17c4(uVar4,param_2);
      iVar13 = *(int *)(param_1 + 0x210);
      uVar14 = (longlong)(int)(uVar8 + 1) % (longlong)iVar13;
      bVar24 = uVar19 < 10;
      uVar19 = uVar19 + 1;
      bVar25 = true;
      uVar9 = uVar14 & 0xffffffff;
      uVar8 = (uint)uVar14;
    } while (uVar19 != 0xb);
LAB_143db517c:
    puVar15 = local_378;
    *(uint *)(param_1 + 0x218) = uVar8;
    iVar3 = (int)uStack_370;
    lVar22 = (longlong)(int)uStack_370;
    if (0 < lVar22) {
      if ((int)uStack_370 == 1) {
        puVar15 = local_378 + 1;
        puVar7 = local_378;
      }
      else {
        memset(local_358,0,0x2f0);
        local_368 = puVar15;
        local_360 = puVar15 + lVar22 + -1;
        fVar26 = logf((float)iVar3);
        local_358[0] = (int)(longlong)(fVar26 + fVar26);
        ppuVar5 = &local_368;
        do {
          puVar7 = *ppuVar5;
          puVar10 = ppuVar5[1];
          iVar13 = *(int *)(ppuVar5 + 2);
          iVar3 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar7) >> 2);
          uVar19 = iVar3 + 1;
          puVar15 = puVar10;
          puVar23 = puVar7;
          if (iVar13 != 0) {
LAB_143db520f:
            puVar12 = puVar7;
            if (8 < (int)uVar19) {
              uVar8 = puVar12[uVar19 >> 1];
              puVar12[uVar19 >> 1] = *puVar12;
              *puVar12 = uVar8;
              puVar20 = puVar15 + 1;
              puVar7 = puVar12;
              do {
                puVar1 = puVar7 + 1;
                puVar16 = puVar7 + 1;
                do {
                  puVar7 = puVar16;
                  puVar21 = puVar1;
                  if (puVar15 < puVar7) break;
                  puVar1 = puVar21 + 1;
                  puVar16 = puVar7 + 1;
                } while (*puVar12 <= *puVar7);
                puVar1 = puVar20 + -2;
                do {
                  puVar16 = puVar20;
                  puVar11 = puVar1;
                  puVar20 = puVar16 + -1;
                  if (puVar20 <= puVar12) break;
                  puVar1 = puVar11 + -1;
                } while (*puVar20 <= *puVar12);
                if (puVar20 < puVar7) goto LAB_143db528d;
                uVar19 = *puVar7;
                *puVar7 = *puVar20;
                *puVar20 = uVar19;
              } while( true );
            }
            if (puVar12 < puVar15) {
              do {
                puVar7 = puVar12;
                if (puVar12 + 1 <= puVar15) {
                  uVar19 = *puVar12;
                  puVar10 = puVar12 + 1;
                  do {
                    if (*puVar10 < uVar19) {
                      puVar7 = puVar10;
                      uVar19 = *puVar10;
                    }
                    puVar10 = puVar10 + 1;
                  } while (puVar10 <= puVar15);
                }
                uVar19 = *puVar7;
                *puVar7 = *puVar15;
                *puVar15 = uVar19;
                puVar15 = puVar15 + -1;
              } while (puVar12 < puVar15);
            }
            goto LAB_143db548d;
          }
LAB_143db5320:
          if (uVar19 != 0) {
            iVar13 = (iVar3 - (iVar3 + -1 >> 0x1f)) + -1 >> 1;
            iVar3 = iVar13;
joined_r0x000143db5347:
            do {
              iVar18 = iVar13 * 2 + 1;
              if (iVar18 < (int)uVar19) {
                iVar17 = iVar13 * 2 + 2;
                if ((iVar17 < (int)uVar19) && (puVar7[iVar17] <= puVar7[iVar18])) {
                  iVar18 = iVar17;
                }
                uVar8 = puVar7[iVar13];
                if (puVar7[iVar18] < uVar8) {
                  puVar7[iVar13] = puVar7[iVar18];
                  puVar7[iVar18] = uVar8;
                  iVar13 = iVar18;
                  goto joined_r0x000143db5347;
                }
              }
              bVar25 = iVar3 != 0;
              iVar13 = iVar3 + -1;
              iVar3 = iVar13;
            } while (bVar25);
            if (1 < (int)uVar19) {
              uVar9 = (ulonglong)uVar19;
              uVar8 = *puVar7;
              *puVar7 = puVar7[uVar9 - 1];
              puVar7[uVar9 - 1] = uVar8;
              if (uVar19 != 2) {
                do {
                  uVar14 = uVar9 - 1;
                  iVar13 = 0;
                  iVar18 = 1;
                  iVar3 = 0;
                  do {
                    iVar13 = iVar13 + 2;
                    iVar17 = iVar18;
                    if (((longlong)iVar13 < (longlong)uVar14) && (puVar7[iVar13] <= puVar7[iVar18]))
                    {
                      iVar17 = iVar13;
                    }
                    uVar19 = puVar7[iVar3];
                    if (uVar19 <= puVar7[iVar17]) break;
                    puVar7[iVar3] = puVar7[iVar17];
                    puVar7[iVar17] = uVar19;
                    iVar13 = iVar17 * 2;
                    iVar18 = iVar17 * 2 + 1;
                    iVar3 = iVar17;
                  } while ((longlong)iVar18 < (longlong)uVar14);
                  uVar19 = *puVar7;
                  *puVar7 = puVar7[uVar9 - 2];
                  puVar7[uVar9 - 2] = uVar19;
                  uVar9 = uVar14;
                } while (2 < uVar14);
              }
            }
          }
LAB_143db548d:
          ppuVar5 = ppuVar5 + -3;
        } while (&local_368 <= ppuVar5);
        if ((longlong)(int)uStack_370 == 0) goto LAB_143db5511;
        puVar15 = local_378 + (int)uStack_370;
        iVar13 = *(int *)(param_1 + 0x210);
        puVar7 = local_378;
      }
      do {
        iVar3 = ~*puVar7 + iVar13;
        if (iVar3 != 0) {
          if (0 < iVar3) {
            iVar3 = 1;
          }
          lVar22 = *(longlong *)(param_1 + 0x208);
          if (*(longlong *)(param_1 + 0x208) == 0) {
            lVar22 = param_1 + 8;
          }
          memmove((void *)(lVar22 + (longlong)(int)*puVar7 * 8),
                  (void *)(lVar22 + (longlong)(iVar13 - iVar3) * 8),(longlong)iVar3 << 3);
          iVar13 = *(int *)(param_1 + 0x210);
        }
        iVar13 = iVar13 + -1;
        *(int *)(param_1 + 0x210) = iVar13;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar15);
    }
  }
LAB_143db5511:
  if ((local_60 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143db528d:
  uVar19 = *puVar12;
  *puVar12 = *puVar20;
  *puVar20 = uVar19;
  iVar13 = iVar13 + -1;
  puVar16 = puVar16 + -2;
  if ((longlong)puVar11 - (longlong)puVar23 < (longlong)puVar10 - (longlong)puVar21) {
    if (puVar7 < puVar15) {
      *ppuVar5 = puVar7;
      ppuVar5[1] = puVar15;
      *(int *)(ppuVar5 + 2) = iVar13;
      ppuVar5 = ppuVar5 + 3;
    }
    puVar7 = puVar12;
    puVar10 = puVar11;
    if (puVar20 <= puVar12 + 1) goto LAB_143db548d;
  }
  else {
    if (puVar12 + 1 < puVar20) {
      *ppuVar5 = puVar12;
      ppuVar5[1] = puVar16;
      *(int *)(ppuVar5 + 2) = iVar13;
      ppuVar5 = ppuVar5 + 3;
    }
    puVar12 = puVar21;
    puVar16 = puVar15;
    puVar10 = puVar15;
    if (puVar15 <= puVar7) goto LAB_143db548d;
  }
  iVar3 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar12) >> 2);
  uVar19 = iVar3 + 1;
  puVar15 = puVar16;
  puVar23 = puVar12;
  if (iVar13 == 0) goto LAB_143db5320;
  goto LAB_143db520f;
}



// FUNCTION 143db55a2 FUN_143db55a2 body=764 status=ok
// SIG undefined FUN_143db55a2(void)

undefined8 FUN_143db55a2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined2 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  longlong local_168;
  longlong local_160;
  int local_158;
  char local_150 [16];
  longlong *local_140;
  undefined4 local_128 [2];
  code *local_120 [2];
  longlong local_110;
  int local_108;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cb61cd0 == 0) {
      local_180 = local_120;
      local_120[0] = FUN_141030f22;
      local_170 = FUN_14081d0ea;
      local_178 = &LAB_1463b31ae;
      local_188 = &LAB_1486dca4f;
      local_190 = &LAB_1464f50a6;
      local_198 = &DAT_149e063b2;
      local_1a0 = 0;
      local_1a8 = 0x10000004;
      local_1b0 = 8;
      local_1b8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
        DAT_14cb61cd0 + 0x30)) {
      uVar4 = FUN_14007a696();
      plVar5 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar4);
      if (plVar5 != (longlong *)0x0) {
        uVar4 = FUN_14007a696();
        plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
        uVar4 = 0;
        if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
          uVar3 = FUN_14575ff7c((int)param_2[3],plVar2);
          FUN_14624fa72(param_1,&local_160,plVar2,uVar3);
          if ((longlong)local_158 == 0) {
            uVar4 = 0;
            local_158 = 0;
          }
          else {
            local_168 = (longlong)local_158 * 0x68 + local_160;
            uVar4 = 0;
            lVar8 = local_160;
            do {
              local_150[0] = '\0';
              local_128[0] = 0;
              FUN_1456bb102(local_150,plVar2);
              FUN_140368c94(lVar8,local_120,local_150,0);
              FUN_1448173f8(local_128);
              if ((local_150[0] == '\x03') && (local_140 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_140 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_140 + 0x10))();
                }
              }
              if (local_120[0] != (code *)0x0) {
                if ((longlong)local_108 != 0) {
                  lVar7 = 0;
                  do {
                    if (*(longlong *)(local_110 + lVar7) == 0) goto LAB_143db578c;
                    lVar7 = lVar7 + 8;
                  } while ((longlong)local_108 * 8 != lVar7);
                }
                FUN_140d8b20c(local_120,plVar6,param_2[2]);
                local_1b8 = 0;
                (**(code **)(*plVar6 + 0x30))
                          (plVar6,local_120,(uint)*(byte *)(param_1 + 0x89) << 6 | 8);
                uVar4 = 1;
              }
LAB_143db578c:
              FUN_140368b56(local_120);
              lVar8 = lVar8 + 0x68;
            } while (lVar8 != local_168);
          }
          FUN_14036924e(local_160,local_158);
          if (local_160 != 0) {
            FUN_1400020a8();
          }
        }
        goto LAB_143db5603;
      }
    }
  }
  uVar4 = 0;
LAB_143db5603:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143db58a0 FUN_143db58a0 body=873 status=ok
// SIG undefined FUN_143db58a0(void)

ulonglong FUN_143db58a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined2 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  undefined1 *local_198;
  code *local_190;
  longlong local_180;
  longlong local_178;
  int local_170;
  void *local_168;
  ulonglong uStack_160;
  longlong *local_158;
  undefined4 local_140 [2];
  code *local_138 [2];
  longlong local_128;
  int local_120;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_1a0 = local_138;
      local_138[0] = FUN_141030f22;
      local_190 = FUN_14081d0ea;
      local_198 = &LAB_1463b31ae;
      local_1a8 = &LAB_1486dca4f;
      local_1b0 = &LAB_1464f50a6;
      local_1b8 = &DAT_149e063b2;
      local_1c0 = 0;
      local_1c8 = 0x10000004;
      local_1d0 = 8;
      local_1d8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if (*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) {
      uVar10 = 0;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30) {
        uVar6 = FUN_14575ff7c((int)param_2[3],lVar4);
        FUN_14624fa72(param_1,&local_178,lVar4,uVar6);
        if ((longlong)local_170 == 0) {
          uVar10 = 0;
          local_170 = 0;
        }
        else {
          lVar9 = (longlong)local_170 * 0x68 + local_178;
          uVar10 = 0;
          lVar8 = local_178;
          local_180 = lVar9;
          do {
            local_168 = (void *)((ulonglong)local_168 & 0xffffffffffffff00);
            local_140[0] = 0;
            FUN_1456bb102(&local_168,lVar4);
            FUN_140368c94(lVar8,local_138,&local_168,0);
            FUN_1448173f8(local_140);
            if (((char)local_168 == '\x03') && (local_158 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_158 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_158 + 0x10))();
              }
            }
            if (local_138[0] != (code *)0x0) {
              if ((longlong)local_120 != 0) {
                lVar7 = 0;
                do {
                  if (*(longlong *)(local_128 + lVar7) == 0) goto LAB_143db5af3;
                  lVar7 = lVar7 + 8;
                } while ((longlong)local_120 * 8 != lVar7);
              }
              local_168 = (void *)0x0;
              uStack_160 = 0;
              cVar5 = FUN_140baf362(local_138,&local_168,0);
              if (cVar5 != '\0') {
                iVar3 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
                  FUN_1447a1bd6(param_3,iVar3);
                }
                _Src = local_168;
                lVar9 = *param_3;
                lVar11 = (longlong)iVar3 * 0x10;
                puVar2 = (undefined8 *)(lVar9 + lVar11);
                *(undefined8 *)(lVar9 + lVar11) = 0;
                lVar7 = (longlong)(int)uStack_160;
                *(int *)(lVar9 + 8 + lVar11) = (int)uStack_160;
                if (lVar7 == 0) {
                  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(puVar2,uStack_160 & 0xffffffff,0);
                  memcpy((void *)*puVar2,_Src,lVar7 * 2);
                }
                uVar10 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
                lVar9 = local_180;
              }
              if (local_168 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_143db5af3:
            FUN_140368b56(local_138);
            lVar8 = lVar8 + 0x68;
          } while (lVar8 != lVar9);
        }
        FUN_14036924e(local_178,local_170);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_143db5916;
    }
  }
  uVar10 = 0;
LAB_143db5916:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
}



// FUNCTION 143db5c0a FUN_143db5c0a body=687 status=ok
// SIG undefined FUN_143db5c0a(void)

undefined8 FUN_143db5c0a(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  longlong local_140;
  code *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cb61cd0 == 0) {
      local_160 = &local_138;
      local_138 = FUN_141030f22;
      local_150 = FUN_14081d0ea;
      local_158 = &LAB_1463b31ae;
      local_168 = &LAB_1486dca4f;
      local_170 = &LAB_1464f50a6;
      local_178 = &DAT_149e063b2;
      local_180 = 0;
      local_188 = 0x10000004;
      local_190 = 8;
      local_198 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
        DAT_14cb61cd0 + 0x30)) {
      uVar2 = FUN_14007a696();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_14007a696();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if (plVar3 != plVar4) {
          uVar2 = 0;
          if ((param_3 == (longlong *)0x0) || (local_140 = param_1, plVar4 == (longlong *)0x0))
          goto LAB_143db5c75;
          if ((longlong)(int)param_3[1] != 0) {
            lVar5 = *param_3;
            lVar6 = (longlong)(int)param_3[1] << 4;
            uVar2 = 0;
            do {
              local_d8 = 0;
              local_d0 = 0;
              local_138 = (code *)0x0;
              uStack_130 = 0;
              local_128 = 0;
              uStack_120 = 0;
              local_118 = 0;
              uStack_110 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_cc = 0xffffffff00000080;
              local_c4 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_88 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_80 = 0xf;
              local_78 = 1;
              local_74 = 0;
              uStack_6c = 0;
              cVar1 = FUN_14088c870(&local_138,lVar5);
              if (cVar1 != '\0') {
                FUN_140d8b20c(&local_138,plVar4,param_2[2]);
                local_198 = 0;
                (**(code **)(*plVar4 + 0x30))
                          (plVar4,&local_138,(uint)*(byte *)(local_140 + 0x89) << 6 | 8,0xffffffff);
                uVar2 = 1;
              }
              FUN_140368b56(&local_138);
              lVar5 = lVar5 + 0x10;
              lVar6 = lVar6 + -0x10;
            } while (lVar6 != 0);
            goto LAB_143db5c75;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_143db5c75:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143db5eba FUN_143db5eba body=572 status=ok
// SIG undefined FUN_143db5eba(void)

undefined4 FUN_143db5eba(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  code *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cb61cd0 == 0) {
      local_120 = &local_108;
      local_108 = FUN_141030f22;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_1463b31ae;
      local_128 = &LAB_1486dca4f;
      local_130 = &LAB_1464f50a6;
      local_138 = &DAT_149e063b2;
      local_140 = 0;
      local_148 = 0x10000004;
      local_150 = 8;
      local_158 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
        DAT_14cb61cd0 + 0x30)) {
      uVar2 = FUN_14007a696();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_14007a696();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if ((plVar4 != (longlong *)0x0 && plVar3 != plVar4) && (1 < *(int *)(param_1 + 0x28))) {
          local_a8 = 0;
          local_a0 = 0x8000000000;
          uStack_98 = 0xffffffff;
          local_108 = (code *)0x0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          local_48 = 1;
          local_44 = 0;
          uStack_3c = 0;
          uVar1 = FUN_14575ffe6(param_1,*param_2,(int)param_2[3]);
          if ((char)uVar1 != '\0') {
            FUN_140d8b20c(&local_108,plVar4,param_2[2]);
            local_158 = 0;
            (**(code **)(*plVar4 + 0x30))
                      (plVar4,&local_108,(uint)*(byte *)(param_1 + 0x31) << 6 | 8,0xffffffff);
          }
          FUN_140368b56(&local_108);
          goto LAB_143db5f13;
        }
      }
    }
  }
  uVar1 = 0;
LAB_143db5f13:
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db60f8 FUN_143db60f8 body=1223 status=ok
// SIG undefined FUN_143db60f8(void)

void FUN_143db60f8(longlong param_1,int *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  
  if (((((*(int *)(param_1 + 0x1dc) == 0) || (uVar2 = *(uint *)(param_1 + 0x1d8), (int)uVar2 < 0))
       || (DAT_14c9647dc <= (int)uVar2)) ||
      ((lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 == 0 ||
       (*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0x1dc))))) ||
     ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) {
    return;
  }
  if (((*param_2 != -1) && (*param_4 != 0)) &&
     ((*param_3 != 0 && (((param_3[1] != 0 && (*param_5 != 0)) && (param_5[1] != 0)))))) {
    if (((*(char *)(param_1 + 0x60) == '\0') &&
        ((*(int *)(param_1 + 100) == -1 || (*(int *)(param_1 + 0x68) == -1)))) ||
       (FUN_145e36b1e(), *param_3 != 0)) {
      plVar8 = (longlong *)param_3[1];
    }
    else {
      plVar8 = (longlong *)0x0;
    }
    lVar10 = (**(code **)(*plVar8 + 0x20))(plVar8,param_4);
    if (lVar10 != 0) {
      lVar11 = (longlong)*(int *)(*(longlong *)(lVar10 + 0xa0) + 0x120);
      if (lVar11 != 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + 0x118);
        iVar6 = *param_2;
        piVar7 = (int *)(lVar10 + 0x108);
        lVar15 = 0;
        do {
          if (*piVar7 == iVar6) {
            if (piVar7 == (int *)&DAT_000000f8) break;
            cVar5 = *(char *)((longlong)piVar7 + 5);
            iVar14 = (int)cVar5;
            if (iVar14 != -1) {
              if (((*param_5 == 0) || (plVar8 = (longlong *)param_5[1], plVar8 == (longlong *)0x0))
                 || ((lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,iVar14), lVar11 == 0 ||
                     (((*(int *)(lVar11 + 0xc) != *param_2 || (*(char *)(lVar11 + 0x10) != '\0')) ||
                      (cVar4 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar14), cVar4 == '\0'))))))
              break;
              iVar6 = *param_2;
            }
            if (*(int *)(param_1 + 100) == -1) {
              *(int *)(param_1 + 100) = iVar6;
              *(char *)(param_1 + 0x1c0) = cVar5;
              *(longlong *)(param_1 + 0x188) = *param_4;
              lVar10 = *param_3;
              if (DAT_14c950c29 == 1) {
                if (lVar10 == 0) {
                  lVar10 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar10 = *param_3;
                }
              }
              bVar3 = DAT_14c950c29;
              *(longlong *)(param_1 + 0x70) = lVar10;
              *(longlong *)(param_1 + 0x78) = param_3[1];
              lVar10 = *param_5;
              if ((bVar3 & 1) != 0) {
                if (lVar10 == 0) {
                  lVar10 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar10 = *param_5;
                }
              }
              *(longlong *)(param_1 + 0x90) = lVar10;
              *(longlong *)(param_1 + 0x98) = param_5[1];
              return;
            }
            if ((*(int *)(param_1 + 100) == iVar6) || (*(char *)(param_1 + 0x1c0) == cVar5)) break;
            if (*(longlong *)(param_1 + 0x70) == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(longlong *)(param_1 + 0x78);
            }
            lVar9 = 0;
            if (*param_3 != 0) {
              lVar9 = param_3[1];
            }
            if (((*(longlong *)(param_1 + 0x70) != *param_3) || (lVar11 != lVar9)) ||
               (*(longlong *)(param_1 + 0x188) != *param_4)) break;
            lVar11 = *(longlong *)(param_1 + 0x90);
            if (lVar11 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = *(longlong *)(param_1 + 0x98);
            }
            lVar12 = 0;
            if (*param_5 != 0) {
              lVar12 = param_5[1];
            }
            if ((lVar11 != *param_5) || (lVar9 != lVar12)) break;
            if (*(char *)(param_1 + 0x1c0) != -1) {
              if (lVar11 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(param_1 + 0x98);
              }
              cVar4 = FUN_143db65c0((lVar10 - lVar15) + 0x18,uVar13);
              if (cVar4 == '\0') break;
            }
            if (cVar5 == -1) goto LAB_143db6440;
            if (*(longlong *)(param_1 + 0x70) == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(param_1 + 0x78);
            }
            lVar10 = (**(code **)(*plVar8 + 0x20))(plVar8,param_1 + 0x188);
            if (lVar10 != 0) {
              lVar11 = (longlong)*(int *)(*(longlong *)(lVar10 + 0xa0) + 0x120);
              if (lVar11 != 0) {
                lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + 0x118);
                piVar7 = (int *)(lVar10 + 0x108);
                lVar15 = 0;
                goto LAB_143db64ce;
              }
            }
            break;
          }
          lVar15 = lVar15 + -0x150;
          piVar7 = piVar7 + 0x54;
        } while (lVar11 * -0x150 - lVar15 != 0);
      }
    }
  }
  goto LAB_143db6368;
LAB_143db6440:
  *(int *)(param_1 + 0x68) = *param_2;
  *(char *)(param_1 + 0x1c1) = cVar5;
  *(longlong *)(param_1 + 400) = *param_4;
  lVar10 = *param_3;
  if (DAT_14c950c29 == 1) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *param_3;
    }
  }
  bVar3 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x80) = lVar10;
  *(longlong *)(param_1 + 0x88) = param_3[1];
  lVar10 = *param_5;
  if ((bVar3 & 1) != 0) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *param_5;
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar10;
  *(longlong *)(param_1 + 0xa8) = param_5[1];
  cVar5 = *(char *)(param_1 + 0x1c1);
  if (*(char *)(param_1 + 0x1c0) == -1) {
    if (cVar5 == -1) goto LAB_143db6368;
    *(char *)(param_1 + 0x1c0) = cVar5;
    *(undefined1 *)(param_1 + 0x1c1) = 0xff;
    puVar1 = (ulonglong *)(param_1 + 100);
    *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
    cVar5 = '\x02';
  }
  else {
    cVar5 = (cVar5 == -1) + '\x01';
  }
  *(char *)(param_1 + 0x60) = cVar5;
  FUN_145e369de(param_1);
  return;
  while( true ) {
    lVar15 = lVar15 + -0x150;
    piVar7 = piVar7 + 0x54;
    if (lVar11 * -0x150 - lVar15 == 0) break;
LAB_143db64ce:
    if (*piVar7 == *(int *)(param_1 + 100)) {
      lVar10 = lVar10 - lVar15;
      if (lVar10 != -0x10) {
        if (*param_5 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = param_5[1];
        }
        cVar4 = FUN_143db65c0(lVar10 + 0x18,lVar11,iVar14);
        if (cVar4 != '\0') goto LAB_143db6440;
      }
      break;
    }
  }
LAB_143db6368:
  FUN_145e36b1e(param_1 + 0x60);
  return;
}



// FUNCTION 143db65c0 FUN_143db65c0 body=192 status=ok
// SIG undefined FUN_143db65c0(void)

undefined8 FUN_143db65c0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if ((param_2 != (longlong *)0x0) && (*param_1 != 0)) {
    if ((longlong)(int)param_1[3] != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar2) == 0) goto LAB_143db665c;
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar2);
    }
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\0')) {
      (**(code **)(*param_2 + 0xa0))(param_2,&local_38,param_1);
      if (*(longlong *)(lVar2 + 0x14) == local_38) {
        uVar1 = (**(code **)(*param_2 + 0x38))(param_2,param_3,param_1);
        goto LAB_143db665e;
      }
    }
LAB_143db665c:
    uVar1 = 0;
  }
LAB_143db665e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db6682 FUN_143db6682 body=641 status=ok
// SIG undefined FUN_143db6682(void)

void FUN_143db6682(longlong param_1,int *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,int param_6)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  ulonglong local_48;
  
  iVar8 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((((*(int *)(param_1 + 0x1dc) != 0) && (uVar1 = *(uint *)(param_1 + 0x1d8), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
        (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1dc))))) &&
      (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 && ((*param_2 != -1 && (*param_3 != 0)))))) &&
     ((param_3[1] != 0 &&
      ((((*param_4 != 0 && (plVar5 = (longlong *)param_4[1], plVar5 != (longlong *)0x0)) &&
        (*param_5 != 0)) && (lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,param_5), lVar6 != 0))))))
  {
    lVar7 = (longlong)*(int *)(*(longlong *)(lVar6 + 0xa0) + 0x120);
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xa0) + 0x118);
      piVar4 = (int *)(lVar6 + 0x108);
      lVar9 = 0;
      do {
        if (*piVar4 == *param_2) {
          if ((piVar4 == (int *)&DAT_000000f8) || (*(char *)((longlong)piVar4 + 5) != -1)) break;
          local_50 = param_1 + 0x60;
          FUN_145e36b1e();
          if (iVar8 == -1) {
            if (*param_3 == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = (longlong *)param_3[1];
            }
            local_58 = 1;
            (**(code **)(*plVar5 + 0x58))(plVar5,local_50,&param_6,(lVar6 - lVar9) + 0x18);
            iVar8 = param_6;
            if (param_6 == -1) break;
          }
          if (*param_3 == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)param_3[1];
          }
          lVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,iVar8);
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) == '\0')) {
            if (*param_3 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = param_3[1];
            }
            cVar3 = FUN_143db65c0((lVar6 - lVar9) + 0x18,lVar7,param_6);
            if (cVar3 != '\0') {
              *(int *)(param_1 + 100) = *param_2;
              *(undefined1 *)(param_1 + 0x1c0) = (undefined1)param_6;
              *(longlong *)(param_1 + 0x188) = *param_5;
              lVar6 = *param_3;
              if (DAT_14c950c29 == 1) {
                if (lVar6 == 0) {
                  lVar6 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar6 = *param_3;
                }
              }
              bVar2 = DAT_14c950c29;
              *(longlong *)(param_1 + 0x90) = lVar6;
              *(longlong *)(param_1 + 0x98) = param_3[1];
              lVar6 = *param_4;
              if ((bVar2 & 1) != 0) {
                if (lVar6 == 0) {
                  lVar6 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar6 = *param_4;
                }
              }
              *(longlong *)(param_1 + 0x70) = lVar6;
              *(longlong *)(param_1 + 0x78) = param_4[1];
              *(undefined1 *)(param_1 + 0x60) = 5;
              FUN_145e369de(param_1);
            }
          }
          break;
        }
        lVar9 = lVar9 + -0x150;
        piVar4 = piVar4 + 0x54;
      } while (lVar7 * -0x150 - lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143db6904 FUN_143db6904 body=545 status=ok
// SIG undefined FUN_143db6904(void)

void FUN_143db6904(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  
  if (((((((*(int *)(param_1 + 0x1dc) != 0) && (uVar1 = *(uint *)(param_1 + 0x1d8), -1 < (int)uVar1)
          ) && ((int)uVar1 < DAT_14c9647dc)) &&
        ((lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0 &&
         (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1dc))))) &&
       (((*(uint *)(lVar8 + 8) & 0x10200000) == 0 &&
        ((*param_3 != 0 && (plVar6 = (longlong *)param_3[1], plVar6 != (longlong *)0x0)))))) &&
      (*param_4 != 0)) &&
     (((((param_4[1] != 0 && (param_2 != -1)) && (*param_5 != 0)) &&
       (((lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), lVar8 != 0 && (*param_3 != 0)) &&
        ((plVar6 = (longlong *)param_3[1], plVar6 != (longlong *)0x0 &&
         ((lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), lVar4 != 0 &&
          (piVar9 = (int *)(lVar8 + 0xc), *(int *)(lVar4 + 0xc) == *piVar9)))))))) &&
      ((*(char *)(lVar4 + 0x10) == '\0' &&
       (cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,param_2), cVar3 != '\0')))))) {
    if (*param_4 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)param_4[1];
    }
    lVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,param_5);
    if (lVar8 != 0) {
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar8 + 0xa0) + 0x120);
      if (lVar4 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0xa0) + 0x118);
        lVar7 = 0;
        do {
          if (*(int *)(lVar8 + 0x108 + lVar7) == *piVar9) {
            if (lVar8 + lVar7 == -0x10) {
              return;
            }
            if (*param_4 == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = (longlong *)param_4[1];
            }
            uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,param_5);
            cVar3 = FUN_1488c61b8(uVar5,piVar9);
            if (cVar3 == '\0') {
              return;
            }
            FUN_145e36b1e(param_1 + 0x60);
            *(int *)(param_1 + 100) = *piVar9;
            *(char *)(param_1 + 0x1c0) = (char)param_2;
            *(longlong *)(param_1 + 0x188) = *param_5;
            lVar8 = *param_3;
            if (DAT_14c950c29 == 1) {
              if (lVar8 == 0) {
                lVar8 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar8 = *param_3;
              }
            }
            bVar2 = DAT_14c950c29;
            *(longlong *)(param_1 + 0x90) = lVar8;
            *(longlong *)(param_1 + 0x98) = param_3[1];
            lVar8 = *param_4;
            if ((bVar2 & 1) != 0) {
              if (lVar8 == 0) {
                lVar8 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar8 = *param_4;
              }
            }
            *(longlong *)(param_1 + 0x70) = lVar8;
            *(longlong *)(param_1 + 0x78) = param_4[1];
            *(undefined1 *)(param_1 + 0x60) = 4;
            FUN_145e369de(param_1);
            return;
          }
          lVar7 = lVar7 + 0x150;
        } while (lVar4 * 0x150 - lVar7 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143db6b26 FUN_143db6b26 body=605 status=ok
// SIG undefined FUN_143db6b26(void)

void FUN_143db6b26(longlong param_1,longlong *param_2,uint param_3,undefined1 param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,int *param_8,
                  undefined4 param_9,char param_10)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + 0x1dc) != 0) && (uVar1 = *(uint *)(param_1 + 0x1d8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1dc))) &&
       (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 && (*param_2 != 0)))) {
      if ((longlong)(int)param_2[3] != 0) {
        lVar6 = 0;
        do {
          if (*(longlong *)(param_2[2] + lVar6) == 0) goto LAB_143db6c06;
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)param_2[3] * 8 != lVar6);
      }
      if (((*param_5 != 0) && (*param_6 != 0)) &&
         ((param_6[1] != 0 && ((*param_7 != 0 && (param_7[1] != 0)))))) {
        local_58 = param_1 + 0x60;
        FUN_145e36b1e();
        local_4c = -1;
        if (param_10 == '\0') {
          if (*param_7 == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)param_7[1];
          }
          local_68 = param_4;
          (**(code **)(*plVar5 + 0x58))(plVar5,local_58,&local_4c,param_2);
          if (local_4c != -1) {
            if (*param_7 == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = (longlong *)param_7[1];
            }
            cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,local_4c,param_2);
            if (cVar3 == '\0') {
              FUN_145e36b1e(local_58);
              goto LAB_143db6c06;
            }
          }
        }
        iVar4 = *param_8;
        if (*param_8 == -1) {
          iVar4 = DAT_14c763998;
          DAT_14c763998 = DAT_14c763998 + 1;
        }
        *(int *)(param_1 + 0x68) = iVar4;
        FUN_1407b25f0(param_1 + 0xb0,param_2);
        *(uint *)(param_1 + 0x1c4) = param_3 & 0xff;
        *(undefined4 *)(param_1 + 0x1c8) = param_9;
        *(undefined1 *)(param_1 + 0x1c0) = (undefined1)local_4c;
        *(longlong *)(param_1 + 400) = *param_5;
        lVar6 = *param_6;
        if (DAT_14c950c29 == 1) {
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = *param_6;
          }
        }
        bVar2 = DAT_14c950c29;
        *(longlong *)(param_1 + 0x80) = lVar6;
        *(longlong *)(param_1 + 0x88) = param_6[1];
        lVar6 = *param_7;
        if ((bVar2 & 1) != 0) {
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = *param_7;
          }
        }
        *(longlong *)(param_1 + 0xa0) = lVar6;
        *(longlong *)(param_1 + 0xa8) = param_7[1];
        *(undefined1 *)(param_1 + 0x60) = 7;
        FUN_145e369de(param_1);
      }
    }
  }
LAB_143db6c06:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db6d84 FUN_143db6d84 body=1161 status=ok
// SIG undefined FUN_143db6d84(void)

void FUN_143db6d84(longlong param_1,int *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined4 param_8,
                  uint param_9,int param_10)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_98 [32];
  int local_78;
  int local_64;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((((*(int *)(param_1 + 0x1dc) != 0) && (uVar1 = *(uint *)(param_1 + 0x1d8), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
        (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1dc))))) &&
      (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 && ((*param_2 != -1 && (*param_3 != 0)))))) &&
     ((plVar5 = (longlong *)param_3[1], plVar5 != (longlong *)0x0 &&
      ((((*param_4 != 0 && (*param_5 != 0)) && (param_5[1] != 0)) &&
       ((*param_6 != 0 && (lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,param_4), lVar6 != 0))))))))
  {
    lVar4 = (longlong)*(int *)(*(longlong *)(lVar6 + 0xa0) + 0x120);
    if (lVar4 != 0) {
      local_60 = *(longlong *)(*(longlong *)(lVar6 + 0xa0) + 0x118);
      pcVar7 = (char *)(local_60 + 0x10d);
      lVar6 = 0;
      do {
        if (*(int *)(pcVar7 + -5) == *param_2) {
          if ((pcVar7 + -0xfd == (char *)0x0) ||
             ((local_64 = (int)*pcVar7, local_64 != -1 &&
              (((*param_7 == 0 || (plVar5 = (longlong *)param_7[1], plVar5 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,local_64), cVar2 == '\0')))))) break;
          if (*param_5 == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)param_5[1];
          }
          local_58 = (**(code **)(*plVar5 + 0x20))(plVar5,param_6);
          if (local_58 == 0) break;
          if (param_10 != -1) {
            if (*param_7 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = param_7[1];
            }
            cVar2 = FUN_143db65c0((local_60 - lVar6) + 0x18,lVar4);
            if (cVar2 == '\0') break;
          }
          local_4c = 0xffffffff;
          if (*param_5 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = param_5[1];
          }
          local_78 = param_10;
          cVar2 = FUN_1488d84de(pcVar7 + -0xfd,lVar4,param_6,&local_4c);
          if (cVar2 != '\0') {
            FUN_145e36b1e(param_1 + 0x60);
            *(int *)(param_1 + 100) = *param_2;
            lVar4 = *param_3;
            if (DAT_14c950c29 == 1) {
              if (lVar4 == 0) {
                lVar4 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar4 = *param_3;
              }
            }
            bVar3 = DAT_14c950c29;
            *(longlong *)(param_1 + 0x70) = lVar4;
            *(longlong *)(param_1 + 0x78) = param_3[1];
            *(longlong *)(param_1 + 0x188) = *param_4;
            if ((char)local_64 != -1) {
              lVar4 = *param_7;
              if ((bVar3 & 1) != 0) {
                if (lVar4 == 0) {
                  lVar4 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar4 = *param_7;
                  bVar3 = DAT_14c950c29;
                }
              }
              *(longlong *)(param_1 + 0x90) = lVar4;
              *(longlong *)(param_1 + 0x98) = param_7[1];
              *(char *)(param_1 + 0x1c0) = (char)local_64;
            }
            lVar4 = *param_5;
            if ((bVar3 & 1) != 0) {
              if (lVar4 == 0) {
                lVar4 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar4 = *param_5;
              }
            }
            *(longlong *)(param_1 + 0x80) = lVar4;
            *(longlong *)(param_1 + 0x88) = param_5[1];
            *(longlong *)(param_1 + 400) = *param_6;
            if (param_10 != -1) {
              lVar4 = *param_7;
              if (DAT_14c950c29 == 1) {
                if (lVar4 == 0) {
                  lVar4 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar4 = *param_7;
                }
              }
              *(longlong *)(param_1 + 0xa0) = lVar4;
              *(longlong *)(param_1 + 0xa8) = param_7[1];
              *(char *)(param_1 + 0x1c1) = (char)param_10;
            }
            *(undefined4 *)(param_1 + 0x1c4) = param_8;
            *(uint *)(param_1 + 0x1c8) = param_9;
            *(undefined1 *)(param_1 + 0x60) = 8;
            if (*(int *)(param_1 + 0x1dc) == 0) {
LAB_143db7207:
              lVar4 = 0;
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x1d8);
              lVar4 = 0;
              if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                plVar5 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((plVar5 == (longlong *)0x0) ||
                   (((int)plVar5[2] != *(int *)(param_1 + 0x1dc) ||
                    ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_143db7207;
                lVar4 = *plVar5;
              }
            }
            if (*(char *)(lVar4 + 0x178) != '\x03') {
              if (*param_3 == 0) {
                plVar5 = (longlong *)0x0;
              }
              else {
                plVar5 = (longlong *)param_3[1];
              }
              lVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,param_4);
              if ((*(char *)(lVar4 + 0x148) == '\x01') && (*(char *)(local_58 + 0x148) == '\0')) {
                *(uint *)(param_1 + 0x1c8) = ~param_9 & *(uint *)(pcVar7 + -0x11);
                *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(pcVar7 + -0x15);
                *(uint *)(param_1 + 0x1d0) = (uint)(byte)pcVar7[-1];
                FUN_1407b25f0(param_1 + 0xb0,(local_60 - lVar6) + 0x18);
              }
            }
            FUN_145e369de(param_1);
          }
          break;
        }
        lVar6 = lVar6 + -0x150;
        pcVar7 = pcVar7 + 0x150;
      } while (lVar4 * -0x150 - lVar6 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143db720e FUN_143db720e body=915 status=ok
// SIG undefined FUN_143db720e(void)

undefined8 FUN_143db720e(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  longlong local_58;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x1d8);
  if ((int)uVar3 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar3) {
    return 0;
  }
  lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (lVar6 == 0) {
    return 0;
  }
  if (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x1dc)) {
    return 0;
  }
  if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) {
    return 0;
  }
  cVar5 = FUN_145e36cac();
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x98);
  }
  lVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,(int)*(char *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x90) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x98);
  }
  lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,(int)*(char *)(param_1 + 0x1c1));
  if (lVar6 == 0) {
    return 0;
  }
  if (lVar7 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x98);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = *(longlong **)(param_1 + 0x78);
  }
  if (plVar10 == (longlong *)0x0) {
    return 0;
  }
  cVar5 = *(char *)(param_1 + 0x1c0);
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,(int)cVar5);
  if (lVar8 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 100);
  if (*(int *)(lVar8 + 0xc) != *piVar1) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x10) != '\0') {
    return 0;
  }
  cVar5 = (**(code **)(*plVar10 + 0x30))(plVar10,(int)cVar5);
  if (cVar5 == '\0') {
    return 0;
  }
  cVar5 = *(char *)(param_1 + 0x1c1);
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,(int)cVar5);
  if (lVar8 == 0) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0x68);
  if (*(int *)(lVar8 + 0xc) != *piVar2) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x10) != '\0') {
    return 0;
  }
  cVar5 = (**(code **)(*plVar10 + 0x30))(plVar10,(int)cVar5);
  if (cVar5 == '\0') {
    return 0;
  }
  lVar8 = param_1 + 0x188;
  lVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
  if (lVar9 != 0) {
    lVar11 = (longlong)*(int *)(*(longlong *)(lVar9 + 0xa0) + 0x120);
    if (lVar11 != 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xa0) + 0x118);
      local_58 = 0;
      lVar12 = 0;
      do {
        if (*(int *)(lVar9 + 0x108 + lVar12) == *piVar1) {
          local_58 = lVar9 + lVar12 + 0x10;
          break;
        }
        lVar12 = lVar12 + 0x150;
      } while (lVar11 * 0x150 - lVar12 != 0);
      goto LAB_143db7419;
    }
  }
  local_58 = 0;
LAB_143db7419:
  lVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar8);
  if (lVar9 != 0) {
    lVar11 = (longlong)*(int *)(*(longlong *)(lVar9 + 0xa0) + 0x120);
    if (lVar11 != 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xa0) + 0x118);
      piVar13 = (int *)(lVar9 + 0x108);
      lVar12 = 0;
      while (*piVar13 != *piVar2) {
        lVar12 = lVar12 + -0x150;
        piVar13 = piVar13 + 0x54;
        if (lVar11 * -0x150 - lVar12 == 0) {
          return 0;
        }
      }
      if (local_58 == 0) {
        return 0;
      }
      lVar9 = lVar9 - lVar12;
      lVar11 = lVar9 + 0x10;
      if (lVar11 == 0) {
        return 0;
      }
      cVar5 = FUN_143db65c0(local_58 + 8,plVar10,(int)*(char *)(param_1 + 0x1c1));
      if (((cVar5 != '\0') &&
          (cVar5 = FUN_143db65c0(lVar9 + 0x18,plVar10,(int)*(char *)(param_1 + 0x1c0)),
          cVar5 != '\0')) && (plVar14 != (longlong *)0x0)) {
        cVar5 = *(char *)(param_1 + 0x1c1);
        lVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar8);
        if ((lVar9 != 0) && (cVar5 = FUN_141069b66(lVar9,piVar1,(int)cVar5), cVar5 != '\0')) {
          cVar5 = *(char *)(param_1 + 0x1c0);
          lVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar8);
          if ((lVar8 != 0) && (cVar5 = FUN_141069b66(lVar8,piVar2,(int)cVar5), cVar5 != '\0')) {
            uVar4 = *(undefined4 *)(lVar6 + 0xc);
            *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar7 + 0xc);
            *(undefined4 *)(lVar7 + 0xc) = uVar4;
            if (*(longlong *)(param_1 + 0x90) == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = *(longlong **)(param_1 + 0x98);
            }
            (**(code **)(*plVar10 + 0x40))
                      (plVar10,(int)*(char *)(param_1 + 0x1c0),local_58,
                       (int)*(char *)(param_1 + 0x1c1),lVar11);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143db75a2 FUN_143db75a2 body=747 status=ok
// SIG undefined FUN_143db75a2(void)

undefined8 FUN_143db75a2(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x1d8);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar2) {
    return 0;
  }
  lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x1dc)) {
    return 0;
  }
  if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
    return 0;
  }
  cVar3 = FUN_145e36cac();
  if (cVar3 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x98);
  }
  lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,(int)*(char *)(param_1 + 0x1c0));
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x98);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = *(longlong **)(param_1 + 0x78);
  }
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  cVar3 = *(char *)(param_1 + 0x1c0);
  lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,(int)cVar3);
  if (lVar6 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 100);
  if (*(int *)(lVar6 + 0xc) != *piVar1) {
    return 0;
  }
  if (*(char *)(lVar6 + 0x10) != '\0') {
    return 0;
  }
  cVar3 = (**(code **)(*plVar9 + 0x30))(plVar9,(int)cVar3);
  if (cVar3 == '\0') {
    return 0;
  }
  lVar6 = param_1 + 0x188;
  lVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,lVar6);
  if (lVar7 != 0) {
    lVar10 = (longlong)*(int *)(*(longlong *)(lVar7 + 0xa0) + 0x120);
    if (lVar10 != 0) {
      lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x118);
      lVar7 = 0;
      lVar12 = 0;
      do {
        if (*(int *)(lVar8 + 0x108 + lVar12) == *piVar1) {
          lVar7 = lVar8 + lVar12 + 0x10;
          break;
        }
        lVar12 = lVar12 + 0x150;
      } while (lVar10 * 0x150 - lVar12 != 0);
      goto LAB_143db7721;
    }
  }
  lVar7 = 0;
LAB_143db7721:
  lVar10 = (**(code **)(*plVar11 + 0x20))(plVar11);
  if (lVar10 != 0) {
    lVar8 = (longlong)*(int *)(*(longlong *)(lVar10 + 0xa0) + 0x120);
    if (lVar8 != 0) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + 0x118);
      piVar13 = (int *)(lVar10 + 0x108);
      lVar12 = 0;
      while (*piVar13 != *(int *)(param_1 + 0x68)) {
        lVar12 = lVar12 + -0x150;
        piVar13 = piVar13 + 0x54;
        if (lVar8 * -0x150 - lVar12 == 0) {
          return 0;
        }
      }
      if (lVar7 == 0) {
        return 0;
      }
      lVar10 = lVar10 - lVar12;
      lVar8 = lVar10 + 0x10;
      if (lVar8 == 0) {
        return 0;
      }
      bVar4 = FUN_143db65c0(lVar10 + 0x18,plVar9,(int)*(char *)(param_1 + 0x1c0));
      if ((((plVar11 != (longlong *)0x0 & bVar4) == 1) &&
          (lVar10 = (**(code **)(*plVar11 + 0x20))(plVar11,lVar6), lVar10 != 0)) &&
         (cVar3 = FUN_141069b66(lVar10,piVar1,0xffffffff), cVar3 != '\0')) {
        cVar3 = *(char *)(param_1 + 0x1c0);
        lVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,lVar6);
        if ((lVar6 != 0) &&
           (cVar3 = FUN_141069b66(lVar6,(int *)(param_1 + 0x68),(int)cVar3), cVar3 != '\0')) {
          if (*(longlong *)(param_1 + 0x90) == 0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = *(longlong **)(param_1 + 0x98);
          }
          plVar11 = (longlong *)0x0;
          (**(code **)(*plVar9 + 0x50))(plVar9,(int)*(char *)(param_1 + 0x1c0),lVar7,0);
          *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x90) != 0) {
            plVar11 = *(longlong **)(param_1 + 0x98);
          }
          (**(code **)(*plVar11 + 0x48))(plVar11,(int)*(char *)(param_1 + 0x1c0),lVar8);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143db788e FUN_143db788e body=1563 status=ok
// SIG undefined FUN_143db788e(void)

ulonglong FUN_143db788e(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 auStack_398 [32];
  undefined4 local_378;
  ulonglong local_370;
  int *local_368;
  int *local_360;
  longlong local_358;
  longlong local_350;
  undefined1 local_348 [8];
  undefined1 local_340 [216];
  undefined8 *local_268;
  undefined1 local_248 [8];
  undefined1 local_240 [216];
  undefined8 *local_168;
  undefined1 local_148 [8];
  undefined1 local_140 [216];
  undefined8 *local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar3 = *(uint *)(param_1 + 0x1d8);
    uVar14 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143db7901;
    lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar9 != 0) &&
       (((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1dc) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) && (cVar2 = FUN_145e36cac(), cVar2 != '\0'))))
    {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x78);
      }
      lVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x188);
      if (lVar9 != 0) {
        if (*(longlong *)(param_1 + 0x80) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0x88);
        }
        lVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 400);
        if (lVar4 != 0) {
          lVar6 = (longlong)*(int *)(*(longlong *)(lVar9 + 0xa0) + 0x120);
          if (lVar6 != 0) {
            piVar1 = (int *)(param_1 + 100);
            lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0xa0) + 0x118);
            piVar11 = (int *)(lVar10 + 0x108);
            lVar7 = 0;
            uVar14 = 0;
            do {
              if (*piVar11 == *piVar1) {
                lVar10 = lVar10 - lVar7;
                lVar6 = lVar10 + 0x10;
                if (lVar6 == 0) goto LAB_143db78fe;
                lVar7 = (longlong)*(int *)(*(longlong *)(lVar4 + 0xa0) + 0x120);
                if (lVar7 == 0) goto LAB_143db78fe;
                local_360 = (int *)(param_1 + 0x68);
                lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x118);
                piVar11 = (int *)(lVar13 + 0x108);
                lVar8 = 0;
                uVar14 = 0;
                goto LAB_143db7a32;
              }
              lVar7 = lVar7 + -0x150;
              piVar11 = piVar11 + 0x54;
            } while (lVar6 * -0x150 - lVar7 != 0);
            goto LAB_143db7901;
          }
        }
      }
    }
  }
LAB_143db78fe:
  uVar14 = 0;
  goto LAB_143db7901;
  while( true ) {
    lVar8 = lVar8 + -0x150;
    piVar11 = piVar11 + 0x54;
    if (lVar7 * -0x150 - lVar8 == 0) break;
LAB_143db7a32:
    if (*piVar11 == *local_360) {
      lVar13 = lVar13 - lVar8;
      lVar7 = lVar13 + 0x10;
      if (lVar7 == 0) goto LAB_143db78fe;
      lVar13 = lVar13 + 0x18;
      uVar14 = 0;
      local_368 = piVar1;
      cVar2 = FUN_1412e0532(lVar9,lVar13,piVar1,0);
      if (cVar2 != '\0') {
        lVar10 = lVar10 + 0x18;
        uVar14 = 0;
        cVar2 = FUN_1412e0532(lVar4,lVar10,local_360,0);
        if (cVar2 != '\0') {
          if (*(char *)(param_1 + 0x1c0) == -1) {
            local_350 = 0;
            local_370 = 0;
          }
          else {
            if (*(longlong *)(param_1 + 0x90) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(param_1 + 0x98);
            }
            lVar8 = (**(code **)(*plVar5 + 0x10))();
            if (((lVar8 == 0) || (*(longlong *)(param_1 + 0x90) == 0)) ||
               (plVar5 = *(longlong **)(param_1 + 0x98), local_350 = lVar8,
               plVar5 == (longlong *)0x0)) goto LAB_143db78fe;
            local_370 = CONCAT44(local_370._4_4_,(int)*(char *)(param_1 + 0x1c0));
            lVar8 = (**(code **)(*plVar5 + 0x10))(plVar5);
            if (((lVar8 == 0) || (*(int *)(lVar8 + 0xc) != *local_368)) ||
               ((*(char *)(lVar8 + 0x10) != '\0' ||
                (cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,local_370 & 0xffffffff), cVar2 == '\0'
                )))) goto LAB_143db78fe;
            local_370 = FUN_143db65c0(lVar13,plVar5,(int)*(char *)(param_1 + 0x1c0));
          }
          if (*(char *)(param_1 + 0x1c1) == -1) {
            local_358 = 0;
            uVar3 = 0;
          }
          else {
            if (*(longlong *)(param_1 + 0x90) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(param_1 + 0x98);
            }
            lVar13 = (**(code **)(*plVar5 + 0x10))();
            if (((lVar13 == 0) || (*(longlong *)(param_1 + 0xa0) == 0)) ||
               (plVar5 = *(longlong **)(param_1 + 0xa8), local_358 = lVar13,
               plVar5 == (longlong *)0x0)) goto LAB_143db78fe;
            cVar2 = *(char *)(param_1 + 0x1c1);
            lVar13 = (**(code **)(*plVar5 + 0x10))(plVar5,(int)cVar2);
            if (((lVar13 == 0) || (*(int *)(lVar13 + 0xc) != *local_360)) ||
               ((*(char *)(lVar13 + 0x10) != '\0' ||
                (cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,(int)cVar2), cVar2 == '\0'))))
            goto LAB_143db78fe;
            uVar3 = FUN_143db65c0(lVar10,plVar5,(int)*(char *)(param_1 + 0x1c1));
          }
          if (*(char *)(param_1 + 0x1c0) != -1) {
            if (*(longlong *)(param_1 + 0x90) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(param_1 + 0x98);
            }
            (**(code **)(*plVar5 + 0x50))
                      (plVar5,(int)*(char *)(param_1 + 0x1c0),lVar6,local_370 & 0xffffffff ^ 1);
          }
          if (*(char *)(param_1 + 0x1c1) != -1) {
            if (*(longlong *)(param_1 + 0xa0) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(param_1 + 0xa8);
            }
            (**(code **)(*plVar5 + 0x50))(plVar5,(int)*(char *)(param_1 + 0x1c1),lVar7,uVar3 ^ 1);
          }
          FUN_140e30dbe(local_148,lVar6);
          FUN_140e30dbe(local_248,lVar7);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(param_1 + 0x78);
          }
          if (*(longlong *)(param_1 + 0x80) == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined8 *)(param_1 + 0x88);
          }
          uVar14 = 0;
          cVar2 = FUN_14119e7cc(lVar9,local_368,uVar12,0);
          if (cVar2 == '\0') {
            uVar14 = 0;
            cVar2 = FUN_14119e7cc(lVar4,local_360,uVar15,0);
            if (cVar2 == '\0') {
              FUN_140e30dbe(local_348,local_248);
              local_378 = 0xffffffff;
              lVar9 = FUN_143d9f6d8(lVar9,local_348,uVar12,0);
              if (local_268 != (undefined8 *)0x0) {
                (**(code **)*local_268)(local_268,1);
              }
              FUN_140368b56(local_340);
              if (lVar9 != 0) {
                FUN_140e30dbe(local_348,local_148);
                local_378 = 0xffffffff;
                lVar9 = FUN_143d9f6d8(lVar4,local_348,uVar15,0);
                if (local_268 != (undefined8 *)0x0) {
                  (**(code **)*local_268)(local_268,1);
                }
                FUN_140368b56(local_340);
                if (lVar9 != 0) {
                  if ((char)uVar3 != '\0') {
                    *(undefined4 *)(local_358 + 0xc) = *(undefined4 *)(param_1 + 100);
                    if (*(longlong *)(param_1 + 0x90) == 0) {
                      plVar5 = (longlong *)0x0;
                    }
                    else {
                      plVar5 = *(longlong **)(param_1 + 0x98);
                    }
                    (**(code **)(*plVar5 + 0x48))(plVar5,(int)*(char *)(param_1 + 0x1c1),local_148);
                  }
                  uVar14 = CONCAT71((int7)((ulonglong)local_348 >> 8),1);
                  if ((char)local_370 != '\0') {
                    *(undefined4 *)(local_350 + 0xc) = *(undefined4 *)(param_1 + 0x68);
                    if (*(longlong *)(param_1 + 0x90) == 0) {
                      plVar5 = (longlong *)0x0;
                    }
                    else {
                      plVar5 = *(longlong **)(param_1 + 0x98);
                    }
                    (**(code **)(*plVar5 + 0x48))(plVar5,(int)*(char *)(param_1 + 0x1c0),local_248);
                  }
                  goto LAB_143db7e5d;
                }
              }
              uVar14 = 0;
            }
          }
LAB_143db7e5d:
          if (local_168 != (undefined8 *)0x0) {
            (**(code **)*local_168)(local_168,1);
          }
          FUN_140368b56(local_240);
          if (local_68 != (undefined8 *)0x0) {
            (**(code **)*local_68)(local_68,1);
          }
          FUN_140368b56(local_140);
        }
      }
      break;
    }
  }
LAB_143db7901:
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 143db7eaa FUN_143db7eaa body=545 status=ok
// SIG undefined FUN_143db7eaa(void)

undefined8 FUN_143db7eaa(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar2 = *(uint *)(param_1 + 0x1d8);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((((lVar10 != 0) && (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x1dc))) &&
        ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) && (cVar3 = FUN_145e36cac(), cVar3 != '\0')) {
      if (*(longlong *)(param_1 + 0x90) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x98);
      }
      lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,(int)*(char *)(param_1 + 0x1c0));
      if (((lVar10 != 0) && (*(int *)(lVar10 + 0xc) == *(int *)(param_1 + 100))) &&
         ((*(longlong *)(param_1 + 0x90) != 0 &&
          (plVar9 = *(longlong **)(param_1 + 0x98), plVar9 != (longlong *)0x0)))) {
        cVar3 = *(char *)(param_1 + 0x1c0);
        lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,(int)cVar3);
        if (((lVar4 != 0) && (piVar1 = (int *)(param_1 + 100), *(int *)(lVar4 + 0xc) == *piVar1)) &&
           ((*(char *)(lVar4 + 0x10) == '\0' &&
            (cVar3 = (**(code **)(*plVar9 + 0x30))(plVar9,(int)cVar3), cVar3 != '\0')))) {
          lVar4 = param_1 + 0x188;
          if (*(longlong *)(param_1 + 0x70) == 0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = *(longlong **)(param_1 + 0x78);
          }
          lVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,lVar4);
          if (lVar5 != 0) {
            lVar6 = (longlong)*(int *)(*(longlong *)(lVar5 + 0xa0) + 0x120);
            if (lVar6 != 0) {
              lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + 0x118);
              lVar7 = 0;
              while (*(int *)(lVar5 + 0x108 + lVar7) != *piVar1) {
                lVar7 = lVar7 + 0x150;
                if (lVar6 * 0x150 - lVar7 == 0) {
                  return 0;
                }
              }
              lVar5 = lVar5 + lVar7 + 0x10;
              if (lVar5 != 0) {
                if (*(longlong *)(param_1 + 0x70) == 0) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  plVar9 = *(longlong **)(param_1 + 0x78);
                }
                uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,lVar4);
                cVar3 = FUN_1488c61b8(uVar8,(undefined4 *)(lVar10 + 0xc));
                if ((((cVar3 != '\0') &&
                     (*(undefined4 *)(lVar10 + 0xc) = 0xffffffff, *(longlong *)(param_1 + 0x70) != 0
                     )) && (plVar9 = *(longlong **)(param_1 + 0x78), plVar9 != (longlong *)0x0)) &&
                   ((lVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,lVar4), lVar10 != 0 &&
                    (cVar3 = FUN_141069b66(lVar10,piVar1,0xffffffff), cVar3 != '\0')))) {
                  if (*(longlong *)(param_1 + 0x90) == 0) {
                    plVar9 = (longlong *)0x0;
                  }
                  else {
                    plVar9 = *(longlong **)(param_1 + 0x98);
                  }
                  (**(code **)(*plVar9 + 0x50))(plVar9,(int)*(char *)(param_1 + 0x1c0),lVar5,1);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143db80cc FUN_143db80cc body=875 status=ok
// SIG undefined FUN_143db80cc(void)

undefined8 FUN_143db80cc(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1d8);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143db8135;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) &&
       (((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1dc) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) && (cVar2 = FUN_145e36cac(), cVar2 != '\0'))))
    {
      if (*(longlong *)(param_1 + 0x90) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x98);
      }
      lVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,(int)*(char *)(param_1 + 0x1c0));
      if (lVar3 != 0) {
        lVar7 = param_1 + 0x188;
        if (*(longlong *)(param_1 + 0x70) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(param_1 + 0x78);
        }
        lVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar7);
        if (lVar4 != 0) {
          lVar5 = (longlong)*(int *)(*(longlong *)(lVar4 + 0xa0) + 0x120);
          if (lVar5 != 0) {
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x118);
            piVar9 = (int *)(lVar4 + 0x108);
            lVar10 = 0;
            uVar6 = 0;
            do {
              if (*piVar9 == *(int *)(param_1 + 100)) {
                if ((piVar9 + -0x3e == (int *)0x0) || (*(char *)((longlong)piVar9 + 5) != -1))
                goto LAB_143db8133;
                if (*(longlong *)(param_1 + 0x90) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = *(undefined8 *)(param_1 + 0x98);
                }
                cVar2 = FUN_143db65c0((lVar4 - lVar10) + 0x18,uVar6);
                if (cVar2 == '\0') goto LAB_143db8133;
                if (*(int *)(lVar3 + 0xc) == -1) goto LAB_143db83bf;
                if ((*(longlong *)(param_1 + 0x90) == 0) ||
                   (plVar8 = *(longlong **)(param_1 + 0x98), plVar8 == (longlong *)0x0))
                goto LAB_143db8133;
                cVar2 = *(char *)(param_1 + 0x1c0);
                lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,(int)cVar2);
                if ((lVar4 == 0) ||
                   (((*(int *)(lVar4 + 0xc) != *(int *)(lVar3 + 0xc) ||
                     (*(char *)(lVar4 + 0x10) != '\0')) ||
                    (cVar2 = (**(code **)(*plVar8 + 0x30))(plVar8,(int)cVar2), cVar2 == '\0'))))
                goto LAB_143db8133;
                if (*(longlong *)(param_1 + 0x70) == 0) {
                  plVar8 = (longlong *)0x0;
                }
                else {
                  plVar8 = *(longlong **)(param_1 + 0x78);
                }
                lVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar7);
                if (lVar4 == 0) goto LAB_143db8133;
                lVar5 = (longlong)*(int *)(*(longlong *)(lVar4 + 0xa0) + 0x120);
                if (lVar5 == 0) goto LAB_143db8133;
                lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x118);
                lVar10 = 0;
                uVar6 = 0;
                goto LAB_143db8316;
              }
              lVar10 = lVar10 + -0x150;
              piVar9 = piVar9 + 0x54;
            } while (lVar5 * -0x150 - lVar10 != 0);
            goto LAB_143db8135;
          }
        }
      }
    }
  }
LAB_143db8133:
  uVar6 = 0;
LAB_143db8135:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
LAB_143db8316:
  if (*(int *)(lVar4 + 0x108 + lVar10) != *(int *)(lVar3 + 0xc)) goto code_r0x000143db8320;
  lVar5 = lVar4 + lVar10 + 0x10;
  if ((lVar5 != 0) &&
     (*(undefined4 *)(lVar3 + 0xc) = 0xffffffff, *(longlong *)(param_1 + 0x70) != 0)) {
    plVar8 = *(longlong **)(param_1 + 0x78);
    local_44 = *(undefined4 *)(lVar4 + 0x108 + lVar10);
    if ((plVar8 != (longlong *)0x0) &&
       ((lVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar7), lVar4 != 0 &&
        (cVar2 = FUN_141069b66(lVar4,&local_44,0xffffffff), cVar2 != '\0')))) {
      if (*(longlong *)(param_1 + 0x90) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x98);
      }
      (**(code **)(*plVar8 + 0x50))(plVar8,(int)*(char *)(param_1 + 0x1c0),lVar5,0);
LAB_143db83bf:
      if ((*(longlong *)(param_1 + 0x70) != 0) &&
         (plVar8 = *(longlong **)(param_1 + 0x78), plVar8 != (longlong *)0x0)) {
        cVar2 = *(char *)(param_1 + 0x1c0);
        lVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar7);
        if ((lVar7 != 0) &&
           (cVar2 = FUN_141069b66(lVar7,(int *)(param_1 + 100),(int)cVar2), cVar2 != '\0')) {
          *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 100);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = *(longlong **)(param_1 + 0x98);
          }
          (**(code **)(*plVar8 + 0x48))(plVar8,(int)*(char *)(param_1 + 0x1c0),piVar9 + -0x3e);
          uVar6 = 1;
          goto LAB_143db8135;
        }
      }
    }
  }
  goto LAB_143db8133;
code_r0x000143db8320:
  lVar10 = lVar10 + 0x150;
  if (lVar5 * 0x150 - lVar10 == 0) goto LAB_143db8135;
  goto LAB_143db8316;
}



// FUNCTION 143db8438 FUN_143db8438 body=2125 status=ok
// SIG undefined FUN_143db8438(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143db8438(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined3 uVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  int local_310;
  uint local_308;
  char local_2fa;
  char local_2f9;
  undefined4 local_2f8;
  uint local_2f4;
  undefined8 *local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  int local_2c4 [3];
  undefined1 local_2b8 [8];
  longlong local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_280;
  undefined8 local_278;
  undefined1 local_270 [144];
  undefined8 *local_1e0;
  undefined8 local_198;
  undefined8 local_190 [4];
  longlong local_170;
  char local_15f;
  undefined4 local_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (*(int *)(param_1 + 0x1dc) == 0) goto LAB_143db84a7;
  uVar2 = *(uint *)(param_1 + 0x1d8);
  uVar10 = 0;
  if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143db84a9;
  lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if ((lVar16 != 0) &&
     ((*(int *)(lVar16 + 0x10) == *(int *)(param_1 + 0x1dc) &&
      ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)))) {
    lVar16 = param_1 + 0x60;
    cVar7 = FUN_145e36cac();
    if (cVar7 != '\0') {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = *(longlong **)(param_1 + 0x78);
      }
      lVar9 = (**(code **)(*plVar12 + 0x20))();
      if (lVar9 != 0) {
        if (*(char *)(lVar9 + 0x148) == '\x01') {
          lVar13 = (longlong)*(int *)(*(longlong *)(lVar9 + 0xa0) + 0x120);
          if (lVar13 != 0) {
            lVar21 = *(longlong *)(*(longlong *)(lVar9 + 0xa0) + 0x118);
            piVar18 = (int *)(lVar21 + 0x108);
            lVar14 = 0;
            uVar10 = 0;
            do {
              if (*piVar18 == *(int *)(param_1 + 100)) {
                lVar21 = lVar21 - lVar14;
                lVar13 = lVar21 + 0x10;
                if (lVar13 == 0) goto LAB_143db84a7;
                lVar21 = lVar21 + 0x18;
                goto LAB_143db85c9;
              }
              lVar14 = lVar14 + -0x150;
              piVar18 = piVar18 + 0x54;
            } while (lVar13 * -0x150 - lVar14 != 0);
            goto LAB_143db84a9;
          }
        }
        else if (*(longlong *)(param_1 + 0xb0) != 0) {
          lVar21 = param_1 + 0xb0;
          if ((longlong)*(int *)(param_1 + 200) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            lVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar14) == 0) goto LAB_143db84a7;
              lVar14 = lVar14 + 8;
            } while ((longlong)*(int *)(param_1 + 200) * 8 != lVar14);
          }
LAB_143db85c9:
          if (*(longlong *)(param_1 + 0x80) == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)(param_1 + 0x88);
          }
          puVar1 = (undefined8 *)(param_1 + 400);
          local_2f9 = *(char *)(lVar9 + 0x148);
          lVar14 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar1);
          if (lVar14 != 0) {
            cVar7 = *(char *)(lVar14 + 0x148);
            if (*(char *)(param_1 + 0x1c1) == -1) {
LAB_143db869c:
              local_2f8 = 0;
            }
            else {
              if (*(longlong *)(param_1 + 0xa0) == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined8 *)(param_1 + 0xa8);
              }
              uVar10 = FUN_143db65c0(lVar21,uVar10);
              if ((char)uVar10 == '\0') goto LAB_143db84a7;
              if ((*(char *)(param_1 + 0x1c1) == -1) || (*(char *)(lVar14 + 0x147) != '\x01'))
              goto LAB_143db869c;
              lVar19 = (longlong)*(int *)(*(longlong *)(lVar14 + 0xa0) + 0x120);
              if (lVar19 == 0) {
                lVar15 = 0;
              }
              else {
                lVar4 = *(longlong *)(*(longlong *)(lVar14 + 0xa0) + 0x118);
                lVar15 = 0;
                lVar20 = 0;
                do {
                  if (*(char *)(lVar4 + 0x10d + lVar20) == *(char *)(param_1 + 0x1c1)) {
                    lVar15 = lVar4 + lVar20 + 0x10;
                    break;
                  }
                  lVar20 = lVar20 + 0x150;
                } while (lVar19 * 0x150 - lVar20 != 0);
              }
              local_2f8 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),lVar15 == 0);
            }
            if (cVar7 != '\0') {
              local_2c4[1] = 0xffffffff;
              cVar8 = FUN_1412e0532(lVar14,lVar21,local_2c4 + 1,local_2f8);
              if (cVar8 == '\0') goto LAB_143db84a7;
            }
            if (lVar13 == 0) {
              puVar11 = (uint *)(param_1 + 0x1cc);
            }
            else {
              if ((*(longlong *)(param_1 + 0x90) != 0) &&
                 (plVar12 = *(longlong **)(param_1 + 0x98), plVar12 != (longlong *)0x0)) {
                lVar19 = (**(code **)(*plVar12 + 0x10))(plVar12,(int)*(char *)(param_1 + 0x1c0));
                if (lVar19 != 0) {
                  if (*(longlong *)(param_1 + 0x90) == 0) {
                    plVar12 = (longlong *)0x0;
                  }
                  else {
                    plVar12 = *(longlong **)(param_1 + 0x98);
                  }
                  cVar8 = (**(code **)(*plVar12 + 0x30))(plVar12,(int)*(char *)(param_1 + 0x1c0));
                  if (cVar8 != '\0') {
                    if (*(longlong *)(param_1 + 0x90) == 0) {
                      plVar12 = (longlong *)0x0;
                    }
                    else {
                      plVar12 = *(longlong **)(param_1 + 0x98);
                    }
                    (**(code **)(*plVar12 + 0x50))(plVar12,(int)*(char *)(param_1 + 0x1c0),lVar13,1)
                    ;
                    FUN_141069b66(lVar9,param_1 + 100,0xffffffff);
                    goto LAB_143db8798;
                  }
                }
                goto LAB_143db84a7;
              }
LAB_143db8798:
              puVar11 = (uint *)(lVar13 + 0xe8);
            }
            uVar2 = *puVar11;
            uVar3 = *(uint *)(param_1 + 0x1c4);
            uVar5 = uVar2;
            if (uVar3 < uVar2) {
              uVar5 = uVar3;
            }
            if (uVar3 == 0) {
              uVar5 = uVar2;
            }
            local_148[0] = 0;
            local_e0 = 0;
            local_d8 = 0x8000000000;
            uStack_d0 = 0xffffffff;
            local_140 = 0;
            uStack_138 = 0;
            local_130 = 0;
            uStack_128 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_100 = 0;
            uStack_f8 = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            local_88 = 0xf;
            local_80 = 1;
            local_7c = 0;
            uStack_74 = 0;
            local_58 = 0;
            local_68 = (undefined8 *)0x0;
            uStack_60 = 0;
            local_50 = -1;
            local_4c = 0xff00;
            uVar6 = (undefined3)(uVar5 >> 8);
            local_2fa = cVar7;
            local_2f4 = uVar5;
            local_2f0 = puVar1;
            if (lVar13 == 0) {
              local_310 = *(int *)(param_1 + 0x1c8);
              local_2c4[0] = DAT_14c763998;
              local_318 = (undefined8 *)CONCAT71(local_318._1_7_,*(undefined1 *)(param_1 + 0x1d0));
              DAT_14c763998 = DAT_14c763998 + 1;
              local_308 = uVar5;
              FUN_141894808(local_2c4 + 1,lVar14,local_2c4,lVar21);
              FUN_1418948b2(local_148,local_2c4 + 1);
              uVar17 = (ulonglong)CONCAT31(uVar6,local_2fa);
              if (local_1e0 != (undefined8 *)0x0) {
                (**(code **)*local_1e0)(local_1e0,1);
              }
              FUN_140368b56(local_2b8);
            }
            else {
              FUN_1488cbebc(local_148,lVar13);
              if (uVar5 != uVar2) {
                uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
                local_50 = DAT_14c763998;
                DAT_14c763998 = DAT_14c763998 + 1;
              }
              local_4c = CONCAT11(0xff,(byte)local_4c & 0xfe);
              uVar17 = (ulonglong)CONCAT31(uVar6,local_2fa);
              if (*(uint *)(param_1 + 0x1c8) != 0) {
                uStack_60 = CONCAT44(uStack_60._4_4_ & ~*(uint *)(param_1 + 0x1c8),
                                     (undefined4)uStack_60);
              }
            }
            if ((char)uVar17 == '\0') {
LAB_143db8981:
              cVar7 = local_2f9;
              if (local_2f9 != '\0') {
                if (*(longlong *)(param_1 + 0x70) == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = *(undefined8 *)(param_1 + 0x78);
                }
                cVar8 = FUN_14119e7cc(lVar9,param_1 + 100,uVar10,local_2f4);
                if (cVar8 == '\0') goto LAB_143db8a02;
              }
              FUN_14154dd46(local_2c4 + 1,lVar16);
              if ((char)uVar17 == '\0') {
                FUN_145e36b1e(lVar16);
                *local_2f0 = local_190[0];
                if (DAT_14c950c29 == 1) {
                  if (local_2a0 == 0) {
                    local_2a0 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                  }
                }
                *(longlong *)(param_1 + 0x80) = local_2a0;
                *(undefined8 *)(param_1 + 0x88) = local_298;
                FUN_1407b25f0(param_1 + 0xb0,&local_140);
                *(uint *)(param_1 + 0x1c4) = (uint)(byte)local_4c;
                *(uint *)(param_1 + 0x1c8) = uStack_60._4_4_;
                *(uint *)(param_1 + 0x1cc) = local_2f4;
                *(undefined1 *)(param_1 + 0x60) = 0xf;
                FUN_1488d8402(param_1);
                cVar7 = local_2f9;
              }
              else if (*(char *)(param_1 + 0x1c1) != -1) {
                FUN_145e36b1e(lVar16);
                local_2d8 = local_2a0;
                if ((local_2a0 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                local_2d0 = local_298;
                local_2e8 = local_280;
                if ((local_280 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                local_2e0 = local_278;
                local_2c4[0] = local_50;
                local_318 = local_190;
                local_310 = (int)local_15f;
                FUN_143db6682(param_1,local_2c4,&local_2e8,&local_2d8);
                cVar7 = local_2f9;
              }
              if (cVar7 == '\0') {
                FUN_145e36b1e(lVar16);
                *(int *)(param_1 + 100) = local_2c4[2];
                *(undefined8 *)(param_1 + 0x188) = local_198;
                if (DAT_14c950c29 == 1) {
                  if (local_2b0 == 0) {
                    local_2b0 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                  }
                }
                *(longlong *)(param_1 + 0x70) = local_2b0;
                *(undefined8 *)(param_1 + 0x78) = local_2a8;
                *(uint *)(param_1 + 0x1c4) = local_2f4;
                *(undefined1 *)(param_1 + 0x60) = 6;
                FUN_1488d8402(param_1);
              }
              if (local_170 != 0) {
                FUN_1400020a8();
              }
              FUN_140368b56(local_270);
              uVar10 = CONCAT71((int7)(uVar17 >> 8),1);
            }
            else {
              if (*(longlong *)(param_1 + 0x80) == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined8 *)(param_1 + 0x88);
              }
              FUN_140e30dbe(local_2c4 + 1,local_148);
              local_318 = (undefined8 *)CONCAT44(local_318._4_4_,0xffffffff);
              lVar21 = FUN_143d9f6d8(lVar14,local_2c4 + 1,uVar10,local_2f8);
              if (local_1e0 != (undefined8 *)0x0) {
                (**(code **)*local_1e0)(local_1e0,1);
              }
              FUN_140368b56(local_2b8);
              if (lVar21 != 0) goto LAB_143db8981;
LAB_143db8a02:
              uVar10 = 0;
            }
            if (local_68 != (undefined8 *)0x0) {
              (**(code **)*local_68)(local_68,1);
            }
            FUN_140368b56(&local_140);
            goto LAB_143db84a9;
          }
        }
      }
    }
  }
LAB_143db84a7:
  uVar10 = 0;
LAB_143db84a9:
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 143db8c86 FUN_143db8c86 body=601 status=ok
// SIG undefined FUN_143db8c86(void)

undefined4 FUN_143db8c86(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  longlong local_248;
  undefined1 local_240 [8];
  undefined1 local_238 [216];
  undefined8 *local_160;
  undefined1 local_140 [8];
  undefined1 local_138 [216];
  undefined8 *local_60;
  uint local_54;
  byte local_44;
  undefined1 local_43;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1d8);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143db8cf5;
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1dc) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      cVar2 = FUN_145e36cac(param_1 + 0x60);
      if (cVar2 != '\0') {
        local_248 = 0;
        if (*(longlong *)(param_1 + 0x70) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0x78);
        }
        lVar6 = FUN_1488c6656(uVar4,param_1 + 100,&local_248);
        uVar3 = 0;
        if ((lVar6 != 0) && (uVar3 = 0, local_248 != 0)) {
          uVar3 = *(undefined4 *)(lVar6 + 0xe8);
          FUN_140e30dbe(local_140,lVar6);
          local_43 = 0xff;
          local_44 = local_44 & 0xfe;
          if (*(uint *)(param_1 + 0x1c4) != 0) {
            local_54 = local_54 & ~*(uint *)(param_1 + 0x1c4);
          }
          if (*(longlong *)(param_1 + 0x80) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(param_1 + 0x88);
          }
          FUN_140e30dbe(local_240,local_140);
          cVar2 = (**(code **)(*plVar5 + 0x68))(plVar5,local_240);
          if (local_160 != (undefined8 *)0x0) {
            (**(code **)*local_160)(local_160,1);
          }
          FUN_140368b56();
          if (cVar2 == '\0') {
            if (*(longlong *)(param_1 + 0x80) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(param_1 + 0x88);
            }
            lVar6 = (**(code **)(*plVar5 + 0x48))(plVar5,lVar6);
            if (lVar6 != 0) {
              if (*(longlong *)(param_1 + 0x80) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined8 *)(param_1 + 0x88);
              }
              FUN_140e30dbe(local_240,local_140);
              local_258 = 0xffffffff;
              FUN_143d9f6d8(lVar6,local_240,uVar4,0);
              if (local_160 != (undefined8 *)0x0) {
                (**(code **)*local_160)(local_160,1);
              }
              FUN_140368b56(local_238);
            }
          }
          if (*(longlong *)(param_1 + 0x70) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(param_1 + 0x78);
          }
          uVar3 = FUN_14119e7cc(local_248,param_1 + 100,uVar4,uVar3);
          if (local_60 != (undefined8 *)0x0) {
            (**(code **)*local_60)(local_60,1);
          }
          FUN_140368b56(local_138);
        }
        goto LAB_143db8cf5;
      }
    }
  }
  uVar3 = 0;
LAB_143db8cf5:
  if ((local_40 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db8ee0 FUN_143db8ee0 body=939 status=ok
// SIG undefined FUN_143db8ee0(void)

ulonglong FUN_143db8ee0(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_3a8 [36];
  int local_384;
  undefined1 local_380 [8];
  undefined1 local_378 [108];
  undefined8 local_30c;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined8 *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined1 local_283;
  undefined1 local_280 [256];
  undefined1 local_180 [256];
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar2 = *(uint *)(param_1 + 0x1d8);
    uVar11 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143db8f59;
    lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar10 != 0) &&
       (((*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x1dc) &&
         ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) && (cVar4 = FUN_145e36cac(), cVar4 != '\0'))))
    {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x78);
      }
      lVar10 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1 + 0x188);
      if (lVar10 != 0) {
        lVar7 = (longlong)*(int *)(*(longlong *)(lVar10 + 0xa0) + 0x120);
        if (lVar7 != 0) {
          lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + 0x118);
          lVar12 = 0;
          uVar11 = 0;
          do {
            if (*(int *)(lVar3 + 0x108 + lVar12) == *(int *)(param_1 + 100)) {
              lVar7 = lVar12 + lVar3 + 0x10;
              if (lVar7 == 0) goto LAB_143db8f57;
              if (*(char *)(param_1 + 0x1c0) != -1) {
                if (*(longlong *)(param_1 + 0x90) == 0) {
                  plVar6 = (longlong *)0x0;
                }
                else {
                  plVar6 = *(longlong **)(param_1 + 0x98);
                }
                lVar5 = (**(code **)(*plVar6 + 0x10))();
                if (lVar5 == 0) goto LAB_143db8f57;
                if (*(longlong *)(param_1 + 0x90) == 0) {
                  plVar6 = (longlong *)0x0;
                }
                else {
                  plVar6 = *(longlong **)(param_1 + 0x98);
                }
                cVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,(int)*(char *)(param_1 + 0x1c0));
                if (cVar4 == '\0') goto LAB_143db8f57;
                if (*(longlong *)(param_1 + 0x90) == 0) {
                  plVar6 = (longlong *)0x0;
                }
                else {
                  plVar6 = *(longlong **)(param_1 + 0x98);
                }
                (**(code **)(*plVar6 + 0x50))(plVar6,(int)*(char *)(param_1 + 0x1c0),lVar7,1);
                FUN_141069b66(lVar10,(int *)(param_1 + 100),0xffffffff);
              }
              FUN_141069dd4(param_1 + 0x30);
              if (*(int *)(param_1 + 0x1dc) == 0) {
LAB_143db9277:
                uVar8 = 0;
              }
              else {
                uVar2 = *(uint *)(param_1 + 0x1d8);
                uVar8 = 0;
                if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                  puVar9 = (undefined8 *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if ((puVar9 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x1dc) ||
                      ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143db9277;
                  uVar8 = *puVar9;
                }
              }
              lVar10 = FUN_146216772(uVar8);
              if (lVar10 != 0) {
                local_384 = (int)*(char *)(param_1 + 0x1c0);
                memset(local_380,0,0x100);
                local_30c = 0xffffffff00000080;
                local_2e8 = 0;
                uStack_2e0 = 0;
                local_2d8 = 0;
                uStack_2d0 = 0;
                local_2c8 = 0;
                local_2c0 = 0xf;
                local_2b8 = 1;
                local_2b4 = 0;
                uStack_2ac = 0;
                local_2a0 = (undefined8 *)0x0;
                uStack_298 = 0;
                local_290 = 0;
                local_288 = 0xffffffff;
                local_283 = 0xff;
                FUN_140e30dbe(local_280,lVar7);
                FUN_140e30dbe(local_180,local_380);
                local_80 = 0;
                uStack_78 = 0;
                local_70 = local_384;
                local_6c = 0xffffffff;
                local_68 = 10;
                FUN_145d0c37c(lVar10,local_280);
                FUN_146553afa(local_280);
                if (local_2a0 != (undefined8 *)0x0) {
                  (**(code **)*local_2a0)(local_2a0,1);
                }
                FUN_140368b56(local_378);
              }
              if (*(longlong *)(param_1 + 0x70) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)(param_1 + 0x78);
              }
              cVar4 = FUN_1488d8671(lVar7,uVar8);
              if (cVar4 == '\0') goto LAB_143db8f57;
              pbVar1 = (byte *)(lVar3 + 0x10c + lVar12);
              *pbVar1 = *pbVar1 | 0x80;
              lVar10 = *(longlong *)(lVar3 + 0x100 + lVar12);
              uVar11 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
              if (lVar10 != 0) {
                if (*(longlong *)(param_1 + 0x70) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(param_1 + 0x78);
                }
                FUN_1488c604a(lVar10,uVar8);
              }
              break;
            }
            lVar12 = lVar12 + 0x150;
          } while (lVar7 * 0x150 - lVar12 != 0);
          goto LAB_143db8f59;
        }
      }
    }
  }
LAB_143db8f57:
  uVar11 = 0;
LAB_143db8f59:
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 143db928c FUN_143db928c body=899 status=ok
// SIG undefined FUN_143db928c(void)

undefined8 FUN_143db928c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_4a8 [40];
  undefined1 local_480 [8];
  undefined1 local_478 [108];
  undefined8 local_40c;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8;
  undefined8 local_3b4;
  undefined8 uStack_3ac;
  undefined8 *local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined1 local_383;
  undefined1 local_380 [8];
  undefined1 local_378 [108];
  undefined8 local_30c;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined8 *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined1 local_283;
  undefined1 local_280 [256];
  undefined1 local_180 [256];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1d8);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143db9305;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1dc) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      cVar2 = FUN_145e36cac(param_1 + 0x60);
      if (cVar2 != '\0') {
        lVar3 = FUN_144837462(DAT_14cb84af8,param_1 + 0x198);
        if (lVar3 != 0) {
          if (*(longlong *)(param_1 + 0x70) == 0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = *(longlong **)(param_1 + 0x78);
          }
          lVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,(undefined8 *)(param_1 + 0x188));
          if (lVar4 != 0) {
            if (*(longlong *)(param_1 + 0x80) == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = *(longlong **)(param_1 + 0x88);
            }
            lVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1 + 400);
            if (lVar4 != 0) {
              if (*(longlong *)(param_1 + 0x70) == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = *(undefined8 *)(param_1 + 0x78);
              }
              if (*(longlong *)(param_1 + 0x80) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)(param_1 + 0x88);
              }
              cVar2 = FUN_1488d87b3(lVar3,uVar5,uVar8,param_1 + 100);
              if (cVar2 != '\0') {
                FUN_141165eb6(param_1 + 0x48);
                if (*(int *)(param_1 + 0x1dc) == 0) {
LAB_143db9609:
                  uVar5 = 0;
                }
                else {
                  uVar1 = *(uint *)(param_1 + 0x1d8);
                  uVar5 = 0;
                  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                    puVar7 = (undefined8 *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                    if ((puVar7 == (undefined8 *)0x0) ||
                       ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x1dc) ||
                        ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_143db9609;
                    uVar5 = *puVar7;
                  }
                }
                lVar3 = FUN_146216772(uVar5);
                uVar5 = 1;
                if (lVar3 != 0) {
                  memset(local_380,0,0x100);
                  local_30c = 0xffffffff00000080;
                  local_2e8 = 0;
                  uStack_2e0 = 0;
                  local_2d8 = 0;
                  uStack_2d0 = 0;
                  local_2c8 = 0;
                  local_2c0 = 0xf;
                  local_2b8 = 1;
                  local_2b4 = 0;
                  uStack_2ac = 0;
                  local_2a0 = (undefined8 *)0x0;
                  uStack_298 = 0;
                  local_290 = 0;
                  local_288 = 0xffffffff;
                  local_283 = 0xff;
                  memset(local_480,0,0x100);
                  local_40c = 0xffffffff00000080;
                  local_3e8 = 0;
                  uStack_3e0 = 0;
                  local_3d8 = 0;
                  uStack_3d0 = 0;
                  local_3c8 = 0;
                  local_3c0 = 0xf;
                  local_3b8 = 1;
                  local_3b4 = 0;
                  uStack_3ac = 0;
                  local_3a0 = (undefined8 *)0x0;
                  uStack_398 = 0;
                  local_390 = 0;
                  local_388 = 0xffffffff;
                  local_383 = 0xff;
                  FUN_140e30dbe(local_280,local_480);
                  FUN_140e30dbe(local_180,local_380);
                  local_80 = *(undefined8 *)(param_1 + 0x188);
                  local_78 = 0;
                  local_70 = 0xffffffffffffffff;
                  local_68 = 0xb;
                  FUN_145d0c37c(lVar3,local_280);
                  FUN_146553afa(local_280);
                  if (local_3a0 != (undefined8 *)0x0) {
                    (**(code **)*local_3a0)(local_3a0,1);
                  }
                  FUN_140368b56(local_478);
                  if (local_2a0 != (undefined8 *)0x0) {
                    (**(code **)*local_2a0)(local_2a0,1);
                  }
                  FUN_140368b56(local_378);
                  uVar5 = 1;
                }
                goto LAB_143db9305;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_143db9305:
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db9610 FUN_143db9610 body=1871 status=ok
// SIG undefined FUN_143db9610(void)

ulonglong FUN_143db9610(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_2b8 [32];
  int local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  code **local_260;
  code *local_258;
  code *local_250;
  code *local_248;
  longlong *local_240;
  longlong *local_238;
  int *local_230;
  undefined4 local_224;
  code *local_220;
  int local_218;
  undefined4 uStack_214;
  undefined8 *local_140;
  undefined1 local_120 [32];
  void *local_100;
  int local_f8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar13 = *(uint *)(param_1 + 0x1d8);
    uVar14 = 0;
    if (((int)uVar13 < 0) || (DAT_14c9647dc <= (int)uVar13)) goto LAB_143db9681;
    lVar11 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    if ((lVar11 != 0) &&
       (((*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x1dc) &&
         ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) && (cVar3 = FUN_145e36cac(), cVar3 != '\0'))))
    {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x78);
      }
      lVar11 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x188);
      if (lVar11 != 0) {
        lVar9 = (longlong)*(int *)(*(longlong *)(lVar11 + 0xa0) + 0x120);
        if (lVar9 != 0) {
          lVar2 = *(longlong *)(*(longlong *)(lVar11 + 0xa0) + 0x118);
          lVar16 = 0;
          uVar14 = 0;
          do {
            if (*(int *)(lVar2 + 0x108 + lVar16) == *(int *)(param_1 + 100)) {
              lVar9 = lVar2 + lVar16 + 0x10;
              if (lVar9 == 0) goto LAB_143db967f;
              bVar1 = *(byte *)(param_1 + 0x1c4);
              if (*(int *)(param_1 + 0x198) == 0) {
LAB_143db977e:
                plVar5 = (longlong *)0x0;
              }
              else {
                plVar5 = (longlong *)0x0;
                if ((*(int *)(param_1 + 0x19c) != 0) && (*(int *)(param_1 + 0x198) != DAT_14c948000)
                   ) {
                  if (DAT_14cb84940 == 0) goto LAB_143db977e;
                  plVar5 = (longlong *)FUN_144837462(DAT_14cb84940,param_1 + 0x198);
                }
              }
              if (plVar5 == (longlong *)0x0 && bVar1 != 3) goto LAB_143db967f;
              local_230 = (int *)(param_1 + 100);
              FUN_1406fd608(local_120);
              if (bVar1 == 3) {
                uVar14 = 1;
                if (local_f8 < 1) goto LAB_143db9c90;
                FUN_1488cba5e();
                goto LAB_143db9afe;
              }
              if (1 < bVar1) {
                uVar14 = 1;
                if (local_f8 == 0) goto LAB_143db9c90;
                lVar12 = 0;
                goto LAB_143db98bb;
              }
              if (local_f8 == 0) goto LAB_143db9813;
              lVar12 = 0;
              goto LAB_143db9800;
            }
            lVar16 = lVar16 + 0x150;
          } while (lVar9 * 0x150 - lVar16 != 0);
          goto LAB_143db9681;
        }
      }
    }
  }
LAB_143db967f:
  uVar14 = 0;
  goto LAB_143db9681;
  while (lVar12 = lVar12 + 8, (longlong)local_f8 * 8 != lVar12) {
LAB_143db9800:
    if (*(longlong **)((longlong)local_100 + lVar12) == plVar5) goto LAB_143db9c8d;
  }
LAB_143db9813:
  lVar12 = plVar5[8];
  if (lVar12 == 0) {
    FUN_1406ef318();
    lVar12 = FUN_14477b664();
    plVar5[8] = lVar12;
  }
  local_240 = plVar5 + 7;
  plVar15 = local_240;
  if (plVar5[9] == 0) {
    if ((lVar12 != 0) && (*local_240 != 0)) {
      plVar15 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar15 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar3 == '\0')) {
        plVar5[9] = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
        lVar12 = FUN_144aff482(uVar6,local_240);
        plVar5[9] = lVar12;
        if (lVar12 != 0) goto LAB_143db989d;
      }
    }
LAB_143db99bc:
    if (bVar1 == 1) {
      local_220 = (code *)0x0;
      local_218 = local_f8;
      if ((longlong)local_f8 != 0) {
        FUN_1487630d4(&local_220,local_f8,0);
        memcpy(local_220,local_100,(longlong)local_f8 << 3);
        local_248 = local_220;
        local_238 = (longlong *)(longlong)local_218;
        if (local_238 != (longlong *)0x0) {
          local_238 = (longlong *)((longlong)local_238 << 3);
          plVar15 = (longlong *)0x0;
          do {
            plVar10 = *(longlong **)(local_248 + (longlong)plVar15);
            if (plVar10 != (longlong *)0x0) {
              local_240 = (longlong *)(**(code **)(*plVar10 + 8))(plVar10);
              lVar12 = (**(code **)(*plVar5 + 8))(plVar5);
              if (((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= (int)local_240[7])) &&
                 (*(longlong *)(local_240[6] + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                  lVar12 + 0x30)) {
                FUN_1488cba04(local_120,plVar10);
              }
            }
            plVar15 = plVar15 + 1;
          } while (local_238 != plVar15);
        }
        local_248 = local_220;
        if (local_220 != (code *)0x0) {
          FUN_1400020a8(local_220);
        }
      }
    }
    FUN_1488cb966(local_120,plVar5);
LAB_143db9afe:
    uVar13 = (uint)*(char *)(lVar2 + 0x10d + lVar16);
    uVar14 = (ulonglong)uVar13;
    if (uVar13 == 0xffffffff) {
      uVar17 = CONCAT71((int7)((ulonglong)plVar5 >> 8),0xff);
    }
    else {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x78);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_220);
      plVar5 = (longlong *)CONCAT44(uStack_214,local_218);
      uVar17 = CONCAT71((int7)((ulonglong)&local_220 >> 8),0xff);
      if (plVar5 != (longlong *)0x0 && local_220 != (code *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x80))(plVar5,uVar13);
        uVar17 = (ulonglong)uVar4;
        FUN_141069b66(lVar11,local_230,0xffffffff);
        plVar5 = (longlong *)0x0;
        if (local_220 != (code *)0x0) {
          plVar5 = (longlong *)CONCAT44(uStack_214,local_218);
        }
        (**(code **)(*plVar5 + 0x50))(plVar5,uVar13,lVar9,0);
      }
    }
    local_290 = *(undefined4 *)(lVar2 + 0xfc + lVar16);
    local_224 = *(undefined4 *)(lVar2 + 0x108 + lVar16);
    local_298 = CONCAT31(local_298._1_3_,*(undefined1 *)(lVar2 + 0x10c + lVar16));
    local_288 = 1;
    FUN_141894808(&local_220,*(undefined8 *)(lVar2 + 0x100 + lVar16),&local_224,local_120);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x78);
    }
    cVar3 = FUN_14119e7cc(lVar11,local_230,uVar6,0);
    if (cVar3 == '\0') {
      if (local_140 != (undefined8 *)0x0) {
        (**(code **)*local_140)(local_140,1);
      }
      FUN_140368b56(&local_218);
      uVar14 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x78);
      }
      local_298 = *local_230;
      local_290 = CONCAT31(local_290._1_3_,1);
      FUN_1488c66f0(uVar6,&local_220,uVar13,uVar17 & 0xffffffff);
      if (local_140 != (undefined8 *)0x0) {
        (**(code **)*local_140)(local_140,1);
      }
      FUN_140368b56(&local_218);
LAB_143db9c8d:
      uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
    }
  }
  else {
LAB_143db989d:
    if (*(longlong *)(param_1 + 0x70) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x78);
    }
    pcVar7 = (code *)(**(code **)(*plVar10 + 0x28))();
    uVar14 = CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
    if (pcVar7 != (code *)0x0) {
      if (DAT_14cac9ca8 == 0) {
        local_260 = &local_220;
        local_220 = FUN_141030f22;
        local_250 = FUN_14081d0ea;
        local_258 = FUN_14081d0ea;
        local_268 = &LAB_1478c0a72;
        local_270 = &LAB_1417b2375;
        local_278 = L"Engine";
        local_280 = 0x1000000000;
        local_288 = 0x10000004;
        local_290 = 8;
        local_298 = 0x390;
        local_248 = pcVar7;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        pcVar7 = local_248;
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(pcVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        lVar12 = plVar5[8];
        local_248 = pcVar7;
        if (lVar12 == 0) {
          uVar6 = FUN_1406ef318();
          lVar12 = FUN_14477b664(uVar6);
          plVar5[8] = lVar12;
        }
        lVar8 = plVar5[9];
        if (((lVar8 == 0) && (lVar8 = 0, lVar12 != 0)) && (*local_240 != 0)) {
          local_238 = *(longlong **)(lVar12 + 0xb8);
          if ((local_238 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*local_238 + 0x108))(), cVar3 == '\0')) {
            lVar8 = 0;
          }
          else {
            uVar6 = (**(code **)(*local_238 + 0x110))();
            lVar8 = FUN_144aff482(uVar6,local_240);
          }
          plVar5[9] = lVar8;
        }
        cVar3 = FUN_1409500c0(lVar8,local_248);
        if (cVar3 != '\0') goto LAB_143db99bc;
      }
    }
  }
  goto LAB_143db9c90;
  while (lVar12 = lVar12 + 8, (longlong)local_f8 * 8 != lVar12) {
LAB_143db98bb:
    if (*(longlong **)((longlong)local_100 + lVar12) == plVar5) {
      FUN_1488cba04(local_120,plVar5);
      goto LAB_143db9afe;
    }
  }
LAB_143db9c90:
  FUN_140368b56(local_120);
LAB_143db9681:
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 143db9d60 FUN_143db9d60 body=394 status=ok
// SIG undefined FUN_143db9d60(void)

bool FUN_143db9d60(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_178 [32];
  uint local_158;
  undefined4 local_150;
  undefined4 local_148;
  int local_134;
  undefined1 local_130 [8];
  undefined1 local_128 [216];
  undefined8 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1d8);
    bVar7 = false;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143db9dcc;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1dc) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      cVar2 = FUN_145e36cac();
      if (cVar2 != '\0') {
        if (*(longlong *)(param_1 + 0x80) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x88);
        }
        lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1 + 400);
        if (lVar3 != 0) {
          local_134 = *(int *)(param_1 + 0x68);
          if (*(int *)(param_1 + 0x68) == -1) {
            local_134 = DAT_14c763998;
            DAT_14c763998 = DAT_14c763998 + 1;
          }
          if (*(longlong *)(param_1 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(param_1 + 0x88);
          }
          uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x1c4)) &
                  0xffffffffffffff08;
          local_150 = *(undefined4 *)(param_1 + 0x1c8);
          local_148 = *(undefined4 *)(param_1 + 0x1cc);
          local_158 = CONCAT31(local_158._1_3_,*(undefined1 *)(param_1 + 0x1c4)) & 0xffffff93;
          FUN_141894808(local_130,lVar3,&local_134,param_1 + 0xb0);
          local_158 = 0xffffffff;
          lVar3 = FUN_143d9f6d8(lVar3,local_130,uVar6,
                                CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 3) & 0xffffffff);
          if (local_50 != (undefined8 *)0x0) {
            (**(code **)*local_50)(local_50,1);
          }
          FUN_140368b56(local_128);
          bVar7 = lVar3 != 0;
          goto LAB_143db9dcc;
        }
      }
    }
  }
  bVar7 = false;
LAB_143db9dcc:
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143db9f24 FUN_143db9f24 body=11 status=ok
// SIG undefined FUN_143db9f24(void)

void FUN_143db9f24(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



// FUNCTION 143dba01e FUN_143dba01e body=7692 status=ok
// SIG undefined FUN_143dba01e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dba01e(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  double **ppdVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  double **ppdVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  double *pdVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int *piVar27;
  ulonglong uVar28;
  longlong *plVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  int iVar36;
  double *pdVar37;
  ulonglong uVar38;
  uint uVar39;
  longlong lVar40;
  double dVar41;
  undefined8 *puVar42;
  bool bVar43;
  uint uVar44;
  undefined8 *puVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auStack_468 [32];
  longlong local_448;
  double *local_440;
  double *local_438;
  ulonglong local_430;
  double *local_428;
  longlong *local_420;
  longlong *local_418;
  longlong *local_410;
  undefined8 *local_408;
  undefined8 *local_400;
  longlong local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined1 local_3d0;
  double local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  uint local_3ac;
  double *local_3a8;
  undefined8 local_3a0;
  double **local_1a8;
  undefined8 local_1a0;
  uint local_198 [2];
  uint *local_190;
  int local_188;
  uint uStack_184;
  undefined8 uStack_180;
  undefined1 local_178 [64];
  undefined1 *local_138;
  uint local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  int local_f4;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_468;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_418 = (longlong *)(param_1 + 0x88);
  iVar30 = *(int *)(param_1 + 0x94);
  FUN_140f46e87(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((iVar30 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
    FUN_1488dcf78(local_418);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  plVar12 = *(longlong **)(param_1 + 0xa0);
  if (plVar12 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    LOCK();
    plVar29 = plVar12 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_420 = (longlong *)(param_1 + 0xa8);
  iVar30 = *(int *)(param_1 + 0xb4);
  FUN_140f46ebd(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((iVar30 < 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    FUN_141897d74(local_420,0);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  plVar12 = *(longlong **)(param_1 + 0xc0);
  if (plVar12 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    LOCK();
    plVar29 = plVar12 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  iVar30 = *(int *)(param_1 + 0xf4);
  FUN_140b343a6(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((iVar30 < 0) && (*(int *)(param_1 + 0xf4) != 0)) {
    FUN_1488dcfa8(param_1 + 0xe8);
  }
  local_428 = (double *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) < 0) {
    FUN_1403de8ba(local_428,0);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) < 0) {
    FUN_1403de8ba(param_1 + 0x108,0);
  }
  local_448 = param_1;
  if ((longlong)*(int *)(param_1 + 0xd0) == 0) goto LAB_143dbbd57;
  local_410 = (longlong *)(param_1 + 0x60);
  lVar23 = 0;
  uVar44 = 0;
  iVar30 = 0;
  do {
    lVar40 = *(longlong *)(*(longlong *)(param_1 + 200) + lVar23);
    if (lVar40 != 0) {
      uVar44 = uVar44 + *(int *)(lVar40 + 0x20);
      iVar30 = iVar30 + *(int *)(lVar40 + 0x30);
    }
    lVar23 = lVar23 + 8;
  } while ((longlong)*(int *)(param_1 + 0xd0) * 8 != lVar23);
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar23 = 0;
    do {
      lVar40 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar23);
      if (lVar40 != 0) {
        uVar44 = uVar44 + 1;
        iVar30 = iVar30 + *(int *)(lVar40 + 0x20);
      }
      lVar23 = lVar23 + 8;
    } while ((longlong)*(int *)(param_1 + 0xe0) * 8 != lVar23);
  }
  if (((int)uVar44 < 1) || (iVar30 < 1)) goto LAB_143dbbd57;
  iVar18 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar18 + uVar44;
  if ((uint)(*(int *)(param_1 + 0x94) - iVar18) < uVar44) {
    FUN_141897ec2(local_418,iVar18);
  }
  lVar23 = local_448;
  FUN_143dbc863((longlong)iVar18 * 0x90 + *(longlong *)(local_448 + 0x88),uVar44);
  if (*(int *)(lVar23 + 0xb4) < iVar30) {
    FUN_141897d74(local_420,iVar30);
  }
  uVar38 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = (undefined1 *)0x0;
  local_e0 = 0;
  uVar44 = 0;
  lVar23 = local_448;
  if ((longlong)*(int *)(local_448 + 0xd0) != 0) {
    pdVar37 = *(double **)(local_448 + 200);
    local_440 = pdVar37 + *(int *)(local_448 + 0xd0);
    uVar44 = 0;
    uVar38 = 0;
    do {
      local_3c8 = *pdVar37;
      if (local_3c8 != 0.0) {
        local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,(int)uVar38);
        local_3a0 = (longlong **)&local_3ac;
        local_438 = pdVar37;
        local_3ac = uVar44;
        local_3a8 = &local_3c8;
        FUN_141897fd2(&local_d8,&local_3f0,&local_3a8);
        local_3a0 = &local_3b8;
        local_3a8 = &local_3c8;
        FUN_141897fd2(&local_128,&local_3f0,&local_3a8);
        iVar30 = *(int *)((longlong)local_3c8 + 0x20);
        if ((longlong)iVar30 != 0) {
          lVar40 = *(longlong *)((longlong)local_3c8 + 0x18);
          lVar20 = (longlong)(int)uVar38 * 0x90;
          lVar33 = 0;
          do {
            lVar24 = *(longlong *)(lVar23 + 0x88);
            *(undefined8 *)(lVar24 + 0x10 + lVar20) = *(undefined8 *)(lVar40 + 0x28 + lVar33);
            puVar45 = (undefined8 *)(lVar40 + 0x18 + lVar33);
            uVar7 = puVar45[1];
            *(undefined8 *)(lVar24 + lVar20) = *puVar45;
            ((undefined8 *)(lVar24 + lVar20))[1] = uVar7;
            puVar45 = (undefined8 *)(lVar40 + 0x30 + lVar33);
            uVar7 = puVar45[1];
            puVar42 = (undefined8 *)(lVar24 + 0x18 + lVar20);
            *puVar42 = *puVar45;
            puVar42[1] = uVar7;
            *(undefined8 *)(lVar24 + 0x28 + lVar20) = *(undefined8 *)(lVar40 + 0x40 + lVar33);
            fVar5 = *(float *)(lVar40 + 0x48 + lVar33);
            *(float *)(lVar24 + 0x30 + lVar20) = fVar5;
            dVar41 = *(double *)(lVar24 + 8 + lVar20);
            dVar51 = (double)fVar5;
            dVar6 = dVar41 - dVar51;
            dVar50 = *(double *)(lVar24 + lVar20) - dVar51;
            dVar41 = dVar41 + dVar51;
            dVar51 = *(double *)(lVar24 + lVar20) + dVar51;
            if (*(char *)(lVar23 + 0x80) == '\x01') {
              dVar52 = *(double *)(lVar23 + 0x60);
              if (dVar50 <= *(double *)(lVar23 + 0x60)) {
                dVar52 = dVar50;
              }
              dVar50 = dVar52;
              dVar52 = *(double *)(lVar23 + 0x68);
              if (dVar6 <= *(double *)(lVar23 + 0x68)) {
                dVar52 = dVar6;
              }
              dVar6 = *(double *)(lVar23 + 0x70);
              uVar46 = SUB84(dVar6,0);
              uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
              if (dVar6 <= dVar51) {
                uVar46 = SUB84(dVar51,0);
                uVar47 = (undefined4)((ulonglong)dVar51 >> 0x20);
              }
              dVar51 = (double)CONCAT44(uVar47,uVar46);
              dVar6 = *(double *)(lVar23 + 0x78);
              uVar46 = SUB84(dVar6,0);
              uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
              if (dVar6 <= dVar41) {
                uVar46 = SUB84(dVar41,0);
                uVar47 = (undefined4)((ulonglong)dVar41 >> 0x20);
              }
              dVar41 = (double)CONCAT44(uVar47,uVar46);
              dVar6 = dVar52;
            }
            else {
              *(undefined1 *)(lVar23 + 0x80) = 1;
            }
            *(double *)(lVar23 + 0x60) = dVar50;
            *(double *)(lVar23 + 0x68) = dVar6;
            *(double *)(lVar23 + 0x70) = dVar51;
            *(double *)(lVar23 + 0x78) = dVar41;
            lVar20 = lVar20 + 0x90;
            uVar38 = (ulonglong)((int)uVar38 + 1);
            lVar33 = lVar33 + 0x50;
          } while ((longlong)iVar30 * 0x50 != lVar33);
        }
        iVar30 = *(int *)((longlong)local_3c8 + 0x30);
        local_430 = uVar38;
        if ((longlong)iVar30 != 0) {
          lVar40 = *(longlong *)((longlong)local_3c8 + 0x28);
          lVar20 = 0;
          do {
            *(uint *)(lVar40 + 0x20 + lVar20) = uVar44;
            lVar33 = (longlong)*(int *)(lVar40 + 8 + lVar20) + (longlong)(int)local_3b8;
            lVar24 = (longlong)*(int *)(lVar40 + 0x14 + lVar20) + (longlong)(int)local_3b8;
            local_3a8 = (double *)(lVar24 * 0x90 + *(longlong *)(lVar23 + 0x88));
            local_3a0 = (longlong **)CONCAT44(*(undefined4 *)(lVar40 + 0x18 + lVar20),(int)lVar24);
            local_3f0 = (double)(lVar33 * 0x90 + *(longlong *)(lVar23 + 0x88));
            local_3e8 = (double)CONCAT44(*(undefined4 *)(lVar40 + 0xc + lVar20),(int)lVar33);
            iVar18 = *(int *)(lVar23 + 0xb0);
            *(uint *)(lVar23 + 0xb0) = iVar18 + 1U;
            if (*(uint *)(lVar23 + 0xb4) < iVar18 + 1U) {
              FUN_1488dd04a(local_420,iVar18);
            }
            lVar33 = *(longlong *)(lVar23 + 0xa8);
            pdVar37 = (double *)(lVar33 + (longlong)iVar18 * 0x78);
            FUN_140924796(pdVar37,&local_3f0,&local_3a8);
            bVar17 = *(byte *)(lVar33 + 0x20 + (longlong)iVar18 * 0x78);
            if (*(char *)(lVar23 + 0x80) == '\x01') {
              if ((bVar17 & 1) != 0) {
                dVar41 = *(double *)(lVar23 + 0x60);
                uVar46 = SUB84(dVar41,0);
                uVar47 = (undefined4)((ulonglong)dVar41 >> 0x20);
                dVar51 = *(double *)(lVar23 + 0x68);
                uVar48 = SUB84(dVar51,0);
                uVar49 = (undefined4)((ulonglong)dVar51 >> 0x20);
                dVar6 = *pdVar37;
                if (dVar6 <= dVar41) {
                  uVar46 = SUB84(dVar6,0);
                  uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
                }
                *(ulonglong *)(lVar23 + 0x60) = CONCAT44(uVar47,uVar46);
                dVar41 = pdVar37[1];
                if (dVar41 <= dVar51) {
                  uVar48 = SUB84(dVar41,0);
                  uVar49 = (undefined4)((ulonglong)dVar41 >> 0x20);
                }
                *(ulonglong *)(lVar23 + 0x68) = CONCAT44(uVar49,uVar48);
                dVar41 = *(double *)(lVar23 + 0x70);
                uVar46 = SUB84(dVar41,0);
                uVar47 = (undefined4)((ulonglong)dVar41 >> 0x20);
                dVar51 = pdVar37[2];
                if (dVar41 <= dVar51) {
                  uVar46 = SUB84(dVar51,0);
                  uVar47 = (undefined4)((ulonglong)dVar51 >> 0x20);
                }
                *(ulonglong *)(lVar23 + 0x70) = CONCAT44(uVar47,uVar46);
                dVar41 = *(double *)(lVar23 + 0x78);
                uVar46 = SUB84(dVar41,0);
                uVar47 = (undefined4)((ulonglong)dVar41 >> 0x20);
                dVar51 = pdVar37[3];
                if (dVar41 <= dVar51) {
                  uVar46 = SUB84(dVar51,0);
                  uVar47 = (undefined4)((ulonglong)dVar51 >> 0x20);
                }
                *(ulonglong *)(lVar23 + 0x78) = CONCAT44(uVar47,uVar46);
              }
            }
            else if ((bVar17 & 1) != 0) {
              local_410[4] = (longlong)pdVar37[4];
              uVar46 = *(undefined4 *)pdVar37;
              uVar47 = *(undefined4 *)((longlong)pdVar37 + 4);
              uVar48 = *(undefined4 *)(pdVar37 + 1);
              uVar49 = *(undefined4 *)((longlong)pdVar37 + 0xc);
              dVar41 = pdVar37[3];
              local_410[2] = (longlong)pdVar37[2];
              local_410[3] = (longlong)dVar41;
              *(undefined4 *)local_410 = uVar46;
              *(undefined4 *)((longlong)local_410 + 4) = uVar47;
              *(undefined4 *)(local_410 + 1) = uVar48;
              *(undefined4 *)((longlong)local_410 + 0xc) = uVar49;
            }
            lVar20 = lVar20 + 0x24;
            uVar44 = uVar44 + 1;
          } while ((longlong)iVar30 * 0x24 != lVar20);
        }
        if (0 < *(int *)((longlong)local_3c8 + 0x20)) {
          lVar40 = 0;
          do {
            iVar30 = *(int *)(*(longlong *)((longlong)local_3c8 + 0x18) + 0x10 + lVar40 * 0x50);
            if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar30);
            }
            lVar23 = *local_418 + ((longlong)(int)lVar40 + (longlong)(int)local_3b8) * 0x90;
            lVar33 = lVar23 + 0x38;
            lVar20 = *(longlong *)((longlong)local_3c8 + 0x18) + lVar40 * 0x50;
            if (*(int *)(lVar23 + 0x84) < iVar30) {
              FUN_14189858a(lVar33);
              iVar30 = *(int *)(lVar20 + 0x10);
            }
            if (iVar30 != 0) {
              piVar27 = *(int **)(lVar20 + 8);
              piVar1 = piVar27 + (longlong)iVar30 * 2;
              do {
                lVar24 = (longlong)(int)local_3ac;
                iVar30 = *piVar27;
                lVar20 = *local_420;
                iVar18 = *(int *)(lVar23 + 0x80);
                *(uint *)(lVar23 + 0x80) = iVar18 + 1U;
                if (*(uint *)(lVar23 + 0x84) < iVar18 + 1U) {
                  FUN_141027c76(lVar33,iVar18);
                }
                lVar11 = *(longlong *)(lVar23 + 0x78);
                if (*(longlong *)(lVar23 + 0x78) == 0) {
                  lVar11 = lVar33;
                }
                lVar31 = (longlong)iVar18 * 0x10;
                iVar18 = piVar27[1];
                *(longlong *)(lVar11 + lVar31) = (iVar30 + lVar24) * 0x78 + lVar20;
                *(int *)(lVar11 + 8 + lVar31) = (int)(iVar30 + lVar24);
                *(int *)(lVar11 + 0xc + lVar31) = iVar18;
                piVar27 = piVar27 + 2;
              } while (piVar27 != piVar1);
            }
            lVar40 = lVar40 + 1;
            lVar23 = local_448;
          } while (lVar40 < *(int *)((longlong)local_3c8 + 0x20));
        }
        FUN_14094f414(local_428,(longlong)local_3c8 + 0x38);
        pdVar37 = local_438;
        uVar38 = local_430;
      }
      pdVar37 = pdVar37 + 1;
    } while (pdVar37 != local_440);
  }
  local_3b8 = &local_128;
  local_3c8 = 0.0;
  uStack_3c0 = 0;
  if ((longlong)*(int *)(lVar23 + 0xe0) != 0) {
    puVar42 = *(undefined8 **)(lVar23 + 0xd8);
    puVar45 = puVar42 + *(int *)(lVar23 + 0xe0);
    local_408 = puVar45;
    do {
      uVar32 = uStack_3c0;
      pdVar37 = (double *)*puVar42;
      if ((pdVar37 != (double *)0x0) && (0 < *(int *)(pdVar37 + 4))) {
        lVar40 = (longlong)(int)uStack_3c0;
        uVar8 = (int)uStack_3c0 + 1;
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar8);
        if (uStack_3c0._4_4_ < uVar8) {
          FUN_1446f48e2(&local_3c8,uVar32 & 0xffffffff);
        }
        *(int *)((longlong)local_3c8 + lVar40 * 4) = (int)uVar38;
        local_3f8 = (longlong)(int)uVar38 * 0x90;
        pdVar21 = (double *)(*local_418 + local_3f8);
        local_438 = pdVar21;
        local_430 = uVar38;
        local_400 = puVar42;
        if ((longlong)*(int *)(pdVar37 + 4) != 0) {
          dVar41 = pdVar37[3];
          lVar40 = (longlong)*(int *)(pdVar37 + 4) * 0x30;
          iVar30 = 0;
          bVar43 = true;
          local_440 = pdVar37;
          do {
            local_3a8 = (double *)CONCAT44(local_3a8._4_4_,0xffffffff);
            FUN_143dbbe2c(&local_3b8,dVar41,&local_3a8);
            if ((-1 < (longlong)(int)local_3a8) && ((int)local_3a8 < *(int *)(lVar23 + 0x90))) {
              lVar20 = *local_418;
              lVar33 = (longlong)(int)local_3a8 * 0x90;
              *local_438 = *(double *)(lVar20 + lVar33) + *local_438;
              local_438[1] = *(double *)(lVar20 + 8 + lVar33) + local_438[1];
              local_438[2] = *(double *)(lVar20 + 0x10 + lVar33) + local_438[2];
              *(float *)(local_438 + 6) =
                   *(float *)(lVar20 + 0x30 + lVar33) + *(float *)(local_438 + 6);
              iVar30 = iVar30 + 1;
              if (bVar43) {
                lVar20 = lVar20 + lVar33;
                pdVar21[5] = *(double *)(lVar20 + 0x28);
                uVar46 = *(undefined4 *)(lVar20 + 0x1c);
                uVar47 = *(undefined4 *)(lVar20 + 0x20);
                uVar48 = *(undefined4 *)(lVar20 + 0x24);
                *(undefined4 *)(pdVar21 + 3) = *(undefined4 *)(lVar20 + 0x18);
                *(undefined4 *)((longlong)pdVar21 + 0x1c) = uVar46;
                *(undefined4 *)(pdVar21 + 4) = uVar47;
                *(undefined4 *)((longlong)pdVar21 + 0x24) = uVar48;
              }
              bVar43 = false;
            }
            dVar41 = (double)((longlong)dVar41 + 0x30);
            lVar40 = lVar40 + -0x30;
          } while (lVar40 != 0);
          if (0 < iVar30) {
            dVar41 = 1.0 / (double)iVar30;
            *local_438 = dVar41 * *local_438;
            local_438[1] = local_438[1] * dVar41;
            local_438[2] = local_438[2] * dVar41;
            *(float *)(local_438 + 6) = *(float *)(local_438 + 6) / (float)iVar30;
          }
          if ((longlong)*(int *)(local_440 + 4) != 0) {
            dVar41 = local_440[3];
            local_428 = local_438 + 7;
            lVar40 = (longlong)*(int *)(local_440 + 4) * 0x30;
            local_440 = (double *)((ulonglong)local_440 & 0xffffffff00000000);
            do {
              local_3ac = 0xffffffff;
              FUN_143dbbe2c(&local_3b8,dVar41,&local_3ac);
              if ((-1 < (longlong)(int)local_3ac) && ((int)local_3ac < *(int *)(lVar23 + 0x90))) {
                lVar33 = *(longlong *)(lVar23 + 0x88);
                lVar20 = (longlong)(int)local_3ac * 0x90;
                local_3a8 = (double *)(lVar20 + lVar33);
                local_3a0 = (longlong **)CONCAT44(*(undefined4 *)(lVar33 + 0x80 + lVar20),local_3ac)
                ;
                local_3f0 = (double)(local_3f8 + lVar33);
                local_3e8 = (double)CONCAT44((int)local_440,(int)local_430);
                iVar30 = *(int *)(lVar23 + 0xb0);
                *(uint *)(lVar23 + 0xb0) = iVar30 + 1U;
                if (*(uint *)(lVar23 + 0xb4) < iVar30 + 1U) {
                  FUN_1488dd04a(local_420,iVar30);
                }
                pdVar37 = (double *)((longlong)iVar30 * 0x78 + *local_420);
                FUN_140924796(pdVar37,&local_3f0,&local_3a8);
                iVar30 = *(int *)(local_438 + 0x10);
                lVar23 = (longlong)iVar30;
                *(uint *)(local_438 + 0x10) = iVar30 + 1U;
                if (*(uint *)((longlong)local_438 + 0x84) < iVar30 + 1U) {
                  FUN_141027c76(local_428,iVar30);
                }
                lVar20 = lVar20 + lVar33;
                pdVar21 = (double *)local_438[0xf];
                if ((double *)local_438[0xf] == (double *)0x0) {
                  pdVar21 = local_428;
                }
                pdVar21[lVar23 * 2] = (double)pdVar37;
                *(uint *)(pdVar21 + lVar23 * 2 + 1) = uVar44;
                *(undefined4 *)((longlong)pdVar21 + lVar23 * 0x10 + 0xc) = 0;
                iVar30 = *(int *)(lVar20 + 0x80);
                *(uint *)(lVar20 + 0x80) = iVar30 + 1U;
                if (*(uint *)(lVar20 + 0x84) < iVar30 + 1U) {
                  FUN_141027c76(lVar20 + 0x38,iVar30);
                }
                local_440 = (double *)CONCAT44(local_440._4_4_,(int)local_440 + 1);
                lVar23 = *(longlong *)(lVar20 + 0x78);
                if (*(longlong *)(lVar20 + 0x78) == 0) {
                  lVar23 = lVar20 + 0x38;
                }
                uVar8 = uVar44 + 1;
                lVar20 = (longlong)iVar30 * 0x10;
                *(double **)(lVar23 + lVar20) = pdVar37;
                *(uint *)(lVar23 + 8 + lVar20) = uVar44;
                *(undefined4 *)(lVar23 + 0xc + lVar20) = 1;
                lVar23 = local_448;
                uVar44 = uVar8;
                if (*(char *)(local_448 + 0x80) == '\x01') {
                  if (((ulonglong)pdVar37[4] & 1) != 0) {
                    dVar51 = *(double *)(local_448 + 0x60);
                    uVar46 = SUB84(dVar51,0);
                    uVar47 = (undefined4)((ulonglong)dVar51 >> 0x20);
                    dVar6 = *(double *)(local_448 + 0x68);
                    uVar48 = SUB84(dVar6,0);
                    uVar49 = (undefined4)((ulonglong)dVar6 >> 0x20);
                    dVar50 = *pdVar37;
                    if (dVar50 <= dVar51) {
                      uVar46 = SUB84(dVar50,0);
                      uVar47 = (undefined4)((ulonglong)dVar50 >> 0x20);
                    }
                    *(ulonglong *)(local_448 + 0x60) = CONCAT44(uVar47,uVar46);
                    dVar51 = pdVar37[1];
                    if (dVar51 <= dVar6) {
                      uVar48 = SUB84(dVar51,0);
                      uVar49 = (undefined4)((ulonglong)dVar51 >> 0x20);
                    }
                    *(ulonglong *)(local_448 + 0x68) = CONCAT44(uVar49,uVar48);
                    dVar51 = *(double *)(local_448 + 0x70);
                    uVar46 = SUB84(dVar51,0);
                    uVar47 = (undefined4)((ulonglong)dVar51 >> 0x20);
                    dVar6 = pdVar37[2];
                    if (dVar51 <= dVar6) {
                      uVar46 = SUB84(dVar6,0);
                      uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
                    }
                    *(ulonglong *)(local_448 + 0x70) = CONCAT44(uVar47,uVar46);
                    dVar51 = *(double *)(local_448 + 0x78);
                    uVar46 = SUB84(dVar51,0);
                    uVar47 = (undefined4)((ulonglong)dVar51 >> 0x20);
                    dVar6 = pdVar37[3];
                    if (dVar51 <= dVar6) {
                      uVar46 = SUB84(dVar6,0);
                      uVar47 = (undefined4)((ulonglong)dVar6 >> 0x20);
                    }
                    *(ulonglong *)(local_448 + 0x78) = CONCAT44(uVar47,uVar46);
                  }
                }
                else if (((ulonglong)pdVar37[4] & 1) != 0) {
                  local_410[4] = (longlong)pdVar37[4];
                  uVar46 = *(undefined4 *)pdVar37;
                  uVar47 = *(undefined4 *)((longlong)pdVar37 + 4);
                  uVar48 = *(undefined4 *)(pdVar37 + 1);
                  uVar49 = *(undefined4 *)((longlong)pdVar37 + 0xc);
                  dVar51 = pdVar37[3];
                  local_410[2] = (longlong)pdVar37[2];
                  local_410[3] = (longlong)dVar51;
                  *(undefined4 *)local_410 = uVar46;
                  *(undefined4 *)((longlong)local_410 + 4) = uVar47;
                  *(undefined4 *)(local_410 + 1) = uVar48;
                  *(undefined4 *)((longlong)local_410 + 0xc) = uVar49;
                }
              }
              dVar41 = (double)((longlong)dVar41 + 0x30);
              lVar40 = lVar40 + -0x30;
            } while (lVar40 != 0);
          }
        }
        uVar38 = (ulonglong)((int)local_430 + 1);
        dVar51 = (double)*(float *)(local_438 + 6);
        dVar6 = local_438[1] - dVar51;
        dVar50 = *local_438 - dVar51;
        dVar41 = local_438[1] + dVar51;
        dVar51 = *local_438 + dVar51;
        puVar42 = local_400;
        puVar45 = local_408;
        if (*(char *)(lVar23 + 0x80) == '\x01') {
          dVar52 = *(double *)(lVar23 + 0x60);
          if (dVar50 <= *(double *)(lVar23 + 0x60)) {
            dVar52 = dVar50;
          }
          *(double *)(lVar23 + 0x60) = dVar52;
          dVar50 = *(double *)(lVar23 + 0x68);
          if (dVar6 <= *(double *)(lVar23 + 0x68)) {
            dVar50 = dVar6;
          }
          *(double *)(lVar23 + 0x68) = dVar50;
          dVar6 = *(double *)(lVar23 + 0x70);
          if (*(double *)(lVar23 + 0x70) <= dVar51) {
            dVar6 = dVar51;
          }
          *(double *)(lVar23 + 0x70) = dVar6;
          dVar51 = *(double *)(lVar23 + 0x78);
          if (*(double *)(lVar23 + 0x78) <= dVar41) {
            dVar51 = dVar41;
          }
          *(double *)(lVar23 + 0x78) = dVar51;
        }
        else {
          *(double *)(lVar23 + 0x60) = dVar50;
          *(double *)(lVar23 + 0x68) = dVar6;
          *(double *)(lVar23 + 0x70) = dVar51;
          *(double *)(lVar23 + 0x78) = dVar41;
          *(undefined1 *)(lVar23 + 0x80) = 1;
        }
      }
      puVar42 = puVar42 + 1;
    } while (puVar42 != puVar45);
  }
  uVar38 = 0;
  local_1a8 = (double **)0x0;
  local_1a0 = 0x2000000000;
  local_190 = (uint *)0x0;
  local_188 = 0;
  uStack_184 = 0x20;
  uStack_180._0_4_ = -1;
  uStack_180._4_4_ = 0;
  local_138 = (undefined1 *)0x0;
  local_130 = 0;
  puVar2 = (uint *)(lVar23 + 0x20);
  uVar44 = *(uint *)(lVar23 + 0x38);
  if (uVar44 == 0) {
    uVar32 = 1;
    iVar30 = 0;
    uVar8 = 0;
  }
  else {
    puVar13 = *(uint **)(lVar23 + 0x30);
    if (*(uint **)(lVar23 + 0x30) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = *puVar13;
    if (uVar8 == 0) {
      iVar30 = uVar44 + 0x1e;
      if (-1 < (int)(uVar44 - 1)) {
        iVar30 = uVar44 - 1;
      }
      uVar38 = 0;
      uVar32 = (ulonglong)(uint)(iVar30 >> 5);
      if (iVar30 >> 5 < 1) {
        uVar32 = uVar38;
      }
      iVar30 = 0;
      do {
        if (uVar32 == uVar38) goto LAB_143dbad92;
        iVar30 = iVar30 + 0x20;
        uVar8 = puVar13[uVar38 + 1];
        uVar38 = uVar38 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar38 = 0;
      iVar30 = 0;
    }
    uVar32 = (ulonglong)(-uVar8 & uVar8);
    uVar15 = uVar32 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    uVar8 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    if ((int)uVar44 <= (int)uVar8) {
      uVar8 = uVar44;
    }
  }
  if (uVar8 != uVar44) {
    uVar39 = 0xffffffff;
    local_440 = (double *)(ulonglong)uVar44;
    do {
      iVar18 = (int)uStack_180;
      uVar15 = local_1a0;
      piVar1 = (int *)(*(longlong *)(lVar23 + 0x10) + (longlong)(int)uVar8 * 0x28);
      local_438 = (double *)CONCAT44(local_438._4_4_,iVar30);
      local_430 = CONCAT44(local_430._4_4_,uVar39);
      if ((int)uStack_120 == local_f4) {
        uVar44 = *piVar1 + _DAT_00000008;
        puVar35 = (ulonglong *)0x0;
      }
      else {
        uVar25 = *(ulonglong *)(*(longlong *)(lVar23 + 0x10) + 8 + (longlong)(int)uVar8 * 0x28);
        uVar44 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
        uVar44 = (uVar44 >> 0xd ^ uVar44) * -0x3d4d51cb;
        puVar14 = local_e8;
        if (local_e8 == (undefined1 *)0x0) {
          puVar14 = local_f0;
        }
        iVar30 = *(int *)(puVar14 + (ulonglong)((uVar44 >> 0x10 ^ uVar44) & local_e0 - 1U) * 4);
        if (iVar30 == -1) {
          puVar35 = (ulonglong *)&DAT_00000008;
        }
        else {
          do {
            puVar35 = (ulonglong *)(local_128 + (longlong)iVar30 * 0x18);
            if (*puVar35 == uVar25) goto LAB_143dbaf3c;
            iVar30 = (int)puVar35[2];
          } while (iVar30 != -1);
          puVar35 = (ulonglong *)0x0;
LAB_143dbaf3c:
          puVar35 = puVar35 + 1;
        }
        uVar44 = *piVar1 + (int)*puVar35;
        uVar25 = *(ulonglong *)(piVar1 + 6);
        uVar8 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        iVar30 = *(int *)(puVar14 + (ulonglong)((uVar8 >> 0x10 ^ uVar8) & local_e0 - 1U) * 4);
        while (iVar30 != -1) {
          puVar35 = (ulonglong *)(local_128 + (longlong)iVar30 * 0x18);
          if (*puVar35 == uVar25) goto LAB_143dbafb2;
          iVar30 = (int)puVar35[2];
        }
        puVar35 = (ulonglong *)0x0;
      }
LAB_143dbafb2:
      iVar30 = piVar1[4];
      uVar25 = puVar35[1];
      if (uStack_180._4_4_ == 0) {
        iVar18 = (int)local_1a0;
        local_1a0 = CONCAT44(local_1a0._4_4_,(int)local_1a0 + 1);
        if (local_1a0._4_4_ == iVar18) {
          FUN_1462b1b30(&local_3a8,uVar15 & 0xffffffff);
        }
        iVar22 = local_188;
        if (local_188 == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = local_188 + 0x1e;
          if (-1 < local_188 + -1) {
            iVar9 = local_188 + -1;
          }
          iVar9 = iVar9 >> 5;
        }
        iVar19 = local_188 + 1;
        iVar36 = local_188 + 0x1f;
        if (-1 < local_188) {
          iVar36 = local_188;
        }
        if (iVar36 >> 5 == iVar9) {
          local_188 = iVar19;
        }
        else {
          if ((int)uStack_184 <= local_188) {
            if (local_188 + 0x20U < 0x40) {
              uStack_184 = 0x20;
            }
            else {
              uVar8 = local_188 + 0x20U >> 5;
              if (uStack_184 + 0x1f < 0x40) {
                uVar39 = 4;
                if (4 < uVar8) {
                  uVar39 = uVar8;
                }
              }
              else {
                uVar39 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
              }
              uVar15 = (ulonglong)(uVar39 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar10 = (uint)(uVar15 + 0xf);
                  if (uVar39 < 0x1ffd) {
                    uVar15 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
                  }
                  else {
                    uVar28 = (ulonglong)(uVar10 & 0xfffffff0);
                    if (uVar28 < 0x7ff1) {
                      bVar17 = (&DAT_14c841e00)[uVar10 >> 4];
                      uVar26 = 0x32;
                      if (0x32 < bVar17) {
                        uVar26 = (ulonglong)bVar17;
                      }
                      uVar34 = 0x32 - (ulonglong)bVar17;
                      do {
                        uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_143dbb645;
                        lVar23 = uVar26 + 1 + uVar34;
                        uVar34 = uVar34 - 1;
                      } while (lVar23 != 0x33);
                    }
                    uVar15 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar15 = 0x10;
                    }
                    uVar15 = -uVar15 & (uVar28 + uVar15) - 1;
                  }
                }
                else {
                  local_428 = (double *)(ulonglong)uVar8;
                  uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
                  uVar8 = (uint)local_428;
                }
              }
LAB_143dbb645:
              iVar9 = (int)(uVar15 >> 2);
              uStack_184 = iVar9 << 5;
              if (iVar9 < (int)uVar8) {
                uStack_184 = 0xffffffe0;
              }
            }
            FUN_14008f53c(local_198,local_188);
            iVar19 = local_188 + 1;
          }
          iVar9 = iVar19 + 0x1f;
          if (-1 < iVar19) {
            iVar9 = iVar19;
          }
          local_188 = iVar19;
          if (iVar19 % 0x20 != 0) {
            puVar13 = local_190;
            if (local_190 == (uint *)0x0) {
              puVar13 = local_198;
            }
            bVar17 = -(char)(iVar19 % 0x20);
            puVar13[iVar9 >> 5] = (puVar13[iVar9 >> 5] << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
          }
        }
        lVar23 = (longlong)iVar18;
        puVar13 = local_190;
        if (local_190 == (uint *)0x0) {
          puVar13 = local_198;
        }
        bVar17 = (byte)iVar22 & 0x1f;
        puVar13[iVar36 >> 5] = puVar13[iVar36 >> 5] & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
      }
      else {
        ppdVar16 = local_1a8;
        if (local_1a8 == (double **)0x0) {
          ppdVar16 = &local_3a8;
        }
        lVar23 = (longlong)(int)uStack_180;
        uStack_180._0_4_ = *(int *)((longlong)ppdVar16 + lVar23 * 0x10 + 4);
        uStack_180._4_4_ = uStack_180._4_4_ + -1;
        if (uStack_180._4_4_ != 0) {
          *(undefined4 *)(ppdVar16 + (longlong)(int)uStack_180 * 2) = 0xffffffff;
        }
      }
      puVar13 = local_190;
      if (local_190 == (uint *)0x0) {
        puVar13 = local_198;
      }
      iVar22 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar22 = iVar18;
      }
      puVar13[iVar22 >> 5] = puVar13[iVar22 >> 5] | 1 << ((byte)iVar18 & 0x1f);
      ppdVar16 = local_1a8;
      if (local_1a8 == (double **)0x0) {
        ppdVar16 = &local_3a8;
      }
      ppdVar4 = ppdVar16 + lVar23 * 2;
      *(uint *)(ppdVar16 + lVar23 * 2) = uVar44;
      *(int *)((longlong)ppdVar16 + lVar23 * 0x10 + 4) = iVar30 + (int)uVar25;
      *(undefined4 *)(ppdVar16 + lVar23 * 2 + 1) = 0xffffffff;
      uVar8 = (int)local_1a0 - uStack_180._4_4_;
      if ((uVar8 != 0) && (uVar8 != 1)) {
        puVar14 = local_138;
        if (local_138 == (undefined1 *)0x0) {
          puVar14 = local_178;
        }
        iVar30 = *(int *)(puVar14 + (ulonglong)(local_130 - 1 & uVar44) * 4);
        if (iVar30 != -1) {
          ppdVar16 = local_1a8;
          if (local_1a8 == (double **)0x0) {
            ppdVar16 = &local_3a8;
          }
          do {
            if (*(uint *)(ppdVar16 + (longlong)iVar30 * 2) == uVar44) {
              ppdVar16[(longlong)iVar30 * 2] = *ppdVar4;
              FUN_1488dd0da(&local_3a8,iVar18);
              lVar23 = local_448;
              goto LAB_143dbb1c0;
            }
            iVar30 = *(int *)(ppdVar16 + (longlong)iVar30 * 2 + 1);
          } while (iVar30 != -1);
        }
      }
      uVar15 = (ulonglong)(((uVar8 >> 1) - 1) + (uint)(uVar8 >> 1 == 0)) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar39 = 1 << ((byte)lVar23 & 0x1f);
      if ((uint)lVar23 < 4) {
        uVar39 = 0x10;
      }
      if (uVar8 < 4) {
        uVar39 = 0x10;
      }
      if (((int)uVar8 < 1) || ((int)uVar39 <= (int)local_130)) {
        uVar44 = local_130 - 1 & uVar44;
        *(uint *)((longlong)ppdVar4 + 0xc) = uVar44;
        puVar14 = local_138;
        if (local_138 == (undefined1 *)0x0) {
          puVar14 = local_178;
        }
        *(undefined4 *)(ppdVar4 + 1) =
             *(undefined4 *)(puVar14 + ((longlong)(int)local_130 - 1U & (longlong)(int)uVar44) * 4);
        puVar14 = local_138;
        if (local_138 == (undefined1 *)0x0) {
          puVar14 = local_178;
        }
        *(int *)(puVar14 + ((longlong)(int)local_130 - 1U & (longlong)(int)uVar44) * 4) = iVar18;
        lVar23 = local_448;
      }
      else {
        local_130 = uVar39;
        if (local_138 == (undefined1 *)0x0) {
          FUN_1400bf6d8(local_178,0,uVar39,4);
          lVar23 = local_448;
LAB_143dbb320:
          uVar44 = 0;
          do {
            puVar14 = local_138;
            if (local_138 == (undefined1 *)0x0) {
              puVar14 = local_178;
            }
            *(undefined4 *)(puVar14 + (ulonglong)(local_130 + 0x7fffffff & uVar44) * 4) = 0xffffffff
            ;
            uVar44 = uVar44 + 1;
          } while (uVar39 != uVar44);
        }
        else {
          FUN_1446efa72(&local_138,0,0,4);
          uVar39 = local_130;
          lVar23 = local_448;
          if (local_130 == 0) goto LAB_143dbb1c0;
          FUN_1400bf6d8(local_178,0,local_130,4);
          if (0 < (int)uVar39) goto LAB_143dbb320;
        }
        if (local_188 == 0) {
          uVar15 = 0;
          uVar25 = 1;
          iVar30 = 0;
          iVar18 = 0;
        }
        else {
          puVar13 = local_190;
          if (local_190 == (uint *)0x0) {
            puVar13 = local_198;
          }
          uVar44 = *puVar13;
          if (uVar44 == 0) {
            iVar30 = local_188 + 0x1e;
            if (-1 < local_188 + -1) {
              iVar30 = local_188 + -1;
            }
            uVar15 = 0;
            uVar25 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar25 = uVar15;
            }
            iVar18 = 0;
            do {
              if (uVar25 == uVar15) goto LAB_143dbb1c0;
              iVar18 = iVar18 + 0x20;
              uVar44 = puVar13[uVar15 + 1];
              uVar15 = uVar15 + 1;
            } while (uVar44 == 0);
          }
          else {
            uVar15 = 0;
            iVar18 = 0;
          }
          uVar25 = (ulonglong)(-uVar44 & uVar44);
          uVar28 = uVar25 * 2 + 1;
          lVar40 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          iVar30 = (iVar18 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
          if (local_188 <= iVar30) {
            iVar30 = local_188;
          }
        }
        if (iVar30 < local_188) {
          uVar44 = 0xffffffff;
          do {
            ppdVar16 = local_1a8;
            if (local_1a8 == (double **)0x0) {
              ppdVar16 = &local_3a8;
            }
            lVar40 = (longlong)iVar30;
            uVar28 = (longlong)(int)local_130 - 1U & (longlong)*(int *)(ppdVar16 + lVar40 * 2);
            iVar22 = (int)uVar28;
            *(int *)((longlong)ppdVar16 + lVar40 * 0x10 + 0xc) = iVar22;
            puVar14 = local_138;
            if (local_138 == (undefined1 *)0x0) {
              puVar14 = local_178;
            }
            *(undefined4 *)(ppdVar16 + lVar40 * 2 + 1) =
                 *(undefined4 *)(puVar14 + ((longlong)(int)local_130 - 1U & uVar28) * 4);
            puVar14 = local_138;
            if (local_138 == (undefined1 *)0x0) {
              puVar14 = local_178;
            }
            *(int *)(puVar14 + ((longlong)iVar22 & (longlong)(int)local_130 - 1U) * 4) = iVar30;
            uVar44 = ~(uint)uVar25 & uVar44;
            puVar13 = local_190;
            if (local_190 == (uint *)0x0) {
              puVar13 = local_198;
            }
            iVar30 = (int)uVar15;
            lVar40 = (longlong)iVar30;
            uVar8 = puVar13[lVar40] & uVar44;
            if (uVar8 == 0) {
              iVar22 = local_188 + 0x1e;
              if (-1 < local_188 + -1) {
                iVar22 = local_188 + -1;
              }
              iVar22 = iVar22 >> 5;
              iVar9 = iVar22;
              if (iVar22 < iVar30) {
                iVar9 = iVar30;
              }
              if (iVar22 <= iVar30) break;
              lVar20 = 0;
              while( true ) {
                iVar18 = iVar18 + 0x20;
                uVar8 = puVar13[lVar40 + lVar20 + 1];
                lVar23 = local_448;
                if (uVar8 != 0) break;
                lVar20 = lVar20 + 1;
                if (iVar9 - lVar40 == lVar20) goto LAB_143dbb1c0;
              }
              uVar15 = (ulonglong)(iVar30 + (int)lVar20 + 1);
              uVar44 = 0xffffffff;
            }
            uVar25 = (ulonglong)(-uVar8 & uVar8);
            uVar28 = uVar25 * 2 + 1;
            lVar40 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar40 == 0; lVar40 = lVar40 + -1) {
              }
            }
            iVar30 = (iVar18 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
          } while (iVar30 < local_188);
        }
      }
LAB_143dbb1c0:
      uVar39 = (uint)local_430 & ~(uint)uVar32;
      puVar13 = *(uint **)(lVar23 + 0x30);
      if (*(uint **)(lVar23 + 0x30) == (uint *)0x0) {
        puVar13 = puVar2;
      }
      uVar44 = *(uint *)(lVar23 + 0x38);
      iVar18 = (int)uVar38;
      lVar40 = (longlong)iVar18;
      uVar8 = puVar13[lVar40] & uVar39;
      iVar30 = (int)local_438;
      if (uVar8 == 0) {
        iVar22 = uVar44 + 0x1e;
        if (-1 < (int)(uVar44 - 1)) {
          iVar22 = uVar44 - 1;
        }
        iVar22 = iVar22 >> 5;
        iVar30 = (int)local_438 + 0x20;
        iVar9 = iVar22;
        if (iVar22 < iVar18) {
          iVar9 = iVar18;
        }
        if (iVar18 < iVar22) {
          lVar20 = 0;
          do {
            uVar8 = puVar13[lVar40 + lVar20 + 1];
            if (uVar8 != 0) {
              uVar38 = (ulonglong)(iVar18 + (int)lVar20 + 1);
              uVar39 = 0xffffffff;
              goto LAB_143dbb24e;
            }
            iVar30 = iVar30 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar9 - lVar40 != lVar20);
          uVar39 = 0xffffffff;
          iVar18 = iVar9;
        }
        uVar38 = (ulonglong)(iVar18 + 1);
        lVar23 = local_448;
        uVar8 = uVar44;
      }
      else {
LAB_143dbb24e:
        uVar32 = (ulonglong)(-uVar8 & uVar8);
        uVar15 = uVar32 * 2 + 1;
        lVar40 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        uVar8 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
        if ((int)uVar44 <= (int)uVar8) {
          uVar8 = uVar44;
        }
      }
    } while (uVar8 != (uint)local_440);
  }
LAB_143dbad92:
  plVar12 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b413440;
  plVar12[2] = 0;
  plVar12[3] = 0;
  lVar40 = local_410[1];
  lVar20 = local_410[2];
  lVar33 = local_410[3];
  plVar12[8] = *local_410;
  plVar12[9] = lVar40;
  plVar12[10] = lVar20;
  plVar12[0xb] = lVar33;
  plVar12[0xc] = local_410[4];
  dVar41 = *(double *)(lVar23 + 0x68);
  dVar51 = *(double *)(lVar23 + 0x78);
  plVar12[0xd] = (longlong)((*(double *)(lVar23 + 0x60) + *(double *)(lVar23 + 0x70)) * 0.5);
  plVar12[0xe] = (longlong)((dVar41 + dVar51) * 0.5);
  *(undefined4 *)(plVar12 + 0xf) = 0x42c80000;
  *(undefined1 *)((longlong)plVar12 + 0x7c) = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  if (plVar12 == (longlong *)0x0) {
    *(undefined8 *)(lVar23 + 0x98) = 0x10;
    plVar29 = *(longlong **)(lVar23 + 0xa0);
    if (plVar29 != (longlong *)0x0) {
      *(undefined8 *)(lVar23 + 0xa0) = 0;
LAB_143dbb80a:
      LOCK();
      plVar3 = plVar29 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar29)(plVar29);
        LOCK();
        piVar1 = (int *)((longlong)plVar29 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
        }
      }
      if (plVar12 != (longlong *)0x0) goto LAB_143dbb84f;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *(longlong **)(lVar23 + 0x98) = plVar12 + 2;
    plVar29 = *(longlong **)(lVar23 + 0xa0);
    if (plVar12 == plVar29) {
      LOCK();
      plVar29 = plVar12 + 1;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)*plVar29 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    else {
      *(longlong **)(lVar23 + 0xa0) = plVar12;
      if (plVar29 != (longlong *)0x0) goto LAB_143dbb80a;
    }
LAB_143dbb84f:
    LOCK();
    plVar29 = plVar12 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_3ac = 0;
  if (0 < *(int *)(lVar23 + 0x90)) {
    do {
      if ((int)local_1a0 != uStack_180._4_4_) {
        puVar14 = local_138;
        if (local_138 == (undefined1 *)0x0) {
          puVar14 = local_178;
        }
        iVar30 = *(int *)(puVar14 + (ulonglong)(local_130 - 1 & local_3ac) * 4);
        if (iVar30 != -1) {
          ppdVar16 = local_1a8;
          if (local_1a8 == (double **)0x0) {
            ppdVar16 = &local_3a8;
          }
          do {
            ppdVar4 = ppdVar16 + (longlong)iVar30 * 2;
            if (*(uint *)(ppdVar16 + (longlong)iVar30 * 2) == local_3ac) {
              if ((int *)((longlong)ppdVar4 + 4) != (int *)0x0 && ppdVar4 != (double **)0x0) {
                iVar30 = *(int *)((longlong)ppdVar4 + 4);
                lVar23 = *local_418;
                lVar40 = (longlong)iVar30 * 0x90;
                iVar18 = *(int *)(lVar23 + 0x80 + (longlong)(int)local_3ac * 0x90);
                iVar22 = *(int *)(lVar23 + 0x80 + lVar40) + iVar18;
                if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar22);
                }
                lVar20 = lVar23 + lVar40;
                local_440 = (double *)(lVar23 + lVar40 + 0x38);
                lVar23 = lVar23 + (longlong)(int)local_3ac * 0x90;
                if (*(int *)(lVar20 + 0x84) < iVar22) {
                  FUN_14189858a(local_440);
                  iVar18 = *(int *)(lVar23 + 0x80);
                }
                pdVar37 = *(double **)(lVar23 + 0x78);
                if (*(double **)(lVar23 + 0x78) == (double *)0x0) {
                  pdVar37 = (double *)(lVar23 + 0x38);
                }
                if (iVar18 != 0) {
                  local_430 = (longlong)iVar18 << 4;
                  uVar38 = 0;
                  pdVar21 = local_440;
                  local_438 = pdVar37;
                  do {
                    uVar8 = local_3ac;
                    lVar23 = *local_420;
                    lVar40 = (longlong)*(int *)((longlong)local_438 + uVar38 + 8) * 0x78;
                    uVar44 = *(uint *)(lVar23 + 0x50 + lVar40);
                    iVar18 = *(int *)(lVar20 + 0x80);
                    *(uint *)(lVar20 + 0x80) = iVar18 + 1U;
                    if (*(uint *)(lVar20 + 0x84) < iVar18 + 1U) {
                      FUN_141027c76(pdVar21,iVar18);
                      pdVar21 = local_440;
                    }
                    lVar33 = lVar23 + lVar40;
                    pdVar37 = *(double **)(lVar20 + 0x78);
                    if (*(double **)(lVar20 + 0x78) == (double *)0x0) {
                      pdVar37 = pdVar21;
                    }
                    dVar41 = *(double *)((longlong)local_438 + uVar38 + 8);
                    pdVar37[(longlong)iVar18 * 2] = (double)(lVar23 + lVar40);
                    pdVar37[(longlong)iVar18 * 2 + 1] = dVar41;
                    lVar23 = (ulonglong)(uVar44 != uVar8) * 0x10;
                    *(longlong *)(lVar33 + 0x48 + lVar23) = lVar20;
                    *(int *)(lVar33 + 0x50 + lVar23) = iVar30;
                    *(int *)(lVar33 + 0x54 + lVar23) = iVar18;
                    uVar38 = uVar38 + 0x10;
                  } while (local_430 != uVar38);
                }
                goto LAB_143dbb98a;
              }
              break;
            }
            iVar30 = *(int *)(ppdVar4 + 1);
          } while (iVar30 != -1);
        }
      }
      lVar40 = *(longlong *)(lVar23 + 0x88);
      lVar20 = (longlong)(int)local_3ac * 0x90;
      local_3e0 = (double)*(float *)(lVar40 + 0x30 + lVar20);
      local_3d8 = *(double *)(lVar40 + 8 + lVar20);
      local_3e8 = local_3d8 - local_3e0;
      local_3f0 = *(double *)(lVar40 + lVar20) - local_3e0;
      local_3d8 = local_3d8 + local_3e0;
      local_3e0 = *(double *)(lVar40 + lVar20) + local_3e0;
      local_3d0 = 1;
      FUN_143dbc8b8(*(undefined8 *)(lVar23 + 0x98),&local_3ac,&local_3f0);
LAB_143dbb98a:
      local_3ac = local_3ac + 1;
      lVar23 = local_448;
    } while ((int)local_3ac < *(int *)(local_448 + 0x90));
  }
  plVar12 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b413440;
  plVar12[2] = 0;
  plVar12[3] = 0;
  lVar40 = local_410[1];
  lVar20 = local_410[2];
  lVar33 = local_410[3];
  plVar12[8] = *local_410;
  plVar12[9] = lVar40;
  plVar12[10] = lVar20;
  plVar12[0xb] = lVar33;
  plVar12[0xc] = local_410[4];
  dVar41 = *(double *)(lVar23 + 0x68);
  dVar51 = *(double *)(lVar23 + 0x78);
  plVar12[0xd] = (longlong)((*(double *)(lVar23 + 0x60) + *(double *)(lVar23 + 0x70)) * 0.5);
  plVar12[0xe] = (longlong)((dVar41 + dVar51) * 0.5);
  *(undefined4 *)(plVar12 + 0xf) = 0x42c80000;
  *(undefined1 *)((longlong)plVar12 + 0x7c) = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  if (plVar12 == (longlong *)0x0) {
    *(undefined8 *)(lVar23 + 0xb8) = 0x10;
    plVar29 = *(longlong **)(lVar23 + 0xc0);
    if (plVar29 != (longlong *)0x0) {
      *(undefined8 *)(lVar23 + 0xc0) = 0;
LAB_143dbbbc4:
      LOCK();
      plVar3 = plVar29 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar29)(plVar29);
        LOCK();
        piVar1 = (int *)((longlong)plVar29 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
        }
      }
      if (plVar12 != (longlong *)0x0) goto LAB_143dbbc05;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *(longlong **)(lVar23 + 0xb8) = plVar12 + 2;
    plVar29 = *(longlong **)(lVar23 + 0xc0);
    if (plVar12 == plVar29) {
      LOCK();
      plVar29 = plVar12 + 1;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)*plVar29 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    else {
      *(longlong **)(lVar23 + 0xc0) = plVar12;
      if (plVar29 != (longlong *)0x0) goto LAB_143dbbbc4;
    }
LAB_143dbbc05:
    LOCK();
    plVar29 = plVar12 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_3f0 = (double)((ulonglong)local_3f0 & 0xffffffff00000000);
  if (0 < *(int *)(lVar23 + 0xb0)) {
    iVar30 = 0;
    do {
      FUN_143dbc8b8(*(undefined8 *)(lVar23 + 0xb8),&local_3f0,
                    (longlong)iVar30 * 0x78 + *(longlong *)(lVar23 + 0xa8));
      iVar30 = local_3f0._0_4_ + 1;
      local_3f0 = (double)CONCAT44(local_3f0._4_4_,iVar30);
    } while (iVar30 < *(int *)(lVar23 + 0xb0));
  }
  local_130 = 0;
  if (local_138 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar38 = local_1a0 >> 0x20;
  local_1a0 = local_1a0 & 0xffffffff00000000;
  if ((int)uVar38 != 0) {
    FUN_140fa43ec(&local_3a8,0);
  }
  uStack_180 = 0xffffffff;
  local_188 = 0;
  if (0x20 < uStack_184) {
    uStack_184 = 0x20;
    FUN_14008f53c(local_198,0);
  }
  if (local_190 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (double **)0x0) {
    FUN_1400020a8();
  }
  if (local_3c8 != 0.0) {
    FUN_1400020a8();
  }
  local_e0 = 0;
  if (local_e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1418978a6(&local_128);
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1418978a6(&local_d8);
LAB_143dbbd57:
  if ((local_80 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dbbe2c FUN_143dbbe2c body=460 status=ok
// SIG undefined FUN_143dbbe2c(void)

void FUN_143dbbe2c(longlong *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  
  lVar2 = FUN_14040deec(param_2);
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_14040deec(param_2);
  if (lVar2 != 0) {
    iVar10 = *(int *)(param_2 + 0x2c);
    if (((longlong)iVar10 < 0) || (*(int *)(lVar2 + 0x20) <= iVar10)) {
      lVar5 = *(longlong *)(param_2 + 0x24);
    }
    else {
      lVar9 = *(longlong *)(lVar2 + 0x18);
      lVar5 = *(longlong *)(param_2 + 0x24);
      if (*(longlong *)(lVar9 + (longlong)iVar10 * 0x50) == lVar5) {
LAB_143dbbeda:
        if ((longlong)iVar10 * 0x50 + lVar9 != 0) goto LAB_143dbbf62;
        goto LAB_143dbbeea;
      }
    }
    if (lVar5 != 0) {
      if ((longlong)*(int *)(lVar2 + 0x20) != 0) {
        uVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x18) + uVar8) == lVar5) {
            iVar10 = (int)(uVar8 >> 4) * -0x33333333;
            *(int *)(param_2 + 0x2c) = iVar10;
            if (iVar10 == -1) goto LAB_143dbbeea;
            lVar9 = *(longlong *)(lVar2 + 0x18);
            goto LAB_143dbbeda;
          }
          uVar8 = uVar8 + 0x50;
        } while ((longlong)*(int *)(lVar2 + 0x20) * 0x50 != uVar8);
      }
      *(undefined4 *)(param_2 + 0x2c) = 0xffffffff;
    }
  }
LAB_143dbbeea:
  lVar2 = FUN_14040deec(param_2);
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_14040df6e(lVar2,param_2 + 0x18);
  if (cVar1 == '\0') {
    return;
  }
  if ((longlong)*(int *)(param_2 + 0x20) * 0x24 + *(longlong *)(lVar2 + 0x28) == 0) {
    return;
  }
  lVar2 = FUN_14040deec(param_2);
  if ((lVar2 == 0) || (cVar1 = FUN_14040df6e(lVar2,param_2 + 0x18), cVar1 == '\0')) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(param_2 + 0x20) * 0x24 + *(longlong *)(lVar2 + 0x28);
  }
  iVar10 = *(int *)(lVar2 + 8);
LAB_143dbbf62:
  if (-1 < iVar10) {
    param_1 = (longlong *)*param_1;
    uVar8 = FUN_14040deec(param_2);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar3 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)param_1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar4 != -1) {
        do {
          puVar7 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
          if (*puVar7 == uVar8) goto LAB_143dbbfe5;
          iVar4 = (int)puVar7[2];
        } while (iVar4 != -1);
      }
    }
    puVar7 = (ulonglong *)0x0;
LAB_143dbbfe5:
    *param_3 = iVar10 + (int)puVar7[1];
  }
  return;
}



// FUNCTION 143dbbff8 FUN_143dbbff8 body=88 status=ok
// SIG undefined FUN_143dbbff8(void)

undefined8 * FUN_143dbbff8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_141894126(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 143dbc050 FUN_143dbc050 body=92 status=ok
// SIG undefined FUN_143dbc050(void)

void FUN_143dbc050(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xe0c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xe0c) = 0;
    if (*(void **)((longlong)param_1 + 0xe00) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xe00),
              (longlong)*(int *)((longlong)param_1 + 0xe08) * 0xe0);
      FUN_1446efa72((longlong)param_1 + 0xe00,0,0,0xe0);
      return;
    }
  }
  return;
}



// FUNCTION 143dbc0ac FUN_143dbc0ac body=1 status=ok
// SIG undefined FUN_143dbc0ac(void)

void FUN_143dbc0ac(void)

{
  return;
}



// FUNCTION 143dbc0ba FUN_143dbc0ba body=264 status=ok
// SIG undefined FUN_143dbc0ba(void)

void FUN_143dbc0ba(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x260;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x260)) {
      uVar5 = uVar4 / 0x260 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x260,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143dbc1c2 FUN_143dbc1c2 body=64 status=ok
// SIG undefined FUN_143dbc1c2(void)

undefined8 * FUN_143dbc1c2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b413300;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dbc206 FUN_143dbc206 body=81 status=ok
// SIG undefined FUN_143dbc206(void)

undefined8 FUN_143dbc206(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143dbc25e FUN_143dbc25e body=89 status=ok
// SIG undefined FUN_143dbc25e(void)

bool FUN_143dbc25e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143dbc2a9;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143dbc2a9:
  return lVar6 == param_2;
}



// FUNCTION 143dbc2e0 FUN_143dbc2e0 body=118 status=ok
// SIG undefined FUN_143dbc2e0(void)

void FUN_143dbc2e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b413370;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b413300;
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



// FUNCTION 143dbc356 FUN_143dbc356 body=118 status=ok
// SIG undefined FUN_143dbc356(void)

void FUN_143dbc356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b413370;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b413300;
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



// FUNCTION 143dbc3cc FUN_143dbc3cc body=156 status=ok
// SIG undefined FUN_143dbc3cc(void)

void FUN_143dbc3cc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b413370;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b413300;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dbc458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dbc468 FUN_143dbc468 body=112 status=ok
// SIG undefined FUN_143dbc468(void)

void FUN_143dbc468(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2,
                   *(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x000143dbc4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143dbc4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))
            ((longlong)*(int *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143dbc4d8 FUN_143dbc4d8 body=105 status=ok
// SIG undefined FUN_143dbc4d8(void)

ulonglong FUN_143dbc4d8(longlong param_1,undefined8 param_2)

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
LAB_143dbc536:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143dbc536;
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
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 143dbc544 FUN_143dbc544 body=126 status=ok
// SIG undefined FUN_143dbc544(void)

void FUN_143dbc544(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((*(char *)*param_1 != '\x01') || ((char)param_2[0x17] == '\x01')) {
    if (((param_2[0xb] == 0) || (0xfffffffd < (int)param_2[0xc] - 1U)) &&
       (cVar3 = (**(code **)(param_2[10] + 8))(), cVar3 == '\0')) {
      return;
    }
    cVar3 = (**(code **)(*param_2 + 0x28))(param_2,param_1[1],param_1[2]);
    if (cVar3 != '\0') {
      plVar2 = (longlong *)param_1[3];
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_141895c4e(plVar2,iVar1);
      }
      *(longlong **)(*plVar2 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 143dbc5c2 FUN_143dbc5c2 body=55 status=ok
// SIG undefined FUN_143dbc5c2(void)

void FUN_143dbc5c2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146555144(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143dbc5fa FUN_143dbc5fa body=1 status=ok
// SIG undefined FUN_143dbc5fa(void)

void FUN_143dbc5fa(void)

{
  return;
}



// FUNCTION 143dbc5fc FUN_143dbc5fc body=66 status=ok
// SIG undefined FUN_143dbc5fc(void)

undefined8 FUN_143dbc5fc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
    lVar2 = FUN_1464b2d56();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 143dbc63e FUN_143dbc63e body=168 status=ok
// SIG undefined FUN_143dbc63e(void)

void FUN_143dbc63e(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    local_38 = param_1[2];
    local_30 = param_1[3];
    local_40 = &local_70;
    local_70 = 0;
    local_58 = 0;
    local_48 = &PTR_LAB_14b413420;
    local_68 = FUN_143dbc770;
    FUN_1488c6230(lVar1);
    if (local_70 != 0) {
      *(longlong *)*param_1 = local_70;
      *(longlong *)param_1[1] = lVar1;
      *param_4 = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dbc6e8 FUN_143dbc6e8 body=70 status=ok
// SIG undefined FUN_143dbc6e8(void)

undefined8 * FUN_143dbc6e8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b413400;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143dbc734 FUN_143dbc734 body=29 status=ok
// SIG undefined FUN_143dbc734(void)

void FUN_143dbc734(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143dbc752 FUN_143dbc752 body=29 status=ok
// SIG undefined FUN_143dbc752(void)

undefined8 FUN_143dbc752(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dbc770 FUN_143dbc770 body=51 status=ok
// SIG undefined FUN_143dbc770(void)

void FUN_143dbc770(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],param_2,param_1[1]);
  if (cVar1 != '\0') {
    *(undefined8 *)*param_1 = param_2;
    *param_3 = 1;
  }
  return;
}



// FUNCTION 143dbc7d6 FUN_143dbc7d6 body=29 status=ok
// SIG undefined FUN_143dbc7d6(void)

undefined8 FUN_143dbc7d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dbc7f4 FUN_143dbc7f4 body=83 status=ok
// SIG undefined FUN_143dbc7f4(void)

void FUN_143dbc7f4(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    cVar4 = FUN_140cde234(lVar2 + 0x88,*param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_1[1];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1488dce20(plVar3,iVar1);
      }
      *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 143dbc863 FUN_143dbc863 body=85 status=ok
// SIG undefined FUN_143dbc863(void)

void FUN_143dbc863(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  do {
    param_1[2] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar1;
    uVar1 = DAT_14c846500;
    param_1[3] = DAT_14c8464f8;
    param_1[4] = uVar1;
    param_1[5] = DAT_14c846508;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0x400000000;
    param_1[0x11] = 0;
    param_1 = param_1 + 0x12;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


