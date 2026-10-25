// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f5b640 FUN_140f5b640 body=175 status=ok
// SIG undefined FUN_140f5b640(void)

undefined8 * FUN_140f5b640(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f5b7d4(param_1,&local_38,0,0);
  if (local_28 == 1) {
    *param_2 = local_38;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = local_30;
    uVar1 = 1;
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 8);
    uVar1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined1 *)(param_2 + 2) = uVar1;
  if (((local_28 & 1) != 0) && (local_38 != (longlong *)0x0)) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5b6f0 FUN_140f5b6f0 body=227 status=ok
// SIG undefined FUN_140f5b6f0(void)

void FUN_140f5b6f0(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,0x10);
  }
  return;
}



// FUNCTION 140f5b7d4 FUN_140f5b7d4 body=4965 status=ok
// SIG undefined FUN_140f5b7d4(void)

longlong FUN_140f5b7d4(int *param_1,longlong param_2,longlong param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong **pplVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_5b8 [40];
  longlong *local_590;
  longlong local_588;
  longlong local_580;
  longlong local_578;
  undefined1 local_570 [4];
  undefined1 local_56c [4];
  longlong *local_568 [2];
  undefined8 local_558;
  longlong *local_550;
  longlong local_548 [2];
  longlong *local_538 [2];
  longlong *local_528 [2];
  longlong *local_518 [2];
  longlong *local_508;
  longlong *plStack_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  longlong local_4e8;
  longlong *plStack_4e0;
  longlong *local_4d8 [2];
  longlong *local_4c8;
  undefined4 local_4c0;
  longlong *local_4b8;
  int *local_4b0;
  longlong local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_490;
  longlong *local_488;
  undefined8 *local_480;
  char *local_478;
  undefined1 local_470 [4];
  undefined1 local_46c;
  undefined1 local_468 [4];
  undefined1 local_464;
  int local_460;
  undefined1 local_45c;
  undefined1 local_458 [4];
  undefined1 local_454;
  undefined1 local_450 [4];
  undefined1 local_44c;
  undefined1 local_448 [4];
  undefined1 local_444;
  undefined1 local_440 [4];
  undefined1 local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  int local_3f8;
  int iStack_3f4;
  int iStack_3f0;
  int iStack_3ec;
  longlong local_3e8;
  longlong local_3d8;
  longlong lStack_3d0;
  undefined1 local_3c8 [48];
  int local_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  longlong local_388;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_338 [96];
  longlong local_2d8;
  longlong lStack_2d0;
  undefined1 local_2c8 [48];
  int local_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  longlong local_288;
  longlong local_278;
  longlong lStack_270;
  undefined1 local_268 [48];
  int local_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  longlong local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  longlong local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  longlong local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148 [6];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  char local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8 [2];
  undefined4 local_c8 [4];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  char local_88 [24];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  local_4a8 = 0;
  uStack_4a0 = 0;
  iVar16 = *(int *)(*(longlong *)(param_1 + 8) + 8) - *param_1;
  local_588 = param_2;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  local_578 = param_3;
  local_4b8 = &local_4a8;
  local_4b0 = param_1;
  if (iVar16 != 0) {
    FUN_140f5cee6(&local_4a8);
    iVar16 = *param_1;
    plVar13 = *(longlong **)(param_1 + 8);
    if (iVar16 < (int)plVar13[1]) {
      local_590 = (longlong *)(param_1 + 2);
      bVar4 = false;
      do {
        lVar11 = *plVar13;
        lVar9 = (longlong)iVar16 * 0x60;
        plVar13 = (longlong *)(lVar11 + lVar9);
        plVar3 = *(longlong **)(param_1 + 6);
        uVar10 = *(ulonglong *)(lVar11 + 8 + lVar9);
        uVar17 = *(longlong *)(lVar11 + lVar9) + 0x9ae16a3b2f90404f;
        uVar17 = ((uVar17 << 0x27 | uVar17 >> 0x19) + uVar10) * -0x651e95c4d06fbf91;
        uVar10 = ((uVar10 << 0x1b | uVar10 >> 0x25) * -0x651e95c4d06fbf91 +
                  *(longlong *)(lVar11 + lVar9) + 0x9ae16a3b2f90404f ^ uVar17) * -0x651e95c4d06fbf91
        ;
        lVar11 = (uVar10 >> 0x2f ^ uVar17 ^ uVar10) * -0x651e95c4d06fbf91;
        iVar16 = FUN_140f5cbae(plVar3,((uint)((ulonglong)lVar11 >> 0x2f) ^ (uint)lVar11) *
                                      0x2f90406f,plVar13);
        lVar11 = local_588;
        if ((iVar16 == -1) || (lVar9 = (longlong)iVar16 * 0x28 + *plVar3, lVar9 == 0)) {
          if (((param_4 != (int *)0x0) &&
              ((((int)*plVar13 == *param_4 && (*(int *)((longlong)plVar13 + 4) == param_4[1])) &&
               ((int)plVar13[1] == param_4[2])))) &&
             (*(int *)((longlong)plVar13 + 0xc) == param_4[3])) goto LAB_140f5c23a;
          uVar10 = plVar13[1];
          uVar17 = *plVar13 + 0x9ae16a3b2f90404f;
          plVar3 = plVar13 + 2;
          uVar17 = ((uVar17 << 0x27 | uVar17 >> 0x19) + uVar10) * -0x651e95c4d06fbf91;
          uVar10 = ((uVar10 << 0x1b | uVar10 >> 0x25) * -0x651e95c4d06fbf91 + *plVar13 +
                    0x9ae16a3b2f90404f ^ uVar17) * -0x651e95c4d06fbf91;
          lVar11 = (uVar10 >> 0x2f ^ uVar17 ^ uVar10) * -0x651e95c4d06fbf91;
          iVar16 = ((uint)((ulonglong)lVar11 >> 0x2f) ^ (uint)lVar11) * 0x2f90406f;
          if (bVar4) {
            iVar16 = FUN_140f5cb3a(*(longlong *)(param_1 + 6) + 0xa0,iVar16,plVar13);
            if (iVar16 == -1) {
              piVar12 = (int *)FUN_140f5cd28(*(undefined8 *)(param_1 + 6),plVar13);
              if (piVar12 != (int *)0x0) {
                while (0 < (int)(uint)uStack_4a0) {
                  iVar16 = *(int *)(local_4a8 + -0x10 + (uStack_4a0 & 0xffffffff) * 0x80);
                  bVar4 = iVar16 < *piVar12;
                  if (piVar12[1] == 1) {
                    bVar4 = iVar16 <= *piVar12;
                  }
                  if (!bVar4) break;
                  FUN_140f5cfba(&local_4b8);
                }
                iVar16 = -1;
                if ((char)piVar12[2] == '\x01') {
                  local_460 = param_1[4];
                  local_45c = 1;
                  if ((((*(int *)((longlong)plVar13 + 4) == 0 && (int)*plVar13 == 0) &&
                       (int)plVar13[1] == 0) && *(int *)((longlong)plVar13 + 0xc) == 0) ||
                     (plVar3 == (longlong *)0x0)) {
                    local_378 = 0;
                    uStack_370 = 0;
                  }
                  else {
                    (**(code **)(*plVar3 + 0x18))(plVar3,&local_378);
                  }
                  FUN_146810246(local_338,plVar13 + 8,&local_378);
                  FUN_140f5cc6e(&local_e8,4,local_338,&local_460);
                  iVar16 = param_1[4];
                  param_1[4] = iVar16 + 1U;
                  if ((uint)param_1[5] < iVar16 + 1U) {
                    FUN_146812bec(local_590,iVar16);
                  }
                  local_580 = *local_590;
                  lVar11 = (longlong)iVar16 * 0x70;
                  *(undefined8 *)(local_580 + lVar11) = 0;
                  ((undefined8 *)(local_580 + lVar11))[1] = 0;
                  FUN_146810194(local_580 + lVar11,&local_e8);
                  puVar1 = (undefined4 *)(local_580 + 0x40 + lVar11);
                  *puVar1 = local_a8;
                  puVar1[1] = uStack_a4;
                  puVar1[2] = uStack_a0;
                  puVar1[3] = uStack_9c;
                  *(undefined8 *)(local_580 + 0x50 + lVar11) = local_98;
                  *(undefined4 *)(local_580 + 0x58 + lVar11) = local_90;
                  *(undefined1 *)(local_580 + 0x60 + lVar11) = 0;
                  if (local_88[0] == '\x01') {
                    local_88[0] = '\0';
                  }
                  if ((((local_e8._4_4_ != 0 || (int)local_e8 != 0) || (int)uStack_e0 != 0) ||
                      uStack_e0._4_4_ != 0) && local_d8 != (longlong **)0x0) {
                    (*(code *)*local_d8[0])(local_d8,0);
                  }
                  iVar16 = param_1[4] + -1;
                }
                local_464 = 0;
                local_3d8 = *plVar13;
                lStack_3d0 = plVar13[1];
                if (((*(int *)((longlong)plVar13 + 4) != 0 || (int)*plVar13 != 0) ||
                    (int)plVar13[1] != 0) || *(int *)((longlong)plVar13 + 0xc) != 0) {
                  (**(code **)(plVar13[2] + 8))(plVar3,local_3c8);
                  *plVar13 = 0;
                  plVar13[1] = 0;
                  (**(code **)plVar13[2])(plVar3,0);
                }
                local_388 = plVar13[10];
                local_398 = (int)plVar13[8];
                iStack_394 = *(int *)((longlong)plVar13 + 0x44);
                iStack_390 = (int)plVar13[9];
                iStack_38c = *(int *)((longlong)plVar13 + 0x4c);
                FUN_140f5cc6e(&local_158,3,&local_3d8,local_468);
                uVar10 = uStack_4a0;
                lVar11 = (longlong)(int)(uint)uStack_4a0;
                uVar8 = (uint)uStack_4a0 + 1;
                uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar8);
                if (uStack_4a0._4_4_ < uVar8) {
                  FUN_146812b66(&local_4a8,uVar10 & 0xffffffff);
                }
                iVar2 = *piVar12;
                local_e8 = (wchar_t *)local_158;
                uStack_e0 = uStack_150;
                lVar11 = lVar11 * 0x80 + local_4a8;
                if (((local_158._4_4_ != 0 || (int)local_158 != 0) || (int)uStack_150 != 0) ||
                    uStack_150._4_4_ != 0) {
                  (*(code *)local_148[0][1])(local_148,local_d8);
                  local_158 = (longlong *)0x0;
                  uStack_150 = 0;
                  (*(code *)*local_148[0])(local_148,0);
                }
                local_98 = local_108;
                local_a8 = local_118;
                uStack_a4 = uStack_114;
                uStack_a0 = uStack_110;
                uStack_9c = uStack_10c;
                local_90 = local_100;
                local_88[0] = '\0';
                FUN_140f5ce34(lVar11,&local_e8,iVar2,iVar16);
                plVar13 = local_158;
                uVar10 = uStack_150;
                goto joined_r0x000140f5bf34;
              }
              local_46c = 0;
              local_438 = 0;
              uStack_430 = 0;
              FUN_146810194(&local_438,plVar13);
              local_3f8 = (int)plVar13[8];
              iStack_3f4 = *(int *)((longlong)plVar13 + 0x44);
              iStack_3f0 = (int)plVar13[9];
              iStack_3ec = *(int *)((longlong)plVar13 + 0x4c);
              local_3e8 = plVar13[10];
              FUN_140f5cc6e(&local_e8,0,&local_438,local_470);
              iVar16 = param_1[4];
              param_1[4] = iVar16 + 1U;
              if ((uint)param_1[5] < iVar16 + 1U) {
                FUN_146812bec(local_590,iVar16);
              }
              lVar11 = *local_590;
              lVar9 = (longlong)iVar16 * 0x70;
              *(undefined8 *)(lVar11 + lVar9) = 0;
              ((undefined8 *)(lVar11 + lVar9))[1] = 0;
              FUN_146810194(lVar11 + lVar9,&local_e8);
              puVar1 = (undefined4 *)(lVar11 + 0x40 + lVar9);
              *puVar1 = local_a8;
              puVar1[1] = uStack_a4;
              puVar1[2] = uStack_a0;
              puVar1[3] = uStack_9c;
              *(undefined8 *)(lVar11 + 0x50 + lVar9) = local_98;
              *(undefined4 *)(lVar11 + 0x58 + lVar9) = local_90;
              *(undefined1 *)(lVar11 + 0x60 + lVar9) = 0;
              if (local_88[0] == '\x01') {
                local_88[0] = '\0';
              }
              plVar13 = local_d8[0];
              pplVar15 = local_d8;
              if ((((local_e8._4_4_ != 0 || (int)local_e8 != 0) || (int)uStack_e0 != 0) ||
                  uStack_e0._4_4_ != 0) && local_d8 != (longlong **)0x0) goto LAB_140f5c893;
              goto LAB_140f5bf6f;
            }
            if (0 < (int)(uint)uStack_4a0) {
              do {
                if (0 < *(int *)(local_4a8 + -0x10 + (ulonglong)(uint)uStack_4a0 * 0x80)) break;
                FUN_140f5cfba(&local_4b8);
              } while (0 < (int)(uint)uStack_4a0);
            }
            local_454 = 0;
            local_2d8 = *plVar13;
            lStack_2d0 = plVar13[1];
            if (((*(int *)((longlong)plVar13 + 4) != 0 || (int)*plVar13 != 0) ||
                (int)plVar13[1] != 0) || *(int *)((longlong)plVar13 + 0xc) != 0) {
              (**(code **)(plVar13[2] + 8))(plVar3,local_2c8);
              *plVar13 = 0;
              plVar13[1] = 0;
              (**(code **)plVar13[2])(plVar3,0);
            }
            local_288 = plVar13[10];
            local_298 = (int)plVar13[8];
            iStack_294 = *(int *)((longlong)plVar13 + 0x44);
            iStack_290 = (int)plVar13[9];
            iStack_28c = *(int *)((longlong)plVar13 + 0x4c);
            FUN_140f5cc6e(&local_158,2,&local_2d8,local_458);
            uVar10 = uStack_4a0;
            lVar11 = (longlong)(int)(uint)uStack_4a0;
            uVar8 = (uint)uStack_4a0 + 1;
            uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar8);
            if (uStack_4a0._4_4_ < uVar8) {
              FUN_146812b66(&local_4a8,uVar10 & 0xffffffff);
            }
            local_e8 = (wchar_t *)local_158;
            uStack_e0 = uStack_150;
            lVar11 = lVar11 * 0x80 + local_4a8;
            if (((local_158._4_4_ != 0 || (int)local_158 != 0) || (int)uStack_150 != 0) ||
                uStack_150._4_4_ != 0) {
              (*(code *)local_148[0][1])(local_148,local_d8);
              local_158 = (longlong *)0x0;
              uStack_150 = 0;
              (*(code *)*local_148[0])(local_148,0);
            }
            local_98 = local_108;
            local_a8 = local_118;
            uStack_a4 = uStack_114;
            uStack_a0 = uStack_110;
            uStack_9c = uStack_10c;
            local_90 = local_100;
            local_88[0] = '\0';
            FUN_140f5ce34(lVar11,&local_e8,0,0xffffffff);
            plVar13 = local_158;
            uVar10 = uStack_150;
joined_r0x000140f5bd18:
            if (local_f8 == '\x01') {
              local_f8 = '\0';
            }
            local_158._4_4_ = (int)((ulonglong)plVar13 >> 0x20);
            local_158._0_4_ = (int)plVar13;
            uStack_150._0_4_ = (int)uVar10;
            uStack_150._4_4_ = (int)(uVar10 >> 0x20);
            bVar6 = local_158._4_4_ != 0;
            bVar7 = (int)local_158 != 0;
            bVar5 = (int)uStack_150 != 0;
            bVar4 = uStack_150._4_4_ != 0;
            local_158 = plVar13;
            uStack_150 = uVar10;
            if ((((bVar6 || bVar7) || bVar5) || bVar4) && &stack0x00000000 != &DAT_00000148) {
              plVar13 = local_148[0];
              pplVar15 = local_148;
LAB_140f5c211:
              (*(code *)*plVar13)(pplVar15,0);
            }
          }
          else {
            iVar16 = FUN_140f5cb3a(*(longlong *)(param_1 + 6) + 0x50,iVar16,plVar13);
            if (iVar16 != -1) {
              local_43c = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              FUN_146810194(&local_1b8,plVar13);
              local_178 = (int)plVar13[8];
              iStack_174 = *(int *)((longlong)plVar13 + 0x44);
              iStack_170 = (int)plVar13[9];
              iStack_16c = *(int *)((longlong)plVar13 + 0x4c);
              local_168 = plVar13[10];
              FUN_140f5cc6e(&local_158,1,&local_1b8,local_440);
              uVar10 = uStack_4a0;
              lVar11 = (longlong)(int)(uint)uStack_4a0;
              uVar8 = (uint)uStack_4a0 + 1;
              uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar8);
              if (uStack_4a0._4_4_ < uVar8) {
                FUN_146812b66(&local_4a8,uVar10 & 0xffffffff);
              }
              lVar11 = lVar11 * 0x80 + local_4a8;
              local_e8 = (wchar_t *)0x0;
              uStack_e0 = 0;
              FUN_146810194(&local_e8,&local_158);
              local_a8 = local_118;
              uStack_a4 = uStack_114;
              uStack_a0 = uStack_110;
              uStack_9c = uStack_10c;
              local_98 = local_108;
              local_90 = local_100;
              local_88[0] = '\0';
              FUN_140f5ce34(lVar11,&local_e8,0,0xffffffff);
              plVar13 = local_158;
              uVar10 = uStack_150;
joined_r0x000140f5bf34:
              if (local_f8 == '\x01') {
                local_f8 = '\0';
              }
              local_158._4_4_ = (int)((ulonglong)plVar13 >> 0x20);
              local_158._0_4_ = (int)plVar13;
              uStack_150._0_4_ = (int)uVar10;
              uStack_150._4_4_ = (int)(uVar10 >> 0x20);
              bVar6 = local_158._4_4_ != 0;
              bVar7 = (int)local_158 != 0;
              bVar5 = (int)uStack_150 != 0;
              bVar4 = uStack_150._4_4_ != 0;
              local_158 = plVar13;
              uStack_150 = uVar10;
              if ((((bVar6 || bVar7) || bVar5) || bVar4) && &stack0x00000000 != &DAT_00000148) {
                plVar13 = local_148[0];
                pplVar15 = local_148;
LAB_140f5c893:
                (*(code *)*plVar13)(pplVar15,0);
              }
LAB_140f5bf6f:
              bVar4 = false;
              goto LAB_140f5bb6b;
            }
            lVar11 = FUN_140f5cd28(*(undefined8 *)(param_1 + 6),plVar13);
            if (lVar11 != 0) {
              FUN_14006620a(&local_4e8,plVar13[8],(ulonglong)(plVar13[9] - plVar13[8]) >> 1);
              FUN_140233b1a(local_4d8,&local_4e8);
              local_e8 = L"SyntaxError_NoBinaryOperand";
              uStack_e0._0_4_ = 0x1b;
              FUN_1446e940c(local_548,&local_e8);
              local_e8 = L"ExpressionParser";
              uStack_e0 = CONCAT44(uStack_e0._4_4_,0x10);
              FUN_1446e940c(local_568,&local_e8);
              FUN_140208bae(&local_508,local_568,local_548,
                            L"Syntax error: No operand specified for operator \'{0}\'");
              FUN_14023409e(&local_4f8,&local_508,1);
              local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
              FUN_14023423e(local_d8,local_4d8);
              local_478 = (char *)local_c8;
              local_480 = &local_e8;
              FUN_14010d304(&local_158);
              local_490 = local_4f8;
              local_488 = local_4f0;
              if (local_4f0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_4c8,&local_490,&local_158);
              FUN_14007f2db(local_158,uStack_150 & 0xffffffff);
              if (local_158 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_d8[0] != (longlong *)0x0) {
                (**(code **)(*local_d8[0] + 0x10))();
              }
              if (local_4f0 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_4f0 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*local_4f0)(local_4f0);
                  LOCK();
                  piVar12 = (int *)((longlong)local_4f0 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (*piVar12 == 0) {
                    (**(code **)(*local_4f0 + 0x10))(local_4f0);
                  }
                }
              }
              if (local_4d8[0] != (longlong *)0x0) {
                (**(code **)(*local_4d8[0] + 0x10))();
              }
              local_e8 = (wchar_t *)local_4c8;
              if (local_4c8 != (longlong *)0x0) {
                (**(code **)(*local_4c8 + 8))();
              }
              lVar11 = local_588;
              uStack_e0 = CONCAT44(uStack_e0._4_4_,local_4c0);
              FUN_14023423e(local_588,&local_e8);
              *(undefined1 *)(lVar11 + 0x10) = 1;
              if (local_e8 != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_e8 + 0x10))();
              }
              if (local_4c8 != (longlong *)0x0) {
                (**(code **)(*local_4c8 + 0x10))();
              }
              if (local_508 != (longlong *)0x0) {
                (**(code **)(*local_508 + 0x10))();
              }
              if (local_4e8 != 0) {
                FUN_1400020a8();
              }
              goto LAB_140f5c267;
            }
            uVar10 = plVar13[1];
            uVar17 = *plVar13 + 0x9ae16a3b2f90404f;
            uVar17 = ((uVar17 << 0x27 | uVar17 >> 0x19) + uVar10) * -0x651e95c4d06fbf91;
            uVar10 = ((uVar10 << 0x1b | uVar10 >> 0x25) * -0x651e95c4d06fbf91 + *plVar13 +
                      0x9ae16a3b2f90404f ^ uVar17) * -0x651e95c4d06fbf91;
            lVar11 = (uVar10 >> 0x2f ^ uVar17 ^ uVar10) * -0x651e95c4d06fbf91;
            iVar16 = FUN_140f5cb3a(*(longlong *)(param_1 + 6) + 0xa0,
                                   ((uint)((ulonglong)lVar11 >> 0x2f) ^ (uint)lVar11) * 0x2f90406f,
                                   plVar13);
            if (iVar16 != -1) {
              if (0 < (int)(uint)uStack_4a0) {
                do {
                  if (0 < *(int *)(local_4a8 + -0x10 + (ulonglong)(uint)uStack_4a0 * 0x80)) break;
                  FUN_140f5cfba(&local_4b8);
                } while (0 < (int)(uint)uStack_4a0);
              }
              local_444 = 0;
              local_218 = 0;
              uStack_210 = 0;
              FUN_146810194(&local_218,plVar13);
              local_1d8 = (int)plVar13[8];
              iStack_1d4 = *(int *)((longlong)plVar13 + 0x44);
              iStack_1d0 = (int)plVar13[9];
              iStack_1cc = *(int *)((longlong)plVar13 + 0x4c);
              local_1c8 = plVar13[10];
              FUN_140f5cc6e(&local_158,2,&local_218,local_448);
              uVar10 = uStack_4a0;
              lVar11 = (longlong)(int)(uint)uStack_4a0;
              uVar8 = (uint)uStack_4a0 + 1;
              uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar8);
              if (uStack_4a0._4_4_ < uVar8) {
                FUN_146812b66(&local_4a8,uVar10 & 0xffffffff);
              }
              lVar11 = lVar11 * 0x80 + local_4a8;
              local_e8 = (wchar_t *)0x0;
              uStack_e0 = 0;
              FUN_146810194(&local_e8,&local_158);
              local_a8 = local_118;
              uStack_a4 = uStack_114;
              uStack_a0 = uStack_110;
              uStack_9c = uStack_10c;
              local_98 = local_108;
              local_90 = local_100;
              local_88[0] = '\0';
              FUN_140f5ce34(lVar11,&local_e8,0,0xffffffff);
              plVar13 = local_158;
              uVar10 = uStack_150;
              goto joined_r0x000140f5bd18;
            }
            local_44c = 0;
            local_278 = *plVar13;
            lStack_270 = plVar13[1];
            if (((*(int *)((longlong)plVar13 + 4) != 0 || (int)*plVar13 != 0) ||
                (int)plVar13[1] != 0) || *(int *)((longlong)plVar13 + 0xc) != 0) {
              (**(code **)(plVar13[2] + 8))(plVar3,local_268);
              *plVar13 = 0;
              plVar13[1] = 0;
              (**(code **)plVar13[2])(plVar3,0);
            }
            local_228 = plVar13[10];
            local_238 = (int)plVar13[8];
            iStack_234 = *(int *)((longlong)plVar13 + 0x44);
            iStack_230 = (int)plVar13[9];
            iStack_22c = *(int *)((longlong)plVar13 + 0x4c);
            FUN_140f5cc6e(&local_e8,0,&local_278,local_450);
            iVar16 = param_1[4];
            param_1[4] = iVar16 + 1U;
            if ((uint)param_1[5] < iVar16 + 1U) {
              FUN_146812bec(local_590,iVar16);
            }
            lVar9 = *local_590;
            lVar14 = (longlong)iVar16 * 0x70;
            lVar11 = lVar9 + lVar14;
            *(undefined8 *)(lVar9 + lVar14) = 0;
            ((undefined8 *)(lVar9 + lVar14))[1] = 0;
            piVar12 = (int *)(lVar9 + lVar14);
            *piVar12 = (int)local_e8;
            piVar12[1] = local_e8._4_4_;
            piVar12[2] = (int)uStack_e0;
            piVar12[3] = uStack_e0._4_4_;
            if (((local_e8._4_4_ != 0 || (int)local_e8 != 0) || (int)uStack_e0 != 0) ||
                uStack_e0._4_4_ != 0) {
              (*(code *)local_d8[0][1])(local_d8,lVar11 + 0x10);
              local_e8 = (wchar_t *)0x0;
              uStack_e0 = 0;
              (*(code *)*local_d8[0])(local_d8,0);
            }
            *(undefined8 *)(lVar11 + 0x50) = local_98;
            *(undefined4 *)(lVar11 + 0x40) = local_a8;
            *(undefined4 *)(lVar11 + 0x44) = uStack_a4;
            *(undefined4 *)(lVar11 + 0x48) = uStack_a0;
            *(undefined4 *)(lVar11 + 0x4c) = uStack_9c;
            *(undefined4 *)(lVar11 + 0x58) = local_90;
            *(undefined1 *)(lVar11 + 0x60) = 0;
            if (local_88[0] == '\x01') {
              local_88[0] = '\0';
            }
            plVar13 = local_d8[0];
            pplVar15 = local_d8;
            if ((((local_e8._4_4_ != 0 || (int)local_e8 != 0) || (int)uStack_e0 != 0) ||
                uStack_e0._4_4_ != 0) && local_d8 != (longlong **)0x0) goto LAB_140f5c211;
          }
          bVar4 = true;
        }
        else {
          *param_1 = *param_1 + 1;
          FUN_140f5b7d4(param_1,local_588,plVar13,lVar9 + 0x10);
          bVar4 = true;
          if (*(char *)(lVar11 + 0x10) != '\0') goto LAB_140f5c267;
        }
LAB_140f5bb6b:
        iVar16 = *param_1 + 1;
        *param_1 = iVar16;
        plVar13 = *(longlong **)(param_1 + 8);
      } while (iVar16 < (int)plVar13[1]);
    }
  }
  lVar11 = local_578;
  if (param_4 == (int *)0x0) {
LAB_140f5c23a:
    if (0 < (int)(uint)uStack_4a0) {
      do {
        FUN_140f5cfba(&local_4b8);
      } while (0 < (int)(uint)uStack_4a0);
    }
    *(undefined1 *)(local_588 + 0x10) = 0;
  }
  else {
    local_4e8 = 0;
    plStack_4e0 = (longlong *)0x0;
    FUN_1413a4536(local_518,*(undefined4 *)(local_578 + 0x54),0);
    local_508 = (longlong *)0x0;
    plStack_500 = (longlong *)0x0;
    FUN_1413a4536(local_528,*(undefined4 *)(lVar11 + 0x50),0);
    FUN_14006620a(local_548,*(longlong *)(lVar11 + 0x40),
                  (ulonglong)(*(longlong *)(lVar11 + 0x48) - *(longlong *)(lVar11 + 0x40)) >> 1);
    FUN_140233b1a(local_538,local_548);
    local_e8 = L"SyntaxError_UnmatchedGroup";
    uStack_e0._0_4_ = 0x1a;
    FUN_1446e940c(local_56c,&local_e8);
    local_e8 = L"ExpressionParser";
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x10);
    FUN_1446e940c(local_570,&local_e8);
    FUN_140208bae(local_568,local_570,local_56c,
                  L"Syntax error: Reached end of expression before matching end of group \'{0}\' at line {1}:{2}"
                 );
    FUN_14023409e(&local_558,local_568,1);
    local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
    FUN_14023423e(local_d8,local_538);
    local_c8[0] = 4;
    FUN_14023423e(local_b8,local_528);
    local_a8 = 4;
    FUN_14023423e(&local_98,local_518);
    local_478 = local_88;
    local_480 = &local_e8;
    FUN_14010d304(&local_158);
    local_490 = local_558;
    local_488 = local_550;
    if (local_550 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_550 + 1) = (int)local_550[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_4c8,&local_490,&local_158);
    FUN_14007f2db(local_158,uStack_150 & 0xffffffff);
    if (local_158 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    lVar11 = 0x50;
    do {
      if (*(longlong **)((longlong)&local_e8 + lVar11) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_e8 + lVar11) + 0x10))();
        *(undefined8 *)((longlong)&local_e8 + lVar11) = 0;
        *(undefined4 *)((longlong)local_d8 + lVar11 + -8) = 0;
      }
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != -0x10);
    if (local_550 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_550 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_550)(local_550);
        LOCK();
        piVar12 = (int *)((longlong)local_550 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*local_550 + 0x10))(local_550);
        }
      }
    }
    if (local_538[0] != (longlong *)0x0) {
      (**(code **)(*local_538[0] + 0x10))();
    }
    if (local_528[0] != (longlong *)0x0) {
      (**(code **)(*local_528[0] + 0x10))();
    }
    if (local_518[0] != (longlong *)0x0) {
      (**(code **)(*local_518[0] + 0x10))();
    }
    local_e8 = (wchar_t *)local_4c8;
    if (local_4c8 != (longlong *)0x0) {
      (**(code **)(*local_4c8 + 8))();
    }
    lVar11 = local_588;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,local_4c0);
    FUN_14023423e(local_588,&local_e8);
    *(undefined1 *)(lVar11 + 0x10) = 1;
    if (local_e8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_e8 + 0x10))();
    }
    if (local_4c8 != (longlong *)0x0) {
      (**(code **)(*local_4c8 + 0x10))();
    }
    if (local_568[0] != (longlong *)0x0) {
      (**(code **)(*local_568[0] + 0x10))();
    }
    if (local_548[0] != 0) {
      FUN_1400020a8();
    }
    plVar13 = plStack_500;
    if (plStack_500 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_500 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_500)(plStack_500);
        LOCK();
        piVar12 = (int *)((longlong)plVar13 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    plVar13 = plStack_4e0;
    if (plStack_4e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_4e0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_4e0)(plStack_4e0);
        LOCK();
        piVar12 = (int *)((longlong)plVar13 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
LAB_140f5c267:
  FUN_140f5cc21(local_4a8,uStack_4a0 & 0xffffffff);
  if (local_4a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return local_588;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5cb3a FUN_140f5cb3a body=115 status=ok
// SIG undefined FUN_140f5cb3a(void)

int FUN_140f5cb3a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x18) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x18) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x18) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x18) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f5cbae FUN_140f5cbae body=115 status=ok
// SIG undefined FUN_140f5cbae(void)

int FUN_140f5cbae(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f5cc21 FUN_140f5cc21 body=77 status=ok
// SIG undefined FUN_140f5cc21(void)

void FUN_140f5cc21(int *param_1,int param_2)

{
  int *piVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((char)param_1[0x18] == '\x01') {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    piVar1 = param_1 + 4;
    if (piVar1 != (int *)0x0 &&
        (((param_1[1] != 0 || *param_1 != 0) || param_1[2] != 0) || param_1[3] != 0)) {
      (*(code *)**(undefined8 **)piVar1)(piVar1,0);
    }
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 140f5cc6e FUN_140f5cc6e body=185 status=ok
// SIG undefined FUN_140f5cc6e(void)

int * FUN_140f5cc6e(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar3 = param_3[1];
  iVar1 = param_3[2];
  iVar2 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = iVar3;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    (**(code **)(*(longlong *)(param_3 + 4) + 8))(param_3 + 4,param_1 + 4);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    (*(code *)**(undefined8 **)(param_3 + 4))(param_3 + 4,0);
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_3 + 0x14);
  iVar3 = param_3[0x11];
  iVar1 = param_3[0x12];
  iVar2 = param_3[0x13];
  param_1[0x10] = param_3[0x10];
  param_1[0x11] = iVar3;
  param_1[0x12] = iVar1;
  param_1[0x13] = iVar2;
  param_1[0x16] = param_2;
  iVar3 = param_4[1];
  *(char *)(param_1 + 0x18) = (char)iVar3;
  if ((char)iVar3 == '\x01') {
    param_1[0x17] = *param_4;
  }
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    (*(code *)**(undefined8 **)(param_3 + 4))(param_3 + 4,0);
  }
  if ((char)param_4[1] == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 140f5cd28 FUN_140f5cd28 body=155 status=ok
// SIG undefined FUN_140f5cd28(void)

longlong FUN_140f5cd28(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar2 = param_2[1];
  uVar5 = *param_2 + 0x9ae16a3b2f90404f;
  uVar5 = ((uVar5 << 0x27 | uVar5 >> 0x19) + uVar2) * -0x651e95c4d06fbf91;
  uVar2 = (*param_2 + (uVar2 << 0x1b | uVar2 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar5) * -0x651e95c4d06fbf91;
  lVar3 = (uVar2 >> 0x2f ^ uVar5 ^ uVar2) * -0x651e95c4d06fbf91;
  iVar1 = FUN_140f5cdc4((longlong *)(param_1 + 0xf0),
                        ((uint)((ulonglong)lVar3 >> 0x2f) ^ (uint)lVar3) * 0x2f90406f,param_2);
  if (iVar1 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x24 + *(longlong *)(param_1 + 0xf0);
  }
  lVar4 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 140f5cdc4 FUN_140f5cdc4 body=112 status=ok
// SIG undefined FUN_140f5cdc4(void)

int FUN_140f5cdc4(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x24) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x24) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x24) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x24) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x24 + 0x1c);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f5ce34 FUN_140f5ce34 body=177 status=ok
// SIG undefined FUN_140f5ce34(void)

int * FUN_140f5ce34(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  if (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) {
    (**(code **)(*(longlong *)(param_2 + 4) + 8))(param_2 + 4,param_1 + 4);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    (*(code *)**(undefined8 **)(param_2 + 4))(param_2 + 4,0);
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  iVar1 = param_2[0x11];
  iVar2 = param_2[0x12];
  iVar3 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = iVar1;
  param_1[0x12] = iVar2;
  param_1[0x13] = iVar3;
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = param_3;
  param_1[0x1d] = param_4;
  if ((char)param_2[0x18] == '\x01') {
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  if (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) {
    (*(code *)**(undefined8 **)(param_2 + 4))(param_2 + 4,0);
  }
  return param_1;
}



// FUNCTION 140f5cee6 FUN_140f5cee6 body=212 status=ok
// SIG undefined FUN_140f5cee6(void)

void FUN_140f5cee6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x100) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 8]];
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
    if ((int)param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 140f5cfba FUN_140f5cfba body=885 status=ok
// SIG undefined FUN_140f5cfba(void)

void FUN_140f5cfba(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 *local_138 [6];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  char local_e8;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8 [6];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  char local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)*param_1;
  lVar4 = param_1[1];
  lVar8 = *plVar3;
  uVar10 = (int)plVar3[1] - 1;
  lVar6 = (longlong)(int)uVar10;
  iVar2 = *(int *)(lVar8 + 0x74 + lVar6 * 0x80);
  lVar9 = (longlong)(int)plVar3[1] * 0x80;
  lVar1 = lVar8 + lVar9;
  lVar9 = lVar8 + lVar9;
  piVar11 = (int *)(lVar9 + -0x80);
  if (((*(int *)(lVar9 + -0x7c) == 0 && *piVar11 == 0) && *(int *)(lVar9 + -0x78) == 0) &&
      *(int *)(lVar9 + -0x74) == 0) {
    local_148 = *(undefined8 *)piVar11;
    uStack_140 = *(undefined8 *)(lVar9 + -0x78);
  }
  else {
    local_148 = *(undefined8 *)piVar11;
    uStack_140 = *(undefined8 *)(lVar9 + -0x78);
    (**(code **)(*(longlong *)(lVar1 + -0x70) + 8))(lVar1 + -0x70);
    piVar11[0] = 0;
    piVar11[1] = 0;
    *(undefined8 *)(lVar9 + -0x78) = 0;
    (*(code *)**(undefined8 **)(lVar1 + -0x70))(lVar1 + -0x70,0);
    lVar6 = (longlong)(int)plVar3[1] + -1;
    lVar8 = *plVar3;
    uVar10 = (uint)lVar6;
  }
  local_f8 = *(undefined8 *)(lVar1 + -0x30);
  local_108 = *(undefined4 *)(lVar1 + -0x40);
  uStack_104 = *(undefined4 *)(lVar1 + -0x3c);
  uStack_100 = *(undefined4 *)(lVar1 + -0x38);
  uStack_fc = *(undefined4 *)(lVar1 + -0x34);
  local_f0 = *(undefined4 *)(lVar1 + -0x28);
  local_e8 = '\0';
  local_d8 = *(undefined4 *)(lVar1 + -0x10);
  piVar11 = (int *)(lVar8 + lVar6 * 0x80);
  if (*(char *)(lVar8 + 0x60 + lVar6 * 0x80) == '\x01') {
    *(undefined1 *)(piVar11 + 0x18) = 0;
  }
  if ((((piVar11[1] != 0 || *piVar11 != 0) || piVar11[2] != 0) || piVar11[3] != 0) &&
     (piVar7 = piVar11 + 4, piVar7 != (int *)0x0)) {
    (*(code *)**(undefined8 **)piVar7)(piVar7,0);
  }
  iVar5 = (int)plVar3[1];
  if (~uVar10 + iVar5 != 0) {
    memmove(piVar11,piVar11 + 0x20,(longlong)(int)(~uVar10 + iVar5) << 7);
    iVar5 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar5 + -1;
  if (((local_148._4_4_ == 0 && (int)local_148 == 0) && (int)uStack_140 == 0) &&
      uStack_140._4_4_ == 0) {
    local_c8 = local_148;
    uStack_c0 = uStack_140;
  }
  else {
    local_c8 = local_148;
    uStack_c0 = uStack_140;
    (*(code *)local_138[0][1])(local_138);
    local_148 = 0;
    uStack_140 = 0;
    (*(code *)*local_138[0])(local_138,0);
  }
  local_78 = local_f8;
  local_88 = local_108;
  uStack_84 = uStack_104;
  uStack_80 = uStack_100;
  uStack_7c = uStack_fc;
  local_70 = local_f0;
  local_68 = '\0';
  iVar5 = *(int *)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x10) = iVar5 + 1U;
  if (*(uint *)(lVar4 + 0x14) < iVar5 + 1U) {
    FUN_146812bec((longlong *)(lVar4 + 8),iVar5);
  }
  lVar9 = *(longlong *)(lVar4 + 8);
  lVar8 = (longlong)iVar5 * 0x70;
  lVar1 = lVar9 + lVar8;
  *(undefined8 *)(lVar9 + lVar8) = 0;
  ((undefined8 *)(lVar9 + lVar8))[1] = 0;
  piVar11 = (int *)(lVar9 + lVar8);
  *piVar11 = (int)local_c8;
  piVar11[1] = local_c8._4_4_;
  piVar11[2] = (int)uStack_c0;
  piVar11[3] = uStack_c0._4_4_;
  if (((local_c8._4_4_ != 0 || (int)local_c8 != 0) || (int)uStack_c0 != 0) || uStack_c0._4_4_ != 0)
  {
    (*(code *)local_b8[0][1])(local_b8,lVar1 + 0x10);
    local_c8 = 0;
    uStack_c0 = 0;
    (*(code *)*local_b8[0])(local_b8,0);
  }
  *(undefined8 *)(lVar1 + 0x50) = local_78;
  *(undefined4 *)(lVar1 + 0x40) = local_88;
  *(undefined4 *)(lVar1 + 0x44) = uStack_84;
  *(undefined4 *)(lVar1 + 0x48) = uStack_80;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_7c;
  *(undefined4 *)(lVar1 + 0x58) = local_70;
  *(undefined1 *)(lVar1 + 0x60) = 0;
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  if (local_b8 != (undefined8 **)0x0 &&
      (((local_c8._4_4_ != 0 || (int)local_c8 != 0) || (int)uStack_c0 != 0) || uStack_c0._4_4_ != 0)
     ) {
    (*(code *)*local_b8[0])(local_b8,0);
  }
  if (local_e8 == '\x01') {
    local_e8 = '\0';
  }
  if (local_138 != (undefined8 **)0x0 &&
      (((local_148._4_4_ != 0 || (int)local_148 != 0) || (int)uStack_140 != 0) ||
      uStack_140._4_4_ != 0)) {
    (*(code *)*local_138[0])(local_138,0);
  }
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(lVar4 + 8);
    lVar9 = (longlong)iVar2 * 0x70;
    *(int *)(lVar1 + 0x5c + lVar9) = *(int *)(lVar4 + 0x10) + -1;
    *(undefined1 *)(lVar1 + 0x60 + lVar9) = 1;
  }
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5d330 FUN_140f5d330 body=29 status=ok
// SIG undefined FUN_140f5d330(void)

void FUN_140f5d330(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140f5d34e FUN_140f5d34e body=31 status=ok
// SIG undefined FUN_140f5d34e(void)

undefined8 FUN_140f5d34e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f5d36e FUN_140f5d36e body=42 status=ok
// SIG undefined FUN_140f5d36e(void)

void FUN_140f5d36e(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 140f5d398 FUN_140f5d398 body=76 status=ok
// SIG undefined FUN_140f5d398(void)

undefined8 * FUN_140f5d398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x198,0x10);
  FUN_140f5d3e4(puVar1,param_2,param_1,param_3);
  *puVar1 = &PTR_FUN_14b97b6d0;
  return puVar1;
}



// FUNCTION 140f5d3e4 FUN_140f5d3e4 body=319 status=ok
// SIG undefined FUN_140f5d3e4(void)

undefined8 *
FUN_140f5d3e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b419b40;
  param_1[5] = param_4;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b419c20;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[2] = &PTR_FUN_14b41a870;
  puVar1[10] = param_1;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  param_1[6] = puVar1 + 2;
  param_1[7] = puVar1;
  FUN_140f5d524(param_1 + 6);
  param_1[8] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0x100000000;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  memset((void *)((longlong)param_1 + 0xec),0,0x8c);
  *(undefined4 *)(param_1 + 0x2f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x32] = 2;
  return param_1;
}



// FUNCTION 140f5d524 FUN_140f5d524 body=162 status=ok
// SIG undefined FUN_140f5d524(void)

void FUN_140f5d524(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140f5d563;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140f5d563;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140f5d563:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f5d5c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140f5d5c6 FUN_140f5d5c6 body=197 status=ok
// SIG undefined FUN_140f5d5c6(void)

longlong FUN_140f5d5c6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_140f5d66e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140f5d68c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_140f5d66e:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140f5d68c FUN_140f5d68c body=298 status=ok
// SIG undefined FUN_140f5d68c(void)

undefined4 *
FUN_140f5d68c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410c54a6(param_1,local_58);
  FUN_140f5d7b8(param_4,local_50);
  *(undefined4 *)(local_50 + 0x58) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1410c5220(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)(local_50 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1410c574c(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5d7b8 FUN_140f5d7b8 body=151 status=ok
// SIG undefined FUN_140f5d7b8(void)

undefined8 * FUN_140f5d7b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1410c51a2(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140d979a6(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5d850 FUN_140f5d850 body=49 status=ok
// SIG undefined FUN_140f5d850(void)

bool FUN_140f5d850(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_140f5d882(param_1,param_3);
    (**(code **)(*param_2 + 8))(param_2,lVar1 + 8,0);
  }
  return param_2 != (longlong *)0x0;
}



// FUNCTION 140f5d882 FUN_140f5d882 body=175 status=ok
// SIG undefined FUN_140f5d882(void)

longlong FUN_140f5d882(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0xb8) * 0x48;
    do {
      if ((longlong)*(int *)(lVar3 + 0x30) == 0) {
        return lVar3;
      }
      plVar4 = *(longlong **)(lVar3 + 0x28);
      plVar2 = plVar4 + *(int *)(lVar3 + 0x30);
      while( true ) {
        if ((int)param_2[1] != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*param_2 + lVar5) == *plVar4) goto LAB_140f5d8da;
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)param_2[1] << 3 != lVar5);
        }
        if ((longlong)(int)param_2[3] == 0) break;
        lVar5 = 0;
        while (*(longlong *)(param_2[2] + lVar5) != *plVar4) {
          lVar5 = lVar5 + 8;
          if ((longlong)(int)param_2[3] * 8 == lVar5) goto LAB_140f5d91c;
        }
LAB_140f5d8da:
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar2) {
          return lVar3;
        }
      }
LAB_140f5d91c:
      lVar3 = lVar3 + 0x48;
    } while (lVar3 != lVar1);
  }
  return param_1 + 0x88;
}



// FUNCTION 140f5d932 FUN_140f5d932 body=215 status=ok
// SIG undefined FUN_140f5d932(void)

void FUN_140f5d932(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar5 = 0;
  local_48 = lVar3 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_40 = lVar5;
  }
  local_38 = lVar3 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_38 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_50 = lVar5;
  }
  FUN_140f5da0a(param_3 + 8,lVar2,lVar4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5da0a FUN_140f5da0a body=341 status=ok
// SIG undefined FUN_140f5da0a(void)

void FUN_140f5da0a(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar6 = (ulonglong)uVar1;
  lVar2 = *param_4;
  local_60 = param_3;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      lVar2 = param_4[2];
      if ((lVar2 != 0) && (uVar1 != 0)) {
        lVar5 = 0;
        do {
          uVar3 = *(undefined8 *)(local_60 + lVar5);
          uVar4 = *(undefined8 *)(lVar2 + lVar5 * 2);
          local_58 = *(longlong *)(param_5 + lVar5 * 2);
          if ((DAT_14c950c29 == '\x01') && (local_58 != 0)) {
            FUN_1456cec3c();
          }
          local_50 = *(undefined1 *)(param_5 + 8 + lVar5 * 2);
          FUN_140f5db60(uVar3,&local_58,uVar4,param_6);
          lVar5 = lVar5 + 8;
          param_6 = param_6 + 0x10;
        } while ((ulonglong)uVar1 * 8 != lVar5);
      }
    }
    else if (uVar6 != 0) {
      uVar7 = 0;
      do {
        FUN_1475e4a6e(*(undefined8 *)(local_60 + uVar7 * 8),*(undefined2 *)(lVar2 + uVar7 * 2),
                      param_5,param_6);
        uVar7 = uVar7 + 1;
        param_5 = param_5 + 0x10;
        param_6 = param_6 + 0x10;
      } while (uVar6 != uVar7);
    }
  }
  else if (uVar6 != 0) {
    uVar7 = 0;
    do {
      local_68 = param_6;
      FUN_1475e49b0(param_1,*(undefined8 *)(local_60 + uVar7 * 8),*(undefined2 *)(lVar2 + uVar7 * 2)
                    ,param_5);
      uVar7 = uVar7 + 1;
      param_5 = param_5 + 0x10;
      param_6 = param_6 + 0x10;
    } while (uVar6 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5db60 FUN_140f5db60 body=122 status=ok
// SIG undefined FUN_140f5db60(void)

void FUN_140f5db60(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1406f4b62(param_4);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar2 == 0) {
    if ((char)param_2[1] == '\0') {
      return;
    }
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30) {
      return;
    }
  }
  uVar3 = FUN_1406f4b62(param_4);
  FUN_140f5dbda(param_3,param_1,uVar3);
  return;
}



// FUNCTION 140f5dbda FUN_140f5dbda body=895 status=ok
// SIG undefined FUN_140f5dbda(void)

void FUN_140f5dbda(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = param_3;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar2 == (longlong *)0x0) {
    if ((((local_2c == 0) || ((int)local_30 < 0)) || (DAT_14c9647dc <= (int)local_30)) ||
       (((plVar2 = (longlong *)
                   ((ulonglong)((local_30 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8)),
         plVar2 == (longlong *)0x0 || ((int)plVar2[2] != local_2c)) ||
        (((*(uint *)(plVar2 + 1) & 0x10200000) != 0 || (lVar5 = *plVar2, lVar5 == 0))))))
    goto LAB_140f5ddb6;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,&local_20);
      goto LAB_140f5ddb6;
    }
    if (((local_2c == 0) || ((int)local_30 < 0)) ||
       ((DAT_14c9647dc <= (int)local_30 ||
        ((((plVar4 = (longlong *)
                     ((ulonglong)((local_30 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8)),
           plVar4 == (longlong *)0x0 || ((int)plVar4[2] != local_2c)) ||
          ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) || (lVar5 = *plVar4, lVar5 == 0)))))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_78 = (undefined *)FUN_140342cba();
          local_70 = FUN_1468c7f1e;
          local_80 = 0;
          local_88 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_70 = FUN_1468d96f0;
        local_78 = &DAT_14c951a38;
        local_80 = 0;
        local_88 = 0x4008001;
        FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
        atexit(FUN_14281144d);
        _Init_thread_footer(&DAT_14c951cc8);
      }
      puVar3 = (undefined *)plVar2[1];
      if (DAT_14c951c80 == 0) {
        bVar6 = puVar3 != (undefined *)0x0;
        if (puVar3 != &DAT_14c951c78 && bVar6) {
          do {
            puVar3 = *(undefined **)(puVar3 + 0x30);
            bVar6 = puVar3 != (undefined *)0x0;
            if (puVar3 == &DAT_14c951c78) break;
          } while (puVar3 != (undefined *)0x0);
        }
        if (!bVar6) goto LAB_140f5ddb6;
      }
      else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951c80) == 0) goto LAB_140f5ddb6;
      if ((local_20 != 0) || ((*(byte *)((longlong)plVar2 + 0x39) & 0x10) == 0)) {
        (**(code **)(*plVar2 + 0x1f0))(plVar2,*(int *)((longlong)plVar2 + 0x44) + local_38);
      }
      goto LAB_140f5ddb6;
    }
  }
  FUN_14633fe20(param_2,lVar5,&local_20);
LAB_140f5ddb6:
  if ((((local_24 != 0) && (-1 < (int)local_28)) && ((int)local_28 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((local_28 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == local_24)) &&
      (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))))) {
    (**(code **)(*param_2 + 0x248))(param_2,*plVar2,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5df5a FUN_140f5df5a body=152 status=ok
// SIG undefined FUN_140f5df5a(void)

undefined4 FUN_140f5df5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f874f6(param_2,&local_38);
  if (local_38 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140f5dff4(local_38,param_1,param_2,param_3);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5dff4 FUN_140f5dff4 body=308 status=ok
// SIG undefined FUN_140f5dff4(void)

undefined4 FUN_140f5dff4(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_1;
  local_68 = param_3;
  local_60 = param_4;
  if ((longlong)(int)param_2[1] != 0) {
    plVar11 = (longlong *)*param_2;
    plVar1 = plVar11 + (int)param_2[1];
    do {
      lVar9 = (longlong)*(int *)(*plVar11 + 0x160);
      if (lVar9 != 0) {
        lVar3 = *(longlong *)(*plVar11 + 0x158);
        lVar10 = 0;
        do {
          uVar6 = uStack_50;
          lVar12 = (longlong)(int)uStack_50;
          uVar7 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
          if (uStack_50._4_4_ < uVar7) {
            FUN_140f87bbc(&local_58,uVar6 & 0xffffffff);
          }
          lVar2 = local_58;
          lVar4 = *(longlong *)(lVar3 + lVar10);
          uVar5 = *(undefined8 *)(lVar3 + 8 + lVar10);
          *(longlong *)(local_58 + lVar12 * 0x18) = lVar4;
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          lVar2 = lVar2 + lVar12 * 0x18;
          *(undefined8 *)(lVar2 + 8) = uVar5;
          *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
          lVar10 = lVar10 + 0x30;
        } while (lVar9 * 0x30 != lVar10);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  uVar8 = FUN_140f87d32(local_70,&local_58,local_68,local_60);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5e12a FUN_140f5e12a body=82 status=ok
// SIG undefined FUN_140f5e12a(void)

void FUN_140f5e12a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140f5e17c();
  if (*(char *)(param_1 + 0x468) == '\x01') {
    iVar1 = *(int *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
      FUN_14570482e(param_2,iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    *(undefined ***)(lVar2 + (longlong)iVar1 * 8) = &PTR_PTR_14c763fe0;
  }
  return;
}



// FUNCTION 140f5e17c FUN_140f5e17c body=65 status=ok
// SIG undefined FUN_140f5e17c(void)

void FUN_140f5e17c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x28);
  *(uint *)(param_2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
    FUN_14570482e(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar2 = param_2;
  }
  *(undefined ***)(lVar2 + (longlong)iVar1 * 8) = &PTR_PTR_14c763990;
  return;
}



// FUNCTION 140f5e1c2 FUN_140f5e1c2 body=221 status=ok
// SIG undefined FUN_140f5e1c2(void)

longlong FUN_140f5e1c2(void)

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
  if (DAT_14cacd4c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14793c848;
    local_40 = FUN_14168a631;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x5c8;
    FUN_14081cfa3(L"/Script/Engine",L"Skeleton",&DAT_14cacd4c8,FUN_1463ab114);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacd4c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5e2a8 FUN_140f5e2a8 body=361 status=ok
// SIG undefined FUN_140f5e2a8(void)

undefined8 * FUN_140f5e2a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b322ee0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x34002;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3002;
  param_1[0x22] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x200000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf00000d0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xbf800000;
  FUN_1405c5fa2();
  param_1[0x3c] = &DAT_14cb769e8;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = &PTR_FUN_14b0394b0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x41) = 0;
  return param_1;
}



// FUNCTION 140f5e41a FUN_140f5e41a body=386 status=ok
// SIG undefined FUN_140f5e41a(void)

void FUN_140f5e41a(longlong *param_1)

{
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140a40516(param_1[0x21],(int)param_1[0x22]);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1e],(int)param_1[0x1f]);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9035b(param_1[0x1c],(int)param_1[0x1d]);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],(int)param_1[0x13]);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],(int)param_1[0x10]);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f5e5aa FUN_140f5e5aa body=40 status=ok
// SIG undefined FUN_140f5e5aa(void)

undefined8 FUN_140f5e5aa(undefined8 param_1,int param_2)

{
  FUN_140f5e5d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f5e5d2 FUN_140f5e5d2 body=250 status=ok
// SIG undefined FUN_140f5e5d2(void)

void FUN_140f5e5d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a2d70;
  FUN_140f5e6cd(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_140f5e6cc(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f5e6cc FUN_140f5e6cc body=1 status=ok
// SIG undefined FUN_140f5e6cc(void)

void FUN_140f5e6cc(void)

{
  return;
}



// FUNCTION 140f5e6cd FUN_140f5e6cd body=43 status=ok
// SIG undefined FUN_140f5e6cd(void)

void FUN_140f5e6cd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140f5e6f8(param_1);
    param_1 = param_1 + 0x108;
  }
  return;
}



// FUNCTION 140f5e6f8 FUN_140f5e6f8 body=83 status=ok
// SIG undefined FUN_140f5e6f8(void)

void FUN_140f5e6f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a42e020;
  FUN_1448d844e(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140280a77(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f5e74c FUN_140f5e74c body=562 status=ok
// SIG undefined FUN_140f5e74c(void)

void FUN_140f5e74c(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == 3) && (*(longlong *)(param_1 + 0x690) != 0)) {
    FUN_145893eaa(param_1);
  }
  FUN_1448c4a0e(param_1,param_2);
  if (*(longlong *)(param_1 + 0x638) == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(longlong *)(*(longlong *)(param_1 + 0x638) + 0x30);
  }
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  FUN_140c88a82(&local_68,lVar6);
  if (local_60 != (longlong *)0x0) {
    iVar5 = (int)local_60[1];
    do {
      if (iVar5 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_60[1];
      bVar12 = iVar5 == iVar4;
      if (bVar12) {
        *(int *)(local_60 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar11 = local_60;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    puVar3 = local_68;
    if (plVar11 != (longlong *)0x0) {
      if (((local_68 != (undefined1 *)0x0) && (local_70 != 0)) &&
         (*(int *)(local_68 + 0x38) != *(int *)(local_68 + 100))) {
        uVar2 = (uint)((ulonglong)local_70 >> 0x10);
        uVar9 = (uint)local_70 & 0xffff;
        puVar7 = local_68 + 0x68;
        if (*(undefined1 **)(local_68 + 0x70) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(local_68 + 0x70);
        }
        iVar5 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)(local_68 + 0x78) - 1U &
                                  (int)((ulonglong)local_70 >> 0x20) +
                                  ((uint)local_70 << 0x10 | uVar9) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            plVar10 = (longlong *)(*(longlong *)(local_68 + 0x30) + (longlong)iVar5 * 0x14);
            if (*plVar10 == local_70) {
              if (((plVar10 != (longlong *)0x0) &&
                  (plVar10 = plVar10 + 1, plVar10 != (longlong *)0x0)) &&
                 (lVar6 = *plVar10, *(int *)plVar10 = (int)lVar6 + -1, (int)lVar6 < 2)) {
                FUN_140f5e980(local_68 + 0x30,&local_70);
                local_58 = (undefined ***)0x0;
                local_48 = &PTR_LAB_14b41f5f0;
                local_68 = &LAB_143e06dd6;
                local_40 = &local_70;
                FUN_140f5eafc(puVar3,&local_68);
                if (local_68 != (undefined1 *)0x0) {
                  pppuVar8 = local_58;
                  if (local_58 == (undefined ***)0x0) {
                    pppuVar8 = &local_48;
                  }
                  (*(code *)(*pppuVar8)[2])();
                }
              }
              break;
            }
            iVar5 = *(int *)((longlong)plVar10 + 0xc);
          } while (iVar5 != -1);
        }
      }
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5e980 FUN_140f5e980 body=152 status=ok
// SIG undefined FUN_140f5e980(void)

undefined8 FUN_140f5e980(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x14) == lVar2) {
          FUN_140f5ea18();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140f5ea18 FUN_140f5ea18 body=91 status=ok
// SIG undefined FUN_140f5ea18(void)

void FUN_140f5ea18(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_140f5ea74(param_1,param_2,1);
  return;
}



// FUNCTION 140f5ea74 FUN_140f5ea74 body=136 status=ok
// SIG undefined FUN_140f5ea74(void)

void FUN_140f5ea74(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f5eafc FUN_140f5eafc body=642 status=ok
// SIG undefined FUN_140f5eafc(void)

void FUN_140f5eafc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  
  iVar13 = *(int *)(param_1 + 0x108);
  if (iVar13 == 0) {
    uVar21 = 1;
    uVar18 = 0;
    iVar14 = 0;
    iVar16 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0xf0);
    }
    uVar17 = *puVar10;
    if (uVar17 == 0) {
      iVar14 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar14 = iVar13 + -1;
      }
      uVar18 = 0;
      uVar21 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar21 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar21 == uVar18) {
          return;
        }
        iVar14 = iVar14 + 0x20;
        uVar17 = puVar10[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar21 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = uVar21 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar16 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar16) {
      iVar16 = iVar13;
    }
  }
  if (iVar16 < iVar13) {
    plVar1 = (longlong *)(param_1 + 0xe0);
    uVar17 = 0xffffffff;
    do {
      lVar15 = (longlong)iVar16 * 0x40;
      lVar20 = *plVar1;
      pcVar3 = (code *)*param_2;
      plVar11 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar11 = param_2 + 4;
      }
      uVar6 = (**(code **)(*plVar11 + 8))();
      cVar5 = (*pcVar3)(uVar6,lVar20 + lVar15);
      if (cVar5 != '\0') {
        lVar20 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar20 = param_1 + 0x118;
        }
        lVar4 = *(longlong *)(param_1 + 0xe0);
        lVar19 = (longlong)*(int *)(lVar4 + 0x3c + lVar15);
        iVar13 = *(int *)(lVar20 + lVar19 * 4);
        if (iVar13 == iVar16) {
          piVar12 = (int *)(lVar20 + lVar19 * 4);
        }
        else {
          do {
            piVar12 = (int *)((longlong)iVar13 * 0x40 + lVar4 + 0x38);
            iVar13 = *piVar12;
          } while (iVar13 != iVar16);
        }
        *piVar12 = *(int *)(lVar4 + lVar15 + 0x38);
        if (*(longlong *)(*plVar1 + 0x28 + lVar15) != 0) {
          FUN_1400020a8();
        }
        FUN_143e06e2c(plVar1,iVar16);
        FUN_1418a0d8e(param_1);
      }
      uVar17 = uVar17 & ~(uint)uVar21;
      puVar10 = *(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0xf0);
      }
      iVar13 = *(int *)(param_1 + 0x108);
      iVar16 = (int)uVar18;
      lVar20 = (longlong)iVar16;
      uVar7 = puVar10[lVar20] & uVar17;
      if (uVar7 == 0) {
        iVar8 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar8 = iVar13 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar16) {
          iVar9 = iVar16;
        }
        if (iVar8 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar10[lVar20 + lVar15 + 1];
          if (uVar7 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar9 - lVar20 == lVar15) {
            return;
          }
        }
        uVar18 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar17 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar21 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar16 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar13);
  }
  return;
}



// FUNCTION 140f5ed8c FUN_140f5ed8c body=31 status=ok
// SIG undefined FUN_140f5ed8c(void)

undefined8 FUN_140f5ed8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f5edba FUN_140f5edba body=31 status=ok
// SIG undefined FUN_140f5edba(void)

undefined8 FUN_140f5edba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f5edda FUN_140f5edda body=240 status=ok
// SIG undefined FUN_140f5edda(void)

void FUN_140f5edda(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14012ae14();
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_4 + 1);
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_14012afbc(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 << 3);
  }
  FUN_140f5eecb(&local_38,&local_48);
  if ((longlong *)(param_2 + 0xd8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0xd8) = local_38;
    *(undefined4 *)(param_2 + 0xe0) = local_30;
    *(undefined4 *)(param_2 + 0xe4) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5eecb FUN_140f5eecb body=218 status=ok
// SIG undefined FUN_140f5eecb(void)

longlong * FUN_140f5eecb(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  if (1 < (int)param_2[1]) {
    uVar3 = (ulonglong)((int)param_2[1] - 1);
    FUN_1406089a0(param_1,uVar3,1);
    uVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(*param_2 + uVar4 * 8);
      if (DAT_14c947fe0 == 0) {
        lVar2 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar2);
        DAT_14c947fe0 = lVar2;
      }
      FUN_140045924(DAT_14c947fe0,&local_48,uVar1,1);
      *(undefined8 *)(*param_1 + uVar4 * 8) = local_48;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f5efb4 FUN_140f5efb4 body=36 status=ok
// SIG undefined FUN_140f5efb4(void)

undefined8 FUN_140f5efb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140f5efe6 FUN_140f5efe6 body=31 status=ok
// SIG undefined FUN_140f5efe6(void)

undefined8 FUN_140f5efe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f5f014 FUN_140f5f014 body=141 status=ok
// SIG undefined FUN_140f5f014(void)

undefined8 * FUN_140f5f014(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b937b20;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[8];
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



// FUNCTION 140f5f0a8 FUN_140f5f0a8 body=57 status=ok
// SIG undefined FUN_140f5f0a8(void)

void FUN_140f5f0a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21318 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21318 = FUN_140002ddd(FUN_146432a26,uVar1,L"GbxBrainAspect_CountAllies");
  }
  return;
}



// FUNCTION 140f5f0e8 FUN_140f5f0e8 body=57 status=ok
// SIG undefined FUN_140f5f0e8(void)

void FUN_140f5f0e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae70 = FUN_140002ddd(FUN_1464cd249,uVar1,L"GbxBrainAspect_Teleport");
  }
  return;
}



// FUNCTION 140f5f130 FUN_140f5f130 body=40 status=ok
// SIG undefined FUN_140f5f130(void)

undefined8 FUN_140f5f130(undefined8 param_1,int param_2)

{
  FUN_140f5f158();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f5f158 FUN_140f5f158 body=204 status=ok
// SIG undefined FUN_140f5f158(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f5f158(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b728050;
  FUN_140f5f224(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140f5f255(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140925a98(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140f5f20f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140f5f224 FUN_140f5f224 body=49 status=ok
// SIG undefined FUN_140f5f224(void)

void FUN_140f5f224(longlong param_1,int param_2)

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



// FUNCTION 140f5f255 FUN_140f5f255 body=49 status=ok
// SIG undefined FUN_140f5f255(void)

void FUN_140f5f255(longlong param_1,int param_2)

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



// FUNCTION 140f5f286 FUN_140f5f286 body=3380 status=ok
// SIG undefined FUN_140f5f286(void)

void FUN_140f5f286(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 *local_150;
  code *local_148;
  code *local_140;
  longlong local_130;
  longlong lStack_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((char)*(ushort *)((longlong)param_1 + 0x2ea) < '\0') {
    lVar12 = param_1[0xd7];
    if ((lVar12 == 0) || ((*(byte *)(lVar12 + 0x63d) & 1) == 0)) {
LAB_140f5fc6c:
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar12 = param_1[4];
      }
      else {
        lVar12 = 0;
      }
      if (*(char *)(lVar12 + 0x178) == '\x03') goto LAB_140f5f519;
      dVar3 = (double)param_1[0x4a];
      dVar5 = (double)param_1[0x4b];
      dVar4 = (double)param_1[0x4c];
      if ((((dVar3 == 0.0) && (!NAN(dVar3))) && (dVar5 == 0.0)) &&
         (((!NAN(dVar5) && (dVar4 == 0.0)) && (!NAN(dVar4))))) goto LAB_140f5f519;
      param_1[0x79] = param_1[0x4c];
      param_1[0x77] = param_1[0x4a];
      param_1[0x78] = param_1[0x4b];
      local_a8 = (double)param_1[0x4f] - dVar4;
      uStack_b0 = (double)param_1[0x4e] - dVar5;
      local_b8 = (code *)((double)param_1[0x4d] - dVar3);
      FUN_144a79a9c(&local_b8,&local_118);
      param_1[0x7f] = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(param_1 + 0x7d) = (undefined4)local_118;
      *(undefined4 *)((longlong)param_1 + 0x3ec) = local_118._4_4_;
      *(undefined4 *)(param_1 + 0x7e) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x3f4) = uStack_10c;
    }
    else {
      if ((char)param_1[0x80] == '\x01') {
        lVar12 = FUN_14485cccc(lVar12 + 0x648);
        if (lVar12 != param_1[0x19]) goto LAB_140f5fc6c;
        lVar12 = param_1[0xd7];
      }
      param_1[0x79] = *(longlong *)(lVar12 + 0x5b0);
      lVar7 = *(longlong *)(lVar12 + 0x5a8);
      param_1[0x77] = *(longlong *)(lVar12 + 0x5a0);
      param_1[0x78] = lVar7;
      *(int *)(param_1 + 0x7d) = (int)param_1[0x84];
      *(undefined4 *)((longlong)param_1 + 0x3ec) = *(undefined4 *)((longlong)param_1 + 0x424);
      *(int *)(param_1 + 0x7e) = (int)param_1[0x85];
      *(undefined4 *)((longlong)param_1 + 0x3f4) = *(undefined4 *)((longlong)param_1 + 0x42c);
      param_1[0x7f] = param_1[0x86];
    }
    FUN_144a76660(param_1 + 0x7d,&local_118);
    param_1[0x7c] = CONCAT44(uStack_104,local_108);
    param_1[0x7a] = (longlong)local_118;
    param_1[0x7b] = CONCAT44(uStack_10c,uStack_110);
    param_1[0x8a] = param_1[0x79];
    *(int *)(param_1 + 0x88) = (int)param_1[0x77];
    *(undefined4 *)((longlong)param_1 + 0x444) = *(undefined4 *)((longlong)param_1 + 0x3bc);
    *(int *)(param_1 + 0x89) = (int)param_1[0x78];
    *(undefined4 *)((longlong)param_1 + 0x44c) = *(undefined4 *)((longlong)param_1 + 0x3c4);
    param_1[0x8e] = param_1[0x7d];
    param_1[0x8f] = param_1[0x7e];
    param_1[0x90] = param_1[0x7f];
    *(int *)(param_1 + 0x8b) = (int)param_1[0x7a];
    *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)((longlong)param_1 + 0x3d4);
    *(int *)(param_1 + 0x8c) = (int)param_1[0x7b];
    *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)param_1 + 0x3dc);
    param_1[0x8d] = param_1[0x7c];
    *(int *)(param_1 + 0x71) = (int)param_1[0x77];
    *(undefined4 *)((longlong)param_1 + 0x38c) = *(undefined4 *)((longlong)param_1 + 0x3bc);
    *(int *)(param_1 + 0x72) = (int)param_1[0x78];
    *(undefined4 *)((longlong)param_1 + 0x394) = *(undefined4 *)((longlong)param_1 + 0x3c4);
    param_1[0x73] = param_1[0x79];
    FUN_144a76660(param_1 + 0x7d,&local_118);
    param_1[0x76] = CONCAT44(uStack_104,local_108);
    *(undefined4 *)(param_1 + 0x74) = (undefined4)local_118;
    *(undefined4 *)((longlong)param_1 + 0x3a4) = local_118._4_4_;
    *(undefined4 *)(param_1 + 0x75) = uStack_110;
    *(undefined4 *)((longlong)param_1 + 0x3ac) = uStack_10c;
    goto LAB_140f5f519;
  }
  if ((*(ushort *)((longlong)param_1 + 0x2ea) & 1) == 0) {
LAB_140f5f2f4:
    if (param_1[0x19] == 0) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar12 = param_1[4];
      }
      else {
        lVar12 = 0;
      }
      if (*(char *)(lVar12 + 0x178) != '\x03') {
        dVar3 = (double)param_1[0x4a];
        dVar5 = (double)param_1[0x4b];
        dVar4 = 0.0;
        if (((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar5 != 0.0)) ||
            ((NAN(dVar5) || ((double)param_1[0x4c] != 0.0)))) || (NAN((double)param_1[0x4c]))) {
          param_1[0x79] = param_1[0x4c];
          param_1[0x77] = param_1[0x4a];
          param_1[0x78] = param_1[0x4b];
          dVar6 = (double)param_1[0x4f] - (double)param_1[0x4c];
          dVar5 = (double)param_1[0x4e] - dVar5;
          dVar3 = (double)param_1[0x4d] - dVar3;
          if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
            dVar4 = atan2(dVar5,dVar3);
            dVar4 = dVar4 * 57.29577951308232;
          }
          dVar5 = SQRT(dVar3 * dVar3 + dVar5 * dVar5);
          dVar3 = 0.0;
          if ((((dVar6 != 0.0) || (NAN(dVar6))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
            dVar3 = atan2(dVar6,dVar5);
            dVar3 = dVar3 * 57.29577951308232;
          }
          uVar14 = SUB84(dVar3,0);
          param_1[0x7d] = (longlong)dVar3;
          param_1[0x7e] = (longlong)dVar4;
          param_1[0x7f] = 0;
          goto LAB_140f5f361;
        }
      }
    }
    else {
      FUN_1404d669e(param_1 + 0x19,&local_118);
      param_1[0x79] = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(param_1 + 0x77) = (undefined4)local_118;
      *(undefined4 *)((longlong)param_1 + 0x3bc) = local_118._4_4_;
      *(undefined4 *)(param_1 + 0x78) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x3c4) = uStack_10c;
      FUN_1404d6d22(param_1 + 0x19,&local_118);
      param_1[0x7f] = CONCAT44(uStack_104,local_108);
      param_1[0x7d] = (longlong)local_118;
      param_1[0x7e] = CONCAT44(uStack_10c,uStack_110);
      uVar14 = (undefined4)param_1[0x7d];
LAB_140f5f361:
      dVar5 = (double)FUN_144719204(uVar14,0);
      dVar6 = (double)FUN_144719204((int)param_1[0x7e],0);
      dVar3 = sin(dVar5 * 0.017453292519943295);
      dVar5 = cos(dVar5 * 0.017453292519943295);
      dVar4 = sin(dVar6 * 0.017453292519943295);
      dVar6 = cos(dVar6 * 0.017453292519943295);
      param_1[0x7a] = (longlong)(dVar6 * dVar5);
      param_1[0x7b] = (longlong)(dVar4 * dVar5);
      param_1[0x7c] = (longlong)dVar3;
    }
    param_1[0x8a] = param_1[0x79];
    param_1[0x88] = param_1[0x77];
    param_1[0x89] = param_1[0x78];
    param_1[0x8b] = param_1[0x7a];
    param_1[0x8c] = param_1[0x7b];
    param_1[0x8d] = param_1[0x7c];
    param_1[0x8e] = param_1[0x7d];
    param_1[0x8f] = param_1[0x7e];
    param_1[0x90] = param_1[0x7f];
    if (param_1[0x11] != 0) {
      param_1[0xab] = param_1[0x79];
      param_1[0xa9] = param_1[0x77];
      param_1[0xaa] = param_1[0x78];
      param_1[0xac] = param_1[0x7a];
      param_1[0xad] = param_1[0x7b];
      param_1[0xae] = param_1[0x7c];
      param_1[0xaf] = param_1[0x7d];
      param_1[0xb0] = param_1[0x7e];
      param_1[0xb1] = param_1[0x7f];
    }
  }
  else {
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf7;
    plVar11 = (longlong *)FUN_140f5ffbc(param_1);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar11 + 0x798))(plVar11), cVar8 == '\0')) goto LAB_140f5f2f4;
    bVar9 = (**(code **)(*plVar11 + 0x700))(plVar11);
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar12 = param_1[4];
    }
    else {
      lVar12 = 0;
    }
    if ((~bVar9 & *(char *)(lVar12 + 0x178) != '\x03') != 0) goto LAB_140f5f2f4;
    if (bVar9 == 0) {
      bVar10 = 8;
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)FUN_144a545f2(param_1[0x19],param_1[0x1b],1);
      if (plVar11 == (longlong *)0x0) goto LAB_140f5f2f4;
      bVar10 = *(byte *)((longlong)plVar11 + 0x1f9) & 8;
    }
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf7 | bVar10;
    plVar13 = param_1 + 0x7d;
    cVar8 = (**(code **)(*param_1 + 0x3c0))(param_1,param_1 + 0x77,plVar13);
    if ((cVar8 == '\0') && (bVar9 == 1)) {
      (**(code **)(*plVar11 + 0x4a8))(plVar11,&local_118,param_1[0x1b],0);
      param_1[0x77] = local_f8;
      param_1[0x78] = lStack_f0;
      param_1[0x79] = local_e8;
      local_b8 = local_118;
      uStack_b0 = (double)CONCAT44(uStack_10c,uStack_110);
      local_a8 = (double)CONCAT44(uStack_104,local_108);
      uStack_a0 = uStack_100;
      uStack_9c = uStack_fc;
      FUN_1448052ee(&local_b8,&local_130);
      param_1[0x7f] = local_120;
      *plVar13 = local_130;
      param_1[0x7e] = lStack_128;
    }
    else if (cVar8 == '\0') goto LAB_140f5f2f4;
    dVar5 = (double)FUN_144719204((int)param_1[0x7d],0);
    dVar6 = (double)FUN_144719204((int)param_1[0x7e],0);
    dVar3 = sin(dVar5 * 0.017453292519943295);
    dVar5 = cos(dVar5 * 0.017453292519943295);
    dVar4 = sin(dVar6 * 0.017453292519943295);
    dVar6 = cos(dVar6 * 0.017453292519943295);
    param_1[0x7a] = (longlong)(dVar6 * dVar5);
    param_1[0x7b] = (longlong)(dVar4 * dVar5);
    param_1[0x7c] = (longlong)dVar3;
    param_1[0x88] = param_1[0x77];
    param_1[0x89] = param_1[0x78];
    param_1[0x8a] = param_1[0x79];
    param_1[0x8e] = *plVar13;
    param_1[0x8f] = param_1[0x7e];
    param_1[0x90] = param_1[0x7f];
    *(int *)(param_1 + 0x8b) = (int)param_1[0x7a];
    *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)((longlong)param_1 + 0x3d4);
    *(int *)(param_1 + 0x8c) = (int)param_1[0x7b];
    *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)param_1 + 0x3dc);
    param_1[0x8d] = param_1[0x7c];
    if (bVar9 == 0) {
      FUN_1404d669e(param_1 + 0x19,&local_118);
      param_1[0x8a] = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(param_1 + 0x88) = (undefined4)local_118;
      *(undefined4 *)((longlong)param_1 + 0x444) = local_118._4_4_;
      *(undefined4 *)(param_1 + 0x89) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x44c) = uStack_10c;
      FUN_1404d6d22(param_1 + 0x19,&local_118);
      param_1[0x90] = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(param_1 + 0x8e) = (undefined4)local_118;
      *(undefined4 *)((longlong)param_1 + 0x474) = local_118._4_4_;
      *(undefined4 *)(param_1 + 0x8f) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x47c) = uStack_10c;
      FUN_144a76660(plVar13,&local_118);
      param_1[0x8d] = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(param_1 + 0x8b) = (undefined4)local_118;
      *(undefined4 *)((longlong)param_1 + 0x45c) = local_118._4_4_;
      *(undefined4 *)(param_1 + 0x8c) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x464) = uStack_10c;
    }
    if (param_1[0x11] != 0) {
      FUN_1404d669e(param_1 + 0x19,&local_118);
      param_1[0xab] = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(param_1 + 0xa9) = (undefined4)local_118;
      *(undefined4 *)((longlong)param_1 + 0x54c) = local_118._4_4_;
      *(undefined4 *)(param_1 + 0xaa) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x554) = uStack_10c;
      FUN_1404d6d22(param_1 + 0x19,&local_118);
      param_1[0xb1] = CONCAT44(uStack_104,local_108);
      *(undefined4 *)(param_1 + 0xaf) = (undefined4)local_118;
      *(undefined4 *)((longlong)param_1 + 0x57c) = local_118._4_4_;
      *(undefined4 *)(param_1 + 0xb0) = uStack_110;
      *(undefined4 *)((longlong)param_1 + 0x584) = uStack_10c;
      FUN_144a76660(plVar13,&local_118);
      param_1[0xae] = CONCAT44(uStack_104,local_108);
      param_1[0xac] = (longlong)local_118;
      param_1[0xad] = CONCAT44(uStack_10c,uStack_110);
    }
  }
  param_1[0x73] = param_1[0x79];
  param_1[0x71] = param_1[0x77];
  param_1[0x72] = param_1[0x78];
  dVar5 = (double)FUN_144719204((int)param_1[0x7d],0);
  dVar6 = (double)FUN_144719204((int)param_1[0x7e],0);
  dVar3 = sin(dVar5 * 0.017453292519943295);
  dVar5 = cos(dVar5 * 0.017453292519943295);
  dVar4 = sin(dVar6 * 0.017453292519943295);
  dVar6 = cos(dVar6 * 0.017453292519943295);
  param_1[0x74] = (longlong)(dVar6 * dVar5);
  param_1[0x75] = (longlong)(dVar4 * dVar5);
  param_1[0x76] = (longlong)dVar3;
  if (((*(byte *)((longlong)param_1 + 0x2ea) & 4) == 0) ||
     (plVar11 = (longlong *)param_1[0x31], plVar11 == (longlong *)0x0)) goto LAB_140f5f519;
  if (DAT_14caf64b8 == 0) {
    local_150 = &local_118;
    local_118 = FUN_141030f22;
    local_140 = FUN_14081d0ea;
    local_148 = FUN_142b4754c;
    local_158 = &LAB_147c45ce0;
    local_160 = &LAB_1463f1ff4;
    local_168 = &DAT_149e063b2;
    local_170 = 0x4000000000;
    local_178 = 0x10000004;
    local_180 = 8;
    local_188 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
      != DAT_14caf64b8 + 0x30)) goto LAB_140f5f519;
  pcVar2 = *(code **)(*plVar11 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar12 = plVar11[0x76];
    if (lVar12 != 0) goto LAB_140f5fabb;
    pcVar2 = *(code **)(*plVar11 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      if (*(code **)(plVar11[0x784] + 0x18) == (code *)&LAB_144904684) {
        if ((((*(int *)((longlong)plVar11 + 0x75b4) != 0) &&
             (uVar1 = *(uint *)(plVar11 + 0xeb6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
           && (((plVar13 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                plVar13 != (longlong *)0x0 &&
                ((int)plVar13[2] == *(int *)((longlong)plVar11 + 0x75b4))) &&
               ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
            lVar12 = *plVar13;
          }
          else {
            lVar12 = 0;
          }
          lVar12 = lVar12 + 0x110;
          goto LAB_140f5fa95;
        }
      }
      else {
        lVar12 = (**(code **)(plVar11[0x784] + 0x18))(plVar11 + 0x784);
LAB_140f5fa95:
        if (lVar12 != 0) {
          lVar12 = *(longlong *)(lVar12 + 0x20);
          goto LAB_140f5faa2;
        }
      }
    }
    else {
      lVar12 = (*pcVar2)(plVar11);
LAB_140f5faa2:
      if (lVar12 != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x3b0);
        goto LAB_140f5fab2;
      }
    }
  }
  else {
    lVar12 = (*pcVar2)(plVar11);
LAB_140f5fab2:
    if (lVar12 != 0) {
LAB_140f5fabb:
      if ((*(byte *)(lVar12 + 0x39a) & 8) == 0) {
        (**(code **)(*plVar11 + 0x718))(plVar11,&local_118);
        param_1[0x73] = CONCAT44(uStack_104,local_108);
        *(undefined4 *)(param_1 + 0x71) = (undefined4)local_118;
        *(undefined4 *)((longlong)param_1 + 0x38c) = local_118._4_4_;
        *(undefined4 *)(param_1 + 0x72) = uStack_110;
        *(undefined4 *)((longlong)param_1 + 0x394) = uStack_10c;
        (**(code **)(*plVar11 + 0x720))(plVar11,&local_118);
        dVar5 = (double)FUN_144719204((int)local_118,0);
        dVar6 = (double)FUN_144719204(uStack_110,0);
        dVar3 = sin(dVar5 * 0.017453292519943295);
        dVar5 = cos(dVar5 * 0.017453292519943295);
        dVar4 = sin(dVar6 * 0.017453292519943295);
        dVar6 = cos(dVar6 * 0.017453292519943295);
        param_1[0x74] = (longlong)(dVar6 * dVar5);
        param_1[0x75] = (longlong)(dVar4 * dVar5);
        param_1[0x76] = (longlong)dVar3;
        goto LAB_140f5f519;
      }
    }
  }
  (**(code **)(*plVar11 + 0x720))(plVar11,&local_b8);
  FUN_144a76660(&local_b8,&local_118);
  param_1[0x76] = CONCAT44(uStack_104,local_108);
  *(undefined4 *)(param_1 + 0x74) = (undefined4)local_118;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = local_118._4_4_;
  *(undefined4 *)(param_1 + 0x75) = uStack_110;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uStack_10c;
LAB_140f5f519:
  if ((local_90 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f5ffbc FUN_140f5ffbc body=303 status=ok
// SIG undefined FUN_140f5ffbc(void)

longlong FUN_140f5ffbc(longlong param_1)

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
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) {
      lVar1 = *(longlong *)(lVar1 + 0x1b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f600ec FUN_140f600ec body=48 status=ok
// SIG undefined FUN_140f600ec(void)

undefined8 * FUN_140f600ec(undefined8 *param_1,undefined8 param_2)

{
  if (DAT_14cb77de0 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_140f6011c(DAT_14cb77de0,param_1,param_2);
  }
  return param_1;
}



// FUNCTION 140f6011c FUN_140f6011c body=395 status=ok
// SIG undefined FUN_140f6011c(void)

undefined8 * FUN_140f6011c(longlong param_1,undefined8 *param_2,uint *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined4 *local_40;
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(param_1 + 0x390);
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    lVar4 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x3d8) - 1U & *param_3) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *plVar2 + (longlong)iVar6 * 0x40;
        if (*(uint *)(*plVar2 + (longlong)iVar6 * 0x40) == *param_3) {
          if (lVar4 != 0) {
            puVar5 = (undefined8 *)(lVar4 + 0x28);
            goto LAB_140f6019c;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x38);
      } while (iVar6 != -1);
    }
  }
  lVar4 = FUN_144837462(param_1,param_3);
  if (lVar4 != 0) {
    local_50 = lVar4;
    local_48 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_48[1] = (longlong)&DAT_100000001;
    *local_48 = (longlong)&PTR_FUN_14b3f8870;
    local_48[2] = lVar4;
    local_40 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
      local_40 = *(undefined4 **)(lVar4 + 8);
    }
    local_38 = &local_50;
    FUN_1457ced2c(plVar2,&local_2c);
    plVar3 = local_48;
    puVar5 = (undefined8 *)(*plVar2 + (longlong)local_2c * 0x40 + 0x28);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
LAB_140f6019c:
      *param_2 = *puVar5;
      lVar4 = puVar5[1];
      param_2[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      goto LAB_140f601b3;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140f601b3:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f602a8 FUN_140f602a8 body=431 status=ok
// SIG undefined FUN_140f602a8(void)

void FUN_140f602a8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 140f60458 FUN_140f60458 body=29 status=ok
// SIG undefined FUN_140f60458(void)

undefined1 FUN_140f60458(void)

{
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  FUN_140f60476(in_stack_00000028);
  *in_R9 = 1;
  return 1;
}



// FUNCTION 140f60476 FUN_140f60476 body=2693 status=ok
// SIG undefined FUN_140f60476(void)

void FUN_140f60476(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  undefined2 uVar9;
  ushort uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_a8 [42];
  char local_7e;
  byte local_7d;
  uint local_7c;
  longlong local_78 [2];
  undefined8 *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar12 = DAT_14caa8580;
  local_7d = *(byte *)(DAT_14caa8580 + 0x229);
  if (local_7d == 0) {
    local_7e = *(char *)(DAT_14caa8580 + 0x22a);
  }
  else {
    local_7e = '\0';
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar11 = (**(code **)(*param_2 + 0x48))(param_2);
  if (uVar11 < 0x24) {
    local_7d = DAT_14c760f28;
    local_7e = '\0';
  }
  else {
    (**(code **)(*param_2 + 0x178))(param_2,&local_7d,1);
    if (local_7d == 0) {
      (**(code **)(*param_2 + 0x178))(param_2,&local_7e,1);
    }
  }
  if ((local_7d & 1) == 0) {
    if (local_7e == '\x01') {
      if (param_3 != (longlong *)0x0) {
        lVar12 = FUN_1413dbcfa();
        if ((((*(int *)(lVar12 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
              lVar12 + 0x30)) && (param_3[0x26] != 0)) &&
           ((*(byte *)(param_3[0x26] + 0xa4) & 2) != 0)) {
          plVar13 = (longlong *)(**(code **)(*param_3 + 0x338))(param_3);
          if (plVar13 != (longlong *)0x0) {
            lVar12 = (longlong)*(int *)(*plVar13 + 0x20);
            if (lVar12 != 0) {
              plVar13 = *(longlong **)(*plVar13 + 0x18);
              lVar12 = lVar12 << 4;
              do {
                if (*plVar13 == DAT_14caa7e00) {
                  if ((plVar13 != (longlong *)0x0) && (lVar12 = plVar13[1], lVar12 != 0)) {
                    FUN_140056680(&local_68,L"NetworkGameplayTagDynamicIndex");
                    FUN_147be7a80(param_3,&local_58,&local_68);
                    if (local_68 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                    if ((*(byte *)(param_2 + 5) & 4) == 0) {
                      if (((*(byte *)(param_2 + 5) & 1) != 0) &&
                         (FUN_146f2931a(&local_68,param_2,*(undefined4 *)(lVar12 + 0x20)),
                         puVar16 = local_58, (*(byte *)((longlong)param_2 + 0x29) & 2) == 0)) {
                        uVar15 = (ulonglong)((uint)local_68 & 0xfffff);
                        if ((((ulonglong)local_68 & 0xfffff) == 0) ||
                           ((local_58 == (undefined8 *)0x0 ||
                            (*(uint *)(local_58 + 4) <= ((uint)local_68 & 0xfffff))))) {
                          *param_1 = 0;
                        }
                        else {
                          uVar5 = *(undefined8 *)(local_58[3] + 8 + uVar15 * 0x14);
                          if (DAT_14caa8580 == 0) {
                            FUN_140608a9e();
                          }
                          FUN_1400702d4(DAT_14caa8580,&local_68,uVar5,0);
                          *param_1 = (longlong)local_68;
                          if ((local_68 == (undefined8 *)0x0) &&
                             (*(char *)(puVar16[3] + 0x12 + uVar15 * 0x14) == '\0')) {
                            *(undefined1 *)(puVar16[3] + uVar15 * 0x14 + 0x12) = 1;
                          }
                        }
                      }
                    }
                    else {
                      FUN_142a7d542(lVar12,&local_68,*param_1);
                      puVar16 = local_68;
                      uVar11 = (uint)local_68;
                      FUN_142a8177e(lVar12,param_2,(ulonglong)local_68 & 0xffffffff);
                      uVar11 = uVar11 & 0xfffff;
                      if (((ulonglong)puVar16 & 0xfffff) != 0) {
                        if (local_58 == (undefined8 *)0x0) {
                          puVar16 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                          *puVar16 = 0;
                          puVar16[1] = 0;
                          *(undefined4 *)(puVar16 + 2) = 0;
                          puVar16[3] = 0;
                          puVar16[4] = 0;
                          *(undefined1 *)(puVar16 + 5) = 1;
                          plVar13 = (longlong *)FUN_14001cc68(0x18,0x10);
                          plVar17 = local_50;
                          plVar13[1] = (longlong)&DAT_100000001;
                          *plVar13 = (longlong)&PTR_FUN_14a3e1d90;
                          plVar13[2] = (longlong)puVar16;
                          local_58 = puVar16;
                          if (plVar13 == local_50) {
                            plVar7 = local_50;
                            if (plVar13 != (longlong *)0x0) {
                              LOCK();
                              plVar17 = plVar13 + 1;
                              *(int *)plVar17 = (int)*plVar17 + -1;
                              UNLOCK();
                              if ((int)*plVar17 == 0) {
                                (**(code **)*plVar13)(plVar13);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar13 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                iVar4 = *piVar1;
                                UNLOCK();
joined_r0x000140f60e2c:
                                plVar7 = local_50;
                                if (iVar4 == 0) {
                                  (**(code **)(*plVar13 + 0x10))(plVar13);
                                  plVar7 = local_50;
                                }
                              }
                            }
                          }
                          else {
                            plVar7 = plVar13;
                            if (local_50 != (longlong *)0x0) {
                              LOCK();
                              plVar2 = local_50 + 1;
                              *(int *)plVar2 = (int)*plVar2 + -1;
                              UNLOCK();
                              if ((int)*plVar2 == 0) {
                                puVar16 = (undefined8 *)*local_50;
                                local_50 = plVar13;
                                (*(code *)*puVar16)(plVar17);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar17 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                iVar4 = *piVar1;
                                UNLOCK();
                                plVar13 = plVar17;
                                goto joined_r0x000140f60e2c;
                              }
                            }
                          }
                          local_50 = plVar7;
                          plVar13 = local_50;
                          puVar16 = local_58;
                          FUN_14020fad6(local_58,L"NetworkGameplayTagDynamicIndex");
                          if (plVar13 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                            UNLOCK();
                          }
                          local_68 = puVar16;
                          local_60 = plVar13;
                          FUN_140056680(local_78,L"NetworkGameplayTagDynamicIndex");
                          FUN_147be7b06(param_3,local_78,&local_68);
                          if (local_78[0] != 0) {
                            FUN_1400020a8();
                          }
                        }
                        if (*(int *)(local_58 + 4) <= (int)uVar11) {
                          FUN_14747c286(local_58 + 3,uVar11 + 1,0);
                          *(undefined1 *)(local_58 + 5) = 1;
                        }
                        if (*(char *)(local_58[3] + 0x10 + (ulonglong)uVar11 * 0x14) == '\0') {
                          puVar3 = (uint *)(local_58[3] + (ulonglong)uVar11 * 0x14);
                          lVar12 = *param_1;
                          *puVar3 = uVar11;
                          puVar3[1] = 0;
                          *(longlong *)(puVar3 + 2) = lVar12;
                          *(undefined2 *)(puVar3 + 4) = 0x100;
                          *(undefined1 *)((longlong)puVar3 + 0x12) = 0;
                        }
                        FUN_147be7c12(param_3,local_58,uVar11);
                      }
                    }
                    plVar13 = local_50;
                    if (local_50 != (longlong *)0x0) {
                      LOCK();
                      plVar17 = local_50 + 1;
                      *(int *)plVar17 = (int)*plVar17 + -1;
                      UNLOCK();
                      if ((int)*plVar17 == 0) {
                        (**(code **)*local_50)(local_50);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar13 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar13 + 0x10))(plVar13);
                        }
                      }
                    }
                  }
                  break;
                }
                plVar13 = plVar13 + 2;
                lVar12 = lVar12 + -0x10;
              } while (lVar12 != 0);
            }
          }
          goto LAB_140f605fc;
        }
      }
      if ((*(byte *)(param_2 + 5) & 4) == 0) {
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          if ((param_3 != (longlong *)0x0) &&
             (plVar13 = (longlong *)(**(code **)(*param_3 + 0x338))(param_3),
             plVar13 != (longlong *)0x0)) {
            lVar12 = (longlong)*(int *)(*plVar13 + 0x20);
            if (lVar12 != 0) {
              plVar17 = *(longlong **)(*plVar13 + 0x18);
              lVar12 = lVar12 << 4;
              do {
                if (*plVar17 == DAT_14caa7e00) {
                  if ((plVar17 != (longlong *)0x0) && (lVar12 = plVar17[1], lVar12 != 0)) {
                    FUN_146f2931a(&local_68,param_2,*(undefined4 *)(lVar12 + 0x20));
                    if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) goto LAB_140f605fc;
                    FUN_14747a290(lVar12,&local_58,(ulonglong)local_68 & 0xffffffff,plVar13[1]);
                    puVar16 = local_58;
                    goto LAB_140f6083f;
                  }
                  break;
                }
                plVar17 = plVar17 + 2;
                lVar12 = lVar12 + -0x10;
              } while (lVar12 != 0);
            }
          }
          FUN_14572541c(param_2);
        }
      }
      else if ((((*(char *)((longlong)param_2 + 0x2b) < '\0') &&
                (plVar13 = (longlong *)param_2[0x18], plVar13 != (longlong *)0x0)) &&
               (lVar12 = *plVar13, lVar12 != 0)) && ((longlong)*(int *)(lVar12 + 0x20) != 0)) {
        plVar17 = *(longlong **)(lVar12 + 0x18);
        lVar12 = (longlong)*(int *)(lVar12 + 0x20) << 4;
        do {
          if (*plVar17 == DAT_14caa7e00) {
            if ((plVar17 != (longlong *)0x0) && (lVar12 = plVar17[1], lVar12 != 0)) {
              if (*param_1 == 0) {
                uVar19 = 0;
              }
              else {
                FUN_142a7d542(lVar12,&local_58);
                uVar19 = local_58._0_4_;
              }
              FUN_142a8177e(lVar12,param_2,uVar19);
              FUN_142a63f52(plVar13,uVar19);
            }
            break;
          }
          plVar17 = plVar17 + 2;
          lVar12 = lVar12 + -0x10;
        } while (lVar12 != 0);
      }
    }
    else {
      (**(code **)(*param_2 + 0x160))(param_2,param_1);
    }
  }
  else {
    if (param_3 != (longlong *)0x0) {
      lVar14 = FUN_1413dbcfa();
      if ((((*(int *)(lVar14 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
            == lVar14 + 0x30)) && (param_3[0x26] != 0)) &&
         ((*(byte *)(param_3[0x26] + 0xa4) & 2) != 0)) {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        lVar12 = DAT_14caa8580;
        FUN_140056680(&local_68,L"NetworkGameplayTagNodeIndex");
        FUN_147be7a80(param_3,&local_58,&local_68);
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        uVar11 = 0xffff;
        if ((*(byte *)(param_2 + 5) & 4) != 0) {
          if (local_58 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            *puVar16 = 0;
            puVar16[1] = 0;
            *(undefined4 *)(puVar16 + 2) = 0;
            puVar16[3] = 0;
            puVar16[4] = 0;
            *(undefined1 *)(puVar16 + 5) = 1;
            plVar13 = (longlong *)FUN_14001cc68(0x18,0x10);
            plVar13[1] = (longlong)&DAT_100000001;
            *plVar13 = (longlong)&PTR_FUN_14a3e1d90;
            plVar13[2] = (longlong)puVar16;
            if (*(char *)(lVar12 + 0x28c) == '\x01') {
              FUN_143274272(lVar12);
            }
            FUN_14020fad6(puVar16,L"NetworkGameplayTagNodeIndex");
            FUN_14747c286(puVar16 + 3,*(undefined4 *)(lVar12 + 0x280));
            plVar17 = local_50;
            if (0 < *(int *)(lVar12 + 0x280)) {
              lVar14 = 0x12;
              lVar18 = 0;
              lVar20 = 0;
              do {
                lVar6 = *(longlong *)(*(longlong *)(lVar12 + 0x278) + lVar18);
                puVar21 = &DAT_14caa8578;
                if (0 < *(int *)(lVar6 + 0x10)) {
                  puVar21 = *(undefined8 **)(lVar6 + 8);
                }
                uVar5 = *puVar21;
                lVar6 = puVar16[3];
                *(int *)(lVar6 + -0x12 + lVar14) = (int)lVar20;
                *(undefined4 *)(lVar6 + -0xe + lVar14) = 0;
                *(undefined8 *)(lVar6 + -10 + lVar14) = uVar5;
                *(undefined2 *)(lVar6 + -2 + lVar14) = 0x100;
                *(undefined1 *)(lVar6 + lVar14) = 0;
                lVar20 = lVar20 + 1;
                lVar14 = lVar14 + 0x14;
                lVar18 = lVar18 + 0x10;
              } while (lVar20 < *(int *)(lVar12 + 0x280));
            }
            local_58 = puVar16;
            if (plVar13 == local_50) {
              plVar7 = local_50;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar17 = plVar13 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar4 = *piVar1;
                  UNLOCK();
joined_r0x000140f60cbc:
                  plVar7 = local_50;
                  if (iVar4 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    plVar7 = local_50;
                  }
                }
              }
            }
            else {
              plVar7 = plVar13;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_50 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  puVar16 = (undefined8 *)*local_50;
                  local_50 = plVar13;
                  (*(code *)*puVar16)(plVar17);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar4 = *piVar1;
                  UNLOCK();
                  plVar13 = plVar17;
                  goto joined_r0x000140f60cbc;
                }
              }
            }
            local_50 = plVar7;
            local_60 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            local_68 = local_58;
            FUN_140056680(local_78,L"NetworkGameplayTagNodeIndex");
            FUN_147be7b06(param_3,local_78,&local_68);
            if (local_78[0] != 0) {
              FUN_1400020a8();
            }
          }
          uVar10 = FUN_14747a154(lVar12,param_1);
          if (*(char *)(lVar12 + 0x28c) == '\x01') {
            FUN_143274272(lVar12);
          }
          if ((uVar10 != 0xffff) && (uVar10 != *(ushort *)(lVar12 + 0x74))) {
            uVar11 = (uint)uVar10;
            FUN_147be7c12(param_3,local_58,uVar11);
          }
        }
        local_7c = uVar11;
        (**(code **)(*param_2 + 0x188))(param_2);
        puVar16 = local_58;
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          uVar15 = (ulonglong)(ushort)local_7c;
          if (((uVar15 == 0xffff) || (local_58 == (undefined8 *)0x0)) ||
             (*(int *)(local_58 + 4) <= (int)(local_7c & 0xffff))) {
            *param_1 = 0;
          }
          else {
            lVar14 = *(longlong *)(local_58[3] + 8 + uVar15 * 0x14);
            *param_1 = lVar14;
            FUN_1400702d4(lVar12,local_78,lVar14,0);
            if ((local_78[0] == 0) && (*(char *)(puVar16[3] + 0x12 + uVar15 * 0x14) == '\0')) {
              *(undefined1 *)(puVar16[3] + uVar15 * 0x14 + 0x12) = 1;
            }
            *param_1 = local_78[0];
          }
        }
        plVar13 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_50 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        goto LAB_140f605ff;
      }
    }
    local_58 = (undefined8 *)CONCAT62(local_58._2_6_,0xffff);
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      bVar8 = *(byte *)(lVar12 + 0x28c);
      if (bVar8 == 1) {
        FUN_143274272(lVar12);
        bVar8 = *(byte *)(lVar12 + 0x28c);
      }
      uVar19 = *(undefined4 *)(lVar12 + 0x6c);
      if ((bVar8 & 1) != 0) {
        FUN_143274272(lVar12);
      }
      FUN_147479792(param_2,&local_58,*(undefined4 *)(lVar12 + 0x70),uVar19);
      puVar16 = local_58;
      uVar10 = (ushort)local_58;
      if (*(char *)(lVar12 + 0x28c) == '\x01') {
        FUN_143274272(lVar12);
      }
      if ((int)(uint)uVar10 < *(int *)(lVar12 + 0x280)) {
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x278) + ((ulonglong)puVar16 & 0xffff) * 0x10)
        ;
        if (*(int *)(lVar12 + 0x10) < 1) {
          puVar16 = &DAT_14caa8578;
        }
        else {
          puVar16 = *(undefined8 **)(lVar12 + 8);
        }
        puVar16 = (undefined8 *)*puVar16;
      }
      else {
        puVar16 = (undefined8 *)0x0;
      }
LAB_140f6083f:
      *param_1 = (longlong)puVar16;
    }
    else {
      uVar9 = FUN_14747a154(lVar12,param_1);
      local_58 = (undefined8 *)CONCAT62(local_58._2_6_,uVar9);
      bVar8 = *(byte *)(lVar12 + 0x28c);
      if (bVar8 == 1) {
        FUN_143274272(lVar12);
        bVar8 = *(byte *)(lVar12 + 0x28c);
      }
      uVar19 = *(undefined4 *)(lVar12 + 0x6c);
      if ((bVar8 & 1) != 0) {
        FUN_143274272(lVar12);
      }
      FUN_147479792(param_2,&local_58,*(undefined4 *)(lVar12 + 0x70),uVar19);
    }
  }
LAB_140f605fc:
  *param_4 = 1;
LAB_140f605ff:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f60efc FUN_140f60efc body=151 status=ok
// SIG undefined FUN_140f60efc(void)

void FUN_140f60efc(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 <= *(int *)(param_3 + 0xdc)) {
    return;
  }
  *(int *)(param_3 + 0xdc) = param_4;
  iVar1 = *(int *)(param_3 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_3 + 0x140);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_140f60efc(param_1,param_2,lVar3,param_4);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_140f60f94(param_1,param_2,param_3);
  return;
}



// FUNCTION 140f60f94 FUN_140f60f94 body=196 status=ok
// SIG undefined FUN_140f60f94(void)

void FUN_140f60f94(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar1 = *(byte *)(param_3 + 0x2f4);
  if (bVar1 < 2) {
    FUN_140714782(param_3 + 0x290,*(undefined4 *)(param_3 + 0xdc));
  }
  else if (8 < bVar1) {
    if (bVar1 != 9) {
      return;
    }
    if (*(char *)(param_2 + 0x88) == '\x01') {
      do {
        iVar2 = *(int *)(param_3 + 0x2d8);
        if (iVar2 == 0) {
          return;
        }
        LOCK();
        bVar5 = iVar2 == *(int *)(param_3 + 0x2d8);
        if (bVar5) {
          *(int *)(param_3 + 0x2d8) = iVar2 + 1;
        }
        UNLOCK();
      } while (!bVar5);
      lVar3 = *(longlong *)(param_1 + 0x458);
      lVar4 = FUN_1462724cc(lVar3 + 0x68);
      *(longlong *)(lVar4 + 8) = param_3;
      **(longlong **)(lVar3 + 0x70) = lVar4;
      *(longlong *)(lVar3 + 0x70) = lVar4;
      LOCK();
      bVar1 = *(byte *)(param_1 + 0x50);
      *(byte *)(param_1 + 0x50) = 1;
      UNLOCK();
      if ((bVar1 & 3) != 2) {
        return;
      }
      FUN_1447458da(param_1 + 0x50,0xffffffff);
      return;
    }
    param_1 = param_1 + 0x548;
    goto LAB_140f60fcb;
  }
  param_1 = param_1 + 0x4c0;
LAB_140f60fcb:
  FUN_1409f17c8(param_1,param_3);
  return;
}



// FUNCTION 140f61058 FUN_140f61058 body=1141 status=ok
// SIG undefined FUN_140f61058(void)

undefined8 *
FUN_140f61058(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128 [2];
  undefined ***local_118;
  undefined **local_108;
  undefined *local_100;
  undefined *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  undefined8 *local_c0;
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined8 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = param_4;
  FUN_1457cfc3c(param_1,param_2,param_3,param_8);
  *param_1 = &PTR_FUN_149f5cd90;
  FUN_1457cf958(param_1 + 0x89,param_1,*(undefined8 *)(param_1[0x59] + 0x38),param_6);
  local_130 = param_1 + 0x11e;
  FUN_1457cf06e();
  local_140 = param_1 + 0x14c;
  FUN_1457cf36a();
  local_138 = param_1 + 0x166;
  FUN_1457cf0dc();
  local_150 = param_1 + 0x170;
  param_1[0x170] = &PTR_FUN_149f5d720;
  lVar3 = 0xb98;
  do {
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + -0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar3) = 0xc08ea551eb851eb8;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0xc58);
  puVar2 = param_1 + 0x189;
  local_168 = FUN_1457cf011();
  local_160 = 0x408f400000000000;
  local_178 = param_1 + 0x53;
  local_170 = param_3;
  FUN_1457cf764(puVar2,param_2,param_1 + 0x56,param_1 + 0x50);
  param_1[0x1b2] = param_2;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  FUN_1457cf4b0(param_1 + 0x1b6);
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xee4) = 0;
  param_1[0x1df] = puVar2;
  param_1[0x1de] = &PTR_FUN_149f5d778;
  param_1[0x1e0] = param_1 + 0x1b2;
  param_1[0x1e2] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1f2] = 0;
  param_1[500] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fc] = 0;
  param_1[0x202] = 0;
  param_1[0x204] = 0;
  param_1[0x20a] = 0;
  param_1[0x20c] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = local_148;
  param_1[0x214] = param_5;
  param_1[0x215] = param_7;
  param_1[0x216] = 0;
  *(undefined4 *)(param_1 + 0x217) = 0;
  param_1[0x220] = 0;
  *(undefined4 *)(param_1 + 0x221) = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  *(undefined8 *)((longlong)param_1 + 0x110c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1114) = 0;
  param_1[0x224] = 0;
  *(undefined4 *)(param_1 + 0x225) = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  *(undefined1 *)(param_1 + 0x237) = 0;
  *(undefined2 *)(param_1 + 0x4f) = 0x208;
  *(undefined1 *)((longlong)param_1 + 0x27a) = 1;
  *(bool *)((longlong)param_1 + 0xd0d) = DAT_14c9945b0 != 0;
  param_1[0x1ab] = 0x4008000000000000;
  *(undefined1 *)((longlong)param_1 + 0x951) = DAT_14c75f2bc;
  puVar1 = param_1 + 0x20;
  FUN_1457cf004(puVar1,param_1 + 0x50,param_1 + 0x53,param_3);
  FUN_1457ceffe(puVar1,local_150);
  FUN_1457ceffa(puVar1,DAT_14c75f294);
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f5d7e0;
  local_a8[0] = FUN_1429ddb46;
  local_80 = param_1;
  FUN_1457cf63e(param_1 + 6,local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar4 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar4 = &local_88;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_d8 = 0;
  local_c8 = &PTR_LAB_149f5d800;
  local_e8 = &DAT_1429dddd4;
  local_c0 = param_1;
  FUN_1457cf258(param_1);
  FUN_140f614fa(param_1,local_140,DAT_14c994640);
  FUN_140f614fa(param_1,puVar2,DAT_14c994610);
  FUN_140f614fa(param_1,local_130,DAT_14c994628);
  FUN_140f614fa(param_1,local_138,DAT_14c994658);
  local_118 = (undefined ***)0x0;
  local_108 = &PTR_LAB_149f5d820;
  local_100 = &DAT_1429dde2c;
  local_128[0] = &LAB_146e1c630;
  FUN_140f6202c(param_1 + 0x20a,local_128);
  if (local_128[0] != (undefined1 *)0x0) {
    pppuVar4 = local_118;
    if (local_118 == (undefined ***)0x0) {
      pppuVar4 = &local_108;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f614ce FUN_140f614ce body=12 status=ok
// SIG undefined FUN_140f614ce(void)

void FUN_140f614ce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140f614d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140f614da FUN_140f614da body=31 status=ok
// SIG undefined FUN_140f614da(void)

undefined8 FUN_140f614da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f614fa FUN_140f614fa body=122 status=ok
// SIG undefined FUN_140f614fa(void)

void FUN_140f614fa(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xfc) < iVar1 + 1U) {
    FUN_1457cf150(param_1 + 0xf0,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar1 * 8) = param_2;
  *(int *)(param_2 + 0x18) = iVar1;
  FUN_140f61574(param_1 + 0x100,param_2);
  FUN_140f6162e(param_1 + 0x250,param_2,param_3);
  return;
}



// FUNCTION 140f61574 FUN_140f61574 body=60 status=ok
// SIG undefined FUN_140f61574(void)

void FUN_140f61574(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x138) <= iVar1) {
    FUN_140f615b0((longlong *)(param_1 + 0x130),iVar1 + 1,0);
    iVar1 = *(int *)(param_2 + 0x18);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 140f615b0 FUN_140f615b0 body=124 status=ok
// SIG undefined FUN_140f615b0(void)

void FUN_140f615b0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1457cf1d4(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146db69ea(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140f6162e FUN_140f6162e body=162 status=ok
// SIG undefined FUN_140f6162e(void)

void FUN_140f6162e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = param_2[3];
    lVar3 = 0;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar3 * 8);
      (**(code **)(*param_2 + 0x50))(param_2,&local_48,param_3);
      FUN_140f616d2(uVar1,(int)lVar2,&local_48);
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f616d2 FUN_140f616d2 body=122 status=ok
// SIG undefined FUN_140f616d2(void)

void FUN_140f616d2(longlong *param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((int)param_1[0x12] <= param_2) {
    FUN_140f6174c(param_1 + 0x11,param_2 + 1,1);
  }
  plVar2 = (longlong *)((longlong)param_2 * 8 + param_1[0x11]);
  if (plVar2 != param_3) {
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = *param_3;
    *param_3 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  FUN_140f6181e(param_1);
  return;
}



// FUNCTION 140f6174c FUN_140f6174c body=208 status=ok
// SIG undefined FUN_140f6174c(void)

void FUN_140f6174c(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_140f61c72(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_140bd582b(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146d97f8a(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140f6181e FUN_140f6181e body=788 status=ok
// SIG undefined FUN_140f6181e(void)

void FUN_140f6181e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  int local_84;
  
  iVar8 = *(int *)(param_1 + 0x90);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  plVar19 = (longlong *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) < iVar8) {
    FUN_140f61b32(plVar19);
    iVar8 = *(int *)(param_1 + 0x90);
  }
  if (iVar8 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    lVar22 = 0;
    do {
      lVar17 = *(longlong *)(lVar4 + lVar22);
      if (lVar17 != 0) {
        iVar18 = *(int *)(param_1 + 0xa8);
        *(uint *)(param_1 + 0xa8) = iVar18 + 1U;
        if (*(uint *)(param_1 + 0xac) < iVar18 + 1U) {
          FUN_146d98026(plVar19,iVar18);
        }
        *(longlong *)(*plVar19 + (longlong)iVar18 * 8) = lVar17;
      }
      lVar22 = lVar22 + 8;
    } while ((longlong)iVar8 * 8 != lVar22);
  }
  iVar8 = *(int *)(param_1 + 0xa8);
  uVar7 = (ulonglong)iVar8;
  if (0 < (longlong)uVar7) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 1;
    do {
      if (uVar12 < uVar7) {
        lVar22 = *(longlong *)(lVar4 + -8 + uVar12 * 8);
        lVar17 = *(longlong *)(lVar4 + uVar12 * 8);
        if (*(int *)(lVar17 + 8) < *(int *)(lVar22 + 8)) {
          *(longlong *)(lVar4 + -8 + uVar12 * 8) = lVar17;
          *(longlong *)(lVar4 + uVar12 * 8) = lVar22;
        }
      }
      uVar13 = uVar12 + 1;
      uVar12 = uVar12 + 2;
    } while (uVar13 < uVar7);
    if (2 < iVar8) {
      iVar18 = 2;
      do {
        iVar6 = iVar18 * 2;
        lVar17 = 0;
        lVar22 = lVar4 + 8;
        do {
          iVar14 = iVar8 - (int)lVar17;
          if (iVar6 <= iVar14) {
            iVar14 = iVar6;
          }
          if ((iVar18 < iVar14) && (0 < iVar18)) {
            lVar2 = lVar4 + lVar17 * 8;
            iVar15 = 0;
            local_84 = iVar18;
            while( true ) {
              plVar19 = (longlong *)(lVar2 + (longlong)local_84 * 8);
              iVar9 = 0;
              if (local_84 - iVar15 != 0 && iVar15 <= local_84) {
                iVar9 = 0;
                uVar10 = local_84 - iVar15;
                do {
                  iVar11 = (uVar10 >> 1) + iVar9;
                  if (*(int *)(*(longlong *)(lVar2 + (longlong)iVar15 * 8 + (longlong)iVar11 * 8) +
                              8) <= *(int *)(*plVar19 + 8)) {
                    iVar9 = iVar11 + (uVar10 & 1);
                  }
                  bVar5 = 1 < uVar10;
                  uVar10 = uVar10 >> 1;
                } while (bVar5);
              }
              iVar9 = iVar9 + iVar15;
              iVar15 = local_84 - iVar9;
              if (iVar15 == 0 || local_84 < iVar9) break;
              if (iVar14 - local_84 == 0 || iVar14 < local_84) {
                iVar11 = 0;
              }
              else {
                plVar3 = (longlong *)(lVar2 + (longlong)iVar9 * 8);
                lVar23 = *plVar3;
                iVar11 = 0;
                uVar12 = (ulonglong)(uint)(iVar14 - local_84);
                do {
                  uVar10 = iVar11 + (int)(uVar12 >> 1);
                  uVar21 = (uint)uVar12;
                  if (*(int *)(plVar19[uVar10] + 8) < *(int *)(lVar23 + 8)) {
                    iVar11 = uVar10 + (uVar21 & 1);
                  }
                  uVar12 = uVar12 >> 1;
                } while (1 < uVar21);
                local_84 = local_84 + iVar11;
                if (0 < iVar11) {
                  plVar19 = plVar3 + iVar15;
                  plVar16 = (longlong *)(lVar22 + (longlong)iVar9 * 8);
                  plVar20 = plVar19;
                  do {
                    plVar1 = plVar19 + 1;
                    plVar16[-1] = *plVar19;
                    *plVar19 = lVar23;
                    if (plVar1 == plVar3 + (local_84 - iVar9)) {
                      plVar19 = plVar20;
                      if (plVar16 == plVar20) break;
                    }
                    else {
                      plVar19 = plVar1;
                      if (plVar16 == plVar20) {
                        plVar20 = plVar1;
                      }
                    }
                    lVar23 = *plVar16;
                    plVar16 = plVar16 + 1;
                  } while( true );
                }
              }
              if ((iVar14 <= local_84) || (iVar15 = iVar9 + iVar11 + 1, local_84 <= iVar15)) break;
            }
          }
          lVar17 = lVar17 + iVar6;
          lVar22 = lVar22 + (longlong)iVar6 * 8;
        } while (lVar17 < (longlong)uVar7);
        iVar18 = iVar6;
      } while (iVar6 < iVar8);
    }
  }
  return;
}



// FUNCTION 140f61b32 FUN_140f61b32 body=320 status=ok
// SIG undefined FUN_140f61b32(void)

void FUN_140f61b32(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140f61b9b;
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
LAB_140f61b9b:
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



// FUNCTION 140f61c72 FUN_140f61c72 body=353 status=ok
// SIG undefined FUN_140f61c72(void)

void FUN_140f61c72(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f61cf7;
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
LAB_140f61cf7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f61dd4 FUN_140f61dd4 body=28 status=ok
// SIG undefined FUN_140f61dd4(void)

void FUN_140f61dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_149f580f0;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}



// FUNCTION 140f61df0 FUN_140f61df0 body=176 status=ok
// SIG undefined FUN_140f61df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140f61df0(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c993dd8) {
    FUN_144b3d300(&DAT_14c993dd8);
    if (DAT_14c993dd8 == -1) {
      uVar1 = FUN_145765498();
      FUN_1446f470e(&local_20,L"FJointConstraintHandle",1);
      _DAT_14c993dc8 = local_20;
      _DAT_14c993dd0 = uVar1;
      _Init_thread_footer(&DAT_14c993dd8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14c993dc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f61ea2 FUN_140f61ea2 body=169 status=ok
// SIG undefined FUN_140f61ea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f61ea2(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9948d0) {
    FUN_144b3d300(&DAT_14c9948d0);
    if (DAT_14c9948d0 == -1) {
      uVar1 = FUN_145765498();
      FUN_1446f470e(&local_20,L"FSuspensionConstraintHandle",1);
      DAT_14c9948c0 = local_20;
      _DAT_14c9948c8 = uVar1;
      _Init_thread_footer(&DAT_14c9948d0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f61f4c FUN_140f61f4c body=224 status=ok
// SIG undefined FUN_140f61f4c(void)

undefined8 FUN_140f61f4c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  lVar2 = **(longlong **)(param_1 + 0x118);
  if (lVar2 == 0) {
    _Dst = (void *)FUN_14001cc68(0xa8);
    memset(_Dst,0,0xa8);
    *(undefined8 *)((longlong)_Dst + 0x2c) = 0xffffffff00000080;
    *(undefined8 *)((longlong)_Dst + 0x70) = 0;
    *(undefined8 *)((longlong)_Dst + 0x50) = 0;
    *(undefined8 *)((longlong)_Dst + 0x58) = 0;
    *(undefined8 *)((longlong)_Dst + 0x7c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)_Dst + 0xa0) = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = iVar1 + 1U;
    if (*(uint *)(param_1 + 300) < iVar1 + 1U) {
      FUN_1457cf5a2(param_1 + 0x120,iVar1);
    }
    *(void **)(*(longlong *)(param_1 + 0x120) + (longlong)iVar1 * 8) = _Dst;
    uVar4 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x128) + -1) * 8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x118) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  return uVar4;
}



// FUNCTION 140f6202c FUN_140f6202c body=290 status=ok
// SIG undefined FUN_140f6202c(void)

longlong * FUN_140f6202c(longlong *param_1,longlong *param_2)

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



// FUNCTION 140f62150 FUN_140f62150 body=83 status=ok
// SIG undefined FUN_140f62150(void)

undefined8 * FUN_140f62150(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  FUN_140f621a4();
  while ((param_1[2] != 0 &&
         (*(char *)(*(longlong *)(param_1[2] + 0x230) + (longlong)*(int *)(param_1 + 3)) == '\x01'))
        ) {
    FUN_140a1e69e(param_1);
  }
  return param_1;
}



// FUNCTION 140f621a4 FUN_140f621a4 body=211 status=ok
// SIG undefined FUN_140f621a4(void)

void FUN_140f621a4(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar1;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar8 = (longlong)(int)uVar1 << 4 | 8;
    uVar5 = (longlong)(int)uVar1;
    do {
      lVar6 = *(longlong *)(*plVar2 + uVar8);
      if (lVar6 == 0) {
        piVar9 = (int *)(*(longlong *)(*plVar2 + -8 + uVar8) + 0x18);
      }
      else {
        piVar9 = (int *)(lVar6 + 8);
      }
      if (*piVar9 != 0) goto LAB_140f621fe;
      uVar10 = uVar5 + 1;
      *(int *)(param_1 + 4) = (int)uVar5 + 1;
      uVar8 = uVar8 + 0x10;
      uVar5 = uVar10;
    } while ((longlong)uVar10 < (longlong)(int)plVar2[1]);
    uVar5 = uVar10 & 0xffffffff;
  }
LAB_140f621fe:
  *(undefined4 *)(param_1 + 5) = 0;
  if ((int)plVar2[1] <= (int)uVar5) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined8 *)((longlong)param_1 + 0x15) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  lVar6 = (longlong)(int)uVar5 * 0x10;
  puVar3 = *(undefined8 **)(*plVar2 + 8 + lVar6);
  param_1[1] = (longlong)puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    lVar6 = *(longlong *)(*plVar2 + lVar6);
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)(*(longlong **)*puVar3)[1];
    lVar6 = **(longlong **)*puVar3;
  }
  if (lVar6 == 0) {
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = *(undefined1 *)(lVar6 + 0x70);
  }
  param_1[2] = lVar6;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar6 + 0x18);
  return;
}



// FUNCTION 140f62278 FUN_140f62278 body=323 status=ok
// SIG undefined FUN_140f62278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f62278(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x27) = 0;
  cVar3 = FUN_1447e0190();
  iVar7 = DAT_14c75f14c;
  iVar5 = 0;
  if ((cVar3 != '\0') && (DAT_14c99384c == 0)) {
    iVar4 = (**(code **)(*DAT_14c82b500 + 0x20))();
    iVar5 = iVar7;
    if (iVar4 < iVar7) {
      iVar5 = iVar4;
    }
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar5;
  iVar7 = 0x7fffffff;
  if (0 < DAT_14c993a00) {
    iVar7 = DAT_14c993a00;
  }
  plVar1 = param_1 + 1;
  iVar5 = -((int)ROUND(-0.5 - (_DAT_14c75f164 * (float)iVar5 + _DAT_14c75f164 * (float)iVar5)) >> 1)
  ;
  if (iVar7 <= iVar5) {
    iVar5 = iVar7;
  }
  iVar7 = 1;
  if (1 < iVar5) {
    iVar7 = iVar5;
  }
  if (*(int *)((longlong)param_1 + 0x14) < iVar7) {
    FUN_1457d0602(plVar1,iVar7);
  }
  do {
    uVar2 = *param_1;
    puVar6 = (undefined8 *)FUN_14001cc68(0x100,0x10);
    FUN_140f623bc(puVar6);
    *puVar6 = &PTR_FUN_149f541e0;
    puVar6[0x17] = uVar2;
    puVar6[0x18] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0x500000000;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    iVar5 = *(int *)(param_1 + 2);
    *(uint *)(param_1 + 2) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x14) < iVar5 + 1U) {
      FUN_146db687e(plVar1,iVar5);
    }
    *(undefined8 **)(*plVar1 + (longlong)iVar5 * 8) = puVar6;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return param_1;
}



// FUNCTION 140f623bc FUN_140f623bc body=144 status=ok
// SIG undefined FUN_140f623bc(void)

undefined8 * FUN_140f623bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f52040;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_140f6244c(param_1 + 1,0);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0xff;
  return param_1;
}



// FUNCTION 140f6244c FUN_140f6244c body=110 status=ok
// SIG undefined FUN_140f6244c(void)

void FUN_140f6244c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140f624bc FUN_140f624bc body=5178 status=ok
// SIG undefined FUN_140f624bc(void)

void FUN_140f624bc(longlong param_1,char param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 **ppuVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  void *_Dst;
  longlong lVar26;
  void *_Src;
  longlong *plVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  undefined1 uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 uVar34;
  longlong *plVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  size_t _Size;
  longlong lVar38;
  ushort *puVar39;
  ulonglong uVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  undefined1 auStack_148 [32];
  ushort local_128;
  undefined1 local_111;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  uint *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  wchar_t *local_d0;
  undefined8 *local_c8;
  double local_c0;
  double local_b8;
  double *local_b0;
  undefined8 *local_a8;
  int local_9c;
  LARGE_INTEGER local_98;
  undefined8 **local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_d0 = L"ComputeIntermediateSpatialAcceleration";
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  local_c8 = &DAT_14c872ee0;
  local_c0 = 0.0;
  QueryPerformanceCounter(&local_98);
  local_b8 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
  local_b0 = &local_c0;
  QueryPerformanceCounter(&local_98);
  local_b8 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
  uVar34 = DAT_14c75f268 < *(int *)(param_1 + 0x368);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    uVar16 = FUN_14008a2ca(param_1);
    *(undefined8 *)(param_1 + 0x2d8) = uVar16;
    uVar16 = FUN_14008a2ca(param_1);
    *(undefined8 *)(param_1 + 0x2e0) = uVar16;
    uVar16 = FUN_14008a2ca(param_1);
    *(undefined8 *)(param_1 + 0x2e8) = uVar16;
    FUN_1449e8966(param_1);
    puVar17 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar17 = 0;
    puVar17[1] = *(undefined8 *)(param_1 + 0x2e8);
    if (puVar17 != (undefined8 *)0x0) {
      puVar36 = *(undefined8 **)(param_1 + 0x300);
      *(undefined8 **)(param_1 + 0x300) = puVar17;
      *puVar36 = puVar17;
    }
    uVar16 = FUN_14008a2ca(param_1);
    *(undefined8 *)(param_1 + 0x2e8) = uVar16;
  }
  if (param_2 != '\0') {
    FUN_140d9e2c6(param_1);
  }
  if (((*(longlong *)(param_1 + 0x400) == 0) ||
      ((*(byte *)(*(longlong *)(param_1 + 0x400) + 0xa0) & 1) != 0)) &&
     (*(char *)(param_1 + 0x430) == '\0')) {
    local_110 = param_1;
    if ((*(longlong *)(param_1 + 0x400) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x2e0) + 0x11) != '\x01')) {
      FUN_1449e8966(param_1);
      uVar31 = 0;
      if ((DAT_14c75f264 != 0) && (uVar31 = 0, DAT_14c75f25c != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x40))();
        uVar31 = 0;
      }
    }
    else {
      local_111 = uVar34;
      if ((longlong)*(int *)(param_1 + 0x388) != 0) {
        plVar35 = *(longlong **)(param_1 + 0x380);
        local_f0 = plVar35 + (longlong)*(int *)(param_1 + 0x388) * 9;
        local_f8 = (uint *)(param_1 + 0x3b0);
        local_d8 = param_1 + 1000;
        local_100 = (longlong *)(param_1 + 0x3a0);
        do {
          plVar19 = *(longlong **)(param_1 + 0x2e0);
          if ((char)plVar35[8] == '\0') {
            if ((DAT_14c75f25c == 0) || ((*(ushort *)(plVar35 + 7) & 0xffe8) != 8)) {
              (**(code **)(*plVar19 + 0x80))(plVar19,plVar35);
            }
            lVar20 = (longlong)(int)plVar35[2];
            if ((-1 < lVar20) && ((int)plVar35[2] < *(int *)(param_1 + 0x3a8))) {
              lVar32 = *local_100;
              puVar18 = (uint *)(lVar32 + lVar20 * 8);
              if ((puVar18 != (uint *)0x0) && (*(char *)(lVar32 + 4 + lVar20 * 8) != '\0')) {
                if (*(int *)(param_1 + 0x3b8) != *(int *)(param_1 + 0x3e4)) {
                  lVar20 = *(longlong *)(param_1 + 0x3f0);
                  if (*(longlong *)(param_1 + 0x3f0) == 0) {
                    lVar20 = local_d8;
                  }
                  iVar22 = *(int *)(lVar20 + (ulonglong)
                                             (*(int *)(param_1 + 0x3f8) - 1U &
                                             (uint)*(ushort *)(plVar35 + 7)) * 4);
                  if (iVar22 != -1) {
                    do {
                      puVar39 = (ushort *)(*(longlong *)local_f8 + (longlong)iVar22 * 0x18);
                      if (*puVar39 == *(ushort *)(plVar35 + 7)) goto LAB_140f62bb6;
                      iVar22 = *(int *)(puVar39 + 8);
                    } while (iVar22 != -1);
                  }
                }
                puVar39 = (ushort *)0x0;
LAB_140f62bb6:
                lVar20 = *(longlong *)(puVar39 + 4);
                uVar29 = *puVar18;
                if (uVar29 + 1 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar32 + (longlong)
                                     *(int *)(*(longlong *)(lVar20 + 0x58) + 0x10 +
                                             (longlong)(int)(*(uint *)(lVar20 + 0x18) - 1) * 0x38) *
                                     8) = uVar29;
                }
                iVar22 = *(int *)(lVar20 + 0x10);
                if ((longlong)iVar22 != 0) {
                  local_108 = (longlong)(int)uVar29;
                  lVar32 = *(longlong *)(lVar20 + 8);
                  uVar30 = ~uVar29;
                  lVar33 = 0;
                  do {
                    plVar19 = *(longlong **)(lVar32 + lVar33);
                    if (plVar19 != (longlong *)0x0) {
                      pcVar9 = *(code **)(*plVar19 + 0x18);
                      if (pcVar9 == FUN_144b04866) {
                        iVar15 = (int)plVar19[2];
                        iVar42 = iVar15 + uVar30;
                        if (iVar42 != 0) {
                          if (0 < iVar42) {
                            iVar42 = 1;
                          }
                          _Dst = (void *)(local_108 * 0x30 + plVar19[1]);
                          _Src = (void *)((longlong)(iVar15 - iVar42) * 0x30 + plVar19[1]);
                          _Size = (longlong)iVar42 * 0x30;
LAB_140f62cfc:
                          memmove(_Dst,_Src,_Size);
                          iVar15 = (int)plVar19[2];
                        }
                      }
                      else if (pcVar9 == FUN_1447dcd88) {
                        iVar15 = (int)plVar19[2];
                        iVar42 = iVar15 + uVar30;
                        if (iVar42 != 0) {
                          if (0 < iVar42) {
                            iVar42 = 1;
                          }
                          _Dst = (void *)(local_108 + plVar19[1]);
                          _Src = (void *)((longlong)(iVar15 - iVar42) + plVar19[1]);
                          _Size = (size_t)iVar42;
                          goto LAB_140f62cfc;
                        }
                      }
                      else {
                        if (pcVar9 != FUN_146e0e96e) {
                          (*pcVar9)(plVar19,uVar29);
                          goto LAB_140f62d09;
                        }
                        iVar15 = (int)plVar19[2];
                        iVar42 = iVar15 + uVar30;
                        if (iVar42 != 0) {
                          if (0 < iVar42) {
                            iVar42 = 1;
                          }
                          _Dst = (void *)(local_108 * 0x38 + plVar19[1]);
                          _Src = (void *)((longlong)(iVar15 - iVar42) * 0x38 + plVar19[1]);
                          _Size = (longlong)iVar42 * 0x38;
                          goto LAB_140f62cfc;
                        }
                      }
                      *(int *)(plVar19 + 2) = iVar15 + -1;
                    }
LAB_140f62d09:
                    lVar33 = lVar33 + 8;
                  } while ((longlong)iVar22 * 8 != lVar33);
                }
                *(int *)(lVar20 + 0x18) = *(int *)(lVar20 + 0x18) + -1;
                iVar22 = (int)plVar35[2];
                param_1 = local_110;
                if ((-1 < (longlong)iVar22) && (iVar22 < *(int *)(local_110 + 0x3a8))) {
                  *(undefined8 *)(*local_100 + (longlong)iVar22 * 8) = 0;
                }
              }
            }
          }
          else {
            ppuVar8 = (undefined8 **)plVar35[1];
            if ((DAT_14c75f25c == 0) || ((*(ushort *)(plVar35 + 7) & 0xffe8) != 8)) {
              puVar17 = *ppuVar8;
              lVar20 = (longlong)*(int *)(ppuVar8 + 1);
              local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)(puVar17[0x2b] + lVar20));
              local_98 = *(LARGE_INTEGER *)(puVar17[0x16] + lVar20 * 8);
              local_88 = *(undefined4 *)((*ppuVar8)[0x10] + (longlong)*(int *)(ppuVar8 + 1) * 4);
              local_74 = 0;
              uStack_6c = 0;
              local_84 = 0;
              uStack_7c = 0;
              local_64 = 0;
              if (ppuVar8 != (undefined8 **)0x0) {
                lVar32 = (*ppuVar8)[0x1f] + (longlong)*(int *)(ppuVar8 + 1) * 0x18;
                lVar33 = *(longlong *)(lVar32 + 8);
                if (*(longlong *)(lVar32 + 8) == 0) {
                  lVar33 = lVar32;
                }
                if ((longlong)*(int *)(lVar32 + 0x10) != 0) {
                  lVar25 = 0;
                  uVar30 = 0;
                  uVar29 = 0;
                  uVar41 = 0;
                  uVar43 = 0;
                  do {
                    lVar38 = *(longlong *)(lVar33 + lVar25);
                    if ((lVar38 != 0) &&
                       ((*(byte *)(lVar38 + 0x71 + (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0) * 8
                                  ) & 2) != 0)) {
                      uVar37 = (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0);
                      uVar43 = uVar43 | *(uint *)(lVar38 + 0x48 + uVar37 * 8);
                      uVar41 = uVar41 | *(uint *)(lVar38 + 0x4c + uVar37 * 8);
                      local_84 = CONCAT44(uVar41,uVar43);
                      uVar29 = uVar29 | *(uint *)(lVar38 + 0x50 + uVar37 * 8);
                      uVar30 = uVar30 | *(uint *)(lVar38 + 0x54 + uVar37 * 8);
                      uStack_7c = CONCAT44(uVar30,uVar29);
                    }
                    lVar25 = lVar25 + 8;
                  } while ((longlong)*(int *)(lVar32 + 0x10) * 8 != lVar25);
                  lVar32 = (*ppuVar8)[0x1f] + (longlong)*(int *)(ppuVar8 + 1) * 0x18;
                  lVar33 = *(longlong *)(lVar32 + 8);
                  if (*(longlong *)(lVar32 + 8) == 0) {
                    lVar33 = lVar32;
                  }
                  if ((longlong)*(int *)(lVar32 + 0x10) != 0) {
                    lVar25 = 0;
                    uVar30 = 0;
                    uVar29 = 0;
                    uVar41 = 0;
                    uVar43 = 0;
                    do {
                      lVar38 = *(longlong *)(lVar33 + lVar25);
                      if ((lVar38 != 0) &&
                         ((*(byte *)(lVar38 + 0x71 +
                                    (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0) * 8) & 5) != 0)) {
                        uVar37 = (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0);
                        uVar43 = uVar43 | *(uint *)(lVar38 + 0x58 + uVar37 * 8);
                        uVar41 = uVar41 | *(uint *)(lVar38 + 0x5c + uVar37 * 8);
                        local_74 = CONCAT44(uVar41,uVar43);
                        uVar29 = uVar29 | *(uint *)(lVar38 + 0x60 + uVar37 * 8);
                        uVar30 = uVar30 | *(uint *)(lVar38 + 100 + uVar37 * 8);
                        uStack_6c = CONCAT44(uVar30,uVar29);
                      }
                      lVar25 = lVar25 + 8;
                    } while ((longlong)*(int *)(lVar32 + 0x10) * 8 != lVar25);
                  }
                }
                local_64 = 1;
              }
              local_128 = *(ushort *)(plVar35 + 7);
              local_90 = ppuVar8;
              (**(code **)(*plVar19 + 0x88))
                        (plVar19,&local_98,lVar20 * 0x30 + puVar17[0x28],
                         *(undefined1 *)(puVar17[0x2b] + lVar20));
              param_1 = local_110;
            }
            if (*(int *)(param_1 + 0x3b8) != *(int *)(param_1 + 0x3e4)) {
              uVar4 = *(ushort *)(plVar35 + 7);
              lVar20 = *(longlong *)(param_1 + 0x3f0);
              if (*(longlong *)(param_1 + 0x3f0) == 0) {
                lVar20 = local_d8;
              }
              iVar22 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x3f8) - 1U & (uint)uVar4) *
                                         4);
              if (iVar22 != -1) {
                do {
                  puVar39 = (ushort *)(*(longlong *)local_f8 + (longlong)iVar22 * 0x18);
                  if (*puVar39 == uVar4) {
                    if (puVar39 != (ushort *)0x0) goto LAB_140f62803;
                    break;
                  }
                  iVar22 = *(int *)(puVar39 + 8);
                } while (iVar22 != -1);
              }
            }
            puVar17 = (undefined8 *)FUN_14001cc68(0x68,0x10);
            FUN_146286aae(puVar17);
            puVar18 = local_f8;
            local_90 = &local_a8;
            local_a8 = puVar17;
            local_98.QuadPart = (LONGLONG)(plVar35 + 7);
            FUN_145c9afa4(local_f8,&local_9c,&local_98);
            lVar32 = (longlong)local_9c;
            lVar20 = *(longlong *)puVar18;
            if (local_a8 != (undefined8 *)0x0) {
              (**(code **)*local_a8)(local_a8,1);
            }
            puVar39 = (ushort *)(lVar20 + lVar32 * 0x18);
            param_1 = local_110;
LAB_140f62803:
            lVar20 = *(longlong *)(puVar39 + 4);
            lVar32 = (longlong)(int)plVar35[2];
            if ((lVar32 < 0) || (*(int *)(param_1 + 0x3a8) <= (int)plVar35[2])) {
LAB_140f62d5f:
              iVar22 = *(int *)(lVar20 + 0x18);
              iVar15 = iVar22 + 1;
              *(int *)(lVar20 + 0x18) = iVar15;
              if ((longlong)*(int *)(lVar20 + 0x10) != 0) {
                local_108 = *(longlong *)(lVar20 + 8);
                lVar32 = (longlong)*(int *)(lVar20 + 0x10) << 3;
                lVar33 = 0;
                local_e0 = lVar32;
                do {
                  plVar19 = *(longlong **)(local_108 + lVar33);
                  if (plVar19 != (longlong *)0x0) {
                    pcVar9 = *(code **)(*plVar19 + 8);
                    if (pcVar9 == (code *)&LAB_1456d3c9a) {
                      FUN_14018789a(plVar19 + 1,iVar15,0);
                    }
                    else if (pcVar9 == FUN_1447c19fc) {
                      iVar42 = (int)plVar19[2];
                      if (iVar42 < iVar15) {
                        plVar27 = plVar19 + 1;
                        *(int *)(plVar19 + 2) = iVar15;
                        if ((uint)(*(int *)((longlong)plVar19 + 0x14) - iVar42) <
                            (uint)(iVar15 - iVar42)) {
                          local_e8 = plVar27;
                          FUN_1400b4f0c(plVar27,iVar42);
                          plVar27 = local_e8;
                        }
                        FUN_1447c1a60((longlong)iVar42 * 0x30 + *plVar27,iVar15 - iVar42);
                        lVar32 = local_e0;
                      }
                      else {
LAB_140f62e7f:
                        if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1456afac4(iVar15);
                        }
                        if (iVar15 < iVar42) {
                          *(int *)(plVar19 + 2) = iVar15;
                        }
                      }
                    }
                    else if (pcVar9 == FUN_144aa476e) {
                      iVar42 = (int)plVar19[2];
                      if (iVar15 <= iVar42) goto LAB_140f62e7f;
                      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,iVar15);
                      *(int *)(plVar19 + 2) = iVar15;
                      if ((uint)(*(int *)((longlong)plVar19 + 0x14) - iVar42) <
                          (uint)(iVar15 - iVar42)) {
                        FUN_1401c3474(plVar19 + 1);
                      }
                      memset((void *)((longlong)iVar42 + plVar19[1]),0,(longlong)(iVar15 - iVar42));
                      lVar32 = local_e0;
                      iVar15 = (int)local_e8;
                    }
                    else {
                      (*pcVar9)(plVar19,iVar15);
                    }
                  }
                  lVar33 = lVar33 + 8;
                } while (lVar32 != lVar33);
              }
              iVar15 = (int)plVar35[2];
              iVar42 = *(int *)(local_110 + 0x3a8);
              if (iVar42 <= iVar15) {
                *(int *)(local_110 + 0x3a8) = iVar15 + 1;
                uVar29 = (iVar15 + 1) - iVar42;
                if ((uint)(*(int *)(local_110 + 0x3ac) - iVar42) < uVar29) {
                  FUN_14172af08(local_100,iVar42);
                }
                FUN_1429d3328((longlong)iVar42 * 8 + *local_100,uVar29);
              }
              *(undefined1 *)(*local_100 + 4 + (longlong)iVar15 * 8) = 1;
              *(int *)(*local_100 + (longlong)iVar15 * 8) = iVar22;
              param_1 = local_110;
            }
            else {
              piVar1 = (int *)(*local_100 + lVar32 * 8);
              if ((piVar1 == (int *)0x0) || (*(char *)(*local_100 + 4 + lVar32 * 8) == '\0'))
              goto LAB_140f62d5f;
              iVar22 = *piVar1;
            }
            lVar26 = (longlong)iVar22;
            *(undefined1 *)(*(longlong *)(lVar20 + 0x28) + lVar26) =
                 *(undefined1 *)((*ppuVar8)[0x2b] + (longlong)*(int *)(ppuVar8 + 1));
            lVar32 = (*ppuVar8)[0x28];
            lVar25 = (longlong)*(int *)(ppuVar8 + 1) * 0x30;
            lVar33 = *(longlong *)(lVar20 + 0x40);
            lVar38 = lVar26 * 0x30;
            *(undefined8 *)(lVar33 + 0x10 + lVar38) = *(undefined8 *)(lVar32 + 0x10 + lVar25);
            uVar16 = ((undefined8 *)(lVar32 + lVar25))[1];
            *(undefined8 *)(lVar33 + lVar38) = *(undefined8 *)(lVar32 + lVar25);
            ((undefined8 *)(lVar33 + lVar38))[1] = uVar16;
            puVar17 = (undefined8 *)(lVar32 + 0x18 + lVar25);
            uVar16 = puVar17[1];
            puVar36 = (undefined8 *)(lVar33 + 0x18 + lVar38);
            *puVar36 = *puVar17;
            puVar36[1] = uVar16;
            *(undefined8 *)(lVar33 + 0x28 + lVar38) = *(undefined8 *)(lVar32 + 0x28 + lVar25);
            lVar20 = *(longlong *)(lVar20 + 0x58);
            lVar26 = lVar26 * 0x38;
            lVar32 = *plVar35;
            lVar33 = plVar35[1];
            lVar25 = plVar35[3];
            lVar38 = plVar35[4];
            lVar13 = plVar35[5];
            plVar19 = (longlong *)(lVar20 + 0x10 + lVar26);
            *plVar19 = plVar35[2];
            plVar19[1] = lVar25;
            plVar19 = (longlong *)(lVar20 + 0x20 + lVar26);
            *plVar19 = lVar38;
            plVar19[1] = lVar13;
            *(longlong *)(lVar20 + 0x30 + lVar26) = plVar35[6];
            *(longlong *)(lVar20 + lVar26) = lVar32;
            ((longlong *)(lVar20 + lVar26))[1] = lVar33;
          }
          plVar19 = *(longlong **)(param_1 + 0x2e8);
          if ((char)plVar35[8] == '\0') {
            if ((DAT_14c75f25c == 0) || ((*(ushort *)(plVar35 + 7) & 0xffe8) != 8)) {
              (**(code **)(*plVar19 + 0x80))(plVar19,plVar35);
            }
          }
          else {
            ppuVar8 = (undefined8 **)plVar35[1];
            if ((DAT_14c75f25c == 0) || ((*(ushort *)(plVar35 + 7) & 0xffe8) != 8)) {
              local_108 = CONCAT71(local_108._1_7_,
                                   *(undefined1 *)
                                    ((*ppuVar8)[0x2b] + (longlong)*(int *)(ppuVar8 + 1)));
              local_98 = *(LARGE_INTEGER *)((*ppuVar8)[0x16] + (longlong)*(int *)(ppuVar8 + 1) * 8);
              local_88 = *(undefined4 *)((*ppuVar8)[0x10] + (longlong)*(int *)(ppuVar8 + 1) * 4);
              local_74 = 0;
              uStack_6c = 0;
              local_84 = 0;
              uStack_7c = 0;
              local_64 = 0;
              if (ppuVar8 != (undefined8 **)0x0) {
                lVar20 = (*ppuVar8)[0x1f] + (longlong)*(int *)(ppuVar8 + 1) * 0x18;
                lVar32 = *(longlong *)(lVar20 + 8);
                if (*(longlong *)(lVar20 + 8) == 0) {
                  lVar32 = lVar20;
                }
                if ((longlong)*(int *)(lVar20 + 0x10) != 0) {
                  lVar33 = 0;
                  uVar29 = 0;
                  uVar30 = 0;
                  uVar41 = 0;
                  uVar43 = 0;
                  do {
                    lVar25 = *(longlong *)(lVar32 + lVar33);
                    if ((lVar25 != 0) &&
                       ((*(byte *)(lVar25 + 0x71 + (ulonglong)((*(uint *)(lVar25 + 8) & 3) == 0) * 8
                                  ) & 2) != 0)) {
                      uVar37 = (ulonglong)((*(uint *)(lVar25 + 8) & 3) == 0);
                      uVar43 = uVar43 | *(uint *)(lVar25 + 0x48 + uVar37 * 8);
                      uVar41 = uVar41 | *(uint *)(lVar25 + 0x4c + uVar37 * 8);
                      local_84 = CONCAT44(uVar41,uVar43);
                      uVar30 = uVar30 | *(uint *)(lVar25 + 0x50 + uVar37 * 8);
                      uVar29 = uVar29 | *(uint *)(lVar25 + 0x54 + uVar37 * 8);
                      uStack_7c = CONCAT44(uVar29,uVar30);
                    }
                    lVar33 = lVar33 + 8;
                  } while ((longlong)*(int *)(lVar20 + 0x10) * 8 != lVar33);
                  lVar20 = (*ppuVar8)[0x1f] + (longlong)*(int *)(ppuVar8 + 1) * 0x18;
                  lVar32 = *(longlong *)(lVar20 + 8);
                  if (*(longlong *)(lVar20 + 8) == 0) {
                    lVar32 = lVar20;
                  }
                  if ((longlong)*(int *)(lVar20 + 0x10) != 0) {
                    lVar33 = 0;
                    uVar41 = 0;
                    uVar29 = 0;
                    uVar30 = 0;
                    uVar43 = 0;
                    do {
                      lVar25 = *(longlong *)(lVar32 + lVar33);
                      if ((lVar25 != 0) &&
                         ((*(byte *)(lVar25 + 0x71 +
                                    (ulonglong)((*(uint *)(lVar25 + 8) & 3) == 0) * 8) & 5) != 0)) {
                        uVar37 = (ulonglong)((*(uint *)(lVar25 + 8) & 3) == 0);
                        uVar43 = uVar43 | *(uint *)(lVar25 + 0x58 + uVar37 * 8);
                        uVar30 = uVar30 | *(uint *)(lVar25 + 0x5c + uVar37 * 8);
                        local_74 = CONCAT44(uVar30,uVar43);
                        uVar29 = uVar29 | *(uint *)(lVar25 + 0x60 + uVar37 * 8);
                        uVar41 = uVar41 | *(uint *)(lVar25 + 100 + uVar37 * 8);
                        uStack_6c = CONCAT44(uVar41,uVar29);
                      }
                      lVar33 = lVar33 + 8;
                    } while ((longlong)*(int *)(lVar20 + 0x10) * 8 != lVar33);
                  }
                }
                local_64 = 1;
                param_1 = local_110;
              }
              local_128 = *(ushort *)(plVar35 + 7);
              local_90 = ppuVar8;
              (**(code **)(*plVar19 + 0x88))(plVar19,&local_98);
            }
          }
          plVar35 = plVar35 + 9;
        } while (plVar35 != local_f0);
      }
      iVar22 = *(int *)(param_1 + 0x340);
      if ((longlong)iVar22 != 0) {
        lVar20 = *(longlong *)(local_110 + 0x338);
        plVar35 = (longlong *)(local_110 + 0x420);
        lVar32 = 0;
        do {
          uVar6 = *(undefined4 *)(lVar20 + lVar32);
          iVar15 = *(int *)(local_110 + 0x428);
          *(uint *)(local_110 + 0x428) = iVar15 + 1U;
          if (*(uint *)(local_110 + 0x42c) < iVar15 + 1U) {
            FUN_140543018(plVar35,iVar15);
          }
          *(undefined4 *)(*plVar35 + (longlong)iVar15 * 4) = uVar6;
          lVar32 = lVar32 + 4;
        } while ((longlong)iVar22 * 4 != lVar32);
      }
      param_1 = local_110;
      lVar20 = local_110 + 0x380;
      *(undefined4 *)(local_110 + 0x340) = 0;
      if (*(int *)(local_110 + 0x344) < 0) {
        FUN_1409caef4(local_110 + 0x338,0);
      }
      FUN_1405aea48(lVar20);
      uVar6 = *(undefined4 *)(param_1 + 0x358);
      *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8) = uVar6;
      *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + 8) = uVar6;
      if (DAT_14c75f288 == 1) {
        FUN_1449e8966(param_1);
      }
      else {
        FUN_1405aea48(param_1 + 0x360);
      }
      local_100 = *(longlong **)(param_1 + 0x2d8);
      plVar35 = *(longlong **)(param_1 + 0x2e0);
      *(longlong **)(param_1 + 0x2d8) = plVar35;
      *(longlong **)(param_1 + 0x2e0) = local_100;
      uVar34 = local_111;
      if (DAT_14c75f25c != 0) {
        local_f0 = *(longlong **)(param_1 + 0x2e8);
        local_f8 = (uint *)(param_1 + 0x3c0);
        iVar22 = *(int *)(param_1 + 0x3d8);
        if (iVar22 == 0) {
          uVar37 = 1;
          uVar40 = 0;
          iVar15 = 0;
          iVar42 = 0;
        }
        else {
          puVar18 = *(uint **)(param_1 + 0x3d0);
          if (*(uint **)(param_1 + 0x3d0) == (uint *)0x0) {
            puVar18 = local_f8;
          }
          uVar29 = *puVar18;
          if (uVar29 == 0) {
            iVar15 = iVar22 + 0x1e;
            if (-1 < iVar22 + -1) {
              iVar15 = iVar22 + -1;
            }
            uVar40 = 0;
            uVar37 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar37 = uVar40;
            }
            iVar42 = 0;
            do {
              if (uVar37 == uVar40) goto LAB_140f6348d;
              iVar42 = iVar42 + 0x20;
              uVar29 = puVar18[uVar40 + 1];
              uVar40 = uVar40 + 1;
            } while (uVar29 == 0);
          }
          else {
            uVar40 = 0;
            iVar42 = 0;
          }
          uVar37 = (ulonglong)(-uVar29 & uVar29);
          uVar2 = uVar37 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar15 = (iVar42 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar22 <= iVar15) {
            iVar15 = iVar22;
          }
        }
        if (iVar15 != iVar22) {
          uVar29 = 0xffffffff;
          do {
            uVar5 = *(undefined2 *)(*(longlong *)(param_1 + 0x3b0) + (longlong)iVar15 * 0x18);
            plVar19 = (longlong *)(**(code **)(*plVar35 + 0xc0))(plVar35,uVar5);
            if (((plVar19 != (longlong *)0x0) &&
                (cVar14 = (**(code **)(*plVar19 + 0x20))(plVar19), cVar14 != '\0')) &&
               (lVar20 = (**(code **)(*local_100 + 0xc0))(local_100,uVar5), lVar20 != 0)) {
              if (local_f0 != (longlong *)0x0) {
                plVar19 = (longlong *)(**(code **)(*local_f0 + 0xc0))(local_f0,uVar5);
                if (plVar19 == (longlong *)0x0) goto LAB_140f633cc;
                (**(code **)(*plVar19 + 0x98))(plVar19,lVar20);
              }
              (**(code **)(*plVar35 + 200))(plVar35,local_100,uVar5);
            }
LAB_140f633cc:
            uVar29 = uVar29 & ~(uint)uVar37;
            puVar18 = *(uint **)(local_110 + 0x3d0);
            if (*(uint **)(local_110 + 0x3d0) == (uint *)0x0) {
              puVar18 = local_f8;
            }
            iVar7 = *(int *)(local_110 + 0x3d8);
            iVar15 = (int)uVar40;
            lVar20 = (longlong)iVar15;
            uVar30 = puVar18[lVar20] & uVar29;
            if (uVar30 == 0) {
              iVar23 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar23 = iVar7 + -1;
              }
              iVar23 = iVar23 >> 5;
              iVar42 = iVar42 + 0x20;
              iVar24 = iVar23;
              if (iVar23 < iVar15) {
                iVar24 = iVar15;
              }
              if (iVar15 < iVar23) {
                lVar32 = 0;
                do {
                  uVar30 = puVar18[lVar20 + lVar32 + 1];
                  if (uVar30 != 0) {
                    uVar40 = (ulonglong)(iVar15 + (int)lVar32 + 1);
                    uVar29 = 0xffffffff;
                    goto LAB_140f6344f;
                  }
                  iVar42 = iVar42 + 0x20;
                  lVar32 = lVar32 + 1;
                } while (iVar24 - lVar20 != lVar32);
                uVar29 = 0xffffffff;
                iVar15 = iVar24;
              }
              uVar40 = (ulonglong)(iVar15 + 1);
              iVar15 = iVar7;
            }
            else {
LAB_140f6344f:
              uVar37 = (ulonglong)(-uVar30 & uVar30);
              uVar2 = uVar37 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar15 = (iVar42 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar15) {
                iVar15 = iVar7;
              }
            }
            param_1 = local_110;
          } while (iVar15 != iVar22);
        }
LAB_140f6348d:
        uVar34 = local_111;
        if (DAT_14c75f264 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x40))();
        }
      }
      puVar17 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar17 = 0;
      puVar17[1] = *(undefined8 *)(param_1 + 0x2e8);
      if (puVar17 != (undefined8 *)0x0) {
        puVar36 = *(undefined8 **)(param_1 + 0x300);
        *(undefined8 **)(param_1 + 0x300) = puVar17;
        *puVar36 = puVar17;
      }
      uVar16 = FUN_14008a2ca(param_1);
      *(undefined8 *)(param_1 + 0x2e8) = uVar16;
      uVar31 = 1;
    }
    if (*(char *)(param_1 + 0x331) == '\x01') {
      uVar16 = *(undefined8 *)(param_1 + 0x418);
      puVar17 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar18 = (uint *)*puVar17;
      if (puVar18 != (uint *)0x0) goto LAB_140f63626;
      while( true ) {
        uVar29 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar29 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar29 | 1;
          __tlregdtor(&LAB_1429d432e);
        }
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar21 = *(undefined4 **)(lVar20 + 0x310);
        *(undefined8 *)(lVar20 + 0x310) = 0;
        if (puVar21 == (undefined4 *)0x0) {
          puVar21 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar21 = 0xffffffff;
        *(undefined4 **)(puVar21 + 0x10) = puVar21 + 0x16;
        puVar21[0x12] = 0;
        *puVar17 = puVar21;
        FUN_140217a48(puVar17);
        puVar18 = (uint *)*puVar17;
LAB_140f63626:
        puVar36 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar28 = (uint *)(puVar36 + 0x1a);
        uVar29 = puVar18[0x12];
        if (puVar28 <= puVar18 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
          LOCK();
          uVar30 = *puVar18;
          *puVar18 = *puVar18 + uVar29 + 1;
          UNLOCK();
          if ((uVar30 ^ uVar29) != 0xffffffff) break;
          puVar18 = (uint *)*puVar17;
          *puVar18 = 0xffffffff;
          *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
          puVar18[0x12] = 0;
          *puVar17 = puVar18;
          puVar36 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
          puVar28 = (uint *)(puVar36 + 0x1a);
          uVar29 = 0;
          if (puVar28 <= puVar18 + 0x4000) {
            uVar29 = 1;
            goto LAB_140f636a6;
          }
        }
      }
      uVar29 = uVar29 + 1;
LAB_140f636a6:
      *(uint **)(puVar18 + 0x10) = puVar28;
      puVar18[0x12] = uVar29;
      FUN_1447247dc(puVar36,0);
      lVar20 = local_110;
      *puVar36 = &PTR_FUN_149f5b028;
      uVar3 = *(undefined1 *)(local_110 + 0x330);
      uVar6 = *(undefined4 *)(local_110 + 0x2e0);
      uVar10 = *(undefined4 *)(local_110 + 0x2e4);
      uVar11 = *(undefined4 *)(local_110 + 0x2e8);
      uVar12 = *(undefined4 *)(local_110 + 0x2ec);
      puVar36[0x15] = uVar16;
      puVar36[0x16] = param_1 + 0x3b0;
      *(undefined4 *)(puVar36 + 0x17) = uVar6;
      *(undefined4 *)((longlong)puVar36 + 0xbc) = uVar10;
      *(undefined4 *)(puVar36 + 0x18) = uVar11;
      *(undefined4 *)((longlong)puVar36 + 0xc4) = uVar12;
      *(undefined1 *)(puVar36 + 0x19) = uVar34;
      *(undefined1 *)((longlong)puVar36 + 0xc9) = uVar3;
      *(undefined1 *)((longlong)puVar36 + 0xca) = uVar31;
      *(undefined2 *)((longlong)puVar36 + 0xcb) = 0;
      *(longlong *)(local_110 + 0x408) = (longlong)puVar36 + 0xcb;
      *(longlong *)(local_110 + 0x410) = (longlong)puVar36 + 0xcc;
      if (*(code **)(puVar36[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar36[0xe] + 0x18))(puVar36 + 0xe,puVar36 + 9);
      }
      puVar36[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar36[9] = puVar36;
      puVar36[10] = puVar36;
      lVar32 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar32 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(lVar32 + 0x30);
      }
      puVar36[0xf] = uVar16;
      puVar36[0x10] = 0xd80000527800b400;
      *(undefined4 *)((longlong)puVar36 + 0x1c) = 0;
      if (puVar36 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar36 + 1) = *(int *)(puVar36 + 1) + 1;
        UNLOCK();
      }
      local_98.s.LowPart._0_1_ = 1;
      FUN_1447439e4(puVar36);
      puVar17 = *(undefined8 **)(lVar20 + 0x400);
      *(undefined8 **)(lVar20 + 0x400) = puVar36;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
  }
  else {
    FUN_1449e8966(param_1);
  }
  QueryPerformanceCounter(&local_98);
  *local_b0 = (((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) - local_b8) + *local_b0;
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f638f8 FUN_140f638f8 body=265 status=ok
// SIG undefined FUN_140f638f8(void)

float FUN_140f638f8(longlong param_1,double *param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar2 = (float)FUN_140f63a02();
  if (*(longlong *)(param_1 + 0x1a10) != 0) {
    lVar1 = FUN_1475b00a8();
    if (lVar1 != 0) {
      if (((0.0 <= *(float *)(param_1 + 0x1a18)) && (0.0 < *(float *)(param_1 + 0x1a1c))) &&
         (*(float *)(param_1 + 0x1a18) <= *(float *)(param_1 + 0x1a1c))) {
        FUN_147a1cb18(lVar1,&local_48,param_2,1);
        dVar3 = (SQRT((local_40 - param_2[1]) * (local_40 - param_2[1]) +
                      (local_48 - *param_2) * (local_48 - *param_2)) -
                (double)*(float *)(param_1 + 0x1a18)) /
                (double)(*(float *)(param_1 + 0x1a1c) - *(float *)(param_1 + 0x1a18));
        if (1.0 <= dVar3) {
          dVar3 = 1.0;
        }
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        fVar2 = fVar2 * (float)dVar3;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f63a02 FUN_140f63a02 body=347 status=ok
// SIG undefined FUN_140f63a02(void)

void FUN_140f63a02(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  lVar3 = param_2;
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b4754c;
      local_58 = &LAB_1483e40eb;
      local_60 = &LAB_146486986;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 8;
      local_88 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    lVar3 = (longlong)*(int *)(DAT_14cb46ec8 + 0x38);
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + lVar3 * 8) ==
        DAT_14cb46ec8 + 0x30)) {
      plVar2 = *(longlong **)(lVar1 + 0x3b8);
      goto LAB_140f63a72;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_140f63a72:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140f63aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2c8))(plVar2,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8,lVar3,*(code **)(*plVar2 + 0x2c8),
                *(undefined4 *)(param_1 + 0x628));
}



// FUNCTION 140f63b5e FUN_140f63b5e body=852 status=ok
// SIG undefined FUN_140f63b5e(void)

code * FUN_140f63b5e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  code **local_200;
  undefined1 *local_1f8;
  code *local_1f0;
  code *local_1e8 [14];
  undefined8 local_178 [10];
  undefined8 local_128 [12];
  char local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (DAT_14cb6a468 == 0) {
    local_200 = local_1e8;
    local_1e8[0] = FUN_140940a0a;
    local_1f0 = FUN_14081d0ea;
    local_1f8 = &LAB_146522c10;
    local_208 = &LAB_14876160d;
    local_210 = &LAB_140e30382;
    local_218 = L"Engine";
    local_220 = 0;
    local_228 = 0x10000004;
    local_230 = 0x10;
    local_238 = 0x9c0;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
  }
  pcVar2 = (code *)FUN_140f63eb4(param_1,DAT_14cb6a468,param_2,param_4);
  if (pcVar2 != (code *)0x0) {
    ppcVar5 = local_1e8 + 2;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *ppcVar5 = (code *)*param_2;
      param_2 = param_2 + 1;
      ppcVar5 = ppcVar5 + 1;
    }
    puVar6 = param_5;
    puVar3 = local_178;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    local_c8 = *(char *)(param_5 + 0x16);
    if (local_c8 == '\x01') {
      puVar6 = param_5 + 10;
      puVar3 = local_128;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    local_b8 = param_5[0x18];
    local_b0 = *(undefined4 *)(param_5 + 0x19);
    uStack_ac = *(undefined4 *)((longlong)param_5 + 0xcc);
    uStack_a8 = *(undefined4 *)(param_5 + 0x1a);
    uStack_a4 = *(undefined4 *)((longlong)param_5 + 0xd4);
    local_a0 = (void *)0x0;
    local_98 = *(int *)(param_5 + 0x1c);
    lVar4 = (longlong)local_98;
    pvVar1 = (void *)param_5[0x1b];
    local_1e8[0] = pcVar2;
    if (lVar4 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98,0);
      memcpy(local_a0,pvVar1,lVar4 * 2);
    }
    local_88[0] = (code *)0x0;
    puVar3 = (undefined8 *)FUN_14001cc68(0x170,0x10);
    pvVar1 = local_a0;
    local_78 = puVar3;
    *puVar3 = &PTR_FUN_14b412910;
    ppcVar5 = local_1e8;
    puVar6 = puVar3 + 2;
    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *ppcVar5;
      ppcVar5 = ppcVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_178;
    puVar7 = puVar3 + 0x10;
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(char *)(puVar3 + 0x26) = local_c8;
    if (local_c8 == '\x01') {
      puVar6 = local_128;
      puVar7 = puVar3 + 0x1a;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar3[0x28] = local_b8;
    *(undefined4 *)(puVar3 + 0x29) = local_b0;
    *(undefined4 *)((longlong)puVar3 + 0x14c) = uStack_ac;
    *(undefined4 *)(puVar3 + 0x2a) = uStack_a8;
    *(undefined4 *)((longlong)puVar3 + 0x154) = uStack_a4;
    puVar3[0x2b] = 0;
    lVar4 = (longlong)local_98;
    *(int *)(puVar3 + 0x2c) = local_98;
    if (lVar4 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x164) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + 0x2b,local_98,0);
      memcpy((void *)puVar3[0x2b],pvVar1,lVar4 * 2);
    }
    if (puVar3 + 2 != (undefined8 *)0x0) {
      local_88[0] = FUN_143daee16;
    }
    FUN_140f6405a(pcVar2,param_3,local_88);
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar2;
}



// FUNCTION 140f63eb4 FUN_140f63eb4 body=421 status=ok
// SIG undefined FUN_140f63eb4(void)

longlong FUN_140f63eb4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  code *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar1 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68 = 0x800040101;
  local_88 = param_4;
  if (param_2 != 0) {
    lVar1 = FUN_141037e38();
    if (lVar1 != 0) {
      if (DAT_14cb6a468 == 0) {
        local_c0 = &local_a0;
        local_a0 = FUN_140940a0a;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_146522c10;
        local_c8 = &LAB_14876160d;
        local_d0 = &LAB_140e30382;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = 0x9c0;
        FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
      }
      if ((*(int *)(DAT_14cb6a468 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb6a468 + 0x38) * 8) == DAT_14cb6a468 + 0x30))
      goto LAB_140f63f62;
    }
    lVar1 = 0;
  }
LAB_140f63f62:
  if (local_58 != 0) {
    plVar2 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar2 = local_38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6405a FUN_140f6405a body=1415 status=ok
// SIG undefined FUN_140f6405a(void)

void FUN_140f6405a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puVar10;
  uint *puVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined4 local_188;
  undefined8 *local_180;
  int local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  longlong *local_160 [27];
  undefined8 *local_88;
  undefined8 local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*param_2 != 0) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar15 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar15) == 0) goto LAB_140f6448f;
        lVar15 = lVar15 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar15);
    }
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 1;
    if ((char)param_1[0x2f] == '\x03') {
      local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
      FUN_1406fd608(local_160);
      local_88 = (undefined8 *)0x0;
      iVar5 = DAT_14cb84a98;
      if (DAT_14cb84a98 == 0) {
        iVar5 = 1;
      }
      DAT_14cb84a98 = iVar5 + 1;
      *(int *)(param_1 + 0x7d) = iVar5;
      local_168._0_4_ = iVar5;
      FUN_140a6a9d4(param_1 + 0x7e,local_160);
      local_168 = (longlong *)((ulonglong)local_168._4_4_ << 0x20);
      if (local_88 != (undefined8 *)0x0) {
        (**(code **)*local_88)(local_88,1);
      }
      FUN_140368b56(local_160);
    }
    plVar8 = param_1 + 0x7e;
    lVar15 = FUN_14087dee0();
    param_1[0x9d] = lVar15;
    *(int *)(param_1 + 0x9a) = (int)param_1[0x9a] + 1;
    uVar2 = param_1[5];
    if (uVar2 < 0xffffffff00000000) {
      plVar12 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar12 = (longlong *)0x0;
      }
      (**(code **)(*plVar12 + 0x58))(plVar12,param_1,uVar2,0xb);
    }
    else {
      uVar14 = (uint)uVar2;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)(puVar10 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
          lVar15 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar11 = *(uint **)(lVar15 + 0x18);
          if (*(uint **)(lVar15 + 0x18) == (uint *)0x0) {
            puVar11 = (uint *)(lVar15 + 8);
          }
          *puVar11 = *puVar11 | 0x800;
          *(byte *)(lVar15 + 0x60) = *(byte *)(lVar15 + 0x60) | 1;
        }
      }
    }
    lVar15 = FUN_140b47a16(plVar8,&DAT_14cb843e8);
    if ((lVar15 == 0) || (*(char *)(lVar15 + 8) != '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar15 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar6;
    (**(code **)(*param_1 + 0x640))(param_1);
    uVar7 = FUN_1447210f0(param_1);
    lVar15 = FUN_14088cdf8(uVar7);
    if (lVar15 != 0) {
      (**(code **)(*param_1 + 0x668))(param_1,local_170);
      FUN_14088cfbe(lVar15,&local_168,plVar8,local_170);
      plVar12 = local_160[0];
      if (param_1 + 0xa1 != &local_168) {
        param_1[0xa1] = (longlong)local_168;
        local_168 = (longlong *)0x0;
        plVar3 = (longlong *)param_1[0xa2];
        if (local_160[0] != plVar3) {
          local_160[0] = (longlong *)0x0;
          param_1[0xa2] = (longlong)plVar12;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar3 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
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
      plVar12 = local_160[0];
      if (local_160[0] != (longlong *)0x0) {
        LOCK();
        plVar3 = local_160[0] + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_160[0])(local_160[0]);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      local_180 = (undefined8 *)0x0;
      local_178 = 0;
      local_168 = param_1;
      FUN_1406fd608(local_160,plVar8);
      local_88 = (undefined8 *)*param_3;
      local_78[0] = 0;
      if (local_88 != (undefined8 *)0x0) {
        plVar8 = param_3 + 4;
        if ((longlong *)param_3[2] != (longlong *)0x0) {
          plVar8 = (longlong *)param_3[2];
        }
        (**(code **)*plVar8)(plVar8,local_78);
      }
      FUN_1446efa72(&local_180,0,0x14,0x10);
      puVar4 = local_180;
      local_178 = 0x14;
      *local_180 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar15 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar15 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar15;
      local_180[2] = lVar9;
      *local_180 = &PTR_FUN_14b4110d0;
      local_180[3] = 0;
      iVar5 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar14 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_180 + 3) = uVar14;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar5 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar5 = *(int *)(lVar15 + 0x10);
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(lVar15 + 0x10) = iVar13;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar5 = iVar13;
          }
        }
      }
      *(int *)((longlong)puVar4 + 0x1c) = iVar5;
      puVar4[4] = local_168;
      FUN_1406fd608(puVar4 + 5,local_160);
      puVar4[0x20] = local_88;
      puVar4[0x22] = local_78[0];
      local_78[0] = 0;
      *(undefined4 *)(puVar4 + 0x26) = local_58;
      *(undefined4 *)((longlong)puVar4 + 0x134) = uStack_54;
      *(undefined4 *)(puVar4 + 0x27) = uStack_50;
      *(undefined4 *)((longlong)puVar4 + 0x13c) = uStack_4c;
      *(undefined4 *)(puVar4 + 0x24) = local_68;
      *(undefined4 *)((longlong)puVar4 + 0x124) = uStack_64;
      *(undefined4 *)(puVar4 + 0x25) = uStack_60;
      *(undefined4 *)((longlong)puVar4 + 300) = uStack_5c;
      if (local_88 != (undefined8 *)0x0) {
        local_88 = (undefined8 *)0x0;
      }
      FUN_140368b56(local_160);
      lVar15 = param_1[0xa1];
      local_190 = 0;
      local_188 = 0;
      FUN_14009d848(&local_190,&local_180);
      FUN_1411bd7b4(lVar15,&local_168,&local_190);
      param_1[0xa0] = (longlong)local_168;
      if (local_178 != 0) {
        if (local_180 == (undefined8 *)0x0) goto LAB_140f6448f;
        (**(code **)*local_180)(local_180,0);
        FUN_1446efa72(&local_180,0,0,0x10);
        local_178 = 0;
      }
      if (local_180 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140f6448f:
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f645e2 FUN_140f645e2 body=286 status=ok
// SIG undefined FUN_140f645e2(void)

undefined8 FUN_140f645e2(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140f646fa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f646fa;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140f646fa:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f646a7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140f646a7;
    }
  }
  uVar6 = 0;
LAB_140f646a7:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f64702 FUN_140f64702 body=41 status=ok
// SIG undefined FUN_140f64702(void)

void FUN_140f64702(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 != '\0') {
    FUN_140f6472c(param_1);
    return;
  }
  return;
}



// FUNCTION 140f6472c FUN_140f6472c body=332 status=ok
// SIG undefined FUN_140f6472c(void)

void FUN_140f6472c(longlong param_1)

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
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x398);
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
      lVar1 = *(longlong *)(param_1 + 0x398);
      if (lVar1 == 0) goto LAB_140f64866;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_140f64866:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f64926 FUN_140f64926 body=277 status=ok
// SIG undefined FUN_140f64926(void)

undefined8 FUN_140f64926(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140f64a35;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f64a35;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140f64a35:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f649e3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140f649e3;
    }
  }
  uVar6 = 0;
LAB_140f649e3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f64a3c FUN_140f64a3c body=5097 status=ok
// SIG undefined FUN_140f64a3c(void)

void FUN_140f64a3c(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  int local_9c;
  PSRWLOCK local_98;
  uint *local_90;
  longlong local_88;
  longlong *local_80;
  PSRWLOCK local_78;
  code *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar1 = (uint *)(param_1 + 10);
  cVar6 = FUN_140f66224(puVar1);
  if (cVar6 != '\0') goto LAB_140f65b84;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
LAB_140f65c03:
    lVar16 = 0;
  }
  else {
    uVar10 = *puVar1;
    lVar16 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)((longlong)param_1 + 0x54) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_140f65c03;
      lVar16 = *plVar13;
    }
  }
  bVar7 = *(byte *)(param_1 + 0x12);
  if ((*(int *)(lVar16 + 0xbf0) <= (int)(uint)bVar7) ||
     (plVar13 = *(longlong **)
                 (*(longlong *)(lVar16 + 0xbe8) + 0x10 +
                 (ulonglong)bVar7 * 0x80 + (ulonglong)bVar7 * 8), plVar13 == (longlong *)0x0))
  goto LAB_140f65b84;
  FUN_1449027d0(param_1,&local_70);
  pcVar4 = *(char **)(local_70 + 0x220);
  local_78 = (PSRWLOCK)(pcVar4 + 0x1b8);
  AcquireSRWLockExclusive(local_78);
  plVar19 = local_68;
  *(int *)(pcVar4 + 0x1b0) = *(int *)(pcVar4 + 0x1b0) + 1;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_68 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar19 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if ((((((*(int *)((longlong)param_1 + 0x54) != 0) && (uVar10 = *puVar1, -1 < (int)uVar10)) &&
        ((int)uVar10 < DAT_14c9647dc)) &&
       ((plVar19 = (longlong *)
                   ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
        plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)((longlong)param_1 + 0x54))))) &&
      ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) && (lVar16 = *plVar19, lVar16 != 0)) {
    if (DAT_14cbbd498 == 0) {
      local_70 = FUN_140940982;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_146572ba2;
      local_c8 = &LAB_148ca13ba;
      local_d0 = &LAB_140e51436;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x1068;
      local_c0 = &local_70;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
      pcVar4[0x1a8] = *(char *)(lVar16 + 0xe39);
    }
  }
  uVar14 = (**(code **)(*plVar13 + 0x2d8))(plVar13);
  uVar14 = uVar14 & 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
LAB_140f65c0a:
    lVar16 = 0;
  }
  else {
    uVar10 = *puVar1;
    lVar16 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar19 == (longlong *)0x0) ||
         (((int)plVar19[2] != *(int *)((longlong)param_1 + 0x54) ||
          ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140f65c0a;
      lVar16 = *plVar19;
    }
  }
  cVar6 = (char)param_1[0x12];
  if ((int)(uint)(cVar6 == '\0') < *(int *)(lVar16 + 0xbf0)) {
    plVar19 = *(longlong **)
               (*(longlong *)(lVar16 + 0xbe8) + 0x10 +
               (ulonglong)((uint)(cVar6 == '\0') * 0x80 + (uint)(cVar6 == '\0') * 8));
  }
  else {
    plVar19 = (longlong *)0x0;
  }
  iVar8 = *(int *)(pcVar4 + 0x5c);
  if (pcVar4[0x58] == '\0') {
LAB_140f64c92:
    pcVar4[0x58] = '\x01';
    *(int *)(pcVar4 + 0x5c) = iVar8 + 1;
  }
  else if (iVar8 == 0) {
    iVar8 = 0;
    goto LAB_140f64c92;
  }
  iVar8 = *(int *)(pcVar4 + 4);
  if (*pcVar4 == '\0') {
LAB_140f64caa:
    *pcVar4 = '\x01';
    *(int *)(pcVar4 + 4) = iVar8 + 1;
  }
  else if (iVar8 == 0) {
    iVar8 = 0;
    goto LAB_140f64caa;
  }
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
LAB_140f65c11:
    lVar16 = 0;
  }
  else {
    uVar10 = *puVar1;
    lVar16 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar18 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar18 == (longlong *)0x0) ||
         (((int)plVar18[2] != *(int *)((longlong)param_1 + 0x54) ||
          ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_140f65c11;
      lVar16 = *plVar18;
    }
  }
  bVar22 = (*(byte *)(lVar16 + 0xbf0) & 0xfe) != 0;
  iVar8 = *(int *)(pcVar4 + 0x54);
  if ((bool)pcVar4[0x50] == bVar22) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f64d20;
    }
  }
  else {
LAB_140f64d20:
    pcVar4[0x50] = bVar22;
    *(int *)(pcVar4 + 0x54) = iVar8 + 1;
  }
  iVar9 = (**(code **)(*plVar13 + 0x2c0))(plVar13);
  iVar8 = *(int *)(pcVar4 + 0xd8);
  if (*(longlong *)(pcVar4 + 0xd0) == (longlong)iVar9) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f64d4b;
    }
  }
  else {
LAB_140f64d4b:
    *(longlong *)(pcVar4 + 0xd0) = (longlong)iVar9;
    *(int *)(pcVar4 + 0xd8) = iVar8 + 1;
  }
  cVar6 = (**(code **)(*plVar13 + 0x328))(plVar13);
  iVar8 = *(int *)(pcVar4 + 0x1c);
  if (pcVar4[0x18] == cVar6) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f64d7c;
    }
  }
  else {
LAB_140f64d7c:
    pcVar4[0x18] = cVar6;
    *(int *)(pcVar4 + 0x1c) = iVar8 + 1;
  }
  iVar9 = (**(code **)(*plVar13 + 0x2b8))(plVar13);
  iVar8 = *(int *)(pcVar4 + 0x7c);
  if ((bool)pcVar4[0x78] == (iVar9 == 0)) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f64da3;
    }
  }
  else {
LAB_140f64da3:
    pcVar4[0x78] = iVar9 == 0;
    *(int *)(pcVar4 + 0x7c) = iVar8 + 1;
  }
  bVar7 = (**(code **)(*plVar13 + 0x390))(plVar13);
  iVar8 = *(int *)(pcVar4 + 0x8c);
  if (*(uint *)(pcVar4 + 0x88) == (uint)(bVar7 ^ 1)) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f64dd3;
    }
  }
  else {
LAB_140f64dd3:
    *(uint *)(pcVar4 + 0x88) = (uint)(bVar7 ^ 1);
    *(int *)(pcVar4 + 0x8c) = iVar8 + 1;
  }
  if (bVar7 == 0) {
    if ((plVar19 != (longlong *)0x0) && (plVar19 != plVar13)) {
      bVar7 = (**(code **)(*plVar19 + 0x390))(plVar19);
      iVar8 = *(int *)(pcVar4 + 0x94);
      if (*(uint *)(pcVar4 + 0x90) == (uint)bVar7) {
        if (iVar8 != 0) goto LAB_140f64fee;
        iVar8 = 0;
      }
      *(uint *)(pcVar4 + 0x90) = (uint)bVar7;
      *(int *)(pcVar4 + 0x94) = iVar8 + 1;
    }
  }
  else {
    cVar6 = (**(code **)(*plVar13 + 0x398))(plVar13);
    if ((cVar6 == '\0') || (iVar8 = *(int *)(pcVar4 + 0x90), iVar8 == 2)) {
      cVar6 = (**(code **)(*plVar13 + 0x398))(plVar13);
      if (cVar6 != '\0') {
        iVar8 = *(int *)(pcVar4 + 0x90);
        goto LAB_140f64e1e;
      }
      bVar7 = pcVar4[0xc0];
      if ((int)(uint)bVar7 < *(int *)(pcVar4 + 400)) {
        *(int *)(pcVar4 + 0x198) = *(int *)(pcVar4 + 0x198) + 1;
        lVar16 = *(longlong *)(pcVar4 + 0x188);
        cVar6 = (**(code **)(*plVar13 + 0x398))(plVar13);
        iVar8 = 1;
        if (cVar6 != '\0') {
          lVar15 = (**(code **)(*param_1 + 0x180))(param_1);
          dVar24 = (double)*(float *)(lVar16 + 0x114 + (ulonglong)((uint)bVar7 * 0x120));
          iVar8 = (*(double *)(lVar15 + 0x6d0) <= dVar24 && dVar24 != *(double *)(lVar15 + 0x6d0)) +
                  1;
        }
        iVar9 = *(int *)(pcVar4 + 0x94);
        if (iVar8 == *(int *)(pcVar4 + 0x90)) {
          if (iVar9 != 0) goto LAB_140f64f94;
          iVar9 = 0;
        }
        *(int *)(pcVar4 + 0x90) = iVar8;
        *(int *)(pcVar4 + 0x94) = iVar9 + 1;
      }
    }
    else {
LAB_140f64e1e:
      iVar9 = *(int *)(pcVar4 + 0x94);
      if (iVar8 == 3) {
        if (iVar9 == 0) {
          iVar9 = 0;
          goto LAB_140f64e2f;
        }
      }
      else {
LAB_140f64e2f:
        pcVar4[0x90] = '\x03';
        pcVar4[0x91] = '\0';
        pcVar4[0x92] = '\0';
        pcVar4[0x93] = '\0';
        *(int *)(pcVar4 + 0x94) = iVar9 + 1;
      }
      if ((0.0 < *(float *)((longlong)plVar13 + 0xdc)) &&
         ((int)(uint)(byte)pcVar4[0xc0] < *(int *)(pcVar4 + 400))) {
        *(int *)(pcVar4 + 0x198) = *(int *)(pcVar4 + 0x198) + 1;
        lVar16 = *(longlong *)(pcVar4 + 0x188);
        uVar14 = (ulonglong)((uint)(byte)pcVar4[0xc0] * 0x120);
        *(undefined4 *)(lVar16 + 0x110 + uVar14) = 0;
        fVar23 = *(float *)((longlong)plVar13 + 0xdc);
        *(float *)(lVar16 + 0x114 + uVar14) = fVar23;
        lVar15 = (**(code **)(*param_1 + 0x180))(param_1);
        *(float *)(lVar16 + 0x118 + uVar14) = (float)((double)fVar23 - *(double *)(lVar15 + 0x6d0));
      }
    }
LAB_140f64f94:
    fVar23 = *(float *)(plVar13 + 0x15);
    iVar8 = *(int *)(pcVar4 + 0xa4);
    if ((fVar23 != *(float *)(pcVar4 + 0xa0)) || (NAN(fVar23) || NAN(*(float *)(pcVar4 + 0xa0)))) {
LAB_140f64fad:
      *(float *)(pcVar4 + 0xa0) = fVar23;
      *(int *)(pcVar4 + 0xa4) = iVar8 + 1;
    }
    else if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f64fad;
    }
    cVar6 = (**(code **)(*plVar13 + 0x2f8))(plVar13);
    if (cVar6 == '\0') {
      uVar10 = (**(code **)(*plVar13 + 0x2d8))(plVar13);
    }
    else {
      uVar10 = (**(code **)(*plVar13 + 0x2b8))();
    }
    uVar14 = (ulonglong)uVar10;
  }
LAB_140f64fee:
  cVar6 = (**(code **)(*plVar13 + 0x390))(plVar13);
  iVar8 = *(int *)(pcVar4 + 0xb4);
  if (pcVar4[0xb0] == cVar6) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f6500e;
    }
  }
  else {
LAB_140f6500e:
    pcVar4[0xb0] = cVar6;
    *(int *)(pcVar4 + 0xb4) = iVar8 + 1;
  }
  if (plVar19 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar19 + 0x390))(plVar19);
    iVar8 = *(int *)(pcVar4 + 0xbc);
    if (pcVar4[0xb8] == cVar6) {
      if (iVar8 != 0) goto LAB_140f6504f;
      iVar8 = 0;
    }
    pcVar4[0xb8] = cVar6;
    *(int *)(pcVar4 + 0xbc) = iVar8 + 1;
  }
LAB_140f6504f:
  cVar6 = '\x01';
  if (pcVar4[0xb0] == '\0') {
    cVar6 = pcVar4[0xb8];
  }
  iVar8 = *(int *)(pcVar4 + 0xac);
  if (cVar6 == pcVar4[0xa8]) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f65074;
    }
  }
  else {
LAB_140f65074:
    pcVar4[0xa8] = cVar6;
    *(int *)(pcVar4 + 0xac) = iVar8 + 1;
  }
  if (pcVar4[8] == '\0') {
    fVar23 = (float)(**(code **)(*plVar13 + 0x388))(plVar13);
    fVar23 = (float)((int)ROUND(fVar23 * 100.0 + fVar23 * 100.0 + -0.5) >> 1);
    iVar8 = *(int *)(pcVar4 + 0xcc);
    if ((*(float *)(pcVar4 + 200) == fVar23) && (!NAN(*(float *)(pcVar4 + 200)) && !NAN(fVar23))) {
      if (iVar8 != 0) goto LAB_140f6528d;
      iVar8 = 0;
    }
    *(float *)(pcVar4 + 200) = fVar23;
    *(int *)(pcVar4 + 0xcc) = iVar8 + 1;
  }
  else {
    iVar8 = *(int *)((longlong)param_1 + 0x54);
    if (iVar8 == 0) {
LAB_140f65c26:
      lVar16 = 0;
    }
    else {
      uVar10 = *puVar1;
      lVar16 = 0;
      if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
        if ((plVar18 == (longlong *)0x0) ||
           (((int)plVar18[2] != iVar8 || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0))))
        goto LAB_140f65c26;
        lVar16 = *plVar18;
      }
    }
    bVar7 = *(byte *)(param_1 + 0x12);
    if ((int)(uint)bVar7 < *(int *)(lVar16 + 0xbf0)) {
      lVar16 = *(longlong *)
                (*(longlong *)(lVar16 + 0xbe8) + 0x40 +
                (ulonglong)bVar7 * 0x80 + (ulonglong)bVar7 * 8);
      if (lVar16 != 0) {
        if ((*(byte *)(lVar16 + 0xc4) & 4) == 0) {
          iVar8 = *(int *)(pcVar4 + 0x118);
          if (*(longlong *)(pcVar4 + 0x110) == 0) {
            if (iVar8 != 0) goto LAB_140f6528d;
            iVar8 = 0;
          }
          pcVar4[0x110] = '\0';
          pcVar4[0x111] = '\0';
          pcVar4[0x112] = '\0';
          pcVar4[0x113] = '\0';
          pcVar4[0x114] = '\0';
          pcVar4[0x115] = '\0';
          pcVar4[0x116] = '\0';
          pcVar4[0x117] = '\0';
          *(int *)(pcVar4 + 0x118) = iVar8 + 1;
        }
        else {
          if (iVar8 == 0) {
LAB_140f65c34:
            lVar16 = 0;
          }
          else {
            uVar10 = *puVar1;
            lVar16 = 0;
            if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
              plVar18 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
              if ((plVar18 == (longlong *)0x0) ||
                 (((int)plVar18[2] != iVar8 || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0))))
              goto LAB_140f65c34;
              lVar16 = *plVar18;
            }
          }
          if (((int)(uint)bVar7 < *(int *)(lVar16 + 0xbf0)) &&
             (lVar16 = *(longlong *)
                        (*(longlong *)(lVar16 + 0xbe8) + 0x20 +
                        (ulonglong)bVar7 * 0x80 + (ulonglong)bVar7 * 8), lVar16 != 0)) {
            lVar15 = FUN_14018fcd2();
            if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
              iVar8 = *(int *)(pcVar4 + 0x118);
              if (*(longlong *)(pcVar4 + 0x110) == (longlong)*(int *)(lVar16 + 0xe0)) {
                if (iVar8 != 0) goto LAB_140f6528d;
                iVar8 = 0;
              }
              *(longlong *)(pcVar4 + 0x110) = (longlong)*(int *)(lVar16 + 0xe0);
              *(int *)(pcVar4 + 0x118) = iVar8 + 1;
            }
          }
        }
      }
    }
  }
LAB_140f6528d:
  cVar6 = (**(code **)(*plVar13 + 0x2f8))(plVar13);
  local_90 = puVar1;
  local_80 = plVar19;
  if ((cVar6 == '\0') || (cVar6 = (**(code **)(*plVar13 + 0x390))(plVar13), cVar6 != '\0')) {
    iVar8 = *(int *)(pcVar4 + 0x4c);
    if (pcVar4[0x48] == '\0') {
      if (iVar8 == 0) {
        iVar8 = 0;
        goto LAB_140f652c6;
      }
    }
    else {
LAB_140f652c6:
      pcVar4[0x48] = '\0';
      *(int *)(pcVar4 + 0x4c) = iVar8 + 1;
    }
    iVar8 = *(int *)(pcVar4 + 0xe8);
    if (*(ulonglong *)(pcVar4 + 0xe0) == uVar14) {
      if (iVar8 == 0) {
        iVar8 = 0;
        goto LAB_140f652f1;
      }
    }
    else {
LAB_140f652f1:
      *(ulonglong *)(pcVar4 + 0xe0) = uVar14;
      *(int *)(pcVar4 + 0xe8) = iVar8 + 1;
    }
    bVar7 = (**(code **)(*plVar13 + 0x390))(plVar13);
    bVar7 = (bVar7 ^ 1) & (int)uVar14 == 0;
    iVar8 = *(int *)(pcVar4 + 0x44);
    if (pcVar4[0x40] == bVar7) {
      if (iVar8 != 0) goto LAB_140f6534c;
      iVar8 = 0;
    }
    pcVar4[0x40] = bVar7;
    lVar16 = 0x44;
LAB_140f65346:
    *(int *)(pcVar4 + lVar16) = iVar8 + 1;
  }
  else {
    iVar8 = *(int *)(pcVar4 + 0x4c);
    if (pcVar4[0x48] == '\0') {
LAB_140f6533d:
      pcVar4[0x48] = '\x01';
      lVar16 = 0x4c;
      goto LAB_140f65346;
    }
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140f6533d;
    }
  }
LAB_140f6534c:
  local_9c = (int)uVar14;
  FUN_1449027d0(param_1,&local_70);
  plVar19 = *(longlong **)(local_70 + 0x230);
  local_98 = (PSRWLOCK)(plVar19 + 4);
  AcquireSRWLockExclusive(local_98);
  plVar18 = local_68;
  *(int *)(plVar19 + 3) = (int)plVar19[3] + 1;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar18 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((((*(int *)((longlong)param_1 + 0x54) != 0) && (uVar10 = *local_90, -1 < (int)uVar10)) &&
      ((int)uVar10 < DAT_14c9647dc)) &&
     (((plVar18 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)((longlong)param_1 + 0x54))) &&
      (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar16 = *plVar18, lVar16 != 0)))))) {
    if (DAT_14cbbd498 == 0) {
      local_70 = FUN_140940982;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_146572ba2;
      local_c0 = &local_70;
      local_c8 = &LAB_148ca13ba;
      local_d0 = &LAB_140e51436;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
      *(int *)(plVar19 + 2) = (int)plVar19[2] + 1;
      if ((longlong)(int)plVar19[1] != 0) {
        lVar15 = *plVar19;
        lVar21 = (longlong)(int)plVar19[1] * 0x118 + lVar15;
        do {
          if (*(char *)(lVar15 + 200) == *(char *)(lVar16 + 0xe39)) {
            iVar8 = (int)plVar19[1];
            if ((longlong)iVar8 < 1) {
              uVar10 = 0xff;
            }
            else {
              iVar9 = iVar8 + (int)plVar19[2];
              lVar20 = *plVar19 + -0x118;
              lVar17 = 0;
              do {
                lVar20 = lVar20 + 0x118;
                if (lVar20 == lVar15) {
                  uVar10 = -(int)lVar17;
                  iVar9 = ((int)plVar19[2] - (int)lVar17) + 1;
                  goto LAB_140f656ad;
                }
                lVar17 = lVar17 + -1;
              } while (-lVar17 != (longlong)iVar8);
              uVar10 = 0xff;
LAB_140f656ad:
              *(int *)(plVar19 + 2) = iVar9;
            }
            cVar6 = FUN_140ae5f1a(uVar10 & 0xff);
            if (cVar6 != '\0') {
              if ((*(int *)((longlong)param_1 + 0x54) == 0) || (uVar10 = *local_90, (int)uVar10 < 0)
                 ) {
LAB_140f6581a:
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                if ((int)uVar10 < DAT_14c9647dc) {
                  plVar18 = (longlong *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                  if (((plVar18 == (longlong *)0x0) ||
                      ((int)plVar18[2] != *(int *)((longlong)param_1 + 0x54))) ||
                     ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_140f6581a;
                  lVar17 = *plVar18;
                }
              }
              if ((0 < *(int *)(lVar17 + 0xbf0)) &&
                 (lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0xbe8) + 0x10), lVar17 != 0)) {
                lVar20 = FUN_1401e5a06();
                if ((*(int *)(lVar20 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
                   ((*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar20 + 0x38) * 8) == lVar20 + 0x30 &&
                    (lVar20 = param_1[4], lVar20 != 0)))) {
                  if (DAT_14cbadd90 == 0) {
                    local_70 = FUN_141030f22;
                    local_b0 = FUN_14081d0ea;
                    local_b8 = &LAB_1459f2e4c;
                    local_c0 = &local_70;
                    local_c8 = &LAB_148c39de3;
                    local_d0 = &LAB_1457a9eb2;
                    local_d8 = L"Game";
                    local_e0 = 0;
                    local_e8 = 0x10000004;
                    local_f0 = 0x10;
                    local_f8 = 0x3de0;
                    local_88 = lVar20;
                    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,
                                  FUN_1465e9ab8);
                    lVar20 = local_88;
                  }
                  if ((*(int *)(DAT_14cbadd90 + 0x38) <=
                       *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                    lVar17 = (ulonglong)*(byte *)(lVar17 + 0x110) * 0x40;
                    iVar8 = *(int *)(lVar20 + 0x2600 + lVar17);
                    iVar9 = *(int *)(lVar15 + 0xd4);
                    if (iVar8 == *(int *)(lVar15 + 0xd0)) {
                      if (iVar9 == 0) {
                        iVar9 = 0;
                        goto LAB_140f657cf;
                      }
                    }
                    else {
LAB_140f657cf:
                      *(int *)(lVar15 + 0xd0) = iVar8;
                      *(int *)(lVar15 + 0xd4) = iVar9 + 1;
                    }
                    iVar8 = *(int *)(lVar17 + lVar20 + 0x2608);
                    iVar9 = *(int *)(lVar15 + 0xdc);
                    if (iVar8 == *(int *)(lVar15 + 0xd8)) {
                      if (iVar9 != 0) goto LAB_140f6575d;
                      iVar9 = 0;
                    }
                    *(int *)(lVar15 + 0xd8) = iVar8;
                    *(int *)(lVar15 + 0xdc) = iVar9 + 1;
                  }
                }
              }
            }
          }
LAB_140f6575d:
          lVar15 = lVar15 + 0x118;
        } while (lVar15 != lVar21);
      }
    }
  }
  plVar19 = local_80;
  if ((local_80 == (longlong *)0x0) || (local_80 == plVar13)) {
    iVar8 = local_9c;
    if (pcVar4[0x68] != '\0') {
      iVar9 = *(int *)(pcVar4 + 0x6c) + 1;
LAB_140f65481:
      pcVar4[0x68] = '\0';
      goto LAB_140f65a07;
    }
    if (*(int *)(pcVar4 + 0x6c) == 0) {
      iVar9 = 1;
      goto LAB_140f65481;
    }
  }
  else {
    iVar11 = (**(code **)(*local_80 + 0x2c0))(local_80);
    iVar8 = local_9c;
    iVar9 = *(int *)(pcVar4 + 0xf8);
    if (*(longlong *)(pcVar4 + 0xf0) == (longlong)iVar11) {
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_140f6548f;
      }
    }
    else {
LAB_140f6548f:
      *(longlong *)(pcVar4 + 0xf0) = (longlong)iVar11;
      *(int *)(pcVar4 + 0xf8) = iVar9 + 1;
    }
    iVar9 = (**(code **)(*plVar19 + 0x2b8))(plVar19);
    cVar6 = '\x01';
    if (iVar9 != 0) {
      if (*(int *)((longlong)param_1 + 0x54) == 0) {
LAB_140f65c2d:
        lVar16 = 0;
      }
      else {
        uVar10 = *local_90;
        lVar16 = 0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if ((plVar18 == (longlong *)0x0) ||
             (((int)plVar18[2] != *(int *)((longlong)param_1 + 0x54) ||
              ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_140f65c2d;
          lVar16 = *plVar18;
        }
      }
      if ((1 < *(int *)(lVar16 + 0xbf0)) &&
         (lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0xbe8) + 0xa8), lVar16 != 0)) {
        lVar15 = FUN_14018fcd2();
        lVar16 = *(longlong *)(lVar16 + 0x10);
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
            lVar15 + 0x30)) goto LAB_140f6554f;
      }
      cVar6 = '\0';
    }
LAB_140f6554f:
    iVar9 = *(int *)(pcVar4 + 0x84);
    if (cVar6 == pcVar4[0x80]) {
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_140f65564;
      }
    }
    else {
LAB_140f65564:
      pcVar4[0x80] = cVar6;
      *(int *)(pcVar4 + 0x84) = iVar9 + 1;
    }
    if ((*(int *)(pcVar4 + 0x88) == 1) && (*(int *)(pcVar4 + 0x90) != 0)) {
      bVar7 = pcVar4[0xc0];
      if ((int)(uint)bVar7 < *(int *)(pcVar4 + 400)) {
        *(int *)(pcVar4 + 0x198) = *(int *)(pcVar4 + 0x198) + 1;
        lVar16 = *(longlong *)(pcVar4 + 0x188);
        cVar6 = (**(code **)(*plVar19 + 0x398))(plVar19);
        if ((cVar6 != '\0') &&
           (lVar15 = (**(code **)(*param_1 + 0x180))(param_1),
           dVar24 = (double)*(float *)(lVar16 + 0x114 + (ulonglong)((uint)bVar7 * 0x120)),
           *(double *)(lVar15 + 0x6d0) <= dVar24 && dVar24 != *(double *)(lVar15 + 0x6d0))) {
          iVar9 = *(int *)(pcVar4 + 0x94);
          uVar12 = 3;
          uVar5 = 3;
          if (*(int *)(pcVar4 + 0x90) == 3) goto LAB_140f658ee;
          goto LAB_140f658f4;
        }
      }
      else {
        iVar9 = *(int *)(pcVar4 + 0x94);
        uVar12 = 1;
        uVar5 = 1;
        if (*(int *)(pcVar4 + 0x90) == 1) {
LAB_140f658ee:
          uVar12 = uVar5;
          if (iVar9 != 0) goto LAB_140f65902;
          iVar9 = 0;
        }
LAB_140f658f4:
        *(undefined4 *)(pcVar4 + 0x90) = uVar12;
        *(int *)(pcVar4 + 0x94) = iVar9 + 1;
      }
LAB_140f65902:
      fVar23 = *(float *)(plVar19 + 0x15);
      iVar9 = *(int *)(pcVar4 + 0xa4);
      if ((fVar23 == *(float *)(pcVar4 + 0xa0)) && (!NAN(fVar23) && !NAN(*(float *)(pcVar4 + 0xa0)))
         ) {
        if (iVar9 != 0) goto LAB_140f65936;
        iVar9 = 0;
      }
      *(float *)(pcVar4 + 0xa0) = fVar23;
      *(int *)(pcVar4 + 0xa4) = iVar9 + 1;
    }
LAB_140f65936:
    cVar6 = (**(code **)(*plVar19 + 0x2f8))(plVar19);
    if ((cVar6 == '\0') || (cVar6 = (**(code **)(*plVar19 + 0x390))(plVar19), cVar6 != '\0')) {
      iVar9 = *(int *)(pcVar4 + 0x74);
      if (pcVar4[0x70] == '\0') {
        if (iVar9 == 0) {
          iVar9 = 0;
          goto LAB_140f65963;
        }
      }
      else {
LAB_140f65963:
        pcVar4[0x70] = '\0';
        *(int *)(pcVar4 + 0x74) = iVar9 + 1;
      }
      bVar7 = (**(code **)(*plVar19 + 0x390))(plVar19);
      iVar9 = (**(code **)((ulonglong)(bVar7 ^ 1) * 0x20 + 0x2b8 + *plVar19))(plVar19);
      if (*(longlong *)(pcVar4 + 0x100) == (longlong)iVar9) {
        if (*(int *)(pcVar4 + 0x108) == 0) {
          iVar11 = 1;
          goto LAB_140f659b5;
        }
      }
      else {
        iVar11 = *(int *)(pcVar4 + 0x108) + 1;
LAB_140f659b5:
        *(longlong *)(pcVar4 + 0x100) = (longlong)iVar9;
        *(int *)(pcVar4 + 0x108) = iVar11;
      }
      cVar6 = (**(code **)(*plVar19 + 0x390))(plVar19);
      if (cVar6 == '\0') {
        iVar9 = (**(code **)(*plVar19 + 0x2d8))(plVar19);
        bVar22 = iVar9 < 1;
      }
      else {
        bVar22 = false;
      }
      if (bVar22 == (bool)pcVar4[0x68]) {
        if (*(int *)(pcVar4 + 0x6c) != 0) goto LAB_140f65a10;
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)(pcVar4 + 0x6c) + 1;
      }
      pcVar4[0x68] = bVar22;
LAB_140f65a07:
      lVar16 = 0x6c;
    }
    else {
      if (pcVar4[0x70] == '\0') {
        iVar9 = *(int *)(pcVar4 + 0x74) + 1;
      }
      else {
        if (*(int *)(pcVar4 + 0x74) != 0) goto LAB_140f65a10;
        iVar9 = 1;
      }
      pcVar4[0x70] = '\x01';
      lVar16 = 0x74;
    }
    *(int *)(pcVar4 + lVar16) = iVar9;
  }
LAB_140f65a10:
  ReleaseSRWLockExclusive(local_98);
  cVar6 = pcVar4[0xa8];
  *(char *)((longlong)param_1 + 0x9a) = cVar6;
  if (cVar6 == '\0') {
    if (*(int *)(pcVar4 + 0x98) == 0) {
      if (*(int *)(pcVar4 + 0x9c) != 0) goto LAB_140f65a51;
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)(pcVar4 + 0x9c) + 1;
    }
    pcVar4[0x98] = '\0';
    pcVar4[0x99] = '\0';
    pcVar4[0x9a] = '\0';
    pcVar4[0x9b] = '\0';
    *(int *)(pcVar4 + 0x9c) = iVar9;
  }
LAB_140f65a51:
  FUN_1449027d0(param_1,&local_70);
  lVar16 = *(longlong *)(local_70 + 0x420);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar16 + 0x78));
  *(int *)(lVar16 + 0x70) = *(int *)(lVar16 + 0x70) + 1;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_68 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (iVar8 == 0) {
    iVar9 = (**(code **)(*plVar13 + 0x2c0))(plVar13);
    bVar22 = iVar9 == 0;
  }
  else {
    bVar22 = false;
  }
  *(bool *)(lVar16 + 0x69) = bVar22;
  cVar6 = (**(code **)(*plVar13 + 0x390))();
  if ((cVar6 == '\0') && (cVar6 = FUN_1410f362a(), cVar6 == '\0')) {
    bVar7 = (**(code **)(*plVar13 + 0x328))(plVar13,0x3e99999a);
    bVar7 = iVar8 != 0 & bVar7;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)(lVar16 + 0x68) = bVar7;
  if (*(char *)(lVar16 + 0x69) == pcVar4[0x20]) {
    if (*(int *)(pcVar4 + 0x24) == 0) {
      iVar8 = 1;
      goto LAB_140f65b1e;
    }
  }
  else {
    iVar8 = *(int *)(pcVar4 + 0x24) + 1;
LAB_140f65b1e:
    pcVar4[0x20] = *(char *)(lVar16 + 0x69);
    *(int *)(pcVar4 + 0x24) = iVar8;
  }
  lVar15 = FUN_1400d7050(param_1 + 6);
  if (lVar15 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1459f2e4c;
      local_c8 = &LAB_148c39de3;
      local_d0 = &LAB_1457a9eb2;
      local_d8 = L"Game";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x3de0;
      local_c0 = &local_70;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_140c12578(lVar16,lVar15);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar16 + 0x78));
  ReleaseSRWLockExclusive(local_78);
LAB_140f65b84:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f65e26 FUN_140f65e26 body=49 status=ok
// SIG undefined FUN_140f65e26(void)

void FUN_140f65e26(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x40) = 0;
    FUN_14016fae4(param_1);
    return;
  }
  return;
}



// FUNCTION 140f65e58 FUN_140f65e58 body=341 status=ok
// SIG undefined FUN_140f65e58(void)

void FUN_140f65e58(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)(param_1 + -0x30);
  FUN_140f65fae(plVar1);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_14480f766(&DAT_14cb7df80);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x1c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
      FUN_140457ffc(lVar3 + 0x6000,plVar1);
      FUN_1401073f6(lVar3 + 0x5fc0,plVar1);
      FUN_140457ffc(lVar3 + 0x5fe8,plVar1);
      FUN_140457ffc(lVar3 + 0x7790,plVar1);
      FUN_140457ffc(lVar3 + 0x77a8,plVar1);
      FUN_140457ffc(lVar3 + 0x52f0,plVar1);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1400d6ce6();
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 400,plVar1);
      FUN_140457ffc(lVar3 + 0x160,plVar1);
      FUN_140457ffc(lVar3 + 0x178,plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140f65fae FUN_140f65fae body=630 status=ok
// SIG undefined FUN_140f65fae(void)

void FUN_140f65fae(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar1 = (uint *)(param_1 + 0x50);
  cVar3 = FUN_140f66224(puVar1);
  if (cVar3 != '\0') {
    return;
  }
  FUN_140f6626a();
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_140f66204:
    lVar5 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_140f66204;
      lVar5 = *plVar6;
    }
  }
  FUN_1401073f6(lVar5 + 0xa10,param_1);
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_140f6620b:
    lVar5 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_140f6620b;
      lVar5 = *plVar6;
    }
  }
  FUN_1401073f6(lVar5 + 0xa20,param_1);
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_140f66212:
    lVar5 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_140f66212;
      lVar5 = *plVar6;
    }
  }
  FUN_1401073f6(lVar5 + 0xa30,param_1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
LAB_140f66219:
    lVar5 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_140f66219;
      lVar5 = *plVar6;
    }
  }
  if ((0 < *(int *)(lVar5 + 0xbf0)) && (*(longlong *)(*(longlong *)(lVar5 + 0xbe8) + 0x10) != 0)) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_14480f766();
      iVar4 = *(int *)(param_1 + 0x54);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (iVar4 != 0) {
    uVar2 = *puVar1;
    lVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f661c7;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == iVar4 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      lVar5 = *plVar6;
      goto LAB_140f661c7;
    }
  }
  lVar5 = 0;
LAB_140f661c7:
  if ((1 < *(int *)(lVar5 + 0xbf0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xbe8) + 0x98), lVar5 != 0)) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14480f766(lVar5 + 0x40);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 140f66224 FUN_140f66224 body=70 status=ok
// SIG undefined FUN_140f66224(void)

bool FUN_140f66224(uint *param_1)

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



// FUNCTION 140f6626a FUN_140f6626a body=212 status=ok
// SIG undefined FUN_140f6626a(void)

void FUN_140f6626a(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cVar3 = FUN_140f66224((uint *)(param_1 + 0x50));
  if (cVar3 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f662cf;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       (((int)plVar5[2] == *(int *)(param_1 + 0x54) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))
       ) {
      lVar4 = *plVar5;
      goto LAB_140f662cf;
    }
  }
  lVar4 = 0;
LAB_140f662cf:
  bVar1 = *(byte *)(lVar4 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) &&
     (lVar4 = *(longlong *)
               (*(longlong *)(lVar4 + 0xbe8) + 0x40 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
               ), lVar4 != 0)) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_14480f766(lVar4 + 0x38);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14480f766(lVar4 + 0x68);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 140f6633e FUN_140f6633e body=644 status=ok
// SIG undefined FUN_140f6633e(void)

void FUN_140f6633e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 **_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_140f66428;
          }
        }
        _Src = (undefined8 **)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,_Src,
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
LAB_140f66428:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x498))(param_1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f665c4 FUN_140f665c4 body=292 status=ok
// SIG undefined FUN_140f665c4(void)

void FUN_140f665c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x150) == 0) || (*(longlong *)(param_1 + 0x178) == 0)) ||
     (*param_2 == 0)) goto LAB_140f66641;
  lVar2 = FUN_14496b220();
  if (lVar2 == 0) goto LAB_140f66641;
  ppuVar3 = (undefined8 **)(lVar2 + 0x78);
  if (*(longlong *)(lVar2 + 0x78) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))
              (*(longlong **)(param_1 + 0x178),&local_30,*(undefined2 *)(param_1 + 0x188));
    if (ppuVar3 != &local_30) {
      puVar1 = *ppuVar3;
      *ppuVar3 = local_30;
      local_30 = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) goto LAB_140f66616;
      (**(code **)*puVar1)(puVar1,1);
    }
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
LAB_140f66616:
  if ((*(char *)(param_1 + 0x1a4) == '\x01') && (*(longlong *)(param_1 + 400) != 0)) {
    (**(code **)(*(longlong *)*param_2 + 0xa8))();
  }
  (**(code **)(**ppuVar3 + 0x100))();
  (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,*ppuVar3,1,1);
LAB_140f66641:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f666ea FUN_140f666ea body=2941 status=ok
// SIG undefined FUN_140f666ea(void)

void FUN_140f666ea(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 **ppuVar3;
  uint *puVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 *_Src;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  longlong *plVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auStack_138 [40];
  longlong *local_110;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  int local_f0;
  uint local_ec;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_90;
  byte *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_141499196();
  plVar15 = param_1 + 0x51;
  local_b8 = &DAT_100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  plStack_b0 = plVar15;
  if ((int)param_1[0x54] == 0) {
    uVar33 = 1;
    local_a8._0_4_ = 0xffffffff;
    iVar24 = 0;
    local_a8._4_4_ = 0;
    uVar20 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    uVar20 = (ulonglong)local_b8 & 0xffffffff;
    uVar33 = (ulonglong)local_b8 >> 0x20;
    iVar24 = (int)param_1[0x54];
  }
  if (local_a8._4_4_ != iVar24 || plStack_b0 != plVar15) {
    local_f8 = param_1 + 0x72;
    local_110 = param_1 + 0x74;
    local_c8 = param_1 + 0x79;
    plVar19 = plStack_b0;
    uVar31 = (uint)local_a8;
    iVar8 = local_a8._4_4_;
    iVar28 = local_a0;
    local_104 = iVar24;
    local_e8 = plStack_b0;
    local_e0 = plVar15;
    do {
      lVar32 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar8 * 0x20);
      local_ec = uVar31;
      local_d8 = uVar33;
      local_d0 = uVar20;
      if ((lVar32 != 0) && (lVar26 = *(longlong *)(lVar32 + 0x30), lVar26 != 0)) {
        *(undefined4 *)(lVar32 + 0x40) = *(undefined4 *)(lVar32 + 0x44);
        *(undefined4 *)(lVar26 + 0x260) = 0;
        if (*(int *)(lVar26 + 0x264) != 0) {
          FUN_1457d0886(lVar26 + 600,0);
        }
        *(undefined1 *)(lVar26 + 0x18) = 0;
        local_b8 = (undefined1 *)0x0;
        plStack_b0 = (longlong *)0x0;
        cVar7 = (**(code **)(*param_1 + 0x418))(param_1,&local_b8,lVar32,lVar32);
        _Src = local_b8;
        if (cVar7 != '\0') {
          ppuVar3 = (undefined1 **)(lVar26 + 600);
          local_f0 = iVar28;
          if (ppuVar3 != &local_b8) {
            iVar24 = (int)plStack_b0;
            lVar32 = (longlong)(int)plStack_b0;
            *(int *)(lVar26 + 0x260) = (int)plStack_b0;
            if ((int)plStack_b0 == 0 && *(int *)(lVar26 + 0x264) == 0) {
              *(undefined4 *)(lVar26 + 0x264) = 0;
            }
            else {
              FUN_14012afbc(ppuVar3,(ulonglong)plStack_b0 & 0xffffffff);
              if (iVar24 != 0) {
                memcpy(*ppuVar3,_Src,lVar32 << 3);
              }
            }
          }
          local_78 = 0;
          plStack_70 = (longlong *)0x0;
          cVar7 = FUN_1446e9750(param_1,&local_78,&local_b8,0);
          if (cVar7 != '\0') {
            if ((*(longlong *)(lVar26 + 0x50) != 0) || (lVar32 = FUN_1457d08e6(), lVar32 != 0)) {
              *(undefined1 *)(lVar26 + 0x18) = 1;
            }
            uVar31 = *(uint *)(lVar26 + 0x1c8);
            if ((ulonglong)uVar31 != 0) {
              lVar32 = 0;
              do {
                FUN_1457d07b2(local_f8,*(longlong *)(lVar26 + 0x1c0) + lVar32,lVar26);
                lVar32 = lVar32 + 8;
              } while ((ulonglong)uVar31 << 3 != lVar32);
            }
            FUN_140cc84f4(lVar26);
            FUN_140f6741e(lVar26 + 0x1b8,&local_78);
            lVar32 = lVar26 + 0x20;
            *(undefined4 *)(lVar26 + 0x28) = 0;
            if (*(int *)(lVar26 + 0x2c) < 0) {
              FUN_1403de8ba(lVar32,0);
            }
            *(undefined4 *)(lVar26 + 0x38) = 0;
            if (*(int *)(lVar26 + 0x3c) < 0) {
              FUN_1403de8ba(lVar26 + 0x30,0);
            }
            local_c0 = (longlong *)(lVar26 + 0x1c0);
            FUN_14094f414(lVar32);
            FUN_14094f414(lVar32,lVar26 + 0x1e0);
            FUN_14094f414(lVar32,lVar26 + 0x200);
            puVar11 = &DAT_14c9a1308;
            if (local_78 != 0) {
              puVar11 = (undefined8 *)FUN_1446e60f4(local_78,&DAT_14cb92f98);
            }
            pbVar5 = (byte *)*puVar11;
            if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(pbVar5 + 8);
            }
            FUN_1400b22c2(&local_88,uVar13);
            if ((byte **)(lVar26 + 0x248) == &local_88) {
              if (local_88 != (byte *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar26 + 0x248) != 0) {
                FUN_1400020a8();
              }
              *(byte **)(lVar26 + 0x248) = local_88;
              local_88 = (byte *)0x0;
              *(undefined4 *)(lVar26 + 0x250) = (undefined4)local_80;
              *(undefined4 *)(lVar26 + 0x254) = local_80._4_4_;
            }
            puVar11 = &DAT_14c9a1308;
            if (local_78 != 0) {
              puVar11 = (undefined8 *)FUN_1446e60f4(local_78,&DAT_14cb92f88);
            }
            pbVar5 = (byte *)*puVar11;
            puVar11 = &DAT_14c9a1270;
            if ((pbVar5 != (byte *)0x0) && (puVar11 = &DAT_14c9a1270, (*pbVar5 & 2) != 0)) {
              puVar11 = *(undefined8 **)(pbVar5 + 8);
            }
            plVar15 = local_110;
            if ((longlong)*(int *)(puVar11 + 2) != 0) {
              puVar25 = (undefined8 *)*puVar11;
              puVar11 = puVar25 + (longlong)*(int *)(puVar11 + 2) * 2;
              local_100 = (longlong *)(lVar26 + 0x238);
              do {
                pbVar5 = (byte *)*puVar25;
                local_80 = (longlong *)puVar25[1];
                if (local_80 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_80 + 1) = (int)local_80[1] + 1;
                  UNLOCK();
                }
                local_88 = pbVar5;
                if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 0x40) == 0)) {
                  puVar12 = (undefined8 *)FUN_140f67268(&DAT_14cb92fc0);
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  puVar12[2] = 0;
                  puVar12[3] = 0;
                  puVar12[4] = 0;
                  puVar12[5] = 0;
                  puVar12[6] = 0;
                  puVar12[7] = 0;
                  puVar12[8] = 0;
                  puVar12[9] = 0;
                  puVar12[10] = 0;
                  puVar12[0xb] = 0;
                  *(undefined8 *)((longlong)puVar12 + 0x5b) = 0;
                  *(undefined8 *)((longlong)puVar12 + 99) = 0;
                  puVar12[0xe] = 0;
                  puVar12[0xf] = 0;
                  FUN_140f6741e(puVar12,&local_88);
                  uVar13 = FUN_140625092(pbVar5,&DAT_14c9a12e0);
                  if (DAT_14c947fe0 == 0) {
                    lVar14 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar14);
                    DAT_14c947fe0 = lVar14;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_90,uVar13,1);
                  *puVar12 = local_90;
                  iVar24 = *(int *)(lVar26 + 0x240);
                  *(uint *)(lVar26 + 0x240) = iVar24 + 1U;
                  if (*(uint *)(lVar26 + 0x244) < iVar24 + 1U) {
                    FUN_140f672bc(local_100,iVar24);
                  }
                  *(undefined8 **)(*local_100 + (longlong)iVar24 * 8) = puVar12;
                  FUN_14094f414(lVar32,puVar12 + 1);
                  FUN_14094f414(lVar32,puVar12 + 5);
                  FUN_14094f414(lVar32,puVar12 + 9);
                  plVar15 = local_110;
                }
                plVar19 = local_80;
                if (local_80 != (longlong *)0x0) {
                  LOCK();
                  plVar29 = local_80 + 1;
                  *(int *)plVar29 = (int)*plVar29 + -1;
                  UNLOCK();
                  if ((int)*plVar29 == 0) {
                    (**(code **)*local_80)(local_80);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    plVar15 = local_110;
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                      plVar15 = local_110;
                    }
                  }
                }
                puVar25 = puVar25 + 2;
              } while (puVar25 != puVar11);
            }
            uVar31 = *(uint *)(lVar26 + 0x1c8);
            if ((ulonglong)uVar31 != 0) {
              uVar33 = 0;
              do {
                lVar32 = *local_c0;
                if (*(int *)((longlong)param_1 + 0x3c4) == 0) {
                  iVar24 = (int)param_1[0x73];
                  *(int *)(param_1 + 0x73) = iVar24 + 1;
                  if (*(int *)((longlong)param_1 + 0x39c) == iVar24) {
                    FUN_14482b872(local_f8,iVar24);
                    plVar15 = local_110;
                  }
                  iVar28 = (int)param_1[0x77];
                  if (iVar28 == 0) {
                    iVar8 = -1;
                  }
                  else {
                    iVar8 = iVar28 + 0x1e;
                    if (-1 < iVar28 + -1) {
                      iVar8 = iVar28 + -1;
                    }
                    iVar8 = iVar8 >> 5;
                  }
                  iVar18 = iVar28 + 1;
                  iVar17 = iVar28 + 0x1f;
                  if (-1 < iVar28) {
                    iVar17 = iVar28;
                  }
                  if (iVar17 >> 5 == iVar8) {
                    *(int *)(param_1 + 0x77) = iVar18;
                  }
                  else {
                    if (*(int *)((longlong)param_1 + 0x3bc) <= iVar28) {
                      iVar8 = iVar28;
                      if (iVar28 + 0x20U < 0xa0) {
                        iVar18 = 0x80;
                      }
                      else {
                        uVar30 = iVar28 + 0x20U >> 5;
                        if (*(int *)((longlong)param_1 + 0x3bc) + 0x1fU < 0xa0) {
                          uVar22 = 4;
                          if (4 < uVar30) {
                            uVar22 = uVar30;
                          }
                        }
                        else {
                          uVar22 = uVar30 + (uVar30 * 3 >> 3) + 0x10;
                        }
                        uVar20 = (ulonglong)(uVar22 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar9 = (uint)(uVar20 + 0xf);
                            if (uVar22 < 0x1ffd) {
                              uVar20 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar20 + 0xf >> 4]];
                            }
                            else {
                              uVar21 = (ulonglong)(uVar9 & 0xfffffff0);
                              if (uVar21 < 0x7ff1) {
                                bVar16 = (&DAT_14c841e00)[uVar9 >> 4];
                                uVar23 = 0x32;
                                if (0x32 < bVar16) {
                                  uVar23 = (ulonglong)bVar16;
                                }
                                uVar27 = 0x32 - (ulonglong)bVar16;
                                do {
                                  uVar20 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                                  plVar15 = local_110;
                                  if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_140f6704e;
                                  lVar14 = uVar23 + 1 + uVar27;
                                  uVar27 = uVar27 - 1;
                                } while (lVar14 != 0x33);
                              }
                              uVar20 = 0x10;
                              if (0x10 < DAT_14c841df8) {
                                uVar20 = (ulonglong)DAT_14c841df8;
                              }
                              uVar20 = -uVar20 & (uVar21 + uVar20) - 1;
                            }
                          }
                          else {
                            local_100 = (longlong *)(ulonglong)uVar30;
                            uVar20 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar20,0);
                            uVar30 = (uint)local_100;
                            plVar15 = local_110;
                            iVar8 = (int)param_1[0x77];
                          }
                        }
LAB_140f6704e:
                        iVar10 = (int)(uVar20 >> 2);
                        iVar18 = iVar10 << 5;
                        if (iVar10 < (int)uVar30) {
                          iVar18 = -0x20;
                        }
                      }
                      *(int *)((longlong)param_1 + 0x3bc) = iVar18;
                      FUN_1446efbd8(plVar15,iVar8);
                      iVar18 = (int)param_1[0x77] + 1;
                      plVar15 = local_110;
                    }
                    iVar8 = iVar18 + 0x1f;
                    if (-1 < iVar18) {
                      iVar8 = iVar18;
                    }
                    *(int *)(param_1 + 0x77) = iVar18;
                    if (iVar18 % 0x20 != 0) {
                      plVar19 = (longlong *)param_1[0x76];
                      if ((longlong *)param_1[0x76] == (longlong *)0x0) {
                        plVar19 = plVar15;
                      }
                      bVar16 = -(char)(iVar18 % 0x20);
                      *(uint *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) =
                           (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) <<
                                 (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
                    }
                  }
                  lVar14 = (longlong)iVar24;
                  plVar19 = (longlong *)param_1[0x76];
                  if ((longlong *)param_1[0x76] == (longlong *)0x0) {
                    plVar19 = plVar15;
                  }
                  bVar16 = (byte)iVar28 & 0x1f;
                  puVar4 = (uint *)((longlong)plVar19 + (longlong)(iVar17 >> 5) * 4);
                  *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
                }
                else {
                  iVar24 = (int)param_1[0x78];
                  lVar14 = (longlong)iVar24;
                  iVar28 = *(int *)(param_1[0x72] + 4 + lVar14 * 0x18);
                  *(int *)(param_1 + 0x78) = iVar28;
                  iVar8 = *(int *)((longlong)param_1 + 0x3c4) + -1;
                  *(int *)((longlong)param_1 + 0x3c4) = iVar8;
                  plVar15 = local_110;
                  if (iVar8 != 0) {
                    *(undefined4 *)(param_1[0x72] + (longlong)iVar28 * 0x18) = 0xffffffff;
                  }
                }
                plVar19 = (longlong *)param_1[0x76];
                if ((longlong *)param_1[0x76] == (longlong *)0x0) {
                  plVar19 = plVar15;
                }
                iVar28 = iVar24 + 0x1f;
                if (-1 < iVar24) {
                  iVar28 = iVar24;
                }
                puVar4 = (uint *)((longlong)plVar19 + (longlong)(iVar28 >> 5) * 4);
                *puVar4 = *puVar4 | 1 << ((byte)iVar24 & 0x1f);
                iVar28 = 1;
                lVar6 = param_1[0x72];
                uVar13 = *(undefined8 *)(lVar32 + uVar33 * 8);
                *(undefined8 *)(lVar6 + lVar14 * 0x18) = uVar13;
                *(longlong *)(lVar6 + 8 + lVar14 * 0x18) = lVar26;
                *(undefined4 *)(lVar6 + 0x10 + lVar14 * 0x18) = 0xffffffff;
                uVar30 = (int)param_1[0x73] - *(int *)((longlong)param_1 + 0x3c4);
                if (3 < uVar30) {
                  uVar20 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
                  lVar32 = 0x3f;
                  if (uVar20 != 0) {
                    for (; uVar20 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                    }
                  }
                  iVar28 = 1 << ((byte)lVar32 & 0x1f);
                }
                if (((int)uVar30 < 1) || (iVar28 <= (int)param_1[0x7b])) {
                  lVar6 = lVar6 + lVar14 * 0x18;
                  uVar30 = (uint)((ulonglong)uVar13 >> 0x10);
                  uVar22 = (uint)uVar13 & 0xffff;
                  uVar30 = (int)param_1[0x7b] - 1U &
                           ((uint)uVar13 << 0x10 | uVar22) + (int)((ulonglong)uVar13 >> 0x20) +
                           (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar22 >> 4);
                  *(uint *)(lVar6 + 0x14) = uVar30;
                  plVar15 = (longlong *)param_1[0x7a];
                  if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
                    plVar15 = local_c8;
                  }
                  *(undefined4 *)(lVar6 + 0x10) =
                       *(undefined4 *)
                        ((longlong)plVar15 +
                        ((longlong)(int)param_1[0x7b] - 1U & (longlong)(int)uVar30) * 4);
                  plVar15 = (longlong *)param_1[0x7a];
                  if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
                    plVar15 = local_c8;
                  }
                  *(int *)((longlong)plVar15 +
                          ((longlong)(int)param_1[0x7b] - 1U & (longlong)(int)uVar30) * 4) = iVar24;
                }
                else {
                  *(int *)(param_1 + 0x7b) = iVar28;
                  FUN_140f67c7a(local_f8);
                }
                uVar33 = uVar33 + 1;
                plVar15 = local_110;
              } while (uVar33 != uVar31);
            }
          }
          plVar29 = plStack_70;
          plVar15 = local_e0;
          plVar19 = local_e8;
          iVar28 = local_f0;
          iVar24 = local_104;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_70 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar29 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
          }
        }
        if (local_b8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar31 = local_ec & ~(uint)local_d8;
      plVar29 = (longlong *)plVar19[2];
      if ((longlong *)plVar19[2] == (longlong *)0x0) {
        plVar29 = plVar19;
      }
      iVar18 = (int)plVar19[3];
      iVar8 = (int)local_d0;
      lVar32 = (longlong)iVar8;
      uVar30 = *(uint *)((longlong)plVar29 + lVar32 * 4) & uVar31;
      uVar20 = local_d0;
      if (uVar30 == 0) {
        iVar17 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar17 = iVar18 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar28 = iVar28 + 0x20;
        iVar10 = iVar17;
        if (iVar17 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar8 < iVar17) {
          lVar26 = 0;
          do {
            uVar30 = *(uint *)((longlong)plVar29 + lVar26 * 4 + lVar32 * 4 + 4);
            if (uVar30 != 0) {
              uVar20 = (ulonglong)(iVar8 + (int)lVar26 + 1);
              uVar31 = 0xffffffff;
              goto LAB_140f66f1c;
            }
            iVar28 = iVar28 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar10 - lVar32 != lVar26);
          uVar31 = 0xffffffff;
          iVar8 = iVar10;
        }
        uVar20 = (ulonglong)(iVar8 + 1);
        plVar15 = local_e0;
        uVar33 = local_d8;
        plVar19 = local_e8;
        iVar8 = iVar18;
        iVar24 = local_104;
      }
      else {
LAB_140f66f1c:
        uVar33 = (ulonglong)(-uVar30 & uVar30);
        uVar21 = uVar33 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar8 = (iVar28 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar8) {
          iVar8 = iVar18;
        }
      }
    } while (iVar8 != iVar24 || plVar19 != plVar15);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f67268 FUN_140f67268 body=84 status=ok
// SIG undefined FUN_140f67268(void)

void FUN_140f67268(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x800,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x10;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140f672bc FUN_140f672bc body=353 status=ok
// SIG undefined FUN_140f672bc(void)

void FUN_140f672bc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f67341;
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
LAB_140f67341:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f6741e FUN_140f6741e body=1121 status=ok
// SIG undefined FUN_140f6741e(void)

void FUN_140f6741e(undefined4 *param_1,longlong *param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  if ((int)param_1[5] < 0) {
    FUN_1403de8ba(param_1 + 2,0);
  }
  param_1[8] = 0;
  if ((int)param_1[9] < 0) {
    FUN_1403de8ba(param_1 + 6,0);
  }
  if (*param_2 == 0) {
    plVar4 = &DAT_14c9a1308;
  }
  else {
    plVar4 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb92f68);
  }
  FUN_140f67880(plVar4,param_1 + 2);
  param_1[0xc] = 0;
  if ((int)param_1[0xd] < 0) {
    FUN_1403de8ba(param_1 + 10,0);
  }
  param_1[0x10] = 0;
  if ((int)param_1[0x11] < 0) {
    FUN_1403de8ba(param_1 + 0xe,0);
  }
  if (*param_2 == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb92f70);
  }
  FUN_140f67880(plVar5,param_1 + 10);
  param_1[0x14] = 0;
  if ((int)param_1[0x15] < 0) {
    FUN_1403de8ba(param_1 + 0x12,0);
  }
  param_1[0x18] = 0;
  if ((int)param_1[0x19] < 0) {
    FUN_1403de8ba(param_1 + 0x16,0);
  }
  puVar9 = &DAT_14c9a1308;
  plVar8 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    plVar8 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb92f70);
  }
  FUN_140f67880(plVar8,param_1 + 0x12);
  if (*plVar4 != 0) {
    puVar9 = (undefined8 *)FUN_1446e60f4(*plVar4,&DAT_14cb92f60);
  }
  if (((byte *)*puVar9 == (byte *)0x0) || ((*(byte *)*puVar9 & 3) == 0)) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  else {
    uVar6 = FUN_1489f8caf();
    pbVar2 = (byte *)*puVar9;
    puVar7 = &DAT_149e3b8a9;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
      puVar7 = &DAT_149e3b8a9;
      if (*(undefined **)(pbVar2 + 8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(pbVar2 + 8);
      }
    }
    FUN_1400b22c2(&local_58,puVar7);
    uVar3 = FUN_14689a7b0(uVar6,&local_58,0);
    *(undefined1 *)(param_1 + 0x1a) = uVar3;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (*plVar5 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_1446e60f4(*plVar5,&DAT_14cb92f60);
  }
  if (((byte *)*puVar9 == (byte *)0x0) || ((*(byte *)*puVar9 & 3) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x69) = 0;
  }
  else {
    uVar6 = FUN_1489f8caf();
    pbVar2 = (byte *)*puVar9;
    puVar7 = &DAT_14b47b6ac;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
      puVar7 = &DAT_14b47b6ac;
      if (*(undefined **)(pbVar2 + 8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(pbVar2 + 8);
      }
    }
    FUN_1400b22c2(&local_58,puVar7);
    uVar3 = FUN_14689a7b0(uVar6,&local_58,0);
    *(undefined1 *)((longlong)param_1 + 0x69) = uVar3;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (*plVar8 == 0) {
    puVar9 = &DAT_14c9a1308;
  }
  else {
    puVar9 = (undefined8 *)FUN_1446e60f4(*plVar8,&DAT_14cb92f60);
  }
  if (((byte *)*puVar9 == (byte *)0x0) || ((*(byte *)*puVar9 & 3) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  }
  else {
    uVar6 = FUN_1489f8caf();
    pbVar2 = (byte *)*puVar9;
    puVar7 = &DAT_14b47b6ac;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
      puVar7 = &DAT_14b47b6ac;
      if (*(undefined **)(pbVar2 + 8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(pbVar2 + 8);
      }
    }
    FUN_1400b22c2(&local_58,puVar7);
    uVar3 = FUN_14689a7b0(uVar6,&local_58,0);
    *(undefined1 *)((longlong)param_1 + 0x6a) = uVar3;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  puVar9 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar9 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb92f80);
  }
  local_42 = 0x101;
  FUN_14000954c(puVar9,&local_58);
  if (param_1 != &DAT_14c9a1298) {
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x1e);
    *(longlong *)(param_1 + 0x1c) = local_58;
    *(longlong **)(param_1 + 0x1e) = local_50;
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f67880 FUN_140f67880 body=1017 status=ok
// SIG undefined FUN_140f67880(void)

void FUN_140f67880(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  byte *pbVar2;
  char *_Str;
  uint uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [32];
  char *local_88;
  uint5 uStack_80;
  undefined3 uStack_7b;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x40) == 0)) {
    if ((*pbVar2 & 2) == 0) {
      if (DAT_14c9a1298 <= DAT_14c9a12c4) goto LAB_140f678ac;
      plVar11 = &DAT_14c9a1288;
    }
    else {
      lVar9 = *(longlong *)(pbVar2 + 8);
      if (*(int *)(lVar9 + 0x28) <= *(int *)(lVar9 + 0x54)) goto LAB_140f678ac;
      plVar11 = (longlong *)(lVar9 + 0x18);
    }
    local_88 = (char *)0x0;
    _uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1446ddda2(&local_88,"GameplayTags",0);
    if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
      plVar17 = plVar11 + 8;
      if ((longlong *)plVar11[9] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar11[9];
      }
      iVar8 = *(int *)((longlong)plVar17 + (ulonglong)((int)plVar11[10] - 1U & (uint)local_88) * 4);
      if (iVar8 != -1) {
        do {
          lVar9 = *plVar11 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar11 + (longlong)iVar8 * 0x40) == (uint)local_88) {
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            if (lVar9 == 0) goto LAB_140f678ac;
            pbVar2 = *(byte **)(lVar9 + 0x28);
            puVar4 = &DAT_14c9a1270;
            if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
              puVar4 = *(undefined8 **)(pbVar2 + 8);
            }
            if ((longlong)*(int *)(puVar4 + 2) == 0) goto LAB_140f678ac;
            puVar10 = (undefined8 *)*puVar4;
            puVar4 = puVar10 + (longlong)*(int *)(puVar4 + 2) * 2;
            goto LAB_140f679c0;
          }
          iVar8 = *(int *)(lVar9 + 0x38);
        } while (iVar8 != -1);
      }
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140f678ac:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140f679c0:
  pbVar2 = (byte *)*puVar10;
  plVar11 = (longlong *)puVar10[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  plVar17 = &DAT_14c9a1288;
  if ((*pbVar2 & 2) != 0) {
    plVar17 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
  }
  local_88 = (char *)0x0;
  _uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"TagName",0);
  if ((int)plVar17[2] != *(int *)((longlong)plVar17 + 0x3c)) {
    plVar7 = plVar17 + 8;
    if ((longlong *)plVar17[9] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar17[9];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar17[10] - 1U & (uint)local_88) * 4);
    if (iVar8 != -1) {
      do {
        lVar9 = *plVar17 + (longlong)iVar8 * 0x40;
        if (*(uint *)(*plVar17 + (longlong)iVar8 * 0x40) == (uint)local_88) {
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (lVar9 == 0) goto LAB_140f67b38;
          pbVar2 = *(byte **)(lVar9 + 0x28);
          if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
             (_Str = *(char **)(pbVar2 + 8), _Str == (char *)0x0)) goto LAB_140f67b72;
          sVar5 = strlen(_Str);
          uVar3 = (uint)sVar5;
          if (uVar3 == 0) goto LAB_140f67b72;
          lVar9 = (longlong)(int)uVar3;
          pcVar12 = _Str + lVar9 + -1;
          if (pcVar12 < _Str) {
            lVar16 = 0;
            goto LAB_140f67aea;
          }
          uVar6 = 0;
          goto LAB_140f67abc;
        }
        iVar8 = *(int *)(lVar9 + 0x38);
      } while (iVar8 != -1);
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  goto LAB_140f67b38;
  while( true ) {
    uVar6 = uVar6 + 1;
    pcVar12 = pcVar12 + -1;
    if (pcVar12 < _Str) break;
LAB_140f67abc:
    if (9 < (byte)(*pcVar12 - 0x30U)) break;
  }
  if ((((uVar6 != 0) && ((int)uVar6 < (int)uVar3)) &&
      ((uVar6 < 0xb && (lVar13 = -(ulonglong)uVar6, _Str[lVar13 + lVar9 + -1] == '_')))) &&
     ((uVar6 == 1 || (_Str[lVar13 + lVar9] != '0')))) {
    lVar15 = 0;
    do {
      lVar16 = (longlong)_Str[lVar13 + lVar9] + lVar15 * 10;
      lVar15 = lVar16 + -0x30;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0);
    if (lVar15 < 0x7fffffff) {
      uVar3 = ~uVar6 + uVar3;
      lVar16 = lVar16 + -0x2f;
      goto LAB_140f67ae2;
    }
  }
  lVar16 = 0;
LAB_140f67ae2:
  if (uVar3 == 0) {
LAB_140f67b72:
    uVar18 = 0;
    uVar14 = 0;
  }
  else {
LAB_140f67aea:
    uStack_80 = (uint5)uVar3;
    local_88 = _Str;
    uVar3 = FUN_14001a6c0(&local_88,1);
    uVar14 = lVar16 << 0x20;
    uVar18 = (ulonglong)uVar3;
  }
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1400702d4(DAT_14caa8580,&local_88,uVar14 | uVar18,1);
  FUN_140608954(param_2,&local_88);
LAB_140f67b38:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar11 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  puVar10 = puVar10 + 2;
  if (puVar10 == puVar4) goto LAB_140f678ac;
  goto LAB_140f679c0;
}



// FUNCTION 140f67c7a FUN_140f67c7a body=594 status=ok
// SIG undefined FUN_140f67c7a(void)

void FUN_140f67c7a(longlong *param_1)

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
            if (iVar3 - lVar14 == lVar13) goto LAB_140f67e83;
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
LAB_140f67e83:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f67ece FUN_140f67ece body=151 status=ok
// SIG undefined FUN_140f67ece(void)

ulonglong FUN_140f67ece(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140f67f49:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140f67f49;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      (**(code **)(param_1 + 0x28))(lVar4);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140f67f66 FUN_140f67f66 body=72 status=ok
// SIG undefined FUN_140f67f66(void)

void FUN_140f67f66(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_140ec3f1c(param_1,local_10,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f67fb0 FUN_140f67fb0 body=62 status=ok
// SIG undefined FUN_140f67fb0(void)

longlong FUN_140f67fb0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x240))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_140f67fee(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 140f67fee FUN_140f67fee body=477 status=ok
// SIG undefined FUN_140f67fee(void)

void FUN_140f67fee(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  iVar9 = 0;
  local_60 = 0;
  local_68 = (ulonglong *)0x0;
  (**(code **)(*param_1 + 0x1c8))(0,&local_68,&local_60);
  uVar3 = local_60;
  puVar2 = local_68;
  local_4c = (uint)local_60;
  local_58 = local_68;
  if (0 < (int)(uint)local_60) {
    iVar9 = 0;
    uVar8 = 0x7fffffff;
    uVar5 = (uint)local_60;
    do {
      if (uVar8 == 0) {
        iVar9 = -1;
        break;
      }
      iVar4 = iVar9;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar5, 7 < uVar5)) &&
         (uVar6 = uVar8, 7 < (int)uVar8)) {
        while (uVar8 = uVar6, iVar4 = iVar9, local_4c = uVar5, (*local_58 & 0x8080808080808080) == 0
              ) {
          local_58 = local_58 + 1;
          iVar9 = iVar9 + 8;
          local_4c = uVar5 - 8;
          uVar8 = uVar6 - 8;
          bVar1 = (int)uVar5 < 0x10;
          uVar5 = local_4c;
          iVar4 = iVar9;
          if ((bVar1) || (bVar1 = uVar6 < 0x10, uVar6 = uVar8, bVar1)) break;
        }
      }
LAB_140f680c7:
      do {
        iVar9 = iVar4;
        if (((int)uVar5 < 1) || ((int)uVar8 < 1)) break;
        uVar6 = FUN_14003e942(&local_58,&local_4c);
        uVar5 = local_4c;
        if (uVar6 < 0x10000) {
          uVar8 = uVar8 - 1;
          iVar4 = iVar9 + 1;
          if (0x7f < uVar6) goto LAB_140f680c7;
        }
        else {
          if (1 < uVar8) {
            uVar8 = uVar8 - 2;
            iVar4 = iVar9 + 2;
            goto LAB_140f680c7;
          }
          uVar8 = 0;
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar9;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar5);
  }
  FUN_1409ee492(&local_78,iVar9 + 1,1);
  local_78[iVar9] = 0;
  FUN_1446e71a3(local_78,(longlong)iVar9,puVar2,uVar3 & 0xffffffff);
  puVar7 = local_78;
  if ((int)uStack_70 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_58,puVar7,1);
  *param_2 = local_58;
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f681da FUN_140f681da body=1718 status=ok
// SIG undefined FUN_140f681da(void)

undefined8 FUN_140f681da(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  void **ppvVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  bool bVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  code *local_68 [3];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar8 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar8,0);
  if (param_1[7] == 0) {
    plVar13 = &DAT_14cb946f8;
    if ((int)param_1[6] == 2) {
      plVar13 = &DAT_14cb94700;
    }
    param_1[7] = *plVar13;
  }
  lVar11 = param_1[9];
  if (lVar11 == 0) goto LAB_140f6841a;
  puVar1 = (uint *)(lVar11 + 8);
  if ((((*(int *)(lVar11 + 0xc) == 0) || (uVar4 = *puVar1, (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((plVar13 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar11 + 0xc))) ||
      (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar9 = *plVar13, lVar9 == 0)))))) {
    if (*(longlong *)(lVar11 + 0x10) != 0) {
      lVar9 = FUN_140007850();
      cVar6 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar9 == 0) || (cVar6 == '\0')) {
        if (lVar9 == 0) {
          *(undefined8 *)(lVar11 + 8) = 0;
          goto LAB_140f6846a;
        }
        uVar4 = *(uint *)(lVar9 + 0xc);
        *puVar1 = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar7 = *(int *)(lVar19 + 0x10);
        if (*(int *)(lVar19 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar17 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar17);
          }
          LOCK();
          iVar7 = *(int *)(lVar19 + 0x10);
          bVar16 = iVar7 == 0;
          if (bVar16) {
            *(int *)(lVar19 + 0x10) = iVar17;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar7 = iVar17;
          }
        }
        *(int *)(lVar11 + 0xc) = iVar7;
      }
      else {
        uVar4 = *(uint *)(lVar9 + 0xc);
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar1,lVar9);
        }
      }
      if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) goto LAB_140f682f9;
    }
LAB_140f6846a:
    uStack_80 = DAT_14cb94710;
    local_88 = DAT_14cb94708;
    FUN_1448075d0(local_68);
    puVar15 = (undefined8 *)FUN_144a06846(param_2,local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar15 != (byte *)0x0) && ((*(byte *)*puVar15 & 0x6b) == 3)) {
      uStack_80 = DAT_14cb94728;
      local_88 = DAT_14cb94720;
      FUN_1448075d0(local_68);
      puVar10 = (undefined8 *)FUN_144a06846(puVar15,local_68);
      if ((byte *)*puVar10 == (byte *)0x0) {
        bVar16 = false;
      }
      else {
        bVar3 = *(byte *)*puVar10;
        bVar16 = (bVar3 & 0x68) == 0 && (bVar3 & 3) != 0;
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (bVar16) {
        uStack_80 = DAT_14cb94728;
        local_88 = DAT_14cb94720;
        FUN_1448075d0(local_68);
        puVar15 = (undefined8 *)FUN_144a06846(puVar15,local_68);
        FUN_14006788a(&local_88,*puVar15,0,1);
        _Src = local_78;
        lVar11 = param_1[9];
        *(undefined8 *)(lVar11 + 8) = 0;
        *(undefined4 *)(lVar11 + 0x10) = (undefined4)local_88;
        *(undefined4 *)(lVar11 + 0x14) = local_88._4_4_;
        *(undefined4 *)(lVar11 + 0x18) = uStack_80;
        *(undefined4 *)(lVar11 + 0x1c) = uStack_7c;
        ppvVar2 = (void **)(lVar11 + 0x20);
        if (ppvVar2 != &local_78) {
          *(int *)(lVar11 + 0x28) = local_70;
          if (local_70 == 0 && *(int *)(lVar11 + 0x2c) == 0) {
            *(undefined4 *)(lVar11 + 0x2c) = 0;
          }
          else {
            FUN_1446dd670(ppvVar2,local_70);
            if (local_70 != 0) {
              memcpy(*ppvVar2,_Src,(longlong)local_70 * 2);
            }
          }
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
LAB_140f682f9:
    if (DAT_14c949118 == 0) {
      local_88 = FUN_140631fbe;
      lVar11 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar11;
      FUN_1446f470e(local_68,L"Class",1);
      local_a8 = &LAB_146891e90;
      local_b0 = (code *)&LAB_146273097;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 0x20;
      local_d0 = 0x10000000;
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,8);
      local_a0 = (code **)&local_88;
      FUN_14574b4b2(lVar11);
      DAT_14c949118 = lVar11;
      uVar8 = FUN_144a7a812();
      lVar11 = DAT_14c949118;
      uVar12 = FUN_1449e2fb2();
      local_d8 = L"Class";
      FUN_14574b446(uVar12,lVar11,uVar8,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_140f6846a;
    if (DAT_14cb93bd8 == 0) {
      local_a0 = local_68;
      local_68[0] = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_148a11b2b;
      local_b0 = FUN_146573d7d;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x0;
      local_c8 = CONCAT44(local_c8._4_4_,0x10000001);
      local_d0 = 8;
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,0x38);
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
      if (DAT_14cb93bd8 == 0) goto LAB_140f6846a;
    }
    if ((*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cb93bd8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8) !=
        DAT_14cb93bd8 + 0x30)) goto LAB_140f6846a;
  }
  plVar13 = (longlong *)param_1[9];
  if (plVar13 != (longlong *)0x0) {
    uStack_80 = DAT_14cb94710;
    local_88 = DAT_14cb94708;
    FUN_1448075d0(local_68);
    pbVar5 = (byte *)*param_2;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar14 = &DAT_14c9a1288;
      }
      else {
        plVar14 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
        plVar18 = plVar14 + 8;
        if ((longlong *)plVar14[9] != (longlong *)0x0) {
          plVar18 = (longlong *)plVar14[9];
        }
        iVar7 = *(int *)((longlong)plVar18 +
                        (ulonglong)((int)plVar14[10] - 1U & (uint)local_68[0]) * 4);
        if (iVar7 != -1) {
          do {
            lVar11 = *plVar14 + (longlong)iVar7 * 0x40;
            if (*(uint *)(*plVar14 + (longlong)iVar7 * 0x40) == (uint)local_68[0]) {
              if ((((lVar11 != 0) &&
                   (puVar15 = (undefined8 *)(lVar11 + 0x28), puVar15 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar15 != (byte *)0x0)) && ((*(byte *)*puVar15 & 0x40) == 0))
              goto LAB_140f68400;
              break;
            }
            iVar7 = *(int *)(lVar11 + 0x38);
          } while (iVar7 != -1);
        }
      }
    }
    puVar15 = &DAT_14c9a1308;
LAB_140f68400:
    (**(code **)(*plVar13 + 0x20))(plVar13,puVar15);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140f6841a:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140f68892 FUN_140f68892 body=57 status=ok
// SIG undefined FUN_140f68892(void)

void FUN_140f68892(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb944f8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb944f8 = FUN_140002ddd(FUN_146576fb1,uVar1,L"WeaponUseModeBehaviorAspect");
  }
  return;
}



// FUNCTION 140f688cc FUN_140f688cc body=57 status=ok
// SIG undefined FUN_140f688cc(void)

void FUN_140f688cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb944e0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb944e0 = FUN_140002ddd(FUN_146576f1b,uVar1,L"WeaponUseModeAspect");
  }
  return;
}



// FUNCTION 140f6890c FUN_140f6890c body=316 status=ok
// SIG undefined FUN_140f6890c(void)

undefined1 FUN_140f6890c(longlong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  char cVar9;
  ulonglong uVar10;
  char cVar11;
  
  lVar4 = DAT_14ca04700;
  iVar1 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar10 = 0;
  }
  else if (iVar6 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar10 = 1;
  }
  iVar6 = (iVar1 / 6) % 3;
  cVar11 = '\x04';
  if (iVar6 != 1) {
    cVar11 = (iVar6 == 0) << 4;
  }
  iVar2 = *(int *)(lVar4 + uVar10 * 4);
  cVar9 = '\x10';
  if (iVar2 < 0x10) {
    cVar9 = (3 < iVar2) * '\x02' + '\x02';
  }
  bVar3 = iVar2 < 4;
  if (iVar6 != 2) {
    bVar3 = cVar11 == cVar9;
  }
  uVar5 = 2;
  if (bVar3) {
    uVar5 = (iVar1 / 0x24 & 0x80000001U) == 1;
  }
  return uVar5;
}



// FUNCTION 140f68a48 FUN_140f68a48 body=84 status=ok
// SIG undefined FUN_140f68a48(void)

void FUN_140f68a48(longlong param_1)

{
  longlong lVar1;
  
  FUN_140f68a9c();
  FUN_1402d7906(param_1 + 0x4d8,param_1 + 0x448);
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071049e(param_1 + 0x478,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 140f68a9c FUN_140f68a9c body=160 status=ok
// SIG undefined FUN_140f68a9c(void)

void FUN_140f68a9c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_140115e24();
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (param_1 == 0 || DAT_14c950c29 != 1) {
    if (param_1 == 0) {
      lVar5 = 0;
      goto LAB_140f68ad7;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  lVar5 = param_1 + 0x390;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_1);
  }
LAB_140f68ad7:
  *(longlong *)(lVar1 + 0x3a0) = param_1;
  *(longlong *)(lVar1 + 0x3a8) = lVar5;
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar1 + 0x2d4) = *(undefined8 *)(param_1 + 0x3c8);
  uVar2 = *(undefined8 *)(param_1 + 0x3a8);
  uVar3 = *(undefined8 *)(param_1 + 0x3b0);
  uVar4 = *(undefined8 *)(param_1 + 0x3c0);
  *(undefined8 *)(lVar1 + 0x2c4) = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined8 *)(lVar1 + 0x2cc) = uVar4;
  *(undefined8 *)(lVar1 + 0x2b4) = uVar2;
  *(undefined8 *)(lVar1 + 700) = uVar3;
  return;
}



// FUNCTION 140f68b3c FUN_140f68b3c body=286 status=ok
// SIG undefined FUN_140f68b3c(void)

undefined8 FUN_140f68b3c(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140f68c54;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f68c54;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140f68c54:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f68c01;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140f68c01;
    }
  }
  uVar6 = 0;
LAB_140f68c01:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f68c5c FUN_140f68c5c body=86 status=ok
// SIG undefined FUN_140f68c5c(void)

void FUN_140f68c5c(longlong param_1)

{
  if (*(char *)(param_1 + 0xac2) == '\x03') {
    *(undefined1 *)(param_1 + 0xac2) = 2;
    if ((*(longlong *)(param_1 + 0xac8) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0xac8) + 0x50a8);
    }
    FUN_1447cd2ec(param_1 + 0x910,0);
    return;
  }
  return;
}



// FUNCTION 140f68cb2 FUN_140f68cb2 body=86 status=ok
// SIG undefined FUN_140f68cb2(void)

void FUN_140f68cb2(longlong param_1)

{
  if (*(char *)(param_1 + 0xac2) == '\x01') {
    *(undefined1 *)(param_1 + 0xac2) = 2;
    if ((*(longlong *)(param_1 + 0xac8) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0xac8) + 0x50e8);
    }
    FUN_1447cd2ec(param_1 + 0x930,0);
    return;
  }
  return;
}



// FUNCTION 140f68d08 FUN_140f68d08 body=103 status=ok
// SIG undefined FUN_140f68d08(void)

void FUN_140f68d08(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xac2) = 3;
  if ((*(longlong *)(param_1 + 0xac8) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    FUN_1447f69b6(*(longlong *)(param_1 + 0xac8) + 0x5088);
    if ((*(longlong *)(param_1 + 0xaa0) != 0) && (*(char *)(param_1 + 0xac1) == '\0')) {
      FUN_141334676(param_1,*(longlong *)(param_1 + 0xaa0) + 0x30);
    }
  }
  FUN_1447cd2ec(param_1 + 0x900,0);
  return;
}



// FUNCTION 140f68d7e FUN_140f68d7e body=223 status=ok
// SIG undefined FUN_140f68d7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f68d7e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b125430;
  if ((param_1[0x15] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x15] + 0x50));
  }
  FUN_140f68e5d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
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



// FUNCTION 140f68e5d FUN_140f68e5d body=105 status=ok
// SIG undefined FUN_140f68e5d(void)

void FUN_140f68e5d(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f68ec6 FUN_140f68ec6 body=221 status=ok
// SIG undefined FUN_140f68ec6(void)

void FUN_140f68ec6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2f0);
  FUN_140f68fa4(param_2);
  *param_2 = &PTR_FUN_14b738060;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  *(undefined2 *)(param_2 + 0x3c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined1 *)(param_2 + 0x4e) = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  *(undefined8 *)((longlong)param_2 + 0x247) = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  *(undefined8 *)((longlong)param_2 + 0x259) = 0;
  *(undefined8 *)((longlong)param_2 + 0x261) = 0;
  param_2[0x5d] = 0;
  param_2[0x5b] = 0;
  param_2[0x5c] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  param_2[0x57] = 0;
  param_2[0x58] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  return;
}



// FUNCTION 140f68fa4 FUN_140f68fa4 body=460 status=ok
// SIG undefined FUN_140f68fa4(void)

void FUN_140f68fa4(undefined8 *param_1)

{
  longlong lVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b127ec0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = 0x40;
  do {
    *(undefined1 *)((longlong)param_1 + lVar1 + -0x10) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0xc) = 0x44bb800043fa0000;
    *(undefined1 *)((longlong)param_1 + lVar1 + -4) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1) = 0;
    ((undefined8 *)((longlong)param_1 + lVar1))[1] = 0;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xa0);
  param_1[0x12] = 0x10000000000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  lVar1 = 0x180;
  do {
    *(undefined1 *)((longlong)param_1 + lVar1 + -0xc) = 2;
    *(undefined4 *)((longlong)param_1 + lVar1 + -8) = 0;
    *(undefined1 *)((longlong)param_1 + lVar1 + -4) = 2;
    *(undefined4 *)((longlong)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x1d0);
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x461c4000;
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x55000000;
  *(undefined1 *)((longlong)param_1 + 0x184) = 1;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x55000000;
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  *(undefined4 *)(param_1 + 0x33) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x46c35000;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 0x35) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x46c35000;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 1;
  *(undefined4 *)(param_1 + 0x37) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x46c35000;
  return;
}



// FUNCTION 140f69170 FUN_140f69170 body=130 status=ok
// SIG undefined FUN_140f69170(void)

void FUN_140f69170(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x4c0);
  if (lVar6 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x4b8);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      lVar4 = FUN_140672052(*(undefined8 *)(param_1 + 8));
      if (lVar4 != 0) {
        cVar3 = FUN_140a63060();
        if (cVar3 != '\0') {
          FUN_140f691f2(param_1,lVar2 + 0x78);
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  return;
}



// FUNCTION 140f691f2 FUN_140f691f2 body=253 status=ok
// SIG undefined FUN_140f691f2(void)

void FUN_140f691f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *plStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *(int *)(param_2 + 0x10);
  if (0 < (longlong)iVar3) {
    lVar4 = *(longlong *)(param_2 + 8);
    lVar7 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar7);
      if (plVar5 != (longlong *)0x0) {
        cVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
        if ((cVar6 != '\0') && (plVar5 = *(longlong **)(lVar4 + lVar7), plVar5 != (longlong *)0x0))
        {
          local_70 = 0;
          plStack_68 = (longlong *)0x0;
          local_78 = param_1;
          (**(code **)(*plVar5 + 0x18))(plVar5,local_88,&local_78);
          plVar5 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (plStack_68 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plStack_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plStack_68 + 0x10))();
            }
          }
        }
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f692f0 FUN_140f692f0 body=3011 status=ok
// SIG undefined FUN_140f692f0(void)

longlong ** FUN_140f692f0(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  byte bVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong **unaff_RDI;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  int iStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (longlong *)0x0;
  uStack_a0 = 0;
  lVar18 = *(longlong *)(param_1 + 0x1640);
  if (lVar18 != 0) {
    unaff_RDI = &local_a8;
    uStack_a0 = 1;
    FUN_140f69eb4(unaff_RDI,0);
    *local_a8 = lVar18;
  }
  if (*(longlong **)(param_1 + 0x1638) != (longlong *)0x0) {
    unaff_RDI = (longlong **)(**(code **)(**(longlong **)(param_1 + 0x1638) + 0x3f8))();
    uVar12 = uStack_a0;
    lVar18 = (longlong)(int)uStack_a0;
    uVar8 = (int)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
    if (uStack_a0._4_4_ < uVar8) {
      FUN_140f69eb4(&local_a8,uVar12 & 0xffffffff);
    }
    local_a8[lVar18] = (longlong)unaff_RDI;
  }
  if ((longlong)(int)uStack_a0 != 0) {
    plVar1 = local_a8 + (int)uStack_a0;
    plVar19 = local_a8;
    do {
      lVar18 = *plVar19;
      uVar8 = *(uint *)(param_1 + 0x1660);
      if ((int)uVar8 < 1) {
        plVar5 = *(longlong **)(param_1 + 0x1630);
        if (lVar18 != 0 || plVar5 == (longlong *)0x0) goto LAB_140f693e6;
        local_98 = 0;
        uStack_90 = 0;
        LOCK();
        iVar17 = DAT_14cb80fb0 + 1;
        UNLOCK();
        iVar25 = DAT_14cb80fb0 + 1;
        DAT_14cb80fb0 = iVar17;
        if ((int)plVar5[8] != iVar25) {
          *(int *)(plVar5 + 8) = iVar25;
          (**(code **)(*plVar5 + 0x2b0))();
        }
        if ((longlong)(int)uStack_90 == 0) {
          bVar27 = true;
        }
        else {
          lVar10 = 0;
          do {
            unaff_RDI = *(longlong ***)(local_98 + lVar10);
            bVar27 = unaff_RDI == (longlong **)0x0;
            if (!bVar27) goto LAB_140f69d61;
            lVar10 = lVar10 + 8;
          } while ((longlong)(int)uStack_90 * 8 != lVar10);
          unaff_RDI = (longlong **)0x0;
        }
LAB_140f69d61:
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (bVar27) goto LAB_140f693e6;
LAB_140f69413:
        if (unaff_RDI != (longlong **)0x0) goto LAB_140f69418;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x1658);
        lVar23 = 0;
        do {
          unaff_RDI = *(longlong ***)(lVar10 + lVar23);
          if ((unaff_RDI != (longlong **)0x0) &&
             ((lVar18 == 0 || (lVar9 = (*(code *)(*unaff_RDI)[0x7f])(unaff_RDI), lVar9 == lVar18))))
          goto LAB_140f69418;
          lVar23 = lVar23 + 8;
        } while ((ulonglong)uVar8 << 3 != lVar23);
LAB_140f693e6:
        unaff_RDI = *(longlong ***)(param_1 + 0x1638);
        if (unaff_RDI != (longlong **)0x0) {
          if (lVar18 == 0) goto LAB_140f69418;
          lVar10 = (*(code *)(*unaff_RDI)[0x7f])(unaff_RDI);
          if (lVar10 == lVar18) {
            unaff_RDI = *(longlong ***)(param_1 + 0x1638);
            goto LAB_140f69413;
          }
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar1);
  }
  uVar12 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  iStack_68 = -1;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x1660) != 0) {
    plVar19 = *(longlong **)(param_1 + 0x1658);
    plVar1 = plVar19 + *(int *)(param_1 + 0x1660);
    do {
      if (((longlong *)*plVar19 != (longlong *)0x0) &&
         (uVar11 = (**(code **)(*(longlong *)*plVar19 + 0x3f8))(), iVar17 = iStack_68,
         uVar12 = uStack_90, uVar11 != 0)) {
        uVar8 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = uVar8 >> 0x10 ^ uVar8;
        iVar25 = (int)uStack_90;
        if ((int)uStack_90 != local_64) {
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_60;
          }
          iVar22 = *(int *)(puVar13 + (ulonglong)(local_50 - 1 & uVar8) * 4);
          while (iVar22 != -1) {
            puVar2 = (ulonglong *)(local_98 + (longlong)iVar22 * 0x18);
            if (*puVar2 == uVar11) {
              if (puVar2 != (ulonglong *)0x0) goto LAB_140f6956f;
              break;
            }
            iVar22 = (int)puVar2[2];
          }
        }
        if (local_64 == 0) {
          uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
          if (uStack_90._4_4_ == iVar25) {
            FUN_14482b872(&local_98,uVar12 & 0xffffffff);
          }
          iVar17 = local_70;
          if (local_70 == 0) {
            iVar22 = -1;
          }
          else {
            iVar22 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar22 = local_70 + -1;
            }
            iVar22 = iVar22 >> 5;
          }
          iVar16 = local_70 + 1;
          iVar20 = local_70 + 0x1f;
          if (-1 < local_70) {
            iVar20 = local_70;
          }
          if (iVar20 >> 5 == iVar22) {
            local_70 = iVar16;
          }
          else {
            if ((int)local_6c <= local_70) {
              uVar21 = local_70 + 0x20;
              local_b0 = (ulonglong)uVar21;
              if (uVar21 < 0xa0) {
                local_6c = 0x80;
              }
              else {
                uVar21 = uVar21 >> 5;
                local_b0 = (ulonglong)uVar21;
                if (local_6c + 0x1f < 0xa0) {
                  uVar26 = 4;
                  if (4 < uVar21) {
                    uVar26 = uVar21;
                  }
                }
                else {
                  uVar26 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
                }
                uVar12 = FUN_144a3809e(uVar26 << 2,0);
                iVar22 = (int)(uVar12 >> 2);
                local_6c = 0xffffffe0;
                if ((int)local_b0 <= iVar22) {
                  local_6c = iVar22 << 5;
                }
              }
              FUN_1446efbd8(local_88,local_70);
              iVar16 = local_70 + 1;
            }
            iVar22 = iVar16 + 0x1f;
            if (-1 < iVar16) {
              iVar22 = iVar16;
            }
            local_70 = iVar16;
            if (iVar16 % 0x20 != 0) {
              puVar15 = local_78;
              if (local_78 == (uint *)0x0) {
                puVar15 = local_88;
              }
              bVar14 = -(char)(iVar16 % 0x20);
              puVar15[iVar22 >> 5] = (puVar15[iVar22 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            }
          }
          lVar18 = (longlong)iVar25;
          puVar15 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar15 = local_88;
          }
          bVar14 = (byte)iVar17 & 0x1f;
          puVar15[iVar20 >> 5] =
               puVar15[iVar20 >> 5] & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
          iVar17 = iVar25;
        }
        else {
          lVar18 = (longlong)iStack_68;
          iStack_68 = *(int *)(local_98 + 4 + lVar18 * 0x18);
          local_64 = local_64 + -1;
          if (local_64 != 0) {
            *(undefined4 *)(local_98 + (longlong)iStack_68 * 0x18) = 0xffffffff;
          }
        }
        puVar15 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar15 = local_88;
        }
        iVar25 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar25 = iVar17;
        }
        puVar15[iVar25 >> 5] = puVar15[iVar25 >> 5] | 1 << ((byte)iVar17 & 0x1f);
        puVar2 = (ulonglong *)(local_98 + lVar18 * 0x18);
        *puVar2 = uVar11;
        *(undefined4 *)(puVar2 + 1) = 0;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        uVar21 = (int)uStack_90 - local_64;
        if (1 < uVar21) {
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_60;
          }
          iVar25 = *(int *)(puVar13 + (ulonglong)(local_50 - 1 & uVar8) * 4);
          while (iVar25 != -1) {
            puVar3 = (ulonglong *)(local_98 + (longlong)iVar25 * 0x18);
            if (*puVar3 == uVar11) {
              uVar6 = *(undefined4 *)((longlong)puVar2 + 4);
              uVar12 = puVar2[1];
              uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
              *(int *)puVar3 = (int)*puVar2;
              *(undefined4 *)((longlong)puVar3 + 4) = uVar6;
              *(int *)(puVar3 + 1) = (int)uVar12;
              *(undefined4 *)((longlong)puVar3 + 0xc) = uVar7;
              FUN_148813b80(&local_98);
              goto LAB_140f698cd;
            }
            iVar25 = (int)puVar3[2];
          }
        }
        uVar26 = 1;
        if (3 < uVar21) {
          uVar12 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar26 = 1 << ((byte)lVar18 & 0x1f);
        }
        if (((int)uVar21 < 1) || ((int)uVar26 <= (int)local_50)) {
          uVar8 = local_50 - 1 & uVar8;
          *(uint *)((longlong)puVar2 + 0x14) = uVar8;
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_60;
          }
          *(undefined4 *)(puVar2 + 2) =
               *(undefined4 *)(puVar13 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar8) * 4);
          puVar13 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar13 = local_60;
          }
          *(int *)(puVar13 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar8) * 4) = iVar17;
        }
        else {
          local_50 = uVar26;
          if (local_58 != (undefined1 *)0x0) {
            FUN_1446efa72(&local_58,0,0,4);
          }
          uVar8 = local_50;
          if (local_50 == 1) {
            if (local_58 != (undefined1 *)0x0) {
              FUN_1446efa72(&local_58,0,0,4);
            }
LAB_140f696cd:
            uVar21 = 0;
            do {
              puVar13 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar13 = local_60;
              }
              *(undefined4 *)(puVar13 + (ulonglong)(local_50 + 0x7fffffff & uVar21) * 4) =
                   0xffffffff;
              uVar21 = uVar21 + 1;
            } while (uVar8 != uVar21);
          }
          else {
            if (local_50 == 0) goto LAB_140f698cd;
            FUN_1446efa72(&local_58,0,local_50,4);
            if (0 < (int)uVar8) goto LAB_140f696cd;
          }
          if (local_70 == 0) {
            uVar12 = 0;
            uVar11 = 1;
            iVar25 = 0;
            iVar22 = 0;
          }
          else {
            puVar15 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar15 = local_88;
            }
            uVar8 = *puVar15;
            if (uVar8 == 0) {
              iVar25 = local_70 + 0x1e;
              if (-1 < local_70 + -1) {
                iVar25 = local_70 + -1;
              }
              uVar12 = 0;
              uVar11 = (ulonglong)(uint)(iVar25 >> 5);
              if (iVar25 >> 5 < 1) {
                uVar11 = uVar12;
              }
              iVar22 = 0;
              do {
                if (uVar11 == uVar12) goto LAB_140f698cd;
                iVar22 = iVar22 + 0x20;
                uVar8 = puVar15[uVar12 + 1];
                uVar12 = uVar12 + 1;
              } while (uVar8 == 0);
            }
            else {
              uVar12 = 0;
              iVar22 = 0;
            }
            uVar11 = (ulonglong)(-uVar8 & uVar8);
            uVar24 = uVar11 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar25 = (iVar22 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar25) {
              iVar25 = local_70;
            }
          }
          if (iVar25 < local_70) {
            uVar8 = 0xffffffff;
            do {
              lVar18 = (longlong)iVar25;
              uVar24 = *(ulonglong *)(local_98 + lVar18 * 0x18);
              uVar21 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
              uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
              uVar24 = (longlong)(int)(uVar21 >> 0x10 ^ uVar21) & (longlong)(int)local_50 - 1U;
              iVar16 = (int)uVar24;
              *(int *)(local_98 + 0x14 + lVar18 * 0x18) = iVar16;
              puVar13 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar13 = local_60;
              }
              *(undefined4 *)(local_98 + 0x10 + lVar18 * 0x18) =
                   *(undefined4 *)(puVar13 + ((longlong)(int)local_50 - 1U & uVar24) * 4);
              puVar13 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar13 = local_60;
              }
              *(int *)(puVar13 + ((longlong)iVar16 & (longlong)(int)local_50 - 1U) * 4) = iVar25;
              uVar8 = ~(uint)uVar11 & uVar8;
              puVar15 = local_78;
              if (local_78 == (uint *)0x0) {
                puVar15 = local_88;
              }
              iVar25 = (int)uVar12;
              lVar18 = (longlong)iVar25;
              uVar21 = puVar15[lVar18] & uVar8;
              if (uVar21 == 0) {
                iVar16 = local_70 + 0x1e;
                if (-1 < local_70 + -1) {
                  iVar16 = local_70 + -1;
                }
                iVar16 = iVar16 >> 5;
                iVar20 = iVar16;
                if (iVar16 < iVar25) {
                  iVar20 = iVar25;
                }
                if (iVar16 <= iVar25) break;
                lVar10 = 0;
                while( true ) {
                  iVar22 = iVar22 + 0x20;
                  uVar21 = puVar15[lVar18 + lVar10 + 1];
                  if (uVar21 != 0) break;
                  lVar10 = lVar10 + 1;
                  if (iVar20 - lVar18 == lVar10) goto LAB_140f698cd;
                }
                uVar12 = (ulonglong)(iVar25 + (int)lVar10 + 1);
                uVar8 = 0xffffffff;
              }
              uVar11 = (ulonglong)(-uVar21 & uVar21);
              uVar24 = uVar11 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar25 = (iVar22 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            } while (iVar25 < local_70);
          }
        }
LAB_140f698cd:
        puVar2 = (ulonglong *)(local_98 + (longlong)iVar17 * 0x18);
LAB_140f6956f:
        *(int *)(puVar2 + 1) = (int)puVar2[1] + 1;
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar1);
    uVar11 = 0;
    if (local_70 != 0) {
      puVar15 = local_88;
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar8 = *puVar15;
      iVar17 = 0;
      if (uVar8 == 0) {
        iVar17 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar17 = local_70 + -1;
        }
        uVar12 = 0;
        uVar24 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar24 = uVar12;
        }
        uVar11 = 0;
        iVar17 = 0;
        do {
          if (uVar24 == uVar11) goto LAB_140f69aaa;
          iVar17 = iVar17 + 0x20;
          uVar8 = puVar15[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar8 == 0);
      }
      uVar24 = (ulonglong)(-uVar8 & uVar8);
      uVar12 = uVar24 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar25 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      uVar8 = 0;
      if (iVar25 < local_70) {
        uVar21 = 0xffffffff;
        uVar12 = 0;
        do {
          uVar26 = *(uint *)(local_98 + 8 + (longlong)iVar25 * 0x18);
          if (uVar8 < uVar26) {
            uVar12 = *(ulonglong *)(local_98 + (longlong)iVar25 * 0x18);
            uVar8 = uVar26;
          }
          uVar21 = uVar21 & ~(uint)uVar24;
          iVar25 = (int)uVar11;
          lVar18 = (longlong)iVar25;
          uVar26 = puVar15[lVar18] & uVar21;
          if (uVar26 == 0) {
            iVar22 = local_70 + -1;
            if (local_70 + -1 < 0) {
              iVar22 = local_70 + 0x1e;
            }
            iVar22 = iVar22 >> 5;
            iVar16 = iVar22;
            if (iVar22 < iVar25) {
              iVar16 = iVar25;
            }
            if (iVar22 <= iVar25) break;
            lVar10 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar26 = puVar15[lVar18 + lVar10 + 1];
              if (uVar26 != 0) break;
              lVar10 = lVar10 + 1;
              if (iVar16 - lVar18 == lVar10) goto LAB_140f69aaa;
            }
            uVar11 = (ulonglong)(iVar25 + (int)lVar10 + 1);
            uVar21 = 0xffffffff;
          }
          uVar24 = (ulonglong)(-uVar26 & uVar26);
          uVar4 = uVar24 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar25 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        } while (iVar25 < local_70);
        goto LAB_140f69aaa;
      }
    }
    uVar12 = 0;
  }
LAB_140f69aaa:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar11 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar11 != 0) {
    FUN_144727cd0(&local_98,0);
  }
  iStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (uVar12 != 0) {
    uVar8 = *(uint *)(param_1 + 0x1660);
    if (0 < (int)uVar8) {
      lVar18 = *(longlong *)(param_1 + 0x1658);
      lVar10 = 0;
      do {
        unaff_RDI = *(longlong ***)(lVar18 + lVar10);
        if ((unaff_RDI != (longlong **)0x0) &&
           (uVar11 = (*(code *)(*unaff_RDI)[0x7f])(unaff_RDI), uVar11 == uVar12))
        goto LAB_140f69418;
        lVar10 = lVar10 + 8;
      } while ((ulonglong)uVar8 << 3 != lVar10);
    }
    if ((*(longlong **)(param_1 + 0x1638) != (longlong *)0x0) &&
       (uVar11 = (**(code **)(**(longlong **)(param_1 + 0x1638) + 0x3f8))(), uVar11 == uVar12)) {
      unaff_RDI = *(longlong ***)(param_1 + 0x1638);
      goto LAB_140f69418;
    }
  }
  unaff_RDI = (longlong **)0x0;
LAB_140f69418:
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI;
}



// FUNCTION 140f69eb4 FUN_140f69eb4 body=353 status=ok
// SIG undefined FUN_140f69eb4(void)

void FUN_140f69eb4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f69f39;
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
LAB_140f69f39:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f6a016 FUN_140f6a016 body=286 status=ok
// SIG undefined FUN_140f6a016(void)

undefined8 FUN_140f6a016(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_140f6a12e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f6a12e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140f6a12e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f6a0db;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140f6a0db;
    }
  }
  uVar6 = 0;
LAB_140f6a0db:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6a136 FUN_140f6a136 body=53 status=ok
// SIG undefined FUN_140f6a136(void)

void FUN_140f6a136(longlong param_1)

{
  FUN_140eaf988(param_1,0);
  FUN_140f6a16c(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_140da129a();
    return;
  }
  return;
}



// FUNCTION 140f6a16c FUN_140f6a16c body=8533 status=ok
// SIG undefined FUN_140f6a16c(void)

void FUN_140f6a16c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  code *local_70 [2];
  code *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar15 = param_1 + -0x30;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1457d0d48(lVar15,&local_60);
    if (local_60 != (code *)0x0) {
      local_70[0] = local_60;
      if (CONCAT44(uStack_54,local_58) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_54,local_58) + 0xc);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))(param_1 + 0x18,local_70);
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    plVar8 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar8 != (longlong *)0x0) {
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
    }
  }
  FUN_140f6c7cc(*(undefined8 *)(param_1 + 0x150));
  local_80 = 0;
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x138);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130);
  local_78 = iVar12;
  if (iVar12 == 0) {
    local_74 = 0;
  }
  else {
    FUN_140f6c432(&local_80,iVar12);
    FUN_140f6c2cd(local_80,uVar7,iVar12);
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x148);
    if (((-1 < (longlong)iVar12) && (iVar12 < local_78)) &&
       (cVar4 = FUN_1403ae288(local_80 + (longlong)iVar12 * 0x58 + 0x10), cVar4 != '\0')) {
      lVar14 = FUN_14008e0ae(local_80 +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x148) * 0x58 +
                             0x10);
      local_60 = FUN_148e281d4;
      local_58 = 0;
      FUN_1457d0a48(lVar14 + 0x2b8,&local_50,lVar15);
      *(undefined8 *)(param_1 + 0xe8) = local_50;
    }
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x144);
    if (((-1 < (longlong)iVar12) && (iVar12 < local_78)) &&
       (cVar4 = FUN_1403ae288(local_80 + (longlong)iVar12 * 0x58 + 0x10), cVar4 != '\0')) {
      lVar14 = FUN_14008e0ae(local_80 +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x144) * 0x58 +
                             0x10);
      local_60 = FUN_14605866a;
      local_58 = 0;
      FUN_1457d0b48(lVar14 + 0x228,&local_50,lVar15);
      *(undefined8 *)(param_1 + 0xd8) = local_50;
    }
  }
  cVar4 = FUN_1403ae288(param_1 + 0x28);
  if (cVar4 != '\0') {
    local_d8 = param_1 + 0x58;
    FUN_1457d0920(lVar15,param_1 + 0x28,param_1 + 0x48,param_1 + 0x50);
  }
  cVar4 = FUN_1403ae288(param_1 + 0x60);
  if (cVar4 != '\0') {
    local_d8 = param_1 + 0x90;
    FUN_1457d0920(lVar15,param_1 + 0x60,param_1 + 0x80,param_1 + 0x88);
  }
  if ((*(longlong *)(param_1 + 0xd0) == 0) && (lVar14 = *(longlong *)(param_1 + -0x10), lVar14 != 0)
     ) {
    if (DAT_14cba8288 == 0) {
      local_a0 = &local_60;
      local_60 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1464cee30;
      local_a8 = &LAB_148bfac22;
      local_b0 = &LAB_140f21842;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = CONCAT44(local_d8._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      uVar7 = FUN_1403c7982();
      plVar8 = (longlong *)FUN_144718840(lVar14,uVar7);
      if (plVar8 != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8);
        local_60 = (code *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        pcVar3 = local_60;
        local_58 = 3;
        *(undefined ***)local_60 = &PTR_LAB_14b3f7890;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        *(longlong *)(local_60 + 0x10) = lVar9;
        *(undefined ***)local_60 = &PTR_FUN_14b9aa430;
        *(longlong *)(local_60 + 0x18) = 0;
        iVar12 = 0;
        if (lVar15 != 0) {
          uVar6 = *(uint *)(param_1 + -0x24);
          *(uint *)(local_60 + 0x18) = uVar6;
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar12 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            iVar5 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar12 = *(int *)(lVar14 + 0x10);
            bVar16 = iVar12 == 0;
            if (bVar16) {
              *(int *)(lVar14 + 0x10) = iVar5;
              iVar12 = 0;
            }
            UNLOCK();
            if (bVar16) {
              iVar12 = iVar5;
            }
          }
        }
        *(int *)(pcVar3 + 0x1c) = iVar12;
        *(code **)(pcVar3 + 0x20) = FUN_140f6a136;
        *(undefined4 *)(pcVar3 + 0x28) = 0;
        if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
           (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
          if (local_58 == 0) {
            uVar7 = 0;
            goto LAB_140f6a48c;
          }
          if (local_60 != (code *)0x0) {
            uVar7 = 0;
            (*(code *)**(undefined8 **)local_60)(local_60,0);
            FUN_1446efa72(&local_60,0,0,0x10);
            goto LAB_140f6a479;
          }
          uVar7 = 0;
        }
        else {
          if (*(int *)((longlong)plVar8 + 0x14) < 1) {
            iVar12 = (int)plVar8[1];
            iVar5 = (int)plVar8[2] + -1;
            *(int *)(plVar8 + 2) = iVar5;
            if (iVar5 <= iVar12) {
              iVar5 = iVar12;
              if (0 < iVar12) {
                iVar13 = 0;
                do {
                  if (((*(int *)(*plVar8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                      (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar13 * 0x10),
                      plVar2 == (longlong *)0x0)) ||
                     (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                    FUN_14005b288(plVar8,iVar13);
                    FUN_14005b248(plVar8);
                  }
                  else {
                    iVar13 = iVar13 + 1;
                  }
                  iVar5 = (int)plVar8[1];
                } while (iVar13 < iVar5);
              }
              iVar13 = 2;
              if (2 < iVar5 * 2) {
                iVar13 = iVar5 * 2;
              }
              *(int *)(plVar8 + 2) = iVar13;
              if ((iVar13 < iVar12) && (*(int *)((longlong)plVar8 + 0xc) != iVar5)) {
                FUN_14045812c();
              }
            }
          }
          uVar7 = 0;
          if ((local_58 != 0) && (local_60 != (code *)0x0)) {
            (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
            uVar7 = local_50;
          }
          iVar12 = (int)plVar8[1];
          *(uint *)(plVar8 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)plVar8 + 0xc) < iVar12 + 1U) {
            FUN_1447a71f6(plVar8,iVar12);
          }
          lVar14 = *plVar8;
          lVar9 = (longlong)iVar12 * 0x10;
          *(undefined8 *)(lVar14 + lVar9) = 0;
          *(undefined4 *)(lVar14 + 8 + lVar9) = 0;
          *(code **)(lVar14 + lVar9) = local_60;
          local_60 = (code *)0x0;
          *(int *)(lVar14 + 8 + lVar9) = local_58;
LAB_140f6a479:
          local_58 = 0;
LAB_140f6a48c:
          if (local_60 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        *(undefined8 *)(param_1 + 0xd0) = uVar7;
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + -0x10);
  if (lVar14 == 0) goto LAB_140f6b14c;
  if (DAT_14cba8288 == 0) {
    local_a0 = &local_60;
    local_60 = FUN_141864c34;
    local_90 = FUN_14081d0ea;
    local_98 = &LAB_1464cee30;
    local_a8 = &LAB_148bfac22;
    local_b0 = &LAB_140f21842;
    local_b8 = &DAT_149e063b2;
    local_c0 = 0;
    local_c8 = 0x10000004;
    local_d0 = 0x10;
    local_d8 = CONCAT44(local_d8._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140f6b14c;
  if (*(longlong *)(param_1 + 0x108) == 0) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_14b9aa510;
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
    *(longlong *)(local_60 + 0x10) = lVar10;
    *(undefined ***)local_60 = &PTR_FUN_14b9aa4a0;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar12 = 0;
    if (lVar15 != 0) {
      uVar6 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar12;
    *(code **)(pcVar3 + 0x20) = thunk_FUN_1410aade0;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
      if (local_58 == 0) {
        uVar7 = 0;
        goto LAB_140f6a6ac;
      }
      if (local_60 != (code *)0x0) {
        uVar7 = 0;
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_140f6a699;
      }
      uVar7 = 0;
    }
    else {
      plVar8 = (longlong *)(lVar14 + 0x4878);
      if (*(int *)(lVar14 + 0x488c) < 1) {
        iVar12 = *(int *)(lVar14 + 0x4880);
        iVar5 = *(int *)(lVar14 + 0x4888) + -1;
        *(int *)(lVar14 + 0x4888) = iVar5;
        if (iVar5 <= iVar12) {
          iVar5 = iVar12;
          if (0 < iVar12) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar13 * 0x10),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar8,iVar13);
                FUN_14005b248(plVar8);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar5 = *(int *)(lVar14 + 0x4880);
            } while (iVar13 < iVar5);
          }
          iVar13 = 2;
          if (2 < iVar5 * 2) {
            iVar13 = iVar5 * 2;
          }
          *(int *)(lVar14 + 0x4888) = iVar13;
          if ((iVar13 < iVar12) && (*(int *)(lVar14 + 0x4884) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      uVar7 = 0;
      if ((local_58 != 0) && (local_60 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
        uVar7 = local_50;
      }
      iVar12 = *(int *)(lVar14 + 0x4880);
      *(uint *)(lVar14 + 0x4880) = iVar12 + 1U;
      if (*(uint *)(lVar14 + 0x4884) < iVar12 + 1U) {
        FUN_1447a71f6(plVar8,iVar12);
      }
      lVar9 = *plVar8;
      lVar10 = (longlong)iVar12 * 0x10;
      *(undefined8 *)(lVar9 + lVar10) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
      *(code **)(lVar9 + lVar10) = local_60;
      local_60 = (code *)0x0;
      *(int *)(lVar9 + 8 + lVar10) = local_58;
LAB_140f6a699:
      local_58 = 0;
LAB_140f6a6ac:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x108) = uVar7;
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_149e020b0;
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
    *(longlong *)(local_60 + 0x10) = lVar10;
    *(undefined ***)local_60 = &PTR_FUN_14b9aa200;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar12 = 0;
    if (lVar15 != 0) {
      uVar6 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar12;
    *(undefined1 **)(pcVar3 + 0x20) = &LAB_1412de58a;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    FUN_1448b6402(lVar14 + 0x4890,&local_50,&local_60);
    if (local_58 == 0) {
LAB_140f6a7c9:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_60 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
      goto LAB_140f6a7c9;
    }
    *(undefined8 *)(param_1 + 0x120) = local_50;
  }
  if (*(longlong *)(param_1 + 0x128) == 0) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_149e020b0;
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
    *(longlong *)(local_60 + 0x10) = lVar10;
    *(undefined ***)local_60 = &PTR_FUN_14b9aa200;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar12 = 0;
    if (lVar15 != 0) {
      uVar6 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar12;
    *(undefined1 **)(pcVar3 + 0x20) = &LAB_1412de58a;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    FUN_1448b6402(lVar14 + 0x48a8,&local_50,&local_60);
    if (local_58 == 0) {
LAB_140f6a8f6:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_60 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
      goto LAB_140f6a8f6;
    }
    *(undefined8 *)(param_1 + 0x128) = local_50;
  }
  if (*(longlong *)(param_1 + 0x130) == 0) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_149e020b0;
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
    *(longlong *)(local_60 + 0x10) = lVar10;
    *(undefined ***)local_60 = &PTR_FUN_14b9aa200;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar12 = 0;
    if (lVar15 != 0) {
      uVar6 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar12;
    *(undefined1 **)(pcVar3 + 0x20) = &LAB_1412de58a;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    FUN_1448b6402(lVar14 + 0x48c0,&local_50,&local_60);
    if (local_58 == 0) {
LAB_140f6aa23:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_60 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
      goto LAB_140f6aa23;
    }
    *(undefined8 *)(param_1 + 0x130) = local_50;
  }
  if (*(longlong *)(param_1 + 0x138) == 0) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_149e06450;
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
    *(longlong *)(local_60 + 0x10) = lVar10;
    *(undefined ***)local_60 = &PTR_FUN_14b9aa580;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar12 = 0;
    if (lVar15 != 0) {
      uVar6 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar12;
    *(code **)(pcVar3 + 0x20) = FUN_145a39e98;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
      if (local_58 == 0) {
        uVar7 = 0;
        goto LAB_140f6ac13;
      }
      if (local_60 != (code *)0x0) {
        uVar7 = 0;
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_140f6ac00;
      }
      uVar7 = 0;
    }
    else {
      plVar8 = (longlong *)(lVar14 + 0x48d8);
      if (*(int *)(lVar14 + 0x48ec) < 1) {
        iVar12 = *(int *)(lVar14 + 0x48e0);
        iVar5 = *(int *)(lVar14 + 0x48e8) + -1;
        *(int *)(lVar14 + 0x48e8) = iVar5;
        if (iVar5 <= iVar12) {
          iVar5 = iVar12;
          if (0 < iVar12) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar13 * 0x10),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar8,iVar13);
                FUN_14005b248(plVar8);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar5 = *(int *)(lVar14 + 0x48e0);
            } while (iVar13 < iVar5);
          }
          iVar13 = 2;
          if (2 < iVar5 * 2) {
            iVar13 = iVar5 * 2;
          }
          *(int *)(lVar14 + 0x48e8) = iVar13;
          if ((iVar13 < iVar12) && (*(int *)(lVar14 + 0x48e4) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      uVar7 = 0;
      if ((local_58 != 0) && (local_60 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
        uVar7 = local_50;
      }
      iVar12 = *(int *)(lVar14 + 0x48e0);
      *(uint *)(lVar14 + 0x48e0) = iVar12 + 1U;
      if (*(uint *)(lVar14 + 0x48e4) < iVar12 + 1U) {
        FUN_1447a71f6(plVar8,iVar12);
      }
      lVar9 = *plVar8;
      lVar10 = (longlong)iVar12 * 0x10;
      *(undefined8 *)(lVar9 + lVar10) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
      *(code **)(lVar9 + lVar10) = local_60;
      local_60 = (code *)0x0;
      *(int *)(lVar9 + 8 + lVar10) = local_58;
LAB_140f6ac00:
      local_58 = 0;
LAB_140f6ac13:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x138) = uVar7;
  }
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_14b96ec30;
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
    *(longlong *)(local_60 + 0x10) = lVar10;
    *(undefined ***)local_60 = &PTR_FUN_14b9aa5f0;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar12 = 0;
    if (lVar15 != 0) {
      uVar6 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar12;
    *(code **)(pcVar3 + 0x20) = FUN_1411105b2;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
      if (local_58 == 0) {
        uVar7 = 0;
        goto LAB_140f6adf3;
      }
      if (local_60 != (code *)0x0) {
        uVar7 = 0;
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_140f6ade0;
      }
      uVar7 = 0;
    }
    else {
      plVar8 = (longlong *)(lVar14 + 0x7790);
      if (*(int *)(lVar14 + 0x77a4) < 1) {
        iVar12 = *(int *)(lVar14 + 0x7798);
        iVar5 = *(int *)(lVar14 + 0x77a0) + -1;
        *(int *)(lVar14 + 0x77a0) = iVar5;
        if (iVar5 <= iVar12) {
          iVar5 = iVar12;
          if (0 < iVar12) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar13 * 0x10),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar8,iVar13);
                FUN_14005b248(plVar8);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar5 = *(int *)(lVar14 + 0x7798);
            } while (iVar13 < iVar5);
          }
          iVar13 = 2;
          if (2 < iVar5 * 2) {
            iVar13 = iVar5 * 2;
          }
          *(int *)(lVar14 + 0x77a0) = iVar13;
          if ((iVar13 < iVar12) && (*(int *)(lVar14 + 0x779c) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      uVar7 = 0;
      if ((local_58 != 0) && (local_60 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
        uVar7 = local_50;
      }
      iVar12 = *(int *)(lVar14 + 0x7798);
      *(uint *)(lVar14 + 0x7798) = iVar12 + 1U;
      if (*(uint *)(lVar14 + 0x779c) < iVar12 + 1U) {
        FUN_1447a71f6(plVar8,iVar12);
      }
      lVar9 = *plVar8;
      lVar10 = (longlong)iVar12 * 0x10;
      *(undefined8 *)(lVar9 + lVar10) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
      *(code **)(lVar9 + lVar10) = local_60;
      local_60 = (code *)0x0;
      *(int *)(lVar9 + 8 + lVar10) = local_58;
LAB_140f6ade0:
      local_58 = 0;
LAB_140f6adf3:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = uVar7;
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_14b9abb90;
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
    *(longlong *)(local_60 + 0x10) = lVar10;
    *(undefined ***)local_60 = &PTR_FUN_14b9aa660;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar12 = 0;
    if (lVar15 != 0) {
      uVar6 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_60 + 0x18) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar12 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar12 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar5;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar12 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar12;
    *(code **)(pcVar3 + 0x20) = FUN_140f6c572;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
      if (local_58 == 0) {
        uVar7 = 0;
        goto LAB_140f6afd3;
      }
      if (local_60 != (code *)0x0) {
        uVar7 = 0;
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_140f6afc0;
      }
      uVar7 = 0;
    }
    else {
      plVar8 = (longlong *)(lVar14 + 0x77a8);
      if (*(int *)(lVar14 + 0x77bc) < 1) {
        iVar12 = *(int *)(lVar14 + 0x77b0);
        iVar5 = *(int *)(lVar14 + 0x77b8) + -1;
        *(int *)(lVar14 + 0x77b8) = iVar5;
        if (iVar5 <= iVar12) {
          iVar5 = iVar12;
          if (0 < iVar12) {
            iVar13 = 0;
            do {
              if (((*(int *)(*plVar8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar13 * 0x10),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar8,iVar13);
                FUN_14005b248(plVar8);
              }
              else {
                iVar13 = iVar13 + 1;
              }
              iVar5 = *(int *)(lVar14 + 0x77b0);
            } while (iVar13 < iVar5);
          }
          iVar13 = 2;
          if (2 < iVar5 * 2) {
            iVar13 = iVar5 * 2;
          }
          *(int *)(lVar14 + 0x77b8) = iVar13;
          if ((iVar13 < iVar12) && (*(int *)(lVar14 + 0x77b4) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      uVar7 = 0;
      if ((local_58 != 0) && (local_60 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
        uVar7 = local_50;
      }
      iVar12 = *(int *)(lVar14 + 0x77b0);
      *(uint *)(lVar14 + 0x77b0) = iVar12 + 1U;
      if (*(uint *)(lVar14 + 0x77b4) < iVar12 + 1U) {
        FUN_1447a71f6(plVar8,iVar12);
      }
      lVar9 = *plVar8;
      lVar10 = (longlong)iVar12 * 0x10;
      *(undefined8 *)(lVar9 + lVar10) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
      *(code **)(lVar9 + lVar10) = local_60;
      local_60 = (code *)0x0;
      *(int *)(lVar9 + 8 + lVar10) = local_58;
LAB_140f6afc0:
      local_58 = 0;
LAB_140f6afd3:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x100) = uVar7;
  }
  uVar6 = FUN_1401902e2();
  if (((((int)uVar6 < 0) || (*(int *)(lVar14 + 0x78f0) <= (int)uVar6)) ||
      (lVar9 = (ulonglong)uVar6 * 0x48 + *(longlong *)(lVar14 + 0x78e8), lVar9 == 0)) ||
     ((*(longlong **)(lVar9 + 0x28) == (longlong *)0x0 || *(longlong *)(lVar9 + 0x20) == 0 ||
      (lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x28) + 8))(), lVar9 == 0)))) {
LAB_140f6b00d:
    FUN_140f6c572(lVar15);
  }
  else {
    uVar7 = FUN_14101ff5c();
    lVar9 = FUN_144718840(lVar9,uVar7);
    if (lVar9 == 0) goto LAB_140f6b00d;
    FUN_1411105b2(lVar15,lVar9,(ulonglong)uVar6);
  }
  lVar9 = *(longlong *)(lVar14 + 0x3c0);
  if (lVar9 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_a0 = &local_60;
      local_60 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1459f2e4c;
      local_a8 = &LAB_148c39de3;
      local_b0 = &LAB_1457a9eb2;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = CONCAT44(local_d8._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar3 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_149e35290;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      *(longlong *)(local_60 + 0x10) = lVar11;
      *(undefined ***)local_60 = &PTR_FUN_14b9aa6d0;
      *(longlong *)(local_60 + 0x18) = 0;
      iVar12 = 0;
      if (lVar15 != 0) {
        uVar6 = *(uint *)(param_1 + -0x24);
        *(uint *)(local_60 + 0x18) = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar12 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar12 = *(int *)(lVar10 + 0x10);
          bVar16 = iVar12 == 0;
          if (bVar16) {
            *(int *)(lVar10 + 0x10) = iVar5;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar12 = iVar5;
          }
        }
      }
      *(int *)(pcVar3 + 0x1c) = iVar12;
      *(undefined1 **)(pcVar3 + 0x20) = &LAB_1411b43c0;
      *(undefined4 *)(pcVar3 + 0x28) = 0;
      if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
        if (local_58 == 0) {
          uVar7 = 0;
          goto LAB_140f6b756;
        }
        if (local_60 != (code *)0x0) {
          uVar7 = 0;
          (*(code *)**(undefined8 **)local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          goto LAB_140f6b743;
        }
        uVar7 = 0;
      }
      else {
        plVar8 = (longlong *)(lVar9 + 10000);
        if (*(int *)(lVar9 + 0x2724) < 1) {
          iVar12 = *(int *)(lVar9 + 0x2718);
          iVar5 = *(int *)(lVar9 + 0x2720) + -1;
          *(int *)(lVar9 + 0x2720) = iVar5;
          if (iVar5 <= iVar12) {
            iVar5 = iVar12;
            if (0 < iVar12) {
              iVar13 = 0;
              do {
                if (((*(int *)(*plVar8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                    (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar13 * 0x10),
                    plVar2 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(plVar8,iVar13);
                  FUN_14005b248(plVar8);
                }
                else {
                  iVar13 = iVar13 + 1;
                }
                iVar5 = *(int *)(lVar9 + 0x2718);
              } while (iVar13 < iVar5);
            }
            iVar13 = 2;
            if (2 < iVar5 * 2) {
              iVar13 = iVar5 * 2;
            }
            *(int *)(lVar9 + 0x2720) = iVar13;
            if ((iVar13 < iVar12) && (*(int *)(lVar9 + 0x271c) != iVar5)) {
              FUN_14045812c();
            }
          }
        }
        uVar7 = 0;
        if ((local_58 != 0) && (local_60 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
          uVar7 = local_50;
        }
        iVar12 = *(int *)(lVar9 + 0x2718);
        *(uint *)(lVar9 + 0x2718) = iVar12 + 1U;
        if (*(uint *)(lVar9 + 0x271c) < iVar12 + 1U) {
          FUN_1447a71f6(plVar8,iVar12);
        }
        lVar9 = *plVar8;
        lVar10 = (longlong)iVar12 * 0x10;
        *(undefined8 *)(lVar9 + lVar10) = 0;
        *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
        *(code **)(lVar9 + lVar10) = local_60;
        local_60 = (code *)0x0;
        *(int *)(lVar9 + 8 + lVar10) = local_58;
LAB_140f6b743:
        local_58 = 0;
LAB_140f6b756:
        if (local_60 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined8 *)(param_1 + 0xe0) = uVar7;
    }
  }
  if (*(longlong *)(param_1 + 0x140) != 0) goto LAB_140f6b14c;
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  pcVar3 = local_60;
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_60 + 0x10) = lVar10;
  *(undefined ***)local_60 = &PTR_FUN_14b9aa200;
  *(longlong *)(local_60 + 0x18) = 0;
  iVar12 = 0;
  if (lVar15 != 0) {
    uVar6 = *(uint *)(param_1 + -0x24);
    *(uint *)(local_60 + 0x18) = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar12 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar12 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar12 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar5;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar12 = iVar5;
      }
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar12;
  *(code **)(pcVar3 + 0x20) = FUN_1458ba4c4;
  *(undefined4 *)(pcVar3 + 0x28) = 0;
  FUN_1448b6402(lVar14 + 0x4978,&local_50,&local_60);
  if (local_58 == 0) {
LAB_140f6b12c:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_140f6b12c;
  }
  *(undefined8 *)(param_1 + 0x140) = local_50;
LAB_140f6b14c:
  FUN_1408bd9b6(local_80,local_78);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f6c2cd FUN_140f6c2cd body=123 status=ok
// SIG undefined FUN_140f6c2cd(void)

void FUN_140f6c2cd(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(param_1 + 0x48);
  do {
    puVar4 = param_2;
    puVar5 = puVar6 + -9;
    for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar6 = 0;
    iVar1 = *(int *)(param_2 + 10);
    uVar2 = param_2[9];
    *(int *)(puVar6 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    }
    else {
      FUN_1470d8626(puVar6,iVar1,0);
      FUN_1470d8699(*puVar6,uVar2);
    }
    param_2 = param_2 + 0xb;
    puVar6 = puVar6 + 0xb;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140f6c432 FUN_140f6c432 body=319 status=ok
// SIG undefined FUN_140f6c432(void)

undefined8 FUN_140f6c432(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = (longlong)param_2 * 0x58;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140f6c494;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar8 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
  }
LAB_140f6c494:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  uVar5 = SUB168(auVar3 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar4 / 0x58)) {
    uVar8 = uVar4 / 0x58 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar5 = FUN_1446f8d3c(param_1,0,uVar8,0x58,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar5;
}



// FUNCTION 140f6c572 FUN_140f6c572 body=445 status=ok
// SIG undefined FUN_140f6c572(void)

void FUN_140f6c572(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x128);
  if (lVar7 != 0) {
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x120);
    plVar8 = plVar9 + lVar7 * 2;
    do {
      plVar3 = (longlong *)plVar9[1];
      if (plVar3 != (longlong *)0x0) {
        lVar7 = *plVar9;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_140f6c668;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != 0) {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x168));
          iVar5 = FUN_1401902e2();
          if (iVar5 == param_3) {
            iVar5 = *(int *)(lVar7 + 0x130);
            if (*(char *)(lVar7 + 300) == '\0') {
              if (iVar5 == 0) {
                iVar5 = 0;
                goto LAB_140f6c6ed;
              }
            }
            else {
LAB_140f6c6ed:
              *(undefined1 *)(lVar7 + 300) = 0;
              *(int *)(lVar7 + 0x130) = iVar5 + 1;
            }
            iVar5 = *(int *)(lVar7 + 0x150);
            if (*(int *)(lVar7 + 0x14c) == 0) {
              if (iVar5 == 0) {
                iVar5 = 0;
                goto LAB_140f6c6b8;
              }
            }
            else {
LAB_140f6c6b8:
              *(undefined4 *)(lVar7 + 0x14c) = 0;
              *(int *)(lVar7 + 0x150) = iVar5 + 1;
            }
            iVar5 = *(int *)(lVar7 + 0x158);
            if (*(int *)(lVar7 + 0x154) == 0) {
              if (iVar5 == 0) {
                iVar5 = 0;
                goto LAB_140f6c6d1;
              }
            }
            else {
LAB_140f6c6d1:
              *(undefined4 *)(lVar7 + 0x154) = 0;
              lVar6 = 0x158;
LAB_140f6c6e0:
              *(int *)(lVar7 + lVar6) = iVar5 + 1;
            }
LAB_140f6c652:
            *(int *)(lVar7 + 0x160) = *(int *)(lVar7 + 0x160) + 1;
          }
          else {
            iVar5 = FUN_140232fad();
            if (iVar5 == param_3) {
              *(int *)(lVar7 + 0x118) = *(int *)(lVar7 + 0x118) + 1;
              iVar5 = *(int *)(lVar7 + 0x114);
              if (*(char *)(lVar7 + 0x110) == '\0') {
                if (iVar5 == 0) {
                  iVar5 = 0;
                  goto LAB_140f6c6a8;
                }
                goto LAB_140f6c652;
              }
LAB_140f6c6a8:
              *(undefined1 *)(lVar7 + 0x110) = 0;
              lVar6 = 0x114;
              goto LAB_140f6c6e0;
            }
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x168));
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
LAB_140f6c668:
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  return;
}



// FUNCTION 140f6c7cc FUN_140f6c7cc body=2141 status=ok
// SIG undefined FUN_140f6c7cc(void)

void FUN_140f6c7cc(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
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
  plVar5 = *(longlong **)(param_1 + 0x118);
  if (plVar5 == (longlong *)0x0) goto LAB_140f6cc2d;
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
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb56270);
  if (plVar5 == (longlong *)0x0) goto LAB_140f6cc2d;
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
  plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb56270);
  if (((plVar5 == plVar6) || (plVar6 == (longlong *)0x0)) ||
     (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 == 0)) goto LAB_140f6cc2d;
  if (*(longlong *)(param_1 + 0x150) == 0) {
    local_50 = (code *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    pcVar2 = local_50;
    local_48 = 3;
    *(undefined ***)local_50 = &PTR_LAB_14b41bb90;
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
    *(longlong *)(local_50 + 0x10) = lVar8;
    *(undefined ***)local_50 = &PTR_FUN_14b9bce50;
    *(longlong *)(local_50 + 0x18) = 0;
    iVar9 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_50 + 0x18) = uVar1;
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
        iVar4 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar9 = *(int *)(lVar11 + 0x10);
        bVar13 = iVar9 == 0;
        if (bVar13) {
          *(int *)(lVar11 + 0x10) = iVar4;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar9 = iVar4;
        }
      }
    }
    *(int *)(pcVar2 + 0x1c) = iVar9;
    *(code **)(pcVar2 + 0x20) = FUN_14573dd82;
    FUN_140f6d02a(lVar7,&local_40,&local_50);
    *(undefined8 *)(param_1 + 0x150) = local_40;
    if (local_48 != 0) {
      if (local_50 == (code *)0x0) goto LAB_140f6c972;
      (*(code *)**(undefined8 **)local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140f6c972:
  if (*(longlong *)(param_1 + 0x158) == 0) {
    local_50 = (code *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    pcVar2 = local_50;
    local_48 = 3;
    *(undefined ***)local_50 = &PTR_LAB_14b41bb90;
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
    *(longlong *)(local_50 + 0x10) = lVar8;
    *(undefined ***)local_50 = &PTR_FUN_14b9bce50;
    *(longlong *)(local_50 + 0x18) = 0;
    iVar9 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_50 + 0x18) = uVar1;
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
        iVar4 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar9 = *(int *)(lVar11 + 0x10);
        bVar13 = iVar9 == 0;
        if (bVar13) {
          *(int *)(lVar11 + 0x10) = iVar4;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar9 = iVar4;
        }
      }
    }
    *(int *)(pcVar2 + 0x1c) = iVar9;
    *(code **)(pcVar2 + 0x20) = FUN_14071403c;
    FUN_140f6d16c(lVar7,&local_40,&local_50);
    *(undefined8 *)(param_1 + 0x158) = local_40;
    if (local_48 != 0) {
      if (local_50 == (code *)0x0) goto LAB_140f6ca7d;
      (*(code *)**(undefined8 **)local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140f6ca7d:
  if (*(longlong *)(param_1 + 0x160) != 0) goto LAB_140f6cc2d;
  local_50 = (code *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  pcVar2 = local_50;
  local_48 = 3;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_50 + 0x10) = lVar8;
  *(undefined ***)local_50 = &PTR_FUN_14b9bcec0;
  *(longlong *)(local_50 + 0x18) = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 0x18) = uVar1;
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
      iVar4 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar9 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar9 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar4;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar9 = iVar4;
      }
    }
  }
  *(int *)(pcVar2 + 0x1c) = iVar9;
  *(code **)(pcVar2 + 0x20) = FUN_145897a0c;
  if (((local_48 == 0) || (local_50 == (code *)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_50 + 0x30))(), cVar3 == '\0')) {
    if (local_48 == 0) {
      uVar12 = 0;
      goto LAB_140f6cc1d;
    }
    if (local_50 != (code *)0x0) {
      uVar12 = 0;
      (*(code *)**(undefined8 **)local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140f6cc0d;
    }
    uVar12 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar7 + 0x18);
    if (*(int *)(lVar7 + 0x2c) < 1) {
      iVar9 = *(int *)(lVar7 + 0x20);
      iVar4 = *(int *)(lVar7 + 0x28) + -1;
      *(int *)(lVar7 + 0x28) = iVar4;
      if (iVar4 <= iVar9) {
        iVar4 = iVar9;
        if (0 < iVar9) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar5 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar5 + (longlong)iVar10 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar6 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar5,iVar10);
              FUN_14005b248(plVar5);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar4 = *(int *)(lVar7 + 0x20);
          } while (iVar10 < iVar4);
        }
        iVar10 = 2;
        if (2 < iVar4 * 2) {
          iVar10 = iVar4 * 2;
        }
        *(int *)(lVar7 + 0x28) = iVar10;
        if ((iVar10 < iVar9) && (*(int *)(lVar7 + 0x24) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar12 = 0;
    if ((local_48 != 0) && (local_50 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_50 + 0x38))(local_50,&local_40);
      uVar12 = local_40;
    }
    iVar9 = *(int *)(lVar7 + 0x20);
    *(uint *)(lVar7 + 0x20) = iVar9 + 1U;
    if (*(uint *)(lVar7 + 0x24) < iVar9 + 1U) {
      FUN_1447a71f6(plVar5,iVar9);
    }
    lVar7 = *plVar5;
    lVar11 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar7 + lVar11) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar11) = 0;
    *(code **)(lVar7 + lVar11) = local_50;
    local_50 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar11) = local_48;
LAB_140f6cc0d:
    local_48 = 0;
LAB_140f6cc1d:
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x160) = uVar12;
LAB_140f6cc2d:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f6d02a FUN_140f6d02a body=321 status=ok
// SIG undefined FUN_140f6d02a(void)

undefined8 FUN_140f6d02a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 200) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 200) + lVar1) != 0)) {
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_140f6d30a(&local_38,param_3);
        FUN_140f6d43c(param_1 + 200,param_2,&local_38);
        FUN_1449db362(&local_38);
        goto LAB_140f6d0a9;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xd0) * 0x10 != lVar1);
  }
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_140f6d30a(&local_38,param_3);
  FUN_140f6d43c(param_1 + 200,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_140f6d0a1;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f6d0a1:
  FUN_14036abb0(param_1);
LAB_140f6d0a9:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f6d16c FUN_140f6d16c body=413 status=ok
// SIG undefined FUN_140f6d16c(void)

undefined8 FUN_140f6d16c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar1) != 0)) {
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_140f6d30a(&local_38,param_3);
        FUN_140f6d43c(param_1 + 0xe0,param_2,&local_38);
        if (local_30 != 0) {
          if (local_38 == (undefined8 *)0x0) goto LAB_140f6d1eb;
          (**(code **)*local_38)(local_38,0);
          FUN_1446efa72(&local_38,0,0,0x10);
          local_30 = 0;
        }
        if (local_38 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_140f6d1eb;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xe8) * 0x10 != lVar1);
  }
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_140f6d30a(&local_38,param_3);
  FUN_140f6d43c(param_1 + 0xe0,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_140f6d1e3;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f6d1e3:
  FUN_14036b0fc(param_1);
LAB_140f6d1eb:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f6d30a FUN_140f6d30a body=305 status=ok
// SIG undefined FUN_140f6d30a(void)

void FUN_140f6d30a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140f6d3a4;
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
LAB_140f6d37d:
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
      goto LAB_140f6d37d;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140f6d3a4;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f6d3a4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6d43c FUN_140f6d43c body=370 status=ok
// SIG undefined FUN_140f6d43c(void)

undefined8 * FUN_140f6d43c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f6d5fe FUN_140f6d5fe body=179 status=ok
// SIG undefined FUN_140f6d5fe(void)

void FUN_140f6d5fe(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar6 = param_1;
  }
  iVar3 = *(int *)(param_1 + 0x48);
  lVar7 = (longlong)iVar3 * 0x10;
  if ((longlong)iVar3 != 0) {
    uVar8 = 0;
    do {
      if ((((*(int *)(lVar6 + uVar8) == *param_2) && (*(int *)(lVar6 + 4 + uVar8) == param_2[1])) &&
          (*(int *)(lVar6 + 8 + uVar8) == param_2[2])) &&
         (*(int *)(lVar6 + 0xc + uVar8) == param_2[3])) {
        if ((int)(~uVar8 >> 4) != 0) {
          return;
        }
        break;
      }
      lVar1 = lVar6 + uVar8;
      uVar8 = uVar8 + 0x10;
    } while (lVar1 + 0x10 != lVar6 + lVar7);
  }
  *(uint *)(param_1 + 0x48) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
    FUN_140f6d6b2(param_1);
    lVar5 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar5 != 0) {
    param_1 = lVar5;
  }
  uVar4 = *(undefined8 *)(param_2 + 2);
  puVar2 = (undefined8 *)(param_1 + lVar7);
  *puVar2 = *(undefined8 *)param_2;
  puVar2[1] = uVar4;
  return;
}



// FUNCTION 140f6d6b2 FUN_140f6d6b2 body=417 status=ok
// SIG undefined FUN_140f6d6b2(void)

void FUN_140f6d6b2(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    _Src = *(void **)((longlong)param_1 + 0x40);
joined_r0x000140f6d7ec:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (4 < *(uint *)((longlong)param_1 + 0x4c)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x40);
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar3;
      _Src = *(void **)((longlong)param_1 + 0x40);
      if (uVar3 < 5) goto joined_r0x000140f6d7ec;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar4,0x10);
  return;
}



// FUNCTION 140f6d85c FUN_140f6d85c body=976 status=ok
// SIG undefined FUN_140f6d85c(void)

void FUN_140f6d85c(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  ushort *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined1 local_68 [72];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140982196(local_20,param_1);
  if (*param_1 == '\x01') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) =
         *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) + 2;
  }
  FUN_1448a432c(local_68,param_1);
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_a0 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_a8 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_a8 = &local_9c;
      local_a0 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_a0 = 1;
      local_a8 = (undefined4 *)
                 ((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                 (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_90 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_98 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_98 = &local_8c;
      local_90 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_90 = 1;
      local_98 = (undefined4 *)
                 ((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                 (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_80 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_88 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_88 = &local_7c;
      local_80 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_80 = 1;
      local_88 = (undefined4 *)
                 ((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                 (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_70 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_78 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_78 = &local_6c;
      local_70 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_70 = 1;
      local_78 = (undefined4 *)
                 ((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                 (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar10 = 0;
    do {
      puVar1 = local_a8 + (int)local_a0;
      *local_a8 = 0x3f800000;
      puVar2 = local_98 + (int)local_90;
      *local_98 = 0x3f800000;
      puVar3 = local_88 + (int)local_80;
      *local_88 = 0x3f800000;
      puVar4 = local_78 + (int)local_70;
      *local_78 = 0x3f800000;
      iVar10 = iVar10 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_a8 = puVar1;
      local_98 = puVar2;
      local_88 = puVar3;
      local_78 = puVar4;
    } while (iVar10 < *piVar11);
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6dc2e FUN_140f6dc2e body=77 status=ok
// SIG undefined FUN_140f6dc2e(void)

void FUN_140f6dc2e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_140f6dc7c(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140f6dc7c FUN_140f6dc7c body=130 status=ok
// SIG undefined FUN_140f6dc7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140f6dc7c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_140f6dcd2:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_140f6dcd2;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 140f6dd0c FUN_140f6dd0c body=176 status=ok
// SIG undefined FUN_140f6dd0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f6dd0c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b2c7340;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
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



// FUNCTION 140f6ddbc FUN_140f6ddbc body=148 status=ok
// SIG undefined FUN_140f6ddbc(void)

void FUN_140f6ddbc(longlong *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14079fafc(param_1,1);
  (**(code **)(*param_1 + 0x318))(param_1);
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 2;
  FUN_14019d794(param_1 + 9,&local_38);
  FUN_144760e21(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6de52 FUN_140f6de52 body=638 status=ok
// SIG undefined FUN_140f6de52(void)

void FUN_140f6de52(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x80);
  local_58 = param_1;
  if (plVar3 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x970) != 0) {
      FUN_1401c4d5c(plVar3 + 8,*(undefined8 *)(param_1 + 0x20));
      plVar3 = *(longlong **)(param_1 + 0x80);
    }
    (**(code **)(*plVar3 + 0x2b0))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    if (*(longlong *)(param_1 + 0x970) != 0) {
      FUN_1401c4d5c(*(longlong *)(param_1 + 0x88) + 0x40,*(undefined8 *)(param_1 + 0x20));
    }
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2b0))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x710);
  if (0 < lVar5) {
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 * 0x18 + -8;
    do {
      local_68 = 0;
      uStack_60 = 0;
      FUN_14485c47a(&local_68,param_1);
      uStack_60 = DAT_14cb850a0;
      FUN_143dc08f6(&local_58,*(longlong *)(param_1 + 0x708) + lVar5 + -8,&local_68);
      if (*(longlong *)(*(longlong *)(param_1 + 0x708) + lVar5) != 0) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_14485c47a(&local_68,param_1);
        uStack_60 = DAT_14cb850a0;
        FUN_143dc08f6(&local_58,*(longlong *)(param_1 + 0x708) + lVar5,&local_68);
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -0x18;
    } while (1 < uVar6);
  }
  *(undefined4 *)(param_1 + 0x710) = 0;
  if (*(int *)(param_1 + 0x714) < 0) {
    FUN_1488e45ec(param_1 + 0x708);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xef;
  if ((longlong)*(int *)(param_1 + 0x700) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x6f8) + 0x14;
    lVar5 = (longlong)*(int *)(param_1 + 0x700) * 0x28;
    do {
      if ((*(longlong *)(lVar4 + -0x14) != 0) &&
         ((*(uint *)(*(longlong *)(lVar4 + -0x14) + 8) >> 0x1e & 1) == 0)) {
        lVar2 = FUN_140288b94();
        plVar3 = *(longlong **)(lVar4 + -0x14);
        if (((plVar3 != (longlong *)0x0) &&
            (((lVar2 != 0 && (lVar1 = plVar3[2], lVar1 != 0)) &&
             (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          (**(code **)(*plVar3 + 0xa88))(plVar3,lVar4);
          (**(code **)(*plVar3 + 0xa68))(plVar3);
        }
      }
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  if (*(int *)(param_1 + 0x704) < 0) {
    FUN_1488e45bc(param_1 + 0x6f8);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f6e0d2 FUN_140f6e0d2 body=86 status=ok
// SIG undefined FUN_140f6e0d2(void)

undefined8 FUN_140f6e0d2(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  FUN_140f6e128();
  if (param_2 != 0) {
    lVar2 = FUN_14071731e();
    param_1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
      uVar3 = (**(code **)(*(longlong *)(param_2 + 0x1538) + 0x20))(param_2 + 0x1538);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_140f6e11c;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_140f6e11c:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 140f6e128 FUN_140f6e128 body=85 status=ok
// SIG undefined FUN_140f6e128(void)

undefined8 FUN_140f6e128(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined7 uVar3;
  byte bVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_14071731e();
    param_1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
      lVar2 = (**(code **)(*(longlong *)(param_2 + 0x3f8) + 0x10))(param_2 + 0x3f8);
      bVar4 = *(byte *)(lVar2 + 0x40) ^ 1;
      uVar3 = (undefined7)((ulonglong)lVar2 >> 8);
      bVar1 = 1;
      goto LAB_140f6e171;
    }
  }
  bVar4 = (byte)param_1;
  bVar1 = 0;
  uVar3 = 0;
LAB_140f6e171:
  return CONCAT71(uVar3,bVar1 & bVar4);
}



// FUNCTION 140f6e17e FUN_140f6e17e body=32 status=ok
// SIG undefined FUN_140f6e17e(void)

void FUN_140f6e17e(undefined8 param_1,undefined4 param_2)

{
  FUN_140f6e19e();
  FUN_1408453d0(param_1,param_2);
  return;
}



// FUNCTION 140f6e19e FUN_140f6e19e body=585 status=ok
// SIG undefined FUN_140f6e19e(void)

void FUN_140f6e19e(longlong param_1)

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
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb56270 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148630fef;
      local_60 = FUN_1464b6a91;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_148630fef;
        local_60 = FUN_1464b6a91;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb56270);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar3 != 0) {
          if (*(longlong *)(param_1 + 0x270) != 0) {
            FUN_14480f766(lVar3 + 400);
          }
          local_38 = FUN_1410d070c;
          local_30 = 0;
          FUN_140f6e3e8(lVar3 + 400,&local_28,param_1);
          *(undefined8 *)(param_1 + 0x270) = local_28;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6e3e8 FUN_140f6e3e8 body=772 status=ok
// SIG undefined FUN_140f6e3e8(void)

undefined8 * FUN_140f6e3e8(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b3eef60;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_140f6e59c;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_140f6e586;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
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
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_140f6e586:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140f6e59c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f6e702 FUN_140f6e702 body=137 status=ok
// SIG undefined FUN_140f6e702(void)

undefined8 * FUN_140f6e702(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e12950;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140f6e72a;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140f6e72a:
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f6e78c FUN_140f6e78c body=99 status=ok
// SIG undefined FUN_140f6e78c(void)

void FUN_140f6e78c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1744a0;
  plVar3 = (longlong *)param_1[5];
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
  FUN_140f6e7ef(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140f6e7ef FUN_140f6e7ef body=75 status=ok
// SIG undefined FUN_140f6e7ef(void)

void FUN_140f6e7ef(longlong param_1,int param_2)

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



// FUNCTION 140f6e842 FUN_140f6e842 body=79 status=ok
// SIG undefined FUN_140f6e842(void)

void FUN_140f6e842(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x88)) {
    FUN_14872d1da(param_1 + 0x60,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_14899af46(param_1 + 0x80,0);
      return;
    }
  }
  return;
}



// FUNCTION 140f6e891 FUN_140f6e891 body=49 status=ok
// SIG undefined FUN_140f6e891(void)

longlong FUN_140f6e891(void)

{
  if (DAT_14c964930 == 0) {
    FUN_140f50038(&DAT_14c964930,&PTR_s__Script_AnimationCore_149eb7770);
  }
  return DAT_14c964930;
}



// FUNCTION 140f6e8c2 FUN_140f6e8c2 body=73 status=ok
// SIG undefined FUN_140f6e8c2(void)

void FUN_140f6e8c2(undefined8 param_1,longlong param_2)

{
  FUN_140d4f835(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140f6e90b(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f6e90b FUN_140f6e90b body=41 status=ok
// SIG undefined FUN_140f6e90b(void)

void FUN_140f6e90b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d4f790(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 140f6e934 FUN_140f6e934 body=143 status=ok
// SIG undefined FUN_140f6e934(void)

ulonglong FUN_140f6e934(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_14021e994();
  uVar2 = 1;
  if (*(char *)((longlong)param_1 + 0x419) == '\0') {
    if (*(char *)((longlong)param_1 + 0x41a) == '\x01') {
      lVar1 = param_1[0x84];
      if (((lVar1 != 0) && (*(char *)(lVar1 + 300) != '\b')) && (*(char *)(lVar1 + 300) != '\x06'))
      {
        uVar2 = FUN_140ce3b60(lVar1,0);
        uVar2 = uVar2 ^ 1;
      }
    }
    else {
      if ((param_1[100] != 0) &&
         ((*(char *)(param_1[100] + 0x12d) != '\x01' ||
          (*(char *)((longlong)param_1 + 0x3aa) == '\x01')))) {
        FUN_140f6e9c4(param_1);
        (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(param_2 + 8));
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 140f6e9c4 FUN_140f6e9c4 body=192 status=ok
// SIG undefined FUN_140f6e9c4(void)

void FUN_140f6e9c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x36c) == '\0') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220), lVar1 != 0)) {
    local_50 = *(undefined8 *)(lVar1 + 0x30);
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_1411604ae(local_48,0);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      lVar2 = FUN_14479d2ce(param_1 + 0x360);
      if (lVar2 != 0) {
        FUN_14084412e(lVar2 + 0x1288,&DAT_14cbca5e4,lVar1);
        *(undefined1 *)(param_1 + 0x36c) = 1;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6ea86 FUN_140f6ea86 body=2832 status=ok
// SIG undefined FUN_140f6ea86(void)

void FUN_140f6ea86(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  uVar20 = (undefined4)param_2;
  uVar28 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((char)param_1[0x83] == '\0') {
    FUN_140f6f67c(param_1);
    lVar13 = FUN_140343d7a(param_1);
    if (((lVar13 != 0) && (*(longlong *)(param_1[9] + 0x220) != 0)) && (param_1[0x1b] != 0)) {
      plVar15 = (longlong *)param_1[0x1e];
      bVar5 = true;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
        lVar16 = 0;
      }
      else {
        iVar12 = (int)plVar15[1];
        lVar16 = 0;
        do {
          if (iVar12 == 0) {
            plVar15 = (longlong *)0x0;
            goto LAB_140f6ec90;
          }
          LOCK();
          iVar10 = (int)plVar15[1];
          bVar17 = iVar12 == iVar10;
          if (bVar17) {
            *(int *)(plVar15 + 1) = iVar12 + 1;
            iVar10 = iVar12;
          }
          iVar12 = iVar10;
          UNLOCK();
        } while (!bVar17);
        lVar16 = param_1[0x1d];
        bVar5 = false;
      }
LAB_140f6ec90:
      dVar18 = *(double *)(lVar16 + 0x588);
      if (((((dVar18 <= -DAT_14cbca8c8) || (DAT_14cbca8c8 <= dVar18)) ||
           ((dVar21 = *(double *)(lVar16 + 0x590), dVar21 <= -DAT_14cbca8d0 ||
            ((DAT_14cbca8d0 <= dVar21 ||
             (dVar23 = *(double *)(lVar16 + 0x598), dVar23 <= -DAT_14cbca8d8)))))) ||
          (DAT_14cbca8d8 <= dVar23)) ||
         ((((iVar12 = _finite(dVar18), iVar12 == 0 || (iVar12 = _finite(dVar21), iVar12 == 0)) ||
           (iVar12 = _finite(dVar23), iVar12 == 0)) ||
          ((dVar21 = (double)param_1[0x7d] - *(double *)(lVar16 + 0x590),
           dVar18 = (double)param_1[0x7c] - *(double *)(lVar16 + 0x588),
           *(float *)(lVar16 + 0x5d0) * *(float *)(lVar16 + 0x5d0) + 0.01 <
           (float)(dVar18 * dVar18 + dVar21 * dVar21) ||
           (bVar17 = true,
           *(float *)(lVar16 + 0x5d4) + 0.01 <
           ABS((float)((double)(float)(double)param_1[0x7e] - *(double *)(lVar16 + 0x598))))))))) {
        lVar13 = *(longlong *)(lVar13 + 0x1c8);
        if (lVar13 == 0) {
          pdVar14 = &DAT_14c8464e0;
          local_118 = DAT_14c8464f0;
        }
        else {
          local_118 = *(double *)(lVar13 + 0x270);
          pdVar14 = (double *)(lVar13 + 0x260);
        }
        local_108 = pdVar14[1];
        dVar23 = local_108 - (double)param_1[0x26];
        local_100 = *pdVar14;
        dVar21 = local_100 - (double)param_1[0x25];
        dVar3 = dVar21 * dVar21 + dVar23 * dVar23;
        local_f4 = uVar20;
        FUN_1402f52f6(param_1 + 0x31);
        (**(code **)(*param_1 + 0x150))(param_1,&local_e8);
        dVar19 = local_d8 - (double)param_1[0x27];
        local_110 = local_e0;
        dVar22 = local_e0 - (double)param_1[0x26];
        dVar18 = local_e8 - (double)param_1[0x25];
        if (((dVar3 != 1.0) || (dVar6 = 0.0, dVar7 = dVar23, dVar4 = dVar21, NAN(dVar3))) &&
           (dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar4 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar3)) {
          dVar4 = 1.0 / SQRT(dVar3);
          dVar6 = dVar4 * 0.0;
          dVar7 = dVar23 * dVar4;
          dVar4 = dVar4 * dVar21;
        }
        local_f0 = local_d8;
        fVar27 = (float)SQRT(dVar3);
        dVar24 = dVar18 * dVar18 + dVar22 * dVar22;
        dVar3 = dVar19 * dVar19 + dVar24;
        if (((dVar3 != 1.0) || (dVar26 = dVar22, dVar8 = dVar19, dVar9 = dVar18, NAN(dVar3))) &&
           (dVar26 = DAT_14c8464e8, dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar3)) {
          dVar3 = 1.0 / SQRT(dVar3);
          dVar26 = dVar22 * dVar3;
          dVar8 = dVar19 * dVar3;
          dVar9 = dVar3 * dVar18;
        }
        if ((ABS(fVar27) <= 1e-08) ||
           (fVar25 = (float)(dVar6 * dVar8 + dVar4 * dVar9 + dVar7 * dVar26),
           fVar25 < *(float *)(param_1 + 0x6d) || fVar25 == *(float *)(param_1 + 0x6d))) {
          if ((dVar24 != 1.0) || (NAN(dVar24))) {
            dVar23 = DAT_14c8464e8;
            dVar19 = DAT_14c8464f0;
            dVar21 = DAT_14c8464e0;
            if (9.99999993922529e-09 <= dVar24) {
              dVar23 = dVar22 * (1.0 / SQRT(dVar24));
              dVar19 = 0.0;
              dVar21 = dVar18 * (1.0 / SQRT(dVar24));
            }
          }
          else {
            dVar19 = (double)(-(ulonglong)(dVar19 == 0.0) & (ulonglong)dVar19);
            dVar23 = dVar22;
            dVar21 = dVar18;
          }
        }
        else {
          dVar18 = 1.0 / (double)fVar27;
          dVar19 = dVar18 * 0.0;
          dVar23 = dVar23 * dVar18;
          dVar21 = dVar21 * dVar18;
        }
        fVar25 = *(float *)(param_1 + 0x73);
        if (fVar27 <= (float)SQRT((local_118 - local_d8) * (local_118 - local_d8) +
                                  (local_100 - local_e8) * (local_100 - local_e8) +
                                  (local_108 - local_e0) * (local_108 - local_e0)) + fVar25) {
LAB_140f6f088:
          bVar17 = false;
        }
        else {
          fVar27 = (float)((local_e8 - local_100) * dVar21 + (local_e0 - local_108) * dVar23 +
                          (local_d8 - local_118) * dVar19);
          bVar17 = true;
          if ((((fVar25 != 0.0) || (NAN(fVar25))) || (0.0 <= fVar27)) &&
             ((((-fVar27 <= fVar27 || (fVar25 <= 0.0)) || (-fVar27 <= fVar25)) &&
              (((fVar27 <= 0.0 || (-fVar25 <= fVar25)) || (-fVar25 <= fVar27))))))
          goto LAB_140f6f088;
        }
        uVar28 = 0;
        uVar20 = local_f4;
      }
      if (!bVar5) {
        LOCK();
        plVar1 = plVar15 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (bVar17) {
        FUN_1457d0ea2(param_1);
        *(undefined1 *)((longlong)param_1 + 0x41c) = 1;
        goto LAB_140f6f47a;
      }
    }
    if (((*(char *)((longlong)param_1 + 0x41d) != '\0') ||
        (*(char *)((longlong)param_1 + 0x124) != '\x01')) ||
       (cVar11 = FUN_1457d0e38(param_1), cVar11 == '\0')) {
      if (*(char *)((longlong)param_1 + 0x124) == '\x02') {
LAB_140f6f0df:
        *(undefined1 *)((longlong)param_1 + 0x41a) = 1;
      }
      else {
        if ((((*(char *)((longlong)param_1 + 0x41d) == '\0') &&
             (cVar11 = FUN_1457d0e38(param_1), cVar11 != '\0')) &&
            (cVar11 = FUN_140f7032c(param_1), cVar11 != '\0')) &&
           (cVar11 = FUN_140f70458(param_1), cVar11 != '\0')) goto LAB_140f6f3db;
        cVar11 = FUN_140f6f902(param_1,CONCAT44(uVar28,uVar20));
        if (cVar11 != '\0') goto LAB_140f6f0df;
        cVar11 = FUN_140f6fb68(param_1);
        if (cVar11 == '\0') {
LAB_140f6f1b0:
          cVar11 = FUN_140f6fa34(param_1);
          if (cVar11 != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x41a) = 1;
            *(undefined1 *)((longlong)param_1 + 0x125) = 2;
            *(undefined1 *)((longlong)param_1 + 0x36e) = 0;
            if (param_1[100] != 0) {
              FUN_140f6f7b0(param_1[100],2);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_138);
        }
        FUN_1457d0ea2(param_1);
        *(undefined1 *)((longlong)param_1 + 0x41c) = 1;
      }
      *(undefined1 *)((longlong)param_1 + 0x125) = 2;
      *(undefined1 *)((longlong)param_1 + 0x36e) = 0;
      if (param_1[100] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_138);
      }
      goto LAB_140f6f47a;
    }
LAB_140f6f3db:
    *(undefined1 *)((longlong)param_1 + 0x125) = 5;
    *(undefined1 *)((longlong)param_1 + 0x36e) = 0;
    if (param_1[100] != 0) {
      FUN_140f6f7b0(param_1[100],5);
    }
    *(undefined1 *)((longlong)param_1 + 0x41d) = 1;
    cVar11 = (char)param_1[0x75];
  }
  else {
    if (((*(char *)((longlong)param_1 + 0x41d) == '\0') &&
        (*(char *)((longlong)param_1 + 0x124) == '\x01')) &&
       (cVar11 = FUN_1457d0e38(param_1), cVar11 != '\0')) goto LAB_140f6f3db;
    if (*(char *)((longlong)param_1 + 0x124) == '\x02') goto LAB_140f6f0df;
    if (((*(char *)((longlong)param_1 + 0x41d) == '\0') &&
        (cVar11 = FUN_1457d0e38(param_1), cVar11 != '\0')) &&
       ((cVar11 = FUN_140f7032c(param_1), cVar11 != '\0' &&
        (cVar11 = FUN_140f70458(param_1), cVar11 != '\0')))) goto LAB_140f6f3db;
    cVar11 = FUN_140f6f902(param_1,param_2);
    if (cVar11 != '\0') goto LAB_140f6f0df;
    lVar13 = FUN_140343d7a(param_1);
    if (lVar13 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x1c8);
      if (lVar13 == 0) {
        pdVar14 = &DAT_14c8464e0;
        dVar18 = DAT_14c8464f0;
      }
      else {
        pdVar14 = (double *)(lVar13 + 0x260);
        dVar18 = *(double *)(lVar13 + 0x270);
      }
      if ((float)(((double)param_1[0x7c] - (double)param_1[0x79]) *
                  (*pdVar14 - (double)param_1[0x79]) +
                  ((double)param_1[0x7d] - (double)param_1[0x7a]) *
                  (pdVar14[1] - (double)param_1[0x7a]) +
                 ((double)param_1[0x7e] - (double)param_1[0x7b]) * (dVar18 - (double)param_1[0x7b]))
          <= 0.0) {
        *(undefined1 *)((longlong)param_1 + 0x419) = 1;
        *(undefined1 *)((longlong)param_1 + 0x125) = 6;
        *(undefined1 *)((longlong)param_1 + 0x36e) = 0;
        if (param_1[100] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_138);
        }
        goto LAB_140f6f47a;
      }
    }
    if (((*(char *)((longlong)param_1 + 0x41d) != '\0') ||
        (*(char *)((longlong)param_1 + 0x41e) != '\0')) ||
       (lVar13 = FUN_140343d7a(param_1), lVar13 == 0)) goto LAB_140f6f1b0;
    lVar13 = *(longlong *)(lVar13 + 0x1c8);
    if (lVar13 == 0) {
      pdVar14 = &DAT_14c8464e0;
      dVar18 = DAT_14c8464f0;
    }
    else {
      pdVar14 = (double *)(lVar13 + 0x260);
      dVar18 = *(double *)(lVar13 + 0x270);
    }
    fVar27 = *(float *)(*(longlong *)(param_1[9] + 0x220) + 0x118);
    if ((float)(((double)param_1[0x7e] - dVar18) * ((double)param_1[0x7e] - dVar18) +
               ((double)param_1[0x7d] - pdVar14[1]) * ((double)param_1[0x7d] - pdVar14[1]) +
               ((double)param_1[0x7c] - *pdVar14) * ((double)param_1[0x7c] - *pdVar14)) <=
        fVar27 * fVar27) goto LAB_140f6f1b0;
    *(undefined1 *)((longlong)param_1 + 0x41e) = 1;
    *(undefined1 *)((longlong)param_1 + 0x125) = 2;
    *(undefined1 *)((longlong)param_1 + 0x36e) = 0;
    if (param_1[100] != 0) {
      FUN_140f6f7b0(param_1[100],2);
    }
    cVar11 = *(char *)((longlong)param_1 + 0x3a9);
  }
  if (cVar11 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x41a) = 1;
  }
LAB_140f6f47a:
  if ((local_d0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6f67c FUN_140f6f67c body=289 status=ok
// SIG undefined FUN_140f6f67c(void)

void FUN_140f6f67c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x36d) == '\0') {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      cVar1 = FUN_1402f52f6(*(longlong *)(param_1 + 0xd8) + 0x238);
      if (cVar1 != '\0') {
        FUN_1437fe5b8(param_1 + 0x188,*(longlong *)(param_1 + 0xd8) + 0x238);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  else {
    local_28 = DAT_14c8464f0;
    local_38 = (undefined4)DAT_14c8464e0;
    uStack_34 = DAT_14c8464e0._4_4_;
    uStack_30 = (undefined4)DAT_14c8464e8;
    uStack_2c = DAT_14c8464e8._4_4_;
    FUN_1400b22c2(local_48,&DAT_149e02088);
    cVar1 = FUN_1418e6788(param_1,&local_38,local_48);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xd8) != 0)) {
      FUN_1437fe5b8(param_1 + 0x188,*(longlong *)(param_1 + 0xd8) + 0x238);
      FUN_144955a78(param_1 + 0x2a0,*(longlong *)(param_1 + 0xd8) + 0x58);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6f7b0 FUN_140f6f7b0 body=336 status=ok
// SIG undefined FUN_140f6f7b0(void)

void FUN_140f6f7b0(longlong *param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  int *piVar5;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_2 == '\x04') {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                     (*(int *)(param_1[0x24] + 0x120) != 0) * '\x02' + '\x02');
  }
  else {
    uVar4 = (ulonglong)param_2;
    if ((param_2 & 0xff) == 3) {
      uVar4 = (ulonglong)
              CONCAT31((int3)(param_2 >> 8),(*(int *)(param_1[0x24] + 0x110) != 0) * '\x02' + '\x01'
                      );
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x98))(param_1,uVar4 & 0xffffffff);
  if ((char)uVar4 == '\0') {
    cVar2 = FUN_1408814c2(param_1,&DAT_14cbd42e0,0);
  }
  else {
    cVar2 = '\0';
  }
  local_48 = -1;
  if ((lVar3 != 0) && (cVar2 == '\0' && 0 < *(int *)(lVar3 + 8))) {
    local_48 = FUN_140f7e99d(lVar3,param_1[7],0xbf800000);
    local_48 = ((uint)uVar4 & 0xff) * 100 + local_48;
  }
  piVar5 = &local_48;
  local_30 = 4;
  local_28 = 2;
  FUN_1408834b4(param_1,&DAT_14cbd42e8,piVar5);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_30) {
      piVar5 = (int *)CONCAT44(uStack_44,local_48);
    }
    (*pcVar1)(piVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(uStack_44,local_48));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f6f902 FUN_140f6f902 body=305 status=ok
// SIG undefined FUN_140f6f902(void)

bool FUN_140f6f902(longlong param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  float extraout_XMM0_Da;
  float fVar4;
  
  if (*(int *)(param_1 + 0x364) != 0) {
    uVar1 = *(uint *)(param_1 + 0x360);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x364))) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220),
       (*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if (lVar2 == 0) {
        return false;
      }
      plVar3 = (longlong *)*plVar3;
      if (plVar3 == (longlong *)0x0) {
        return false;
      }
      (**(code **)(*plVar3 + 0x480))(plVar3);
      if (SQRT((double)plVar3[0x27] * (double)plVar3[0x27] +
               (double)plVar3[0x25] * (double)plVar3[0x25] +
               (double)plVar3[0x26] * (double)plVar3[0x26]) <
          (double)(extraout_XMM0_Da * *(float *)(lVar2 + 300))) {
        if (*(char *)(param_1 + 0x144) == '\x01') {
          fVar4 = *(float *)(param_1 + 0x140);
        }
        else {
          *(float *)(param_1 + 0x140) = param_2;
          *(undefined1 *)(param_1 + 0x144) = 1;
          fVar4 = param_2;
        }
        return *(float *)(lVar2 + 0x128) <= param_2 - fVar4;
      }
      if (*(char *)(param_1 + 0x144) == '\x01') {
        *(undefined1 *)(param_1 + 0x144) = 0;
      }
    }
  }
  return false;
}



// FUNCTION 140f6fa34 FUN_140f6fa34 body=307 status=ok
// SIG undefined FUN_140f6fa34(void)

ulonglong FUN_140f6fa34(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 unaff_RDI;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  plVar6 = *(longlong **)(param_1 + 0xf0);
  if (plVar6 == (longlong *)0x0) {
LAB_140f6fadb:
    uVar10 = 0;
    goto LAB_140f6fadd;
  }
  iVar9 = (int)plVar6[1];
  do {
    if (iVar9 == 0) goto LAB_140f6fadb;
    LOCK();
    iVar8 = (int)plVar6[1];
    bVar11 = iVar9 == iVar8;
    if (bVar11) {
      *(int *)(plVar6 + 1) = iVar9 + 1;
      iVar8 = iVar9;
    }
    iVar9 = iVar8;
    UNLOCK();
  } while (!bVar11);
  lVar7 = *(longlong *)(param_1 + 0xe8);
  if (lVar7 == 0) {
LAB_140f6fb43:
    uVar10 = 0;
  }
  else {
    dVar3 = *(double *)(param_1 + 0x3b0);
    dVar4 = *(double *)(param_1 + 0x3b8);
    dVar5 = *(double *)(param_1 + 0x3c0);
    dVar15 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
    if (((dVar15 != 1.0) || (dVar12 = dVar3, dVar13 = dVar4, dVar14 = dVar5, NAN(dVar15))) &&
       (dVar12 = DAT_14c8464e0, dVar13 = DAT_14c8464e8, dVar14 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar15)) {
      dVar15 = 1.0 / SQRT(dVar15);
      dVar12 = dVar3 * dVar15;
      dVar13 = dVar4 * dVar15;
      dVar14 = dVar5 * dVar15;
    }
    if (*(char *)(lVar7 + 0x378) != '\x01') goto LAB_140f6fb43;
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),
                      (float)(dVar14 * *(double *)(lVar7 + 0x370) +
                             dVar12 * *(double *)(lVar7 + 0x360) +
                             dVar13 * *(double *)(lVar7 + 0x368)) <= -0.75);
  }
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
LAB_140f6fadd:
  return uVar10 & 0xffffffff;
}



// FUNCTION 140f6fb68 FUN_140f6fb68 body=1411 status=ok
// SIG undefined FUN_140f6fb68(void)

bool FUN_140f6fb68(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  bool bVar7;
  longlong lVar8;
  double *pdVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = FUN_140343d7a();
  if (lVar8 == 0) {
LAB_140f6feaa:
    bVar7 = false;
  }
  else {
    lVar1 = *(longlong *)(param_1[9] + 0x220);
    bVar7 = false;
    if ((lVar1 == 0) || (param_1[0x1b] == 0)) goto LAB_140f6feac;
    lVar8 = *(longlong *)(lVar8 + 0x1c8);
    if (lVar8 == 0) {
      pdVar9 = &DAT_14c8464e0;
      local_108 = DAT_14c8464f0;
    }
    else {
      local_108 = *(double *)(lVar8 + 0x270);
      pdVar9 = (double *)(lVar8 + 0x260);
    }
    local_f8 = pdVar9[1];
    dVar16 = local_f8 - (double)param_1[0x26];
    local_e8 = *pdVar9;
    dStack_e0 = pdVar9[1];
    dVar18 = local_e8 - (double)param_1[0x25];
    dVar15 = dVar18 * dVar18 + dVar16 * dVar16;
    (**(code **)(*param_1 + 0x150))(param_1,&local_d8);
    dVar12 = local_c8 - (double)param_1[0x27];
    dVar14 = local_d0 - (double)param_1[0x26];
    dVar17 = local_d8 - (double)param_1[0x25];
    local_100 = local_c8;
    local_f0 = local_d0;
    if ((dVar15 != 1.0) || (NAN(dVar15))) {
      dVar3 = DAT_14c8464f0;
      dVar4 = DAT_14c8464e8;
      dVar2 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar15) {
        dVar2 = 1.0 / SQRT(dVar15);
        dVar3 = dVar2 * 0.0;
        dVar4 = dVar16 * dVar2;
        dVar2 = dVar2 * dVar18;
      }
    }
    else {
      dVar3 = 0.0;
      dVar4 = dVar16;
      dVar2 = dVar18;
    }
    fVar19 = (float)SQRT(dVar15);
    dVar15 = dVar17 * dVar17 + dVar14 * dVar14;
    dVar11 = dVar12 * dVar12 + dVar15;
    if (((dVar11 != 1.0) || (dVar20 = dVar17, dVar21 = dVar14, dVar5 = dVar12, NAN(dVar11))) &&
       (dVar20 = DAT_14c8464e0, dVar21 = DAT_14c8464e8, dVar5 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar11)) {
      dVar11 = 1.0 / SQRT(dVar11);
      dVar20 = dVar11 * dVar17;
      dVar21 = dVar14 * dVar11;
      dVar5 = dVar12 * dVar11;
    }
    if ((ABS(fVar19) <= 1e-08) ||
       (fVar10 = (float)(dVar3 * dVar5 + dVar2 * dVar20 + dVar4 * dVar21),
       fVar10 < *(float *)(param_1 + 0x6d) || fVar10 == *(float *)(param_1 + 0x6d))) {
      if ((dVar15 != 1.0) || (NAN(dVar15))) {
        dVar16 = DAT_14c8464e8;
        dVar18 = DAT_14c8464e0;
        dVar12 = DAT_14c8464f0;
        if (9.99999993922529e-09 <= dVar15) {
          dVar16 = dVar14 * (1.0 / SQRT(dVar15));
          dVar18 = dVar17 * (1.0 / SQRT(dVar15));
          dVar12 = 0.0;
        }
      }
      else {
        dVar12 = (double)(-(ulonglong)(dVar12 == 0.0) & (ulonglong)dVar12);
        dVar16 = dVar14;
        dVar18 = dVar17;
      }
    }
    else {
      dVar15 = 1.0 / (double)fVar19;
      dVar12 = dVar15 * 0.0;
      dVar16 = dVar16 * dVar15;
      dVar18 = dVar18 * dVar15;
    }
    bVar7 = true;
    if ((0.0 < *(float *)(lVar1 + 0x114)) && (*(float *)(lVar1 + 0x114) < fVar19))
    goto LAB_140f6feac;
    fVar10 = (float)((local_d8 - local_e8) * dVar18 + (local_d0 - local_f8) * dVar16 +
                    (local_c8 - local_108) * dVar12);
    if (fVar10 < 0.0) {
      fVar13 = (float)SQRT((local_108 - local_c8) * (local_108 - local_c8) +
                           (local_e8 - local_d8) * (local_e8 - local_d8) +
                           (local_f8 - local_d0) * (local_f8 - local_d0));
      if ((fVar13 < fVar19) &&
         (fVar10 = -fVar10,
         *(float *)(lVar1 + 0x118) <= fVar10 && fVar10 != *(float *)(lVar1 + 0x118)))
      goto LAB_140f6feac;
      bVar6 = *(byte *)(param_1 + 0x2c);
      if (fVar19 <= fVar13 || bVar6 != 0) goto LAB_140f6fea2;
      param_1[0x29] = (longlong)local_e8;
      param_1[0x2a] = (longlong)dStack_e0;
      param_1[0x2b] = (longlong)local_108;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      dVar12 = dStack_e0;
      dVar16 = local_e8;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x2c);
LAB_140f6fea2:
      if ((bVar6 & 1) == 0) goto LAB_140f6feaa;
      dVar12 = (double)param_1[0x2a];
      dVar16 = (double)param_1[0x29];
    }
    bVar7 = *(float *)(lVar1 + 0x118) * *(float *)(lVar1 + 0x118) <
            (float)((dVar12 - local_f8) * (dVar12 - local_f8) +
                   (dVar16 - local_e8) * (dVar16 - local_e8));
  }
LAB_140f6feac:
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 140f700ec FUN_140f700ec body=570 status=ok
// SIG undefined FUN_140f700ec(void)

double * FUN_140f700ec(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  undefined4 *puVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined3 uStack_88;
  undefined4 uStack_85;
  undefined4 uStack_81;
  undefined1 local_78 [8];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  undefined2 local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
  }
  cVar8 = FUN_1402f52f6(param_1 + 0x188);
  if (cVar8 == '\0') {
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x290);
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 0x1e0);
  }
  uVar5 = *puVar9;
  uVar6 = puVar9[1];
  local_c8 = *(undefined4 *)(puVar9 + 2);
  uStack_c4 = *(undefined4 *)((longlong)puVar9 + 0x14);
  dVar7 = (double)puVar9[2];
  uStack_c0 = *(undefined4 *)(puVar9 + 3);
  uStack_bc = *(undefined4 *)((longlong)puVar9 + 0x1c);
  local_b8 = *(undefined4 *)(puVar9 + 4);
  uStack_b4 = *(undefined4 *)((longlong)puVar9 + 0x24);
  uStack_b0 = *(undefined4 *)(puVar9 + 5);
  uStack_ac = *(undefined4 *)((longlong)puVar9 + 0x2c);
  plVar3 = (longlong *)puVar9[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  param_2[2] = dVar7;
  local_d8._0_4_ = (undefined4)uVar5;
  local_d8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_d0._0_4_ = (undefined4)uVar6;
  uStack_d0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)param_2 = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_2 + 4) = local_d8._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_d0._4_4_;
  local_d8 = uVar5;
  uStack_d0 = uVar6;
  cVar8 = FUN_1402f52f6(param_1 + 0x188);
  if (cVar8 == '\0') {
    puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x58);
  }
  else {
    puVar11 = (undefined4 *)(param_1 + 0x2a0);
  }
  local_a8 = *puVar11;
  uStack_a4 = puVar11[1];
  uStack_a0 = puVar11[2];
  uStack_9c = puVar11[3];
  local_98 = puVar11[4];
  uStack_94 = puVar11[5];
  uStack_90 = puVar11[6];
  uStack_8c = puVar11[7];
  uStack_85 = *(undefined4 *)((longlong)puVar11 + 0x23);
  uStack_81 = *(undefined4 *)((longlong)puVar11 + 0x27);
  uStack_88 = (undefined3)((uint)*(undefined4 *)((longlong)puVar11 + 0x1f) >> 8);
  FUN_14034cca6(local_78,puVar11 + 0xc);
  local_40 = *(undefined2 *)(puVar11 + 0x1a);
  local_38 = *(longlong *)(puVar11 + 0x1c);
  if ((DAT_14c950c29 == '\x01') && (local_38 != 0)) {
    FUN_1456cec3c();
  }
  local_30 = puVar11[0x1e];
  *param_2 = *param_2 - (double)CONCAT44(uStack_94,local_98);
  param_2[1] = param_2[1] - (double)CONCAT44(uStack_8c,uStack_90);
  param_2[2] = param_2[2] - (double)CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,uStack_88));
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar10 = (undefined8 ****)local_70[0];
    if (local_58 < 0x19) {
      ppppuVar10 = local_70;
    }
    (*pcVar4)(ppppuVar10);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
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
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f7032c FUN_140f7032c body=298 status=ok
// SIG undefined FUN_140f7032c(void)

undefined8 FUN_140f7032c(longlong *param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  double *pdVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_140343d7a();
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((*(longlong *)(param_1[9] + 0x220) != 0) && (param_1[0x1b] != 0)) {
      pdVar5 = (double *)&DAT_14c8464e0;
      if (*(longlong *)(lVar4 + 0x1c8) != 0) {
        pdVar5 = (double *)(*(longlong *)(lVar4 + 0x1c8) + 0x260);
      }
      dVar1 = *pdVar5;
      dVar2 = pdVar5[1];
      cVar3 = FUN_1402f52f6(param_1 + 0x31);
      if (cVar3 == '\0') {
        plVar7 = (longlong *)(param_1[0x1b] + 0x290);
      }
      else {
        plVar7 = param_1 + 0x3c;
      }
      (**(code **)(*param_1 + 0x150))(param_1,&local_48);
      lVar4 = *(longlong *)(param_1[9] + 0x220);
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0x110) == '\x01')) {
        fVar8 = *(float *)(plVar7 + 9);
        if (*(float *)(plVar7 + 9) <= *(float *)((longlong)plVar7 + 0x4c)) {
          fVar8 = *(float *)((longlong)plVar7 + 0x4c);
        }
      }
      else {
        fVar8 = *(float *)(plVar7 + 9);
      }
      uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),
                       (float)((local_40 - dVar2) * (local_40 - dVar2) +
                              (local_48 - dVar1) * (local_48 - dVar1)) < fVar8 * fVar8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140f70458 FUN_140f70458 body=497 status=ok
// SIG undefined FUN_140f70458(void)

ulonglong FUN_140f70458(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = FUN_140343d7a();
  lVar13 = param_1[9];
  if (*(longlong *)(lVar13 + 0x220) != 0) {
    lVar12 = FUN_140f7064a();
    lVar13 = *(longlong *)(lVar13 + 0x220);
    if (lVar13 != 0) {
      lVar16 = 0;
      if ((lVar12 == 0) || (lVar6 = *(longlong *)(lVar13 + 0x10), lVar6 == 0)) goto LAB_140f704e2;
      if (*(int *)(lVar12 + 0x38) <= *(int *)(lVar6 + 0x38)) {
        lVar16 = 0;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
            lVar12 + 0x30) {
          lVar16 = lVar13;
        }
        goto LAB_140f704e2;
      }
    }
  }
  lVar16 = 0;
LAB_140f704e2:
  uVar14 = 0;
  if (((lVar11 != 0) && (lVar16 != 0)) && (param_1[0x1b] != 0)) {
    plVar15 = (longlong *)param_1[0x1e];
    bVar8 = true;
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
      lVar13 = 0;
    }
    else {
      iVar10 = (int)plVar15[1];
      lVar13 = 0;
      do {
        if (iVar10 == 0) {
          plVar15 = (longlong *)0x0;
          goto LAB_140f70537;
        }
        LOCK();
        iVar9 = (int)plVar15[1];
        bVar17 = iVar10 == iVar9;
        if (bVar17) {
          *(int *)(plVar15 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar17);
      lVar13 = param_1[0x1d];
      bVar8 = false;
    }
LAB_140f70537:
    dVar5 = *(double *)(lVar13 + 0x598);
    fVar3 = *(float *)(lVar13 + 0x5d4);
    lVar13 = param_1[0x1b];
    plVar7 = *(longlong **)(lVar13 + 0x2c8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    fVar4 = *(float *)(lVar13 + 0x2dc);
    (**(code **)(*param_1 + 0x150))(param_1,local_78);
    uVar14 = CONCAT71((int7)((ulonglong)local_78 >> 8),
                      ABS((float)((dVar5 - (double)fVar3) - ((double)fVar4 + local_68))) <=
                      *(float *)(lVar16 + 0x1b4));
    if (plVar7 != (longlong *)0x0) {
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
    if (!bVar8) {
      LOCK();
      plVar7 = plVar15 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 140f7064a FUN_140f7064a body=228 status=ok
// SIG undefined FUN_140f7064a(void)

longlong FUN_140f7064a(void)

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
  if (DAT_14cba6b50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465c8422;
    local_38 = &LAB_148bec879;
    local_40 = &LAB_14584c22d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1b8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakAISwoopData",&DAT_14cba6b50,&DAT_148bec878);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6b50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f70730 FUN_140f70730 body=1557 status=ok
// SIG undefined FUN_140f70730(void)

/* WARNING: Removing unreachable block (ram,0x000140f70a16) */
/* WARNING: Removing unreachable block (ram,0x000140f70a1c) */

undefined8 FUN_140f70730(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  int local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 local_170;
  longlong *plStack_168;
  undefined4 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_b0;
  longlong *plStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_7c;
  double local_78;
  double dStack_70;
  double local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar13 = FUN_140343d7a();
  plVar7 = *(longlong **)(param_1 + 0xf0);
  if (plVar7 == (longlong *)0x0) {
LAB_140f707b7:
    uVar14 = 0;
    goto LAB_140f707b9;
  }
  iVar12 = (int)plVar7[1];
  do {
    if (iVar12 == 0) goto LAB_140f707b7;
    LOCK();
    iVar10 = (int)plVar7[1];
    bVar15 = iVar12 == iVar10;
    if (bVar15) {
      *(int *)(plVar7 + 1) = iVar12 + 1;
      iVar10 = iVar12;
    }
    iVar12 = iVar10;
    UNLOCK();
  } while (!bVar15);
  lVar8 = *(longlong *)(param_1 + 0xe8);
  if ((lVar8 == 0 || lVar13 == 0) || (*(longlong *)(param_1 + 0xd8) == 0)) {
    uVar14 = 0;
  }
  else {
    cVar11 = FUN_1402f52f6();
    if (cVar11 == '\0') {
      lVar13 = *(longlong *)(param_1 + 0xd8) + 0x290;
    }
    else {
      lVar13 = param_1 + 0x1e0;
    }
    dVar5 = *(double *)(param_1 + 0x3b0);
    dVar6 = *(double *)(param_1 + 0x3b8);
    dVar17 = dVar5 * dVar5 + dVar6 * dVar6;
    if ((dVar17 != 1.0) || (NAN(dVar17))) {
      dVar16 = DAT_14c8464e8;
      dVar18 = DAT_14c8464f0;
      dVar9 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar17) {
        dVar16 = dVar6 * (1.0 / SQRT(dVar17));
        dVar18 = 0.0;
        dVar9 = dVar5 * (1.0 / SQRT(dVar17));
      }
    }
    else {
      dVar16 = dVar6;
      dVar18 = (double)(-(ulonglong)(*(double *)(param_1 + 0x3c0) == 0.0) &
                       (ulonglong)*(double *)(param_1 + 0x3c0));
      dVar9 = dVar5;
    }
    dVar17 = (double)*(float *)(param_1 + 0x3a0);
    dVar5 = *(double *)(lVar8 + 0x598);
    dVar6 = *(double *)(lVar8 + 0x590);
    *(double *)(param_1 + 0x3c8) = dVar9 * dVar17 + *(double *)(lVar8 + 0x588);
    *(double *)(param_1 + 0x3d0) = dVar16 * dVar17 + dVar6;
    *(double *)(param_1 + 0x3d8) = dVar18 * dVar17 + dVar5;
    pdVar4 = (double *)(param_1 + 0x3c8);
    *(double *)(param_1 + 0x3d8) = (double)*(float *)(param_1 + 0x3a4) + *(double *)(lVar13 + 0x10);
    local_f0 = 0xffffffffffffffff;
    local_e8 = 0;
    local_e0 = DAT_14cbca8c8;
    dStack_d8 = DAT_14cbca8d0;
    local_d0 = DAT_14cbca8d8;
    local_c8 = DAT_14cbca8c8;
    dStack_c0 = DAT_14cbca8d0;
    local_b8 = DAT_14cbca8d8;
    local_b0 = 0;
    plStack_a8 = (longlong *)0x0;
    local_a0 = 0xffffffff;
    local_130 = *(undefined4 *)(lVar8 + 0x250);
    local_128 = *(undefined8 *)(lVar8 + 0x480);
    plStack_120 = *(longlong **)(lVar8 + 0x488);
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_120 + 0xc) = *(int *)((longlong)plStack_120 + 0xc) + 1;
      UNLOCK();
    }
    local_138 = *(undefined8 *)(lVar8 + 0x5d0);
    local_118 = *(undefined8 *)(lVar8 + 0x440);
    local_f8 = *(undefined8 *)(param_1 + 0x3d8);
    local_108 = *pdVar4;
    uStack_100 = *(undefined8 *)(param_1 + 0x3d0);
    _local_110 = CONCAT44(0x40a00000,*(undefined4 *)(param_1 + 0x3a4));
    local_148 = *(double *)(param_1 + 0x3d8);
    local_158 = *pdVar4;
    dStack_150 = *(double *)(param_1 + 0x3d0);
    iVar12 = FUN_1437f6159(&local_138,&local_f0);
    if (iVar12 == 0) {
      local_148 = local_d0;
      local_158 = local_e0;
      dStack_150 = dStack_d8;
    }
    local_7c = 0;
    local_1b0 = 0xffffffffffffffff;
    local_1a8 = 0;
    local_1a0 = DAT_14cbca8c8;
    dStack_198 = DAT_14cbca8d0;
    local_190 = DAT_14cbca8d8;
    local_178 = DAT_14cbca8d8;
    local_188 = DAT_14cbca8c8;
    dStack_180 = DAT_14cbca8d0;
    local_170 = 0;
    plStack_168 = (longlong *)0x0;
    local_160 = 0xffffffff;
    local_98 = *(undefined8 *)(lVar8 + 0x588);
    uStack_90 = *(undefined8 *)(lVar8 + 0x590);
    local_88 = *(undefined8 *)(lVar8 + 0x598);
    local_68 = local_148;
    local_78 = local_158;
    dStack_70 = dStack_150;
    local_58 = *(undefined4 *)(lVar8 + 0x250);
    local_5c = *(undefined4 *)(lVar8 + 0x5d4);
    local_60 = *(undefined4 *)(lVar8 + 0x5d0);
    local_50 = *(undefined8 *)(lVar8 + 0x480);
    local_48 = *(longlong **)(lVar8 + 0x488);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
      UNLOCK();
    }
    local_40 = *(undefined8 *)(lVar8 + 0x440);
    uVar14 = 0;
    FUN_140855e2d(&local_98,&local_1b0,0);
    if (local_1a8 - 1U < 2) {
      uVar14 = 0;
      if (((int)local_1b0 != -1) && (local_1b0._4_4_ != -1)) {
LAB_140f70bbd:
        uVar14 = 0;
        if ((-DAT_14cbca8c8 < local_1a0) &&
           ((((uVar14 = 0, local_1a0 < DAT_14cbca8c8 && (uVar14 = 0, -DAT_14cbca8d0 < dStack_198))
             && (dStack_198 < DAT_14cbca8d0)) &&
            ((uVar14 = 0, -DAT_14cbca8d8 < local_190 && (local_190 < DAT_14cbca8d8)))))) {
          iVar12 = _finite(local_1a0);
          if ((iVar12 == 0) ||
             ((iVar12 = _finite(dStack_198), iVar12 == 0 ||
              (iVar12 = _finite(local_190), iVar12 == 0)))) {
            uVar14 = 0;
          }
          else {
            *(double *)(param_1 + 0x3d8) = local_190;
            *pdVar4 = local_1a0;
            *(double *)(param_1 + 0x3d0) = dStack_198;
            uVar14 = 1;
          }
        }
      }
    }
    else if (local_1a8 == 3) goto LAB_140f70bbd;
    plVar1 = plStack_168;
    if (plStack_168 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_168 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_168)(plStack_168);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plStack_120 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plStack_120 + 0x10))();
      }
    }
    plVar1 = plStack_a8;
    if (plStack_a8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_a8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_a8)(plStack_a8);
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
  LOCK();
  plVar1 = plVar7 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar3 = (int *)((longlong)plVar7 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_140f707b9:
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f70d46 FUN_140f70d46 body=318 status=ok
// SIG undefined FUN_140f70d46(void)

undefined8 * FUN_140f70d46(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plStack_40 = *(longlong **)(param_4 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_140f70e35:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar7 = (int)plStack_40[1];
    do {
      if (iVar7 == 0) goto LAB_140f70e35;
      LOCK();
      iVar5 = (int)plStack_40[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plStack_40 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_48 = *(longlong **)(param_4 + 8);
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  plVar4 = plStack_40;
  uVar6 = (**(code **)(*local_48 + 0x40))();
  iVar7 = FUN_140f70e86((longlong *)(param_1 + 0x68),uVar6,&local_48);
  plVar2 = plStack_40;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x68);
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (lVar8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    param_2[1] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f70e86 FUN_140f70e86 body=183 status=ok
// SIG undefined FUN_140f70e86(void)

int FUN_140f70e86(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 140f70f3e FUN_140f70f3e body=49 status=ok
// SIG undefined FUN_140f70f3e(void)

void FUN_140f70f3e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140297002(param_1 + 0x1090);
  if (lVar1 != 0) {
    FUN_140f70f70(lVar1,param_1);
  }
  FUN_1447c0e7a(param_1);
  return;
}



// FUNCTION 140f70f70 FUN_140f70f70 body=572 status=ok
// SIG undefined FUN_140f70f70(void)

void FUN_140f70f70(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
    local_70._0_4_ = 0;
    iVar5 = 0;
    uVar1 = (uint)local_70;
  }
  else {
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    local_70 = (double)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar5 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_70;
      if (bVar10) {
        iVar5 = iVar4;
      }
    }
  }
  local_70._0_4_ = uVar1;
  local_70 = (double)CONCAT44(iVar5,(uint)local_70);
  if ((longlong)*(int *)(param_1 + 0x3a8) != 0) {
    local_78 = param_1 + 0x3a0;
    lVar9 = *(longlong *)(param_1 + 0x3a0);
    lVar8 = (longlong)*(int *)(param_1 + 0x3a8) << 3;
    iVar5 = 1;
    lVar7 = 0;
    do {
      cVar2 = FUN_140e16a16(lVar9,&local_70);
      if (cVar2 != '\0') {
        if (iVar5 != 0) {
          iVar4 = *(int *)(param_1 + 0x3a8);
          iVar5 = iVar4 - iVar5;
          if (iVar5 != 0) {
            iVar6 = 1;
            if (iVar5 < 1) {
              iVar6 = iVar5;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x3a0) + (lVar7 >> 0x20) * 8),
                    (void *)(*(longlong *)(param_1 + 0x3a0) + (longlong)(iVar4 - iVar6) * 8),
                    (longlong)iVar6 << 3);
            iVar4 = *(int *)(param_1 + 0x3a8);
          }
          *(int *)(param_1 + 0x3a8) = iVar4 + -1;
          FUN_140f711ae(local_78);
          bVar3 = (**(code **)(*param_2 + 0xa08))(param_2);
          cVar2 = (**(code **)(*param_2 + 0xa00))(param_2);
          iVar5 = (uint)bVar3 * 2 + 4;
          if (cVar2 == '\0') {
            iVar5 = (uint)bVar3 + (uint)bVar3;
          }
          local_58 = (double)param_2[0x2d] + (double)param_2[0x30];
          local_60 = (double)param_2[0x2c] + (double)param_2[0x2f];
          local_68 = (double)param_2[0x2d] - (double)param_2[0x30];
          local_70 = (double)param_2[0x2c] - (double)param_2[0x2f];
          local_50 = 1;
          FUN_140aab646(param_1,iVar5);
        }
        break;
      }
      lVar9 = lVar9 + 8;
      lVar7 = lVar7 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f711ae FUN_140f711ae body=137 status=ok
// SIG undefined FUN_140f711ae(void)

void FUN_140f711ae(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,4);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,4);
    }
  }
  return;
}



// FUNCTION 140f71246 FUN_140f71246 body=159 status=ok
// SIG undefined FUN_140f71246(void)

undefined8 * FUN_140f71246(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b71b000;
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_140f712e6(param_1 + 0x3c);
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140f7131e(param_1 + 0x2c);
  FUN_140f71356(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f712e6 FUN_140f712e6 body=55 status=ok
// SIG undefined FUN_140f712e6(void)

void FUN_140f712e6(longlong *param_1)

{
  FUN_140f714a6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f7131e FUN_140f7131e body=55 status=ok
// SIG undefined FUN_140f7131e(void)

void FUN_140f7131e(longlong *param_1)

{
  FUN_140f71522(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f71356 FUN_140f71356 body=212 status=ok
// SIG undefined FUN_140f71356(void)

void FUN_140f71356(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b27f980;
  FUN_140753a84(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 0x20);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140f7142a(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140f7145d(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 140f7142a FUN_140f7142a body=51 status=ok
// SIG undefined FUN_140f7142a(void)

void FUN_140f7142a(longlong param_1,int param_2)

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



// FUNCTION 140f7145d FUN_140f7145d body=73 status=ok
// SIG undefined FUN_140f7145d(void)

void FUN_140f7145d(longlong param_1,int param_2)

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



// FUNCTION 140f714a6 FUN_140f714a6 body=123 status=ok
// SIG undefined FUN_140f714a6(void)

void FUN_140f714a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 140f71522 FUN_140f71522 body=123 status=ok
// SIG undefined FUN_140f71522(void)

void FUN_140f71522(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140f7159e FUN_140f7159e body=9 status=ok
// SIG undefined FUN_140f7159e(void)

void FUN_140f7159e(longlong param_1)

{
  FUN_140f715a8(param_1 + 0x10);
  return;
}



// FUNCTION 140f715a8 FUN_140f715a8 body=126 status=ok
// SIG undefined FUN_140f715a8(void)

void FUN_140f715a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a544bd0;
  param_1[0x4d] = &PTR_FUN_14a544e10;
  FUN_140e6495a();
  param_1[0x4d] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x271) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0x4d);
    *(undefined1 *)((longlong)param_1 + 0x271) = 0;
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 140f71626 FUN_140f71626 body=40 status=ok
// SIG undefined FUN_140f71626(void)

undefined8 FUN_140f71626(undefined8 param_1,int param_2)

{
  FUN_140f7164e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f7164e FUN_140f7164e body=77 status=ok
// SIG undefined FUN_140f7164e(void)

void FUN_140f7164e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2bb960;
  param_1[6] = &PTR_FUN_14b2bbc50;
  FUN_140f7169b(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 140f7169b FUN_140f7169b body=105 status=ok
// SIG undefined FUN_140f7169b(void)

void FUN_140f7169b(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f71704 FUN_140f71704 body=58 status=ok
// SIG undefined FUN_140f71704(void)

undefined8 * FUN_140f71704(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b50ad80;
  *(undefined4 *)(param_1 + 6) = 0x44fa0000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 140f7173e FUN_140f7173e body=421 status=ok
// SIG undefined FUN_140f7173e(void)

void FUN_140f7173e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = param_1 + -0x3b58;
  lVar1 = param_1 + -0x33d0;
  if ((*(byte *)(param_1 + 0x6030) & 1) == 0) {
    local_80 = &local_48;
    local_48 = 0x130000000f;
    uStack_40 = 0x10;
    uStack_3c = 0x11;
    local_78 = 4;
    local_88 = 0;
    FUN_140f718e4(lVar1,&DAT_14cbc1e50,lVar2);
    FUN_140f719de(param_1 + 0x5d0);
  }
  else {
    local_60 = &local_4c;
    local_4c = 0x13;
    local_58 = 1;
    local_88 = 0;
    FUN_140f718e4(lVar1,&DAT_14cbc1e50,lVar2);
    local_70 = &local_48;
    local_48 = 0x100000000f;
    uStack_40 = 0x11;
    local_68 = 3;
    local_88 = 1;
    FUN_140f718e4(lVar1,&DAT_14cbc1e50,lVar2);
    lVar3 = FUN_1447210f0(lVar2);
    if (lVar3 != 0) {
      lVar2 = FUN_1447210f0(lVar2);
      *(float *)(param_1 + 0x6044) = (float)*(double *)(lVar2 + 0x6d0);
    }
  }
  if (*(longlong *)(param_1 + -0x3720) != 0) {
    lVar2 = FUN_1409e8768(lVar1);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x28) + (longlong)DAT_14cbc1e58 * 0x24) = 0;
  }
  FUN_1400bc8c2(lVar1,&DAT_14cbc1d58);
  FUN_1409e8d8c(lVar1,&DAT_14cbc1e50,1,&DAT_14c9a8414);
  FUN_1400bc96c(lVar1,&DAT_14cbc1d58);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f718e4 FUN_140f718e4 body=249 status=ok
// SIG undefined FUN_140f718e4(void)

void FUN_140f718e4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  if (param_3 != 0) {
    FUN_14024dbd6(param_3,local_118,0);
    lVar1 = (longlong)(int)local_50;
    puVar3 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar3 = local_58;
    }
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        local_128 = *param_4;
        uStack_124 = param_4[1];
        uStack_120 = param_4[2];
        uStack_11c = param_4[3];
        local_138 = param_5;
        FUN_1409e86ca(param_1,param_2,*(undefined8 *)(puVar3 + lVar2),&local_128);
        lVar2 = lVar2 + 8;
      } while (lVar1 * 8 != lVar2);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f719de FUN_140f719de body=259 status=ok
// SIG undefined FUN_140f719de(void)

void FUN_140f719de(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) & 0xdf;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x1800000000;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_14024dbd6(*(longlong *)(param_1 + 0x250),local_f8,0);
    lVar3 = (longlong)(int)local_30;
    puVar4 = local_f8;
    if (local_38 != (undefined1 *)0x0) {
      puVar4 = local_38;
    }
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(puVar4 + lVar5);
        iVar2 = (**(code **)(*plVar1 + 0x570))(plVar1);
        if (iVar2 != 0) {
          (**(code **)(*plVar1 + 0x938))(plVar1,0x10,0);
          (**(code **)(*plVar1 + 0x938))(plVar1,0x11);
        }
        lVar5 = lVar5 + 8;
      } while (lVar3 * 8 != lVar5);
    }
    if (local_38 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f71af8 FUN_140f71af8 body=129 status=ok
// SIG undefined FUN_140f71af8(void)

void FUN_140f71af8(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  
  lVar5 = FUN_143d36212();
  if (lVar5 != 0) {
    cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_3);
    if (cVar4 == '\0') {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *(undefined4 *)(lVar5 + 0x38) = *param_3;
      *(undefined4 *)(lVar5 + 0x3c) = uVar1;
      *(undefined4 *)(lVar5 + 0x40) = uVar2;
      *(undefined4 *)(lVar5 + 0x44) = uVar3;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,param_4);
    }
    if (*(char *)(param_1 + 0x154) == '\0') {
      FUN_140bdeb5a(param_1,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140f71b7a FUN_140f71b7a body=164 status=ok
// SIG undefined FUN_140f71b7a(void)

void FUN_140f71b7a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = *param_3;
  local_78 = &local_18;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  FUN_140f71c20(0,param_2,&local_68,4);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_68);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f71c20 FUN_140f71c20 body=185 status=ok
// SIG undefined FUN_140f71c20(void)

void FUN_140f71c20(longlong param_1,int param_2,undefined8 param_3,undefined1 param_4,int *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x48);
    lVar2 = (longlong)*(int *)(param_1 + 0x50) * 0x38;
    do {
      if (*(int *)(*plVar1 + 8) == param_2) {
        if (plVar1 != (longlong *)0x0) {
          if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            local_40 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            local_40 = 0;
          }
          if (*param_5 == -1) {
            local_1c = 0xffffffff;
          }
          else {
            local_1c = *(undefined8 *)param_5;
          }
          local_38 = param_1;
          local_30 = plVar1;
          local_28 = param_3;
          local_20 = param_4;
          FUN_141098bd2(*plVar1,&local_40);
        }
        break;
      }
      plVar1 = plVar1 + 7;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  if (*param_5 != -1) {
    param_5[0] = -1;
    param_5[1] = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f71cda FUN_140f71cda body=84 status=ok
// SIG undefined FUN_140f71cda(void)

ulonglong FUN_140f71cda(longlong param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  bVar3 = 1;
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar5) != 0) {
        bVar2 = FUN_140f71d2e();
        bVar3 = bVar3 & bVar2;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff;
}



// FUNCTION 140f71d2e FUN_140f71d2e body=163 status=ok
// SIG undefined FUN_140f71d2e(void)

undefined1 FUN_140f71d2e(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  char local_28 [12];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x10) == '\x05') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_140a2633e(*(longlong *)(param_1 + 0x18),local_28);
      if (local_28[0] == '\x01') {
        uVar1 = local_1c != 0;
      }
      else {
        uVar1 = FUN_140321d1a(local_28);
      }
      goto LAB_140f71dc4;
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0x2001) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if (*(int *)(param_1 + 0x30) == 0x2000) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  uVar1 = 0;
LAB_140f71dc4:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f71df2 FUN_140f71df2 body=82 status=ok
// SIG undefined FUN_140f71df2(void)

bool FUN_140f71df2(undefined8 *param_1,char param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = FUN_1405f6250(*param_1);
  if (param_2 == '\0') {
    return bVar1 == 6;
  }
  switch(param_2) {
  case '\x01':
    bVar2 = bVar1 == 4;
    break;
  case '\x02':
    bVar2 = bVar1 == 4;
    goto LAB_140f71e30;
  case '\x03':
    bVar2 = bVar1 == 6;
LAB_140f71e30:
    bVar2 = !bVar2;
    break;
  case '\x04':
    bVar2 = bVar1 < 3;
    break;
  default:
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 140f71e44 FUN_140f71e44 body=100 status=ok
// SIG undefined FUN_140f71e44(void)

undefined8 FUN_140f71e44(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined7 uVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  if (DAT_14cb88708 == lVar1) {
    cVar2 = '\0';
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)lVar1 >> 8);
    if (DAT_14cb88710 == lVar1) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = (DAT_14cb88718 == lVar1) * '\x02';
    }
  }
  if (param_2 == '\0') {
    bVar4 = cVar2 == '\x02';
    goto LAB_140f71e6b;
  }
  switch(param_2) {
  case '\x01':
    bVar4 = cVar2 == '\x01';
    break;
  case '\x02':
    bVar4 = cVar2 == '\x01';
    goto LAB_140f71e9f;
  case '\x03':
    bVar4 = cVar2 == '\x02';
LAB_140f71e9f:
    return CONCAT71(uVar3,!bVar4);
  case '\x04':
    bVar4 = cVar2 == '\0';
    break;
  default:
    return 0;
  }
LAB_140f71e6b:
  return CONCAT71(uVar3,bVar4);
}



// FUNCTION 140f71eb0 FUN_140f71eb0 body=80 status=ok
// SIG undefined FUN_140f71eb0(void)

undefined8 * FUN_140f71eb0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  FUN_1406ed278(param_1 + 2);
  FUN_1406ed278(param_1 + 0x24);
  FUN_1406ed278(param_1 + 0x46);
  FUN_1406ed278(param_1 + 0x68);
  return param_1;
}



// FUNCTION 140f71f00 FUN_140f71f00 body=95 status=ok
// SIG undefined FUN_140f71f00(void)

ulonglong FUN_140f71f00(longlong param_1)

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
LAB_140f71f42:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140f71f42;
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



// FUNCTION 140f71f60 FUN_140f71f60 body=280 status=ok
// SIG undefined FUN_140f71f60(void)

void FUN_140f71f60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (2 < (byte)(*(char *)(param_1 + 0x140) - 5U)) {
    cVar5 = '\x05';
    if ((*(char **)(param_1 + 0x148) != (char *)0x0) && (**(char **)(param_1 + 0x148) == '\x01')) {
      cVar5 = FUN_1405f61f4();
    }
    *(char *)(param_1 + 0x140) = cVar5;
    if (*(char *)(param_1 + 0x168) == '\x01') {
      if (cVar5 == '\x04') {
        if ((*(char **)(param_1 + 0x148) != (char *)0x0) && (**(char **)(param_1 + 0x148) == '\x01')
           ) {
          lVar3 = param_1 + 0x158;
          cVar5 = FUN_144a7c06e(lVar3);
          if (cVar5 == '\0') {
            local_38 = 0;
            plStack_30 = (longlong *)0x0;
            FUN_14009b010(&local_38,3,0);
            FUN_1446dcc2e(lVar3,&local_38);
            plVar4 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_30 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_30)(plStack_30);
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
          FUN_1488433c8(*(undefined8 *)(param_1 + 0x148),lVar3,1,0);
          FUN_1459b1a18(param_1,1);
        }
      }
      else if ((byte)(cVar5 - 5U) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f720a4 FUN_140f720a4 body=117 status=ok
// SIG undefined FUN_140f720a4(void)

void FUN_140f720a4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    FUN_1407abeca(&local_28,param_1 + 0x110);
    *(undefined4 *)(lVar1 + 0x178) = local_28;
    *(undefined4 *)(lVar1 + 0x17c) = uStack_24;
    *(undefined4 *)(lVar1 + 0x180) = uStack_20;
    *(undefined4 *)(lVar1 + 0x184) = uStack_1c;
    if (*(char *)(lVar1 + 0x189) != *(char *)(lVar1 + 0x188)) {
      FUN_140cc5d3a(lVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f7211a FUN_140f7211a body=46 status=ok
// SIG undefined FUN_140f7211a(void)

void FUN_140f7211a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f72148(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5808b0;
  puVar1[5] = &PTR_FUN_14b580bd0;
  return;
}



// FUNCTION 140f72148 FUN_140f72148 body=84 status=ok
// SIG undefined FUN_140f72148(void)

undefined8 * FUN_140f72148(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *param_1 = &PTR_FUN_14a51ece0;
  param_1[5] = &PTR_FUN_14a51f000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 140f7219c FUN_140f7219c body=161 status=ok
// SIG undefined FUN_140f7219c(void)

byte FUN_140f7219c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f72344(param_1,&local_30,param_2);
  if (local_30 != 0) {
    uVar3 = FUN_140f7223e(param_1 + 8);
    param_1 = FUN_140f722bc(local_30,uVar3,param_3);
    param_1 = param_1 & 0xffffffff;
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_30 != 0 & (byte)param_1;
}



// FUNCTION 140f7223e FUN_140f7223e body=124 status=ok
// SIG undefined FUN_140f7223e(void)

longlong FUN_140f7223e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_140f7232e(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f722bc FUN_140f722bc body=113 status=ok
// SIG undefined FUN_140f722bc(void)

bool FUN_140f722bc(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 == (longlong *)0x0) {
          return false;
        }
        if ((longlong)(int)plVar2[2] == 0) {
          return false;
        }
        lVar3 = plVar2[1];
        lVar4 = (longlong)(int)plVar2[2] << 4;
        goto LAB_140f7230a;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return false;
  while( true ) {
    lVar3 = lVar3 + 0x10;
    lVar4 = lVar4 + -0x10;
    if (lVar4 == 0) break;
LAB_140f7230a:
    cVar1 = FUN_14069eaf4(lVar3,param_3);
    if (cVar1 != '\0') goto LAB_140f72325;
  }
  lVar3 = 0;
LAB_140f72325:
  return lVar3 != 0;
}



// FUNCTION 140f7232e FUN_140f7232e body=22 status=ok
// SIG undefined FUN_140f7232e(void)

undefined8 FUN_140f7232e(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb8bae8;
  if (DAT_14cb8bae8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8bae8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8bae8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8bae8[0x3a] <= *(int *)((longlong)DAT_14cb8bae8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb8bae8 + 0x300))(DAT_14cb8bae8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 140f72344 FUN_140f72344 body=954 status=ok
// SIG undefined FUN_140f72344(void)

longlong * FUN_140f72344(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong *plVar8;
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
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar7 = *(code **)(param_1 + 0x28);
  if (pcVar7 == (code *)0x0) {
    plVar8 = *(longlong **)(param_3 + 0xa8);
    if (plVar8 != (longlong *)0x0) {
      do {
        if (*(char *)(param_1 + 0x20) == '\x01') {
          if (DAT_14cb5b388 == 0) {
            local_58 = FUN_141864c34;
            local_60 = FUN_14081d0ea;
            local_68 = (code *)&LAB_146431698;
            local_78 = &LAB_1486775cb;
            local_80 = (code *)&LAB_1464cee35;
            local_88 = L"Game";
            local_90 = 0;
            local_98 = 0x10000005;
            local_a0 = 0x10;
            local_a8 = 0x3a20;
            local_70 = &local_58;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
             (plVar4 = plVar8,
             *(longlong *)
              (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
             DAT_14cb5b388 + 0x30)) {
            plVar4 = (longlong *)0x0;
          }
          if (((longlong *)plVar4[0x27f] != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*(longlong *)plVar4[0x27f] + 0x80))(), cVar3 != '\0'))
          goto LAB_140f723f2;
        }
        else {
LAB_140f723f2:
          if (DAT_14cb652c0 == 0) {
            local_58 = FUN_1449e2820;
            local_60 = FUN_14081d0ea;
            local_68 = FUN_1427b09ee;
            local_78 = &LAB_148715fe1;
            local_80 = FUN_146508b0f;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10004001;
            local_a0 = 8;
            local_a8 = 0x28;
            local_70 = &local_58;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
          }
          plVar4 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb652c0);
          if (plVar4 != (longlong *)0x0) {
            if (DAT_14cb652c0 == 0) {
              local_58 = FUN_1449e2820;
              local_60 = FUN_14081d0ea;
              local_68 = FUN_1427b09ee;
              local_78 = &LAB_148715fe1;
              local_80 = FUN_146508b0f;
              local_88 = L"Engine";
              local_90 = 0;
              local_98 = 0x10004001;
              local_a0 = 8;
              local_a8 = 0x28;
              local_70 = &local_58;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
            }
            plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb652c0);
            if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
              uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
              FUN_141260192(uVar6,&local_58,&DAT_14cb8c380);
              plVar8 = local_50;
              if ((code **)(param_1 + 0x28) != &local_58) {
                *(code **)(param_1 + 0x28) = local_58;
                local_58 = (code *)0x0;
                plVar4 = *(longlong **)(param_1 + 0x30);
                if (local_50 != plVar4) {
                  local_50 = (longlong *)0x0;
                  *(longlong **)(param_1 + 0x30) = plVar8;
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    plVar8 = plVar4 + 1;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)*plVar8 == 0) {
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
                }
              }
              plVar8 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_50 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              break;
            }
          }
        }
        plVar8 = (longlong *)plVar8[0x2d];
      } while (plVar8 != (longlong *)0x0);
    }
    pcVar7 = *(code **)(param_1 + 0x28);
    if (pcVar7 == (code *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_140f726ce;
    }
  }
  *param_2 = (longlong)pcVar7;
  lVar2 = *(longlong *)(param_1 + 0x30);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
LAB_140f726ce:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f72700 FUN_140f72700 body=29 status=ok
// SIG undefined FUN_140f72700(void)

undefined8 FUN_140f72700(longlong param_1,undefined8 param_2)

{
  FUN_140f7271e(param_1 + 0x9c8);
  return param_2;
}



// FUNCTION 140f7271e FUN_140f7271e body=90 status=ok
// SIG undefined FUN_140f7271e(void)

undefined8 * FUN_140f7271e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
  return param_2;
}



// FUNCTION 140f72778 FUN_140f72778 body=226 status=ok
// SIG undefined FUN_140f72778(void)

void FUN_140f72778(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (ulonglong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x125) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,8);
  }
  return;
}



// FUNCTION 140f7285a FUN_140f7285a body=1972 status=ok
// SIG undefined FUN_140f7285a(void)

void FUN_140f7285a(char *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  byte local_26c;
  undefined4 *local_268;
  int local_260;
  undefined4 *local_258;
  int local_250;
  undefined4 *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  int *local_1d8;
  int local_1d0;
  undefined4 *local_1c8;
  int local_1c0;
  int *local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  undefined4 *local_198;
  undefined8 uStack_190;
  int local_188;
  float *local_180 [2];
  int local_170;
  float *local_168;
  int local_158;
  float *local_150;
  int local_140;
  float *local_138 [2];
  int local_128;
  float *local_120;
  int local_110;
  float *local_108;
  int local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_1405f756a(local_f0,param_1);
  FUN_1405f76c0(local_138,param_1);
  FUN_1405f76c0(local_180,param_1);
  iVar17 = 0;
  local_188 = 0;
  local_198 = (undefined4 *)0x0;
  uStack_190 = 0;
  FUN_1405f75fe(&local_198,param_1);
  local_1a8 = 0;
  local_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  FUN_144a76d88(&local_1b8,param_1);
  FUN_140126e42(&local_1c8,param_1);
  FUN_140126e42(&local_1d8,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76cd4(&local_268,param_1);
  lVar9 = *local_e8;
  fVar2 = *(float *)(lVar9 + 0x14);
  fVar3 = *(float *)(lVar9 + 0x10);
  fVar4 = *(float *)(lVar9 + 0xc);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3b240);
  piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar16 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar16) {
    dVar10 = (double)fVar2 * 65536.0;
    dVar11 = (double)fVar3 * 65536.0;
    dVar12 = (double)fVar4 * 65536.0;
    do {
      fVar2 = *local_108;
      fVar3 = *local_120;
      fVar4 = *local_138[0];
      fVar5 = *local_150;
      fVar6 = *local_168;
      fVar7 = *local_180[0];
      uVar15 = *local_198;
      iVar8 = *local_1b8;
      local_1b8 = local_1b8 + local_1a8;
      local_198 = local_198 + local_188;
      local_180[0] = local_180[0] + local_170;
      local_168 = local_168 + local_158;
      local_150 = local_150 + local_140;
      local_138[0] = local_138[0] + local_128;
      local_120 = local_120 + local_110;
      local_108 = local_108 + local_f8;
      iVar14 = _finite((double)fVar4);
      if (iVar14 != 0) {
        iVar14 = _finite((double)fVar3);
        if (iVar14 != 0) {
          _finite((double)fVar2);
        }
      }
      iVar14 = _finite((double)fVar7);
      if (iVar14 != 0) {
        iVar14 = _finite((double)fVar6);
        if (iVar14 != 0) {
          _finite((double)fVar5);
        }
      }
      if (iVar8 == 0) {
        local_2c8 = (double)fVar5 + dVar10;
        local_2d0 = (double)fVar6 + dVar11;
        local_2d8 = (double)fVar7 + dVar12;
        local_2e0 = (double)fVar2 + dVar10;
        local_2e8 = (double)fVar3 + dVar11;
        local_2f0 = (double)fVar4 + dVar12;
        local_2f8 = uVar15;
        cVar13 = FUN_140f73010(local_e8 + 1,&local_2f0,&local_2d8,&local_2c0);
        if (cVar13 == '\0') goto LAB_140f72ea0;
        *local_1c8 = 0xffffffff;
        *local_1d8 = -(uint)local_26c;
        *local_208 = (float)(local_2c0 - dVar12);
        *local_1f8 = (float)(local_2b8 - dVar11);
        *local_1e8 = (float)(local_2b0 - dVar10);
        *local_238 = (float)local_2a8;
        *local_228 = (float)local_2a0;
        *local_218 = (float)local_298;
        *local_248 = local_274;
        *local_258 = local_270;
        uVar15 = local_278;
        local_258 = local_258 + local_250;
        local_248 = local_248 + local_240;
        local_238 = local_238 + local_230;
        local_228 = local_228 + local_220;
        local_218 = local_218 + local_210;
        local_208 = local_208 + local_200;
        local_1f8 = local_1f8 + local_1f0;
        local_1e8 = local_1e8 + local_1e0;
        local_1d8 = local_1d8 + local_1d0;
        local_1c8 = local_1c8 + local_1c0;
      }
      else {
LAB_140f72ea0:
        uVar15 = 0;
        *local_1c8 = 0;
        *local_1d8 = 0;
        fVar3 = DAT_14c846338;
        fVar2 = DAT_14c846330._4_4_;
        *local_208 = (float)DAT_14c846330;
        *local_1f8 = fVar2;
        *local_1e8 = fVar3;
        fVar3 = DAT_14c846338;
        fVar2 = DAT_14c846330._4_4_;
        *local_238 = (float)DAT_14c846330;
        *local_228 = fVar2;
        *local_218 = fVar3;
        *local_248 = 0;
        *local_258 = 0;
        local_258 = local_258 + local_250;
        local_248 = local_248 + local_240;
        local_238 = local_238 + local_230;
        local_228 = local_228 + local_220;
        local_218 = local_218 + local_210;
        local_208 = local_208 + local_200;
        local_1f8 = local_1f8 + local_1f0;
        local_1e8 = local_1e8 + local_1e0;
        local_1d8 = local_1d8 + local_1d0;
        local_1c8 = local_1c8 + local_1c0;
      }
      puVar1 = local_268 + local_260;
      *local_268 = uVar15;
      iVar17 = iVar17 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      local_268 = puVar1;
    } while (iVar17 < *piVar16);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3b240);
  if ((local_e0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f73010 FUN_140f73010 body=678 status=ok
// SIG undefined FUN_140f73010(void)

undefined4
FUN_140f73010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1c0 [4];
  undefined4 local_1bc;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_11c;
  byte local_113;
  uint local_110;
  int local_10c;
  undefined4 local_f0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar2 = *(longlong *)(param_1 + 0x60);
  uVar1 = 0;
  if ((lVar2 == 0) || (DAT_14c7627f4 == 0)) goto LAB_140f73275;
  local_9c = 0;
  local_98 = 0x101;
  local_70 = 0;
  local_68 = 0x800000000;
  local_50 = 0;
  local_48 = 0x400000000;
  local_b0 = 0;
  local_a4 = 0;
  local_c0 = DAT_14cb39740;
  local_a0 = 0;
  local_ac = 0x1000100;
  local_a8 = 1;
  local_b8 = DAT_14cb39738;
  local_af = 0;
  local_ad = 1;
  memset(local_1c0,0,0x100);
  local_f0 = 0xffffffff;
  local_1bc = 0x3f800000;
  local_11c = 0xffffffff;
  local_1c8 = &DAT_14cad0f10;
  local_1d8 = param_5;
  local_1d0 = &local_c0;
  uVar1 = FUN_1400b50cc(lVar2,local_1c0,param_2,param_3);
  if ((char)uVar1 != '\0') {
    *(byte *)((longlong)param_4 + 0x54) = local_113 >> 1 & 1;
    param_4[2] = local_188;
    *param_4 = local_198;
    param_4[1] = uStack_190;
    param_4[5] = local_158;
    param_4[3] = local_168;
    param_4[4] = uStack_160;
    lVar2 = DAT_14c9647c8;
    if (((local_10c == 0) || ((int)local_110 < 0)) || (DAT_14c9647dc <= (int)local_110)) {
LAB_140f731c7:
      param_4[9] = 0;
      uVar6 = 0;
    }
    else {
      uVar3 = (ulonglong)(local_110 >> 0x10);
      local_110 = local_110 & 0xffff;
      plVar4 = (longlong *)
               ((ulonglong)(local_110 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar3 * 8));
      if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != local_10c)) ||
         ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) goto LAB_140f731c7;
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      *(uint *)(param_4 + 9) = (uint)*(byte *)(lVar5 + 0x60);
      plVar4 = (longlong *)((ulonglong)(local_110 * 0x18) + *(longlong *)(lVar2 + uVar3 * 8));
      if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != local_10c)) ||
         ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar4;
      }
      *(undefined4 *)((longlong)param_4 + 0x4c) = *(undefined4 *)(lVar5 + 0x28);
      plVar4 = (longlong *)((ulonglong)(local_110 * 0x18) + *(longlong *)(lVar2 + uVar3 * 8));
      if (((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != local_10c)) ||
         ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *plVar4;
      }
      uVar6 = *(undefined4 *)(lVar2 + 0x34);
    }
    *(undefined4 *)(param_4 + 10) = uVar6;
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_140f73275:
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f732b8 FUN_140f732b8 body=102 status=ok
// SIG undefined FUN_140f732b8(void)

ulonglong FUN_140f732b8(longlong param_1)

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
LAB_140f73301:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140f73301;
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



// FUNCTION 140f7331e FUN_140f7331e body=85 status=ok
// SIG undefined FUN_140f7331e(void)

void FUN_140f7331e(void)

{
  undefined1 auStack_68 [32];
  undefined *local_48;
  undefined8 local_38;
  undefined **local_28;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14b428030;
  local_48 = &DAT_140f73780;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f73374 FUN_140f73374 body=1034 status=ok
// SIG undefined FUN_140f73374(void)

/* WARNING: Removing unreachable block (ram,0x000140f7372b) */
/* WARNING: Removing unreachable block (ram,0x000140f73717) */
/* WARNING: Removing unreachable block (ram,0x000140f7371d) */
/* WARNING: Removing unreachable block (ram,0x000140f7377a) */
/* WARNING: Removing unreachable block (ram,0x000140f73735) */
/* WARNING: Removing unreachable block (ram,0x000140f73749) */

void FUN_140f73374(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(byte *)(param_1 + 0x18) & 2) == 0) || (*(int *)(param_1 + 0x6c) == 0)) ||
      (uVar3 = *(uint *)(param_1 + 0x68), (int)uVar3 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar3 ||
       (plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0)) ||
      (((int)plVar10[2] != *(int *)(param_1 + 0x6c) ||
       (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))
       )))))) goto LAB_140f733ee;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar8 = *plVar10;
  }
  else {
    lVar8 = 0;
  }
  if (((*(longlong *)(lVar8 + 0x88) == 0) || (*(longlong **)(lVar8 + 0x90) == (longlong *)0x0)) ||
     (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x90) + 0x10))(), lVar8 == 0))
  goto LAB_140f733ee;
  FUN_1406eeb88(lVar8,&local_b8,&DAT_14cb8ab50);
  lVar8 = local_b8;
  if (local_b8 == 0) {
LAB_140f736d6:
    lVar8 = 0;
LAB_140f736d8:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar9 = FUN_140f737b4();
    cVar6 = FUN_1448093f4(lVar8,uVar9);
    if (cVar6 == '\0') goto LAB_140f736d6;
    if (plStack_b0 == (longlong *)0x0) goto LAB_140f736d8;
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
    plVar10 = plStack_b0;
  }
  plVar11 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (lVar8 != 0) {
    local_80 = 0;
    local_78 = 0;
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    local_74 = 0xffffffff00000080;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    plVar11 = *(longlong **)(param_1 + 0x48);
    if (plVar11 != (longlong *)0x0) {
      iVar7 = (int)plVar11[1];
      do {
        if (iVar7 == 0) {
          plStack_b0 = (longlong *)0x0;
          goto LAB_140f73574;
        }
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
      plStack_b0 = *(longlong **)(param_1 + 0x40);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        local_a8 = plVar11;
      }
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
LAB_140f73574:
    pcVar4 = (code *)*param_2;
    if (pcVar4 != (code *)0x0) {
      plVar11 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar11 = (longlong *)param_2[2];
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      (*pcVar4)(uVar9,&uStack_a0);
    }
    local_50 = *(undefined4 *)(lVar8 + 0x38);
    if (((plStack_b0 != (longlong *)0x0) && (local_a8 != (longlong *)0x0)) && (0 < (int)local_a8[1])
       ) {
      plVar11 = (longlong *)(lVar8 + 0x28);
      uVar3 = *(uint *)(lVar8 + 0x30);
      *(uint *)(lVar8 + 0x30) = uVar3 + 1;
      if (*(uint *)(lVar8 + 0x34) < uVar3 + 1) {
        FUN_140f737ee(plVar11,(ulonglong)uVar3);
      }
      memmove((void *)(*plVar11 + 0x70),(void *)*plVar11,(ulonglong)uVar3 * 0x70);
      plVar11 = (longlong *)*plVar11;
      *plVar11 = local_b8;
      plVar11[1] = (longlong)plStack_b0;
      plVar11[2] = (longlong)local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
        UNLOCK();
      }
      plVar11[7] = 0;
      *(undefined4 *)(plVar11 + 8) = 0;
      plVar11[3] = 0;
      plVar11[4] = 0;
      *(undefined8 *)((longlong)plVar11 + 0x44) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar11 + 0x4c) = 0;
      plVar11[0xb] = 0;
      *(undefined4 *)(plVar11 + 0xc) = 0;
      FUN_14054d9c0(plVar11 + 3,&uStack_a0);
      *(undefined4 *)(plVar11 + 0xd) = local_50;
      FUN_140df6042(lVar8);
    }
    local_58 = 0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_14063a322(&uStack_a0);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
LAB_140f733ee:
  if (*param_2 != 0) {
    plVar10 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f73794 FUN_140f73794 body=31 status=ok
// SIG undefined FUN_140f73794(void)

undefined8 FUN_140f73794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f737b4 FUN_140f737b4 body=57 status=ok
// SIG undefined FUN_140f737b4(void)

void FUN_140f737b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65000 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65000 = FUN_140002ddd(FUN_146507dbc,uVar1,L"GbxSkillDelegateEventPump");
  }
  return;
}



// FUNCTION 140f737ee FUN_140f737ee body=271 status=ok
// SIG undefined FUN_140f737ee(void)

void FUN_140f737ee(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
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
    uVar5 = lVar4 * 0x70;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140f738fe FUN_140f738fe body=25 status=ok
// SIG undefined FUN_140f738fe(void)

undefined8 FUN_140f738fe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140f73918 FUN_140f73918 body=468 status=ok
// SIG undefined FUN_140f73918(void)

void FUN_140f73918(longlong *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_2[1] != 0) && (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar6 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_2[1])) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar8 = *plVar6, lVar8 != 0)))))) {
    lVar4 = FUN_1447210f0(lVar8);
    lVar5 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar4 == lVar5) {
      uVar1 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar3 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar3 = iVar7;
        }
      }
      lVar8 = CONCAT44(iVar3,uVar1);
      local_48 = lVar8;
      if ((longlong)(int)param_1[7] != 0) {
        lVar4 = param_1[6];
        lVar5 = (longlong)(int)param_1[7] << 4;
        do {
          cVar2 = FUN_140383372(lVar4,&local_48);
          if (cVar2 != '\0') {
            if (lVar4 != 0) goto LAB_140f73a61;
            break;
          }
          lVar4 = lVar4 + 0x10;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
      }
      iVar3 = (int)param_1[7];
      *(uint *)(param_1 + 7) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3c) < iVar3 + 1U) {
        FUN_1457d0f50(param_1 + 6,iVar3);
      }
      lVar4 = param_1[6];
      *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar8;
      *(uint **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = param_2;
      FUN_140f73aee(param_2,1);
    }
  }
LAB_140f73a61:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f73aee FUN_140f73aee body=416 status=ok
// SIG undefined FUN_140f73aee(void)

void FUN_140f73aee(uint *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar4 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == param_1[1])) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))))) {
    if (param_2 == '\0') {
      FUN_140457ffc(lVar2 + 0x300,param_1);
      FUN_140457ffc(lVar2 + 0x318,param_1);
      param_1[0xc] = 0;
      if (param_1[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_118);
      }
    }
    else {
      FUN_140f73d06(lVar2 + 0x300,local_f8,param_1,FUN_141086e06);
      FUN_140f73d06(lVar2 + 0x318,local_f8,param_1,FUN_141086b28);
      local_38 = (undefined1 *)0x0;
      local_30 = 0x1800000000;
      FUN_14024dbd6(lVar2,local_f8,1);
      puVar3 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar3 = local_f8;
      }
      lVar2 = (longlong)(int)local_30;
      if (lVar2 != 0) {
        lVar5 = 0;
        do {
          FUN_141086e06(param_1,*(undefined8 *)(puVar3 + lVar5));
          lVar5 = lVar5 + 8;
        } while (lVar2 * 8 != lVar5);
      }
      if (local_38 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f73ca6 FUN_140f73ca6 body=96 status=ok
// SIG undefined FUN_140f73ca6(void)

void FUN_140f73ca6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 140f73d06 FUN_140f73d06 body=604 status=ok
// SIG undefined FUN_140f73d06(void)

undefined8 * FUN_140f73d06(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  *local_50 = (longlong)&PTR_LAB_14a915ec0;
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
  *local_50 = (longlong)&PTR_FUN_14a914880;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140f73e67;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140f73e51;
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
LAB_140f73e51:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140f73e67:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f73f64 FUN_140f73f64 body=606 status=ok
// SIG undefined FUN_140f73f64(void)

void FUN_140f73f64(longlong param_1,uint *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((((param_2[1] != 0) && (uVar4 = *param_2, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc))
     && (((plVar8 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
          plVar8 != (longlong *)0x0 && (*(uint *)(plVar8 + 2) == param_2[1])) &&
         (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
    uVar4 = *(uint *)(*plVar8 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar2 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar2) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      if (*(int *)(lVar11 + 0x10) == 0) {
        *(int *)(lVar11 + 0x10) = iVar7;
      }
      UNLOCK();
    }
    FUN_140f73aee(param_2,0);
    iVar3 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar3 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      iVar7 = 1;
      lVar10 = 0;
      lVar5 = 0;
      do {
        if (*(uint **)(lVar11 + 8 + lVar10) == param_2) {
          if (iVar7 == 0) {
            return;
          }
          iVar7 = iVar3 - iVar7;
          if (iVar7 != 0) {
            iVar9 = 1;
            if (iVar7 < 1) {
              iVar9 = iVar7;
            }
            memmove((void *)((lVar5 >> 0x20) * 0x10 + lVar11),
                    (void *)((longlong)(iVar3 - iVar9) * 0x10 + lVar11),(longlong)iVar9 << 4);
            iVar3 = *(int *)(param_1 + 0x38);
          }
          *(int *)(param_1 + 0x38) = iVar3 + -1;
          plVar8 = *(longlong **)(param_1 + 0x48);
          do {
            if (plVar8 == (longlong *)0x0) {
              return;
            }
            lVar11 = *plVar8;
            iVar3 = *(int *)(lVar11 + 0x10);
            lVar5 = *(longlong *)(lVar11 + 8);
            lVar6 = (longlong)iVar3 * 0xb0;
            lVar10 = lVar5 + lVar6;
            do {
              if (lVar6 == 0) goto LAB_140f7415d;
              lVar6 = lVar6 + -0xb0;
              puVar1 = (undefined8 *)(lVar10 + -0xa8);
              lVar10 = lVar10 + -0xb0;
            } while ((uint *)*puVar1 != param_2);
            uVar4 = (int)(lVar6 >> 4) * -0x45d1745d;
            if (uVar4 != 0xffffffff) {
              iVar7 = ~uVar4 + iVar3;
              if (iVar7 != 0) {
                if (0 < iVar7) {
                  iVar7 = 1;
                }
                memmove((void *)((longlong)(int)uVar4 * 0xb0 + lVar5),
                        (void *)((longlong)(iVar3 - iVar7) * 0xb0 + lVar5),(longlong)iVar7 * 0xb0);
                iVar3 = *(int *)(lVar11 + 0x10);
              }
              *(int *)(lVar11 + 0x10) = iVar3 + -1;
              FUN_140f741c2(lVar11 + 8);
            }
LAB_140f7415d:
            plVar8 = (longlong *)plVar8[1];
          } while( true );
        }
        lVar5 = lVar5 + 0x100000000;
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)iVar3 << 4 != lVar10);
    }
  }
  return;
}



// FUNCTION 140f741c2 FUN_140f741c2 body=151 status=ok
// SIG undefined FUN_140f741c2(void)

void FUN_140f741c2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xb0)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xb0,0x10);
      uVar3 = uVar3 / 0xb0;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xb0,0x10);
    }
  }
  return;
}



// FUNCTION 140f7425a FUN_140f7425a body=1003 status=ok
// SIG undefined FUN_140f7425a(void)

void FUN_140f7425a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 local_9c [4];
  code *local_98;
  ulonglong *puStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140402d60();
  puStack_90 = &local_c0;
  local_98 = FUN_143d6deae;
  FUN_140f74f32(param_1);
  FUN_141189718(param_1 + 0x60,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_141189b3c(param_1 + 0x50,0);
  }
  FUN_1457d1c42(param_1 + 0x340);
  FUN_1457d1552(param_1 + 0x350);
  FUN_1457d16e2(param_1 + 0x360);
  FUN_1457d18ee(param_1 + 0x370);
  FUN_1457d1034(param_1 + 0x380);
  FUN_1457d1ddc(param_1 + 0x390);
  FUN_1457d114a(param_1 + 0x3a0);
  FUN_1457d1fd4(param_1 + 0x3b0);
  FUN_1457d2180(param_1 + 0x3c0);
  FUN_1457d231a(param_1 + 0x3d0);
  FUN_1457d1260(param_1 + 0x3e0);
  FUN_1457d24b4(param_1 + 0x3f0);
  FUN_1457d1ab2(param_1 + 0x400);
  FUN_1457d1490(param_1 + 0x410);
  FUN_1457d26e4(param_1 + 0x420);
  FUN_1457d1378(param_1 + 0x430);
  local_78 = 0;
  local_70 = 0;
  local_98 = (code *)0x0;
  puStack_90 = (ulonglong *)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar12 = *(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x19c);
  if (uVar12 != 0) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar12);
    }
    FUN_140395a1c(&local_98,uVar12);
    if (uVar12 < 4) {
      iVar6 = 1;
    }
    else {
      uVar12 = (uVar12 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_140395db0();
    }
  }
  lVar1 = param_1 + 0x178;
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  local_b8 = lVar1;
  if (*(int *)(param_1 + 400) == 0) {
    uVar13 = 1;
    local_b0._0_4_ = 0xffffffff;
    iVar6 = 0;
    local_b0._4_4_ = 0;
    local_c0._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_c0);
    uVar13 = local_c0 >> 0x20;
    iVar6 = *(int *)(param_1 + 400);
  }
  lVar5 = local_b8;
  plVar11 = (longlong *)(param_1 + 0x168);
  iVar9 = (int)local_c0;
  uVar12 = (uint)local_b0;
  iVar8 = local_b0._4_4_;
  iVar16 = local_a8;
  if (local_b0._4_4_ != iVar6 || local_b8 != lVar1) {
    do {
      lVar15 = *plVar11;
      lVar7 = (longlong)iVar8 * 0x38;
      if (-1 < *(short *)(lVar15 + 0x28 + lVar7)) {
        local_c0 = lVar15 + lVar7;
        local_b8 = lVar7 + lVar15 + 0x28;
        FUN_14039531e(&local_98,local_9c,&local_c0,0);
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      lVar15 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar15 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar7 = (longlong)iVar9;
      uVar10 = *(uint *)(lVar15 + lVar7 * 4) & uVar12;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar4 = iVar8;
        if (iVar8 < iVar9) {
          iVar4 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar14 = 0;
          do {
            uVar10 = *(uint *)(lVar15 + lVar7 * 4 + 4 + lVar14 * 4);
            if (uVar10 != 0) {
              iVar9 = iVar9 + (int)lVar14 + 1;
              uVar12 = 0xffffffff;
              goto LAB_140f7451b;
            }
            iVar16 = iVar16 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar4 - lVar7 != lVar14);
          uVar12 = 0xffffffff;
          iVar9 = iVar4;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar3;
      }
      else {
LAB_140f7451b:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar8 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar6 || lVar5 != lVar1);
  }
  FUN_1457d0fd6(plVar11,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140bd50c4(&local_98);
  FUN_140f74c52(plVar11);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f74646 FUN_140f74646 body=112 status=ok
// SIG undefined FUN_140f74646(void)

void FUN_140f74646(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f746b6 FUN_140f746b6 body=71 status=ok
// SIG undefined FUN_140f746b6(void)

undefined8 * FUN_140f746b6(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 140f746fd FUN_140f746fd body=112 status=ok
// SIG undefined FUN_140f746fd(void)

void FUN_140f746fd(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f7476d FUN_140f7476d body=146 status=ok
// SIG undefined FUN_140f7476d(void)

void FUN_140f7476d(longlong param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      *(undefined1 *)(puVar6 + -4) = *param_2;
      puVar6[-3] = *(undefined8 *)(param_2 + 8);
      uVar2 = *(undefined4 *)(param_2 + 0x14);
      uVar3 = *(undefined4 *)(param_2 + 0x18);
      uVar4 = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar2;
      *(undefined4 *)(puVar6 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar6 + -4) = uVar4;
      *puVar6 = 0;
      iVar1 = *(int *)(param_2 + 0x28);
      _Src = *(void **)(param_2 + 0x20);
      *(int *)(puVar6 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar6,iVar1,0);
        memcpy((void *)*puVar6,_Src,(longlong)iVar1 * 2);
      }
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      puVar6[2] = *(undefined8 *)(param_2 + 0x30);
      puVar6[3] = uVar5;
      param_2 = param_2 + 0x40;
      puVar6 = puVar6 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f747ff FUN_140f747ff body=134 status=ok
// SIG undefined FUN_140f747ff(void)

void FUN_140f747ff(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_2 + lVar3);
      *(undefined8 *)(param_1 + 8 + lVar3) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar3);
      uVar2 = *(undefined8 *)(param_2 + 8 + lVar3);
      *(int *)(param_1 + 0x10 + lVar3) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar3) = 0;
      }
      else {
        FUN_140f74a2a(param_1 + 8 + lVar3,iVar1);
        FUN_140f74885(*(undefined8 *)(param_1 + 8 + lVar3),uVar2,iVar1);
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f74885 FUN_140f74885 body=115 status=ok
// SIG undefined FUN_140f74885(void)

void FUN_140f74885(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = puVar2[-2];
    _Src = *(void **)(puVar2 + -4);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f748f8(param_1,iVar1);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
    *(undefined4 *)(param_1 + 2) = *puVar2;
    param_1 = param_1 + 3;
    puVar2 = puVar2 + 6;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140f748f8 FUN_140f748f8 body=306 status=ok
// SIG undefined FUN_140f748f8(void)

void FUN_140f748f8(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 4;
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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140f7495a;
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
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_140f7495a:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 2)) {
    uVar6 = uVar3 >> 2 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,4,2);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 140f74a2a FUN_140f74a2a body=323 status=ok
// SIG undefined FUN_140f74a2a(void)

undefined8 FUN_140f74a2a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140f74a90;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140f74a90:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x18)) {
    uVar8 = uVar5 / 0x18 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 140f74b6d FUN_140f74b6d body=109 status=ok
// SIG undefined FUN_140f74b6d(void)

void FUN_140f74b6d(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1405a6b3e(param_1,iVar1,0);
        FUN_1405a67a4(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f74bda FUN_140f74bda body=119 status=ok
// SIG undefined FUN_140f74bda(void)

void FUN_140f74bda(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1405a6a5a(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f74c52 FUN_140f74c52 body=734 status=ok
// SIG undefined FUN_140f74c52(void)

void FUN_140f74c52(longlong param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  int local_90;
  undefined1 local_88 [24];
  int local_70;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145c42aa2(&local_98,param_1);
  uVar12 = (longlong)local_90 - (longlong)local_64;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar14 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar14 + 0xc80);
  bVar4 = *pbVar2;
  if ((bVar4 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  uVar11 = (uint)uVar12;
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar12);
    }
    FUN_140395a1c(param_1,uVar12 & 0xffffffff);
    if (uVar11 < 4) {
      iVar9 = 1;
    }
    else {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar9 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      iVar9 = 1 << ((byte)iVar9 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar9)) {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_140395db0(param_1);
    }
  }
  if ((bVar4 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  local_b8 = local_88;
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  if (local_70 == 0) {
    uVar12 = 1;
    local_b0._0_4_ = 0xffffffff;
    local_70 = 0;
    local_b0._4_4_ = 0;
    local_c0._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_c0);
    uVar12 = local_c0 >> 0x20;
  }
  puVar8 = local_b8;
  if (local_b0._4_4_ != local_70 || local_b8 != local_88) {
    iVar9 = (int)local_c0;
    uVar11 = (uint)local_b0;
    iVar10 = local_b0._4_4_;
    iVar17 = local_a8;
    do {
      local_c0 = local_98 + (longlong)iVar10 * 0x38;
      local_b8 = (undefined1 *)((longlong)iVar10 * 0x38 + local_98 + 0x28);
      FUN_14039531e(param_1,local_9c,&local_c0,0);
      uVar11 = ~(uint)uVar12 & uVar11;
      puVar16 = *(undefined1 **)(puVar8 + 0x10);
      if (*(undefined1 **)(puVar8 + 0x10) == (undefined1 *)0x0) {
        puVar16 = puVar8;
      }
      iVar6 = *(int *)(puVar8 + 0x18);
      lVar14 = (longlong)iVar9;
      uVar13 = *(uint *)(puVar16 + lVar14 * 4) & uVar11;
      if (uVar13 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar7 = iVar10;
        if (iVar10 < iVar9) {
          iVar7 = iVar9;
        }
        if (iVar9 < iVar10) {
          lVar15 = 0;
          do {
            uVar13 = *(uint *)(puVar16 + lVar15 * 4 + lVar14 * 4 + 4);
            if (uVar13 != 0) {
              iVar9 = iVar9 + (int)lVar15 + 1;
              uVar11 = 0xffffffff;
              goto LAB_140f74e41;
            }
            iVar17 = iVar17 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar14 != lVar15);
          uVar11 = 0xffffffff;
          iVar9 = iVar7;
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar6;
      }
      else {
LAB_140f74e41:
        uVar12 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar10) {
          iVar10 = iVar6;
        }
      }
    } while (iVar10 != local_70 || puVar8 != local_88);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140bd50c4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f74f32 FUN_140f74f32 body=1800 status=ok
// SIG undefined FUN_140f74f32(void)

void FUN_140f74f32(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 auStack_128 [40];
  uint local_100;
  int local_fc;
  uint *local_f8;
  int local_ec;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c0 = param_2;
  cVar3 = (**(code **)(*param_1 + 0x300))();
  local_e8 = param_1;
  if (cVar3 == '\0') {
    local_e0 = param_1 + 0x5f;
    local_90 = (uint *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_e0;
    if ((int)param_1[0x62] == 0) {
      uVar13 = 1;
      local_100 = 0xffffffff;
      iVar17 = 0;
      iVar19 = 0;
      iVar4 = 0;
      local_d8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      local_d8 = (ulonglong)local_90 & 0xffffffff;
      uVar13 = (ulonglong)local_90 >> 0x20;
      local_100 = (uint)uStack_80;
      iVar17 = (int)param_1[0x62];
      iVar4 = uStack_80._4_4_;
      iVar19 = (uint)local_78;
    }
    plVar16 = local_88;
    lVar15 = local_78;
    if (iVar4 != iVar17 || local_88 != local_e0) {
      do {
        local_d0 = plVar16;
        local_fc = iVar17;
        lVar15 = *(longlong *)(param_1[0x5d] + 0x10 + (longlong)iVar4 * 0x20);
        local_ec = iVar19;
        local_c8 = uVar13;
        if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x30) != 0)) {
          local_f8 = (uint *)(lVar15 + 0x80);
          iVar17 = *(int *)(lVar15 + 0x98);
          if (iVar17 == 0) {
            uVar13 = 1;
            uVar14 = 0;
            iVar4 = 0;
            iVar19 = 0;
          }
          else {
            puVar5 = *(uint **)(lVar15 + 0x90);
            if (*(uint **)(lVar15 + 0x90) == (uint *)0x0) {
              puVar5 = local_f8;
            }
            uVar12 = *puVar5;
            if (uVar12 == 0) {
              iVar4 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar4 = iVar17 + -1;
              }
              uVar14 = 0;
              uVar13 = (ulonglong)(uint)(iVar4 >> 5);
              if (iVar4 >> 5 < 1) {
                uVar13 = uVar14;
              }
              iVar19 = 0;
              do {
                if (uVar13 == uVar14) goto LAB_140f751d0;
                iVar19 = iVar19 + 0x20;
                uVar12 = puVar5[uVar14 + 1];
                uVar14 = uVar14 + 1;
              } while (uVar12 == 0);
            }
            else {
              uVar14 = 0;
              iVar19 = 0;
            }
            uVar13 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar13 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar4 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar4) {
              iVar4 = iVar17;
            }
          }
          if (iVar4 != iVar17) {
            uVar12 = 0xffffffff;
            do {
              plVar16 = *(longlong **)
                         (*(longlong *)
                           (*(longlong *)(lVar15 + 0x70) + 0x10 + (longlong)iVar4 * 0x20) + 0x30);
              if (plVar16 != (longlong *)0x0) {
                lVar6 = (**(code **)(*plVar16 + 8))(plVar16);
                lVar7 = FUN_14012344a();
                if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                    lVar7 + 0x30)) {
                  (*(code *)*local_c0)(local_c0[1],plVar16);
                }
              }
              uVar12 = uVar12 & ~(uint)uVar13;
              puVar5 = *(uint **)(lVar15 + 0x90);
              if (*(uint **)(lVar15 + 0x90) == (uint *)0x0) {
                puVar5 = local_f8;
              }
              iVar10 = *(int *)(lVar15 + 0x98);
              iVar4 = (int)uVar14;
              lVar6 = (longlong)iVar4;
              uVar11 = puVar5[lVar6] & uVar12;
              if (uVar11 == 0) {
                iVar8 = iVar10 + 0x1e;
                if (-1 < iVar10 + -1) {
                  iVar8 = iVar10 + -1;
                }
                iVar8 = iVar8 >> 5;
                iVar19 = iVar19 + 0x20;
                iVar9 = iVar8;
                if (iVar8 < iVar4) {
                  iVar9 = iVar4;
                }
                if (iVar4 < iVar8) {
                  lVar7 = 0;
                  do {
                    uVar11 = puVar5[lVar6 + lVar7 + 1];
                    if (uVar11 != 0) {
                      uVar14 = (ulonglong)(iVar4 + (int)lVar7 + 1);
                      uVar12 = 0xffffffff;
                      goto LAB_140f751a3;
                    }
                    iVar19 = iVar19 + 0x20;
                    lVar7 = lVar7 + 1;
                  } while (iVar9 - lVar6 != lVar7);
                  uVar12 = 0xffffffff;
                  iVar4 = iVar9;
                }
                uVar14 = (ulonglong)(iVar4 + 1);
                iVar4 = iVar10;
              }
              else {
LAB_140f751a3:
                uVar13 = (ulonglong)(-uVar11 & uVar11);
                uVar1 = uVar13 * 2 + 1;
                lVar6 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                iVar4 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                if (iVar10 <= iVar4) {
                  iVar4 = iVar10;
                }
              }
            } while (iVar4 != iVar17);
          }
        }
LAB_140f751d0:
        local_100 = local_100 & ~(uint)local_c8;
        plVar16 = (longlong *)local_d0[2];
        if ((longlong *)local_d0[2] == (longlong *)0x0) {
          plVar16 = local_d0;
        }
        iVar17 = (int)local_d0[3];
        iVar4 = (int)local_d8;
        lVar15 = (longlong)iVar4;
        uVar12 = *(uint *)((longlong)plVar16 + lVar15 * 4) & local_100;
        iVar19 = local_ec;
        if (uVar12 == 0) {
          iVar10 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar10 = iVar17 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar19 = local_ec + 0x20;
          iVar8 = iVar10;
          if (iVar10 < iVar4) {
            iVar8 = iVar4;
          }
          if (iVar4 < iVar10) {
            lVar6 = 0;
            do {
              uVar12 = *(uint *)((longlong)plVar16 + lVar6 * 4 + lVar15 * 4 + 4);
              if (uVar12 != 0) {
                local_d8 = (ulonglong)(iVar4 + (int)lVar6 + 1);
                local_100 = 0xffffffff;
                goto LAB_140f75262;
              }
              iVar19 = iVar19 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar8 - lVar15 != lVar6);
            local_100 = 0xffffffff;
            iVar4 = iVar8;
          }
          local_d8 = (ulonglong)(iVar4 + 1);
          uVar13 = local_c8;
          iVar4 = iVar17;
        }
        else {
LAB_140f75262:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar14 = uVar13 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar4 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar4) {
            iVar4 = iVar17;
          }
        }
        param_1 = local_e8;
        iVar17 = local_fc;
        plVar16 = local_d0;
        lVar15 = local_78;
      } while (iVar4 != local_fc || local_d0 != local_e0);
    }
  }
  else {
    local_f8 = (uint *)(param_1 + 0x3f);
    plVar16 = param_1 + 0x41;
    local_b8 = (longlong *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    uStack_b0 = plVar16;
    if ((int)param_1[0x44] == 0) {
      iVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar17 = (int)local_e8[0x44];
    }
    local_78 = local_a8;
    lVar15 = local_78;
    uStack_70 = uStack_a0;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    local_90 = local_f8;
    local_78._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    if ((local_78._4_4_ != iVar17) || (uStack_b0 != plVar16)) {
      iVar4 = local_78._4_4_;
      local_78 = lVar15;
      do {
        lVar6 = *(longlong *)local_90;
        lVar15 = lVar6 + (longlong)iVar4 * 0x70;
        lVar7 = lVar15 + 0x28;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = lVar7;
        if (*(int *)(lVar15 + 0x40) != 0) {
          FUN_1449c0562(&local_68);
        }
        lVar6 = lVar6 + (longlong)iVar4 * 0x70;
        plVar18 = (longlong *)(lVar6 + 0x18);
        uStack_a0 = local_58;
        local_98 = local_50;
        local_94 = local_4c;
        uStack_b0 = local_68;
        local_a8 = local_60;
        uVar12 = *(uint *)(lVar6 + 0x40);
        local_68 = (longlong *)CONCAT44(1 << ((byte)uVar12 & 0x1f),(int)uVar12 >> 5);
        local_58 = CONCAT44(uVar12,-1 << ((byte)uVar12 & 0x1f));
        local_50 = uVar12 & 0xffffffe0;
        local_b8 = plVar18;
        local_60 = lVar7;
        if (*(uint *)(lVar6 + 0x40) != uVar12) {
          FUN_1449c0562(&local_68);
          uVar12 = local_58._4_4_;
        }
        lVar15 = local_60;
        while (((uStack_a0._4_4_ != uVar12 || (local_a8 != lVar15)) || (local_b8 != plVar18))) {
          plVar2 = *(longlong **)(*local_b8 + 0x10 + (longlong)(int)uStack_a0._4_4_ * 0x20);
          if (plVar2 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar2 + 8))(plVar2);
            lVar7 = FUN_14012344a();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              (*(code *)*local_c0)(local_c0[1],plVar2);
            }
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        lVar15 = local_78;
      } while (local_90 != local_f8 || (uStack_80 != plVar16 || local_78._4_4_ != iVar17));
    }
  }
  local_78 = lVar15;
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f7565e FUN_140f7565e body=346 status=ok
// SIG undefined FUN_140f7565e(void)

void FUN_140f7565e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  char local_78 [16];
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1 + 0x108;
  lVar7 = *(longlong *)(param_1 + 0x248);
  if (*(longlong *)(param_1 + 0x248) == 0) {
    lVar7 = lVar2;
  }
  if ((longlong)*(int *)(param_1 + 0x250) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x250) << 6;
    uVar5 = 0;
    do {
      local_78[0] = '\0';
      local_50[0] = 0;
      FUN_1456bb102(local_78,param_2);
      cVar4 = FUN_140308e2a(lVar7,local_78);
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
      if (cVar4 != '\0') {
        if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x250))) {
          lVar7 = *(longlong *)(param_1 + 0x248);
          if (*(longlong *)(param_1 + 0x248) == 0) {
            lVar7 = lVar2;
          }
          lVar6 = (ulonglong)(uVar5 & 0x7fffffff) * 0x40;
          plVar3 = *(longlong **)(lVar7 + 0x30 + lVar6);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x20))();
            FUN_14053d96a(lVar7 + lVar6 + 0x30);
          }
          FUN_140f75858(lVar2,uVar5);
          FUN_140f757ba(lVar2);
        }
        break;
      }
      lVar7 = lVar7 + 0x40;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


