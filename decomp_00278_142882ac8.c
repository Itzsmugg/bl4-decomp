// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142882ac8 FUN_142882ac8 body=1688 status=ok
// SIG undefined FUN_142882ac8(void)

void FUN_142882ac8(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  short sVar16;
  float fVar17;
  undefined8 in_stack_fffffffffffffe00;
  undefined4 uVar18;
  undefined1 local_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_130;
  undefined8 local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  int local_e4;
  undefined1 local_e0 [4];
  int local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [24];
  longlong *local_b0;
  longlong local_a8 [6];
  longlong local_78 [2];
  longlong *local_68;
  undefined **local_60;
  undefined1 local_52;
  undefined1 local_51;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_1[6] != 0) {
    return;
  }
  QueryPerformanceCounter((LARGE_INTEGER *)&local_1b8);
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  local_68 = (longlong *)CONCAT44(local_68._4_4_,param_2);
  if (iVar1 == 8) {
    FUN_1415d7a80();
    local_4c = 1;
    if (0 < param_1[3]) {
      lVar8 = 0;
      do {
        fVar17 = (float)*(byte *)(param_1[2] + lVar8) / 255.0;
        if ((uint)fVar17 < 0x47800000) {
          if ((uint)fVar17 < 0x38800000) {
            sVar16 = SUB42(fVar17 + 0.5,0);
          }
          else {
            sVar16 = (short)((int)fVar17 + 0x8000fff + (uint)(((uint)fVar17 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          sVar16 = (0x7f800000 < (uint)fVar17 | 0x3e) << 9;
        }
        *(short *)(local_a8[2] + lVar8 * 2) = sVar16;
        lVar8 = lVar8 + 1;
      } while (lVar8 < param_1[3]);
    }
  }
  else {
    local_4c = (iVar1 != 0x10) + 1;
  }
  plVar3 = local_a8;
  if (iVar1 != 8) {
    plVar3 = param_1;
  }
  bVar2 = true;
  switch((char)param_1[8]) {
  case '\0':
  case '\x03':
    local_60 = &PTR_DAT_149ef5220;
    break;
  case '\x01':
    local_60 = &PTR_DAT_149ef5240;
    break;
  case '\x02':
  case '\x05':
    local_50 = 1;
    local_60 = &PTR_DAT_149ef5260;
    goto LAB_142882c74;
  default:
    local_60 = (undefined **)0x0;
    bVar2 = false;
    local_50 = 0;
    goto LAB_142882c74;
  }
  local_50 = 4;
LAB_142882c74:
  bVar15 = local_4c != 1;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_146989274();
  local_b0 = param_1 + 5;
  local_a8[5] = (ulonglong)(local_4c != 1) + 1;
  for (uVar14 = 0; uVar14 < local_50; uVar14 = uVar14 + 1) {
    FUN_1415d7a80((ulonglong)uVar14 * 0x18 + local_78[0]);
  }
  plVar4 = param_1;
  if (iVar1 == 8) {
    plVar4 = local_a8;
  }
  lVar8 = plVar4[3];
  uVar13 = (ulonglong)((uint)bVar15 * 2 + 2);
  if (0 < lVar8) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      if (bVar2) {
        uVar12 = 0;
        uVar10 = uVar13;
        lVar8 = lVar11;
        do {
          do {
            *(undefined1 *)(*(longlong *)(local_78[0] + uVar12 * 0x18) + lVar8) =
                 *(undefined1 *)(plVar3[2] + lVar9);
            lVar9 = lVar9 + 1;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 1;
          } while (uVar10 != 0);
          uVar12 = uVar12 + 1;
          uVar10 = uVar13;
          lVar8 = lVar11;
        } while (uVar12 != local_50 + (local_50 == 0));
        lVar8 = plVar4[3];
      }
      lVar11 = lVar11 + uVar13;
    } while (lVar9 < lVar8);
  }
  local_1b8 = 0;
  puVar6 = &local_1b8;
  uVar5 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe00 >> 0x20),0x3f800000);
  FUN_144b66f80(local_c8,(int)param_1[9],(int)param_1[10],0x3f800000,puVar6,uVar5,0,
                ((int)local_68 != 1) * '\x03');
  local_a8[1] = 0;
  local_68 = param_1;
  local_a8[0] = FUN_14001cc68(0x158,0x10);
  *(longlong *)local_a8[0] = local_a8[0];
  *(longlong *)(local_a8[0] + 8) = local_a8[0];
  *(longlong *)(local_a8[0] + 0x10) = local_a8[0];
  *(undefined2 *)(local_a8[0] + 0x18) = 0x101;
  for (uVar14 = 0; uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20), uVar14 < local_50;
      uVar14 = uVar14 + 1) {
    uVar5 = FUN_144b67b60(local_c8);
    FUN_144b65b80(&local_1b8,local_4c,1,1,(ulonglong)puVar6 & 0xffffffffffffff00);
    uVar10 = (ulonglong)uVar14;
    FUN_144b65ba0(uVar5,local_60[uVar10],&local_1b8);
    puVar6 = (undefined8 *)(local_68[9] << ((byte)local_a8[5] & 0x3f));
    uVar5 = CONCAT44(uVar18,1);
    FUN_144b72800(&local_1b8,local_4c,*(undefined8 *)(local_78[0] + uVar10 * 0x18),uVar13,puVar6,
                  uVar5,1,0,0,0);
    FUN_144b72840(local_a8,local_60[uVar10],&local_1b8);
  }
  pdVar7 = (double *)FUN_14029dc1a();
  local_1b8._4_4_ = (float)pdVar7[1];
  local_1b8._0_4_ = (float)*pdVar7;
  local_130 = (undefined **)CONCAT44((float)pdVar7[3],(float)pdVar7[2]);
  local_d4 = (float)pdVar7[5];
  local_d8 = (float)pdVar7[4];
  local_cc = (float)pdVar7[7];
  local_d0 = (float)pdVar7[6];
  FUN_144b66ad0(local_1d8,&local_1b8,&local_130,&local_d8,&local_d0);
  FUN_144b73560(local_c8,local_1d8);
  FUN_144b6b960(&local_130);
  local_130 = &PTR_FUN_149ef63a0;
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  if (DAT_14c8c27ac < 1) {
    memset(&local_1b8,0,0x82);
    local_d8 = 0.0;
    local_d0 = 0.0;
    local_e4 = 0;
    FUN_140e55932(&local_1b8,&local_d8,&local_d0,&local_e4);
    iVar1 = local_e4;
    FUN_1457b80ec(local_d0,local_e4,&local_52,local_e0,&local_dc,&local_51);
    DAT_14c8c27ac = iVar1;
    if ((0 < local_dc) && (DAT_14c8c27ac = iVar1, local_dc <= iVar1)) {
      DAT_14c8c27ac = local_dc;
    }
  }
  FUN_144b6db20(&local_1b8,&local_130,local_c8,DAT_14c8c27ac);
  plVar4 = local_68;
  plVar3 = local_b0;
  FUN_144b6de50(&local_1b8,local_a8);
  FUN_144b6e3c0(&local_1b8,(int)plVar4[10]);
  uVar5 = local_108;
  FUN_144b6dca0(&local_1b8);
  if (plVar3 != &lStack_100) {
    if (plVar4[5] != 0) {
      FUN_1400020a8();
    }
    plVar4[5] = lStack_100;
    lStack_100 = 0;
    plVar4[6] = local_f8;
    plVar4[7] = lStack_f0;
    local_f8 = 0;
    lStack_f0 = 0;
  }
  FUN_1467ac1d6(plVar3,uVar5,1);
  QueryPerformanceCounter((LARGE_INTEGER *)&local_1b8);
  FUN_1469892f6(&local_130);
  FUN_14698d1ae(local_a8,local_a8,*(undefined8 *)(local_a8[0] + 8));
  FUN_1400020a8(local_a8[0]);
  FUN_144b67220(local_c8);
  FUN_146989324(local_78);
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142883160 Unwind@142883160 body=55 status=ok
// SIG undefined Unwind@142883160(void)

void Unwind_142883160(undefined8 param_1,longlong param_2)

{
  FUN_144b6dca0(param_2 + 0x70);
  return;
}



// FUNCTION 142883198 Unwind@142883198 body=55 status=ok
// SIG undefined Unwind@142883198(void)

void Unwind_142883198(undefined8 param_1,longlong param_2)

{
  FUN_1469892f6(param_2 + 0xf8);
  return;
}



// FUNCTION 1428831d0 Unwind@1428831d0 body=91 status=ok
// SIG undefined Unwind@1428831d0(void)

void Unwind_1428831d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_2 + 0x180);
  FUN_14698d1ae(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  FUN_1400020a8(*plVar1);
  FUN_144b67220(param_2 + 0x160);
  return;
}



// FUNCTION 14288322c Unwind@14288322c body=58 status=ok
// SIG undefined Unwind@14288322c(void)

void Unwind_14288322c(undefined8 param_1,longlong param_2)

{
  FUN_146989324(param_2 + 0x1b0);
  return;
}



// FUNCTION 142883266 Unwind@142883266 body=63 status=ok
// SIG undefined Unwind@142883266(void)

void Unwind_142883266(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 400) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1428832a6 FUN_1428832a6 body=1684 status=ok
// SIG undefined FUN_1428832a6(void)

void FUN_1428832a6(longlong param_1,char param_2,int param_3)

{
  float fVar1;
  ushort uVar2;
  char *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  undefined *puVar19;
  ushort uVar20;
  longlong lVar21;
  sbyte sVar22;
  uint uVar23;
  float fVar24;
  undefined1 local_280 [56];
  longlong local_248;
  undefined8 uStack_240;
  undefined1 local_130 [24];
  longlong local_118;
  longlong local_110;
  char *local_108;
  longlong *local_100;
  longlong local_f8 [3];
  char *pcStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [2];
  int local_a4;
  int local_a0;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  uint local_80;
  int local_7c;
  longlong local_78;
  char local_69;
  undefined8 local_68;
  
  local_68 = 0xfffffffffffffffe;
  if (((*(longlong *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x40) == param_2)) &&
     (*(int *)(param_1 + 0x44) == param_3)) {
    return;
  }
  local_98 = 0;
  uStack_90 = 0;
  if (param_3 != 0x10) {
    if ((param_3 != 0x20) || ((param_2 != '\x03' && (param_2 != '\x05')))) {
switchD_142883325_caseD_1:
      FUN_14020fad6();
    }
    iVar8 = (int)uStack_90;
LAB_1428833b5:
    if (iVar8 < 2) {
switchD_142883325_caseD_3:
      local_f8[2] = 0;
      pcStack_e0 = (char *)0x0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_78 = param_1;
      local_7c = param_3;
      local_69 = param_2;
      if (param_2 == '\x05') {
        local_f8[0] = **(longlong **)(param_1 + 0x68);
        uVar16 = 1;
      }
      else {
        local_248 = 0;
        uStack_240 = 0;
        iVar8 = *(int *)(param_1 + 0x70);
        if (iVar8 < 1) {
          uStack_240._0_4_ = 0;
        }
        else {
          lVar21 = 0;
          do {
            pcVar3 = *(char **)(*(longlong *)(param_1 + 0x68) + lVar21 * 8);
            sVar11 = strlen(pcVar3);
            iVar6 = toupper((int)pcVar3[sVar11 - 1]);
            lVar13 = 0;
            do {
              if (((char)iVar6 == (&DAT_149ef548e)[lVar13]) && (local_f8[lVar13] == 0)) {
                local_f8[lVar13] = (longlong)pcVar3;
                goto LAB_1428834d2;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 != 4);
            if (pcVar3 != (char *)0x0) {
              iVar8 = (int)uStack_240;
              uVar16 = (int)uStack_240 + 1;
              uStack_240 = CONCAT44(uStack_240._4_4_,uVar16);
              if (uStack_240._4_4_ < uVar16) {
                FUN_140ca86cc(&local_248);
              }
              *(char **)(local_248 + (longlong)iVar8 * 8) = pcVar3;
              iVar8 = *(int *)(param_1 + 0x70);
            }
LAB_1428834d2:
            lVar21 = lVar21 + 1;
          } while (lVar21 < iVar8);
        }
        param_3 = local_7c;
        lVar21 = 0;
        iVar8 = (int)uStack_240;
        do {
          if (*(longlong *)((longlong)local_f8 + lVar21 * 2) == 0) {
            if (iVar8 == 0) {
              puVar19 = &DAT_149ef54bc + *(int *)(&DAT_149ef54bc + lVar21);
              iVar8 = 0;
            }
            else {
              puVar19 = *(undefined **)(local_248 + -8 + (longlong)iVar8 * 8);
              iVar8 = iVar8 + -1;
              uStack_240 = CONCAT44(uStack_240._4_4_,iVar8);
            }
            *(undefined **)((longlong)local_f8 + lVar21 * 2) = puVar19;
          }
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x10);
        if (local_248 != 0) {
          FUN_1400020a8();
        }
        uVar16 = 4;
      }
      local_c8 = (longlong *)0x0;
      uStack_c0 = 0;
      FUN_146989274(&local_c8,uVar16);
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[0] = FUN_14001cc68(0x158,0x10);
      *(longlong *)local_b8[0] = local_b8[0];
      *(longlong *)(local_b8[0] + 8) = local_b8[0];
      *(longlong *)(local_b8[0] + 0x10) = local_b8[0];
      *(undefined2 *)(local_b8[0] + 0x18) = 0x101;
      FUN_1469891cc(&local_248,*(undefined8 *)(local_78 + 0x28),*(undefined8 *)(local_78 + 0x30));
      uVar7 = FUN_144b73940();
      FUN_144b6ba40(local_d8,&local_248,uVar7);
      local_80 = uVar16;
      uVar9 = FUN_144b6bd10(local_d8);
      FUN_144b670b0(local_130,uVar9);
      piVar10 = (int *)FUN_144b67b00(local_130);
      local_100 = (longlong *)(local_78 + 0x10);
      local_a4 = (param_3 != 0x10) + 1;
      local_118 = (ulonglong)(param_3 != 0x10) * 2 + 2;
      local_110 = (longlong)*piVar10;
      local_a0 = piVar10[1];
      local_9c = piVar10[3];
      sVar22 = (local_7c != 0x10) + 1;
      local_108 = pcStack_e0;
      lVar21 = (longlong)local_a0;
      for (uVar16 = 0; uVar16 < local_80; uVar16 = uVar16 + 1) {
        uVar14 = (ulonglong)uVar16;
        FUN_1415d7a80(local_c8 + uVar14 * 3,
                      (*(longlong *)(local_78 + 0x48) << sVar22) * *(longlong *)(local_78 + 0x50),1)
        ;
        pcVar3 = local_108;
        uVar23 = 0;
        if (uVar16 == 3) {
          sVar11 = strlen(local_108);
          iVar8 = toupper((int)pcVar3[sVar11 - 1]);
          uVar23 = 0x3ff00000;
          if (iVar8 != 0x41) {
            uVar23 = 0;
          }
        }
        FUN_144b72800(local_280,local_a4,
                      local_c8[uVar14 * 3] -
                      (*(longlong *)(local_78 + 0x48) * lVar21 + local_110 << sVar22),local_118,
                      *(longlong *)(local_78 + 0x48) << sVar22,1,1,(ulonglong)uVar23 << 0x20,0,0);
        FUN_144b72840(local_b8,local_f8[uVar14],local_280);
      }
      FUN_144b6bd20(local_d8,local_b8);
      FUN_144b6c2d0(local_d8,local_a0,local_9c);
      FUN_144b67220(local_130);
      FUN_144b6bc50(local_d8);
      FUN_144b6b720(&local_248);
      FUN_14698d1ae(local_b8,local_b8,*(undefined8 *)(local_b8[0] + 8));
      FUN_1400020a8(local_b8[0]);
      uVar16 = local_80;
      plVar4 = local_100;
      lVar21 = (*(longlong *)(local_78 + 0x48) << sVar22) * *(longlong *)(local_78 + 0x50);
      uVar17 = (ulonglong)local_80;
      FUN_1415d7a80(local_100,lVar21 * uVar17);
      cVar5 = local_69;
      iVar8 = local_7c;
      uVar14 = 0;
      plVar12 = local_c8;
      do {
        (&local_248)[uVar14] = *plVar12;
        uVar14 = uVar14 + 1;
        plVar12 = plVar12 + 3;
      } while (uVar17 != uVar14);
      if (iVar8 == 0x10) {
        if (0 < lVar21) {
          lVar13 = *plVar4;
          lVar15 = 0;
          do {
            uVar14 = 0;
            do {
              uVar2 = *(ushort *)(*(longlong *)((longlong)&local_248 + uVar14 * 4) + lVar15);
              uVar20 = 0xfbff;
              if (uVar2 != 0xfc00) {
                uVar20 = 0;
              }
              if (uVar2 == 0x7c00) {
                uVar20 = 0x7bff;
              }
              if ((~uVar2 & 0x7c00) != 0) {
                uVar20 = uVar2;
              }
              *(ushort *)(lVar13 + uVar14) = uVar20;
              uVar14 = uVar14 + 2;
            } while (uVar16 * 2 != uVar14);
            lVar15 = lVar15 + 2;
            lVar13 = lVar13 + uVar14;
          } while (lVar15 < lVar21);
        }
      }
      else if (0 < lVar21) {
        lVar13 = *plVar4;
        lVar15 = 0;
        do {
          uVar14 = 0;
          do {
            fVar1 = *(float *)(*(longlong *)((longlong)&local_248 + uVar14 * 2) + lVar15);
            fVar24 = fVar1;
            if ((3.4028235e+38 < ABS(fVar1)) && (fVar24 = 3.4028235e+38, fVar1 <= 3.4028235e+38)) {
              fVar24 = (float)(-(uint)(fVar1 < -3.4028235e+38) & 0xff7fffff);
            }
            *(float *)(lVar13 + uVar14) = fVar24;
            uVar14 = uVar14 + 4;
          } while (uVar16 << 2 != uVar14);
          lVar15 = lVar15 + 4;
          lVar13 = lVar13 + uVar14;
        } while (lVar15 < lVar21);
      }
      *(char *)(local_78 + 0x40) = cVar5;
      *(int *)(local_78 + 0x44) = iVar8;
      FUN_146989324(&local_c8);
    }
    else {
      FUN_14020fad6(param_1 + 0x58,local_98);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    return;
  }
  switch(param_2) {
  case '\0':
  case '\x02':
    pwVar18 = L"Gray";
    if (param_2 == '\0') {
      pwVar18 = L"RGBA";
    }
    FUN_140002266(&local_248,
                  L"Usage of 16-bit ERGBFormat::%s raw format for decompressing float EXR channels is deprecated, please use ERGBFormat::%sF instead."
                  ,pwVar18,pwVar18);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_98 = local_248;
    uStack_90 = uStack_240;
    iVar8 = (int)uStack_240;
    goto LAB_1428833b5;
  default:
    goto switchD_142883325_caseD_1;
  case '\x03':
  case '\x05':
    goto switchD_142883325_caseD_3;
  }
}



// FUNCTION 14288393a Unwind@14288393a body=69 status=ok
// SIG undefined Unwind@14288393a(void)

void Unwind_14288393a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142883980 Unwind@142883980 body=67 status=ok
// SIG undefined Unwind@142883980(void)

void Unwind_142883980(undefined8 param_1,longlong param_2)

{
  FUN_144b67220(param_2 + 0x1a8);
  return;
}



// FUNCTION 1428839c4 Unwind@1428839c4 body=67 status=ok
// SIG undefined Unwind@1428839c4(void)

void Unwind_1428839c4(undefined8 param_1,longlong param_2)

{
  FUN_144b6bc50(param_2 + 0x200);
  return;
}



// FUNCTION 142883a08 Unwind@142883a08 body=64 status=ok
// SIG undefined Unwind@142883a08(void)

void Unwind_142883a08(undefined8 param_1,longlong param_2)

{
  FUN_144b6b720(param_2 + 0x90);
  return;
}



// FUNCTION 142883a48 Unwind@142883a48 body=88 status=ok
// SIG undefined Unwind@142883a48(void)

void Unwind_142883a48(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_2 + 0x220);
  FUN_14698d1ae(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 142883aa0 Catch@142883aa0 body=127 status=ok
// SIG undefined Catch@142883aa0(void)

undefined8 Catch_142883aa0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x278) + 8))();
  FUN_144a81018(param_2 + 0x90,uVar1);
  FUN_14020fad6(*(longlong *)(param_2 + 0x260) + 0x58,*(undefined8 *)(param_2 + 0x198));
  if (*(longlong *)(param_2 + 400) != 0) {
    FUN_1400020a8();
  }
  return 0x142883929;
}



// FUNCTION 142883b20 Unwind@142883b20 body=67 status=ok
// SIG undefined Unwind@142883b20(void)

void Unwind_142883b20(undefined8 param_1,longlong param_2)

{
  FUN_146989324(param_2 + 0x210);
  return;
}



// FUNCTION 142883b64 Unwind@142883b64 body=72 status=ok
// SIG undefined Unwind@142883b64(void)

void Unwind_142883b64(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x240) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142883bac FUN_142883bac body=1324 status=ok
// SIG undefined FUN_142883bac(void)

ulonglong FUN_142883bac(longlong param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char acVar5 [16];
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char local_188;
  undefined2 uStack_187;
  int iStack_185;
  undefined4 uStack_181;
  undefined1 auStack_17d [12];
  uint local_88;
  undefined1 local_84 [4];
  longlong *local_80;
  undefined4 local_78;
  uint local_70;
  undefined1 local_6c [4];
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (10 < *(longlong *)(param_1 + 0x18)) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x10);
    lVar10 = *(longlong *)*pauVar1;
    uVar7 = *(longlong *)(param_1 + 0x18) + lVar10;
    uVar9 = 0;
    while (cVar6 = *(char *)(lVar10 + uVar9), cVar6 != '\0') {
      if (cVar6 == '\n') {
        (&local_188)[uVar9] = '\0';
        if (((CONCAT44(uStack_181,iStack_185) == 0x45434e41494441 &&
              CONCAT17((undefined1)uStack_181,CONCAT43(iStack_185,CONCAT21(uStack_187,local_188)))
              == 0x4e41494441523f23) ||
            (iStack_185 == 0x454247 &&
             CONCAT13((undefined1)iStack_185,CONCAT21(uStack_187,local_188)) == 0x47523f23)) &&
           (uVar9 = lVar10 + uVar9 + 1, uVar9 < uVar7)) {
          bVar8 = false;
          goto LAB_142883ca8;
        }
        break;
      }
      (&local_188)[uVar9] = cVar6;
      if ((0xfe < uVar9) || (uVar11 = lVar10 + 1 + uVar9, uVar9 = uVar9 + 1, uVar7 <= uVar11))
      break;
    }
  }
  goto LAB_142883be8;
LAB_142883d57:
  cVar6 = *(char *)(uVar11 + uVar9 + 1 + uVar12);
  if (cVar6 == '\0') goto LAB_142883be8;
  if (cVar6 == '\n') {
    (&local_188)[uVar12] = '\0';
    cVar6 = FUN_14698951a(&local_188,&local_70,&local_88);
    if ((int)local_88 < 1 || ((int)local_70 < 1 || cVar6 != '\x01')) {
      FUN_1400b22c2(&local_58,&local_188);
      local_68 = L"InvalidSizeError";
      local_60 = 0x10;
      FUN_1446e940c(local_6c,&local_68);
      local_68 = L"HdrImageWrapper";
      local_60 = 0xf;
      FUN_1446e940c(local_84,&local_68);
      local_68 = L"The HDR image specifies an invalid size.";
      local_60 = 0x28;
      FUN_140208c1e(&local_80,local_84,local_6c,&local_68);
      plVar3 = *(longlong **)(param_1 + 0x68);
      if (plVar3 != local_80) {
        *(longlong **)(param_1 + 0x68) = local_80;
        if (local_80 != (longlong *)0x0) {
          (**(code **)(*local_80 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(param_1 + 0x70) = local_78;
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *pauVar1 = (undefined1  [16])0x0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_140d2d4a8(param_1 + 0x28,0);
      }
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x58) = (ulonglong)local_70;
      *(ulonglong *)(param_1 + 0x60) = (ulonglong)local_88;
      *(ulonglong *)(param_1 + 0x20) = uVar9 + uVar11 + uVar12 + 2;
      uVar7 = CONCAT71((int7)((ulonglong)&local_70 >> 8),1);
      if ((int)((ulonglong)local_88 * (ulonglong)local_70 >> 0x20) == 0) goto LAB_142883bf2;
      local_68 = L"ImpossibleImport";
      local_60 = 0x10;
      FUN_1446e940c(&local_80,&local_68);
      local_68 = L"HdrImageWrapper";
      local_60 = 0xf;
      FUN_1446e940c(local_6c,&local_68);
      local_68 = L"Image dimensions are not possible to import";
      local_60 = 0x2b;
      FUN_140208c1e(&local_58,local_6c,&local_80,&local_68);
      plVar3 = *(longlong **)(param_1 + 0x68);
      if (plVar3 != local_58) {
        *(longlong **)(param_1 + 0x68) = local_58;
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(param_1 + 0x70) = local_50;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    goto LAB_142883bf0;
  }
  (&local_188)[uVar12] = cVar6;
  if ((0xfe < uVar12) || (uVar2 = uVar9 + uVar11 + 2 + uVar12, uVar12 = uVar12 + 1, uVar7 <= uVar2))
  goto LAB_142883be8;
  goto LAB_142883d57;
LAB_142883ca8:
  do {
    uVar11 = 0;
    while( true ) {
      cVar6 = *(char *)(uVar9 + uVar11);
      if (cVar6 == '\0') goto LAB_142883be8;
      if (cVar6 == '\n') break;
      (&local_188)[uVar11] = cVar6;
      if ((0xfe < uVar11) || (uVar12 = uVar9 + 1 + uVar11, uVar11 = uVar11 + 1, uVar7 <= uVar12))
      goto LAB_142883be8;
    }
    (&local_188)[uVar11] = '\0';
    if (local_188 == '\0') {
      if ((bVar8) && (uVar9 + uVar11 + 1 < uVar7)) {
        uVar12 = 0;
        goto LAB_142883d57;
      }
      break;
    }
    uVar9 = uVar9 + uVar11 + 1;
    cVar6 = 'F';
    lVar10 = 0;
    do {
      if ((&local_188)[lVar10] != cVar6) goto LAB_142883d25;
      cVar6 = "FORMAT="[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (lVar10 != 7);
    acVar5[4] = auStack_17d[0];
    acVar5[5] = auStack_17d[1];
    acVar5[6] = auStack_17d[2];
    acVar5[7] = auStack_17d[3];
    acVar5[8] = auStack_17d[4];
    acVar5[9] = auStack_17d[5];
    acVar5[10] = auStack_17d[6];
    acVar5[0xb] = auStack_17d[7];
    acVar5[0xc] = auStack_17d[8];
    acVar5[0xd] = auStack_17d[9];
    acVar5[0xe] = auStack_17d[10];
    acVar5[0xf] = auStack_17d[0xb];
    acVar5[0] = (undefined1)uStack_181;
    acVar5[1] = uStack_181._1_1_;
    acVar5[2] = uStack_181._2_1_;
    acVar5[3] = uStack_181._3_1_;
    bVar8 = true;
    if (acVar5 != s_32_bit_rle_rgbe_149ef4ed0) {
      local_68 = L"WrongFormatError";
      local_60 = 0x10;
      FUN_1446e940c(&local_80,&local_68);
      local_68 = L"HdrImageWrapper";
      local_60 = 0xf;
      FUN_1446e940c(&local_70,&local_68);
      local_68 = 
      L"The HDR image uses an unsupported format. Only the 32-bit_rle_rgbe format is supported.";
      local_60 = 0x57;
      FUN_140208c1e(&local_58,&local_70,&local_80,&local_68);
      plVar3 = *(longlong **)(param_1 + 0x68);
      if (plVar3 != local_58) {
        *(longlong **)(param_1 + 0x68) = local_58;
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(param_1 + 0x70) = local_50;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      uVar7 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *pauVar1 = (undefined1  [16])0x0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar7 = 0;
        FUN_140d2d4a8(param_1 + 0x28,0);
      }
      goto LAB_142883bf2;
    }
LAB_142883d25:
  } while (uVar9 < uVar7);
LAB_142883be8:
  FUN_14288423e(param_1);
LAB_142883bf0:
  uVar7 = 0;
LAB_142883bf2:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1428840d8 Unwind@1428840d8 body=64 status=ok
// SIG undefined Unwind@1428840d8(void)

void Unwind_1428840d8(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x150) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x150) + 0x10))();
  }
  return;
}



// FUNCTION 142884118 Unwind@142884118 body=64 status=ok
// SIG undefined Unwind@142884118(void)

void Unwind_142884118(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x128) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x128) + 0x10))();
  }
  return;
}



// FUNCTION 142884158 Unwind@142884158 body=63 status=ok
// SIG undefined Unwind@142884158(void)

void Unwind_142884158(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142884198 Unwind@142884198 body=64 status=ok
// SIG undefined Unwind@142884198(void)

void Unwind_142884198(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x150) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x150) + 0x10))();
  }
  return;
}



// FUNCTION 1428841d8 Unwind@1428841d8 body=33 status=ok
// SIG undefined Unwind@1428841d8(void)

void Unwind_1428841d8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428841fa Unwind@1428841fa body=33 status=ok
// SIG undefined Unwind@1428841fa(void)

void Unwind_1428841fa(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288421c Unwind@14288421c body=33 status=ok
// SIG undefined Unwind@14288421c(void)

void Unwind_14288421c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288423e FUN_14288423e body=143 status=ok
// SIG undefined FUN_14288423e(void)

void FUN_14288423e(longlong param_1)

{
  longlong *plVar1;
  longlong *local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_146989350(&local_30);
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != local_30) {
    *(longlong **)(param_1 + 0x68) = local_30;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = local_28;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_140d2d4a8(param_1 + 0x28,0);
  }
  return;
}



// FUNCTION 1428842ce Unwind@1428842ce body=40 status=ok
// SIG undefined Unwind@1428842ce(void)

void Unwind_1428842ce(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}



// FUNCTION 1428842f6 Unwind@1428842f6 body=21 status=ok
// SIG undefined Unwind@1428842f6(void)

void Unwind_1428842f6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288430c FUN_14288430c body=214 status=ok
// SIG undefined FUN_14288430c(void)

undefined8
FUN_14288430c(longlong *param_1,void *param_2,ulonglong param_3,uint param_4,uint param_5,
             undefined1 param_6,undefined4 param_7)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_6,param_7);
  if ((cVar2 == '\0') || ((int)param_5 < 1 || (int)param_4 < 1)) {
    return 0;
  }
  if ((longlong)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  plVar1 = param_1 + 8;
  param_1[9] = 0;
  if (param_1[10] == param_3) {
    lVar4 = 0;
    uVar3 = param_3;
  }
  else {
    FUN_140d2d4a8(plVar1,param_3);
    lVar4 = param_1[9];
    uVar3 = param_1[10];
  }
  param_1[9] = lVar4 + param_3;
  if (uVar3 - lVar4 < param_3) {
    FUN_14112c458(plVar1,lVar4);
  }
  else if (param_3 == 0) goto LAB_1428843bd;
  memcpy((void *)(lVar4 + *plVar1),param_2,param_3);
LAB_1428843bd:
  param_1[0xb] = (ulonglong)param_4;
  param_1[0xc] = (ulonglong)param_5;
  return CONCAT71((uint7)(uint3)(param_5 >> 8),1);
}



// FUNCTION 1428843e4 FUN_1428843e4 body=445 status=ok
// SIG undefined FUN_1428843e4(void)

ulonglong FUN_1428843e4(longlong param_1,char param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 == '\x04' && param_3 == 8) {
    if ((0 < *(longlong *)(param_1 + 0x18)) && (*(longlong *)(param_1 + 0x20) != 0)) {
      lVar7 = *(longlong *)(param_1 + 0x58) * *(longlong *)(param_1 + 0x60);
      uVar4 = lVar7 * 4;
      FUN_14626baa2(param_4,uVar4);
      lVar2 = param_4[1];
      param_4[1] = lVar2 + lVar7 * 4;
      if ((ulonglong)(param_4[2] - lVar2) < uVar4) {
        FUN_14112c458(param_4);
      }
      local_58 = *(wchar_t **)(param_1 + 0x20);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if (0 < *(longlong *)(param_1 + 0x60)) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar7 = *(longlong *)(param_1 + 0x18);
        lVar5 = 0;
        lVar6 = 0;
        do {
          cVar3 = FUN_146989834(param_1,*(longlong *)(param_1 + 0x58) * lVar5 + *param_4,&local_58,
                                lVar2 + lVar7);
          if (cVar3 == '\0') {
            param_4[1] = 0;
            if (param_4[2] == 0) goto LAB_1428844d7;
            uVar4 = 0;
            FUN_140d2d4a8(param_4,0);
            break;
          }
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 4;
        } while (lVar6 < *(longlong *)(param_1 + 0x60));
      }
      goto LAB_1428844d9;
    }
  }
  else {
    local_58 = L"UnSupportedFormatORBitDepth";
    local_50 = 0x1b;
    FUN_1446e940c(local_70,&local_58);
    local_58 = L"HdrImageWrapper";
    local_50 = 0xf;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = 
    L"The format and/or the bit depth is not supported by the HdrImageWrapper. Only the BGRE format and a bitdepth of 8 is supported"
    ;
    local_50 = 0x7e;
    FUN_140208c1e(&local_68,local_6c,local_70,&local_58);
    plVar1 = *(longlong **)(param_1 + 0x68);
    if (plVar1 != local_68) {
      *(longlong **)(param_1 + 0x68) = local_68;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = local_60;
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
LAB_1428844d7:
  uVar4 = 0;
LAB_1428844d9:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1428845a2 Unwind@1428845a2 body=58 status=ok
// SIG undefined Unwind@1428845a2(void)

void Unwind_1428845a2(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  return;
}



// FUNCTION 1428845dc Unwind@1428845dc body=30 status=ok
// SIG undefined Unwind@1428845dc(void)

void Unwind_1428845dc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428845fc FUN_1428845fc body=106 status=ok
// SIG undefined FUN_1428845fc(void)

void FUN_1428845fc(longlong param_1)

{
  longlong *plVar1;
  longlong *local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1469893e8(&local_30);
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != local_30) {
    *(longlong **)(param_1 + 0x68) = local_30;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = local_28;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  return;
}



// FUNCTION 142884666 Unwind@142884666 body=40 status=ok
// SIG undefined Unwind@142884666(void)

void Unwind_142884666(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}



// FUNCTION 14288468e Unwind@14288468e body=21 status=ok
// SIG undefined Unwind@14288468e(void)

void Unwind_14288468e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428846a4 FUN_1428846a4 body=106 status=ok
// SIG undefined FUN_1428846a4(void)

void FUN_1428846a4(longlong param_1)

{
  longlong *plVar1;
  longlong *local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_146989481(&local_30);
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != local_30) {
    *(longlong **)(param_1 + 0x68) = local_30;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = local_28;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  return;
}



// FUNCTION 14288470e Unwind@14288470e body=40 status=ok
// SIG undefined Unwind@14288470e(void)

void Unwind_14288470e(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}



// FUNCTION 142884736 Unwind@142884736 body=21 status=ok
// SIG undefined Unwind@142884736(void)

void Unwind_142884736(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288474c FUN_14288474c body=253 status=ok
// SIG undefined FUN_14288474c(void)

undefined8 FUN_14288474c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 auStack_68 [32];
  uint *local_48;
  int *local_40;
  int *local_38;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140d48816();
  if (cVar1 != '\0') {
    uVar3 = FUN_144b75df0();
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    local_38 = &local_30;
    local_40 = &local_2c;
    local_48 = &local_28;
    iVar2 = FUN_144b762d0(uVar3,param_2,param_3,&local_24);
    if (iVar2 == 0) {
      if (local_30 - 3U < 2) goto LAB_1428847d3;
      lVar4 = (longlong)(int)local_24;
      *(longlong *)(param_1 + 0x48) = lVar4;
      *(longlong *)(param_1 + 0x50) = (longlong)(int)local_28;
      *(undefined4 *)(param_1 + 0x44) = 8;
      *(char *)(param_1 + 0x40) = (local_2c == 3) + '\x01';
      pwVar5 = L"Image dimensions are not possible to import";
      if ((((0 < lVar4) && (0 < (int)local_28)) && ((local_28 | local_24) < 0x80000000)) &&
         (uVar3 = CONCAT71((int7)(int3)(local_24 >> 8),1),
         (ulonglong)((int)local_28 * lVar4) >> 0x20 == 0)) goto LAB_1428847d5;
    }
    else {
      pwVar5 = L"tjDecompressHeader3 failed";
    }
    FUN_14020fad6(param_1 + 0x58,pwVar5);
  }
LAB_1428847d3:
  uVar3 = 0;
LAB_1428847d5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14288484a FUN_14288484a body=281 status=ok
// SIG undefined FUN_14288484a(void)

void FUN_14288484a(longlong param_1,byte param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (param_2 < 2 && param_3 == 8) {
      lVar3 = 4;
    }
    else {
      if (param_2 != 2 || param_3 != 8) {
        return;
      }
      lVar3 = 1;
    }
    lVar1 = param_1 + 0x10;
    FUN_14626baa2(lVar1,*(longlong *)(param_1 + 0x48) * lVar3 * *(longlong *)(param_1 + 0x50));
    uVar4 = lVar3 * *(longlong *)(param_1 + 0x48) * *(longlong *)(param_1 + 0x50);
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(ulonglong *)(param_1 + 0x18) = uVar4 + lVar3;
    if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar3) < uVar4) {
      FUN_14112c458(lVar1);
    }
    iVar2 = FUN_144b76020(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x48),0,*(undefined4 *)(param_1 + 0x50),
                          *(undefined4 *)(&DAT_149ef8124 + (longlong)(char)param_2 * 4),0xc00);
    if (iVar2 != 0) {
      FUN_14020fad6(param_1 + 0x58,L"tjDecompress2 failed");
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140d2d4a8(lVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142884964 FUN_142884964 body=804 status=ok
// SIG undefined FUN_142884964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142884964(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar16 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar17 [16];
  ulonglong uVar18;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint uVar14;
  
  local_70 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    local_a8 = &LAB_141720150;
    local_b0 = &LAB_141720158;
    local_b8 = 0;
    uVar7 = png_create_write_struct_2("1.5.2",param_1,FUN_142884d06,&LAB_142884d00);
    local_78 = uVar7;
    local_88 = png_create_info_struct(uVar7);
    local_90 = png_malloc(uVar7,*(longlong *)(param_1 + 0x50) << 3);
    local_80 = local_90;
    uVar8 = png_set_longjmp_fn(uVar7,longjmp,0x100);
    iVar5 = __intrinsic_setjmp(uVar8,local_d8);
    lVar4 = local_80;
    if (iVar5 == 0) {
      if (param_2 == 0) {
        iVar5 = 3;
      }
      else if (param_2 == 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = 3;
        if (0xfffffff6 < param_2) {
          iVar5 = -param_2;
        }
      }
      png_set_compression_level(uVar7,iVar5);
      uVar12 = 6;
      if (*(char *)(param_1 + 0x40) == '\x02') {
        uVar12 = 0;
      }
      local_98 = 0;
      local_a0 = 0;
      local_a8 = (undefined1 *)((ulonglong)local_a8 & 0xffffffff00000000);
      local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,uVar12);
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1 + 0x44));
      png_set_IHDR(local_78,local_88,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50)
                  );
      png_set_write_fn(local_78,param_1,FUN_14698a676,&DAT_14698a674);
      if (param_2 == 1) {
        png_set_filter(local_78,0,0x22);
      }
      auVar3 = _DAT_149931e80;
      lVar1 = *(longlong *)(param_1 + 0x50);
      if (0 < lVar1) {
        uVar10 = ((ulonglong)
                  ((longlong)*(int *)(param_1 + 0x44) <<
                  (*(char *)(param_1 + 0x40) != '\x02') * '\x02') >> 3) *
                 *(longlong *)(param_1 + 0x48);
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar9 = lVar1 + -1;
        auVar15._8_4_ = (int)lVar9;
        auVar15._0_8_ = lVar9;
        auVar15._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
        uVar14 = (uint)(uVar10 >> 0x20);
        auVar13._8_4_ = (int)uVar10;
        auVar13._0_8_ = uVar10;
        auVar13._12_4_ = uVar14;
        auVar17 = pmovsxbq(unaff_XMM6,0x100);
        uVar11 = 0;
        auVar15 = auVar15 ^ _DAT_149931e80;
        auVar16 = pmovsxbq(in_XMM5,0x202);
        do {
          uVar18 = auVar17._8_8_;
          if ((bool)(~(auVar15._0_8_ < SUB168(auVar17 ^ auVar3,0)) & 1)) {
            *(ulonglong *)(lVar4 + uVar11 * 8) =
                 (uVar10 & 0xffffffff) * (ulonglong)auVar17._0_4_ +
                 ((auVar17._0_8_ >> 0x20) * (uVar10 & 0xffffffff) +
                  (ulonglong)uVar14 * (ulonglong)auVar17._0_4_ << 0x20) + lVar2;
          }
          if (SUB168(auVar17 ^ auVar3,8) <= auVar15._8_8_) {
            *(ulonglong *)(lVar4 + 8 + uVar11 * 8) =
                 (auVar13._8_8_ & 0xffffffff) * (ulonglong)auVar17._8_4_ +
                 ((uVar18 >> 0x20) * (uVar10 & 0xffffffff) +
                  (auVar13._8_8_ >> 0x20) * (ulonglong)auVar17._8_4_ << 0x20) + lVar2;
          }
          uVar11 = uVar11 + 2;
          auVar17._0_8_ = auVar17._0_8_ + auVar16._0_8_;
          auVar17._8_8_ = uVar18 + auVar16._8_8_;
        } while ((lVar1 + 1U & 0xfffffffffffffffe) != uVar11);
      }
      png_set_rows(local_78,local_88,lVar4);
      iVar6 = (uint)(*(char *)(param_1 + 0x40) == '\x01') * 0x80;
      iVar5 = iVar6 + 0x200;
      if (*(int *)(param_1 + 0x44) != 0x10) {
        iVar5 = iVar6;
      }
      png_write_png(local_78,local_88,iVar5,0);
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_140d2d4a8(param_1 + 0x28,0);
      }
    }
    if (local_90 != 0) {
      png_free(local_78,local_80);
    }
    png_destroy_write_struct(&local_78,&local_88);
  }
  return;
}



// FUNCTION 142884c88 Unwind@142884c88 body=120 status=ok
// SIG undefined Unwind@142884c88(void)

void Unwind_142884c88(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    png_free(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58));
  }
  png_destroy_write_struct(param_2 + 0x60,param_2 + 0x50);
  return;
}



// FUNCTION 142884d06 FUN_142884d06 body=269 status=ok
// SIG undefined FUN_142884d06(void)

void FUN_142884d06(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 local_170 [256];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar1 = png_get_error_ptr();
  FUN_144a81018(local_170,param_2);
  FUN_140056680(&local_38,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_14020fad6(lVar1 + 0x58,puVar3);
  iVar2 = FUN_1447ee042(&local_38,L"CRC error",9,1,0,0xffffffff);
  if (iVar2 != -1) {
    FUN_14698a6cc(&local_48,&local_38);
    local_58 = local_48;
    uStack_50 = uStack_40;
    local_48 = 0;
    uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_58,(ThrowInfo *)&DAT_14c0d3198);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142884e14 Unwind@142884e14 body=47 status=ok
// SIG undefined Unwind@142884e14(void)

void Unwind_142884e14(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x170) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142884e44 FUN_142884e44 body=186 status=ok
// SIG undefined FUN_142884e44(void)

undefined8 FUN_142884e44(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  
  cVar4 = FUN_140d48816();
  if ((cVar4 != '\0') && (cVar4 = FUN_142884efe(param_1), cVar4 != '\0')) {
    if ((((*(uint *)(param_1 + 0x44) < 5) &&
         (((0x16U >> (*(uint *)(param_1 + 0x44) & 0x1f) & 1) != 0 &&
          (uVar1 = *(uint *)(param_1 + 0x70), (uVar1 & 4) == 0)))) && ((uVar1 == 3 || (uVar1 == 0)))
        ) && (*(longlong *)(param_1 + 0x18) == 0)) {
      FUN_14110af42(param_1,*(undefined1 *)(param_1 + 0x40),8);
    }
    if ((*(byte *)(param_1 + 0x40) < 3) &&
       ((*(int *)(param_1 + 0x44) == 0x10 || (*(int *)(param_1 + 0x44) == 8)))) {
      uVar2 = *(ulonglong *)(param_1 + 0x50);
      if ((0 < (longlong)uVar2) &&
         (((uVar3 = *(ulonglong *)(param_1 + 0x48), 0 < (longlong)uVar3 &&
           ((uVar3 | uVar2) < 0x80000000)) && (uVar3 * uVar2 >> 0x20 == 0)))) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      FUN_14020fad6(param_1 + 0x58,L"Image dimensions are not possible to import");
    }
  }
  return 0;
}



// FUNCTION 142884efe FUN_142884efe body=369 status=ok
// SIG undefined FUN_142884efe(void)

bool FUN_142884efe(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_38;
  uint *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x30) < 9) {
    bVar7 = false;
  }
  else {
    local_38 = **(undefined8 **)(param_1 + 0x28);
    bVar7 = false;
    iVar2 = png_sig_cmp(&local_38,0,8);
    if (iVar2 == 0) {
      local_48 = &LAB_141720150;
      local_50 = &LAB_141720158;
      local_58 = 0;
      uVar3 = png_create_read_struct_2("1.5.2",param_1,FUN_142884d06,&LAB_142884d00);
      local_38 = uVar3;
      local_30 = (uint *)png_create_info_struct(uVar3);
      uVar4 = png_set_longjmp_fn(uVar3,longjmp,0x100);
      iVar2 = __intrinsic_setjmp(uVar4,local_78);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        png_set_read_fn(uVar3,param_1,FUN_14288509e);
        png_read_info(local_38,local_30);
        *(ulonglong *)(param_1 + 0x48) = (ulonglong)*local_30;
        *(ulonglong *)(param_1 + 0x50) = (ulonglong)local_30[1];
        bVar5 = *(byte *)((longlong)local_30 + 0x25);
        *(uint *)(param_1 + 0x70) = (uint)bVar5;
        uVar1 = local_30[9];
        *(uint *)(param_1 + 0x44) = (uint)(byte)uVar1;
        *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)((longlong)local_30 + 0x29);
        bVar6 = 0;
        if (((local_30[2] & 0x10) == 0) && ((bVar5 & 2) == 0)) {
          bVar6 = (byte)~bVar5 >> 1 & 2;
        }
        bVar5 = 1;
        if (8 < (byte)uVar1) {
          bVar5 = bVar6;
        }
        if (bVar6 != 0) {
          bVar5 = bVar6;
        }
        *(byte *)(param_1 + 0x40) = bVar5;
      }
      png_destroy_read_struct(&local_38,&local_30,0);
    }
  }
  return bVar7;
}



// FUNCTION 142885070 Unwind@142885070 body=45 status=ok
// SIG undefined Unwind@142885070(void)

void Unwind_142885070(undefined8 param_1,longlong param_2)

{
  png_destroy_read_struct(param_2 + 0x40,param_2 + 0x48,0);
  return;
}



// FUNCTION 14288509e FUN_14288509e body=129 status=ok
// SIG undefined FUN_14288509e(void)

void FUN_14288509e(undefined8 param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  
  lVar3 = png_get_io_ptr();
  if ((longlong)param_3 < 0) {
    pwVar4 = L"Invalid length in read_compressed";
  }
  else {
    uVar2 = *(ulonglong *)(lVar3 + 0x68);
    uVar1 = uVar2 + param_3;
    if ((-1 < (longlong)((uVar1 ^ uVar2) & (uVar1 ^ param_3))) &&
       ((longlong)uVar1 <= *(longlong *)(lVar3 + 0x30))) {
      memcpy(param_2,(void *)(uVar2 + *(longlong *)(lVar3 + 0x28)),param_3);
      *(ulonglong *)(lVar3 + 0x68) = uVar1;
      return;
    }
    pwVar4 = L"Invalid read position for CompressedData.";
  }
  FUN_14020fad6(lVar3 + 0x58,pwVar4);
  return;
}



// FUNCTION 14288511f FUN_14288511f body=566 status=ok
// SIG undefined FUN_14288511f(void)

ulonglong FUN_14288511f(longlong param_1,undefined8 param_2,void *param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *local_68;
  ulonglong uStack_60;
  void *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar4 = *(char *)(param_1 + 2);
  if (cVar4 == '\x02') {
    cVar4 = *(char *)(param_1 + 0x10);
    if (cVar4 == '\x10') {
      cVar4 = FUN_14698c8f2(param_1,param_2,param_3);
    }
    else if (cVar4 == '\x18') {
      cVar4 = FUN_14698c804(param_1,param_2,param_3);
    }
    else {
      if (cVar4 != ' ') goto LAB_142885236;
      cVar4 = FUN_14698c748(param_1,param_2,param_3);
    }
LAB_142885203:
    if (cVar4 != '\0') {
      bVar1 = *(byte *)(param_1 + 0x11);
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((bVar1 & 0x30) != 0) {
        local_68 = (void *)0x0;
        uStack_60 = (ulonglong)param_4;
        if (param_4 != 0) {
          FUN_1447403be(&local_68,0);
        }
        uVar2 = *(ushort *)(param_1 + 0xc);
        uVar3 = *(ushort *)(param_1 + 0xe);
        uVar5 = (ulonglong)uVar2;
        uVar8 = (ulonglong)uVar3;
        if (*(char *)(param_1 + 0x10) == '\b') {
          if (uVar3 != 0) {
            uVar10 = 0;
            pvVar11 = param_3;
            do {
              if (uVar2 != 0) {
                uVar6 = ~uVar10 + uVar8;
                if ((bVar1 & 0x20) == 0) {
                  uVar6 = uVar10;
                }
                uVar12 = 0;
                uVar13 = uVar5;
                do {
                  uVar13 = uVar13 - 1;
                  uVar9 = uVar13;
                  if ((bVar1 & 0x10) == 0) {
                    uVar9 = uVar12;
                  }
                  *(undefined1 *)((longlong)local_68 + uVar9 + uVar6 * uVar5) =
                       *(undefined1 *)((longlong)pvVar11 + uVar12);
                  uVar12 = uVar12 + 1;
                } while (uVar13 != 0);
              }
              uVar10 = uVar10 + 1;
              pvVar11 = (void *)((longlong)pvVar11 + uVar5);
            } while (uVar10 != uVar8);
          }
        }
        else if (uVar3 != 0) {
          uVar10 = 0;
          pvVar11 = param_3;
          do {
            if (uVar2 != 0) {
              uVar6 = ~uVar10 + uVar8;
              if ((bVar1 & 0x20) == 0) {
                uVar6 = uVar10;
              }
              uVar12 = 0;
              uVar13 = uVar5;
              do {
                uVar13 = uVar13 - 1;
                uVar9 = uVar13;
                if ((bVar1 & 0x10) == 0) {
                  uVar9 = uVar12;
                }
                *(undefined4 *)((longlong)local_68 + uVar9 * 4 + uVar6 * uVar5 * 4) =
                     *(undefined4 *)((longlong)pvVar11 + uVar12 * 4);
                uVar12 = uVar12 + 1;
              } while (uVar13 != 0);
            }
            uVar10 = uVar10 + 1;
            pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)((uint)uVar2 * 4));
          } while (uVar10 != uVar8);
        }
        local_50 = param_3;
        memcpy(param_3,local_68,(longlong)(int)uStack_60);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_142885238;
    }
  }
  else {
    if (cVar4 == '\n') {
      cVar4 = *(char *)(param_1 + 0x10);
      if (cVar4 == '\x10') {
        cVar4 = FUN_14698c5a6(param_1,param_2,param_3);
      }
      else if (cVar4 == '\x18') {
        cVar4 = FUN_14698c471(param_1,param_2,param_3);
      }
      else {
        if (cVar4 != ' ') goto LAB_142885236;
        cVar4 = FUN_14698c353(param_1,param_2,param_3);
      }
      goto LAB_142885203;
    }
    if (((cVar4 == '\x01' && *(char *)(param_1 + 1) == '\x01') ||
        (cVar4 == '\x03' && *(char *)(param_1 + 1) == '\0')) && (*(char *)(param_1 + 0x10) == '\b'))
    {
      cVar4 = FUN_14698ca0c(param_1,param_2,param_3);
      goto LAB_142885203;
    }
  }
LAB_142885236:
  uVar7 = 0;
LAB_142885238:
  return uVar7 & 0xffffffff;
}



// FUNCTION 142885355 Unwind@142885355 body=57 status=ok
// SIG undefined Unwind@142885355(void)

void Unwind_142885355(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14288538e FUN_14288538e body=615 status=ok
// SIG undefined FUN_14288538e(void)

void FUN_14288538e(longlong param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *local_40;
  undefined4 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar6 = (ulonglong)((param_2 & 0xff) * 2) * *(longlong *)(param_1 + 0x88) *
          *(longlong *)(param_1 + 0x90);
  if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(ulonglong *)(param_1 + 0xa8) == uVar6) {
    lVar4 = 0;
    uVar3 = uVar6;
  }
  else {
    FUN_140d2d4a8(param_1 + 0x98,uVar6);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar3 = *(ulonglong *)(param_1 + 0xa8);
  }
  *(ulonglong *)(param_1 + 0xa0) = lVar4 + uVar6;
  if (uVar3 - lVar4 < uVar6) {
    FUN_14112c458(param_1 + 0x98);
  }
  iVar2 = FUN_144b76e70(*(undefined8 *)(param_1 + 0x70));
  if (*(ushort *)(param_1 + 0x80) < 2) {
    if (*(short *)(param_1 + 0x78) == 3) {
      pwVar5 = L"Tiff, Unsupported bits per sample from a Palette base image.";
    }
    else {
      sVar1 = *(short *)(param_1 + 0x7c);
      if (sVar1 == 0x40) {
        FUN_14699a1bc(param_1,param_2,iVar2 != 0);
        goto LAB_142885499;
      }
      if (sVar1 == 0x20) {
        FUN_1469993ee(param_1,param_2,iVar2 != 0);
        goto LAB_142885499;
      }
      if (sVar1 == 0x10) {
        FUN_146998620(param_1,param_2,iVar2 != 0);
        goto LAB_142885499;
      }
      pwVar5 = L"Tiff, Unsupported bits per sample from a uint sample format.";
    }
  }
  else {
    if (*(ushort *)(param_1 + 0x80) != 3) goto LAB_142885499;
    sVar1 = *(short *)(param_1 + 0x7c);
    if (sVar1 == 0x40) {
      FUN_14699ca16(param_1,param_2,iVar2 != 0);
      goto LAB_142885499;
    }
    if (sVar1 == 0x20) {
      FUN_14699bc36(param_1,param_2,iVar2 != 0);
      goto LAB_142885499;
    }
    if (sVar1 == 0x10) {
      FUN_14699afc6(param_1,param_2,iVar2 != 0);
      goto LAB_142885499;
    }
    pwVar5 = L"Tiff, Unsupported bits per sample from a IEEEFP sample format.";
  }
  FUN_14020fad6(param_1 + 0x58,pwVar5);
LAB_142885499:
  if (*(short *)(param_1 + 0x78) == 0) {
    local_50 = *(undefined4 *)(param_1 + 0x98);
    uStack_4c = *(undefined4 *)(param_1 + 0x9c);
    uStack_48 = *(undefined4 *)(param_1 + 0xa0);
    uStack_44 = *(undefined4 *)(param_1 + 0xa4);
    if (((DAT_14c86a9f8 == '\x01') &&
        (iVar2 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar2 != 2)) && (iVar2 == 1)) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
    local_58 = &local_50;
    local_38 = &local_58;
    local_30 = 0;
    local_28 = 0;
    local_40 = &LAB_14699d7ee;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88),1);
  }
  return;
}



// FUNCTION 1428855f6 FUN_1428855f6 body=616 status=ok
// SIG undefined FUN_1428855f6(void)

void FUN_1428855f6(longlong param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *local_40;
  undefined4 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar6 = (ulonglong)((param_2 & 0xff) << 2) * *(longlong *)(param_1 + 0x88) *
          *(longlong *)(param_1 + 0x90);
  if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(ulonglong *)(param_1 + 0xa8) == uVar6) {
    lVar4 = 0;
    uVar3 = uVar6;
  }
  else {
    FUN_140d2d4a8(param_1 + 0x98,uVar6);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar3 = *(ulonglong *)(param_1 + 0xa8);
  }
  *(ulonglong *)(param_1 + 0xa0) = lVar4 + uVar6;
  if (uVar3 - lVar4 < uVar6) {
    FUN_14112c458(param_1 + 0x98);
  }
  iVar2 = FUN_144b76e70(*(undefined8 *)(param_1 + 0x70));
  if (*(ushort *)(param_1 + 0x80) < 2) {
    if (*(short *)(param_1 + 0x78) == 3) {
      pwVar5 = L"Tiff, Unsupported bits per sample from a Palette base image.";
    }
    else {
      sVar1 = *(short *)(param_1 + 0x7c);
      if (sVar1 == 0x40) {
        FUN_14699f2a8(param_1,param_2,iVar2 != 0);
        goto LAB_142885702;
      }
      if (sVar1 == 0x20) {
        FUN_14699e5c0(param_1,param_2,iVar2 != 0);
        goto LAB_142885702;
      }
      if (sVar1 == 0x10) {
        FUN_14699d8d8(param_1,param_2,iVar2 != 0);
        goto LAB_142885702;
      }
      pwVar5 = L"Tiff, Unsupported bits per sample from a uint sample format.";
    }
  }
  else {
    if (*(ushort *)(param_1 + 0x80) != 3) goto LAB_142885702;
    sVar1 = *(short *)(param_1 + 0x7c);
    if (sVar1 == 0x40) {
      FUN_1469a1ab8(param_1,param_2,iVar2 != 0);
      goto LAB_142885702;
    }
    if (sVar1 == 0x20) {
      FUN_1469a0e34(param_1,param_2,iVar2 != 0);
      goto LAB_142885702;
    }
    if (sVar1 == 0x10) {
      FUN_14699ffe8(param_1,param_2,iVar2 != 0);
      goto LAB_142885702;
    }
    pwVar5 = L"Tiff, Unsupported bits per sample from a IEEEFP sample format.";
  }
  FUN_14020fad6(param_1 + 0x58,pwVar5);
LAB_142885702:
  if (*(short *)(param_1 + 0x78) == 0) {
    local_50 = *(undefined4 *)(param_1 + 0x98);
    uStack_4c = *(undefined4 *)(param_1 + 0x9c);
    uStack_48 = *(undefined4 *)(param_1 + 0xa0);
    uStack_44 = *(undefined4 *)(param_1 + 0xa4);
    if (((DAT_14c86a9f8 == '\x01') &&
        (iVar2 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar2 != 2)) && (iVar2 == 1)) {
      FUN_140ad26c0();
      GetCurrentThreadId();
    }
    local_58 = &local_50;
    local_38 = &local_58;
    local_30 = 0;
    local_28 = 0;
    local_40 = &LAB_1469a27a8;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88),1);
  }
  return;
}



// FUNCTION 142885872 FUN_142885872 body=327 status=ok
// SIG undefined FUN_142885872(void)

void FUN_142885872(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  ulonglong uVar3;
  size_t _Size;
  int *local_968;
  undefined8 local_960;
  undefined4 local_958;
  undefined1 *local_950;
  undefined4 **local_948;
  int local_940;
  undefined4 local_93c;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_144b8df60(&local_940,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),2);
    if (local_940 == 0) {
      puVar1 = (undefined8 *)(param_1 + 0x10);
      local_948 = &local_968;
      local_960 = 0;
      local_958 = 0;
      local_950 = &LAB_1428f0408;
      local_968 = &local_940;
      FUN_1401f8d10(L"ParallelFor Task",local_93c,1);
      _Src = (void *)FUN_144b8e9d0(&local_940,&local_950,&local_968,&local_960);
      if (_Src == (void *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_140d2d4a8(puVar1,0);
        }
      }
      else {
        *(longlong *)(param_1 + 0x48) = (longlong)(int)local_950;
        *(longlong *)(param_1 + 0x50) = (longlong)(int)local_968;
        FUN_14626baa2(puVar1,(longlong)(int)local_960 *
                             (longlong)(int)local_968 * (longlong)(int)local_950);
        uVar3 = (longlong)(int)local_960 *
                *(longlong *)(param_1 + 0x50) * *(longlong *)(param_1 + 0x48);
        lVar2 = *(longlong *)(param_1 + 0x18);
        _Size = uVar3 + lVar2;
        *(size_t *)(param_1 + 0x18) = _Size;
        if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar2) < uVar3) {
          FUN_14112c458(puVar1);
          _Size = *(size_t *)(param_1 + 0x18);
        }
        memcpy((void *)*puVar1,_Src,_Size);
        FUN_1400020a8(_Src);
      }
    }
  }
  return;
}



// FUNCTION 1428859ba FUN_1428859ba body=160 status=ok
// SIG undefined FUN_1428859ba(void)

undefined8 FUN_1428859ba(longlong *param_1,undefined4 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_1446f8c06(param_1 + 0xb,0);
  }
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3 & 0xffffffff);
  if (((int)param_1[0xc] < 2) && (param_1[3] != 0)) {
    uVar1 = CONCAT71((uint7)(param_3 >> 8) & 0xffffff,1);
    if (param_1 + 2 != param_4) {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = param_1[2];
      param_1[2] = 0;
      param_4[1] = param_1[3];
      param_4[2] = param_1[4];
      param_1[3] = 0;
      param_1[4] = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 142885a5a FUN_142885a5a body=88 status=ok
// SIG undefined FUN_142885a5a(void)

bool FUN_142885a5a(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_1446f8c06(param_1 + 0xb,0);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3,param_4);
  return *(longlong *)(param_4 + 8) != 0 && (int)param_1[0xc] < 2;
}



// FUNCTION 142885ab2 FUN_142885ab2 body=401 status=ok
// SIG undefined FUN_142885ab2(void)

ulonglong FUN_142885ab2(longlong *param_1,void *param_2,ulonglong param_3,uint param_4,uint param_5,
                       undefined1 param_6,undefined4 param_7,uint param_8)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  undefined8 unaff_R12;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (-1 < (int)param_8 &&
      (0 < (int)param_5 && ((0 < (int)param_4 && 0 < (longlong)param_3) && param_2 != (void *)0x0)))
  {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),param_6);
    (**(code **)(*param_1 + 0x70))(param_1);
    param_1[6] = 0;
    if (param_1[7] != 0) {
      FUN_140d2d4a8(param_1 + 5,0);
    }
    cVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar6 & 0xffffffff,param_7);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 8) = param_6;
      *(undefined4 *)((longlong)param_1 + 0x44) = param_7;
      param_1[9] = (ulonglong)param_4;
      param_1[10] = (ulonglong)param_5;
      lVar3 = FUN_142885c44(uVar6 & 0xffffffff);
      uVar6 = lVar3 * (ulonglong)param_4;
      uVar7 = param_5 * uVar6;
      plVar1 = param_1 + 2;
      param_1[3] = 0;
      if (param_1[4] == uVar7) {
        lVar3 = 0;
        uVar4 = uVar7;
      }
      else {
        FUN_140d2d4a8(plVar1,uVar7);
        lVar3 = param_1[3];
        uVar4 = param_1[4];
      }
      param_1[3] = lVar3 + uVar7;
      if (uVar4 - lVar3 < uVar7) {
        FUN_14112c458(plVar1);
      }
      uVar5 = (undefined7)(param_3 >> 8);
      if (param_8 != 0) {
        uVar4 = (ulonglong)param_8;
        if (uVar6 - uVar4 != 0) {
          if ((uVar6 < uVar4) &&
             ((longlong)((param_1[10] + -1) * uVar4 + uVar6) <= (longlong)param_3)) {
            uVar7 = CONCAT71(uVar5,1);
            if (0 < param_1[10]) {
              lVar8 = 0;
              lVar3 = 0;
              do {
                memcpy((void *)(param_1[2] + lVar8),param_2,uVar6);
                lVar3 = lVar3 + 1;
                lVar8 = lVar8 + uVar6;
                param_2 = (void *)((longlong)param_2 + uVar4);
              } while (lVar3 < param_1[10]);
            }
            goto LAB_142885c00;
          }
          goto LAB_142885bfe;
        }
      }
      if (uVar7 < param_3 || uVar7 - param_3 == 0) {
        memcpy((void *)*plVar1,param_2,uVar7);
        uVar7 = CONCAT71(uVar5,1);
        goto LAB_142885c00;
      }
    }
  }
LAB_142885bfe:
  uVar7 = 0;
LAB_142885c00:
  return uVar7 & 0xffffffff;
}



// FUNCTION 142885c44 FUN_142885c44 body=123 status=ok
// SIG undefined FUN_142885c44(void)

char FUN_142885c44(undefined1 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  switch(param_1) {
  case 0:
  case 1:
    cVar2 = (param_2 == 0x10) << 3;
    bVar3 = param_2 == 8;
    cVar1 = '\x04';
    break;
  case 2:
    cVar2 = (param_2 == 0x10) * '\x02';
    bVar3 = param_2 == 8;
    cVar1 = '\x01';
    break;
  case 3:
    cVar2 = (param_2 == 0x20) << 4;
    bVar3 = param_2 == 0x10;
    cVar1 = '\b';
    break;
  case 4:
    if (param_2 != 8) {
      return '\0';
    }
    return '\x04';
  case 5:
    cVar2 = (param_2 == 0x20) << 2;
    bVar3 = param_2 == 0x10;
    cVar1 = '\x02';
    break;
  default:
    return '\0';
  }
  if (!bVar3) {
    cVar1 = cVar2;
  }
  return cVar1;
}



// FUNCTION 142885cc0 FUN_142885cc0 body=5 status=ok
// SIG undefined FUN_142885cc0(void)

undefined8 FUN_142885cc0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 142885cc6 FUN_142885cc6 body=5 status=ok
// SIG undefined FUN_142885cc6(void)

undefined8 FUN_142885cc6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 142885d42 FUN_142885d42 body=2804 status=ok
// SIG undefined FUN_142885d42(void)

void FUN_142885d42(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe00;
  undefined2 uVar32;
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
  longlong *****local_1d8;
  undefined8 *local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined8 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [32];
  undefined1 *local_170;
  undefined8 local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_1a0 = *(undefined4 *)(param_1 + 0x13);
  uStack_19c = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_198 = *(undefined4 *)(param_1 + 0x14);
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  ppppplVar4 = param_1[0xe];
  local_1e8 = 0;
  local_1e0[0] = 0;
  local_62 = param_3;
  local_1e8 = FUN_144b77940(ppppplVar4);
  FUN_144b77e20(ppppplVar4,0x100,local_1e0);
  local_1d0 = (undefined8 *)&local_1a0;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_1e8;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_142885f38;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_142885f38;
  }
  uVar30 = 1;
LAB_142885f38:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c) >> 3) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_61 = param_2;
    if ((int)local_168._4_4_ < iVar11) {
      FUN_14473dbc4(local_190,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_142886043:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe00 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe00 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe00);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_9c;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_14288628c;
LAB_142886220:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_14288628c:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef6730;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_14288642c;
                }
                else {
                  puVar20[0x16] = &LAB_14698db8c;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_14288642c:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_142886465;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_142886465:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_168;
                iVar28 = (int)local_168;
                uVar27 = (int)local_168 + 1;
                local_168 = CONCAT44(local_168._4_4_,uVar27);
                if (local_168._4_4_ < uVar27) {
                  FUN_14476a5c8(local_190,uVar29 & 0xffffffff);
                }
                puVar21 = local_170;
                if (local_170 == (undefined1 *)0x0) {
                  puVar21 = local_190;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_142886043;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_142886220;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428866a2;
        }
        local_9c = local_9c + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = (longlong ******)&local_1a0;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14698df3c;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428866a2:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,uVar30);
  FUN_14588b8d6(local_190);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 142886836 Unwind@142886836 body=38 status=ok
// SIG undefined Unwind@142886836(void)

void Unwind_142886836(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288685e Unwind@14288685e body=196 status=ok
// SIG undefined Unwind@14288685e(void)

void Unwind_14288685e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x78) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x168);
        **(undefined8 **)(param_2 + 0x168) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142886922 Unwind@142886922 body=95 status=ok
// SIG undefined Unwind@142886922(void)

void Unwind_142886922(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 142886982 Unwind@142886982 body=95 status=ok
// SIG undefined Unwind@142886982(void)

void Unwind_142886982(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 1428869e2 Unwind@1428869e2 body=64 status=ok
// SIG undefined Unwind@1428869e2(void)

void Unwind_1428869e2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  return;
}



// FUNCTION 142886a22 Unwind@142886a22 body=67 status=ok
// SIG undefined Unwind@142886a22(void)

void Unwind_142886a22(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 142886a66 Unwind@142886a66 body=131 status=ok
// SIG undefined Unwind@142886a66(void)

void Unwind_142886a66(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x98,*(undefined4 *)(param_2 + 0x1b0));
  FUN_14588b8d6(param_2 + 0x98);
  while (puVar1 = *(undefined8 **)(param_2 + 0x178), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x178) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142886aea Unwind@142886aea body=76 status=ok
// SIG undefined Unwind@142886aea(void)

void Unwind_142886aea(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  FUN_14698d9aa(param_2 + 200);
  return;
}



// FUNCTION 142886b36 Unwind@142886b36 body=38 status=ok
// SIG undefined Unwind@142886b36(void)

void Unwind_142886b36(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142886b5e FUN_142886b5e body=4073 status=ok
// SIG undefined FUN_142886b5e(void)

void FUN_142886b5e(longlong *param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  byte local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [32];
  undefined1 *local_168;
  undefined8 local_160;
  short local_156;
  uint local_154;
  int *local_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  int local_100;
  undefined1 local_fc;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  char local_73;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_73 = param_3;
  local_1a0 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_198 = (undefined4)param_1[0x13];
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_190 = (undefined4)param_1[0x14];
  uStack_18c = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_156 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_156);
  sVar4 = local_156;
  bVar26 = 1;
  local_b0 = CONCAT44(local_b0._4_4_,1);
  local_1b7 = param_2;
  if (local_156 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1b7 = 1;
  }
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)param_1[0x11]);
  lVar27 = param_1[0x12];
  lVar14 = param_1[0xe];
  local_1d8 = 0;
  local_1d0[0] = 0;
  local_61 = param_2;
  local_1d8 = FUN_144b77940(lVar14);
  FUN_144b77e20(lVar14,0x100,local_1d0);
  local_1b8 = local_61;
  local_1b4 = local_70._0_4_;
  local_1a8 = &local_1d8;
  if (sVar4 == 2) {
    local_b0 = CONCAT44(local_b0._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1c8 = param_1;
  local_1c0 = (longlong *)&local_198;
  local_1b6 = bVar26;
  local_1b0 = (int)lVar27;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_142886d04;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_142886d04;
  }
  uVar8 = 1;
LAB_142886d04:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_140 < (ulonglong)bVar26 * param_1[0x11] * (longlong)(int)uVar21 >> 3) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_160._4_4_ < iVar7) {
      FUN_14473dbc4(local_188,iVar7);
    }
    local_154 = (uint)(byte)local_b0;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar14 + 0x308);
    local_138 = (undefined8 *)(lVar14 + 0x310);
    local_150 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_154 <= (uint)uVar21) break;
      local_b0 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_f0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_f0[1] = (longlong)&DAT_100000001;
          *local_f0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_f0 + 2;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          uStack_128._0_4_ = SUB84(local_f0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
          if (local_f0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
            plVar13 = local_f0;
          }
          local_f8 = 0;
          local_88 = local_130;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_f0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_f8);
          FUN_14698d9aa(&local_130);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_140;
          if ((ulonglong)(local_88[2] - lVar14) < local_140) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_140);
        puVar18 = local_138;
        if (lVar14 != -1) {
          uStack_128 = &local_a8;
          local_120 = &local_1c8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar1;
          local_130 = param_1;
          if (puVar16 != (uint *)0x0) goto LAB_1428875e1;
LAB_14288757e:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar1 = puVar15;
          FUN_140217a48(puVar1);
          puVar16 = (uint *)*puVar1;
LAB_1428875e1:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_148 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6920;
              puVar17[1] = local_130;
              puVar17[2] = uStack_128;
              puVar17[3] = local_120;
              puVar17[4] = CONCAT44(uStack_114,local_118);
              puVar17[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_108._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_f8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
                if (local_f8 != 0) goto LAB_142887776;
              }
              else {
                puVar18[0x16] = &LAB_14698e1c8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
LAB_142887776:
                local_f8 = 0;
              }
              local_e8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
                uVar25 = 0x8ff;
                if (*local_150 != 1) goto LAB_1428877ac;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_f8 != 0) {
                  plVar20 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_d8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_1428877ac:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_f8 = CONCAT71(local_f8._1_7_,1);
              FUN_1447439e4(puVar18,&local_f8);
              iVar7 = (int)local_160;
              uVar25 = local_160 & 0xffffffff;
              uVar23 = (int)local_160 + 1;
              local_160 = CONCAT44(local_160._4_4_,uVar23);
              if (local_160._4_4_ < uVar23) {
                FUN_14476a5c8(local_188,uVar25);
              }
              puVar19 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar19 = local_188;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_1428878d4;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14288757e;
            puVar16 = (uint *)*puVar1;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar1 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_142887981:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_1428879a6;
      }
      uVar25 = 0;
LAB_142886dfd:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_f0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_f0[1] = (longlong)&DAT_100000001;
          *local_f0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_f0 + 2;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          uStack_128._0_4_ = SUB84(local_f0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
          if (local_f0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
            plVar13 = local_f0;
          }
          local_f8 = 0;
          local_88 = local_130;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_f0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_f8);
          FUN_14698d9aa(&local_130);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_140;
          if ((ulonglong)(local_88[2] - lVar14) < local_140) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_1a0;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          uStack_128 = &local_1c8;
          local_120 = &local_a8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_fc = (undefined1)local_b0;
          puVar16 = (uint *)*puVar1;
          local_130 = param_1;
          local_118 = uVar23;
          local_100 = iVar7;
          if (puVar16 != (uint *)0x0) goto LAB_14288704c;
LAB_142886fe5:
          puVar18 = local_138;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar1 = puVar15;
          FUN_140217a48(puVar1);
          puVar16 = (uint *)*puVar1;
LAB_14288704c:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_148 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6900;
              puVar17[1] = local_130;
              puVar17[2] = uStack_128;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar17[5] = plStack_110;
              puVar17[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_fc;
              *(int *)(puVar17 + 7) = local_100;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_f8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
                if (local_f8 != 0) goto LAB_1428871e4;
              }
              else {
                puVar18[0x16] = &LAB_14698df56;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
LAB_1428871e4:
                local_f8 = 0;
              }
              local_e8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
                uVar25 = 0x8ff;
                if (*local_150 != 1) goto LAB_14288721a;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_f8 != 0) {
                  plVar20 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_d8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14288721a:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_f8 = CONCAT71(local_f8._1_7_,1);
              FUN_1447439e4(puVar18,&local_f8);
              uVar25 = local_160;
              iVar24 = (int)local_160;
              uVar23 = (int)local_160 + 1;
              local_160 = CONCAT44(local_160._4_4_,uVar23);
              if (local_160._4_4_ < uVar23) {
                FUN_14476a5c8(local_188,uVar25 & 0xffffffff);
              }
              puVar19 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar19 = local_188;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_142886dfd;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_142886fe5;
            puVar16 = (uint *)*puVar1;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar1 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_142887981;
      }
LAB_1428878d4:
      uVar25 = CONCAT71((int7)(local_b0 >> 8),(char)local_b0 + '\x01');
    }
    uVar8 = local_8c;
    if (local_73 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_188,local_8c);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
        if (*local_150 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      local_f8 = 0;
      local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_14698e2aa;
      uStack_128 = &local_88;
      plStack_80 = (longlong *)&local_198;
      FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
      uVar8 = local_8c;
    }
  }
LAB_1428879a6:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_188,uVar8);
  FUN_14588b8d6(local_188);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 142887b48 Unwind@142887b48 body=38 status=ok
// SIG undefined Unwind@142887b48(void)

void Unwind_142887b48(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142887b70 Unwind@142887b70 body=193 status=ok
// SIG undefined Unwind@142887b70(void)

void Unwind_142887b70(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xd0) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xe0);
        **(undefined8 **)(param_2 + 0xe0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142887c32 Unwind@142887c32 body=83 status=ok
// SIG undefined Unwind@142887c32(void)

void Unwind_142887c32(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 142887c86 Unwind@142887c86 body=83 status=ok
// SIG undefined Unwind@142887c86(void)

void Unwind_142887c86(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 142887cda Unwind@142887cda body=67 status=ok
// SIG undefined Unwind@142887cda(void)

void Unwind_142887cda(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x108);
  return;
}



// FUNCTION 142887d1e Unwind@142887d1e body=67 status=ok
// SIG undefined Unwind@142887d1e(void)

void Unwind_142887d1e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 142887d62 Unwind@142887d62 body=38 status=ok
// SIG undefined Unwind@142887d62(void)

void Unwind_142887d62(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142887d8a Unwind@142887d8a body=193 status=ok
// SIG undefined Unwind@142887d8a(void)

void Unwind_142887d8a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xd0) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xe0);
        **(undefined8 **)(param_2 + 0xe0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142887e4c Unwind@142887e4c body=95 status=ok
// SIG undefined Unwind@142887e4c(void)

void Unwind_142887e4c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 142887eac Unwind@142887eac body=95 status=ok
// SIG undefined Unwind@142887eac(void)

void Unwind_142887eac(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 142887f0c Unwind@142887f0c body=67 status=ok
// SIG undefined Unwind@142887f0c(void)

void Unwind_142887f0c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  return;
}



// FUNCTION 142887f50 Unwind@142887f50 body=67 status=ok
// SIG undefined Unwind@142887f50(void)

void Unwind_142887f50(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 142887f94 Unwind@142887f94 body=131 status=ok
// SIG undefined Unwind@142887f94(void)

void Unwind_142887f94(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x18c));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x178), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x178) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142888018 Unwind@142888018 body=76 status=ok
// SIG undefined Unwind@142888018(void)

void Unwind_142888018(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 142888064 Unwind@142888064 body=76 status=ok
// SIG undefined Unwind@142888064(void)

void Unwind_142888064(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 1428880b0 Unwind@1428880b0 body=38 status=ok
// SIG undefined Unwind@1428880b0(void)

void Unwind_1428880b0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428880d8 FUN_1428880d8 body=2460 status=ok
// SIG undefined FUN_1428880d8(void)

void FUN_1428880d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  longlong local_1b8;
  undefined4 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined8 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1d8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1d0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1cc = *(undefined4 *)(param_1 + 0xa4);
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar6 = local_ba;
  bVar27 = 1;
  bVar29 = local_ba == 2;
  if (!bVar29) {
    bVar27 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  local_1c8 = 0;
  local_1c0[0] = 0;
  local_1c8 = FUN_144b77940(uVar4);
  FUN_144b77e20(uVar4,0x100,local_1c0);
  local_1b0 = &local_1d8;
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_1c8;
  bVar21 = 1;
  if (sVar6 == 2) {
    bVar21 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a7 = bVar29 * '\x03' + '\x01';
  local_1a6 = bVar27;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    local_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428882c9;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428882c9;
  }
  local_74 = 1;
LAB_1428882c9:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)(longlong)(int)((uint)bVar27 * local_6c * local_70) >> 3) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)local_150._4_4_ < iVar9) {
      FUN_14473dbc4(local_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_b0 = (undefined8 *)(lVar14 + 0x310);
    local_190 = (int *)(lVar14 + 0xc60);
    local_b4 = (uint)bVar21;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + local_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (local_6c + iVar9 <= lVar14) {
          iVar5 = local_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428883c4:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar18 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar18 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar18) < local_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar26,iVar9,0,
                                 (short)local_b8);
          if (-1 < lVar14) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(local_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_142888616;
LAB_1428885ac:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_142888616:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                local_188 = uVar25;
                local_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef6940;
                puVar17[1] = local_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,local_f0);
                puVar17[4] = local_e8;
                puVar17[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = local_d0;
                puVar17[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = local_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_1428887a5;
                }
                else {
                  puVar18[0x16] = &LAB_14698e2c4;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428887a5:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428887d8;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(local_68 + 0x1e) = uVar23;
                  puVar18 = local_68;
                  if (local_148 != 0) {
                    plVar20 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar18 = local_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428887d8:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar18,&local_148);
                uVar25 = local_150;
                iVar24 = (int)local_150;
                uVar23 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar23);
                if (local_150._4_4_ < uVar23) {
                  FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
                }
                puVar19 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar19 = local_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar26 = iVar26 + local_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428883c4;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428885ac;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_1428889fb;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428889fb:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar18 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 142888a74 Unwind@142888a74 body=38 status=ok
// SIG undefined Unwind@142888a74(void)

void Unwind_142888a74(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142888a9c Unwind@142888a9c body=196 status=ok
// SIG undefined Unwind@142888a9c(void)

void Unwind_142888a9c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142888b60 Unwind@142888b60 body=95 status=ok
// SIG undefined Unwind@142888b60(void)

void Unwind_142888b60(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 142888bc0 Unwind@142888bc0 body=95 status=ok
// SIG undefined Unwind@142888bc0(void)

void Unwind_142888bc0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 142888c20 Unwind@142888c20 body=67 status=ok
// SIG undefined Unwind@142888c20(void)

void Unwind_142888c20(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  return;
}



// FUNCTION 142888c64 Unwind@142888c64 body=67 status=ok
// SIG undefined Unwind@142888c64(void)

void Unwind_142888c64(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 142888ca8 Unwind@142888ca8 body=38 status=ok
// SIG undefined Unwind@142888ca8(void)

void Unwind_142888ca8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142888cd0 Unwind@142888cd0 body=131 status=ok
// SIG undefined Unwind@142888cd0(void)

void Unwind_142888cd0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x194));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142888d54 Unwind@142888d54 body=76 status=ok
// SIG undefined Unwind@142888d54(void)

void Unwind_142888d54(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xc0);
  FUN_14698d9aa(param_2 + 0x108);
  return;
}



// FUNCTION 142888da0 FUN_142888da0 body=3680 status=ok
// SIG undefined FUN_142888da0(void)

void FUN_142888da0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  byte bVar28;
  longlong lVar29;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  longlong *local_1c0;
  undefined4 *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  byte local_1ae;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  ulonglong local_190;
  undefined8 local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  undefined8 local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int local_b0;
  undefined1 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_198 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1e0 = (undefined4)param_1[0x13];
  uStack_1dc = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_1d8 = (undefined4)param_1[0x14];
  uStack_1d4 = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar5 = local_146;
  bVar28 = 1;
  local_68 = (undefined8 *)CONCAT44(local_68._4_4_,(uint)(local_146 == 2) * 3 + 1);
  if (local_146 != 2) {
    bVar28 = *(byte *)((longlong)param_1 + 0x7e);
  }
  lVar29 = param_1[0x11];
  lVar4 = param_1[0x12];
  lVar15 = param_1[0xe];
  local_1d0 = 0;
  local_1c8[0] = 0;
  local_1d0 = FUN_144b77940(lVar15);
  FUN_144b77e20(lVar15,0x100,local_1c8);
  local_1b8 = &local_1e0;
  local_1b0 = 4;
  local_1af = SUB81(local_68,0);
  local_1a0 = &local_1d0;
  uVar25 = 1;
  if (sVar5 == 2) {
    uVar25 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1c0 = param_1;
  local_1ae = bVar28;
  local_1ac = (int)lVar29;
  local_1a8 = (int)lVar4;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    uVar9 = 0xff;
    if (iVar8 != 1) goto LAB_142888f26;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_142888f26;
  }
  uVar9 = 1;
LAB_142888f26:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar13 = (ulonglong)local_6a;
  uVar27 = param_1[0x12];
  uVar22 = uVar13;
  if ((longlong)uVar27 < (longlong)uVar13) {
    uVar22 = uVar27;
  }
  if (uVar13 == 0) {
    uVar22 = uVar27;
  }
  if (local_138 < (ulonglong)bVar28 * param_1[0x11] * (longlong)(int)uVar22 >> 3) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar9;
    iVar8 = FUN_144b77d80(param_1[0xe]);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    local_144 = uVar25 & 0xff;
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar15 + 0x308);
    local_130 = (undefined8 *)(lVar15 + 0x310);
    local_180 = (int *)(lVar15 + 0xc60);
    uVar23 = 0;
    while( true ) {
      local_140 = CONCAT44(local_140._4_4_,(uint)uVar23) & 0xffffffff000000ff;
      uVar9 = local_8c;
      if (local_144 <= ((uint)uVar23 & 0xff)) break;
      local_188 = uVar23;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar7 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar7 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar21 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar14 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar6 = plStack_80;
          if ((plVar14 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar6 = plVar14, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar19 = (undefined8 *)*plStack_80;
              plStack_80 = plVar14;
              (*(code *)*puVar19)(plVar21);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar6 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                plVar6 = plStack_80;
              }
            }
          }
          plStack_80 = plVar6;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar15 = local_88[1];
          local_88[1] = lVar15 + local_138;
          if ((ulonglong)(local_88[2] - lVar15) < local_138) {
            FUN_14112c458();
          }
        }
        lVar15 = FUN_144b82e30(param_1[0xe],local_140 & 0xffffffff,*local_88,local_138);
        puVar19 = local_130;
        if (lVar15 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1c0;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar23);
          puVar17 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar17 != (uint *)0x0) goto LAB_1428897d6;
LAB_142889773:
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar16 = (undefined4 *)*puVar19;
          *puVar19 = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          FUN_140217a48(puVar3);
          puVar17 = (uint *)*puVar3;
LAB_1428897d6:
          uVar27 = *(longlong *)(puVar17 + 0x10) + 0xf;
          uVar25 = puVar17[0x12];
          do {
            puVar18 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar17 + 0x4000) {
              *(undefined8 **)(puVar17 + 0x10) = puVar18 + 0x20;
              puVar17[0x12] = uVar25 + 1;
              local_140 = uVar27;
              local_68 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar19 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar18 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar18 = &PTR_LAB_149ef6980;
              puVar18[1] = local_e0;
              puVar18[2] = uStack_d8;
              puVar18[3] = local_d0;
              puVar18[4] = CONCAT44(uStack_c4,local_c8);
              puVar18[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar18 + 6) = plStack_b8._0_1_;
              if (puVar18 + 1 == (longlong *)0x0) {
                puVar19[0x16] = local_128;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_142889962;
              }
              else {
                puVar19[0x16] = &LAB_14698e80a;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
LAB_142889962:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar27 = 0x8ff;
                if (*local_180 != 1) goto LAB_142889995;
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                uVar25 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar19 + 0x1e) = uVar25;
                if (local_128 != 0) {
                  plVar21 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar21 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar21 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar19 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_142889995:
                *(int *)(puVar19 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar10 = (uint)(uVar27 >> 10) & 3;
                iVar8 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar10];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar8 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar19,L"GraphTask",uVar24,iVar8,0);
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar19,&local_128);
              iVar8 = (int)local_150;
              uVar27 = local_150 & 0xffffffff;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27);
              }
              puVar20 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar20 = local_178;
              }
              *(undefined8 **)(puVar20 + (longlong)iVar8 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_142889ab0;
            }
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar10 = *puVar17;
            *puVar17 = *puVar17 + uVar25 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar25) != 0xffffffff) goto LAB_142889773;
            puVar17 = (uint *)*puVar3;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar3 = puVar17;
            uVar27 = (longlong)puVar17 + 0x67;
            uVar25 = 0;
          } while( true );
        }
LAB_142889b52:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar9 = local_8c;
        break;
      }
      uVar27 = 0;
LAB_142889020:
      iVar8 = (int)uVar27;
      if ((longlong)uVar27 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar7 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar7 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar21 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar14 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar6 = plStack_80;
          if ((plVar14 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar6 = plVar14, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar19 = (undefined8 *)*plStack_80;
              plStack_80 = plVar14;
              (*(code *)*puVar19)(plVar21);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar6 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                plVar6 = plStack_80;
              }
            }
          }
          plStack_80 = plVar6;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar15 = local_88[1];
          local_88[1] = lVar15 + local_138;
          if ((ulonglong)(local_88[2] - lVar15) < local_138) {
            FUN_14112c458();
          }
        }
        uVar25 = (int)param_1[0x12] - iVar8;
        if ((longlong)(ulonglong)(iVar8 + (uint)local_6a) <= param_1[0x12]) {
          uVar25 = (uint)local_6a;
        }
        lVar15 = *local_88;
        lVar29 = (int)uVar25 * local_198;
        uVar9 = FUN_144b77d20(param_1[0xe],uVar27,local_140 & 0xffffffff);
        lVar15 = FUN_144b82e30(param_1[0xe],uVar9,lVar15,lVar29);
        if (lVar15 != -1) {
          uStack_d8 = &local_1c0;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar17 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar25;
          local_b0 = iVar8;
          if (puVar17 != (uint *)0x0) goto LAB_142889264;
LAB_1428891fd:
          puVar19 = local_130;
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar16 = (undefined4 *)*puVar19;
          *puVar19 = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          FUN_140217a48(puVar3);
          puVar17 = (uint *)*puVar3;
LAB_142889264:
          uVar27 = *(longlong *)(puVar17 + 0x10) + 0xf;
          uVar25 = puVar17[0x12];
          do {
            puVar19 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar19 + 0x20 <= puVar17 + 0x4000) {
              *(undefined8 **)(puVar17 + 0x10) = puVar19 + 0x20;
              puVar17[0x12] = uVar25 + 1;
              local_190 = uVar27;
              local_68 = puVar19;
              FUN_1447247dc(puVar19,0);
              puVar19 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar18 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar18 = &PTR_LAB_149ef6960;
              puVar18[1] = local_e0;
              puVar18[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar18 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar18 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar18[5] = plStack_c0;
              puVar18[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar18 + 0x3c) = local_ac;
              *(int *)(puVar18 + 7) = local_b0;
              if (puVar18 + 1 == (longlong *)0x0) {
                puVar19[0x16] = local_128;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428893f7;
              }
              else {
                puVar19[0x16] = &LAB_14698e5bc;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
LAB_1428893f7:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar27 = 0x8ff;
                if (*local_180 != 1) goto LAB_14288942a;
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                uVar25 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar19 + 0x1e) = uVar25;
                if (local_128 != 0) {
                  plVar21 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar21 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar21 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar19 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_14288942a:
                *(int *)(puVar19 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar10 = (uint)(uVar27 >> 10) & 3;
                iVar26 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar10];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar26 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar19,L"GraphTask",uVar24,iVar26,0);
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar19,&local_128);
              uVar27 = local_150;
              iVar26 = (int)local_150;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27 & 0xffffffff);
              }
              puVar20 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar20 = local_178;
              }
              *(undefined8 **)(puVar20 + (longlong)iVar26 * 8) = local_68;
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar27 = (ulonglong)(iVar8 + (uint)local_6a);
              goto LAB_142889020;
            }
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar10 = *puVar17;
            *puVar17 = *puVar17 + uVar25 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar25) != 0xffffffff) goto LAB_1428891fd;
            puVar17 = (uint *)*puVar3;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar3 = puVar17;
            uVar27 = (longlong)puVar17 + 0x67;
            uVar25 = 0;
          } while( true );
        }
        goto LAB_142889b52;
      }
LAB_142889ab0:
      uVar23 = CONCAT71((int7)((ulonglong)local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar9);
  FUN_14588b8d6(local_178);
  while (plVar21 = local_a0, local_a0 != (longlong *)0x0) {
    plVar14 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar14);
    FUN_1400020a8(plVar21);
  }
  return;
}



// FUNCTION 142889c00 Unwind@142889c00 body=38 status=ok
// SIG undefined Unwind@142889c00(void)

void Unwind_142889c00(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142889c28 Unwind@142889c28 body=193 status=ok
// SIG undefined Unwind@142889c28(void)

void Unwind_142889c28(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x78) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd8);
        **(undefined8 **)(param_2 + 0xd8) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142889cea Unwind@142889cea body=83 status=ok
// SIG undefined Unwind@142889cea(void)

void Unwind_142889cea(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 142889d3e Unwind@142889d3e body=83 status=ok
// SIG undefined Unwind@142889d3e(void)

void Unwind_142889d3e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 142889d92 Unwind@142889d92 body=67 status=ok
// SIG undefined Unwind@142889d92(void)

void Unwind_142889d92(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x148);
  return;
}



// FUNCTION 142889dd6 Unwind@142889dd6 body=67 status=ok
// SIG undefined Unwind@142889dd6(void)

void Unwind_142889dd6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 142889e1a Unwind@142889e1a body=38 status=ok
// SIG undefined Unwind@142889e1a(void)

void Unwind_142889e1a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142889e42 Unwind@142889e42 body=193 status=ok
// SIG undefined Unwind@142889e42(void)

void Unwind_142889e42(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 200) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd8);
        **(undefined8 **)(param_2 + 0xd8) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142889f04 Unwind@142889f04 body=95 status=ok
// SIG undefined Unwind@142889f04(void)

void Unwind_142889f04(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 142889f64 Unwind@142889f64 body=95 status=ok
// SIG undefined Unwind@142889f64(void)

void Unwind_142889f64(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 142889fc4 Unwind@142889fc4 body=67 status=ok
// SIG undefined Unwind@142889fc4(void)

void Unwind_142889fc4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  return;
}



// FUNCTION 14288a008 Unwind@14288a008 body=67 status=ok
// SIG undefined Unwind@14288a008(void)

void Unwind_14288a008(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 14288a04c Unwind@14288a04c body=38 status=ok
// SIG undefined Unwind@14288a04c(void)

void Unwind_14288a04c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288a074 Unwind@14288a074 body=131 status=ok
// SIG undefined Unwind@14288a074(void)

void Unwind_14288a074(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14288a0f8 Unwind@14288a0f8 body=76 status=ok
// SIG undefined Unwind@14288a0f8(void)

void Unwind_14288a0f8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  FUN_14698d9aa(param_2 + 0x128);
  return;
}



// FUNCTION 14288a144 Unwind@14288a144 body=76 status=ok
// SIG undefined Unwind@14288a144(void)

void Unwind_14288a144(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  FUN_14698d9aa(param_2 + 0x128);
  return;
}



// FUNCTION 14288a190 FUN_14288a190 body=189 status=ok
// SIG undefined FUN_14288a190(void)

ulonglong FUN_14288a190(ulonglong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  FUN_144afd1ae();
  if (param_1 != 0 && param_2 != 0) {
    piVar3 = (int *)(param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14288a24e FUN_14288a24e body=2804 status=ok
// SIG undefined FUN_14288a24e(void)

void FUN_14288a24e(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe00;
  undefined2 uVar32;
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
  longlong *****local_1d8;
  undefined8 *local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined8 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [32];
  undefined1 *local_170;
  undefined8 local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_1a0 = *(undefined4 *)(param_1 + 0x13);
  uStack_19c = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_198 = *(undefined4 *)(param_1 + 0x14);
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  ppppplVar4 = param_1[0xe];
  local_1e8 = 0;
  local_1e0[0] = 0;
  local_62 = param_3;
  local_1e8 = FUN_144b77940(ppppplVar4);
  FUN_144b77e20(ppppplVar4,0x100,local_1e0);
  local_1d0 = (undefined8 *)&local_1a0;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_1e8;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_14288a444;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_14288a444;
  }
  uVar30 = 1;
LAB_14288a444:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c) >> 2) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_61 = param_2;
    if ((int)local_168._4_4_ < iVar11) {
      FUN_14473dbc4(local_190,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_14288a54f:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe00 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe00 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe00);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_9c;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_14288a798;
LAB_14288a72c:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_14288a798:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef69a0;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_14288a938;
                }
                else {
                  puVar20[0x16] = &LAB_14698e8ec;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_14288a938:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_14288a971;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_14288a971:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_168;
                iVar28 = (int)local_168;
                uVar27 = (int)local_168 + 1;
                local_168 = CONCAT44(local_168._4_4_,uVar27);
                if (local_168._4_4_ < uVar27) {
                  FUN_14476a5c8(local_190,uVar29 & 0xffffffff);
                }
                puVar21 = local_170;
                if (local_170 == (undefined1 *)0x0) {
                  puVar21 = local_190;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_14288a54f;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_14288a72c;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_14288abae;
        }
        local_9c = local_9c + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = (longlong ******)&local_1a0;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14698ebc0;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_14288abae:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,uVar30);
  FUN_14588b8d6(local_190);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 14288ad42 Unwind@14288ad42 body=38 status=ok
// SIG undefined Unwind@14288ad42(void)

void Unwind_14288ad42(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288ad6a Unwind@14288ad6a body=196 status=ok
// SIG undefined Unwind@14288ad6a(void)

void Unwind_14288ad6a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x78) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x168);
        **(undefined8 **)(param_2 + 0x168) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14288ae2e Unwind@14288ae2e body=95 status=ok
// SIG undefined Unwind@14288ae2e(void)

void Unwind_14288ae2e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 14288ae8e Unwind@14288ae8e body=95 status=ok
// SIG undefined Unwind@14288ae8e(void)

void Unwind_14288ae8e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 14288aeee Unwind@14288aeee body=64 status=ok
// SIG undefined Unwind@14288aeee(void)

void Unwind_14288aeee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  return;
}



// FUNCTION 14288af2e Unwind@14288af2e body=67 status=ok
// SIG undefined Unwind@14288af2e(void)

void Unwind_14288af2e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 14288af72 Unwind@14288af72 body=131 status=ok
// SIG undefined Unwind@14288af72(void)

void Unwind_14288af72(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x98,*(undefined4 *)(param_2 + 0x1b0));
  FUN_14588b8d6(param_2 + 0x98);
  while (puVar1 = *(undefined8 **)(param_2 + 0x178), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x178) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14288aff6 Unwind@14288aff6 body=76 status=ok
// SIG undefined Unwind@14288aff6(void)

void Unwind_14288aff6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  FUN_14698d9aa(param_2 + 200);
  return;
}



// FUNCTION 14288b042 Unwind@14288b042 body=38 status=ok
// SIG undefined Unwind@14288b042(void)

void Unwind_14288b042(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288b06a FUN_14288b06a body=4073 status=ok
// SIG undefined FUN_14288b06a(void)

void FUN_14288b06a(longlong *param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  byte local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [32];
  undefined1 *local_168;
  undefined8 local_160;
  short local_156;
  uint local_154;
  int *local_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  int local_100;
  undefined1 local_fc;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  char local_73;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_73 = param_3;
  local_1a0 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_198 = (undefined4)param_1[0x13];
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_190 = (undefined4)param_1[0x14];
  uStack_18c = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_156 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_156);
  sVar4 = local_156;
  bVar26 = 1;
  local_b0 = CONCAT44(local_b0._4_4_,1);
  local_1b7 = param_2;
  if (local_156 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1b7 = 1;
  }
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)param_1[0x11]);
  lVar27 = param_1[0x12];
  lVar14 = param_1[0xe];
  local_1d8 = 0;
  local_1d0[0] = 0;
  local_61 = param_2;
  local_1d8 = FUN_144b77940(lVar14);
  FUN_144b77e20(lVar14,0x100,local_1d0);
  local_1b8 = local_61;
  local_1b4 = local_70._0_4_;
  local_1a8 = &local_1d8;
  if (sVar4 == 2) {
    local_b0 = CONCAT44(local_b0._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1c8 = param_1;
  local_1c0 = (longlong *)&local_198;
  local_1b6 = bVar26;
  local_1b0 = (int)lVar27;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_14288b210;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_14288b210;
  }
  uVar8 = 1;
LAB_14288b210:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_140 < (ulonglong)bVar26 * param_1[0x11] * (longlong)(int)uVar21 >> 2) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_160._4_4_ < iVar7) {
      FUN_14473dbc4(local_188,iVar7);
    }
    local_154 = (uint)(byte)local_b0;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar14 + 0x308);
    local_138 = (undefined8 *)(lVar14 + 0x310);
    local_150 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_154 <= (uint)uVar21) break;
      local_b0 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_f0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_f0[1] = (longlong)&DAT_100000001;
          *local_f0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_f0 + 2;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          uStack_128._0_4_ = SUB84(local_f0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
          if (local_f0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
            plVar13 = local_f0;
          }
          local_f8 = 0;
          local_88 = local_130;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_f0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_f8);
          FUN_14698d9aa(&local_130);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_140;
          if ((ulonglong)(local_88[2] - lVar14) < local_140) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_140);
        puVar18 = local_138;
        if (lVar14 != -1) {
          uStack_128 = &local_a8;
          local_120 = &local_1c8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar1;
          local_130 = param_1;
          if (puVar16 != (uint *)0x0) goto LAB_14288baed;
LAB_14288ba8a:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar1 = puVar15;
          FUN_140217a48(puVar1);
          puVar16 = (uint *)*puVar1;
LAB_14288baed:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_148 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef69e0;
              puVar17[1] = local_130;
              puVar17[2] = uStack_128;
              puVar17[3] = local_120;
              puVar17[4] = CONCAT44(uStack_114,local_118);
              puVar17[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_108._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_f8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
                if (local_f8 != 0) goto LAB_14288bc82;
              }
              else {
                puVar18[0x16] = &LAB_14698ee70;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
LAB_14288bc82:
                local_f8 = 0;
              }
              local_e8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
                uVar25 = 0x8ff;
                if (*local_150 != 1) goto LAB_14288bcb8;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_f8 != 0) {
                  plVar20 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_d8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14288bcb8:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_f8 = CONCAT71(local_f8._1_7_,1);
              FUN_1447439e4(puVar18,&local_f8);
              iVar7 = (int)local_160;
              uVar25 = local_160 & 0xffffffff;
              uVar23 = (int)local_160 + 1;
              local_160 = CONCAT44(local_160._4_4_,uVar23);
              if (local_160._4_4_ < uVar23) {
                FUN_14476a5c8(local_188,uVar25);
              }
              puVar19 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar19 = local_188;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_14288bde0;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14288ba8a;
            puVar16 = (uint *)*puVar1;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar1 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_14288be8d:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_14288beb2;
      }
      uVar25 = 0;
LAB_14288b309:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_f0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_f0[1] = (longlong)&DAT_100000001;
          *local_f0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_f0 + 2;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          uStack_128._0_4_ = SUB84(local_f0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
          if (local_f0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
            plVar13 = local_f0;
          }
          local_f8 = 0;
          local_88 = local_130;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_f0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_f8);
          FUN_14698d9aa(&local_130);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_140;
          if ((ulonglong)(local_88[2] - lVar14) < local_140) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_1a0;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          uStack_128 = &local_1c8;
          local_120 = &local_a8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_fc = (undefined1)local_b0;
          puVar16 = (uint *)*puVar1;
          local_130 = param_1;
          local_118 = uVar23;
          local_100 = iVar7;
          if (puVar16 != (uint *)0x0) goto LAB_14288b558;
LAB_14288b4f1:
          puVar18 = local_138;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar1 = puVar15;
          FUN_140217a48(puVar1);
          puVar16 = (uint *)*puVar1;
LAB_14288b558:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_148 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef69c0;
              puVar17[1] = local_130;
              puVar17[2] = uStack_128;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar17[5] = plStack_110;
              puVar17[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_fc;
              *(int *)(puVar17 + 7) = local_100;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_f8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
                if (local_f8 != 0) goto LAB_14288b6f0;
              }
              else {
                puVar18[0x16] = &LAB_14698ebda;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
LAB_14288b6f0:
                local_f8 = 0;
              }
              local_e8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
                uVar25 = 0x8ff;
                if (*local_150 != 1) goto LAB_14288b726;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_f8 != 0) {
                  plVar20 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_d8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14288b726:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_f8 = CONCAT71(local_f8._1_7_,1);
              FUN_1447439e4(puVar18,&local_f8);
              uVar25 = local_160;
              iVar24 = (int)local_160;
              uVar23 = (int)local_160 + 1;
              local_160 = CONCAT44(local_160._4_4_,uVar23);
              if (local_160._4_4_ < uVar23) {
                FUN_14476a5c8(local_188,uVar25 & 0xffffffff);
              }
              puVar19 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar19 = local_188;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_14288b309;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14288b4f1;
            puVar16 = (uint *)*puVar1;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar1 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_14288be8d;
      }
LAB_14288bde0:
      uVar25 = CONCAT71((int7)(local_b0 >> 8),(char)local_b0 + '\x01');
    }
    uVar8 = local_8c;
    if (local_73 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_188,local_8c);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
        if (*local_150 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      local_f8 = 0;
      local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_14698ef52;
      uStack_128 = &local_88;
      plStack_80 = (longlong *)&local_198;
      FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
      uVar8 = local_8c;
    }
  }
LAB_14288beb2:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_188,uVar8);
  FUN_14588b8d6(local_188);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 14288c054 Unwind@14288c054 body=38 status=ok
// SIG undefined Unwind@14288c054(void)

void Unwind_14288c054(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288c07c Unwind@14288c07c body=193 status=ok
// SIG undefined Unwind@14288c07c(void)

void Unwind_14288c07c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xd0) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xe0);
        **(undefined8 **)(param_2 + 0xe0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14288c13e Unwind@14288c13e body=83 status=ok
// SIG undefined Unwind@14288c13e(void)

void Unwind_14288c13e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 14288c192 Unwind@14288c192 body=83 status=ok
// SIG undefined Unwind@14288c192(void)

void Unwind_14288c192(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 14288c1e6 Unwind@14288c1e6 body=67 status=ok
// SIG undefined Unwind@14288c1e6(void)

void Unwind_14288c1e6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x108);
  return;
}



// FUNCTION 14288c22a Unwind@14288c22a body=67 status=ok
// SIG undefined Unwind@14288c22a(void)

void Unwind_14288c22a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 14288c26e Unwind@14288c26e body=38 status=ok
// SIG undefined Unwind@14288c26e(void)

void Unwind_14288c26e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288c296 Unwind@14288c296 body=193 status=ok
// SIG undefined Unwind@14288c296(void)

void Unwind_14288c296(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xd0) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xe0);
        **(undefined8 **)(param_2 + 0xe0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14288c358 Unwind@14288c358 body=95 status=ok
// SIG undefined Unwind@14288c358(void)

void Unwind_14288c358(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 14288c3b8 Unwind@14288c3b8 body=95 status=ok
// SIG undefined Unwind@14288c3b8(void)

void Unwind_14288c3b8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 14288c418 Unwind@14288c418 body=67 status=ok
// SIG undefined Unwind@14288c418(void)

void Unwind_14288c418(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  return;
}



// FUNCTION 14288c45c Unwind@14288c45c body=67 status=ok
// SIG undefined Unwind@14288c45c(void)

void Unwind_14288c45c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 14288c4a0 Unwind@14288c4a0 body=131 status=ok
// SIG undefined Unwind@14288c4a0(void)

void Unwind_14288c4a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x18c));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x178), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x178) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14288c524 Unwind@14288c524 body=76 status=ok
// SIG undefined Unwind@14288c524(void)

void Unwind_14288c524(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 14288c570 Unwind@14288c570 body=76 status=ok
// SIG undefined Unwind@14288c570(void)

void Unwind_14288c570(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 14288c5bc Unwind@14288c5bc body=38 status=ok
// SIG undefined Unwind@14288c5bc(void)

void Unwind_14288c5bc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288c5e4 FUN_14288c5e4 body=2460 status=ok
// SIG undefined FUN_14288c5e4(void)

void FUN_14288c5e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  longlong local_1b8;
  undefined4 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined8 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1d8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1d0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1cc = *(undefined4 *)(param_1 + 0xa4);
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar6 = local_ba;
  bVar27 = 1;
  bVar29 = local_ba == 2;
  if (!bVar29) {
    bVar27 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  local_1c8 = 0;
  local_1c0[0] = 0;
  local_1c8 = FUN_144b77940(uVar4);
  FUN_144b77e20(uVar4,0x100,local_1c0);
  local_1b0 = &local_1d8;
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_1c8;
  bVar21 = 1;
  if (sVar6 == 2) {
    bVar21 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a7 = bVar29 * '\x03' + '\x01';
  local_1a6 = bVar27;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    local_74 = 0xff;
    if (iVar9 != 1) goto LAB_14288c7d5;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_14288c7d5;
  }
  local_74 = 1;
LAB_14288c7d5:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)(longlong)(int)((uint)bVar27 * local_6c * local_70) >> 2) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)local_150._4_4_ < iVar9) {
      FUN_14473dbc4(local_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_b0 = (undefined8 *)(lVar14 + 0x310);
    local_190 = (int *)(lVar14 + 0xc60);
    local_b4 = (uint)bVar21;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + local_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (local_6c + iVar9 <= lVar14) {
          iVar5 = local_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_14288c8d0:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar18 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar18 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar18) < local_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar26,iVar9,0,
                                 (short)local_b8);
          if (-1 < lVar14) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(local_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_14288cb22;
LAB_14288cab8:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_14288cb22:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                local_188 = uVar25;
                local_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef6a00;
                puVar17[1] = local_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,local_f0);
                puVar17[4] = local_e8;
                puVar17[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = local_d0;
                puVar17[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = local_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_14288ccb1;
                }
                else {
                  puVar18[0x16] = &LAB_14698ef6c;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_14288ccb1:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*local_190 != 1) goto LAB_14288cce4;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(local_68 + 0x1e) = uVar23;
                  puVar18 = local_68;
                  if (local_148 != 0) {
                    plVar20 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar18 = local_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_14288cce4:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar18,&local_148);
                uVar25 = local_150;
                iVar24 = (int)local_150;
                uVar23 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar23);
                if (local_150._4_4_ < uVar23) {
                  FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
                }
                puVar19 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar19 = local_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar26 = iVar26 + local_70;
                iVar28 = iVar28 + 1;
                goto LAB_14288c8d0;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_14288cab8;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_14288cf07;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_14288cf07:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar18 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14288cf80 Unwind@14288cf80 body=38 status=ok
// SIG undefined Unwind@14288cf80(void)

void Unwind_14288cf80(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288cfa8 Unwind@14288cfa8 body=196 status=ok
// SIG undefined Unwind@14288cfa8(void)

void Unwind_14288cfa8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14288d06c Unwind@14288d06c body=95 status=ok
// SIG undefined Unwind@14288d06c(void)

void Unwind_14288d06c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 14288d0cc Unwind@14288d0cc body=95 status=ok
// SIG undefined Unwind@14288d0cc(void)

void Unwind_14288d0cc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 14288d12c Unwind@14288d12c body=67 status=ok
// SIG undefined Unwind@14288d12c(void)

void Unwind_14288d12c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  return;
}



// FUNCTION 14288d170 Unwind@14288d170 body=67 status=ok
// SIG undefined Unwind@14288d170(void)

void Unwind_14288d170(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 14288d1b4 Unwind@14288d1b4 body=38 status=ok
// SIG undefined Unwind@14288d1b4(void)

void Unwind_14288d1b4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288d1dc Unwind@14288d1dc body=131 status=ok
// SIG undefined Unwind@14288d1dc(void)

void Unwind_14288d1dc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x194));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14288d260 Unwind@14288d260 body=76 status=ok
// SIG undefined Unwind@14288d260(void)

void Unwind_14288d260(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xc0);
  FUN_14698d9aa(param_2 + 0x108);
  return;
}



// FUNCTION 14288d2ac FUN_14288d2ac body=3680 status=ok
// SIG undefined FUN_14288d2ac(void)

void FUN_14288d2ac(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  byte bVar28;
  longlong lVar29;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  longlong *local_1c0;
  undefined4 *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  byte local_1ae;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  ulonglong local_190;
  undefined8 local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  undefined8 local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int local_b0;
  undefined1 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_198 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1e0 = (undefined4)param_1[0x13];
  uStack_1dc = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_1d8 = (undefined4)param_1[0x14];
  uStack_1d4 = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar5 = local_146;
  bVar28 = 1;
  local_68 = (undefined8 *)CONCAT44(local_68._4_4_,(uint)(local_146 == 2) * 3 + 1);
  if (local_146 != 2) {
    bVar28 = *(byte *)((longlong)param_1 + 0x7e);
  }
  lVar29 = param_1[0x11];
  lVar4 = param_1[0x12];
  lVar15 = param_1[0xe];
  local_1d0 = 0;
  local_1c8[0] = 0;
  local_1d0 = FUN_144b77940(lVar15);
  FUN_144b77e20(lVar15,0x100,local_1c8);
  local_1b8 = &local_1e0;
  local_1b0 = 4;
  local_1af = SUB81(local_68,0);
  local_1a0 = &local_1d0;
  uVar25 = 1;
  if (sVar5 == 2) {
    uVar25 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1c0 = param_1;
  local_1ae = bVar28;
  local_1ac = (int)lVar29;
  local_1a8 = (int)lVar4;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    uVar9 = 0xff;
    if (iVar8 != 1) goto LAB_14288d432;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_14288d432;
  }
  uVar9 = 1;
LAB_14288d432:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar13 = (ulonglong)local_6a;
  uVar27 = param_1[0x12];
  uVar22 = uVar13;
  if ((longlong)uVar27 < (longlong)uVar13) {
    uVar22 = uVar27;
  }
  if (uVar13 == 0) {
    uVar22 = uVar27;
  }
  if (local_138 < (ulonglong)bVar28 * param_1[0x11] * (longlong)(int)uVar22 >> 2) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar9;
    iVar8 = FUN_144b77d80(param_1[0xe]);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    local_144 = uVar25 & 0xff;
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar15 + 0x308);
    local_130 = (undefined8 *)(lVar15 + 0x310);
    local_180 = (int *)(lVar15 + 0xc60);
    uVar23 = 0;
    while( true ) {
      local_140 = CONCAT44(local_140._4_4_,(uint)uVar23) & 0xffffffff000000ff;
      uVar9 = local_8c;
      if (local_144 <= ((uint)uVar23 & 0xff)) break;
      local_188 = uVar23;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar7 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar7 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar21 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar14 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar6 = plStack_80;
          if ((plVar14 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar6 = plVar14, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar19 = (undefined8 *)*plStack_80;
              plStack_80 = plVar14;
              (*(code *)*puVar19)(plVar21);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar6 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                plVar6 = plStack_80;
              }
            }
          }
          plStack_80 = plVar6;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar15 = local_88[1];
          local_88[1] = lVar15 + local_138;
          if ((ulonglong)(local_88[2] - lVar15) < local_138) {
            FUN_14112c458();
          }
        }
        lVar15 = FUN_144b82e30(param_1[0xe],local_140 & 0xffffffff,*local_88,local_138);
        puVar19 = local_130;
        if (lVar15 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1c0;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar23);
          puVar17 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar17 != (uint *)0x0) goto LAB_14288dce2;
LAB_14288dc7f:
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar16 = (undefined4 *)*puVar19;
          *puVar19 = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          FUN_140217a48(puVar3);
          puVar17 = (uint *)*puVar3;
LAB_14288dce2:
          uVar27 = *(longlong *)(puVar17 + 0x10) + 0xf;
          uVar25 = puVar17[0x12];
          do {
            puVar18 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar17 + 0x4000) {
              *(undefined8 **)(puVar17 + 0x10) = puVar18 + 0x20;
              puVar17[0x12] = uVar25 + 1;
              local_140 = uVar27;
              local_68 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar19 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar18 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar18 = &PTR_LAB_149ef6a40;
              puVar18[1] = local_e0;
              puVar18[2] = uStack_d8;
              puVar18[3] = local_d0;
              puVar18[4] = CONCAT44(uStack_c4,local_c8);
              puVar18[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar18 + 6) = plStack_b8._0_1_;
              if (puVar18 + 1 == (longlong *)0x0) {
                puVar19[0x16] = local_128;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_14288de6e;
              }
              else {
                puVar19[0x16] = &LAB_14698f4c6;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
LAB_14288de6e:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar27 = 0x8ff;
                if (*local_180 != 1) goto LAB_14288dea1;
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                uVar25 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar19 + 0x1e) = uVar25;
                if (local_128 != 0) {
                  plVar21 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar21 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar21 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar19 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_14288dea1:
                *(int *)(puVar19 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar10 = (uint)(uVar27 >> 10) & 3;
                iVar8 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar10];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar8 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar19,L"GraphTask",uVar24,iVar8,0);
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar19,&local_128);
              iVar8 = (int)local_150;
              uVar27 = local_150 & 0xffffffff;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27);
              }
              puVar20 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar20 = local_178;
              }
              *(undefined8 **)(puVar20 + (longlong)iVar8 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_14288dfbc;
            }
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar10 = *puVar17;
            *puVar17 = *puVar17 + uVar25 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar25) != 0xffffffff) goto LAB_14288dc7f;
            puVar17 = (uint *)*puVar3;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar3 = puVar17;
            uVar27 = (longlong)puVar17 + 0x67;
            uVar25 = 0;
          } while( true );
        }
LAB_14288e05e:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar9 = local_8c;
        break;
      }
      uVar27 = 0;
LAB_14288d52c:
      iVar8 = (int)uVar27;
      if ((longlong)uVar27 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar7 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar7 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar21 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar14 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar6 = plStack_80;
          if ((plVar14 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar6 = plVar14, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar19 = (undefined8 *)*plStack_80;
              plStack_80 = plVar14;
              (*(code *)*puVar19)(plVar21);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar6 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                plVar6 = plStack_80;
              }
            }
          }
          plStack_80 = plVar6;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar15 = local_88[1];
          local_88[1] = lVar15 + local_138;
          if ((ulonglong)(local_88[2] - lVar15) < local_138) {
            FUN_14112c458();
          }
        }
        uVar25 = (int)param_1[0x12] - iVar8;
        if ((longlong)(ulonglong)(iVar8 + (uint)local_6a) <= param_1[0x12]) {
          uVar25 = (uint)local_6a;
        }
        lVar15 = *local_88;
        lVar29 = (int)uVar25 * local_198;
        uVar9 = FUN_144b77d20(param_1[0xe],uVar27,local_140 & 0xffffffff);
        lVar15 = FUN_144b82e30(param_1[0xe],uVar9,lVar15,lVar29);
        if (lVar15 != -1) {
          uStack_d8 = &local_1c0;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar17 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar25;
          local_b0 = iVar8;
          if (puVar17 != (uint *)0x0) goto LAB_14288d770;
LAB_14288d709:
          puVar19 = local_130;
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar16 = (undefined4 *)*puVar19;
          *puVar19 = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          FUN_140217a48(puVar3);
          puVar17 = (uint *)*puVar3;
LAB_14288d770:
          uVar27 = *(longlong *)(puVar17 + 0x10) + 0xf;
          uVar25 = puVar17[0x12];
          do {
            puVar19 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar19 + 0x20 <= puVar17 + 0x4000) {
              *(undefined8 **)(puVar17 + 0x10) = puVar19 + 0x20;
              puVar17[0x12] = uVar25 + 1;
              local_190 = uVar27;
              local_68 = puVar19;
              FUN_1447247dc(puVar19,0);
              puVar19 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar18 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar18 = &PTR_LAB_149ef6a20;
              puVar18[1] = local_e0;
              puVar18[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar18 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar18 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar18[5] = plStack_c0;
              puVar18[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar18 + 0x3c) = local_ac;
              *(int *)(puVar18 + 7) = local_b0;
              if (puVar18 + 1 == (longlong *)0x0) {
                puVar19[0x16] = local_128;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_14288d903;
              }
              else {
                puVar19[0x16] = &LAB_14698f278;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
LAB_14288d903:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar27 = 0x8ff;
                if (*local_180 != 1) goto LAB_14288d936;
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                uVar25 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar19 + 0x1e) = uVar25;
                if (local_128 != 0) {
                  plVar21 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar21 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar21 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar19 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_14288d936:
                *(int *)(puVar19 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar10 = (uint)(uVar27 >> 10) & 3;
                iVar26 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar10];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar26 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar19,L"GraphTask",uVar24,iVar26,0);
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar19,&local_128);
              uVar27 = local_150;
              iVar26 = (int)local_150;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27 & 0xffffffff);
              }
              puVar20 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar20 = local_178;
              }
              *(undefined8 **)(puVar20 + (longlong)iVar26 * 8) = local_68;
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar27 = (ulonglong)(iVar8 + (uint)local_6a);
              goto LAB_14288d52c;
            }
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar10 = *puVar17;
            *puVar17 = *puVar17 + uVar25 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar25) != 0xffffffff) goto LAB_14288d709;
            puVar17 = (uint *)*puVar3;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar3 = puVar17;
            uVar27 = (longlong)puVar17 + 0x67;
            uVar25 = 0;
          } while( true );
        }
        goto LAB_14288e05e;
      }
LAB_14288dfbc:
      uVar23 = CONCAT71((int7)((ulonglong)local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar9);
  FUN_14588b8d6(local_178);
  while (plVar21 = local_a0, local_a0 != (longlong *)0x0) {
    plVar14 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar14);
    FUN_1400020a8(plVar21);
  }
  return;
}



// FUNCTION 14288e10c Unwind@14288e10c body=38 status=ok
// SIG undefined Unwind@14288e10c(void)

void Unwind_14288e10c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288e134 Unwind@14288e134 body=193 status=ok
// SIG undefined Unwind@14288e134(void)

void Unwind_14288e134(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x78) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd8);
        **(undefined8 **)(param_2 + 0xd8) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14288e1f6 Unwind@14288e1f6 body=83 status=ok
// SIG undefined Unwind@14288e1f6(void)

void Unwind_14288e1f6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 14288e24a Unwind@14288e24a body=83 status=ok
// SIG undefined Unwind@14288e24a(void)

void Unwind_14288e24a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 14288e29e Unwind@14288e29e body=67 status=ok
// SIG undefined Unwind@14288e29e(void)

void Unwind_14288e29e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x148);
  return;
}



// FUNCTION 14288e2e2 Unwind@14288e2e2 body=67 status=ok
// SIG undefined Unwind@14288e2e2(void)

void Unwind_14288e2e2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 14288e326 Unwind@14288e326 body=38 status=ok
// SIG undefined Unwind@14288e326(void)

void Unwind_14288e326(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288e34e Unwind@14288e34e body=193 status=ok
// SIG undefined Unwind@14288e34e(void)

void Unwind_14288e34e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 200) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd8);
        **(undefined8 **)(param_2 + 0xd8) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14288e410 Unwind@14288e410 body=95 status=ok
// SIG undefined Unwind@14288e410(void)

void Unwind_14288e410(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 14288e470 Unwind@14288e470 body=95 status=ok
// SIG undefined Unwind@14288e470(void)

void Unwind_14288e470(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 14288e4d0 Unwind@14288e4d0 body=67 status=ok
// SIG undefined Unwind@14288e4d0(void)

void Unwind_14288e4d0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  return;
}



// FUNCTION 14288e514 Unwind@14288e514 body=67 status=ok
// SIG undefined Unwind@14288e514(void)

void Unwind_14288e514(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 14288e558 Unwind@14288e558 body=38 status=ok
// SIG undefined Unwind@14288e558(void)

void Unwind_14288e558(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288e580 Unwind@14288e580 body=131 status=ok
// SIG undefined Unwind@14288e580(void)

void Unwind_14288e580(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14288e604 Unwind@14288e604 body=76 status=ok
// SIG undefined Unwind@14288e604(void)

void Unwind_14288e604(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  FUN_14698d9aa(param_2 + 0x128);
  return;
}



// FUNCTION 14288e650 Unwind@14288e650 body=76 status=ok
// SIG undefined Unwind@14288e650(void)

void Unwind_14288e650(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  FUN_14698d9aa(param_2 + 0x128);
  return;
}



// FUNCTION 14288e69c FUN_14288e69c body=2803 status=ok
// SIG undefined FUN_14288e69c(void)

void FUN_14288e69c(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe00;
  undefined2 uVar32;
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
  longlong *****local_1d8;
  undefined8 *local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined8 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [32];
  undefined1 *local_170;
  undefined8 local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_1a0 = *(undefined4 *)(param_1 + 0x13);
  uStack_19c = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_198 = *(undefined4 *)(param_1 + 0x14);
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  ppppplVar4 = param_1[0xe];
  local_1e8 = 0;
  local_1e0[0] = 0;
  local_62 = param_3;
  local_1e8 = FUN_144b77940(ppppplVar4);
  FUN_144b77e20(ppppplVar4,0x100,local_1e0);
  local_1d0 = (undefined8 *)&local_1a0;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_1e8;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_14288e892;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_14288e892;
  }
  uVar30 = 1;
LAB_14288e892:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c) >> 1) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_61 = param_2;
    if ((int)local_168._4_4_ < iVar11) {
      FUN_14473dbc4(local_190,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_14288e99c:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe00 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe00 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe00);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_9c;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_14288ebe5;
LAB_14288eb79:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_14288ebe5:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef6a60;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_14288ed85;
                }
                else {
                  puVar20[0x16] = &LAB_14698f5a8;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_14288ed85:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_14288edbe;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_14288edbe:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_168;
                iVar28 = (int)local_168;
                uVar27 = (int)local_168 + 1;
                local_168 = CONCAT44(local_168._4_4_,uVar27);
                if (local_168._4_4_ < uVar27) {
                  FUN_14476a5c8(local_190,uVar29 & 0xffffffff);
                }
                puVar21 = local_170;
                if (local_170 == (undefined1 *)0x0) {
                  puVar21 = local_190;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_14288e99c;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_14288eb79;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_14288effb;
        }
        local_9c = local_9c + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = (longlong ******)&local_1a0;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14698f880;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_14288effb:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,uVar30);
  FUN_14588b8d6(local_190);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 14288f190 Unwind@14288f190 body=38 status=ok
// SIG undefined Unwind@14288f190(void)

void Unwind_14288f190(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288f1b8 Unwind@14288f1b8 body=196 status=ok
// SIG undefined Unwind@14288f1b8(void)

void Unwind_14288f1b8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x78) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x168);
        **(undefined8 **)(param_2 + 0x168) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14288f27c Unwind@14288f27c body=95 status=ok
// SIG undefined Unwind@14288f27c(void)

void Unwind_14288f27c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 14288f2dc Unwind@14288f2dc body=95 status=ok
// SIG undefined Unwind@14288f2dc(void)

void Unwind_14288f2dc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 14288f33c Unwind@14288f33c body=64 status=ok
// SIG undefined Unwind@14288f33c(void)

void Unwind_14288f33c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  return;
}



// FUNCTION 14288f37c Unwind@14288f37c body=67 status=ok
// SIG undefined Unwind@14288f37c(void)

void Unwind_14288f37c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 14288f3c0 Unwind@14288f3c0 body=131 status=ok
// SIG undefined Unwind@14288f3c0(void)

void Unwind_14288f3c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x98,*(undefined4 *)(param_2 + 0x1b0));
  FUN_14588b8d6(param_2 + 0x98);
  while (puVar1 = *(undefined8 **)(param_2 + 0x178), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x178) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14288f444 Unwind@14288f444 body=76 status=ok
// SIG undefined Unwind@14288f444(void)

void Unwind_14288f444(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  FUN_14698d9aa(param_2 + 200);
  return;
}



// FUNCTION 14288f490 Unwind@14288f490 body=38 status=ok
// SIG undefined Unwind@14288f490(void)

void Unwind_14288f490(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14288f4b8 FUN_14288f4b8 body=4072 status=ok
// SIG undefined FUN_14288f4b8(void)

void FUN_14288f4b8(longlong *param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  byte local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [32];
  undefined1 *local_168;
  undefined8 local_160;
  short local_156;
  uint local_154;
  int *local_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  int local_100;
  undefined1 local_fc;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  char local_73;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_73 = param_3;
  local_1a0 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_198 = (undefined4)param_1[0x13];
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_190 = (undefined4)param_1[0x14];
  uStack_18c = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_156 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_156);
  sVar4 = local_156;
  bVar26 = 1;
  local_b0 = CONCAT44(local_b0._4_4_,1);
  local_1b7 = param_2;
  if (local_156 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1b7 = 1;
  }
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)param_1[0x11]);
  lVar27 = param_1[0x12];
  lVar14 = param_1[0xe];
  local_1d8 = 0;
  local_1d0[0] = 0;
  local_61 = param_2;
  local_1d8 = FUN_144b77940(lVar14);
  FUN_144b77e20(lVar14,0x100,local_1d0);
  local_1b8 = local_61;
  local_1b4 = local_70._0_4_;
  local_1a8 = &local_1d8;
  if (sVar4 == 2) {
    local_b0 = CONCAT44(local_b0._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1c8 = param_1;
  local_1c0 = (longlong *)&local_198;
  local_1b6 = bVar26;
  local_1b0 = (int)lVar27;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_14288f65e;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_14288f65e;
  }
  uVar8 = 1;
LAB_14288f65e:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_140 < (ulonglong)bVar26 * param_1[0x11] * (longlong)(int)uVar21 >> 1) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_160._4_4_ < iVar7) {
      FUN_14473dbc4(local_188,iVar7);
    }
    local_154 = (uint)(byte)local_b0;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar14 + 0x308);
    local_138 = (undefined8 *)(lVar14 + 0x310);
    local_150 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_154 <= (uint)uVar21) break;
      local_b0 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_f0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_f0[1] = (longlong)&DAT_100000001;
          *local_f0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_f0 + 2;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          uStack_128._0_4_ = SUB84(local_f0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
          if (local_f0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
            plVar13 = local_f0;
          }
          local_f8 = 0;
          local_88 = local_130;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_f0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_f8);
          FUN_14698d9aa(&local_130);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_140;
          if ((ulonglong)(local_88[2] - lVar14) < local_140) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_140);
        puVar18 = local_138;
        if (lVar14 != -1) {
          uStack_128 = &local_a8;
          local_120 = &local_1c8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar1;
          local_130 = param_1;
          if (puVar16 != (uint *)0x0) goto LAB_14288ff3a;
LAB_14288fed7:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar1 = puVar15;
          FUN_140217a48(puVar1);
          puVar16 = (uint *)*puVar1;
LAB_14288ff3a:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_148 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6aa0;
              puVar17[1] = local_130;
              puVar17[2] = uStack_128;
              puVar17[3] = local_120;
              puVar17[4] = CONCAT44(uStack_114,local_118);
              puVar17[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_108._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_f8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
                if (local_f8 != 0) goto LAB_1428900cf;
              }
              else {
                puVar18[0x16] = &LAB_14698fb34;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
LAB_1428900cf:
                local_f8 = 0;
              }
              local_e8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
                uVar25 = 0x8ff;
                if (*local_150 != 1) goto LAB_142890105;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_f8 != 0) {
                  plVar20 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_d8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_142890105:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_f8 = CONCAT71(local_f8._1_7_,1);
              FUN_1447439e4(puVar18,&local_f8);
              iVar7 = (int)local_160;
              uVar25 = local_160 & 0xffffffff;
              uVar23 = (int)local_160 + 1;
              local_160 = CONCAT44(local_160._4_4_,uVar23);
              if (local_160._4_4_ < uVar23) {
                FUN_14476a5c8(local_188,uVar25);
              }
              puVar19 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar19 = local_188;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_14289022d;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14288fed7;
            puVar16 = (uint *)*puVar1;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar1 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_1428902da:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_1428902ff;
      }
      uVar25 = 0;
LAB_14288f756:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_f0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_f0[1] = (longlong)&DAT_100000001;
          *local_f0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_f0 + 2;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          uStack_128._0_4_ = SUB84(local_f0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
          if (local_f0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
            plVar13 = local_f0;
          }
          local_f8 = 0;
          local_88 = local_130;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_f0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_f8);
          FUN_14698d9aa(&local_130);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_140;
          if ((ulonglong)(local_88[2] - lVar14) < local_140) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_1a0;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          uStack_128 = &local_1c8;
          local_120 = &local_a8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_fc = (undefined1)local_b0;
          puVar16 = (uint *)*puVar1;
          local_130 = param_1;
          local_118 = uVar23;
          local_100 = iVar7;
          if (puVar16 != (uint *)0x0) goto LAB_14288f9a5;
LAB_14288f93e:
          puVar18 = local_138;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar1 = puVar15;
          FUN_140217a48(puVar1);
          puVar16 = (uint *)*puVar1;
LAB_14288f9a5:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_148 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_f8 = 0;
              local_e8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6a80;
              puVar17[1] = local_130;
              puVar17[2] = uStack_128;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar17[5] = plStack_110;
              puVar17[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_fc;
              *(int *)(puVar17 + 7) = local_100;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_f8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
                if (local_f8 != 0) goto LAB_14288fb3d;
              }
              else {
                puVar18[0x16] = &LAB_14698f89a;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_bc;
                *(undefined4 *)(puVar18 + 0x1a) = local_d8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_d4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_d0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_cc;
LAB_14288fb3d:
                local_f8 = 0;
              }
              local_e8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
                uVar25 = 0x8ff;
                if (*local_150 != 1) goto LAB_14288fb73;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_f8 != 0) {
                  plVar20 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_d8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14288fb73:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_f8 = CONCAT71(local_f8._1_7_,1);
              FUN_1447439e4(puVar18,&local_f8);
              uVar25 = local_160;
              iVar24 = (int)local_160;
              uVar23 = (int)local_160 + 1;
              local_160 = CONCAT44(local_160._4_4_,uVar23);
              if (local_160._4_4_ < uVar23) {
                FUN_14476a5c8(local_188,uVar25 & 0xffffffff);
              }
              puVar19 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar19 = local_188;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_14288f756;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14288f93e;
            puVar16 = (uint *)*puVar1;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar1 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_1428902da;
      }
LAB_14289022d:
      uVar25 = CONCAT71((int7)(local_b0 >> 8),(char)local_b0 + '\x01');
    }
    uVar8 = local_8c;
    if (local_73 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_188,local_8c);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_150 != 2)) {
        if (*local_150 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      local_f8 = 0;
      local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_14698fc16;
      uStack_128 = &local_88;
      plStack_80 = (longlong *)&local_198;
      FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
      uVar8 = local_8c;
    }
  }
LAB_1428902ff:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_188,uVar8);
  FUN_14588b8d6(local_188);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428904a0 Unwind@1428904a0 body=38 status=ok
// SIG undefined Unwind@1428904a0(void)

void Unwind_1428904a0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428904c8 Unwind@1428904c8 body=193 status=ok
// SIG undefined Unwind@1428904c8(void)

void Unwind_1428904c8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xd0) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xe0);
        **(undefined8 **)(param_2 + 0xe0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289058a Unwind@14289058a body=83 status=ok
// SIG undefined Unwind@14289058a(void)

void Unwind_14289058a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428905de Unwind@1428905de body=83 status=ok
// SIG undefined Unwind@1428905de(void)

void Unwind_1428905de(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 142890632 Unwind@142890632 body=67 status=ok
// SIG undefined Unwind@142890632(void)

void Unwind_142890632(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x108);
  return;
}



// FUNCTION 142890676 Unwind@142890676 body=67 status=ok
// SIG undefined Unwind@142890676(void)

void Unwind_142890676(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 1428906ba Unwind@1428906ba body=38 status=ok
// SIG undefined Unwind@1428906ba(void)

void Unwind_1428906ba(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428906e2 Unwind@1428906e2 body=193 status=ok
// SIG undefined Unwind@1428906e2(void)

void Unwind_1428906e2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xd0) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xe0);
        **(undefined8 **)(param_2 + 0xe0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428907a4 Unwind@1428907a4 body=95 status=ok
// SIG undefined Unwind@1428907a4(void)

void Unwind_1428907a4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 142890804 Unwind@142890804 body=95 status=ok
// SIG undefined Unwind@142890804(void)

void Unwind_142890804(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 142890864 Unwind@142890864 body=67 status=ok
// SIG undefined Unwind@142890864(void)

void Unwind_142890864(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  return;
}



// FUNCTION 1428908a8 Unwind@1428908a8 body=67 status=ok
// SIG undefined Unwind@1428908a8(void)

void Unwind_1428908a8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 400);
  return;
}



// FUNCTION 1428908ec Unwind@1428908ec body=131 status=ok
// SIG undefined Unwind@1428908ec(void)

void Unwind_1428908ec(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x18c));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x178), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x178) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142890970 Unwind@142890970 body=76 status=ok
// SIG undefined Unwind@142890970(void)

void Unwind_142890970(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 1428909bc Unwind@1428909bc body=76 status=ok
// SIG undefined Unwind@1428909bc(void)

void Unwind_1428909bc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 142890a08 Unwind@142890a08 body=38 status=ok
// SIG undefined Unwind@142890a08(void)

void Unwind_142890a08(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142890a30 FUN_142890a30 body=2459 status=ok
// SIG undefined FUN_142890a30(void)

void FUN_142890a30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  longlong local_1b8;
  undefined4 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined8 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1d8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1d0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1cc = *(undefined4 *)(param_1 + 0xa4);
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar6 = local_ba;
  bVar27 = 1;
  bVar29 = local_ba == 2;
  if (!bVar29) {
    bVar27 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  local_1c8 = 0;
  local_1c0[0] = 0;
  local_1c8 = FUN_144b77940(uVar4);
  FUN_144b77e20(uVar4,0x100,local_1c0);
  local_1b0 = &local_1d8;
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_1c8;
  bVar21 = 1;
  if (sVar6 == 2) {
    bVar21 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a7 = bVar29 * '\x03' + '\x01';
  local_1a6 = bVar27;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    local_74 = 0xff;
    if (iVar9 != 1) goto LAB_142890c21;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_142890c21;
  }
  local_74 = 1;
LAB_142890c21:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)(longlong)(int)((uint)bVar27 * local_6c * local_70) >> 1) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)local_150._4_4_ < iVar9) {
      FUN_14473dbc4(local_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_b0 = (undefined8 *)(lVar14 + 0x310);
    local_190 = (int *)(lVar14 + 0xc60);
    local_b4 = (uint)bVar21;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + local_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (local_6c + iVar9 <= lVar14) {
          iVar5 = local_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_142890d1b:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar18 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar18 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar18) < local_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar26,iVar9,0,
                                 (short)local_b8);
          if (-1 < lVar14) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(local_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_142890f6d;
LAB_142890f03:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_142890f6d:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                local_188 = uVar25;
                local_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef6ac0;
                puVar17[1] = local_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,local_f0);
                puVar17[4] = local_e8;
                puVar17[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = local_d0;
                puVar17[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = local_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_1428910fc;
                }
                else {
                  puVar18[0x16] = &LAB_14698fc30;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428910fc:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*local_190 != 1) goto LAB_14289112f;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(local_68 + 0x1e) = uVar23;
                  puVar18 = local_68;
                  if (local_148 != 0) {
                    plVar20 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar18 = local_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_14289112f:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar18,&local_148);
                uVar25 = local_150;
                iVar24 = (int)local_150;
                uVar23 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar23);
                if (local_150._4_4_ < uVar23) {
                  FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
                }
                puVar19 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar19 = local_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar26 = iVar26 + local_70;
                iVar28 = iVar28 + 1;
                goto LAB_142890d1b;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_142890f03;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_142891352;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_142891352:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar18 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1428913cc Unwind@1428913cc body=38 status=ok
// SIG undefined Unwind@1428913cc(void)

void Unwind_1428913cc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428913f4 Unwind@1428913f4 body=196 status=ok
// SIG undefined Unwind@1428913f4(void)

void Unwind_1428913f4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428914b8 Unwind@1428914b8 body=95 status=ok
// SIG undefined Unwind@1428914b8(void)

void Unwind_1428914b8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 142891518 Unwind@142891518 body=95 status=ok
// SIG undefined Unwind@142891518(void)

void Unwind_142891518(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 142891578 Unwind@142891578 body=67 status=ok
// SIG undefined Unwind@142891578(void)

void Unwind_142891578(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  return;
}



// FUNCTION 1428915bc Unwind@1428915bc body=67 status=ok
// SIG undefined Unwind@1428915bc(void)

void Unwind_1428915bc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 142891600 Unwind@142891600 body=38 status=ok
// SIG undefined Unwind@142891600(void)

void Unwind_142891600(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142891628 Unwind@142891628 body=131 status=ok
// SIG undefined Unwind@142891628(void)

void Unwind_142891628(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x194));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428916ac Unwind@1428916ac body=76 status=ok
// SIG undefined Unwind@1428916ac(void)

void Unwind_1428916ac(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xc0);
  FUN_14698d9aa(param_2 + 0x108);
  return;
}



// FUNCTION 1428916f8 FUN_1428916f8 body=3679 status=ok
// SIG undefined FUN_1428916f8(void)

void FUN_1428916f8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  byte bVar28;
  longlong lVar29;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  longlong *local_1c0;
  undefined4 *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  byte local_1ae;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  ulonglong local_190;
  undefined8 local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  undefined8 local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int local_b0;
  undefined1 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_198 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1e0 = (undefined4)param_1[0x13];
  uStack_1dc = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_1d8 = (undefined4)param_1[0x14];
  uStack_1d4 = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar5 = local_146;
  bVar28 = 1;
  local_68 = (undefined8 *)CONCAT44(local_68._4_4_,(uint)(local_146 == 2) * 3 + 1);
  if (local_146 != 2) {
    bVar28 = *(byte *)((longlong)param_1 + 0x7e);
  }
  lVar29 = param_1[0x11];
  lVar4 = param_1[0x12];
  lVar15 = param_1[0xe];
  local_1d0 = 0;
  local_1c8[0] = 0;
  local_1d0 = FUN_144b77940(lVar15);
  FUN_144b77e20(lVar15,0x100,local_1c8);
  local_1b8 = &local_1e0;
  local_1b0 = 4;
  local_1af = SUB81(local_68,0);
  local_1a0 = &local_1d0;
  uVar25 = 1;
  if (sVar5 == 2) {
    uVar25 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1c0 = param_1;
  local_1ae = bVar28;
  local_1ac = (int)lVar29;
  local_1a8 = (int)lVar4;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    uVar9 = 0xff;
    if (iVar8 != 1) goto LAB_14289187e;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_14289187e;
  }
  uVar9 = 1;
LAB_14289187e:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar13 = (ulonglong)local_6a;
  uVar27 = param_1[0x12];
  uVar22 = uVar13;
  if ((longlong)uVar27 < (longlong)uVar13) {
    uVar22 = uVar27;
  }
  if (uVar13 == 0) {
    uVar22 = uVar27;
  }
  if (local_138 < (ulonglong)bVar28 * param_1[0x11] * (longlong)(int)uVar22 >> 1) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar9;
    iVar8 = FUN_144b77d80(param_1[0xe]);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    local_144 = uVar25 & 0xff;
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar15 + 0x308);
    local_130 = (undefined8 *)(lVar15 + 0x310);
    local_180 = (int *)(lVar15 + 0xc60);
    uVar23 = 0;
    while( true ) {
      local_140 = CONCAT44(local_140._4_4_,(uint)uVar23) & 0xffffffff000000ff;
      uVar9 = local_8c;
      if (local_144 <= ((uint)uVar23 & 0xff)) break;
      local_188 = uVar23;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar7 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar7 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar21 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar14 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar6 = plStack_80;
          if ((plVar14 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar6 = plVar14, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar19 = (undefined8 *)*plStack_80;
              plStack_80 = plVar14;
              (*(code *)*puVar19)(plVar21);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar6 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                plVar6 = plStack_80;
              }
            }
          }
          plStack_80 = plVar6;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar15 = local_88[1];
          local_88[1] = lVar15 + local_138;
          if ((ulonglong)(local_88[2] - lVar15) < local_138) {
            FUN_14112c458();
          }
        }
        lVar15 = FUN_144b82e30(param_1[0xe],local_140 & 0xffffffff,*local_88,local_138);
        puVar19 = local_130;
        if (lVar15 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1c0;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar23);
          puVar17 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar17 != (uint *)0x0) goto LAB_14289212d;
LAB_1428920ca:
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar16 = (undefined4 *)*puVar19;
          *puVar19 = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          FUN_140217a48(puVar3);
          puVar17 = (uint *)*puVar3;
LAB_14289212d:
          uVar27 = *(longlong *)(puVar17 + 0x10) + 0xf;
          uVar25 = puVar17[0x12];
          do {
            puVar18 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar17 + 0x4000) {
              *(undefined8 **)(puVar17 + 0x10) = puVar18 + 0x20;
              puVar17[0x12] = uVar25 + 1;
              local_140 = uVar27;
              local_68 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar19 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar18 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar18 = &PTR_LAB_149ef6b00;
              puVar18[1] = local_e0;
              puVar18[2] = uStack_d8;
              puVar18[3] = local_d0;
              puVar18[4] = CONCAT44(uStack_c4,local_c8);
              puVar18[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar18 + 6) = plStack_b8._0_1_;
              if (puVar18 + 1 == (longlong *)0x0) {
                puVar19[0x16] = local_128;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428922b9;
              }
              else {
                puVar19[0x16] = &LAB_14699018e;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
LAB_1428922b9:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar27 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428922ec;
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                uVar25 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar19 + 0x1e) = uVar25;
                if (local_128 != 0) {
                  plVar21 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar21 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar21 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar19 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_1428922ec:
                *(int *)(puVar19 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar10 = (uint)(uVar27 >> 10) & 3;
                iVar8 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar10];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar8 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar19,L"GraphTask",uVar24,iVar8,0);
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar19,&local_128);
              iVar8 = (int)local_150;
              uVar27 = local_150 & 0xffffffff;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27);
              }
              puVar20 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar20 = local_178;
              }
              *(undefined8 **)(puVar20 + (longlong)iVar8 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_142892407;
            }
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar10 = *puVar17;
            *puVar17 = *puVar17 + uVar25 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar25) != 0xffffffff) goto LAB_1428920ca;
            puVar17 = (uint *)*puVar3;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar3 = puVar17;
            uVar27 = (longlong)puVar17 + 0x67;
            uVar25 = 0;
          } while( true );
        }
LAB_1428924a9:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar9 = local_8c;
        break;
      }
      uVar27 = 0;
LAB_142891977:
      iVar8 = (int)uVar27;
      if ((longlong)uVar27 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar7 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar7 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar21 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar14 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar6 = plStack_80;
          if ((plVar14 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar6 = plVar14, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar19 = (undefined8 *)*plStack_80;
              plStack_80 = plVar14;
              (*(code *)*puVar19)(plVar21);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar6 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                plVar6 = plStack_80;
              }
            }
          }
          plStack_80 = plVar6;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar15 = local_88[1];
          local_88[1] = lVar15 + local_138;
          if ((ulonglong)(local_88[2] - lVar15) < local_138) {
            FUN_14112c458();
          }
        }
        uVar25 = (int)param_1[0x12] - iVar8;
        if ((longlong)(ulonglong)(iVar8 + (uint)local_6a) <= param_1[0x12]) {
          uVar25 = (uint)local_6a;
        }
        lVar15 = *local_88;
        lVar29 = (int)uVar25 * local_198;
        uVar9 = FUN_144b77d20(param_1[0xe],uVar27,local_140 & 0xffffffff);
        lVar15 = FUN_144b82e30(param_1[0xe],uVar9,lVar15,lVar29);
        if (lVar15 != -1) {
          uStack_d8 = &local_1c0;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar17 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar25;
          local_b0 = iVar8;
          if (puVar17 != (uint *)0x0) goto LAB_142891bbb;
LAB_142891b54:
          puVar19 = local_130;
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar16 = (undefined4 *)*puVar19;
          *puVar19 = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          FUN_140217a48(puVar3);
          puVar17 = (uint *)*puVar3;
LAB_142891bbb:
          uVar27 = *(longlong *)(puVar17 + 0x10) + 0xf;
          uVar25 = puVar17[0x12];
          do {
            puVar19 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar19 + 0x20 <= puVar17 + 0x4000) {
              *(undefined8 **)(puVar17 + 0x10) = puVar19 + 0x20;
              puVar17[0x12] = uVar25 + 1;
              local_190 = uVar27;
              local_68 = puVar19;
              FUN_1447247dc(puVar19,0);
              puVar19 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar18 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar18 = &PTR_LAB_149ef6ae0;
              puVar18[1] = local_e0;
              puVar18[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar18 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar18 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar18[5] = plStack_c0;
              puVar18[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar18 + 0x3c) = local_ac;
              *(int *)(puVar18 + 7) = local_b0;
              if (puVar18 + 1 == (longlong *)0x0) {
                puVar19[0x16] = local_128;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_142891d4e;
              }
              else {
                puVar19[0x16] = &LAB_14698ff40;
                puVar19[0x18] = puVar18;
                *(undefined4 *)(puVar19 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar19 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar19 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar19 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_fc;
LAB_142891d4e:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar27 = 0x8ff;
                if (*local_180 != 1) goto LAB_142891d81;
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                uVar25 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar19 + 0x1e) = uVar25;
                if (local_128 != 0) {
                  plVar21 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar21 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar21 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar19 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_142891d81:
                *(int *)(puVar19 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar10 = (uint)(uVar27 >> 10) & 3;
                iVar26 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar10];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar26 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar19,L"GraphTask",uVar24,iVar26,0);
              if (puVar19 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar19,&local_128);
              uVar27 = local_150;
              iVar26 = (int)local_150;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27 & 0xffffffff);
              }
              puVar20 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar20 = local_178;
              }
              *(undefined8 **)(puVar20 + (longlong)iVar26 * 8) = local_68;
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar27 = (ulonglong)(iVar8 + (uint)local_6a);
              goto LAB_142891977;
            }
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar10 = *puVar17;
            *puVar17 = *puVar17 + uVar25 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar25) != 0xffffffff) goto LAB_142891b54;
            puVar17 = (uint *)*puVar3;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar3 = puVar17;
            uVar27 = (longlong)puVar17 + 0x67;
            uVar25 = 0;
          } while( true );
        }
        goto LAB_1428924a9;
      }
LAB_142892407:
      uVar23 = CONCAT71((int7)((ulonglong)local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar9);
  FUN_14588b8d6(local_178);
  while (plVar21 = local_a0, local_a0 != (longlong *)0x0) {
    plVar14 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar14);
    FUN_1400020a8(plVar21);
  }
  return;
}



// FUNCTION 142892558 Unwind@142892558 body=38 status=ok
// SIG undefined Unwind@142892558(void)

void Unwind_142892558(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142892580 Unwind@142892580 body=193 status=ok
// SIG undefined Unwind@142892580(void)

void Unwind_142892580(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x78) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd8);
        **(undefined8 **)(param_2 + 0xd8) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142892642 Unwind@142892642 body=83 status=ok
// SIG undefined Unwind@142892642(void)

void Unwind_142892642(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 142892696 Unwind@142892696 body=83 status=ok
// SIG undefined Unwind@142892696(void)

void Unwind_142892696(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428926ea Unwind@1428926ea body=67 status=ok
// SIG undefined Unwind@1428926ea(void)

void Unwind_1428926ea(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x148);
  return;
}



// FUNCTION 14289272e Unwind@14289272e body=67 status=ok
// SIG undefined Unwind@14289272e(void)

void Unwind_14289272e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 142892772 Unwind@142892772 body=38 status=ok
// SIG undefined Unwind@142892772(void)

void Unwind_142892772(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289279a Unwind@14289279a body=193 status=ok
// SIG undefined Unwind@14289279a(void)

void Unwind_14289279a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 200) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd8);
        **(undefined8 **)(param_2 + 0xd8) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289285c Unwind@14289285c body=95 status=ok
// SIG undefined Unwind@14289285c(void)

void Unwind_14289285c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 1428928bc Unwind@1428928bc body=95 status=ok
// SIG undefined Unwind@1428928bc(void)

void Unwind_1428928bc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a0))(*(undefined8 **)(param_2 + 0x1a0),1);
    }
  }
  return;
}



// FUNCTION 14289291c Unwind@14289291c body=67 status=ok
// SIG undefined Unwind@14289291c(void)

void Unwind_14289291c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  return;
}



// FUNCTION 142892960 Unwind@142892960 body=67 status=ok
// SIG undefined Unwind@142892960(void)

void Unwind_142892960(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428929a4 Unwind@1428929a4 body=38 status=ok
// SIG undefined Unwind@1428929a4(void)

void Unwind_1428929a4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428929cc Unwind@1428929cc body=131 status=ok
// SIG undefined Unwind@1428929cc(void)

void Unwind_1428929cc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x90,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x90);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142892a50 Unwind@142892a50 body=76 status=ok
// SIG undefined Unwind@142892a50(void)

void Unwind_142892a50(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  FUN_14698d9aa(param_2 + 0x128);
  return;
}



// FUNCTION 142892a9c Unwind@142892a9c body=76 status=ok
// SIG undefined Unwind@142892a9c(void)

void Unwind_142892a9c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xe0);
  FUN_14698d9aa(param_2 + 0x128);
  return;
}



// FUNCTION 142892ae8 FUN_142892ae8 body=2734 status=ok
// SIG undefined FUN_142892ae8(void)

void FUN_142892ae8(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe10;
  undefined2 uVar32;
  longlong *****local_1d8;
  undefined8 *local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [32];
  undefined1 *local_170;
  undefined8 local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_a0;
  undefined1 local_99;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_1a0 = *(undefined4 *)(param_1 + 0x13);
  uStack_19c = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_198 = *(undefined4 *)(param_1 + 0x14);
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1d0 = (undefined8 *)&local_1a0;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_99;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_142892ca7;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_142892ca7;
  }
  uVar30 = 1;
LAB_142892ca7:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c)) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_62 = param_3;
    local_61 = param_2;
    if ((int)local_168._4_4_ < iVar11) {
      FUN_14473dbc4(local_190,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_a0 = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_142892daf:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe10 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe10 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe10);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_a0;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_142892ff5;
LAB_142892f89:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_142892ff5:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef6b20;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_142893195;
                }
                else {
                  puVar20[0x16] = &LAB_1469902e4;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_142893195:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428931cb;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_1428931cb:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_168;
                iVar28 = (int)local_168;
                uVar27 = (int)local_168 + 1;
                local_168 = CONCAT44(local_168._4_4_,uVar27);
                if (local_168._4_4_ < uVar27) {
                  FUN_14476a5c8(local_190,uVar29 & 0xffffffff);
                }
                puVar21 = local_170;
                if (local_170 == (undefined1 *)0x0) {
                  puVar21 = local_190;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_142892daf;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_142892f89;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_142893405;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = (longlong ******)&local_1a0;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699055c;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_142893405:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_190,uVar30);
  FUN_14588b8d6(local_190);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 142893596 Unwind@142893596 body=38 status=ok
// SIG undefined Unwind@142893596(void)

void Unwind_142893596(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428935be Unwind@1428935be body=196 status=ok
// SIG undefined Unwind@1428935be(void)

void Unwind_1428935be(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x68) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142893682 Unwind@142893682 body=95 status=ok
// SIG undefined Unwind@142893682(void)

void Unwind_142893682(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428936e2 Unwind@1428936e2 body=95 status=ok
// SIG undefined Unwind@1428936e2(void)

void Unwind_1428936e2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 142893742 Unwind@142893742 body=64 status=ok
// SIG undefined Unwind@142893742(void)

void Unwind_142893742(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 142893782 Unwind@142893782 body=67 status=ok
// SIG undefined Unwind@142893782(void)

void Unwind_142893782(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428937c6 Unwind@1428937c6 body=131 status=ok
// SIG undefined Unwind@1428937c6(void)

void Unwind_1428937c6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x88,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x88);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14289384a Unwind@14289384a body=76 status=ok
// SIG undefined Unwind@14289384a(void)

void Unwind_14289384a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 142893896 Unwind@142893896 body=38 status=ok
// SIG undefined Unwind@142893896(void)

void Unwind_142893896(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428938be FUN_1428938be body=4041 status=ok
// SIG undefined FUN_1428938be(void)

void FUN_1428938be(longlong *param_1,undefined1 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong **pplVar29;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_180 [32];
  undefined1 *local_160;
  undefined8 local_158;
  short local_14e;
  uint local_14c;
  int *local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined4 local_100;
  byte local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined1 local_a1;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_70;
  char local_64;
  undefined1 local_63;
  ushort local_62 [17];
  
  local_62[1] = 0xfffe;
  local_62[2] = 0xffff;
  local_62[3] = 0xffff;
  local_62[4] = 0xffff;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_1c8._0_4_ = (undefined4)param_1[0x13];
  local_1c8._4_4_ = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_1c0 = (undefined4)param_1[0x14];
  uStack_1bc = *(undefined4 *)((longlong)param_1 + 0xa4);
  local_14e = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_14e);
  bVar23 = 1;
  bVar25 = 1;
  local_1a7 = param_2;
  if (local_14e != 2) {
    local_1a7 = 1;
    bVar25 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = (undefined4 *)&local_1c8;
  local_198 = &local_a1;
  if (local_14e == 2) {
    bVar23 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a8 = param_2;
  local_1a6 = bVar25;
  local_98 = param_1;
  local_f8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_160 = (undefined1 *)0x0;
  local_158 = 0x400000000;
  local_f0 = local_f8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_142893a16;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_142893a16;
  }
  uVar7 = 1;
LAB_142893a16:
  plVar20 = local_98;
  local_62[0] = 0;
  FUN_144b77e20(local_98[0xe],0x116,local_62);
  uVar11 = (ulonglong)local_62[0];
  uVar28 = plVar20[0x12];
  uVar22 = uVar11;
  if ((longlong)uVar28 < (longlong)uVar11) {
    uVar22 = uVar28;
  }
  if (uVar11 == 0) {
    uVar22 = uVar28;
  }
  if (local_140 < (ulonglong)bVar25 * plVar20[0x11] * (longlong)(int)uVar22) {
    FUN_14020fad6(plVar20 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(plVar20[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    local_64 = param_3;
    if ((int)local_158._4_4_ < iVar6) {
      FUN_14473dbc4(local_180,iVar6);
    }
    local_14c = (uint)bVar23;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar13 + 0x308);
    local_138 = (undefined8 *)(lVar13 + 0x310);
    local_148 = (int *)(lVar13 + 0xc60);
    bVar25 = 0;
    plVar20 = local_98;
    local_63 = param_2;
    while( true ) {
      uVar26 = local_63;
      pplVar29 = &local_f8;
      local_a8 = (uint)bVar25;
      if (local_14c < local_a8 || local_14c == bVar25) break;
      if (local_62[0] == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(pplVar29,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar12 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar17 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar4 = plStack_80;
          if ((plVar17 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar4 = plVar17, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar17;
              (*(code *)*puVar18)(plVar12);
              LOCK();
              piVar3 = (int *)((longlong)plVar12 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(plVar20[0xe],local_a8,*local_88,local_140);
        puVar18 = local_138;
        if (lVar13 != -1) {
          local_120 = &local_1b8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,bVar25);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          if (puVar15 != (uint *)0x0) goto LAB_142894336;
LAB_1428942d3:
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          uStack_128 = pplVar29;
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
          pplVar29 = uStack_128;
LAB_142894336:
          puVar16 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 0xf);
          uVar27 = puVar15[0x12];
          do {
            puVar21 = (undefined8 *)((ulonglong)puVar16 & 0xfffffffffffffff0);
            if (puVar21 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar21 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_a0 = puVar16;
              local_70 = puVar21;
              uStack_128 = pplVar29;
              FUN_1447247dc(puVar21,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef6b60;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              puVar16[3] = local_120;
              puVar16[4] = CONCAT44(uStack_114,local_118);
              puVar16[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_108._0_1_;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428944c9;
              }
              else {
                puVar18[0x16] = &LAB_1469907a8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428944c9:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428944ff;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                  plVar20 = local_98;
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428944ff:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_142894622;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428942d3;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428946ce:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428946f4;
      }
      puVar18 = (undefined8 *)0x0;
LAB_142893b2f:
      if ((longlong)puVar18 < plVar20[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_70 = puVar18;
        cVar5 = FUN_14698d83a(&local_f8,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar12 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar17 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar17 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar4 = plStack_80 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              puVar16 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar16)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar17 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar17 = plStack_80;
              }
            }
          }
          plStack_80 = plVar17;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          plVar20 = local_98;
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        uVar27 = (int)plVar20[0x12] - (int)puVar18;
        if ((longlong)(ulonglong)((int)local_70 + (uint)local_62[0]) <= plVar20[0x12]) {
          uVar27 = (uint)local_62[0];
        }
        lVar13 = *local_88;
        lVar24 = (int)uVar27 * local_190;
        uVar7 = FUN_144b77d20(plVar20[0xe],local_70,local_a8);
        lVar13 = FUN_144b82e30(plVar20[0xe],uVar7,lVar13,lVar24);
        if (lVar13 != -1) {
          uStack_128 = &local_1b8;
          local_120 = &local_f8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_100 = SUB84(local_70,0);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          local_118 = uVar27;
          local_fc = bVar25;
          if (puVar15 != (uint *)0x0) goto LAB_142893d90;
LAB_142893d29:
          puVar18 = local_138;
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_142893d90:
          uVar28 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar27 = puVar15[0x12];
          do {
            puVar18 = (undefined8 *)(uVar28 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar18 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_188 = uVar28;
              local_a0 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_a0;
              *local_a0 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef6b40;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar16[5] = plStack_110;
              puVar16[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(byte *)((longlong)puVar16 + 0x3c) = local_fc;
              *(undefined4 *)(puVar16 + 7) = local_100;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_142893f2f;
              }
              else {
                puVar18[0x16] = &LAB_146990576;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_142893f2f:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_142893f65;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_142893f65:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_a0;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              puVar18 = (undefined8 *)(ulonglong)((int)local_70 + (uint)local_62[0]);
              plVar20 = local_98;
              goto LAB_142893b2f;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_142893d29;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428946ce;
      }
LAB_142894622:
      bVar25 = bVar25 + 1;
    }
    uVar7 = local_8c;
    if (local_64 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,local_8c);
      FUN_14698da02();
      plVar20 = local_98;
      if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
        if (*local_148 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
      }
      local_e8 = 0;
      local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_14699088a;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428946f4:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,uVar7);
  FUN_14588b8d6(local_180);
  while (plVar20 = local_f0, local_f0 != (longlong *)0x0) {
    plVar12 = local_f0 + 1;
    local_f0 = (longlong *)*local_f0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 142894888 Unwind@142894888 body=38 status=ok
// SIG undefined Unwind@142894888(void)

void Unwind_142894888(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428948b0 Unwind@1428948b0 body=193 status=ok
// SIG undefined Unwind@1428948b0(void)

void Unwind_1428948b0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x168) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142894972 Unwind@142894972 body=83 status=ok
// SIG undefined Unwind@142894972(void)

void Unwind_142894972(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428949c6 Unwind@1428949c6 body=83 status=ok
// SIG undefined Unwind@1428949c6(void)

void Unwind_1428949c6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 142894a1a Unwind@142894a1a body=64 status=ok
// SIG undefined Unwind@142894a1a(void)

void Unwind_142894a1a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 142894a5a Unwind@142894a5a body=67 status=ok
// SIG undefined Unwind@142894a5a(void)

void Unwind_142894a5a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 142894a9e Unwind@142894a9e body=38 status=ok
// SIG undefined Unwind@142894a9e(void)

void Unwind_142894a9e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142894ac6 Unwind@142894ac6 body=196 status=ok
// SIG undefined Unwind@142894ac6(void)

void Unwind_142894ac6(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x168) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142894b8a Unwind@142894b8a body=95 status=ok
// SIG undefined Unwind@142894b8a(void)

void Unwind_142894b8a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 142894bea Unwind@142894bea body=95 status=ok
// SIG undefined Unwind@142894bea(void)

void Unwind_142894bea(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 142894c4a Unwind@142894c4a body=64 status=ok
// SIG undefined Unwind@142894c4a(void)

void Unwind_142894c4a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 142894c8a Unwind@142894c8a body=67 status=ok
// SIG undefined Unwind@142894c8a(void)

void Unwind_142894c8a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 142894cce Unwind@142894cce body=131 status=ok
// SIG undefined Unwind@142894cce(void)

void Unwind_142894cce(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x88,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x88);
  while (puVar1 = *(undefined8 **)(param_2 + 0x118), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x118) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142894d52 Unwind@142894d52 body=76 status=ok
// SIG undefined Unwind@142894d52(void)

void Unwind_142894d52(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 142894d9e Unwind@142894d9e body=76 status=ok
// SIG undefined Unwind@142894d9e(void)

void Unwind_142894d9e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 142894dea Unwind@142894dea body=38 status=ok
// SIG undefined Unwind@142894dea(void)

void Unwind_142894dea(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142894e12 FUN_142894e12 body=2388 status=ok
// SIG undefined FUN_142894e12(void)

void FUN_142894e12(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  byte bVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  bool bVar28;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined4 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined1 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined1 local_75;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1c8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1c4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1c0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1bc = *(undefined4 *)(param_1 + 0xa4);
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar5 = local_ba;
  bVar20 = 1;
  bVar28 = local_ba == 2;
  if (!bVar28) {
    bVar20 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar8 == 0) ||
     (iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar8 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1b0 = &local_1c8;
  local_1a7 = bVar28 * '\x03' + '\x01';
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_75;
  bVar26 = 1;
  if (sVar5 == 2) {
    bVar26 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar20;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    local_74 = 0xff;
    if (iVar8 != 1) goto LAB_142894fd0;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_142894fd0;
  }
  local_74 = 1;
LAB_142894fd0:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)(longlong)(int)((uint)bVar20 * local_6c * local_70)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar8 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_b0 = (undefined8 *)(lVar13 + 0x310);
    local_190 = (int *)(lVar13 + 0xc60);
    local_b4 = (uint)bVar26;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar8 = 0; lVar13 = *(longlong *)(param_1 + 0x90), iVar8 < lVar13;
          iVar8 = iVar8 + local_6c) {
        iVar4 = (int)lVar13 - iVar8;
        if (local_6c + iVar8 <= lVar13) {
          iVar4 = local_6c;
        }
        iVar25 = 0;
        iVar27 = 0;
LAB_1428950c6:
        if ((longlong)iVar25 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar7 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar7 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar19 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar12 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar6 = plStack_80;
            if ((plVar12 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar6 = plVar12, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar17 = (undefined8 *)*plStack_80;
                plStack_80 = plVar12;
                (*(code *)*puVar17)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar6 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                  plVar6 = plStack_80;
                }
              }
            }
            plStack_80 = plVar6;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar17 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar17 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar17) < local_180) {
              FUN_14112c458();
            }
          }
          lVar13 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar25,iVar8,0,
                                 (short)local_b8);
          if (-1 < lVar13) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar25;
            if ((longlong)(local_70 + iVar25) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar15 = (uint *)*puVar3;
            iStack_ec = iVar4;
            iStack_d4 = iVar27;
            if (puVar15 != (uint *)0x0) goto LAB_14289530f;
LAB_1428952a5:
            uVar22 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar22 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar22 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar14 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            FUN_140217a48(puVar3);
            puVar15 = (uint *)*puVar3;
LAB_14289530f:
            uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
            uVar22 = puVar15[0x12];
            do {
              puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
              if (puVar17 + 0x20 <= puVar15 + 0x4000) {
                *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
                puVar15[0x12] = uVar22 + 1;
                local_188 = uVar24;
                local_68 = puVar17;
                FUN_1447247dc(puVar17,0);
                puVar17 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar16 = &PTR_LAB_149ef6b80;
                puVar16[1] = local_100;
                puVar16[2] = plStack_f8;
                puVar16[3] = CONCAT44(iStack_ec,local_f0);
                puVar16[4] = local_e8;
                puVar16[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar16 + 7) = local_d0;
                puVar16[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar16 + 1 == (longlong *)0x0) {
                  puVar17[0x16] = local_148;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_14289549b;
                }
                else {
                  puVar17[0x16] = &LAB_1469908a4;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_14289549b:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428954ce;
                  DVar10 = FUN_140ad26c0();
                  DVar11 = GetCurrentThreadId();
                  uVar22 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                  uVar24 = (ulonglong)uVar22;
                  *(uint *)(local_68 + 0x1e) = uVar22;
                  puVar17 = local_68;
                  if (local_148 != 0) {
                    plVar19 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar19 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar19 + 0x10))();
                    uVar24 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar17 = local_68;
                  }
                }
                else {
                  uVar24 = 0x6ff;
LAB_1428954ce:
                  *(int *)(puVar17 + 0x1e) = (int)uVar24;
                }
                uVar22 = (uint)uVar24;
                if ((uVar22 & 0xff) == 0xff) {
                  uVar9 = (uint)(uVar24 >> 10) & 3;
                  iVar23 = 0;
                  if ((uVar22 >> 9 & 1) == 0 || uVar9 < 2) {
                    uVar21 = (&DAT_149e38edc)[uVar9];
                  }
                  else {
                    uVar21 = 2;
                  }
                }
                else {
                  iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                  uVar21 = 5;
                }
                FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
                if (puVar17 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar17,&local_148);
                uVar24 = local_150;
                iVar23 = (int)local_150;
                uVar22 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar22);
                if (local_150._4_4_ < uVar22) {
                  FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
                }
                puVar18 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar18 = local_178;
                }
                *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar25 = iVar25 + local_70;
                iVar27 = iVar27 + 1;
                goto LAB_1428950c6;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428952a5;
              puVar15 = (uint *)*puVar3;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar3 = puVar15;
              uVar24 = (longlong)puVar15 + 0x67;
              uVar22 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_1428956ef;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428956ef:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar17 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar17);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 142895766 Unwind@142895766 body=38 status=ok
// SIG undefined Unwind@142895766(void)

void Unwind_142895766(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289578e Unwind@14289578e body=196 status=ok
// SIG undefined Unwind@14289578e(void)

void Unwind_14289578e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x70) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x148);
        **(undefined8 **)(param_2 + 0x148) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}


