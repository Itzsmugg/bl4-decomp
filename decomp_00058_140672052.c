// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140672052 FUN_140672052 body=73 status=ok
// SIG undefined FUN_140672052(void)

undefined8 FUN_140672052(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x5c)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14067209b FUN_14067209b body=194 status=ok
// SIG undefined FUN_14067209b(void)

void FUN_14067209b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14067215e(puVar1);
  *puVar1 = &PTR_FUN_14b7f5b90;
  puVar1[5] = &PTR_FUN_14b7f65f0;
  puVar1[6] = &PTR_LAB_14b7f6630;
  puVar1[0x55] = &PTR_FUN_14b7f6680;
  puVar1[0x56] = &PTR_FUN_14b7f6700;
  puVar1[0x57] = &PTR_FUN_14b7f6710;
  puVar1[0xc4] = &PTR_FUN_14b7f6740;
  puVar1[0xff] = &PTR_FUN_14b7f6750;
  puVar1[0x108] = &PTR_FUN_14b7f6760;
  puVar1[0x109] = &PTR_FUN_14b7f6800;
  *(undefined1 *)(puVar1 + 0x12a) = 0;
  puVar1[299] = 0;
  puVar1[300] = 0;
  puVar1[0x12d] = 0;
  puVar1[0x12e] = 0;
  puVar1[0x12f] = 0;
  puVar1[0x130] = 0;
  puVar1[0x131] = 0;
  return;
}



// FUNCTION 14067215e FUN_14067215e body=315 status=ok
// SIG undefined FUN_14067215e(void)

undefined8 * FUN_14067215e(undefined8 *param_1)

{
  FUN_14067229a();
  *param_1 = &PTR_FUN_14b16eb30;
  param_1[5] = &PTR_FUN_14b16f590;
  param_1[6] = &PTR_LAB_14b16f5d0;
  param_1[0x55] = &PTR_FUN_14b16f620;
  param_1[0x56] = &PTR_FUN_14b16f6a0;
  param_1[0x57] = &PTR_FUN_14b16f6b0;
  param_1[0xc4] = &PTR_FUN_14b16f6e0;
  param_1[0xff] = &PTR_FUN_14b16f6f0;
  param_1[0x108] = &PTR_FUN_14b16f700;
  param_1[0x109] = &PTR_FUN_14b16f7a0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x86c) = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined8 *)((longlong)param_1 + 0x889) = 0;
  *(undefined8 *)((longlong)param_1 + 0x891) = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x85f) = 0;
  *(undefined4 *)(param_1 + 0x116) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8d9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  *(undefined2 *)(param_1 + 0x129) = 0;
  return param_1;
}



// FUNCTION 14067229a FUN_14067229a body=256 status=ok
// SIG undefined FUN_14067229a(void)

undefined8 * FUN_14067229a(undefined8 *param_1)

{
  FUN_14067239a();
  *param_1 = &PTR_FUN_14ab89360;
  param_1[5] = &PTR_FUN_14ab89dc0;
  param_1[6] = &PTR_LAB_14ab89e00;
  param_1[0x55] = &PTR_FUN_14ab89e50;
  param_1[0x56] = &PTR_FUN_14ab89ed0;
  param_1[0x57] = &PTR_FUN_14ab89ee0;
  param_1[0xc4] = &PTR_FUN_14ab89f10;
  param_1[0xff] = &PTR_LAB_14ab74bb0;
  FUN_1403a3c5e(param_1 + 0x100,param_1,param_1 + 0xff);
  *param_1 = &PTR_FUN_14ab89360;
  param_1[5] = &PTR_FUN_14ab89dc0;
  param_1[6] = &PTR_LAB_14ab89e00;
  param_1[0x55] = &PTR_FUN_14ab89e50;
  param_1[0x56] = &PTR_FUN_14ab89ed0;
  param_1[0x57] = &PTR_FUN_14ab89ee0;
  param_1[0xc4] = &PTR_FUN_14ab89f10;
  param_1[0xff] = &PTR_FUN_14ab89f20;
  *(undefined4 *)(param_1 + 0x106) = 0;
  *(undefined1 *)((longlong)param_1 + 0x834) = 0;
  *(undefined1 *)((longlong)param_1 + 0x836) = 0;
  param_1[0x107] = 0;
  return param_1;
}



// FUNCTION 14067239a FUN_14067239a body=570 status=ok
// SIG undefined FUN_14067239a(void)

undefined8 * FUN_14067239a(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar3 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar3);
  *param_1 = &PTR_FUN_14ab63c30;
  param_1[5] = &PTR_FUN_14ab64690;
  param_1[6] = &PTR_LAB_14ab646d0;
  param_1[0x55] = &PTR_FUN_14ab64720;
  param_1[0x56] = &PTR_FUN_14ab647a0;
  param_1[0x57] = &PTR_FUN_14ab647b0;
  param_1[0xc4] = &PTR_FUN_14ab647e0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0;
  param_1[0xcc] = 2;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x68d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x695) = 1;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xde] = 0x447a0000;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0x4409800043e10000;
  *(undefined2 *)((longlong)param_1 + 0x70c) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0x3ff00000;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0x3ff0000000000000;
  param_1[0xeb] = 0x3ff0000000000000;
  param_1[0xec] = 0x3ff0000000000000;
  param_1[0xed] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3e800000;
  *(undefined1 *)(param_1 + 0xcd) = 1;
  *(undefined4 *)(param_1 + 0xdd) = 0xffffffff;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      plVar1 = param_1 + 0xfb;
      param_1[0xfe] = &DAT_14cb1b2d8;
      param_1[0xfd] = param_1;
      lVar4 = DAT_14cb1b2d8;
      while( true ) {
        param_1[0xfb] = lVar4;
        LOCK();
        lVar5 = *(longlong *)param_1[0xfe];
        bVar6 = lVar4 == lVar5;
        if (bVar6) {
          *(longlong *)param_1[0xfe] = (longlong)plVar1;
          lVar5 = lVar4;
        }
        UNLOCK();
        if (bVar6) break;
        param_1[0xfb] = lVar5;
        lVar4 = *(longlong *)param_1[0xfe];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 1406725e0 FUN_1406725e0 body=6756 status=ok
// SIG undefined FUN_1406725e0(void)

uint * FUN_1406725e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong *puVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  longlong *plVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  uint *local_238;
  longlong *local_230;
  uint *local_228;
  longlong *local_220;
  longlong *local_218;
  uint *local_210;
  uint *local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  uint local_1e4;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  int local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  int *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined4 *local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined4 local_f8 [8];
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140672b8e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_268);
  }
  if (DAT_14cba7ab0 == 0) {
    uVar6 = FUN_14064613c();
    DAT_14cba7ab0 = FUN_140002ddd(FUN_1465cd63d,uVar6,L"EquippedInventorySlot");
  }
  lVar28 = DAT_14cba7ab0;
  local_1b0 = DAT_14cba7ab0;
  local_1a8 = param_1;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_14403a5a8();
  local_230 = param_2;
  local_218 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar28;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar8 = (uint *)(param_3 + 0xd);
      iVar21 = (int)param_3[0x10];
      if (iVar21 == 0) {
        uVar31 = 1;
        uVar34 = 0;
        iVar30 = 0;
        iVar25 = 0;
      }
      else {
        puVar27 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar27 = puVar8;
        }
        uVar23 = *puVar27;
        if (uVar23 == 0) {
          iVar30 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar30 = iVar21 + -1;
          }
          uVar34 = 0;
          uVar31 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar31 = uVar34;
          }
          iVar30 = 0;
          do {
            if (uVar31 == uVar34) goto LAB_1406729b1;
            iVar30 = iVar30 + 0x20;
            uVar23 = puVar27[uVar34 + 1];
            uVar34 = uVar34 + 1;
          } while (uVar23 == 0);
        }
        else {
          uVar34 = 0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar23 & uVar23);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar25) {
          iVar25 = iVar21;
        }
      }
      if (iVar25 == iVar21) {
LAB_1406729b1:
        local_238 = (uint *)0x0;
        puVar27 = local_238;
      }
      else {
        uVar23 = 0xffffffff;
        local_238 = (uint *)0x0;
        iVar14 = iVar21;
        do {
          lVar28 = param_3[0xb];
          lVar22 = (longlong)iVar25 * 200;
          if (*(int *)(lVar28 + 0x60 + lVar22) != *(int *)(lVar28 + 0x8c + lVar22)) {
            lVar35 = lVar28 + lVar22;
            lVar29 = lVar35 + 0x90;
            if (*(longlong *)(lVar35 + 0x98) != 0) {
              lVar29 = *(longlong *)(lVar35 + 0x98);
            }
            iVar25 = *(int *)(lVar29 + (ulonglong)
                                       (*(int *)(lVar35 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar25 != -1) {
              local_230 = (longlong *)CONCAT44(local_230._4_4_,iVar30);
              plVar16 = (longlong *)(lVar22 + lVar28 + 0x58);
              lVar28 = *plVar16;
              do {
                if (*(undefined ***)(lVar28 + (longlong)iVar25 * 0x10) == local_108) {
                  lVar35 = lVar35 + 8;
                  FUN_140326250(plVar16,&local_108);
                  FUN_140325a06(lVar35,&local_148,&local_108,0);
                  iVar14 = (int)param_3[0x10];
                  local_238 = (uint *)CONCAT71((int7)((ulonglong)lVar35 >> 8),1);
                  break;
                }
                iVar25 = *(int *)((longlong)iVar25 * 0x10 + lVar28 + 8);
              } while (iVar25 != -1);
              iVar30 = (int)local_230;
            }
          }
          uVar23 = uVar23 & ~(uint)uVar31;
          puVar27 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar27 = puVar8;
          }
          iVar25 = (int)uVar34;
          lVar28 = (longlong)iVar25;
          uVar18 = puVar27[lVar28] & uVar23;
          if (uVar18 == 0) {
            iVar12 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar12 = iVar14 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar25) {
              iVar13 = iVar25;
            }
            if (iVar25 < iVar12) {
              lVar22 = 0;
              do {
                uVar18 = puVar27[lVar28 + lVar22 + 1];
                if (uVar18 != 0) {
                  uVar34 = (ulonglong)(iVar25 + (int)lVar22 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_140672b25;
                }
                iVar30 = iVar30 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar13 - lVar28 != lVar22);
              uVar23 = 0xffffffff;
              iVar25 = iVar13;
            }
            uVar34 = (ulonglong)(iVar25 + 1);
            param_3 = local_218;
            iVar25 = iVar14;
          }
          else {
LAB_140672b25:
            uVar31 = (ulonglong)(-uVar18 & uVar18);
            uVar1 = uVar31 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if (iVar14 <= iVar25) {
              iVar25 = iVar14;
            }
          }
          puVar27 = local_238;
        } while (iVar25 != iVar21);
      }
      goto LAB_140674036;
    }
    local_1e0 = param_1;
    if ((char)param_2[9] == '\x01') {
      local_128 = (undefined4 *)0x0;
      local_120 = 0x800000000;
      puVar8 = (uint *)(param_3 + 0xd);
      iVar21 = (int)param_3[0x10];
      if (iVar21 == 0) {
        uVar31 = 1;
        puVar27 = (uint *)0x0;
        iVar30 = 0;
        iVar25 = 0;
      }
      else {
        puVar15 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar15 = puVar8;
        }
        uVar23 = *puVar15;
        if (uVar23 == 0) {
          iVar30 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar30 = iVar21 + -1;
          }
          puVar27 = (uint *)0x0;
          puVar19 = (uint *)(ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            puVar19 = puVar27;
          }
          iVar30 = 0;
          do {
            if (puVar19 == puVar27) goto LAB_1406731d0;
            iVar30 = iVar30 + 0x20;
            uVar23 = puVar15[(longlong)puVar27 + 1];
            puVar27 = (uint *)((longlong)puVar27 + 1);
          } while (uVar23 == 0);
        }
        else {
          puVar27 = (uint *)0x0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar23 & uVar23);
        uVar34 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar25) {
          iVar25 = iVar21;
        }
      }
      if (iVar25 < iVar21) {
        local_220 = param_3 + 0xb;
        local_1c0 = param_3 + 7;
        uVar23 = 0xffffffff;
        local_1c8 = puVar8;
LAB_140672c44:
        local_208 = (uint *)CONCAT44(local_208._4_4_,iVar25);
        puVar15 = (uint *)(*local_220 + (longlong)iVar25 * 200);
        puVar19 = puVar15 + 2;
        uVar18 = *puVar15;
        if (((puVar15[4] != puVar15[0xf]) || (puVar15[0x18] != puVar15[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar16 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar16 = local_1c0;
          }
          iVar21 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_3[9] - 1U & uVar18) * 4);
          if (iVar21 != -1) {
            do {
              lVar28 = *param_3 + (longlong)iVar21 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar21 * 0x10) == uVar18) {
                if ((lVar28 != 0) && (lVar28 != -4)) {
                  uVar24 = puVar15[0xc];
                  local_1f8 = CONCAT44(local_1f8._4_4_,iVar30);
                  local_228 = puVar27;
                  local_200 = uVar31;
                  local_1cc = uVar18;
                  if (uVar24 == 0) {
                    uVar31 = 1;
                    uVar34 = 0;
                    iVar21 = 0;
                    uVar18 = 0;
                    goto LAB_140672d87;
                  }
                  puVar27 = *(uint **)(puVar15 + 10);
                  if (*(uint **)(puVar15 + 10) == (uint *)0x0) {
                    puVar27 = puVar15 + 6;
                  }
                  uVar18 = *puVar27;
                  if (uVar18 != 0) {
                    uVar34 = 0;
                    iVar21 = 0;
                    goto LAB_140672d51;
                  }
                  iVar21 = uVar24 + 0x1e;
                  if (-1 < (int)(uVar24 - 1)) {
                    iVar21 = uVar24 - 1;
                  }
                  uVar34 = 0;
                  uVar31 = (ulonglong)(uint)(iVar21 >> 5);
                  if (iVar21 >> 5 < 1) {
                    uVar31 = uVar34;
                  }
                  iVar21 = 0;
                  goto LAB_140672d38;
                }
                break;
              }
              iVar21 = *(int *)(lVar28 + 8);
            } while (iVar21 != -1);
          }
        }
        goto LAB_1406730c0;
      }
LAB_1406731d0:
      puVar7 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140672b8e;
      }
      plVar16 = (longlong *)*param_2;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)param_2[1];
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_14403b082(&local_1b0);
        if (cVar5 == '\0') {
LAB_140673dca:
          if (local_d8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
LAB_140673ddc:
          puVar27 = (uint *)0x0;
          goto LAB_140674036;
        }
        iVar21 = 0;
        local_128 = (undefined4 *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        plVar10 = local_230;
        if (0 < local_100) {
          plVar33 = param_3 + 7;
          local_1f0 = param_3 + 0xb;
          do {
            plVar10 = local_1e0;
            local_1b4 = 0;
            puVar32 = (ulonglong *)plVar16[1];
            puVar8 = (uint *)*puVar32 + 1;
            if ((uint *)puVar32[1] < puVar8) {
              if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar16 + 0x170))(plVar16,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar16,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar32;
              *puVar32 = (ulonglong)puVar8;
            }
            uVar31 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar17 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar17 = plVar33;
              }
              iVar30 = *(int *)((longlong)plVar17 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar30 != -1) {
                do {
                  lVar28 = *param_3 + (longlong)iVar30 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar30 * 0x10) == local_1b4) {
                    if ((lVar28 != 0) && ((int *)(lVar28 + 4) != (int *)0x0)) {
                      local_1b8 = *(int *)(lVar28 + 4);
                      puVar8 = (uint *)((longlong)local_1b8 * 0x48 + *plVar10);
                      lVar28 = (longlong)(int)local_120;
                      uVar23 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar23);
                      if (local_120._4_4_ < uVar23) {
                        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
                      }
                      puVar7 = local_128;
                      if (local_128 == (undefined4 *)0x0) {
                        puVar7 = &local_148;
                      }
                      puVar7[lVar28] = local_1b8;
                      goto LAB_140673450;
                    }
                    break;
                  }
                  iVar30 = *(int *)(lVar28 + 8);
                } while (iVar30 != -1);
              }
            }
            local_1b8 = 0;
            puVar8 = (uint *)FUN_148bfd5e6(plVar10);
            *puVar8 = local_1b4;
            local_1b8 = (int)plVar10[1] + -1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar31 = local_150;
            lVar28 = (longlong)(int)local_150;
            uVar23 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar23);
            if (local_150._4_4_ < uVar23) {
              FUN_1400cc390(local_178,uVar31 & 0xffffffff);
            }
            puVar7 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar7 = local_178;
            }
            puVar7[lVar28] = local_1b8;
LAB_140673450:
            plVar10 = local_230;
            puVar8[2] = (uint)local_108;
            puVar8[1] = puVar8[1] + 1;
            lVar28 = local_230[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 1;
            puVar27 = (uint *)plVar16[0x15];
            plVar10[7] = local_1d8;
            plVar10[6] = (longlong)puVar8;
            local_190 = puVar27;
            (**(code **)(*(longlong *)plVar10[8] + 8))((longlong *)plVar10[8],plVar10);
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) == 0) {
              lVar28 = plVar10[4];
              if ((*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) &&
                 (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4))) {
                FUN_1456fd588(local_1f0,local_1b4);
                plVar10 = local_230;
              }
              else {
                local_210 = (uint *)(lVar28 + 0x30);
                puVar8 = (uint *)FUN_1456fd5f6(local_1f0,local_1b4);
                local_238 = puVar8;
                if (puVar8[2] - puVar8[0xd] == *(int *)(lVar28 + 0x38) - *(int *)(lVar28 + 100)) {
                  local_228 = puVar8 + 4;
                  uVar23 = puVar8[10];
                  if (uVar23 == 0) {
                    uVar34 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar18 = 0;
                  }
                  else {
                    puVar15 = *(uint **)(puVar8 + 8);
                    if (*(uint **)(puVar8 + 8) == (uint *)0x0) {
                      puVar15 = local_228;
                    }
                    uVar18 = *puVar15;
                    if (uVar18 == 0) {
                      iVar30 = uVar23 + 0x1e;
                      if (-1 < (int)(uVar23 - 1)) {
                        iVar30 = uVar23 - 1;
                      }
                      uVar31 = 0;
                      uVar34 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar34 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar34 == uVar31) goto LAB_140673675;
                        iVar30 = iVar30 + 0x20;
                        uVar18 = puVar15[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar18 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar34 = (ulonglong)(-uVar18 & uVar18);
                    uVar1 = uVar34 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    if ((int)uVar23 <= (int)uVar18) {
                      uVar18 = uVar23;
                    }
                  }
                  if (uVar18 != uVar23) {
                    if (*(uint **)(puVar8 + 8) != (uint *)0x0) {
                      local_228 = *(uint **)(puVar8 + 8);
                    }
                    iVar25 = uVar23 + 0x1e;
                    if (-1 < (int)(uVar23 - 1)) {
                      iVar25 = uVar23 - 1;
                    }
                    if (*(int *)(lVar28 + 0x38) == *(int *)(lVar28 + 100)) goto LAB_14067365d;
                    local_1f8 = *(longlong *)puVar8;
                    iVar25 = iVar25 >> 5;
                    local_200 = lVar28 + 0x68;
                    if (*(ulonglong *)(lVar28 + 0x70) != 0) {
                      local_200 = *(ulonglong *)(lVar28 + 0x70);
                    }
                    uVar24 = *(int *)(lVar28 + 0x78) - 1;
                    local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar24);
                    local_208 = local_228 + 1;
                    uVar26 = 0xffffffff;
                    do {
                      lVar22 = *(longlong *)(local_1f8 + (longlong)(int)uVar18 * 0x10);
                      iVar14 = *(int *)(local_200 +
                                       (ulonglong)
                                       ((int)lVar22 + (int)((ulonglong)lVar22 >> 0x20) * 0x17 &
                                       uVar24) * 4);
                      if (iVar14 == -1) goto LAB_14067365d;
                      while (*(longlong *)(*(longlong *)local_210 + (longlong)iVar14 * 0x10) !=
                             lVar22) {
                        iVar14 = *(int *)((longlong)iVar14 * 0x10 + *(longlong *)local_210 + 8);
                        if (iVar14 == -1) goto LAB_14067365d;
                      }
                      uVar26 = uVar26 & ~(uint)uVar34;
                      iVar14 = (int)uVar31;
                      lVar22 = (longlong)iVar14;
                      uVar18 = local_228[lVar22] & uVar26;
                      if (uVar18 == 0) {
                        iVar12 = iVar25;
                        if (iVar25 < iVar14) {
                          iVar12 = iVar14;
                        }
                        if (iVar25 <= iVar14) break;
                        lVar35 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar18 = local_208[lVar22 + lVar35];
                          if (uVar18 != 0) break;
                          lVar35 = lVar35 + 1;
                          if (iVar12 - lVar22 == lVar35) goto LAB_140673675;
                        }
                        uVar31 = (ulonglong)(iVar14 + (int)lVar35 + 1);
                        uVar26 = 0xffffffff;
                      }
                      uVar34 = (ulonglong)(-uVar18 & uVar18);
                      uVar1 = uVar34 * 2 + 1;
                      lVar22 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                        }
                      }
                      uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar18 < (int)uVar23);
                  }
                }
                else {
LAB_14067365d:
                  FUN_140492002(puVar8,local_210);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_140673675:
                local_210 = (uint *)(lVar28 + 0x80);
                if (local_238[0x16] - local_238[0x21] ==
                    *(int *)(lVar28 + 0x88) - *(int *)(lVar28 + 0xb4)) {
                  local_228 = puVar8 + 0x18;
                  uVar23 = local_238[0x1e];
                  if (uVar23 == 0) {
                    uVar34 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar18 = 0;
                  }
                  else {
                    puVar15 = *(uint **)(local_238 + 0x1c);
                    if (*(uint **)(local_238 + 0x1c) == (uint *)0x0) {
                      puVar15 = local_228;
                    }
                    uVar18 = *puVar15;
                    if (uVar18 == 0) {
                      iVar30 = uVar23 + 0x1e;
                      if (-1 < (int)(uVar23 - 1)) {
                        iVar30 = uVar23 - 1;
                      }
                      uVar31 = 0;
                      uVar34 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar34 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar34 == uVar31) goto LAB_14067378d;
                        iVar30 = iVar30 + 0x20;
                        uVar18 = puVar15[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar18 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar34 = (ulonglong)(-uVar18 & uVar18);
                    uVar1 = uVar34 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    if ((int)uVar23 <= (int)uVar18) {
                      uVar18 = uVar23;
                    }
                  }
                  if (uVar18 != uVar23) {
                    if (*(uint **)(local_238 + 0x1c) != (uint *)0x0) {
                      local_228 = *(uint **)(local_238 + 0x1c);
                    }
                    iVar25 = uVar23 + 0x1e;
                    if (-1 < (int)(uVar23 - 1)) {
                      iVar25 = uVar23 - 1;
                    }
                    if (*(int *)(lVar28 + 0x88) == *(int *)(lVar28 + 0xb4)) goto LAB_140673776;
                    iVar25 = iVar25 >> 5;
                    local_1f8 = lVar28 + 0xb8;
                    if (*(longlong *)(lVar28 + 0xc0) != 0) {
                      local_1f8 = *(longlong *)(lVar28 + 0xc0);
                    }
                    uVar24 = *(int *)(lVar28 + 200) - 1;
                    local_200 = CONCAT44(local_200._4_4_,uVar24);
                    local_208 = local_228 + 1;
                    local_220 = (longlong *)CONCAT44(local_220._4_4_,0xffffffff);
                    do {
                      lVar22 = *(longlong *)
                                (*(longlong *)(local_238 + 0x14) + (longlong)(int)uVar18 * 0x10);
                      iVar14 = *(int *)(local_1f8 +
                                       (ulonglong)
                                       ((int)lVar22 + (int)((ulonglong)lVar22 >> 0x20) * 0x17 &
                                       uVar24) * 4);
                      if (iVar14 == -1) goto LAB_140673776;
                      while (*(longlong *)(*(longlong *)local_210 + (longlong)iVar14 * 0x10) !=
                             lVar22) {
                        iVar14 = *(int *)((longlong)iVar14 * 0x10 + *(longlong *)local_210 + 8);
                        if (iVar14 == -1) goto LAB_140673776;
                      }
                      uVar26 = (uint)local_220 & ~(uint)uVar34;
                      iVar14 = (int)uVar31;
                      lVar22 = (longlong)iVar14;
                      uVar18 = local_228[lVar22] & uVar26;
                      if (uVar18 == 0) {
                        iVar12 = iVar25;
                        if (iVar25 < iVar14) {
                          iVar12 = iVar14;
                        }
                        if (iVar25 <= iVar14) break;
                        lVar35 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar18 = local_208[lVar22 + lVar35];
                          if (uVar18 != 0) break;
                          lVar35 = lVar35 + 1;
                          if (iVar12 - lVar22 == lVar35) goto LAB_14067378d;
                        }
                        uVar31 = (ulonglong)(iVar14 + (int)lVar35 + 1);
                        local_220 = (longlong *)CONCAT44(local_220._4_4_,0xffffffff);
                      }
                      else {
                        local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar26);
                      }
                      uVar34 = (ulonglong)(-uVar18 & uVar18);
                      uVar1 = uVar34 * 2 + 1;
                      lVar22 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                        }
                      }
                      uVar18 = (iVar30 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar18 < (int)uVar23);
                  }
                }
                else {
LAB_140673776:
                  FUN_140492002(puVar8 + 0x14,local_210);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_14067378d:
                puVar15 = local_238;
                local_238[0x2a] = 0;
                if (local_238[0x2b] != 0) {
                  FUN_144893a1c(puVar8 + 0x28,0);
                }
                puVar15[0x2c] = (int)plVar16[0x15] - (int)puVar27;
                FUN_14049209c(&local_190,plVar16,puVar8 + 0x28);
                plVar10 = local_230;
                if (*(int *)(lVar28 + 0x38) != *(int *)(lVar28 + 100)) {
                  *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
                }
              }
            }
            lVar28 = plVar10[4];
            FUN_144958770(lVar28 + 0x30,0);
            FUN_144958770(lVar28 + 0x80,0);
            *(undefined1 *)(lVar28 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140673dca;
            }
            iVar21 = iVar21 + 1;
            param_3 = local_218;
            plVar10 = local_198;
          } while (iVar21 < local_100);
        }
        plVar16 = local_1a8;
        if (((char)plVar10[10] == '\0') && (iVar21 = (int)local_1a8[1], 0 < iVar21)) {
          uVar31 = 0;
          do {
            uVar34 = local_d0;
            iVar30 = *(int *)(*plVar16 + 8 + uVar31 * 0x48);
            if ((iVar30 < (int)(uint)local_108) && (local_108._4_4_ < iVar30)) {
              puVar7 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar7 = local_f8;
              }
              lVar28 = (longlong)(int)local_d0;
              if (lVar28 != 0) {
                lVar22 = 0;
                do {
                  if (uVar31 == *(uint *)((longlong)puVar7 + lVar22)) goto LAB_140673ea2;
                  lVar22 = lVar22 + 4;
                } while (lVar28 * 4 - lVar22 != 0);
              }
              uVar23 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar23);
              if (local_d0._4_4_ < uVar23) {
                FUN_1400cc390(local_f8,uVar34 & 0xffffffff);
              }
              puVar7 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar7 = local_f8;
              }
              puVar7[lVar28] = (int)uVar31;
              iVar21 = (int)plVar16[1];
            }
LAB_140673ea2:
            uVar31 = uVar31 + 1;
          } while ((longlong)uVar31 < (longlong)iVar21);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar16 = local_1a8;
        puVar7 = local_d8;
        if (local_d8 == (undefined4 *)0x0) {
          puVar7 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_218 = local_218 + 0xb;
          lVar28 = (longlong)(int)local_d0;
          lVar22 = 0;
          do {
            iVar21 = *(int *)((longlong)puVar7 + lVar22);
            if (((-1 < (longlong)iVar21) && (iVar21 < (int)plVar16[1])) &&
               (iVar21 = FUN_1456fd588(local_218,*(undefined4 *)(*plVar16 + (longlong)iVar21 * 0x48)
                                      ), 0 < iVar21)) {
              *(undefined1 *)((longlong)plVar10 + 0x4c) = 1;
            }
            lVar22 = lVar22 + 4;
          } while (lVar28 * 4 != lVar22);
          if (0 < (int)local_d0) {
            puVar7 = local_d8;
            if (local_d8 == (undefined4 *)0x0) {
              puVar7 = local_f8;
            }
            FUN_144958a06(puVar7);
            if (0 < (longlong)(int)local_d0) {
              uVar31 = (longlong)(int)local_d0 + 1;
              do {
                puVar7 = local_d8;
                if (local_d8 == (undefined4 *)0x0) {
                  puVar7 = local_f8;
                }
                uVar23 = puVar7[uVar31 - 2];
                if ((-1 < (longlong)(int)uVar23) && (iVar21 = (int)plVar16[1], (int)uVar23 < iVar21)
                   ) {
                  iVar30 = ~uVar23 + iVar21;
                  if (iVar30 != 0) {
                    if (0 < iVar30) {
                      iVar30 = 1;
                    }
                    memmove((void *)(*plVar16 + (longlong)(int)uVar23 * 0x48),
                            (void *)(*plVar16 + (ulonglong)(uint)(iVar21 - iVar30) * 0x48),
                            (longlong)iVar30 * 0x48);
                    iVar21 = (int)plVar16[1];
                  }
                  *(int *)(plVar16 + 1) = iVar21 + -1;
                }
                uVar31 = uVar31 - 1;
              } while (1 < uVar31);
            }
            FUN_14010afec(local_1a0,0);
          }
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar7 = local_d8;
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
          puVar7 = local_d8;
        }
        goto LAB_14067402a;
      }
      lVar28 = param_2[3];
      if (lVar28 == 0) {
        local_238 = (uint *)CONCAT44(local_238._4_4_,0xffffffff);
        lVar28 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar28 + 0x70);
        cVar5 = FUN_14403a68c(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140673ddc;
        local_238 = (uint *)CONCAT44(local_238._4_4_,uVar3);
        lVar28 = lVar28 + 0x20;
      }
      puVar9 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = &PTR_FUN_14ab190a0;
      puVar9[8] = 0;
      *(undefined4 *)(puVar9 + 9) = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(undefined8 *)((longlong)puVar9 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar9 + 0x54) = 0;
      puVar9[0xc] = 0;
      *(undefined4 *)(puVar9 + 0xd) = 0;
      *(undefined4 *)(puVar9 + 0xe) = 0xffffffff;
      puVar11 = (undefined8 *)param_2[2];
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14ab190c0;
      plVar10[2] = (longlong)puVar9;
      if (puVar9 == (undefined8 *)0x0) {
LAB_140673b7d:
        *puVar11 = puVar9;
        plVar33 = (longlong *)puVar11[1];
        if (plVar10 == plVar33) {
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar33 = plVar10 + 1;
            *(int *)plVar33 = (int)*plVar33 + -1;
            UNLOCK();
            if ((int)*plVar33 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar4 = (int *)((longlong)plVar10 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar21 = *piVar4;
              UNLOCK();
              plVar33 = plVar10;
              goto joined_r0x000140673bb8;
            }
          }
        }
        else {
          puVar11[1] = plVar10;
          if (plVar33 != (longlong *)0x0) goto LAB_140673bd4;
        }
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          puVar9[1] = puVar9;
          if ((longlong *)puVar9[2] != plVar10) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar33 = (longlong *)puVar9[2];
            if (plVar33 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar33 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar33 + 0x10))();
              }
            }
            puVar9[2] = plVar10;
          }
          LOCK();
          plVar33 = plVar10 + 1;
          *(int *)plVar33 = (int)*plVar33 + -1;
          UNLOCK();
          if ((int)*plVar33 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar4 = (int *)((longlong)plVar10 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          goto LAB_140673b7d;
        }
        puVar9[1] = puVar9;
        *puVar11 = puVar9;
        plVar33 = (longlong *)puVar11[1];
        if (plVar33 != (longlong *)0x0) {
          puVar11[1] = 0;
LAB_140673bd4:
          LOCK();
          plVar10 = plVar33 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar4 = (int *)((longlong)plVar33 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar21 = *piVar4;
            UNLOCK();
joined_r0x000140673bb8:
            if (iVar21 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
      }
      plVar10 = local_230;
      local_148 = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar9 + 0xe) = local_148;
      local_144 = local_238._0_4_;
      local_140 = 0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_230 + 0x4e) == '\x01') {
        FUN_14403a97a(&local_1b0,puVar9 + 4,&local_108);
      }
      else {
        local_248 = local_138;
        FUN_14403aa62(&local_1b0,puVar9 + 4,lVar28,&local_108);
        *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_14403ae90(&local_1b0);
      if (0 < (int)local_c0) {
        lVar28 = 0;
        do {
          puVar11 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar11 = &local_108;
          }
          iVar21 = *(int *)(puVar11 + lVar28);
          lVar22 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar11 + lVar28 * 8 + 4);
          puVar32 = (ulonglong *)plVar16[1];
          puVar7 = (undefined4 *)*puVar32 + 1;
          if ((undefined4 *)puVar32[1] < puVar7) {
            if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar16 + 0x170))(plVar16,local_178,4);
            }
            else {
              FUN_14572512c(plVar16,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar32;
            *puVar32 = (ulonglong)puVar7;
          }
          plVar10[7] = local_1d8;
          plVar10[6] = (longlong)iVar21 * 0x48 + lVar22;
          (**(code **)(*(longlong *)plVar10[8] + 8))((longlong *)plVar10[8],plVar10);
          lVar28 = lVar28 + 1;
        } while ((int)lVar28 < (int)local_c0);
      }
      puVar7 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar7 = local_118;
      }
    }
LAB_14067402a:
    if (puVar7 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar21 = (int)param_3[0x10];
    if (iVar21 == 0) {
      uVar31 = 1;
      iVar25 = 0;
      uVar34 = 0;
      iVar30 = 0;
    }
    else {
      puVar8 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar8 = (uint *)(param_3 + 0xd);
      }
      uVar23 = *puVar8;
      if (uVar23 == 0) {
        iVar30 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar30 = iVar21 + -1;
        }
        uVar34 = 0;
        uVar31 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar31 = uVar34;
        }
        iVar25 = 0;
        do {
          if (uVar31 == uVar34) goto LAB_140674034;
          iVar25 = iVar25 + 0x20;
          uVar23 = puVar8[uVar34 + 1];
          uVar34 = uVar34 + 1;
        } while (uVar23 == 0);
      }
      else {
        iVar25 = 0;
        uVar34 = 0;
      }
      uVar31 = (ulonglong)(-uVar23 & uVar23);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar30 = (iVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar30) {
        iVar30 = iVar21;
      }
    }
    puVar27 = (uint *)0x1;
    if (iVar30 == iVar21) goto LAB_140674036;
    uVar23 = 0xffffffff;
    local_238 = (uint *)(param_3 + 0xd);
    do {
      lVar28 = local_218[0xb];
      lVar22 = (longlong)iVar30 * 200;
      FUN_1403257c8(param_2[0xd],lVar22 + lVar28 + 8);
      FUN_1403257c8(param_2[0xd],lVar22 + lVar28 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar28 + lVar22 + 0xb0);
      }
      uVar23 = uVar23 & ~(uint)uVar31;
      puVar8 = (uint *)local_218[0xf];
      if ((uint *)local_218[0xf] == (uint *)0x0) {
        puVar8 = local_238;
      }
      iVar14 = (int)local_218[0x10];
      iVar30 = (int)uVar34;
      lVar28 = (longlong)iVar30;
      uVar18 = puVar8[lVar28] & uVar23;
      if (uVar18 == 0) {
        iVar12 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar12 = iVar14 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar30) {
          iVar13 = iVar30;
        }
        if (iVar30 < iVar12) {
          lVar22 = 0;
          do {
            uVar18 = puVar8[lVar28 + lVar22 + 1];
            if (uVar18 != 0) {
              uVar34 = (ulonglong)(iVar30 + (int)lVar22 + 1);
              uVar23 = 0xffffffff;
              goto LAB_14067289d;
            }
            iVar25 = iVar25 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar13 - lVar28 != lVar22);
          uVar23 = 0xffffffff;
          iVar30 = iVar13;
        }
        uVar34 = (ulonglong)(iVar30 + 1);
        iVar30 = iVar14;
      }
      else {
LAB_14067289d:
        uVar31 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar30 = (iVar25 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar30) {
          iVar30 = iVar14;
        }
      }
    } while (iVar30 != iVar21);
  }
LAB_140674034:
  puVar27 = (uint *)0x1;
LAB_140674036:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar27;
  while( true ) {
    iVar21 = iVar21 + 0x20;
    uVar18 = puVar27[uVar34 + 1];
    uVar34 = uVar34 + 1;
    if (uVar18 != 0) break;
LAB_140672d38:
    if (uVar31 == uVar34) goto LAB_140673096;
  }
LAB_140672d51:
  uVar31 = (ulonglong)(-uVar18 & uVar18);
  uVar1 = uVar31 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  uVar18 = (iVar21 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if ((int)uVar24 <= (int)uVar18) {
    uVar18 = uVar24;
  }
LAB_140672d87:
  if ((int)uVar18 < (int)uVar24) {
    local_210 = puVar15 + 0x16;
    uVar24 = 0xffffffff;
    local_1f0 = (longlong *)((ulonglong)local_1f0 & 0xffffffff00000000);
    local_238 = puVar19;
    local_1e4 = uVar23;
    do {
      plVar16 = local_230;
      puVar32 = (ulonglong *)((longlong)(int)uVar18 * 0x10 + *(longlong *)puVar19);
      cVar5 = (**(code **)(*(longlong *)local_230[4] + 0x330))((longlong *)local_230[4],puVar32,0);
      if (cVar5 == '\0') {
        puVar20 = puVar32;
        lVar28 = (**(code **)(*(longlong *)plVar16[4] + 800))((longlong *)plVar16[4],puVar32);
        puVar19 = local_238;
        if (lVar28 != 0) {
          local_1f0 = (longlong *)
                      CONCAT44(local_1f0._4_4_,(int)CONCAT71((int7)((ulonglong)puVar20 >> 8),1));
          if ((*puVar32 & 1) == 0 && *puVar32 != 0) {
            FUN_140325a06(local_210,&local_108,puVar32,0);
          }
          goto LAB_140672e2e;
        }
      }
      else {
LAB_140672e2e:
        puVar19 = local_238;
        FUN_140646052(local_238,uVar18);
      }
      plVar16 = local_230;
      uVar24 = uVar24 & ~(uint)uVar31;
      puVar8 = *(uint **)(puVar19 + 8);
      if (*(uint **)(puVar19 + 8) == (uint *)0x0) {
        puVar8 = puVar15 + 6;
      }
      uVar23 = puVar19[10];
      iVar30 = (int)uVar34;
      lVar28 = (longlong)iVar30;
      uVar18 = puVar8[lVar28] & uVar24;
      if (uVar18 == 0) {
        iVar25 = uVar23 + 0x1e;
        if (-1 < (int)(uVar23 - 1)) {
          iVar25 = uVar23 - 1;
        }
        iVar25 = iVar25 >> 5;
        iVar14 = iVar25;
        if (iVar25 < iVar30) {
          iVar14 = iVar30;
        }
        if (iVar25 <= iVar30) break;
        lVar22 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar18 = puVar8[lVar28 + lVar22 + 1];
          if (uVar18 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar14 - lVar28 == lVar22) goto LAB_140672ed6;
        }
        uVar34 = (ulonglong)(iVar30 + (int)lVar22 + 1);
        uVar24 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar18 & uVar18);
      uVar1 = uVar31 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar18 = (iVar21 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while ((int)uVar18 < (int)uVar23);
LAB_140672ed6:
    puVar8 = local_1c8;
    uVar23 = local_1e4;
    if (((ulonglong)local_1f0 & 1) != 0) {
      *(undefined1 *)((longlong)local_230 + 0x49) = 1;
      if (*(char *)((longlong)local_230 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_230[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar16 + 0x4a) = 1;
        puVar19 = local_238;
      }
      uVar31 = local_120;
      if ((int)local_218[1] != *(int *)((longlong)local_218 + 0x34)) {
        plVar10 = (longlong *)local_218[8];
        if ((longlong *)local_218[8] == (longlong *)0x0) {
          plVar10 = local_1c0;
        }
        iVar21 = *(int *)((longlong)plVar10 + (ulonglong)((int)local_218[9] - 1U & local_1cc) * 4);
        if (iVar21 != -1) {
          do {
            lVar28 = *local_218 + (longlong)iVar21 * 0x10;
            if (*(uint *)(*local_218 + (longlong)iVar21 * 0x10) == local_1cc) goto LAB_140672f69;
            iVar21 = *(int *)(lVar28 + 8);
          } while (iVar21 != -1);
        }
      }
      lVar28 = 0;
LAB_140672f69:
      iVar21 = *(int *)(lVar28 + 4);
      lVar28 = *local_1e0;
      lVar22 = (longlong)(int)local_120;
      uVar23 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar23);
      if (local_120._4_4_ < uVar23) {
        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
        puVar19 = local_238;
      }
      puVar7 = local_128;
      if (local_128 == (undefined4 *)0x0) {
        puVar7 = &local_148;
      }
      puVar7[lVar22] = iVar21;
      FUN_1448fcc30(&local_108,plVar16[4],*(undefined8 *)(puVar19 + 0x28),
                    (longlong)(int)puVar19[0x2c]);
      plVar16[7] = local_1d8;
      plVar16[6] = (longlong)iVar21 * 0x48 + lVar28;
      plVar16[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)plVar16[8] + 8))((longlong *)plVar16[8],plVar16);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar8 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar16 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar16);
      }
      lVar28 = local_90;
      puVar19 = local_238;
      uVar23 = local_1e4;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar28);
        puVar19 = local_238;
        uVar23 = local_1e4;
      }
    }
  }
LAB_140673096:
  uVar18 = (uint)local_200;
  param_3 = local_218;
  puVar27 = local_228;
  iVar30 = (int)local_1f8;
  if ((puVar19[2] == puVar19[0xd]) && (uVar31 = local_200, puVar19[0x16] == puVar19[0x21])) {
LAB_1406730c0:
    uVar18 = (uint)uVar31;
    FUN_1456fd4bc(local_220,(ulonglong)local_208 & 0xffffffff);
  }
  uVar23 = uVar23 & ~uVar18;
  puVar15 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar15 = puVar8;
  }
  iVar21 = (int)param_3[0x10];
  iVar25 = (int)puVar27;
  lVar28 = (longlong)iVar25;
  uVar18 = puVar15[lVar28] & uVar23;
  if (uVar18 == 0) {
    iVar14 = iVar21 + 0x1e;
    if (-1 < iVar21 + -1) {
      iVar14 = iVar21 + -1;
    }
    iVar14 = iVar14 >> 5;
    iVar12 = iVar14;
    if (iVar14 < iVar25) {
      iVar12 = iVar25;
    }
    if (iVar14 <= iVar25) goto LAB_1406731d0;
    lVar22 = 0;
    while( true ) {
      iVar30 = iVar30 + 0x20;
      uVar18 = puVar15[lVar28 + lVar22 + 1];
      if (uVar18 != 0) break;
      lVar22 = lVar22 + 1;
      if (iVar12 - lVar28 == lVar22) goto LAB_1406731d0;
    }
    puVar27 = (uint *)(ulonglong)(iVar25 + (int)lVar22 + 1);
    uVar23 = 0xffffffff;
  }
  uVar31 = (ulonglong)(-uVar18 & uVar18);
  uVar34 = uVar31 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar34 != 0) {
    for (; uVar34 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  iVar25 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if (iVar21 <= iVar25) goto LAB_1406731d0;
  goto LAB_140672c44;
}



// FUNCTION 140674066 FUN_140674066 body=99 status=ok
// SIG undefined FUN_140674066(void)

undefined4
FUN_140674066(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14015294c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((char)uVar1 != '\0') {
    FUN_1406740ca(param_1,param_2,param_8);
  }
  return uVar1;
}



// FUNCTION 1406740ca FUN_1406740ca body=178 status=ok
// SIG undefined FUN_1406740ca(void)

void FUN_1406740ca(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_3[0x15];
  if ((undefined8 *)param_3[0x15] == (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  param_3[0x17] =
       *(undefined8 *)
        ((ulonglong)(*(uint *)((longlong)puVar1 + 0x7c) >> 5 & 8) + 0x440 +
        (longlong)param_2 * 0x450 + *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x10));
  puVar1[6] = param_1;
  puVar1 = (undefined8 *)param_3[0x15];
  if ((undefined8 *)param_3[0x15] == (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  *(uint *)((longlong)puVar1 + 0x7c) = *(uint *)((longlong)puVar1 + 0x7c) | 0x200;
  puVar1 = (undefined8 *)param_3[0x15];
  if ((undefined8 *)param_3[0x15] == (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  *puVar1 = *(undefined8 *)(param_1 + 0x250);
  *(uint *)((longlong)param_3 + 0xe4) =
       *(uint *)((longlong)param_3 + 0xe4) & 0xffffffbf |
       ((*(uint *)((longlong)param_3 + 0xe4) >> 6 ^
        -(uint)(*(float *)(param_1 + 0x908) < 0.0 != *(float *)(param_1 + 0x90c) < 0.0)) & 1) << 6;
  return;
}



// FUNCTION 14067417c FUN_14067417c body=40 status=ok
// SIG undefined FUN_14067417c(void)

undefined8 FUN_14067417c(undefined8 param_1,int param_2)

{
  FUN_1406741a4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406741a4 FUN_1406741a4 body=59 status=ok
// SIG undefined FUN_1406741a4(void)

void FUN_1406741a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e74340;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1406741df FUN_1406741df body=54 status=ok
// SIG undefined FUN_1406741df(void)

void FUN_1406741df(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140674216(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14afb59a0;
  puVar1[0x1b] = &PTR_FUN_14afb5c40;
  return;
}



// FUNCTION 140674216 FUN_140674216 body=148 status=ok
// SIG undefined FUN_140674216(void)

undefined8 * FUN_140674216(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a3bd860;
  param_1[0xd] = 0x3f0000003f800000;
  param_1[0xe] = 0x44fa00003f000000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = 0x3f800000447a0000;
  param_1[0xc] = 0x3f800000447a0000;
  return param_1;
}



// FUNCTION 1406742aa FUN_1406742aa body=299 status=ok
// SIG undefined FUN_1406742aa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1406742aa(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10d8 [32];
  undefined1 *local_10b8;
  undefined4 local_10b0;
  undefined1 *local_10a8;
  undefined4 local_10a0;
  undefined1 *local_1098;
  undefined1 *local_1090;
  undefined1 *local_1088;
  char local_1080;
  undefined1 local_1078 [2070];
  undefined1 auStack_862 [2];
  undefined1 *local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  char local_848;
  undefined1 local_840 [2070];
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_10d8;
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    uVar1 = 0;
  }
  else {
    local_860 = local_840;
    local_848 = '\0';
    local_850 = local_2a;
    local_858 = local_860;
    FUN_14005eb5c(param_1 + 2,&local_860);
    local_1098 = local_1078;
    local_1080 = '\0';
    local_1088 = auStack_862;
    local_1090 = local_1098;
    FUN_14005eb5c(param_1,&local_1098);
    local_10a8 = local_860;
    local_10a0 = (undefined4)((ulonglong)((longlong)local_858 - (longlong)local_860) >> 1);
    local_10b8 = local_1098;
    local_10b0 = (undefined4)((ulonglong)((longlong)local_1090 - (longlong)local_1098) >> 1);
    uVar1 = FUN_144a125c8();
    if (local_1080 == '\x01') {
      FUN_1400020a8(local_1098);
    }
    if (local_848 == '\x01') {
      FUN_1400020a8(local_860);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_10d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406743d6 FUN_1406743d6 body=950 status=ok
// SIG undefined FUN_1406743d6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1406743d6(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  code *local_e8;
  longlong **local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_c0 [5];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = param_3;
  local_c0[0] = param_4;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if ((cVar2 == '\0') || (param_1[0xd] == 0)) goto LAB_14067463c;
  uStack_d4 = 0;
  if (param_3 == 0) {
    local_d8 = 0;
    uVar7 = 0;
  }
  else {
    local_d8 = *(uint *)(param_3 + 0xc);
    if ((int)local_d8 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_d8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_d8 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar7 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar7 = *(uint *)(lVar8 + 0x10);
      bVar11 = uVar7 == 0;
      if (bVar11) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar7 = uVar6;
      }
    }
  }
  plVar5 = param_1 + 0x10;
  plVar9 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar9 = plVar5;
  }
  iVar10 = 0;
  uStack_d4 = uVar7;
  uStack_d0 = param_4;
  if ((longlong)(int)param_1[0x21] != 0) {
    lVar8 = (longlong)(int)param_1[0x21] << 4;
    do {
      if ((plVar9[1] == uStack_d0) && (cVar2 = FUN_14038330a(plVar9), cVar2 != '\0'))
      goto LAB_14067463c;
      plVar9 = plVar9 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    iVar10 = (int)param_1[0x21];
  }
  *(uint *)(param_1 + 0x21) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar10 + 1U) {
    FUN_148871c6a(plVar5);
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[0x20];
  }
  puVar1 = (uint *)(plVar5 + (longlong)iVar10 * 2);
  *puVar1 = local_d8;
  puVar1[1] = uStack_d4;
  puVar1[2] = (uint)uStack_d0;
  puVar1[3] = uStack_d0._4_4_;
  if ((*(char *)(param_1[9] + 0x40) == '\0') && ((char)param_1[0x22] != '\x01')) goto LAB_14067463c;
  lVar8 = param_1[8];
  local_50 = *(int *)(lVar8 + 0x78);
  local_58 = (undefined1 *)0x0;
  local_4c = 0x80;
  uVar7 = local_50 + 0x1f;
  if (0x1f < uVar7) {
    if (uVar7 < 0xa0) {
      puVar4 = local_68;
LAB_140674537:
      uVar7 = uVar7 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1446efa72(&local_58,0,uVar7 >> 5,4);
      local_4c = uVar7 & 0xffffffe0;
      puVar4 = local_68;
      if (local_58 != (undefined1 *)0x0) {
        puVar4 = local_58;
      }
      if (uVar7 < 0x120) goto LAB_140674537;
      uVar7 = (uVar7 >> 5) << 2;
    }
    memset(puVar4,0,(ulonglong)uVar7);
    iVar10 = local_50 + 0x1f;
    if (-1 < local_50) {
      iVar10 = local_50;
    }
    if (local_50 % 0x20 != 0) {
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_68;
      }
      bVar3 = -(char)(local_50 % 0x20);
      *(uint *)(puVar4 + (longlong)(iVar10 >> 5) * 4) =
           (uint)(*(int *)(puVar4 + (longlong)(iVar10 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
  }
  local_f0 = local_c0 + 1;
  local_98 = 0;
  local_90 = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e0 = &local_120;
  local_110 = local_68;
  local_100 = &local_c8;
  local_f8 = local_c0;
  local_e8 = FUN_143d5e54a;
  local_120 = param_1;
  local_118 = lVar8;
  local_108 = param_2;
  FUN_14067478e(param_1,param_1 + 0xd);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140497fb2(local_c0 + 1);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14067463c:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14067478e FUN_14067478e body=139 status=ok
// SIG undefined FUN_14067478e(void)

void FUN_14067478e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x50);
    plVar3 = plVar7 + (longlong)*(int *)(param_1 + 0x58) * 3;
    do {
      if ((plVar7[2] == *param_2) && (plVar4 = (longlong *)plVar7[1], plVar4 != (longlong *)0x0)) {
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_1406747eb;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar8 = iVar6 == iVar5;
          if (bVar8) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar8);
        if (*plVar7 != 0) {
          (*(code *)*param_3)(param_3[1]);
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
LAB_1406747eb:
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar3);
  }
  return;
}



// FUNCTION 14067481a FUN_14067481a body=52 status=ok
// SIG undefined FUN_14067481a(void)

void FUN_14067481a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xa08);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x420))(plVar1,param_2);
  }
  FUN_14067484e(param_1,param_2);
  return;
}



// FUNCTION 14067484e FUN_14067484e body=1235 status=ok
// SIG undefined FUN_14067484e(void)

void FUN_14067484e(longlong *param_1,undefined4 param_2)

{
  void *pvVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  double dVar13;
  double *pdVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((char)param_2 == '\0') || (lVar18 = param_1[0x15], lVar18 == 0)) goto LAB_14067488e;
  if (*(longlong **)(lVar18 + 0x1c8) == param_1) {
    if ((longlong)(int)param_1[0x28] != 0) {
      plVar12 = (longlong *)param_1[0x27];
      lVar11 = (longlong)(int)param_1[0x28] << 3;
      do {
        plVar2 = (longlong *)*plVar12;
        if (((plVar2 != (longlong *)0x0) &&
            (cVar8 = (**(code **)(*plVar2 + 0x120))(), cVar8 == '\0')) && (plVar2[0x15] == lVar18))
        goto LAB_14067497a;
        plVar12 = plVar12 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    plVar12 = (longlong *)0x0;
LAB_14067497a:
    uVar16 = *(uint *)(*(longlong *)(lVar18 + 0x10) + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if (plVar12 == (longlong *)0x0) {
      if ((*(uint *)(lVar11 + 8) >> 0x19 & 1) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,0,param_1[4],0x14);
        local_f0 = 0;
        local_f8 = local_f8 & 0xffffffffffffff00;
        lVar11 = lVar18;
        plVar12 = (longlong *)FUN_147a03014(lVar18,DAT_14cad2370,8,0);
        uVar15 = (undefined4)lVar11;
        dVar13 = (double)CONCAT71((int7)((ulonglong)plVar12 >> 8),
                                  *(undefined1 *)((longlong)param_1 + 0x1fb));
        *(undefined1 *)((longlong)plVar12 + 0x1fb) = *(undefined1 *)((longlong)param_1 + 0x1fb);
        pvVar1 = (void *)param_1[0x48];
        dVar5 = (double)param_1[0x49];
        dVar6 = (double)param_1[0x4a];
        dVar7 = (double)param_1[0x4b];
        pdVar14 = (double *)param_1[0x45];
        local_a8 = pvVar1;
        uStack_a0 = dVar5;
        local_98 = dVar6;
        uStack_90 = dVar7;
        if (pdVar14 == (double *)0x0) {
          uVar15 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar13;
          dVar13 = DAT_14c846500;
          pdVar14[4] = DAT_14c8464f8;
          pdVar14[5] = dVar13;
          dVar13 = DAT_14c846508;
          pdVar14[6] = DAT_14c846508;
          param_1[0x45] = (longlong)pdVar14;
        }
        auVar3._8_4_ = (int)-(ulonglong)(dVar5 != pdVar14[1]);
        auVar3._0_8_ = -(ulonglong)((double)pvVar1 != *pdVar14);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar14[1]) >> 0x20);
        iVar10 = movmskpd(SUB84(dVar13,0),auVar3);
        auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[3]);
        auVar4._0_8_ = -(ulonglong)(dVar6 != pdVar14[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[3]) >> 0x20);
        uVar16 = movmskpd(uVar15,auVar4);
        if ((uVar16 & 0x3fffffff) != 0 || iVar10 != 0) {
          *(undefined4 *)(pdVar14 + 2) = (undefined4)local_98;
          *(undefined4 *)((longlong)pdVar14 + 0x14) = local_98._4_4_;
          *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_90._4_4_;
          *(undefined4 *)pdVar14 = (undefined4)local_a8;
          *(undefined4 *)((longlong)pdVar14 + 4) = local_a8._4_4_;
          *(int *)(pdVar14 + 1) = (int)uStack_a0;
          *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_a0._4_4_;
          FUN_1448052ee(&local_a8,&local_88);
          pdVar14[6] = local_78;
          pdVar14[4] = (double)local_88;
          pdVar14[5] = dStack_80;
        }
        local_b8 = pdVar14[6];
        local_c8 = pdVar14[4];
        dStack_c0 = pdVar14[5];
        local_e8 = param_1[0x4c];
        lStack_e0 = param_1[0x4d];
        local_d8 = param_1[0x4e];
        local_f0 = local_f0 & 0xffffffffffffff00;
        local_f8 = 0;
        FUN_14084af84(plVar12,&local_e8,&local_c8,0);
        FUN_141200de6(lVar18,plVar12);
        FUN_140b506a4(plVar12);
      }
      else {
        plVar12 = (longlong *)0x0;
      }
    }
    else {
      plVar12 = (longlong *)*plVar12;
    }
    FUN_14092e51e(lVar18,plVar12);
  }
  else {
    lVar18 = param_1[0x24];
    if (lVar18 != 0) {
      iVar10 = -1;
      if ((longlong)*(int *)(lVar18 + 0x140) != 0) {
        lVar11 = (longlong)*(int *)(lVar18 + 0x140) << 3;
        lVar17 = 0;
        do {
          if (*(longlong **)(*(longlong *)(lVar18 + 0x138) + lVar17 * 8) == param_1) {
            iVar10 = (int)lVar17;
            break;
          }
          lVar17 = lVar17 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      (**(code **)(*param_1 + 0x4a0))(param_1,&DAT_14cadad9c);
      if (0 < (longlong)(int)param_1[0x28]) {
        plVar12 = (longlong *)param_1[0x27];
        lVar11 = (longlong)(int)param_1[0x28] << 3;
        do {
          if (((longlong *)*plVar12 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar12 + 0x120))(), cVar8 == '\0')) {
            if (plVar12 != (longlong *)0x0) goto LAB_140674a28;
            break;
          }
          plVar12 = plVar12 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
        plVar12 = (longlong *)param_1[0x27];
LAB_140674a28:
        plVar12 = (longlong *)*plVar12;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x490))(plVar12,lVar18,&DAT_14cadad90,0);
          local_88 = plVar12;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar12);
          }
          local_a8 = &local_88;
          FUN_1448c4ed6(lVar18 + 0x138,&local_a8);
          iVar9 = *(int *)(lVar18 + 0x140);
          if (iVar10 < *(int *)(lVar18 + 0x140)) {
            iVar9 = iVar10;
          }
          iVar10 = 0;
          if (0 < iVar9) {
            iVar10 = iVar9;
          }
          local_a8 = (longlong **)plVar12;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar12);
          }
          FUN_147a0310c(lVar18 + 0x138,&local_a8,iVar10);
          FUN_144a62f0c(lVar18,*(undefined8 *)(lVar18 + 0x38),4);
          goto LAB_140674a36;
        }
      }
    }
    plVar12 = (longlong *)0x0;
  }
LAB_140674a36:
  local_a8 = (void *)0x0;
  iVar10 = (int)param_1[0x28];
  pvVar1 = (void *)param_1[0x27];
  uStack_a0 = (double)CONCAT44(uStack_a0._4_4_,iVar10);
  if ((longlong)iVar10 != 0) {
    FUN_14746828a(&local_a8,iVar10,0);
    memcpy(local_a8,pvVar1,(longlong)iVar10 << 3);
    pvVar1 = local_a8;
    lVar18 = (longlong)(int)uStack_a0;
    if (lVar18 != 0) {
      lVar11 = 0;
      do {
        plVar2 = *(longlong **)((longlong)pvVar1 + lVar11);
        if ((plVar2 != (longlong *)0x0) &&
           ((**(code **)(*plVar2 + 0x4a0))(plVar2,&DAT_14cadad9c), plVar2 != plVar12)) {
          (**(code **)(*plVar2 + 0x490))(plVar2,plVar12,&DAT_14cadad90,0);
        }
        lVar11 = lVar11 + 8;
      } while (lVar18 * 8 != lVar11);
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8(local_a8);
    }
  }
LAB_14067488e:
  FUN_140674d22(param_1,param_2);
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140674d22 FUN_140674d22 body=715 status=ok
// SIG undefined FUN_140674d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140674d22(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *(byte *)((longlong)param_1 + 0x9f);
  local_20 = uVar6;
  if ((bVar2 & 0x40) == 0) {
    bVar5 = bVar2 | 0x40;
    *(byte *)((longlong)param_1 + 0x9f) = bVar5;
    if ((bVar2 & 0x20) != 0) {
      (**(code **)(*param_1 + 0x390))(param_1,0);
      bVar5 = *(byte *)((longlong)param_1 + 0x9f);
    }
    if ((bVar5 & 8) != 0) {
      (**(code **)(*param_1 + 0x398))(param_1);
      bVar5 = *(byte *)((longlong)param_1 + 0x9f);
    }
    *(byte *)((longlong)param_1 + 0x9f) = bVar5 & 0xef;
    if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
      if ((char)bVar5 < '\0') {
        if (*(code **)(*param_1 + 0x368) == FUN_1407a7646) {
          plVar4 = param_1;
          if (((byte *)param_1[0xc] != (byte *)0x0) &&
             (plVar4 = param_1, (*(byte *)param_1[0xc] & 1) != 0)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1))
            {
              FUN_145e17f72(&DAT_14cb0bff0);
              atexit(FUN_14374ca90);
              _Init_thread_footer(&DAT_14cb0c040);
            }
            FUN_1402eb48e(*(undefined8 *)(param_1[0xc] + 0x28),param_1 + 8);
            *(byte *)param_1[0xc] = *(byte *)param_1[0xc] & 0xfe;
            plVar4 = param_1;
          }
        }
        else {
          (**(code **)(*param_1 + 0x368))(param_1,0);
          plVar4 = _DAT_14cad01b0;
        }
        _DAT_14cad01b0 = plVar4;
        *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) & 0x7f;
      }
      if ((((*(byte *)(param_1 + 0x17) & 0x10) != 0) && (*(longlong *)(param_1[0x16] + 0x260) != 0))
         && (lVar7 = *(longlong *)(*(longlong *)(param_1[0x16] + 0x260) + 0x378), lVar7 != 0)) {
        FUN_1479cbf44(lVar7 + 0xa8,param_1);
      }
      FUN_1400f88ca(param_1);
      param_1[0x16] = 0;
    }
    lVar7 = param_1[0x15];
    if (lVar7 != 0) {
      if ((byte)(*(char *)((longlong)param_1 + 0xb9) - 1U) < 2) {
        local_30 = param_1;
        if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        local_28 = &local_30;
        FUN_140674ff6(lVar7 + 0x2a0);
      }
      else {
        FUN_140675170(lVar7,param_1);
      }
      FUN_1400f829a(lVar7,param_1);
      plVar4 = *(longlong **)(lVar7 + 0x1c8);
      if (plVar4 != (longlong *)0x0 && plVar4 == param_1) {
        *(undefined8 *)(lVar7 + 0x1c8) = 0;
        FUN_14092e5c6((longlong)plVar4 + 0x1fe,plVar4,0);
      }
    }
    lVar7 = 0;
    (**(code **)(*param_1 + 0x430))(param_1,0);
    FUN_144757f48(param_1,0x40000000);
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    do {
      uVar3 = *(uint *)(lVar7 + 8);
      uVar6 = (ulonglong)uVar3;
      if ((uVar3 >> 0x15 & 1) != 0) break;
      LOCK();
      uVar1 = *(uint *)(lVar7 + 8);
      if (uVar3 == uVar1) {
        *(uint *)(lVar7 + 8) = uVar3 | 0x200000;
      }
      else {
        uVar6 = (ulonglong)uVar1;
      }
      UNLOCK();
    } while (uVar3 != uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140674fee FUN_140674fee body=8 status=ok
// SIG undefined FUN_140674fee(void)

void FUN_140674fee(longlong param_1)

{
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) & 0xf7;
  return;
}



// FUNCTION 140674ff6 FUN_140674ff6 body=377 status=ok
// SIG undefined FUN_140674ff6(void)

int FUN_140674ff6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar4 = *(longlong *)*param_2;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    iVar7 = 0;
    bVar8 = *plVar1 == lVar4;
    iVar10 = 0;
    do {
      lVar9 = (longlong)iVar10;
      iVar11 = iVar10;
      lVar4 = lVar9;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar5) {
        iVar3 = iVar5;
      }
      do {
        lVar4 = lVar4 + 1;
        iVar12 = iVar3;
        if (lVar6 <= lVar4) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar11;
      } while (bVar8 == (plVar1[lVar4] == lVar2));
      if (bVar8 == false) {
        if (iVar7 != iVar10) {
          memmove(plVar1 + iVar7,plVar1 + lVar9,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar7 = iVar7 + (iVar12 - iVar10);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar10 = iVar12;
    } while (lVar4 < lVar6);
    *(int *)(param_1 + 1) = iVar7;
    iVar5 = iVar5 - iVar7;
  }
  return iVar5;
}



// FUNCTION 140675170 FUN_140675170 body=108 status=ok
// SIG undefined FUN_140675170(void)

void FUN_140675170(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_140674ff6(param_1 + 0x290);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406751de FUN_1406751de body=10 status=ok
// SIG undefined FUN_1406751de(void)

undefined8 * FUN_1406751de(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1406751e8 FUN_1406751e8 body=89 status=ok
// SIG undefined FUN_1406751e8(void)

ulonglong FUN_1406751e8(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    bVar1 = (**(code **)(*(longlong *)param_1[4] + 0x100))();
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  uVar3 = 0;
  if ((bVar1 == 0) && (cVar2 == '\0')) {
    uVar3 = FUN_1406bea30(&DAT_14c9514d0,param_1[2]);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140675246 FUN_140675246 body=11 status=ok
// SIG undefined FUN_140675246(void)

bool FUN_140675246(longlong param_1)

{
  return (*(byte *)(param_1 + 0x2de) & 0xc) == 0;
}



// FUNCTION 140675252 FUN_140675252 body=193 status=ok
// SIG undefined FUN_140675252(void)

void FUN_140675252(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_1448aa298();
  for (lVar4 = param_1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
    if ((*(uint *)(lVar4 + 8) & 0x30) != 0) {
      return;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x660);
  if (*(longlong *)(param_1 + 0x670) == 0) {
    *(undefined8 **)(param_1 + 0x678) = &DAT_14cb1cc28;
    *(longlong *)(param_1 + 0x670) = param_1;
    lVar4 = DAT_14cb1cc58;
    while( true ) {
      *plVar2 = lVar4;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x678) + 0x30);
      LOCK();
      lVar3 = *plVar1;
      bVar5 = lVar4 == lVar3;
      if (bVar5) {
        *plVar1 = (longlong)plVar2;
        lVar3 = lVar4;
      }
      UNLOCK();
      if (bVar5) break;
      *plVar2 = lVar3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x678) + 0x30);
    }
    if (*plVar2 != 0) {
      *(longlong **)(*plVar2 + 8) = plVar2;
    }
    plVar2 = *(longlong **)(param_1 + 0x678);
    if ((longlong)(int)plVar2[1] != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*plVar2 + 8 + lVar4) != 0) && (*(longlong *)(*plVar2 + lVar4) != 0)) {
          FUN_147e33d5a(plVar2,*(undefined8 *)(param_1 + 0x670));
          return;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)(int)plVar2[1] * 0x10 != lVar4);
    }
  }
  return;
}



// FUNCTION 140675314 FUN_140675314 body=139 status=ok
// SIG undefined FUN_140675314(void)

void FUN_140675314(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      cVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
      if (cVar4 != '\0') {
        iVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
        (**(code **)(*plVar3 + 0x48))(plVar3,param_2);
        FUN_1406753f2(plVar3);
        iVar6 = (**(code **)(*plVar3 + 0x30))(plVar3);
        if (iVar6 != iVar5) {
          FUN_1406753a0(plVar3,2,iVar5);
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  return;
}



// FUNCTION 1406753a0 FUN_1406753a0 body=82 status=ok
// SIG undefined FUN_1406753a0(void)

void FUN_1406753a0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_1406756c6();
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_1406754b2(param_1 + 7,param_2,param_3,uVar1);
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_14067556c(param_1,0 < iVar2);
  return;
}



// FUNCTION 1406753f2 FUN_1406753f2 body=191 status=ok
// SIG undefined FUN_1406753f2(void)

void FUN_1406753f2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)((longlong)param_1 + 0x24) & 8) != 0) &&
     (plVar3 = (longlong *)param_1[3], plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140675493;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,local_30);
      FUN_14029b7ac(lVar4,1,local_30);
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
LAB_140675493:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406754b2 FUN_1406754b2 body=186 status=ok
// SIG undefined FUN_1406754b2(void)

void FUN_1406754b2(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_140675554;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140675554:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14067556c FUN_14067556c body=345 status=ok
// SIG undefined FUN_14067556c(void)

void FUN_14067556c(longlong *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = *(byte *)((longlong)param_1 + 0x24);
  bVar4 = bVar2 & 0xfb | param_2 * '\x04';
  *(byte *)((longlong)param_1 + 0x24) = bVar4;
  bVar6 = bVar2 >> 1 & param_2;
  if (((bVar2 & 8) == 0) == (bool)bVar6) {
    if ((((*(int *)((longlong)param_1 + 0xc) == 0) ||
         (uVar3 = *(uint *)(param_1 + 1), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
       (((plVar7 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)((longlong)param_1 + 0xc))) ||
        (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))))) {
      *(byte *)((longlong)param_1 + 0x24) = bVar4 & 0xf7;
    }
    else {
      lVar5 = *plVar7 + 0x2808;
      *(byte *)((longlong)param_1 + 0x24) = bVar4 & 0xf7 | param_2 << 3;
      if (bVar6 == 0) {
        (**(code **)(*param_1 + 0x18))(param_1,local_28);
        FUN_140675be8(lVar5,local_28);
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1,local_28);
        FUN_1406759ec(lVar5,local_28);
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_20 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406756c6 FUN_1406756c6 body=353 status=ok
// SIG undefined FUN_1406756c6(void)

void FUN_1406756c6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 < 1) {
    bVar7 = false;
  }
  else {
    bVar7 = 0 < *(int *)(param_1[10] + 0xd0);
  }
  if ((bool)(char)param_1[0x13] != bVar7) {
    lVar2 = (longlong)*(int *)(param_1[10] + 0xd0);
    if (lVar2 != 0) {
      lVar8 = *(longlong *)(param_1[10] + 200);
      lVar2 = lVar2 * 0x28;
      do {
        if (bVar7 == false) {
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          lVar6 = FUN_14095dd8e(lVar8);
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
          local_58 = 1;
          local_60 = lVar6;
          lVar6 = FUN_1457330a8(param_1);
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
          local_50 = lVar6;
          uVar3 = FUN_1457330a8(param_1);
          FUN_14109058a(uVar3,&local_60);
        }
        else {
          uVar3 = FUN_14095dd8e(lVar8);
          uVar4 = FUN_1457330a8(param_1);
          uVar5 = FUN_1457330a8(param_1);
          FUN_141090600(uVar5,uVar4,uVar3,0);
        }
        lVar8 = lVar8 + 0x28;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    *(bool *)(param_1 + 0x13) = bVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140675828 FUN_140675828 body=103 status=ok
// SIG undefined FUN_140675828(void)

ulonglong FUN_140675828(longlong param_1)

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
LAB_140675872:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140675872;
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



// FUNCTION 140675890 FUN_140675890 body=35 status=ok
// SIG undefined FUN_140675890(void)

void FUN_140675890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1406758b4(*(undefined8 *)(param_1 + 0x30),param_4);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 1406758b4 FUN_1406758b4 body=86 status=ok
// SIG undefined FUN_1406758b4(void)

bool FUN_1406758b4(longlong param_1,int param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x04') {
    bVar1 = *(int *)(param_1 + 0x2c) < param_2;
  }
  else {
    bVar1 = false;
    switch(*(char *)(param_1 + 0x28)) {
    case '\0':
      bVar1 = *(int *)(param_1 + 0x2c) == param_2;
      break;
    case '\x01':
      bVar1 = *(int *)(param_1 + 0x2c) != param_2;
      break;
    case '\x02':
      bVar1 = param_2 < *(int *)(param_1 + 0x2c);
      break;
    case '\x03':
      bVar1 = param_2 <= *(int *)(param_1 + 0x2c);
      break;
    case '\x05':
      bVar1 = *(int *)(param_1 + 0x2c) <= param_2;
    }
  }
  return bVar1;
}



// FUNCTION 14067590a FUN_14067590a body=103 status=ok
// SIG undefined FUN_14067590a(void)

ulonglong FUN_14067590a(longlong param_1)

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
LAB_140675954:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140675954;
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



// FUNCTION 140675972 FUN_140675972 body=121 status=ok
// SIG undefined FUN_140675972(void)

void FUN_140675972(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined1 *local_20;
  undefined4 *local_18;
  undefined4 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_10 = &local_4c;
  local_18 = &local_50;
  local_20 = &local_51;
  local_38 = 0;
  local_28 = &PTR_LAB_14b9a0900;
  local_48 = &LAB_141252f80;
  local_51 = param_2;
  local_50 = param_3;
  local_4c = param_4;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406759ec FUN_1406759ec body=507 status=ok
// SIG undefined FUN_1406759ec(void)

void FUN_1406759ec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x128);
    plVar7 = plVar10 + (longlong)*(int *)(param_1 + 0x130) * 2;
    do {
      plVar3 = (longlong *)plVar10[1];
      if (plVar3 == (longlong *)0x0) {
LAB_140675a64:
        lVar8 = *param_2;
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_140675a64;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *plVar10;
        lVar8 = *param_2;
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
      if (lVar9 == lVar8) goto LAB_140675bae;
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar7);
  }
  lVar9 = *param_2;
  lVar8 = param_2[1];
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
    UNLOCK();
  }
  iVar6 = *(int *)(param_1 + 0x130);
  *(uint *)(param_1 + 0x130) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x134) < iVar6 + 1U) {
    FUN_14665cec0(param_1 + 0x128,iVar6);
  }
  lVar4 = *(longlong *)(param_1 + 0x128);
  *(longlong *)(lVar4 + (longlong)iVar6 * 0x10) = lVar9;
  *(longlong *)(lVar4 + 8 + (longlong)iVar6 * 0x10) = lVar8;
  FUN_14070596c(param_1,&local_50);
  plVar10 = local_48;
  *(byte *)(local_50 + 0x30) = *(byte *)(local_50 + 0x30) | 1;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar9 = *param_2;
  FUN_14070596c(param_1,&local_50);
  plVar10 = local_48;
  if (local_48 == (longlong *)0x0) {
    *(longlong *)(lVar9 + 0x10) = local_50;
    plVar7 = *(longlong **)(lVar9 + 0x18);
    if (plVar7 == (longlong *)0x0) goto LAB_140675b87;
LAB_140675b56:
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar9 + 0x18) = plVar10;
    if (plVar10 == (longlong *)0x0) goto LAB_140675b87;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *(longlong *)(lVar9 + 0x10) = local_50;
    if (*(longlong **)(lVar9 + 0x18) != local_48) {
      LOCK();
      *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar9 + 0x18);
      if (plVar7 != (longlong *)0x0) goto LAB_140675b56;
      *(longlong **)(lVar9 + 0x18) = local_48;
    }
  }
  LOCK();
  plVar7 = plVar10 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_140675b87:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_48 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_140675bae:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140675be8 FUN_140675be8 body=1082 status=ok
// SIG undefined FUN_140675be8(void)

void FUN_140675be8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [38];
  byte local_92;
  byte local_91;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  int local_6c;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x130);
  local_68 = param_2;
  if (lVar7 == 0) {
    bVar16 = false;
  }
  else {
    local_90 = *(longlong **)(param_1 + 0x128);
    plVar8 = (longlong *)local_90[1];
    if (plVar8 == (longlong *)0x0) {
LAB_140675f93:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar13 = (int)plVar8[1];
      do {
        if (iVar13 == 0) goto LAB_140675f93;
        LOCK();
        iVar5 = (int)plVar8[1];
        bVar16 = iVar13 == iVar5;
        if (bVar16) {
          *(int *)(plVar8 + 1) = iVar13 + 1;
          iVar5 = iVar13;
        }
        iVar13 = iVar5;
        UNLOCK();
      } while (!bVar16);
    }
    lVar6 = *local_90;
    local_88 = lVar4;
    local_80 = lVar7;
    if (plVar3 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      iVar13 = (int)plVar3[1];
      do {
        lVar7 = 0;
        if (iVar13 == 0) goto LAB_140675c95;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar16 = iVar13 == iVar5;
        if (bVar16) {
          *(int *)(plVar3 + 1) = iVar13 + 1;
          iVar5 = iVar13;
        }
        iVar13 = iVar5;
        UNLOCK();
      } while (!bVar16);
      LOCK();
      plVar15 = plVar3 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      lVar7 = lVar4;
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar7 = local_88;
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar7 = local_88;
        }
      }
    }
LAB_140675c95:
    local_60 = param_1;
    if (plVar8 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      LOCK();
      plVar15 = plVar8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
    uVar10 = 0;
    local_91 = lVar6 == lVar7;
    iVar13 = 0;
    lVar4 = local_88;
    plVar8 = local_90;
    do {
      lVar7 = (longlong)iVar13;
      iVar5 = iVar13 + 1;
      if (iVar13 + 1 < (int)local_80) {
        iVar5 = (int)local_80;
      }
      bVar16 = (bool)(local_91 & 1);
      lVar6 = local_80;
      lVar14 = lVar7;
      local_92 = local_91;
      local_91 = local_91 ^ 1;
      local_6c = iVar13;
      do {
        lVar14 = lVar14 + 1;
        iVar13 = iVar5;
        if (lVar6 <= lVar14) goto LAB_140675de3;
        plVar15 = (longlong *)plVar8[lVar14 * 2 + 1];
        if (plVar15 == (longlong *)0x0) {
LAB_140675d4f:
          plVar15 = (longlong *)0x0;
        }
        else {
          iVar13 = (int)plVar15[1];
          do {
            if (iVar13 == 0) goto LAB_140675d4f;
            LOCK();
            iVar9 = (int)plVar15[1];
            bVar17 = iVar13 == iVar9;
            if (bVar17) {
              *(int *)(plVar15 + 1) = iVar13 + 1;
              iVar9 = iVar13;
            }
            iVar13 = iVar9;
            UNLOCK();
          } while (!bVar17);
        }
        lVar12 = plVar8[lVar14 * 2];
        if (plVar3 == (longlong *)0x0) {
LAB_140675d54:
          lVar11 = 0;
        }
        else {
          iVar13 = (int)plVar3[1];
          do {
            if (iVar13 == 0) goto LAB_140675d54;
            LOCK();
            iVar9 = (int)plVar3[1];
            bVar17 = iVar13 == iVar9;
            if (bVar17) {
              *(int *)(plVar3 + 1) = iVar13 + 1;
              iVar9 = iVar13;
            }
            iVar13 = iVar9;
            UNLOCK();
          } while (!bVar17);
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          lVar11 = lVar4;
          if ((int)*plVar1 == 0) {
            local_78 = uVar10;
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            lVar4 = local_88;
            lVar6 = local_80;
            plVar8 = local_90;
            uVar10 = local_78;
            lVar11 = local_88;
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              lVar4 = local_88;
              lVar6 = local_80;
              plVar8 = local_90;
              uVar10 = local_78;
              lVar11 = local_88;
            }
          }
        }
        if (plVar15 == (longlong *)0x0) {
          lVar12 = 0;
        }
        else {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            local_78 = uVar10;
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            lVar4 = local_88;
            lVar6 = local_80;
            plVar8 = local_90;
            uVar10 = local_78;
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              lVar4 = local_88;
              lVar6 = local_80;
              plVar8 = local_90;
              uVar10 = local_78;
            }
          }
        }
      } while (bVar16 == (lVar12 == lVar11));
      iVar13 = (int)lVar14;
LAB_140675de3:
      iVar5 = iVar13 - local_6c;
      if ((local_92 & 1) == 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != local_6c) {
          memmove(plVar8 + (longlong)iVar9 * 2,plVar8 + lVar7 * 2,(longlong)iVar5 << 4);
          lVar4 = local_88;
          plVar8 = local_90;
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar5);
      }
      else {
        FUN_14128eda1(plVar8 + lVar7 * 2,iVar5);
        lVar4 = local_88;
        plVar8 = local_90;
      }
    } while (lVar14 < local_80);
    *(int *)(local_60 + 0x130) = (int)uVar10;
    bVar16 = (int)uVar10 < (int)local_80;
    param_1 = local_60;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  plVar3 = local_68;
  if (bVar16) {
    lVar4 = *local_68;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    plVar8 = *(longlong **)(lVar4 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      *(undefined8 *)(lVar4 + 0x18) = 0;
    }
    local_58 = *plVar3;
    plVar3 = (longlong *)plVar3[1];
    local_50 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      lVar4 = FUN_144330cc0(param_1,&local_58);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar4 = FUN_144330cc0(param_1);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    if (lVar4 != 0) {
      FUN_14106abe8(lVar4,param_1);
      FUN_14070596c(param_1,&local_58);
      plVar3 = local_50;
      *(byte *)(local_58 + 0x30) = *(byte *)(local_58 + 0x30) | 1;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_50)(local_50);
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
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140676024 FUN_140676024 body=232 status=ok
// SIG undefined FUN_140676024(void)

undefined8 * FUN_140676024(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = "InitialLinearVelocity";
  local_30 = 0x15;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = (ulonglong)uVar1;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  uVar2 = FUN_14067610e(param_2);
  param_1[5] = uVar2;
  param_1[6] = uVar2;
  local_38 = "InitialAngularVelocity";
  local_30 = 0x16;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[9] = (ulonglong)uVar1;
  param_1[10] = DAT_14c9974a8;
  param_1[0xb] = 0;
  uVar2 = FUN_14067610e(param_2);
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067610e FUN_14067610e body=265 status=ok
// SIG undefined FUN_14067610e(void)

longlong FUN_14067610e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((char *)(lVar1 + 0x10) == (char *)0x0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x10) == '\x01') {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140676218 FUN_140676218 body=245 status=ok
// SIG undefined FUN_140676218(void)

void FUN_140676218(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88 [2];
  undefined8 local_78;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_40;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1406768e0(local_88);
  if ((local_58 != 0) && (local_20 != 0)) {
    FUN_14067630e(param_1,1,0);
    FUN_14067630e(param_1 + 0x38,1,0);
    local_98 = *(undefined8 *)(param_1 + 0x18);
    FUN_1408a6bca(*(undefined8 *)(param_1 + 8),local_88[0],local_78,*(undefined8 *)(param_1 + 0x10))
    ;
    uVar1 = FUN_14067610e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    local_98 = *(undefined8 *)(param_1 + 0x50);
    FUN_1408a6bca(*(undefined8 *)(param_1 + 0x40),local_50,local_40,*(undefined8 *)(param_1 + 0x48))
    ;
    uVar1 = FUN_14067610e(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                          *(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067630e FUN_14067630e body=313 status=ok
// SIG undefined FUN_14067630e(void)

void FUN_14067630e(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x01') {
    cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
    if (cVar2 == '\0') {
      FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
      param_1[5] = 0;
      param_1[6] = 0;
    }
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1406763dc;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1406763dc:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_140676448(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140676448 FUN_140676448 body=70 status=ok
// SIG undefined FUN_140676448(void)

void FUN_140676448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140676586(param_1,param_2,param_3,param_4);
  }
  FUN_14067648e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14067648e FUN_14067648e body=248 status=ok
// SIG undefined FUN_14067648e(void)

void FUN_14067648e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_14067655c;
    }
  }
  lVar2 = 0;
LAB_14067655c:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 140676586 FUN_140676586 body=536 status=ok
// SIG undefined FUN_140676586(void)

void FUN_140676586(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_14067662e;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_14067662e:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c992538) {
    FUN_144b3d300(&DAT_14c992538);
    if (DAT_14c992538 == -1) {
      DAT_14c992530 = 0;
      _Init_thread_footer(&DAT_14c992538);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c992530;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f45b50;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_1406767a0(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406767a0 FUN_1406767a0 body=138 status=ok
// SIG undefined FUN_1406767a0(void)

undefined1 *
FUN_1406767a0(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f45b10;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140676836 FUN_140676836 body=129 status=ok
// SIG undefined FUN_140676836(void)

void FUN_140676836(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140c0b6f2(param_1);
    }
    memset((void *)((longlong)iVar1 * 0xc + *param_1),0,(longlong)(param_2 - iVar1) * 0xc);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1467ff8c6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1406768b8 FUN_1406768b8 body=39 status=ok
// SIG undefined FUN_1406768b8(void)

void FUN_1406768b8(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_140678446(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 1406768e0 FUN_1406768e0 body=237 status=ok
// SIG undefined FUN_1406768e0(void)

undefined8 * FUN_1406768e0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = "InitialLinearVelocity";
  local_48 = 0x15;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = (ulonglong)uVar1;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = FUN_1409bc3ac(param_2);
  param_1[6] = uVar2;
  local_50 = "InitialAngularVelocity";
  local_48 = 0x16;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = (ulonglong)uVar1;
  param_1[10] = DAT_14c9974a8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar2 = FUN_1409bc3ac(param_2);
  param_1[0xd] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406769ce FUN_1406769ce body=40 status=ok
// SIG undefined FUN_1406769ce(void)

undefined8 FUN_1406769ce(undefined8 param_1,int param_2)

{
  FUN_1406769f6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406769f6 FUN_1406769f6 body=62 status=ok
// SIG undefined FUN_1406769f6(void)

void FUN_1406769f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3bd860;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140676a34 FUN_140676a34 body=274 status=ok
// SIG undefined FUN_140676a34(void)

ulonglong FUN_140676a34(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x38))(param_1,&local_48);
  bVar11 = true;
  if ((local_48 != 0) && (local_44 != 0)) {
    bVar11 = local_48 == DAT_14c948000;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (bVar11) {
    plVar3 = (longlong *)param_1[0xe];
    if (plVar3 == (longlong *)0x0) {
LAB_140676aea:
      bVar11 = false;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_140676aea;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      lVar4 = param_1[0xd];
      bVar11 = lVar4 != 0;
      if (bVar11) {
        lVar9 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x10) + 0x108);
        if (lVar9 == 0) {
          param_1 = (longlong *)0x0;
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x100);
          lVar10 = 0;
          param_1 = (longlong *)0x0;
          do {
            if ((*(int *)(lVar5 + lVar10) == *(int *)(lVar4 + 0x2c)) &&
               (*(int *)(lVar5 + 8 + lVar10) == *(int *)(lVar4 + 0x34))) {
              param_1 = (longlong *)&DAT_00000001;
              break;
            }
            lVar10 = lVar10 + 0xc;
          } while (lVar9 * 0xc != lVar10);
        }
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
    uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & bVar11);
  }
  else {
    uVar8 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140676b48 FUN_140676b48 body=32 status=ok
// SIG undefined FUN_140676b48(void)

undefined8 FUN_140676b48(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14c9485f0);
  return param_2;
}



// FUNCTION 140676b68 FUN_140676b68 body=110 status=ok
// SIG undefined FUN_140676b68(void)

undefined8
FUN_140676b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_140676c5c(param_1,param_4);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x38) == 0) {
      lVar3 = *(longlong *)(lVar1 + 0x20);
    }
    else {
      lVar3 = FUN_1406f7aac(lVar1);
    }
    if (lVar3 != 0) {
      uVar2 = FUN_14001cc68(0x40,0x10);
      FUN_140676bd6(uVar2,param_2,param_3,lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140676bd6 FUN_140676bd6 body=134 status=ok
// SIG undefined FUN_140676bd6(void)

void FUN_140676bd6(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xe;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a1e4950;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_14a34ab20;
  if (*param_2 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(char *)(*param_2 + 0xb8) * '\x02' & 2;
  }
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfd | bVar3;
  *(byte *)(param_1 + 7) = bVar1 & 0xfc | bVar3 | *(byte *)(param_2 + 1) >> 6 & 1;
  return;
}



// FUNCTION 140676c5c FUN_140676c5c body=134 status=ok
// SIG undefined FUN_140676c5c(void)

undefined8 FUN_140676c5c(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 *local_58;
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a34c420;
  local_58 = &LAB_143169fa2;
  local_30 = param_1;
  FUN_140676ce4();
  if (local_58 != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140676ce4 FUN_140676ce4 body=1521 status=ok
// SIG undefined FUN_140676ce4(void)

void FUN_140676ce4(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  uint *puVar2;
  undefined8 *_Src;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  undefined1 auStack_98 [40];
  PSRWLOCK local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  SRWLock = (PSRWLOCK)(param_1 + 0xb8);
  AcquireSRWLockExclusive(SRWLock);
  plVar27 = (longlong *)(param_1 + 0x60);
  local_60 = param_2;
  iVar5 = FUN_140191434(plVar27,*(undefined4 *)(param_2 + 10),param_2);
  if ((iVar5 != -1) &&
     (lVar11 = (longlong)iVar5 * 0x70 + *plVar27, plVar12 = (longlong *)(lVar11 + 0x60),
     plVar12 != (longlong *)0x0 && lVar11 != 0)) {
    lVar11 = *plVar12;
    *param_3 = lVar11;
    if (((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) != 0) ||
       (DAT_14ca76a80 == 0)) {
      LOCK();
      piVar1 = (int *)(lVar11 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  puVar13 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar13[2] = *(undefined8 *)(param_1 + 8);
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(uint *)(puVar13 + 3) = uVar6;
  *(uint *)((longlong)puVar13 + 0x1c) = uVar6;
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = &PTR_FUN_14a34ab08;
  puVar13[4] = 0;
  puVar13[5] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar13 + 6));
  *(undefined4 *)(puVar13 + 7) = 1;
  puVar13[8] = 0;
  local_70 = SRWLock;
  local_68 = plVar27;
  local_58 = param_3;
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar5 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar5 + 1;
    if (*(int *)(param_1 + 0x6c) == iVar5) {
      FUN_140275bcc(plVar27,iVar5);
    }
    iVar26 = *(int *)(param_1 + 0x88);
    if (iVar26 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar7 = iVar26 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    lVar20 = param_1 + 0x70;
    iVar15 = iVar26 + 1;
    iVar25 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar25 = iVar26;
    }
    if (iVar25 >> 5 == iVar7) {
      *(int *)(param_1 + 0x88) = iVar15;
    }
    else {
      if (*(int *)(param_1 + 0x8c) <= iVar26) {
        iVar7 = iVar26;
        if (iVar26 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar6 = iVar26 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x8c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar6) {
              uVar8 = uVar6;
            }
          }
          else {
            uVar8 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
          }
          uVar17 = (ulonglong)(uVar8 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar9 = (uint)(uVar17 + 0xf);
              if (uVar8 < 0x1ffd) {
                uVar17 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar9 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar4 = (&DAT_14c841e00)[uVar9 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar4) {
                    uVar21 = (ulonglong)bVar4;
                  }
                  uVar24 = 0x32 - (ulonglong)bVar4;
                  do {
                    uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_1406771c2;
                    lVar11 = uVar21 + 1 + uVar24;
                    uVar24 = uVar24 - 1;
                  } while (lVar11 != 0x33);
                }
                uVar17 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar17 = (ulonglong)DAT_14c841df8;
                }
                uVar17 = -uVar17 & (uVar18 + uVar17) - 1;
              }
            }
            else {
              uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
              iVar7 = *(int *)(param_1 + 0x88);
            }
          }
LAB_1406771c2:
          iVar10 = (int)(uVar17 >> 2);
          iVar15 = -0x20;
          if ((int)uVar6 <= iVar10) {
            iVar15 = iVar10 << 5;
          }
        }
        *(int *)(param_1 + 0x8c) = iVar15;
        FUN_1446efbd8(lVar20,iVar7);
        iVar15 = *(int *)(param_1 + 0x88) + 1;
      }
      iVar7 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
      *(int *)(param_1 + 0x88) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar11 = lVar20;
        }
        bVar4 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar11 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar11 + (longlong)(iVar7 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar5;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x80);
    }
    bVar4 = (byte)iVar26 & 0x1f;
    puVar2 = (uint *)(lVar20 + (longlong)(iVar25 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x90);
    lVar11 = (longlong)iVar5;
    iVar26 = *(int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar11 * 0x70);
    *(int *)(param_1 + 0x90) = iVar26;
    iVar7 = *(int *)(param_1 + 0x94) + -1;
    *(int *)(param_1 + 0x94) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar26 * 0x70) = 0xffffffff;
    }
  }
  lVar20 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x80);
  }
  iVar26 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar26 = iVar5;
  }
  puVar2 = (uint *)(lVar20 + (longlong)(iVar26 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  iVar26 = 1;
  lVar20 = *(longlong *)(param_1 + 0x60);
  lVar11 = lVar11 * 0x70;
  _Src = (undefined8 *)(lVar20 + lVar11);
  puVar22 = local_60;
  puVar23 = _Src;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar23 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar23 = puVar23 + 1;
  }
  *(undefined8 **)(lVar20 + 0x60 + lVar11) = puVar13;
  *(undefined4 *)(lVar20 + 0x68 + lVar11) = 0xffffffff;
  uVar6 = *(uint *)(lVar20 + 0x50 + lVar11);
  if (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94) == 1) {
    uVar8 = 1;
  }
  else {
    iVar7 = FUN_140191434(local_68,uVar6,_Src);
    plVar27 = local_68;
    if (iVar7 != -1) {
      memmove((void *)((longlong)iVar7 * 0x70 + *local_68),_Src,0x68);
      FUN_1409e1e68(plVar27,iVar5);
      goto LAB_140676ff4;
    }
    uVar8 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94);
    if (3 < uVar8) {
      uVar17 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar26 = 1 << ((byte)lVar11 & 0x1f);
    }
  }
  if (((int)uVar8 < 1) || (iVar26 <= *(int *)(param_1 + 0xa8))) {
    uVar6 = *(int *)(param_1 + 0xa8) - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x6c) = uVar6;
    lVar11 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar11 = param_1 + 0x98;
    }
    *(undefined4 *)(_Src + 0xd) =
         *(undefined4 *)
          (lVar11 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)(int)uVar6) * 4);
    lVar11 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar11 = param_1 + 0x98;
    }
    *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)(int)uVar6) * 4) = iVar5;
  }
  else {
    *(int *)(param_1 + 0xa8) = iVar26;
    FUN_1402cdcf6(local_68);
  }
LAB_140676ff4:
  plVar27 = local_58;
  bVar4 = DAT_14ca76a68 ^ 1;
  bVar19 = DAT_14ca76a80 ^ 1;
  if ((DAT_14ca84f5a & bVar4 & DAT_14c760d84 != 0) != 0 || (bVar19 & 1) != 0) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
    bVar4 = DAT_14ca76a68 ^ 1;
    bVar19 = DAT_14ca76a80 ^ 1;
  }
  iVar5 = DAT_14c760d84;
  *local_58 = (longlong)puVar13;
  if (((iVar5 != 0 & DAT_14ca84f5a & bVar4) != 0) || ((bVar19 & 1) != 0)) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
  }
  ReleaseSRWLockExclusive(local_70);
  local_50 = *plVar27;
  pcVar3 = (code *)*param_4;
  plVar27 = param_4 + 4;
  if ((longlong *)param_4[2] != (longlong *)0x0) {
    plVar27 = (longlong *)param_4[2];
  }
  uVar14 = (**(code **)(*plVar27 + 8))(plVar27);
  (*pcVar3)(uVar14,&local_50,local_60);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406772f0 FUN_1406772f0 body=3592 status=ok
// SIG undefined FUN_1406772f0(void)

void FUN_1406772f0(undefined *******param_1,undefined ******param_2)

{
  undefined *******pppppppuVar1;
  undefined ******ppppppuVar2;
  uint uVar3;
  undefined *****pppppuVar4;
  undefined ****ppppuVar5;
  undefined *****pppppuVar6;
  undefined ******ppppppuVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined ******ppppppuVar12;
  undefined *******pppppppuVar13;
  int iVar14;
  undefined ******ppppppuVar15;
  bool bVar16;
  int iVar17;
  int iVar20;
  int iVar21;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar22;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auStack_918 [32];
  undefined *****local_8f8;
  ulonglong uStack_8f0;
  undefined ******local_8e8;
  undefined *****local_8d8;
  ulonglong uStack_8d0;
  undefined ******local_8c8;
  byte local_8ba;
  byte local_8b9;
  undefined *****local_8b8;
  undefined *****pppppuStack_8b0;
  undefined *******local_8a8 [255];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_918;
  local_8a8[1] = (undefined *******)local_8a8;
  local_8b8 = (undefined *****)&PTR_FUN_149e37810;
  pppppppuVar13 = (undefined *******)&local_8b8;
  pppppuStack_8b0 = (undefined *****)param_2;
  local_8a8[0] = pppppppuVar13;
  switchD_143c3d4dc::caseD_20();
  ppppppuVar15 = param_1[4];
  if (ppppppuVar15 == (undefined ******)0x0) {
LAB_1406776cf:
    bVar16 = false;
  }
  else {
    lVar10 = FUN_140678110();
    pppppuVar4 = ppppppuVar15[2];
    if (*(int *)(pppppuVar4 + 7) < *(int *)(lVar10 + 0x38)) goto LAB_1406776cf;
    bVar16 = pppppuVar4[6][*(int *)(lVar10 + 0x38)] == (undefined ***)(lVar10 + 0x30);
  }
  FUN_140562eea(&local_8ba,param_2,bVar16,&DAT_14c896044);
  FUN_14010dffd(param_2,param_1 + 0x46);
  if ((((ulonglong)param_2[5] & 1) == 0) || (0x1d8 < *(int *)(param_2 + 8))) {
    FUN_1406781f6(param_1 + 9,param_2,0);
    FUN_1406781f6(param_1 + 0xb,param_2,0);
    FUN_140678b58(param_1 + 5,param_2);
  }
  else {
    local_8b8 = (undefined *****)0x0;
    pppppuStack_8b0 = (undefined *****)0x0;
    local_8d8 = (undefined *****)0x0;
    uStack_8d0 = 0;
    local_8f8 = (undefined *****)0x0;
    uStack_8f0 = 0;
    local_8e8 = (undefined ******)param_1;
    local_8c8 = (undefined ******)param_1;
    local_8a8[0] = param_1;
    FUN_1406781f6(&local_8b8,param_2,0);
    FUN_1406781f6(&local_8d8,param_2,0);
    FUN_140678b58(&local_8f8,param_2);
    pppppuVar4 = local_8b8;
    pppppppuVar1 = param_1 + 9;
    if (pppppppuVar1 != (undefined *******)&local_8b8) {
      iVar14 = (int)pppppuStack_8b0;
      lVar10 = (longlong)(int)pppppuStack_8b0;
      *(int *)(param_1 + 10) = (int)pppppuStack_8b0;
      if ((int)pppppuStack_8b0 == 0 && *(int *)((longlong)param_1 + 0x54) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x54) = 0;
      }
      else {
        FUN_140c0b9de(pppppppuVar1,(ulonglong)pppppuStack_8b0 & 0xffffffff);
        if (iVar14 != 0) {
          memcpy(*pppppppuVar1,pppppuVar4,lVar10 * 0xc);
        }
      }
    }
    pppppuVar4 = local_8d8;
    pppppppuVar1 = param_1 + 0xb;
    if (pppppppuVar1 != (undefined *******)&local_8d8) {
      iVar14 = (int)uStack_8d0;
      lVar10 = (longlong)(int)uStack_8d0;
      *(int *)(param_1 + 0xc) = (int)uStack_8d0;
      if ((int)uStack_8d0 == 0 && *(int *)((longlong)param_1 + 100) == 0) {
        *(undefined4 *)((longlong)param_1 + 100) = 0;
      }
      else {
        FUN_140c0b9de(pppppppuVar1,uStack_8d0 & 0xffffffff);
        if (iVar14 != 0) {
          memcpy(*pppppppuVar1,pppppuVar4,lVar10 * 0xc);
        }
      }
    }
    pppppuVar4 = local_8f8;
    pppppppuVar1 = param_1 + 5;
    if (pppppppuVar1 != (undefined *******)&local_8f8) {
      iVar14 = (int)uStack_8f0;
      lVar10 = (longlong)(int)uStack_8f0;
      *(int *)(param_1 + 6) = (int)uStack_8f0;
      if ((int)uStack_8f0 == 0 && *(int *)((longlong)param_1 + 0x34) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      }
      else {
        FUN_147bd0d70(pppppppuVar1,uStack_8f0 & 0xffffffff);
        if (iVar14 != 0) {
          memcpy(*pppppppuVar1,pppppuVar4,lVar10 << 6);
        }
      }
    }
    if ((undefined ******)local_8f8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
    if ((undefined ******)local_8d8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
    if ((undefined ******)local_8b8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
  }
  if (((ulonglong)param_2[5] & 1) == 0) {
LAB_14067744d:
    FUN_140678590(param_2,param_1 + 0xd);
    FUN_140678fa6(param_1 + 7,param_2);
  }
  else {
    if (*(int *)(param_1 + 6) < 1) {
      bVar8 = 1;
    }
    else {
      lVar10 = 0x37;
      lVar11 = 0;
      do {
        *(byte *)((longlong)param_1[5] + lVar10) = *(byte *)((longlong)param_1[5] + lVar10) & 0x1f;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x40;
      } while (lVar11 < *(int *)(param_1 + 6));
      bVar8 = *(byte *)(param_2 + 5) & 1;
    }
    if ((bVar8 == 0) || (0x1d8 < *(int *)(param_2 + 8))) goto LAB_14067744d;
    local_8b8 = (undefined *****)0x0;
    pppppuStack_8b0 = (undefined *****)0x0;
    local_8d8 = (undefined *****)0x0;
    uStack_8d0 = 0;
    local_8c8 = (undefined ******)param_1;
    local_8a8[0] = param_1;
    (*(code *)(*param_2)[0x2a])(param_2);
    FUN_140678590(param_2,&local_8b8);
    FUN_140678fa6(&local_8d8,param_2);
    FUN_147bca302(param_1 + 0xd,&local_8b8);
    pppppuVar4 = local_8d8;
    pppppppuVar1 = param_1 + 7;
    if (pppppppuVar1 != (undefined *******)&local_8d8) {
      iVar14 = (int)uStack_8d0;
      lVar10 = (longlong)(int)uStack_8d0;
      *(int *)(param_1 + 8) = (int)uStack_8d0;
      if ((int)uStack_8d0 == 0 && *(int *)((longlong)param_1 + 0x44) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x44) = 0;
      }
      else {
        FUN_147bd11f6(pppppppuVar1,uStack_8d0 & 0xffffffff);
        if (iVar14 != 0) {
          memcpy(*pppppppuVar1,pppppuVar4,lVar10 * 0x18);
        }
      }
    }
    if ((undefined ******)local_8d8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
    if ((undefined ******)local_8b8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
  }
  if ((((ulonglong)param_2[5] & 1) == 0) || (0x149 < *(int *)(param_2 + 8))) {
    ppppuVar5 = *param_2[1];
    if (param_2[1][1] < (undefined ****)((longlong)ppppuVar5 + 4U)) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (*(code *)(*param_2)[0x2e])(param_2,(undefined4 *)((longlong)param_1 + 0x22c),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)ppppuVar5;
      *param_2[1] = (undefined ****)((longlong)*param_2[1] + 4);
    }
  }
  else {
    ppppuVar5 = *param_2[1];
    if (param_2[1][1] < (undefined ****)((longlong)ppppuVar5 + 4U)) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (*(code *)(*param_2)[0x2e])(param_2,(undefined4 *)((longlong)param_1 + 0x22c),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)ppppuVar5;
      *param_2[1] = (undefined ****)((longlong)*param_2[1] + 4);
    }
    pppppuVar4 = param_2[1];
    ppppuVar5 = (undefined ****)((longlong)*pppppuVar4 + 4);
    if (pppppuVar4[1] < ppppuVar5) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (*(code *)(*param_2)[0x2e])(param_2,&local_8d8,4);
      }
      else {
        FUN_14572512c(param_2,&local_8d8);
      }
    }
    else {
      local_8d8 = (undefined *****)CONCAT44(local_8d8._4_4_,*(undefined4 *)*pppppuVar4);
      *pppppuVar4 = ppppuVar5;
    }
    lVar10 = 0x10;
    do {
      *(undefined8 *)((longlong)&local_8b8 + lVar10) = 0;
      *(undefined8 *)((longlong)local_8a8 + lVar10 + -8) = 0;
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != 0x810);
    if (0 < (int)local_8d8) {
      lVar10 = 0;
      do {
        FUN_147bca1d8(param_2,pppppppuVar13);
        lVar10 = lVar10 + 1;
        pppppppuVar13 = pppppppuVar13 + 4;
      } while (lVar10 < (int)local_8d8);
    }
  }
  bVar8 = 0x1b9 < *(int *)(param_2 + 8) & (*(byte *)((longlong)param_2 + 0x2b) & 0x20) >> 5;
  if (((ulonglong)param_2[5] & 1) == 0) {
    if (((ulonglong)param_2[5] & 4) != 0 && bVar8 == 0) goto LAB_1406778bb;
  }
  else if (bVar8 == 0) {
LAB_1406778bb:
    local_8f8 = (undefined *****)0x0;
    (*(code *)(*param_2)[0x2a])(param_2);
    local_8b8 = (undefined *****)0x0;
    pppppuStack_8b0 = (undefined *****)0x0;
    FUN_140c151f0(&local_8b8,param_2,0);
    local_8d8 = (undefined *****)0x0;
    uStack_8d0 = 0;
    FUN_147bca352(&local_8d8,param_2);
    if ((undefined ******)local_8d8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
    if ((undefined ******)local_8b8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
  }
  ppppuVar5 = *param_2[1];
  if (param_2[1][1] < (undefined ****)((longlong)ppppuVar5 + 4U)) {
    local_8b8 = (undefined *****)CONCAT44(local_8b8._4_4_,(uint)*(byte *)(param_1 + 0x45));
    (*(code *)(*param_2)[0x2e])(param_2,&local_8b8,4);
    if (1 < (uint)local_8b8) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x45) = (uint)local_8b8 != 0;
  }
  else {
    *(bool *)(param_1 + 0x45) = *(int *)ppppuVar5 != 0;
    *param_2[1] = (undefined ****)((longlong)*param_2[1] + 4);
  }
  ppppuVar5 = *param_2[1];
  if (param_2[1][1] < (undefined ****)((longlong)ppppuVar5 + 4U)) {
    local_8b8 = (undefined *****)
                CONCAT44(local_8b8._4_4_,(uint)*(byte *)((longlong)param_1 + 0x229));
    (*(code *)(*param_2)[0x2e])(param_2,&local_8b8,4);
    if (1 < (uint)local_8b8) {
      FUN_14572541c(param_2);
    }
    *(bool *)((longlong)param_1 + 0x229) = (uint)local_8b8 != 0;
  }
  else {
    *(bool *)((longlong)param_1 + 0x229) = *(int *)ppppuVar5 != 0;
    *param_2[1] = (undefined ****)((longlong)*param_2[1] + 4);
  }
  if ((((ulonglong)param_2[5] & 1) != 0) && (*(int *)(param_2 + 8) < 0x14a)) {
    local_8b8 = (undefined *****)0x0;
    pppppuStack_8b0 = (undefined *****)0x0;
    FUN_140c151f0(&local_8b8,param_2,0);
    if ((undefined ******)local_8b8 != (undefined ******)0x0) {
      FUN_1400020a8();
    }
  }
  ppppuVar5 = *param_2[1];
  if (param_2[1][1] < (undefined ****)((longlong)ppppuVar5 + 4U)) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (*(code *)(*param_2)[0x2e])(param_2,(undefined4 *)((longlong)param_1 + 0x214),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)ppppuVar5;
    *param_2[1] = (undefined ****)((longlong)*param_2[1] + 4);
  }
  if (((local_8ba & 1) == 0) || ((local_8b9 & 1) == 0)) {
    (*(code *)(*param_2)[0x43])(param_2,&DAT_149e3cb60);
    if (((ulonglong)param_2[5] & 1) == 0) {
LAB_140677726:
      (*(code *)(*param_2)[2])
                (param_2,(longlong)*(int *)(param_1 + 0x1d) << 6,
                 (longlong)*(int *)((longlong)param_1 + 0xec) << 6);
      uVar9 = 0;
      if (((ulonglong)param_2[5] & 1) == 0) {
        uVar9 = *(undefined4 *)(param_1 + 0x1d);
      }
      local_8b8 = (undefined *****)CONCAT44(local_8b8._4_4_,uVar9);
      pppppuVar4 = param_2[1];
      ppppuVar5 = (undefined ****)((longlong)*pppppuVar4 + 4);
      if (pppppuVar4[1] < ppppuVar5) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (*(code *)(*param_2)[0x2e])(param_2,&local_8b8,4);
        }
        else {
          FUN_14572512c(param_2,&local_8b8);
        }
        uVar3 = (uint)local_8b8;
      }
      else {
        uVar3 = *(uint *)*pppppuVar4;
        local_8b8 = (undefined *****)CONCAT44(local_8b8._4_4_,uVar3);
        *pppppuVar4 = ppppuVar5;
      }
      pppppppuVar13 = param_1 + 0x1c;
      if (uVar3 == 0) {
        if ((((ulonglong)param_2[5] & 1) != 0) &&
           (*(undefined4 *)(param_1 + 0x1d) = 0, *(int *)((longlong)param_1 + 0xec) != 0)) {
          FUN_14573310c(pppppppuVar13,0);
        }
      }
      else if ((((int)uVar3 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
              ((0x40000 < uVar3 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
        FUN_14572541c(param_2);
      }
      else if (((ulonglong)param_2[5] & 1) == 0) {
        *(uint *)(param_1 + 0x1d) = uVar3;
        lVar10 = 0;
        lVar11 = 0;
        do {
          FUN_1406796ca(param_2,(longlong)param_1[0x1c] + lVar10);
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x40;
        } while (lVar11 < *(int *)(param_1 + 0x1d));
      }
      else {
        *(undefined4 *)(param_1 + 0x1d) = 0;
        if (*(uint *)((longlong)param_1 + 0xec) != uVar3) {
          FUN_14573310c(pppppppuVar13);
          if ((int)(uint)local_8b8 < 1) goto LAB_140677568;
        }
        iVar14 = 0;
        do {
          iVar17 = *(int *)(param_1 + 0x1d);
          *(uint *)(param_1 + 0x1d) = iVar17 + 1U;
          if (*(uint *)((longlong)param_1 + 0xec) < iVar17 + 1U) {
            FUN_147bd21ce(pppppppuVar13,iVar17);
          }
          ppppppuVar15 = *pppppppuVar13;
          FUN_1406796be(ppppppuVar15 + (longlong)iVar17 * 8);
          FUN_1406796ca(param_2,ppppppuVar15 + (longlong)iVar17 * 8);
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)(uint)local_8b8);
      }
    }
    else {
      iVar14 = FUN_1448332aa(param_2,&DAT_149e3cb60);
      if (iVar14 < 0x17) {
        pppppuStack_8b0 = (undefined *****)0x0;
        local_8a8[0] = (undefined *******)0x0;
        local_8b8 = (undefined *****)&PTR_FUN_14a9e4ab0;
        local_8a8[1] = (undefined *******)((ulonglong)local_8a8[1] & 0xffffffffffffff00);
        FUN_147bd1d22(&pppppuStack_8b0,param_2);
        pppppppuVar13 = param_1 + 0x1c;
        auVar18._0_8_ = FUN_147bcb0ce(pppppppuVar13,(ulonglong)local_8a8[0] & 0xffffffff);
        auVar18._8_8_ = extraout_XMM0_Qb;
        ppppppuVar15 = (undefined ******)
                       ((longlong)local_8a8 + ((longlong)pppppuStack_8b0 >> 0x18) + -8);
        if (((ulonglong)pppppuStack_8b0 & 1) == 0) {
          ppppppuVar15 = (undefined ******)pppppuStack_8b0;
        }
        if ((longlong)(int)local_8a8[0] != 0) {
          ppppppuVar12 = (undefined ******)
                         ((longlong)ppppppuVar15 + (longlong)(int)local_8a8[0] * 0x24);
          do {
            uStack_8d0 = CONCAT44(uStack_8d0._4_4_,*(undefined4 *)(ppppppuVar15 + 1));
            local_8d8 = *ppppppuVar15;
            auVar19 = pmovzxbd(auVar18,*(undefined4 *)((longlong)ppppppuVar15 + 0xc));
            auVar18 = pmovzxbd(auVar19,*(undefined4 *)(ppppppuVar15 + 2));
            iVar17 = auVar18._0_4_;
            iVar20 = auVar18._4_4_;
            iVar21 = auVar18._8_4_;
            iVar22 = auVar18._12_4_;
            pppppuVar4 = *(undefined ******)((longlong)ppppppuVar15 + 0x14);
            pppppuVar6 = *(undefined ******)((longlong)ppppppuVar15 + 0x1c);
            iVar14 = *(int *)(param_1 + 0x1d);
            lVar10 = (longlong)iVar14;
            *(uint *)(param_1 + 0x1d) = iVar14 + 1U;
            if (*(uint *)((longlong)param_1 + 0xec) < iVar14 + 1U) {
              auVar18._0_8_ = FUN_147bd21ce(pppppppuVar13,iVar14);
              auVar18._8_8_ = extraout_XMM0_Qb_00;
            }
            ppppppuVar7 = *pppppppuVar13;
            *(int *)(ppppppuVar7 + lVar10 * 8 + 1) = (int)uStack_8d0;
            ppppppuVar7[lVar10 * 8] = local_8d8;
            *(ulonglong *)((longlong)ppppppuVar7 + lVar10 * 0x40 + 0xc) =
                 CONCAT44((float)auVar19._4_4_ * 0.007843138 + -1.0,
                          (float)auVar19._0_4_ * 0.007843138 + -1.0);
            *(float *)((longlong)ppppppuVar7 + lVar10 * 0x40 + 0x14) =
                 (float)auVar19._8_4_ * 0.007843138 + -1.0;
            ppppppuVar2 = ppppppuVar7 + lVar10 * 8 + 4;
            *(float *)ppppppuVar2 = (float)iVar17 * 0.007843138 + -1.0;
            *(float *)((longlong)ppppppuVar2 + 4) = (float)iVar20 * 0.007843138 + -1.0;
            *(float *)(ppppppuVar2 + 1) = (float)iVar21 * 0.007843138 + -1.0;
            *(float *)((longlong)ppppppuVar2 + 0xc) = (float)iVar22 * 0.007843138 + -1.0;
            ppppppuVar7[lVar10 * 8 + 6] = pppppuVar4;
            ppppppuVar7[lVar10 * 8 + 7] = pppppuVar6;
            ppppppuVar15 = (undefined ******)((longlong)ppppppuVar15 + 0x24);
          } while (ppppppuVar15 != ppppppuVar12);
        }
        ppppppuVar15 = (undefined ******)pppppuStack_8b0;
        if ((undefined ******)pppppuStack_8b0 != (undefined ******)0x0 &&
            ((ulonglong)pppppuStack_8b0 & 1) == 0) {
LAB_140677faf:
          FUN_1400020a8(ppppppuVar15);
        }
      }
      else {
        if ((((ulonglong)param_2[5] & 1) == 0) ||
           (iVar14 = FUN_1448332aa(param_2,&DAT_149e3cb60), 0x19 < iVar14)) goto LAB_140677726;
        local_8b8 = (undefined *****)0x0;
        pppppuStack_8b0 = (undefined *****)0x0;
        FUN_147bcb0f8(&local_8b8,param_2);
        pppppppuVar13 = param_1 + 0x1c;
        auVar19._0_8_ = FUN_147bcb0ce(pppppppuVar13,(ulonglong)pppppuStack_8b0 & 0xffffffff);
        auVar19._8_8_ = extraout_XMM0_Qb_01;
        if ((longlong)(int)pppppuStack_8b0 != 0) {
          ppppppuVar15 = (undefined ******)
                         ((longlong)local_8b8 + (longlong)(int)pppppuStack_8b0 * 0x24);
          ppppppuVar12 = (undefined ******)local_8b8;
          do {
            uStack_8d0 = CONCAT44(uStack_8d0._4_4_,*(undefined4 *)(ppppppuVar12 + 1));
            local_8d8 = *ppppppuVar12;
            auVar18 = pmovzxbd(auVar19,*(undefined4 *)((longlong)ppppppuVar12 + 0xc));
            auVar19 = pmovzxbd(auVar18,*(undefined4 *)(ppppppuVar12 + 2));
            iVar17 = auVar19._0_4_;
            iVar20 = auVar19._4_4_;
            iVar21 = auVar19._8_4_;
            iVar22 = auVar19._12_4_;
            pppppuVar4 = *(undefined ******)((longlong)ppppppuVar12 + 0x14);
            pppppuVar6 = *(undefined ******)((longlong)ppppppuVar12 + 0x1c);
            iVar14 = *(int *)(param_1 + 0x1d);
            lVar10 = (longlong)iVar14;
            *(uint *)(param_1 + 0x1d) = iVar14 + 1U;
            if (*(uint *)((longlong)param_1 + 0xec) < iVar14 + 1U) {
              auVar19._0_8_ = FUN_147bd21ce(pppppppuVar13,iVar14);
              auVar19._8_8_ = extraout_XMM0_Qb_02;
            }
            ppppppuVar7 = *pppppppuVar13;
            *(int *)(ppppppuVar7 + lVar10 * 8 + 1) = (int)uStack_8d0;
            ppppppuVar7[lVar10 * 8] = local_8d8;
            *(ulonglong *)((longlong)ppppppuVar7 + lVar10 * 0x40 + 0xc) =
                 CONCAT44((float)auVar18._4_4_ * 0.007843138 + -1.0,
                          (float)auVar18._0_4_ * 0.007843138 + -1.0);
            *(float *)((longlong)ppppppuVar7 + lVar10 * 0x40 + 0x14) =
                 (float)auVar18._8_4_ * 0.007843138 + -1.0;
            ppppppuVar2 = ppppppuVar7 + lVar10 * 8 + 4;
            *(float *)ppppppuVar2 = (float)iVar17 * 0.007843138 + -1.0;
            *(float *)((longlong)ppppppuVar2 + 4) = (float)iVar20 * 0.007843138 + -1.0;
            *(float *)(ppppppuVar2 + 1) = (float)iVar21 * 0.007843138 + -1.0;
            *(float *)((longlong)ppppppuVar2 + 0xc) = (float)iVar22 * 0.007843138 + -1.0;
            ppppppuVar7[lVar10 * 8 + 6] = pppppuVar4;
            ppppppuVar7[lVar10 * 8 + 7] = pppppuVar6;
            ppppppuVar12 = (undefined ******)((longlong)ppppppuVar12 + 0x24);
          } while (ppppppuVar12 != ppppppuVar15);
        }
        ppppppuVar15 = (undefined ******)local_8b8;
        if ((undefined ******)local_8b8 != (undefined ******)0x0) goto LAB_140677faf;
      }
    }
  }
LAB_140677568:
  FUN_1402ac1b3(param_2,param_1 + 0x43);
  (*(code *)(*param_2)[2])
            (param_2,(longlong)*(int *)(param_1 + 0x10) * 0x18,
             (longlong)*(int *)((longlong)param_1 + 0x84) * 0x18);
  uVar9 = 0;
  if (((ulonglong)param_2[5] & 1) == 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x10);
  }
  local_8b8 = (undefined *****)CONCAT44(local_8b8._4_4_,uVar9);
  pppppuVar4 = param_2[1];
  ppppuVar5 = (undefined ****)((longlong)*pppppuVar4 + 4);
  if (pppppuVar4[1] < ppppuVar5) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (*(code *)(*param_2)[0x2e])(param_2,&local_8b8,4);
    }
    else {
      FUN_14572512c(param_2,&local_8b8);
    }
    uVar3 = (uint)local_8b8;
  }
  else {
    uVar3 = *(uint *)*pppppuVar4;
    local_8b8 = (undefined *****)CONCAT44(local_8b8._4_4_,uVar3);
    *pppppuVar4 = ppppuVar5;
  }
  pppppppuVar13 = param_1 + 0xf;
  if (uVar3 == 0) {
    if ((((ulonglong)param_2[5] & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x10) = 0, *(int *)((longlong)param_1 + 0x84) != 0)) {
      FUN_140678e54(pppppppuVar13,0);
    }
  }
  else if ((((int)uVar3 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < uVar3 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if (((ulonglong)param_2[5] & 1) == 0) {
    *(uint *)(param_1 + 0x10) = uVar3;
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_14067932b(param_2,(longlong)param_1[0xf] + lVar10);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar11 < *(int *)(param_1 + 0x10));
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(uint *)((longlong)param_1 + 0x84) != uVar3) {
      FUN_140678e54(pppppppuVar13);
      if ((int)(uint)local_8b8 < 1) goto LAB_14067766d;
    }
    iVar14 = 0;
    do {
      iVar17 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar17 + 1U;
      if (*(uint *)((longlong)param_1 + 0x84) < iVar17 + 1U) {
        FUN_147bd15c6(pppppppuVar13,iVar17);
      }
      ppppppuVar15 = *pppppppuVar13;
      FUN_1406780f9(ppppppuVar15 + (longlong)iVar17 * 3);
      FUN_14067932b(param_2,ppppppuVar15 + (longlong)iVar17 * 3);
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)(uint)local_8b8);
  }
LAB_14067766d:
  if ((local_b0 ^ (ulonglong)auStack_918) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406780f9 FUN_1406780f9 body=22 status=ok
// SIG undefined FUN_1406780f9(void)

void FUN_1406780f9(byte *param_1)

{
  *param_1 = *param_1 & 0xf0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x41;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 **)(param_1 + 0xc) = &DAT_3f8000003f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x80;
  param_1[0x17] = 0x3f;
  return;
}



// FUNCTION 140678110 FUN_140678110 body=228 status=ok
// SIG undefined FUN_140678110(void)

longlong FUN_140678110(void)

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
  if (DAT_14cabf668 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14785d01b;
    local_40 = &LAB_14637006c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3c8;
    FUN_14081cfa3(L"/Script/Engine",L"Brush",&DAT_14cabf668,&DAT_14785d01a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf668;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406781f6 FUN_1406781f6 body=590 status=ok
// SIG undefined FUN_1406781f6(void)

void FUN_1406781f6(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xc;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146c978d6(param_2,param_1);
    goto LAB_14067830c;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0xc,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_14067830c;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_1406782f5:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 * 0xc);
  }
  else {
    if (local_24 == 0xc) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0xaaaaaab) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_140678446(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_140c0b6f2(param_1,iVar4);
        }
        goto LAB_1406782f5;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_14067830c:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140678446 FUN_140678446 body=329 status=ok
// SIG undefined FUN_140678446(void)

void FUN_140678446(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1406784b4;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1406784b4:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 140678590 FUN_140678590 body=426 status=ok
// SIG undefined FUN_140678590(void)

longlong * FUN_140678590(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
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
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140678a72(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x33333 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_140678745(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x50;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_140678a72(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147bd126a(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0x50 + *param_2;
        FUN_14067873b(lVar4);
        FUN_140678745(param_1,lVar4);
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



// FUNCTION 14067873b FUN_14067873b body=10 status=ok
// SIG undefined FUN_14067873b(void)

void FUN_14067873b(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 140678745 FUN_140678745 body=813 status=ok
// SIG undefined FUN_140678745(void)

longlong * FUN_140678745(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  (**(code **)(*param_1 + 0x138))();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 8),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x14),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x18),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x1c),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 0x138))(param_1,param_2 + 0x20);
  plVar2 = (longlong *)FUN_1447712aa(param_1,param_2 + 0x30);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,(undefined4 *)(param_2 + 0x3c),4);
    }
    else {
      FUN_14572512c(plVar2);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x3c) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x40),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = (undefined4 *)(param_2 + 0x44);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140678a72 FUN_140678a72 body=230 status=ok
// SIG undefined FUN_140678a72(void)

void FUN_140678a72(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x19a) {
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
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,0x10);
  }
  return;
}



// FUNCTION 140678b58 FUN_140678b58 body=551 status=ok
// SIG undefined FUN_140678b58(void)

void FUN_140678b58(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x40;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147bd0b44(param_2,param_1);
    goto LAB_140678c50;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 6,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 6);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140678c50;
    local_20 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_140678c3d:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_20 << 6);
  }
  else {
    if (local_1c == 0x40) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x2000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        if (*(uint *)((longlong)param_1 + 0xc) == local_20) {
          iVar4 = 0;
          uVar5 = local_20;
        }
        else {
          FUN_140678d80(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_20 + iVar4;
        if (uVar5 - iVar4 < local_20) {
          FUN_147bd0cea(param_1,iVar4);
        }
        goto LAB_140678c3d;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140678c50:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140678d80 FUN_140678d80 body=212 status=ok
// SIG undefined FUN_140678d80(void)

void FUN_140678d80(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x200) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
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



// FUNCTION 140678e54 FUN_140678e54 body=337 status=ok
// SIG undefined FUN_140678e54(void)

void FUN_140678e54(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140678ec1;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140678ec1:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,4);
  }
  return;
}



// FUNCTION 140678fa6 FUN_140678fa6 body=563 status=ok
// SIG undefined FUN_140678fa6(void)

void FUN_140678fa6(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x18;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147bd0dd2(param_2,param_1);
    goto LAB_1406790aa;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0x18,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x18);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1406790aa;
    local_20 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_140679093:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_20 * 0x18);
  }
  else {
    if (local_1c == 0x18) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x5555556) {
        *(undefined4 *)(param_1 + 1) = 0;
        if (*(uint *)((longlong)param_1 + 0xc) == local_20) {
          iVar4 = 0;
          uVar5 = local_20;
        }
        else {
          FUN_1406791da(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_20 + iVar4;
        if (uVar5 - iVar4 < local_20) {
          FUN_147bd1042(param_1,iVar4);
        }
        goto LAB_140679093;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_1406790aa:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406791da FUN_1406791da body=337 status=ok
// SIG undefined FUN_1406791da(void)

void FUN_1406791da(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140679247;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140679247:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,4);
  }
  return;
}



// FUNCTION 14067932b FUN_14067932b body=914 status=ok
// SIG undefined FUN_14067932b(void)

longlong * FUN_14067932b(longlong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (ulonglong *)param_1[1];
  puVar3 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar3) {
    local_24 = *param_2 & 1;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    uVar4 = local_24;
    if (1 < local_24) {
      FUN_14572541c(param_1);
      uVar4 = local_24;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  uVar1 = *param_2;
  *param_2 = uVar1 & 0xfffffffe | (uint)(uVar4 != 0);
  puVar2 = (ulonglong *)param_1[1];
  puVar3 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar3) {
    local_24 = uVar1 >> 1 & 1;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    uVar4 = local_24;
    if (1 < local_24) {
      FUN_14572541c(param_1);
      uVar4 = local_24;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  *param_2 = (*param_2 & 0xfffffffd) + (uint)(uVar4 != 0) * 2;
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[5] = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar3 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar3) {
    local_24 = *param_2 >> 2 & 1;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    uVar4 = local_24;
    if (1 < local_24) {
      FUN_14572541c(param_1);
      uVar4 = local_24;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  uVar1 = *param_2;
  *param_2 = (uVar1 & 0xfffffffb) + (uint)(uVar4 != 0) * 4;
  if (0x1cc < (int)param_1[8]) {
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar3) {
      local_24 = uVar1 >> 3 & 1;
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
      uVar4 = local_24;
      if (1 < local_24) {
        FUN_14572541c(param_1);
        uVar4 = local_24;
      }
    }
    else {
      uVar4 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar3;
    }
    *param_2 = (*param_2 & 0xfffffff7) + (uint)(uVar4 != 0) * 8;
  }
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 4;
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406796be FUN_1406796be body=12 status=ok
// SIG undefined FUN_1406796be(void)

void FUN_1406796be(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3f80000000000000;
  return;
}



// FUNCTION 1406796ca FUN_1406796ca body=527 status=ok
// SIG undefined FUN_1406796ca(void)

longlong * FUN_1406796ca(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  undefined8 extraout_XMM0_Qb_00;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447712aa();
  iVar3 = FUN_1448332aa(param_1,&DAT_149e3cb60);
  if (iVar3 < 0x1a) {
    auVar5._0_8_ = FUN_1474302aa(param_1,&local_24);
    auVar5._8_8_ = extraout_XMM0_Qb;
    auVar5 = pmovzxbd(auVar5,local_24);
    auVar6._0_8_ = CONCAT44((float)auVar5._4_4_ * 0.007843138 + -1.0,
                            (float)auVar5._0_4_ * 0.007843138 + -1.0);
    auVar6._8_4_ = (float)auVar5._8_4_ * 0.007843138 + -1.0;
    auVar6._12_4_ = (float)auVar5._12_4_ * 0.0 + 0.0;
    *(undefined8 *)(param_2 + 0xc) = auVar6._0_8_;
    uVar2 = extractps(auVar6,2);
    *(undefined8 *)(param_2 + 0x14) = uVar2;
    auVar7._0_8_ = FUN_1474302aa(param_1,&local_24);
    auVar7._8_8_ = extraout_XMM0_Qb_00;
    auVar5 = pmovzxbd(auVar7,local_24);
    *(float *)(param_2 + 0x20) = (float)auVar5._0_4_ * 0.007843138 + -1.0;
    *(float *)(param_2 + 0x24) = (float)auVar5._4_4_ * 0.007843138 + -1.0;
    *(float *)(param_2 + 0x28) = (float)auVar5._8_4_ * 0.007843138 + -1.0;
    *(float *)(param_2 + 0x2c) = (float)auVar5._12_4_ * 0.007843138 + -1.0;
  }
  else {
    FUN_1447712aa(param_1,param_2 + 0xc);
    FUN_1447e46aa(param_1,param_2 + 0x20);
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x30),4);
    }
    else {
      FUN_14572512c(param_1);
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
      FUN_14572512c(param_1);
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
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = (undefined4 *)(param_2 + 0x3c);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
    }
    else {
      FUN_14572512c(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067997c FUN_14067997c body=10 status=ok
// SIG undefined FUN_14067997c(void)

void FUN_14067997c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140679983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 140679996 FUN_140679996 body=124 status=ok
// SIG undefined FUN_140679996(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140679996(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867dc8) {
    FUN_144b3d300(&DAT_14c867dc8);
    if (DAT_14c867dc8 == -1) {
      DAT_14c867db8 = 0;
      _DAT_14c867dc0 = 0x800000000;
      atexit((_func_5014 *)&LAB_142780b27);
      _Init_thread_footer(&DAT_14c867dc8);
    }
  }
  return &DAT_14c867d78;
}



// FUNCTION 140679a12 FUN_140679a12 body=128 status=ok
// SIG undefined FUN_140679a12(void)

undefined * FUN_140679a12(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867d70) {
    FUN_144b3d300(&DAT_14c867d70);
    if (DAT_14c867d70 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c867d48);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c867d48,4000);
      atexit((_func_5014 *)&LAB_142780b19);
      _Init_thread_footer(&DAT_14c867d70);
    }
  }
  return &DAT_14c867d48;
}



// FUNCTION 140679a92 FUN_140679a92 body=617 status=ok
// SIG undefined FUN_140679a92(void)

void FUN_140679a92(undefined8 param_1,longlong param_2)

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
            goto LAB_140679b7d;
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
LAB_140679b7d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140679cfc(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140679cfc FUN_140679cfc body=131 status=ok
// SIG undefined FUN_140679cfc(void)

void FUN_140679cfc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x3f8);
  if (0 < (int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x3f0);
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + uVar3 * 8) == param_2) {
        if (uVar2 - 1 != (int)uVar3) {
          iVar4 = (uVar2 - 1) - (int)uVar3;
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + uVar3 * 8),(void *)(lVar1 + (ulonglong)(uVar2 - iVar5) * 8),
                  (longlong)iVar5 << 3);
          uVar2 = *(uint *)(param_1 + 0x3f8);
        }
        *(uint *)(param_1 + 0x3f8) = uVar2 - 1;
        FUN_140679d80(param_1,param_2);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 140679d80 FUN_140679d80 body=228 status=ok
// SIG undefined FUN_140679d80(void)

void FUN_140679d80(longlong param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*param_2 + 0x4a0))(param_2,&DAT_14cadad9c);
    if (DAT_14c7639f8 == '\x01') {
      FUN_14045627c(param_2,0,1);
    }
    else {
      FUN_1401bf202(param_2);
    }
    FUN_140bd5bb0(param_2,0x7f7fffff);
    lVar3 = FUN_1447210f0(param_1);
    dVar1 = *(double *)(lVar3 + 0x6d0);
    iVar2 = *(int *)(param_1 + 0x408);
    *(uint *)(param_1 + 0x408) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x40c) < iVar2 + 1U) {
      FUN_1465562a2((longlong *)(param_1 + 0x400),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x400);
    *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(float *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = (float)dVar1;
  }
  return;
}



// FUNCTION 140679e64 FUN_140679e64 body=52 status=ok
// SIG undefined FUN_140679e64(void)

bool FUN_140679e64(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_140679e98();
  bVar2 = true;
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x2cc) == '\x01') {
      bVar2 = *(int *)(param_1 + 0x2c8) != -1;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



// FUNCTION 140679e98 FUN_140679e98 body=94 status=ok
// SIG undefined FUN_140679e98(void)

undefined8 FUN_140679e98(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0x1dc) & 4) == 0) || ((*(byte *)(param_1 + 0x108) & 0xfe) != 2)) {
LAB_140679ea1:
    uVar2 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x60) == '\x01') {
      if (*(int *)(param_1 + 0xec) != -1) goto LAB_140679ea1;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x6c);
      if ((~uVar1 & 0x7fffffff) != 0) {
        lVar3 = param_2 + 0x10;
        if (*(longlong *)(param_2 + 0x20) != 0) {
          lVar3 = *(longlong *)(param_2 + 0x20);
        }
        if ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) != 0)
        goto LAB_140679ea1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140679ef6 FUN_140679ef6 body=55 status=ok
// SIG undefined FUN_140679ef6(void)

void FUN_140679ef6(longlong *param_1)

{
  FUN_140679f2e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140679f2e FUN_140679f2e body=121 status=ok
// SIG undefined FUN_140679f2e(void)

void FUN_140679f2e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 140679fa8 FUN_140679fa8 body=86 status=ok
// SIG undefined FUN_140679fa8(void)

void FUN_140679fa8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  FUN_140679ffe(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140679ffe FUN_140679ffe body=73 status=ok
// SIG undefined FUN_140679ffe(void)

void FUN_140679ffe(longlong param_1,int param_2)

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



// FUNCTION 14067a048 FUN_14067a048 body=339 status=ok
// SIG undefined FUN_14067a048(void)

undefined8 * FUN_14067a048(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  puVar1[1] = &DAT_14c951cd0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e70e50;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14067a19c(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067a19c FUN_14067a19c body=157 status=ok
// SIG undefined FUN_14067a19c(void)

undefined8 *
FUN_14067a19c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e70e50;
  *(undefined4 *)(param_1 + 0xe) = 0x1010000;
  FUN_14001671c(param_1,1,0,1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067a23a FUN_14067a23a body=76 status=ok
// SIG undefined FUN_14067a23a(void)

undefined8 FUN_14067a23a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14067a286(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014067a27b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14067a286 FUN_14067a286 body=181 status=ok
// SIG undefined FUN_14067a286(void)

longlong FUN_14067a286(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar3 = (longlong *)FUN_14067a33c();
  lVar1 = *param_1;
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    plVar6 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar3[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*plVar3 + (longlong)iVar5 * 0x18);
        if (*plVar6 == lVar1) {
          if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
            return plVar6[1];
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  lVar4 = DAT_14cb7e7d8;
  if (lVar1 != 0) {
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 14067a33c FUN_14067a33c body=157 status=ok
// SIG undefined FUN_14067a33c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14067a33c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7e830) {
    FUN_144b3d300(&DAT_14cb7e830);
    if (DAT_14cb7e830 == -1) {
      DAT_14cb7e800 = 0;
      DAT_14cb7e808 = 0;
      DAT_14cb7e7e0 = 0;
      _DAT_14cb7e7e8 = 0;
      _DAT_14cb7e80c = 0xffffffff00000080;
      DAT_14cb7e814 = 0;
      DAT_14cb7e820 = 0;
      DAT_14cb7e828 = 0;
      atexit(FUN_143d637c5);
      _Init_thread_footer(&DAT_14cb7e830);
    }
  }
  return &DAT_14cb7e7e0;
}



// FUNCTION 14067a3da FUN_14067a3da body=427 status=ok
// SIG undefined FUN_14067a3da(void)

float FUN_14067a3da(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
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
  code *local_48 [2];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_60 = local_48;
      local_48[0] = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_142b4754c;
      local_68 = &LAB_1483e40eb;
      local_70 = &LAB_146486986;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000005;
      local_90 = 8;
      local_98 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      lVar2 = *(longlong *)(lVar2 + 0x398);
      goto LAB_14067a44b;
    }
  }
  lVar2 = 0;
LAB_14067a44b:
  cVar1 = (**(code **)(*param_1 + 0xb18))(param_1);
  if ((lVar2 == 0) || (cVar1 != '\0')) {
    local_38 = (double)param_1[0x4e];
  }
  else {
    FUN_140703b8c(lVar2,local_48,0,1);
  }
  fVar4 = (float)local_38;
  cVar1 = (**(code **)(*param_1 + 0xb28))(param_1);
  if (cVar1 != '\0') {
    fVar3 = (float)(**(code **)(*param_1 + 0xa58))(param_1);
    fVar4 = fVar4 + fVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067a586 FUN_14067a586 body=23 status=ok
// SIG undefined FUN_14067a586(void)

bool FUN_14067a586(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa40))();
  return cVar1 == '\x02';
}



// FUNCTION 14067a59e FUN_14067a59e body=48 status=ok
// SIG undefined FUN_14067a59e(void)

bool FUN_14067a59e(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa40))();
  if (cVar1 == '\x01') {
    bVar2 = true;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xa40))(param_1);
    bVar2 = cVar1 == '\x02';
  }
  return bVar2;
}



// FUNCTION 14067a5ce FUN_14067a5ce body=1433 status=ok
// SIG undefined FUN_14067a5ce(void)

void FUN_14067a5ce(longlong param_1,longlong param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int *piVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_a8 [32];
  int local_88;
  ulonglong local_78;
  undefined4 local_6c;
  int local_68 [4];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar1;
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    puVar5 = (undefined8 *)*puVar1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)puVar5 = 0;
  lVar8 = param_1 + 0x28;
  FUN_14026ccd7(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1408f7a70(lVar8,0);
  }
  *(undefined2 *)(param_1 + 0x60) = 0;
  uVar14 = *param_3;
  uVar10 = uVar14 + 1;
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_2 + 0x18))) {
    *param_3 = uVar10;
    lVar6 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar6 = param_2;
    }
    uVar12 = uVar14 + 0x1f;
    if (-1 < (int)uVar14) {
      uVar12 = uVar14;
    }
    uVar12 = *(uint *)(lVar6 + (ulonglong)(uint)((int)uVar12 >> 5) * 4);
    uVar2 = uVar14 + 2;
    *param_3 = uVar2;
    lVar6 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar6 = param_2;
    }
    uVar10 = 1 << ((byte)uVar10 & 0x1f) & *(uint *)(lVar6 + (ulonglong)(uVar10 >> 5) * 4);
    if ((uVar12 >> (uVar14 & 0x1f) & 1) == 0) {
      if (uVar10 == 0) {
        uVar7 = FUN_14067ab68(lVar8);
        FUN_14067acd0(param_2,param_3,uVar7);
      }
      else {
        do {
          iVar19 = *(int *)(param_2 + 0x18);
          uVar14 = uVar2;
          if (iVar19 <= (int)uVar2) goto LAB_14067a6f3;
          uVar7 = FUN_14067ab68(lVar8);
          FUN_14067acd0(param_2,param_3,uVar7);
          uVar14 = *param_3;
          iVar19 = *(int *)(param_2 + 0x18);
          if (((int)uVar14 < 0) || (iVar19 <= (int)uVar14)) goto LAB_14067a6f3;
          uVar2 = uVar14 + 1;
          *param_3 = uVar2;
          lVar6 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar6 = param_2;
          }
        } while ((*(uint *)(lVar6 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0);
        iVar19 = *(int *)(param_2 + 0x18);
        uVar14 = uVar2;
LAB_14067a6f3:
        if ((-1 < (int)uVar14) && ((int)uVar14 < iVar19)) {
          *param_3 = uVar14 + 1;
          lVar8 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar8 = param_2;
          }
          *(bool *)(param_1 + 0x60) =
               (*(uint *)(lVar8 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0;
          uVar14 = *param_3;
          iVar19 = *(int *)(param_2 + 0x18);
        }
        if ((-1 < (int)uVar14) && ((int)uVar14 < iVar19)) {
          *param_3 = uVar14 + 1;
          lVar8 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar8 = param_2;
          }
          *(bool *)(param_1 + 0x61) =
               (*(uint *)(lVar8 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0;
        }
      }
    }
    else {
      local_58 = (int *)0x0;
      local_50 = 0x8000000000;
      FUN_14067acd0(param_2,param_3,local_68);
      uVar9 = local_50;
      if ((int)local_50 < 0x20) {
        uVar14 = 0x20 - (int)local_50;
        if ((((int)local_50 == 0) || (0x3e < (int)local_50 + 0x1eU)) && (local_50._4_4_ < 0x20)) {
          local_50._4_4_ = 0x80;
          local_78 = (ulonglong)uVar14;
          FUN_1446efbd8(local_68,uVar9 & 0xffffffff);
          uVar12 = (int)local_50 + (int)local_78;
          uVar14 = (int)local_50 + (int)local_78 + 0x1f;
          if (-1 < (int)uVar12) {
            uVar14 = uVar12;
          }
          local_50 = CONCAT44(local_50._4_4_,uVar12);
          iVar19 = uVar12 - (uVar14 & 0xffffffe0);
          uVar15 = local_78;
          if (iVar19 != 0) {
            piVar16 = local_68;
            if (local_58 != (int *)0x0) {
              piVar16 = local_58;
            }
            bVar17 = -(char)iVar19;
            piVar16[(int)uVar14 >> 5] =
                 (uint)(piVar16[(int)uVar14 >> 5] << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
          }
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,0x20);
          uVar15 = (ulonglong)uVar14;
        }
        FUN_1447c6044(local_68,uVar9 & 0xffffffff,uVar15,0);
      }
      piVar16 = local_68;
      if (local_58 != (int *)0x0) {
        piVar16 = local_58;
      }
      iVar19 = *piVar16;
      if (uVar10 == 0) {
        iVar3 = *param_3 + iVar19 + -1;
        if ((-1 < iVar3) && (iVar3 < *(int *)(param_2 + 0x18))) {
          lVar8 = FUN_14067ab68(lVar8);
          if (*(int *)(lVar8 + 0x1c) < iVar19) {
            if (iVar19 + 0x1fU < 0xa0) {
              iVar3 = 0x80;
            }
            else {
              uVar14 = iVar19 + 0x1fU >> 5;
              if (*(int *)(lVar8 + 0x1c) + 0x1fU < 0xa0) {
                uVar10 = 4;
                if (4 < uVar14) {
                  uVar10 = uVar14;
                }
              }
              else {
                uVar10 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
              }
              uVar9 = FUN_144a3809e(uVar10 << 2,0);
              iVar4 = (int)(uVar9 >> 2);
              iVar3 = -0x20;
              if ((int)uVar14 <= iVar4) {
                iVar3 = iVar4 << 5;
              }
            }
            *(int *)(lVar8 + 0x1c) = iVar3;
            FUN_1446efbd8(lVar8,*(undefined4 *)(lVar8 + 0x18));
          }
          uVar14 = *param_3;
          iVar3 = *(int *)(lVar8 + 0x18);
          if (0 < iVar19) {
            if (iVar3 == 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar4 = iVar3 + -1;
              }
              iVar4 = iVar4 >> 5;
            }
            iVar18 = iVar3 + iVar19;
            iVar11 = iVar3 + iVar19 + -1;
            iVar13 = iVar3 + iVar19 + 0x1e;
            if (-1 < iVar11) {
              iVar13 = iVar11;
            }
            if (iVar13 >> 5 == iVar4) {
              *(int *)(lVar8 + 0x18) = iVar18;
            }
            else {
              if (*(int *)(lVar8 + 0x1c) < iVar18) {
                if (iVar18 + 0x1fU < 0xa0) {
                  iVar18 = 0x80;
                  iVar4 = iVar3;
                }
                else {
                  uVar10 = iVar18 + 0x1fU >> 5;
                  if (*(int *)(lVar8 + 0x1c) + 0x1fU < 0xa0) {
                    uVar12 = 4;
                    if (4 < uVar10) {
                      uVar12 = uVar10;
                    }
                  }
                  else {
                    uVar12 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
                  }
                  uVar9 = FUN_144a3809e(uVar12 << 2,0);
                  iVar4 = (int)(uVar9 >> 2);
                  iVar18 = -0x20;
                  if ((int)uVar10 <= iVar4) {
                    iVar18 = iVar4 << 5;
                  }
                  iVar4 = *(int *)(lVar8 + 0x18);
                }
                *(int *)(lVar8 + 0x1c) = iVar18;
                FUN_1446efbd8(lVar8,iVar4);
                iVar18 = *(int *)(lVar8 + 0x18) + iVar19;
              }
              iVar4 = iVar18 + 0x1f;
              if (-1 < iVar18) {
                iVar4 = iVar18;
              }
              *(int *)(lVar8 + 0x18) = iVar18;
              if (iVar18 % 0x20 != 0) {
                lVar6 = *(longlong *)(lVar8 + 0x10);
                if (*(longlong *)(lVar8 + 0x10) == 0) {
                  lVar6 = lVar8;
                }
                bVar17 = -(char)(iVar18 % 0x20);
                *(uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4) =
                     (uint)(*(int *)(lVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar17 & 0x1f)) >>
                     (bVar17 & 0x1f);
              }
            }
          }
          lVar6 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar6 = param_2;
          }
          if (*(longlong *)(lVar8 + 0x10) != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x10);
          }
          local_88 = iVar19;
          FUN_14493566c(lVar8,iVar3,lVar6,uVar14);
          *param_3 = *param_3 + iVar19;
        }
      }
      else {
        iVar3 = iVar19 * 7 + *param_3 + -1;
        if ((-1 < iVar3) && (iVar3 < *(int *)(param_2 + 0x18))) {
          if (*(ulonglong *)(param_1 + 0x20) < (ulonglong)(iVar19 + 1)) {
            lVar8 = *(longlong *)(param_1 + 0x18);
            FUN_140c1c900(puVar1,(ulonglong)(iVar19 + 1) - lVar8);
            *(longlong *)(param_1 + 0x18) = lVar8;
          }
          if (iVar19 != 0) {
            uVar14 = *param_3;
            do {
              local_6c = 0;
              lVar8 = *(longlong *)(param_2 + 0x10);
              if (*(longlong *)(param_2 + 0x10) == 0) {
                lVar8 = param_2;
              }
              local_88 = 7;
              FUN_14493566c(&local_6c,0,lVar8,uVar14);
              FUN_14014a7b6(puVar1,1,(undefined1)local_6c);
              uVar14 = *param_3 + 7;
              *param_3 = uVar14;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
          FUN_141016708(param_1);
        }
      }
      if (local_58 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
       ((*(char *)(param_1 + 0x60) != '\0' || (*(char *)(param_1 + 0x61) == '\x01')))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x109) = 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14067ab68 FUN_14067ab68 body=64 status=ok
// SIG undefined FUN_14067ab68(void)

longlong FUN_14067ab68(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14067abd0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14067aba8(lVar2,1);
  return lVar2;
}



// FUNCTION 14067aba8 FUN_14067aba8 body=39 status=ok
// SIG undefined FUN_14067aba8(void)

void FUN_14067aba8(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x1c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x8000000000;
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14067abd0 FUN_14067abd0 body=255 status=ok
// SIG undefined FUN_14067abd0(void)

void FUN_14067abd0(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14067acd0 FUN_14067acd0 body=445 status=ok
// SIG undefined FUN_14067acd0(void)

void FUN_14067acd0(longlong param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  *(undefined4 *)(param_3 + 0x18) = 0;
  if (0x80 < *(uint *)(param_3 + 0x1c)) {
    *(undefined4 *)(param_3 + 0x1c) = 0x80;
    FUN_1446efbd8(param_3,0);
  }
  iVar9 = *param_2;
  while( true ) {
    if (iVar9 + 4 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x18) <= iVar9 + 4) break;
    iVar1 = *(int *)(param_3 + 0x18);
    if (iVar1 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar2 = iVar1 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    iVar6 = iVar1 + 4;
    iVar10 = iVar1 + 0x22;
    if (-1 < iVar1 + 3) {
      iVar10 = iVar1 + 3;
    }
    if (iVar10 >> 5 == iVar2) {
      *(int *)(param_3 + 0x18) = iVar6;
    }
    else {
      if (*(int *)(param_3 + 0x1c) < iVar6) {
        if (iVar1 + 0x23U < 0xa0) {
          iVar6 = 0x80;
          iVar2 = iVar1;
        }
        else {
          uVar11 = iVar1 + 0x23U >> 5;
          if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
            uVar3 = 4;
            if (4 < uVar11) {
              uVar3 = uVar11;
            }
          }
          else {
            uVar3 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar3 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar6 = -0x20;
          if ((int)uVar11 <= iVar2) {
            iVar6 = iVar2 << 5;
          }
          iVar2 = *(int *)(param_3 + 0x18);
        }
        *(int *)(param_3 + 0x1c) = iVar6;
        FUN_1446efbd8(param_3,iVar2);
        iVar6 = *(int *)(param_3 + 0x18) + 4;
      }
      iVar2 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar2 = iVar6;
      }
      *(int *)(param_3 + 0x18) = iVar6;
      if (iVar6 % 0x20 != 0) {
        lVar8 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar8 = param_3;
        }
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar8 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar8 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar8 = param_1;
    }
    lVar7 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar7 = param_3;
    }
    FUN_14493566c(lVar7,iVar1,lVar8,iVar9,4);
    iVar1 = *param_2;
    uVar11 = iVar1 + 4;
    iVar9 = iVar1 + 5;
    *param_2 = iVar9;
    lVar8 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar8 = param_1;
    }
    uVar3 = iVar1 + 0x23;
    if (-1 < (int)uVar11) {
      uVar3 = uVar11;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0) {
      return;
    }
  }
  return;
}



// FUNCTION 14067aea4 FUN_14067aea4 body=3090 status=ok
// SIG undefined FUN_14067aea4(void)

void FUN_14067aea4(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  code cVar4;
  int iVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  undefined **ppuVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  uint *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((((*(int *)(param_2 + 8) == 0) || (uVar24 = *(uint *)(param_2 + 4), (int)uVar24 < 0)) ||
       (DAT_14c9647dc <= (int)uVar24)) ||
      ((lVar22 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8), lVar22 == 0 ||
       (*(int *)(lVar22 + 0x10) != *(int *)(param_2 + 8))))) ||
     ((*(uint *)(lVar22 + 8) & 0x10200000) != 0)) {
    uVar15 = FUN_144a126be(param_1);
    FUN_14485c47a((uint *)(param_2 + 4),uVar15);
  }
  lVar12 = FUN_140316ff8();
  lVar22 = *(longlong *)(param_1 + 0x20);
  if (lVar22 == 0) {
LAB_14067b9bd:
    lVar22 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_d0 = &local_50;
      local_50 = FUN_140754f84;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_147da9a76;
      local_e0 = FUN_1409f3105;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10000000;
      local_100 = 8;
      local_108 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_14067b9bd;
  }
  FUN_1404d1e78(&local_68,lVar22);
  if (local_60 != (longlong *)0x0) {
    iVar11 = (int)local_60[1];
    do {
      if (iVar11 == 0) {
        plVar13 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar10 = (int)local_60[1];
      bVar28 = iVar11 == iVar10;
      if (bVar28) {
        *(int *)(local_60 + 1) = iVar11 + 1;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      UNLOCK();
      plVar13 = local_60;
    } while (!bVar28);
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    pcVar6 = local_68;
    if (plVar13 != (longlong *)0x0) {
      if (local_68 != (code *)0x0) {
        cVar4 = local_68[0x1b0];
        if ((cVar4 != (code)0x0) && (*(int *)(lVar12 + 0x4e0) != *(int *)(lVar12 + 0x50c))) {
          lVar22 = lVar12 + 0x510;
          if (*(longlong *)(lVar12 + 0x518) != 0) {
            lVar22 = *(longlong *)(lVar12 + 0x518);
          }
          iVar11 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar12 + 0x520) - 1U & (uint)(byte)cVar4)
                                     * 4);
          if (iVar11 != -1) {
            do {
              pcVar2 = (code *)(*(longlong *)(lVar12 + 0x4d8) + (longlong)iVar11 * 0x14);
              if (*pcVar2 == cVar4) {
                if (pcVar2 != (code *)0xfffffffffffffffc && pcVar2 != (code *)0x0) {
                  FUN_140428482(param_2,lVar12 + 0x300);
                }
                break;
              }
              iVar11 = *(int *)(pcVar2 + 0xc);
            } while (iVar11 != -1);
          }
        }
        lVar22 = *(longlong *)(pcVar6 + 0x1b4);
        if (((((*(int *)(pcVar6 + 0x1bc) != DAT_14cb5476c) ||
              (*(int *)(pcVar6 + 0x1c0) != DAT_14cb54770)) ||
             (*(int *)(pcVar6 + 0x1c4) != (int)DAT_14cb54774)) ||
            (*(int *)(pcVar6 + 0x1c8) != DAT_14cb54774._4_4_)) &&
           (*(int *)(lVar12 + 0x530) != *(int *)(lVar12 + 0x55c))) {
          uVar24 = (uint)((ulonglong)lVar22 >> 0x10);
          uVar21 = (uint)lVar22 & 0xffff;
          lVar14 = lVar12 + 0x560;
          if (*(longlong *)(lVar12 + 0x568) != 0) {
            lVar14 = *(longlong *)(lVar12 + 0x568);
          }
          iVar11 = *(int *)(lVar14 + (ulonglong)
                                     (*(int *)(lVar12 + 0x570) - 1U &
                                     (int)((ulonglong)lVar22 >> 0x20) +
                                     ((uint)lVar22 << 0x10 | uVar21) +
                                     (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar21 >> 4)) * 4);
          if (iVar11 != -1) {
            do {
              plVar8 = (longlong *)(*(longlong *)(lVar12 + 0x528) + (longlong)iVar11 * 0x18);
              if (*plVar8 == lVar22) {
                if (plVar8 != (longlong *)&DAT_fffffffffffffff8 && plVar8 != (longlong *)0x0) {
                  FUN_140428482(param_2,lVar12 + 0x2d0);
                }
                break;
              }
              iVar11 = (int)plVar8[2];
            } while (iVar11 != -1);
          }
        }
      }
      LOCK();
      plVar8 = plVar13 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar13)(plVar13);
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
  local_88 = FUN_14067be66(param_2,lVar12 + 0x1b0,0);
  if (local_88 == 0) {
LAB_14067b58a:
    lVar22 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_68 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = (code *)&LAB_1417b2375;
      local_e8 = L"Engine";
      local_f0 = 0x1000000000;
      local_f8 = 0x10000004;
      local_100 = 8;
      local_108 = 0x390;
      local_d0 = &local_68;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(local_88 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (lVar22 = local_88,
       *(longlong *)
        (*(longlong *)(*(longlong *)(local_88 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14067b58a;
  }
  local_a8 = lVar12;
  local_90 = param_2;
  lVar22 = FUN_14067bab8(lVar22);
  if (lVar22 != 0) {
    iVar11 = *(int *)(local_a8 + 0x5a0);
    if (iVar11 == 0) {
      uVar27 = 1;
      uVar25 = 0;
      iVar10 = 0;
      iVar23 = 0;
    }
    else {
      puVar17 = *(uint **)(local_a8 + 0x598);
      if (*(uint **)(local_a8 + 0x598) == (uint *)0x0) {
        puVar17 = (uint *)(local_a8 + 0x588);
      }
      uVar24 = *puVar17;
      if (uVar24 == 0) {
        iVar10 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar10 = iVar11 + -1;
        }
        uVar25 = 0;
        uVar27 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar27 = uVar25;
        }
        iVar23 = 0;
        do {
          if (uVar27 == uVar25) goto LAB_14067b2ff;
          iVar23 = iVar23 + 0x20;
          uVar24 = puVar17[uVar25 + 1];
          uVar25 = uVar25 + 1;
        } while (uVar24 == 0);
      }
      else {
        uVar25 = 0;
        iVar23 = 0;
      }
      uVar27 = (ulonglong)(-uVar24 & uVar24);
      uVar3 = uVar27 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = (iVar23 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar10) {
        iVar10 = iVar11;
      }
    }
    if (iVar10 != iVar11) {
      uVar24 = 0xffffffff;
      local_98 = (uint *)(local_a8 + 0x588);
      do {
        plVar13 = (longlong *)(*(longlong *)(local_a8 + 0x578) + (longlong)iVar10 * 0x28);
        lVar12 = plVar13[1];
        if (lVar12 == 0) {
          uVar15 = FUN_141030812();
          lVar12 = FUN_14477b664(uVar15);
          plVar13[1] = lVar12;
        }
        lVar14 = plVar13[2];
        if (lVar14 != 0) {
LAB_14067b1fe:
          lVar12 = lVar22;
          if (lVar22 != lVar14) {
            do {
              lVar12 = FUN_1403155a4(lVar12);
            } while (lVar12 != lVar14 && lVar12 != 0);
            if (lVar12 == 0) goto LAB_14067b22b;
          }
          FUN_140428482(local_90,local_a8 + 0x2e8,plVar13 + 3);
          break;
        }
        if ((lVar12 != 0) && (*plVar13 != 0)) {
          plVar8 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar9 == '\0')) {
            plVar13[2] = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar14 = FUN_144aff482(uVar15,plVar13);
            plVar13[2] = lVar14;
            if (lVar14 != 0) goto LAB_14067b1fe;
          }
        }
LAB_14067b22b:
        uVar24 = uVar24 & ~(uint)uVar27;
        puVar17 = *(uint **)(local_a8 + 0x598);
        if (*(uint **)(local_a8 + 0x598) == (uint *)0x0) {
          puVar17 = local_98;
        }
        iVar5 = *(int *)(local_a8 + 0x5a0);
        iVar10 = (int)uVar25;
        lVar12 = (longlong)iVar10;
        uVar21 = puVar17[lVar12] & uVar24;
        if (uVar21 == 0) {
          iVar18 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar18 = iVar5 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar19 = iVar18;
          if (iVar18 < iVar10) {
            iVar19 = iVar10;
          }
          if (iVar10 < iVar18) {
            lVar14 = 0;
            do {
              uVar21 = puVar17[lVar12 + lVar14 + 1];
              if (uVar21 != 0) {
                uVar25 = (ulonglong)(iVar10 + (int)lVar14 + 1);
                uVar24 = 0xffffffff;
                goto LAB_14067b2ab;
              }
              iVar23 = iVar23 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar19 - lVar12 != lVar14);
            uVar24 = 0xffffffff;
            iVar10 = iVar19;
          }
          uVar25 = (ulonglong)(iVar10 + 1);
          iVar10 = iVar5;
        }
        else {
LAB_14067b2ab:
          uVar27 = (ulonglong)(-uVar21 & uVar21);
          uVar3 = uVar27 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar10 = (iVar23 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar10) {
            iVar10 = iVar5;
          }
        }
      } while (iVar10 != iVar11);
    }
  }
LAB_14067b2ff:
  lVar12 = local_88;
  plVar13 = (longlong *)FUN_14017698e(local_88);
  lVar22 = local_90;
  if ((plVar13 == (longlong *)0x0) ||
     (lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar14 == 0)) goto LAB_14067b6d4;
  local_68 = *(code **)(lVar14 + 0x148);
  uVar15 = FUN_14477b664(*(undefined8 *)(lVar14 + 0x150));
  local_60 = (longlong *)FUN_14477b664(uVar15);
  local_58 = *(undefined8 *)(lVar14 + 0x158);
  lVar16 = FUN_140316ff8();
  lVar14 = *(longlong *)(lVar16 + 0x278);
  if (lVar14 == 0) {
    uVar15 = FUN_140490c9a();
    lVar14 = FUN_14477b664(uVar15);
    *(longlong *)(lVar16 + 0x278) = lVar14;
  }
  lVar26 = lVar16 + 0x270;
  local_a0 = *(longlong *)(lVar16 + 0x270);
  local_78 = lVar26;
  if (*(longlong *)(lVar16 + 0x280) == 0) {
    if ((lVar14 == 0) || (local_a0 == 0)) goto LAB_14067b6d4;
    plVar13 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar13 == (longlong *)0x0) ||
       (cVar9 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar9 == '\0')) {
      *(undefined8 *)(lVar16 + 0x280) = 0;
      goto LAB_14067b6d4;
    }
    uVar15 = (**(code **)(*plVar13 + 0x110))(plVar13);
    lVar14 = FUN_144aff482(uVar15,lVar26);
    *(longlong *)(lVar16 + 0x280) = lVar14;
    if (lVar14 == 0) goto LAB_14067b6d4;
    local_a0 = *(longlong *)(lVar16 + 0x270);
    lVar14 = *(longlong *)(lVar16 + 0x278);
  }
  lVar12 = lVar22 + 0x18;
  uVar15 = FUN_14477b664(lVar14);
  local_98 = (uint *)FUN_14477b664(uVar15);
  lVar14 = *(longlong *)(lVar22 + 0x2d8);
  if (*(longlong *)(lVar22 + 0x2d8) == 0) {
    lVar14 = lVar12;
  }
  local_80 = lVar12;
  if ((longlong)*(int *)(lVar22 + 0x2e0) != 0) {
    local_70 = (longlong)*(int *)(lVar22 + 0x2e0) * -0x58;
    lVar22 = 8;
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar14 + lVar22) == 0) {
        uVar15 = FUN_140490c9a();
        uVar15 = FUN_14477b664(uVar15);
        *(undefined8 *)(lVar14 + lVar22) = uVar15;
      }
      puVar17 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar17 = (uint *)FUN_140490c9a(0);
      }
      lVar16 = FUN_14477b664(puVar17);
      iVar11 = 0;
      if ((lVar16 != 0) && (plVar13 = *(longlong **)(lVar16 + 0xb8), plVar13 != (longlong *)0x0)) {
        lVar26 = *plVar13;
        pcVar6 = *(code **)(lVar26 + 0x108);
        if (pcVar6 != (code *)&LAB_14478342e && pcVar6 != (code *)&LAB_144783422) {
          cVar9 = (*pcVar6)(plVar13);
          iVar11 = 0;
          if (cVar9 == '\0') goto LAB_14067b49d;
          lVar26 = *plVar13;
        }
        pcVar6 = *(code **)(lVar26 + 0x110);
        ppuVar20 = &PTR_PTR_14c763408;
        if ((pcVar6 != (code *)&LAB_144783426) &&
           (ppuVar20 = &PTR_PTR_14c75f798, pcVar6 != (code *)&LAB_144783432)) {
          ppuVar20 = (undefined **)(*pcVar6)(plVar13);
        }
        iVar11 = FUN_144aff48c(ppuVar20);
      }
LAB_14067b49d:
      lVar26 = *(longlong *)(lVar14 + -8 + lVar22);
      lVar7 = *(longlong *)(lVar14 + lVar22);
      iVar10 = 0;
      local_b0 = lVar16;
      if ((lVar7 != 0) &&
         (plVar13 = *(longlong **)(lVar7 + 0xb8), iVar10 = 0, plVar13 != (longlong *)0x0)) {
        lVar16 = *plVar13;
        pcVar6 = *(code **)(lVar16 + 0x108);
        if (pcVar6 != (code *)&LAB_14478342e && pcVar6 != (code *)&LAB_144783422) {
          cVar9 = (*pcVar6)(plVar13);
          if (cVar9 == '\0') goto LAB_14067b50b;
          lVar16 = *plVar13;
        }
        pcVar6 = *(code **)(lVar16 + 0x110);
        ppuVar20 = &PTR_PTR_14c763408;
        if ((pcVar6 != (code *)&LAB_144783426) &&
           (ppuVar20 = &PTR_PTR_14c75f798, pcVar6 != (code *)&LAB_144783432)) {
          ppuVar20 = (undefined **)(*pcVar6)(plVar13);
        }
        iVar10 = FUN_144aff48c(ppuVar20);
      }
LAB_14067b50b:
      if ((iVar10 == iVar11) && (lVar26 == local_a0)) {
        if (lVar7 == local_b0) {
LAB_14067b691:
          if (lVar14 - lVar12 != 0) {
            lVar22 = (lVar14 - lVar12) + 0x18;
            goto LAB_14067b6b4;
          }
          break;
        }
        if ((local_b0 != 0) && (lVar7 != 0)) {
          iVar11 = *(int *)(local_b0 + 0x38);
          iVar10 = *(int *)(lVar7 + 0x38);
          if (((iVar11 <= iVar10) &&
              (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar11 * 8) == local_b0 + 0x30)
              ) || ((iVar10 <= iVar11 &&
                    (*(longlong *)(*(longlong *)(local_b0 + 0x30) + (longlong)iVar10 * 8) ==
                     lVar7 + 0x30)))) goto LAB_14067b691;
        }
      }
      lVar12 = lVar12 + -0x58;
      lVar22 = lVar22 + 0x58;
    } while (local_70 != lVar12);
  }
  lVar22 = FUN_14042880c(local_80,local_78);
LAB_14067b6b4:
  FUN_14067bbc2(lVar22,&local_68);
  lVar22 = local_90;
  lVar12 = local_88;
LAB_14067b6d4:
  cVar9 = FUN_14067c612(lVar22,lVar12);
  if (cVar9 == '\0') {
    uVar15 = FUN_14067be66(lVar22,local_a8 + 0x198,0);
    FUN_14067c612(lVar22,uVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14067bab8 FUN_14067bab8 body=155 status=ok
// SIG undefined FUN_14067bab8(void)

undefined8 FUN_14067bab8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    uVar2 = FUN_1447210f0();
    lVar3 = FUN_14067bb54(uVar2);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1c8);
      if (lVar1 == 0) {
        local_18 = DAT_14c8464f0;
        local_28 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_20 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_28 = *(undefined8 *)(lVar1 + 0x260);
        uStack_20 = *(undefined8 *)(lVar1 + 0x268);
        local_18 = *(undefined8 *)(lVar1 + 0x270);
      }
      uVar2 = FUN_14067bd00(lVar3,&local_28);
      goto LAB_14067bb19;
    }
  }
  uVar2 = 0;
LAB_14067bb19:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067bb54 FUN_14067bb54 body=109 status=ok
// SIG undefined FUN_14067bb54(void)

void FUN_14067bb54(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  FUN_1405f0c40(DAT_14cb84f20,&local_20,lVar1);
  local_28 = local_20;
  if (local_20 == 0) {
    local_28 = lVar1;
  }
  FUN_14067bc2a();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067bbc2 FUN_14067bbc2 body=104 status=ok
// SIG undefined FUN_14067bbc2(void)

void FUN_14067bbc2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])();
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    lVar4 = FUN_14043db3a();
  }
  uVar3 = *param_2;
  uVar2 = FUN_14477b664(lVar4);
  uVar1 = param_2[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = uVar3;
  uVar3 = FUN_14477b664(uVar2);
  uVar3 = FUN_14477b664(uVar3);
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 14067bc2a FUN_14067bc2a body=212 status=ok
// SIG undefined FUN_14067bc2a(void)

longlong FUN_14067bc2a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_50;
  code *local_48;
  undefined8 **local_40;
  code **local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb78ac0 == 0) {
    lVar1 = 0;
  }
  else {
    local_50 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_40 = &local_50;
    local_38 = &local_48;
    local_48 = FUN_143d2088e;
    local_28 = &local_38;
    local_30 = FUN_14067c5ce;
    lVar1 = 0;
    FUN_14067c214();
    if ((longlong)(int)uStack_60 != 0) {
      lVar2 = 0;
      do {
        lVar1 = *(longlong *)(local_68 + lVar2);
        if ((*(char *)(lVar1 + 0x20) == '\0') && (*(longlong *)(lVar1 + 0x18) == *param_1))
        goto LAB_14067bccf;
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)uStack_60 * 8 != lVar2);
      lVar1 = 0;
    }
LAB_14067bccf:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067bd00 FUN_14067bd00 body=357 status=ok
// SIG undefined FUN_14067bd00(void)

void FUN_14067bd00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 == 0) {
    uVar5 = FUN_145733170();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0xa0) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x98);
  lVar6 = *(longlong *)(param_1 + 0xa8);
  if (lVar6 == 0) {
    if ((lVar4 == 0) || (*plVar1 == 0)) goto LAB_14067bd59;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0xa8) = lVar6;
        if (lVar6 == 0) goto LAB_14067bd59;
        lVar4 = *(longlong *)(param_1 + 0xa0);
        goto LAB_14067bd2e;
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    goto LAB_14067bd59;
  }
LAB_14067bd2e:
  if (lVar4 == 0) {
    uVar5 = FUN_145733170(lVar6);
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0xa0) = lVar4;
    lVar6 = *(longlong *)(param_1 + 0xa8);
    if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_14067be61:
        lVar6 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))();
        if (cVar3 == '\0') goto LAB_14067be61;
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0xa8) = lVar6;
    }
  }
  lVar4 = FUN_14027a7b0(lVar6,param_2);
  if (lVar4 != 0) {
    return;
  }
LAB_14067bd59:
  FUN_1457331aa(param_1);
  return;
}



// FUNCTION 14067be66 FUN_14067be66 body=940 status=ok
// SIG undefined FUN_14067be66(void)

longlong FUN_14067be66(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined **ppuVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *param_2;
  local_84 = param_3;
  local_60 = local_80;
  uVar7 = FUN_14477b664(param_2[1]);
  local_70 = FUN_14477b664(uVar7);
  local_78 = param_2[2];
  local_58 = local_70;
  local_50 = local_78;
  uVar7 = FUN_14477b664(local_70);
  local_68 = FUN_14477b664(uVar7);
  plVar13 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
    plVar13 = *(longlong **)(param_1 + 0x2d8);
  }
  if ((longlong)*(int *)(param_1 + 0x2e0) == 0) {
LAB_14067c10c:
    local_90 = 0;
    lVar8 = local_90;
  }
  else {
    lVar12 = (longlong)*(int *)(param_1 + 0x2e0) * 0x58;
    local_90 = 0;
    do {
      if (plVar13[1] == 0) {
        uVar7 = FUN_140490c9a();
        lVar8 = FUN_14477b664(uVar7);
        plVar13[1] = lVar8;
      }
      lVar8 = local_68;
      if (local_68 == 0) {
        lVar8 = FUN_140490c9a(0);
      }
      lVar8 = FUN_14477b664(lVar8);
      iVar5 = 0;
      if ((lVar8 != 0) && (plVar1 = *(longlong **)(lVar8 + 0xb8), plVar1 != (longlong *)0x0)) {
        lVar9 = *plVar1;
        pcVar2 = *(code **)(lVar9 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar4 = (*pcVar2)(plVar1);
          iVar5 = 0;
          if (cVar4 == '\0') goto LAB_14067bf9c;
          lVar9 = *plVar1;
        }
        pcVar2 = *(code **)(lVar9 + 0x110);
        ppuVar11 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar11 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar11 = (undefined **)(*pcVar2)(plVar1);
        }
        iVar5 = FUN_144aff48c(ppuVar11);
      }
LAB_14067bf9c:
      lVar9 = *plVar13;
      lVar3 = plVar13[1];
      iVar6 = 0;
      if ((lVar3 != 0) &&
         (plVar1 = *(longlong **)(lVar3 + 0xb8), iVar6 = 0, plVar1 != (longlong *)0x0)) {
        lVar10 = *plVar1;
        pcVar2 = *(code **)(lVar10 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar4 = (*pcVar2)(plVar1);
          if (cVar4 == '\0') goto LAB_14067c004;
          lVar10 = *plVar1;
        }
        pcVar2 = *(code **)(lVar10 + 0x110);
        ppuVar11 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar11 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar11 = (undefined **)(*pcVar2)(plVar1);
        }
        iVar6 = FUN_144aff48c(ppuVar11);
      }
LAB_14067c004:
      if ((iVar6 == iVar5) && (lVar9 == local_80)) {
        if (lVar3 == lVar8) {
LAB_14067c0a1:
          if (plVar13 == (longlong *)0x0) goto LAB_14067c10c;
          lVar12 = local_70;
          if (local_70 == 0) {
            uVar7 = FUN_140490c9a();
            lVar12 = FUN_14477b664(uVar7);
            local_58 = lVar12;
          }
          if (((local_78 == 0) && (local_50 = 0, local_80 != 0)) && (lVar12 != 0)) {
            plVar1 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
              local_50 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
              local_50 = FUN_144aff482(uVar7,&local_60);
            }
          }
          if (((char)plVar13[10] != '\x01') || (plVar13[3] == 0)) goto LAB_14067c10c;
          lVar8 = plVar13[3];
          if (local_84 == 1) {
            lVar8 = FUN_14887b004();
          }
          break;
        }
        if ((lVar8 != 0) && (lVar3 != 0)) {
          iVar5 = *(int *)(lVar8 + 0x38);
          iVar6 = *(int *)(lVar3 + 0x38);
          if (((iVar5 <= iVar6) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar5 * 8) == lVar8 + 0x30)) ||
             ((iVar6 <= iVar5 &&
              (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) == lVar3 + 0x30))))
          goto LAB_14067c0a1;
        }
      }
      plVar13 = plVar13 + 0xb;
      lVar12 = lVar12 + -0x58;
      lVar8 = local_90;
    } while (lVar12 != 0);
  }
  local_90 = lVar8;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_90;
}



// FUNCTION 14067c214 FUN_14067c214 body=894 status=ok
// SIG undefined FUN_14067c214(void)

void FUN_14067c214(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  uint *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  cVar7 = (**(code **)(*param_1 + 0x300))();
  if (cVar7 == '\0') {
    plVar4 = param_1 + 0x4f;
    plVar1 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_1[0x54] == 0) {
      iVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar16 = (int)param_1[0x54];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar6 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar4;
    if ((local_78._4_4_ != iVar16) || (local_78 = local_58, uStack_60 != plVar1)) {
      do {
        local_78 = uVar6;
        lVar10 = *local_90;
        lVar11 = *(longlong *)(lVar10 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar11 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar11,0);
            lVar11 = *(longlong *)(lVar10 + (longlong)iVar8 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar11 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar11 + 0x48) & 0x6b) == 3)) &&
             (plVar5 = *(longlong **)(lVar11 + 0x30), plVar5 != (longlong *)0x0)) {
            lVar10 = (**(code **)(*plVar5 + 8))(plVar5);
            lVar11 = FUN_14067c594();
            if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30)) {
              (*(code *)*local_a0)(local_a0[1],plVar5);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_90 != plVar4 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar16));
    }
  }
  else {
    local_98 = (uint *)(param_1 + 0x3b);
    iVar16 = (int)param_1[0x3e];
    if (iVar16 == 0) {
      uVar19 = 1;
      uVar18 = 0;
      iVar8 = 0;
      iVar15 = 0;
    }
    else {
      puVar9 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar9 = local_98;
      }
      uVar17 = *puVar9;
      if (uVar17 == 0) {
        iVar8 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar8 = iVar16 + -1;
        }
        uVar18 = 0;
        uVar19 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar19 = uVar18;
        }
        iVar15 = 0;
        do {
          if (uVar19 == uVar18) goto LAB_14067c3e2;
          iVar15 = iVar15 + 0x20;
          uVar17 = puVar9[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar18 = 0;
        iVar15 = 0;
      }
      uVar19 = (ulonglong)(-uVar17 & uVar17);
      uVar2 = uVar19 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar16 <= iVar8) {
        iVar8 = iVar16;
      }
    }
    if (iVar8 != iVar16) {
      uVar17 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar11 = FUN_14067c594();
          if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            (*(code *)*local_a0)(local_a0[1],plVar4);
          }
        }
        uVar17 = uVar17 & ~(uint)uVar19;
        puVar9 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar9 = local_98;
        }
        iVar3 = (int)param_1[0x3e];
        iVar8 = (int)uVar18;
        lVar10 = (longlong)iVar8;
        uVar14 = puVar9[lVar10] & uVar17;
        if (uVar14 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar8 < iVar12) {
            lVar11 = 0;
            do {
              uVar14 = puVar9[lVar10 + lVar11 + 1];
              if (uVar14 != 0) {
                uVar18 = (ulonglong)(iVar8 + (int)lVar11 + 1);
                uVar17 = 0xffffffff;
                goto LAB_14067c3b3;
              }
              iVar15 = iVar15 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar13 - lVar10 != lVar11);
            uVar17 = 0xffffffff;
            iVar8 = iVar13;
          }
          uVar18 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_14067c3b3:
          uVar19 = (ulonglong)(-uVar14 & uVar14);
          uVar2 = uVar19 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar16);
    }
  }
LAB_14067c3e2:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14067c594 FUN_14067c594 body=57 status=ok
// SIG undefined FUN_14067c594(void)

void FUN_14067c594(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d618 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d618 = FUN_140002ddd(FUN_1464db6b6,uVar1,L"GbxDiscoveryViewableMapDef");
  }
  return;
}



// FUNCTION 14067c5ce FUN_14067c5ce body=67 status=ok
// SIG undefined FUN_14067c5ce(void)

void FUN_14067c5ce(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067c612 FUN_14067c612 body=1800 status=ok
// SIG undefined FUN_14067c612(void)

undefined8 FUN_14067c612(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  undefined **ppuVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined7 uVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_90 = &local_50;
      local_50 = FUN_141864c34;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_146431698;
      local_98 = &LAB_1486775cb;
      local_a0 = &LAB_1464cee35;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000005;
      local_c0 = 0x10;
      local_c8 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (plVar3 = *(longlong **)(param_2 + 0x13f8), plVar3 != (longlong *)0x0)) {
      puVar23 = &DAT_14c9485f0;
      if ((undefined4 *)plVar3[1] != (undefined4 *)0x0) {
        puVar23 = (undefined4 *)plVar3[1];
      }
      if (DAT_14c947fe0 == 0) {
        lVar15 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar15);
        DAT_14c947fe0 = lVar15;
      }
      FUN_140045924(DAT_14c947fe0,&local_58,puVar23,1);
      uVar11 = (**(code **)(*plVar3 + 8))(plVar3);
      uVar11 = FUN_14477b664(uVar11);
      uVar11 = FUN_14477b664(uVar11);
      lVar12 = FUN_14477b664(uVar11);
      lVar13 = FUN_140316ff8();
      lVar15 = lVar12;
      if (lVar12 == 0) {
        lVar15 = FUN_140355b7c(0);
      }
      uVar14 = FUN_14477b664(lVar15);
      if (*(int *)(lVar13 + 0x5d0) != *(int *)(lVar13 + 0x5fc)) {
        uVar8 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
        uVar18 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar18 = uVar18 >> 0x10 ^ uVar18;
        uVar20 = (uint)local_58 & 0xffff;
        uVar8 = (uint)((ulonglong)local_58 >> 0x10);
        uVar8 = uVar18 >> 0xd ^
                ((int)((ulonglong)local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar20) +
                 (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar20 >> 4)) - uVar18;
        uVar20 = uVar8 << 8 ^ (-0x61c88647 - uVar18) - uVar8;
        uVar25 = uVar20 >> 0xd ^ (uVar18 - uVar8) - uVar20;
        uVar8 = uVar25 >> 0xc ^ (uVar8 - uVar20) - uVar25;
        uVar18 = uVar8 << 0x10 ^ (uVar20 - uVar25) - uVar8;
        uVar20 = uVar18 >> 5 ^ (uVar25 - uVar8) - uVar18;
        uVar25 = uVar20 >> 3 ^ (uVar8 - uVar18) - uVar20;
        uVar8 = uVar25 << 10 ^ (uVar18 - uVar20) - uVar25;
        lVar15 = lVar13 + 0x600;
        if (*(longlong *)(lVar13 + 0x608) != 0) {
          lVar15 = *(longlong *)(lVar13 + 0x608);
        }
        iVar9 = *(int *)(lVar15 + (ulonglong)
                                  (*(int *)(lVar13 + 0x610) - 1U &
                                  (uVar8 >> 0xf ^ uVar20 - (uVar25 + uVar8))) * 4);
        if (iVar9 != -1) {
          lVar15 = *(longlong *)(lVar13 + 0x5c8);
          local_60 = param_1;
          do {
            local_68 = (longlong)iVar9 * 0x70;
            plVar3 = (longlong *)(lVar15 + local_68);
            if (*(longlong *)(lVar15 + 8 + local_68) == 0) {
              uVar11 = FUN_140355b7c();
              lVar15 = FUN_14477b664(uVar11);
              plVar3[1] = lVar15;
            }
            lVar15 = lVar12;
            if (lVar12 == 0) {
              lVar15 = FUN_140355b7c(0);
            }
            lVar15 = FUN_14477b664(lVar15);
            iVar9 = 0;
            if ((lVar15 != 0) && (plVar4 = *(longlong **)(lVar15 + 0xb8), plVar4 != (longlong *)0x0)
               ) {
              lVar16 = *plVar4;
              pcVar5 = *(code **)(lVar16 + 0x108);
              if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
                cVar7 = (*pcVar5)(plVar4);
                iVar9 = 0;
                if (cVar7 == '\0') goto LAB_14067c8e5;
                lVar16 = *plVar4;
              }
              pcVar5 = *(code **)(lVar16 + 0x110);
              ppuVar19 = &PTR_PTR_14c763408;
              if ((pcVar5 != (code *)&LAB_144783426) &&
                 (ppuVar19 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
                ppuVar19 = (undefined **)(*pcVar5)(plVar4);
              }
              iVar9 = FUN_144aff48c(ppuVar19);
            }
LAB_14067c8e5:
            lVar16 = *plVar3;
            lVar6 = plVar3[1];
            uVar14 = 0;
            local_70 = lVar15;
            if ((lVar6 != 0) && (plVar3 = *(longlong **)(lVar6 + 0xb8), plVar3 != (longlong *)0x0))
            {
              lVar15 = *plVar3;
              pcVar5 = *(code **)(lVar15 + 0x108);
              if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
                cVar7 = (*pcVar5)(plVar3);
                uVar14 = 0;
                if (cVar7 == '\0') goto LAB_14067c952;
                lVar15 = *plVar3;
              }
              pcVar5 = *(code **)(lVar15 + 0x110);
              ppuVar19 = &PTR_PTR_14c763408;
              if ((pcVar5 != (code *)&LAB_144783426) &&
                 (ppuVar19 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
                ppuVar19 = (undefined **)(*pcVar5)(plVar3);
              }
              uVar14 = FUN_144aff48c(ppuVar19);
              uVar14 = uVar14 & 0xffffffff;
            }
LAB_14067c952:
            if (((int)uVar14 == iVar9) && (lVar16 == local_58)) {
              if (lVar6 == local_70) {
LAB_14067ca01:
                uVar26 = 0;
                lVar15 = local_68 + *(longlong *)(lVar13 + 0x5c8);
                if (lVar15 == 0) goto LAB_14067c63c;
                iVar9 = *(int *)(lVar15 + 0x40);
                uVar24 = (undefined7)(uVar14 >> 8);
                if (iVar9 == 0) {
                  uVar14 = 1;
                  iVar10 = 0;
                  iVar27 = 0;
                  goto LAB_14067ca96;
                }
                puVar17 = *(uint **)(lVar15 + 0x38);
                if (*(uint **)(lVar15 + 0x38) == (uint *)0x0) {
                  puVar17 = (uint *)(lVar15 + 0x28);
                }
                uVar8 = *puVar17;
                if (uVar8 != 0) {
                  uVar26 = 0;
                  iVar27 = 0;
                  goto LAB_14067ca71;
                }
                iVar10 = iVar9 + 0x1e;
                if (-1 < iVar9 + -1) {
                  iVar10 = iVar9 + -1;
                }
                uVar26 = 0;
                uVar14 = (ulonglong)(uint)(iVar10 >> 5);
                if (iVar10 >> 5 < 1) {
                  uVar14 = uVar26;
                }
                iVar27 = 0;
                goto LAB_14067ca58;
              }
              if ((local_70 != 0) && (lVar6 != 0)) {
                iVar9 = *(int *)(local_70 + 0x38);
                iVar10 = *(int *)(lVar6 + 0x38);
                if (((iVar9 <= iVar10) &&
                    (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar9 * 8) ==
                     local_70 + 0x30)) ||
                   ((iVar10 <= iVar9 &&
                    (*(longlong *)(*(longlong *)(local_70 + 0x30) + (longlong)iVar10 * 8) ==
                     lVar6 + 0x30)))) goto LAB_14067ca01;
              }
            }
            lVar15 = *(longlong *)(lVar13 + 0x5c8);
            iVar9 = *(int *)(lVar15 + 0x68 + local_68);
            uVar11 = 0;
          } while (iVar9 != -1);
          goto LAB_14067c63e;
        }
      }
    }
  }
LAB_14067c63c:
  uVar11 = 0;
  goto LAB_14067c63e;
  while( true ) {
    iVar27 = iVar27 + 0x20;
    uVar8 = puVar17[uVar26 + 1];
    uVar26 = uVar26 + 1;
    if (uVar8 != 0) break;
LAB_14067ca58:
    if (uVar14 == uVar26) {
      uVar11 = CONCAT71(uVar24,1);
      goto LAB_14067c63e;
    }
  }
LAB_14067ca71:
  uVar14 = (ulonglong)(-uVar8 & uVar8);
  uVar1 = uVar14 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  iVar10 = (iVar27 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
  if (iVar9 <= iVar10) {
    iVar10 = iVar9;
  }
LAB_14067ca96:
  uVar11 = CONCAT71(uVar24,1);
  if (iVar10 != iVar9) {
    uVar8 = 0xffffffff;
    do {
      FUN_1410de4b6(local_60,*(longlong *)(lVar15 + 0x18) + (longlong)iVar10 * 0x60,
                    *(longlong *)(lVar15 + 0x18) + (longlong)iVar10 * 0x60 + 0x18);
      uVar8 = ~(uint)uVar14 & uVar8;
      puVar17 = *(uint **)(lVar15 + 0x38);
      if (*(uint **)(lVar15 + 0x38) == (uint *)0x0) {
        puVar17 = (uint *)(lVar15 + 0x28);
      }
      iVar2 = *(int *)(lVar15 + 0x40);
      iVar10 = (int)uVar26;
      lVar12 = (longlong)iVar10;
      uVar18 = puVar17[lVar12] & uVar8;
      if (uVar18 == 0) {
        iVar21 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar21 = iVar2 + -1;
        }
        iVar21 = iVar21 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar22 = iVar21;
        if (iVar21 < iVar10) {
          iVar22 = iVar10;
        }
        if (iVar10 < iVar21) {
          lVar13 = 0;
          do {
            uVar18 = puVar17[lVar12 + lVar13 + 1];
            if (uVar18 != 0) {
              uVar26 = (ulonglong)(iVar10 + (int)lVar13 + 1);
              uVar8 = 0xffffffff;
              goto LAB_14067cb3e;
            }
            iVar27 = iVar27 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar22 - lVar12 != lVar13);
          uVar8 = 0xffffffff;
          iVar10 = iVar22;
        }
        uVar26 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar2;
      }
      else {
LAB_14067cb3e:
        uVar14 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = (iVar27 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar10) {
          iVar10 = iVar2;
        }
      }
    } while (iVar10 != iVar9);
  }
LAB_14067c63e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14067cd1c FUN_14067cd1c body=40 status=ok
// SIG undefined FUN_14067cd1c(void)

undefined8 FUN_14067cd1c(undefined8 param_1,int param_2)

{
  FUN_14067cd44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14067cd44 FUN_14067cd44 body=226 status=ok
// SIG undefined FUN_14067cd44(void)

void FUN_14067cd44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac287f0;
  param_1[5] = &PTR_FUN_14ac291f0;
  param_1[6] = &PTR_LAB_14ac29230;
  param_1[0x55] = &PTR_FUN_14ac29280;
  param_1[0x56] = &PTR_FUN_14ac29300;
  param_1[0x57] = &PTR_FUN_14ac29310;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_14067ce5a(param_1 + 0xd2);
  FUN_14054e18a(param_1 + 0xce,1);
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  FUN_14067ce26(param_1[200],*(undefined4 *)(param_1 + 0xc9));
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 14067ce26 FUN_14067ce26 body=51 status=ok
// SIG undefined FUN_14067ce26(void)

void FUN_14067ce26(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14067ce5a FUN_14067ce5a body=55 status=ok
// SIG undefined FUN_14067ce5a(void)

void FUN_14067ce5a(longlong *param_1)

{
  FUN_14067ce92(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14067ce92 FUN_14067ce92 body=123 status=ok
// SIG undefined FUN_14067ce92(void)

void FUN_14067ce92(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
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



// FUNCTION 14067cf1c FUN_14067cf1c body=31 status=ok
// SIG undefined FUN_14067cf1c(void)

undefined8 FUN_14067cf1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14067cf3c FUN_14067cf3c body=532 status=ok
// SIG undefined FUN_14067cf3c(void)

void FUN_14067cf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  void *param_5)

{
  undefined4 uVar1;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 local_138 [64];
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  uint uStack_dc;
  uint uStack_d4;
  ulonglong local_d0;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((char)param_4 == '\0') {
    memcpy(local_138,param_5,0xb8);
    uVar1 = local_90;
    local_80 = *(undefined8 *)((longlong)param_5 + 0xb8);
    local_78 = *(undefined8 *)((longlong)param_5 + 0xc0);
    uStack_70 = *(undefined8 *)((longlong)param_5 + 200);
    local_68 = *(undefined4 *)((longlong)param_5 + 0xd0);
    local_64 = *(undefined1 *)((longlong)param_5 + 0xd4);
    uStack_48 = *(undefined8 *)((longlong)param_5 + 0xf8);
    local_60 = *(undefined8 *)((longlong)param_5 + 0xd8);
    uStack_58 = *(undefined8 *)((longlong)param_5 + 0xe0);
    local_50 = *(undefined8 *)((longlong)param_5 + 0xe8);
    local_40 = *(undefined8 *)((longlong)param_5 + 0xf0);
    local_e8 = local_e8 ^ 0x8000000000000000;
    local_f8 = local_f8 ^ 0x8000000000000000;
    local_f0 = local_f0 ^ 0x8000000000000000;
    uStack_dc = uStack_dc ^ 0x80000000;
    uStack_d4 = uStack_d4 ^ 0x80000000;
    local_d0 = local_d0 ^ 0x8000000000000000;
    local_90 = local_94;
    local_94 = uVar1;
  }
  else {
    memcpy(local_138,param_5,0xb8);
    local_80 = *(undefined8 *)((longlong)param_5 + 0xb8);
    local_78 = *(undefined8 *)((longlong)param_5 + 0xc0);
    uStack_70 = *(undefined8 *)((longlong)param_5 + 200);
    local_68 = *(undefined4 *)((longlong)param_5 + 0xd0);
    local_64 = *(undefined1 *)((longlong)param_5 + 0xd4);
    local_40 = *(undefined8 *)((longlong)param_5 + 0xf8);
    local_60 = *(undefined8 *)((longlong)param_5 + 0xd8);
    uStack_58 = *(undefined8 *)((longlong)param_5 + 0xe0);
    local_50 = *(undefined8 *)((longlong)param_5 + 0xe8);
    uStack_48 = *(undefined8 *)((longlong)param_5 + 0xf0);
  }
  local_148 = local_138;
  FUN_14067d152(param_1,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067d152 FUN_14067d152 body=698 status=ok
// SIG undefined FUN_14067d152(void)

void FUN_14067d152(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined4 *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  void *local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2b8 [46];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198 [23];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
    if (param_1 != (longlong *)0x0) {
      if ((((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) && (-1 < *(int *)(param_1[2] + 0xd4))) &&
         ((*(byte *)(param_1 + 0x69) & 2) == 0)) {
        local_2f0 = &local_58;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        local_68 = *(undefined8 *)((longlong)param_5 + 0x68);
        local_2f8 = &local_78;
        local_78 = *(undefined8 *)((longlong)param_5 + 0x58);
        uStack_70 = *(undefined8 *)((longlong)param_5 + 0x60);
        local_98 = *(undefined4 *)((longlong)param_5 + 0x28);
        uStack_94 = *(undefined4 *)((longlong)param_5 + 0x2c);
        uStack_90 = *(undefined4 *)((longlong)param_5 + 0x30);
        uStack_8c = *(undefined4 *)((longlong)param_5 + 0x34);
        local_300 = &local_98;
        local_88 = *(undefined8 *)((longlong)param_5 + 0x38);
        local_2e8 = param_5;
        local_308 = (undefined8 *)CONCAT71(local_308._1_7_,param_4);
        (**(code **)(*param_1 + 0x380))(param_1,param_2,uVar1,param_3);
      }
      if ((((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) && (-1 < *(int *)(param_1[2] + 0xd4))) &&
         ((*(byte *)(param_1 + 0x69) & 2) == 0)) {
        memcpy(local_198,param_5,0xb8);
        local_e0 = *(undefined8 *)((longlong)param_5 + 0xb8);
        local_d8 = *(undefined8 *)((longlong)param_5 + 0xc0);
        uStack_d0 = *(undefined8 *)((longlong)param_5 + 200);
        local_c8 = *(undefined4 *)((longlong)param_5 + 0xd0);
        local_c4 = *(undefined1 *)((longlong)param_5 + 0xd4);
        local_a0 = *(undefined8 *)((longlong)param_5 + 0xf8);
        local_c0 = *(undefined8 *)((longlong)param_5 + 0xd8);
        uStack_b8 = *(undefined8 *)((longlong)param_5 + 0xe0);
        local_b0 = *(undefined4 *)((longlong)param_5 + 0xe8);
        uStack_ac = *(undefined4 *)((longlong)param_5 + 0xec);
        uStack_a8 = *(undefined4 *)((longlong)param_5 + 0xf0);
        uStack_a4 = *(undefined4 *)((longlong)param_5 + 0xf4);
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        local_308 = local_198;
        FUN_14067d40e((longlong)param_1 + 0x20d,param_1,uVar1);
      }
    }
    if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
      memcpy(local_2b8,param_5,0xb8);
      local_200 = *(undefined8 *)((longlong)param_5 + 0xb8);
      local_1f8 = *(undefined8 *)((longlong)param_5 + 0xc0);
      uStack_1f0 = *(undefined8 *)((longlong)param_5 + 200);
      local_1e8 = *(undefined4 *)((longlong)param_5 + 0xd0);
      local_1e4 = *(undefined1 *)((longlong)param_5 + 0xd4);
      local_1c0 = *(undefined8 *)((longlong)param_5 + 0xf8);
      local_1e0 = *(undefined8 *)((longlong)param_5 + 0xd8);
      uStack_1d8 = *(undefined8 *)((longlong)param_5 + 0xe0);
      local_1d0 = *(undefined4 *)((longlong)param_5 + 0xe8);
      uStack_1cc = *(undefined4 *)((longlong)param_5 + 0xec);
      uStack_1c8 = *(undefined4 *)((longlong)param_5 + 0xf0);
      uStack_1c4 = *(undefined4 *)((longlong)param_5 + 0xf4);
      local_308 = &local_2d8;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2c8 = 0;
      local_300 = local_2b8;
      FUN_1400dcae8(param_2 + 0x598,param_2,uVar1,param_3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067d40e FUN_14067d40e body=324 status=ok
// SIG undefined FUN_14067d40e(void)

void FUN_14067d40e(char *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  void *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [256];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*param_1 != '\0') {
    FUN_14067d554(param_1,&local_40);
    FUN_14018932e(&local_168,param_1 + -0x20d,local_40);
    plVar4 = local_160;
    lVar3 = local_168;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_160 + 1) = (int)local_160[1] + 1;
      UNLOCK();
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_160 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_160)(local_160);
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
    if (lVar3 != 0) {
      local_148 = param_4[2];
      local_158 = *param_4;
      uStack_150 = param_4[1];
      local_168 = param_2;
      local_160 = param_3;
      memcpy(local_140,param_5,0x100);
      FUN_1447cd2ec(lVar3,&local_168);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067d554 FUN_14067d554 body=120 status=ok
// SIG undefined FUN_14067d554(void)

undefined8 * FUN_14067d554(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9f94) {
    FUN_144b3d300(&DAT_14cac9f94);
    if (DAT_14cac9f94 == -1) {
      FUN_1446ddc76(&DAT_14cac9f8c,"OnActorHit",1);
      _Init_thread_footer(&DAT_14cac9f94);
    }
  }
  *param_2 = DAT_14cac9f8c;
  return param_2;
}



// FUNCTION 14067d5cc FUN_14067d5cc body=854 status=ok
// SIG undefined FUN_14067d5cc(void)

void FUN_14067d5cc(ulonglong param_1,longlong param_2)

{
  void *pvVar1;
  longlong *plVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  void *local_60;
  longlong local_58;
  longlong local_50;
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar9 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_b8 = param_1 + 8;
  local_c0 = (ulonglong)(uVar9 >> 0x10 ^ uVar9) | 0x100000000;
  local_b0 = param_1 + 0x38;
  local_a8 = param_1 + 0x50;
  local_a0 = param_1 + 0x78;
  local_98 = param_1 + 0x88;
  local_90 = param_1 + 0x98;
  local_88 = param_1 + 0xa8;
  local_80 = param_1 + 0xb8;
  local_78 = param_1 + 200;
  local_70 = param_1 + 0xd8;
  local_68 = param_1 + 0xe8;
  pvVar1 = (void *)(param_1 + 0xf8);
  local_58 = param_1 + 0x118;
  local_50 = param_1 + 0x11c;
  puVar3 = (ushort *)(param_1 + 0x120);
  plVar2 = (longlong *)(param_1 + 0x1c0);
  local_60 = pvVar1;
  local_48 = puVar3;
  if (plVar2 != (longlong *)(param_2 + 0x120)) {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(param_2 + 0x128) = 0;
  }
  *(undefined2 *)(param_1 + 0x120) = *(undefined2 *)(param_2 + 0xf0);
  FUN_14067d924(param_1,param_2);
  iVar5 = *(int *)(param_2 + 0x1b4);
  local_d0 = plVar2;
  local_c8 = iVar5;
  FUN_14067e066(param_2,&local_d0,iVar5,&local_c0);
  if ((*(char *)(param_1 + 0x1d0) == '\x01') &&
     (iVar6 = *(int *)(param_2 + 0x1b4), iVar6 != *(int *)(param_1 + 0x1c8))) {
    *(int *)(param_1 + 0x110) = iVar6;
    uVar9 = iVar6 + 0x1f;
    if (0x1f < uVar9) {
      uVar15 = uVar9 >> 5;
      if (*(int *)(param_1 + 0x114) + 0x1fU >> 5 < uVar15) {
        FUN_14499171c(pvVar1,0,uVar15,4);
        *(uint *)(param_1 + 0x114) = uVar9 & 0xffffffe0;
      }
      pvVar12 = *(void **)(param_1 + 0x108);
      if (*(void **)(param_1 + 0x108) == (void *)0x0) {
        pvVar12 = pvVar1;
      }
      if (uVar9 < 0x120) {
        uVar15 = uVar9 >> 3 & 0x3c;
      }
      else {
        uVar15 = uVar15 << 2;
      }
      memset(pvVar12,0,(ulonglong)uVar15);
      iVar6 = *(int *)(param_1 + 0x110);
      iVar11 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar11 = iVar6;
      }
      if (iVar6 % 0x20 != 0) {
        pvVar12 = *(void **)(param_1 + 0x108);
        if (*(void **)(param_1 + 0x108) == (void *)0x0) {
          pvVar12 = pvVar1;
        }
        bVar10 = -(char)(iVar6 % 0x20);
        *(uint *)((longlong)pvVar12 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar12 + (longlong)(iVar11 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    iVar6 = *(int *)(param_1 + 0x1c8);
    if ((longlong)iVar6 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1c0);
      lVar13 = 0;
      do {
        iVar11 = *(int *)(lVar7 + lVar13);
        if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(param_1 + 0x1c8))) {
          iVar11 = *(int *)(*plVar2 + (longlong)iVar11 * 4);
        }
        if ((iVar11 < iVar5) && (iVar11 != -1)) {
          pvVar12 = *(void **)(param_1 + 0x108);
          if (*(void **)(param_1 + 0x108) == (void *)0x0) {
            pvVar12 = pvVar1;
          }
          iVar14 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar14 = iVar11;
          }
          puVar4 = (uint *)((longlong)pvVar12 + (longlong)(iVar14 >> 5) * 4);
          *puVar4 = *puVar4 | 1 << ((byte)iVar11 & 0x1f);
        }
        lVar13 = lVar13 + 4;
      } while ((longlong)iVar6 * 4 != lVar13);
    }
    uVar8 = (ushort)*(undefined4 *)puVar3 | 0x100;
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 0;
    uVar8 = *(ushort *)(param_1 + 0x120) & 0xfeff;
  }
  *puVar3 = uVar8;
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14067d924 FUN_14067d924 body=1005 status=ok
// SIG undefined FUN_14067d924(void)

void FUN_14067d924(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_64;
  longlong local_60;
  uint local_58;
  int local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x168);
  if (*(char *)(param_2 + 0x95) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  iVar14 = *(int *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1b4);
  if (*(int *)(param_1 + 0x170) == 0) {
    FUN_14067debe(plVar1);
  }
  FUN_14067dd7c(plVar1,uVar3);
  *(undefined4 *)(param_1 + 0x188) = uVar3;
  plVar2 = (longlong *)(param_1 + 0x178);
  iVar13 = *(int *)(param_1 + 0x180);
  lVar18 = (longlong)iVar13;
  if ((iVar13 != iVar14) && (FUN_144a127d2(plVar2,iVar14,1), iVar13 < iVar14)) {
    do {
      *(undefined4 *)(*plVar2 + lVar18 * 4) = 0xffffffff;
      lVar18 = lVar18 + 1;
    } while (iVar14 != lVar18);
  }
  plVar20 = (longlong *)(param_2 + 0x40);
  piVar10 = &local_68;
  FUN_14067ddc4(plVar20);
  if (local_54 < *(int *)(local_60 + 0x18)) {
    uVar7 = (ulonglong)local_64;
    piVar10 = (int *)(ulonglong)local_50;
    do {
      if (*(int *)(param_1 + 0x180 + (ulonglong)(*(int *)(param_1 + 0x170) == 0) * 8) <= local_54)
      break;
      *(undefined4 *)(*plVar2 + (longlong)local_54 * 4) = 0xffffffff;
      local_58 = local_58 & ~(uint)uVar7;
      lVar18 = *(longlong *)(local_60 + 0x10);
      if (*(longlong *)(local_60 + 0x10) == 0) {
        lVar18 = local_60;
      }
      iVar14 = *(int *)(local_60 + 0x18);
      lVar19 = (longlong)local_68;
      uVar16 = *(uint *)(lVar18 + lVar19 * 4) & local_58;
      if (uVar16 == 0) {
        iVar13 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar13 = iVar14 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar12 = iVar13;
        if (iVar13 < local_68) {
          iVar12 = local_68;
        }
        if (iVar13 <= local_68) break;
        piVar10 = (int *)(ulonglong)((int)piVar10 + 0x20);
        lVar15 = 0;
        while (uVar16 = *(uint *)(lVar18 + lVar19 * 4 + 4 + lVar15 * 4), uVar16 == 0) {
          piVar10 = (int *)(ulonglong)((int)piVar10 + 0x20);
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar19 == lVar15) goto LAB_14067d9f0;
        }
        local_68 = local_68 + (int)lVar15 + 1;
        local_58 = 0xffffffff;
      }
      uVar7 = (ulonglong)(-uVar16 & uVar16);
      uVar8 = uVar7 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_54 = ((int)piVar10 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (local_54 < iVar14);
  }
LAB_14067d9f0:
  iVar14 = *(int *)(param_2 + 0x1b0);
  bVar4 = true;
  if ((*(char *)(param_2 + 0x90) == '\0') &&
     (*(int *)(param_2 + 0x8c) + *(int *)(param_2 + 0x80) != iVar14)) {
    uVar16 = *(uint *)(param_2 + 0x48);
    iVar13 = *(int *)(param_2 + 0x78);
    if (*(int *)(param_2 + 0x70) < *(int *)(param_2 + 0x78)) {
      iVar13 = *(int *)(param_2 + 0x70);
    }
    iVar14 = iVar13 + 7;
    if (-1 < iVar13) {
      iVar14 = iVar13;
    }
    uVar5 = iVar14 >> 3;
    uVar7 = (ulonglong)uVar5;
    iVar12 = iVar13 % 8;
    iVar14 = 0;
    uVar9 = 0;
    if ((-8 < iVar13) && ((int)uVar5 < (int)uVar16)) {
      uVar9 = *(uint *)(*plVar20 + (longlong)(int)uVar5 * 4) & 0x99999999;
    }
    uVar9 = uVar9 >> ((char)iVar12 * '\x04' & 0x1fU);
    piVar10 = (int *)(ulonglong)uVar9;
    if ((int)uVar5 < (int)uVar16) {
      if (uVar9 == 0) {
        bVar4 = false;
        uVar8 = (longlong)(int)uVar5;
        do {
          if ((longlong)(int)uVar16 - 1U == uVar8) {
            uVar7 = (ulonglong)uVar16;
            piVar10 = (int *)0x0;
            iVar14 = 0;
            goto LAB_14067da9e;
          }
          uVar7 = uVar8 + 1;
          uVar9 = *(uint *)(*plVar20 + 4 + uVar8 * 4) & 0x99999999;
          uVar8 = uVar7;
        } while (uVar9 == 0);
        iVar12 = 0;
      }
      uVar16 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
        }
      }
      piVar10 = (int *)(ulonglong)(uVar9 >> ((byte)uVar16 & 0x1c));
      iVar12 = (uVar16 >> 2) + iVar12;
      bVar4 = false;
      iVar14 = 0;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    uVar7 = 0;
    plVar20 = (longlong *)0x0;
LAB_14067da9e:
    iVar12 = 0;
  }
  lVar18 = 0;
LAB_14067daa7:
  do {
    iVar13 = (int)uVar7;
    iVar6 = iVar12 + iVar13 * 8;
    do {
      if (bVar4) {
        if (iVar14 <= lVar18) goto LAB_14067dad2;
        iVar21 = iVar12 + iVar13 * 8;
      }
      else {
        iVar17 = *(int *)((longlong)plVar20 + 0x3c) + 1;
        if ((int)plVar20[6] < iVar17) {
          iVar17 = (int)plVar20[6];
        }
        iVar21 = iVar6;
        if (iVar17 <= iVar6) {
LAB_14067dad2:
          if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
      }
      iVar17 = (int)lVar18;
      iVar11 = iVar17;
      if (!bVar4) {
        iVar11 = iVar21;
      }
      if (*(char *)(param_2 + 0x95) != '\x01') {
        iVar17 = *(int *)(*(longlong *)(param_2 + 0x98) + lVar18 * 4);
      }
      *(int *)(*plVar1 + (longlong)iVar11 * 4) = iVar17;
      *(int *)(*plVar2 + (longlong)iVar17 * 4) = iVar11;
      lVar18 = lVar18 + 1;
    } while ((bVar4) || (uVar16 = *(uint *)(plVar20 + 1), (int)uVar16 <= iVar13));
    uVar7 = (ulonglong)iVar13;
    uVar5 = (uint)piVar10 & 0xfffffff6;
    if (((ulonglong)piVar10 & 0xfffffff6) == 0) {
      uVar8 = uVar7;
      do {
        piVar10 = (int *)0x0;
        if ((longlong)(int)uVar16 - 1U == uVar8) {
          uVar7 = (ulonglong)uVar16;
          iVar12 = 0;
          goto LAB_14067daa7;
        }
        uVar7 = uVar8 + 1;
        uVar5 = *(uint *)(*plVar20 + 4 + uVar8 * 4) & 0x99999999;
        uVar8 = uVar7;
      } while (uVar5 == 0);
      iVar12 = 0;
    }
    uVar16 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
      }
    }
    iVar12 = (uVar16 >> 2) + iVar12;
    piVar10 = (int *)(ulonglong)(uVar5 >> ((byte)uVar16 & 0x1c));
  } while( true );
}



// FUNCTION 14067dd2c FUN_14067dd2c body=79 status=ok
// SIG undefined FUN_14067dd2c(void)

void FUN_14067dd2c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14179763c(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14481578e(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 14067dd7c FUN_14067dd7c body=71 status=ok
// SIG undefined FUN_14067dd7c(void)

void FUN_14067dd7c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14067df04();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1410643e4();
      return;
    }
  }
  return;
}



// FUNCTION 14067ddc4 FUN_14067ddc4 body=249 status=ok
// SIG undefined FUN_14067ddc4(void)

void FUN_14067ddc4(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar7 = *(uint *)(param_1 + 0x34);
  uVar4 = uVar7;
  if ((int)uVar2 < (int)uVar7) {
    uVar4 = uVar2;
  }
  iVar11 = (int)uVar4 >> 5;
  uVar10 = -1 << ((byte)uVar4 & 0x1f);
  *param_2 = iVar11;
  param_2[1] = 1 << ((byte)uVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = param_1 + 0x10;
  param_2[4] = uVar10;
  param_2[5] = uVar4;
  uVar4 = uVar4 & 0xffffffe0;
  param_2[6] = uVar4;
  if ((int)uVar7 < (int)uVar2) {
    lVar9 = param_1 + 0x10;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x20);
    }
    lVar6 = (longlong)iVar11;
    uVar7 = *(uint *)(lVar9 + lVar6 * 4) & uVar10;
    if (uVar7 == 0) {
      iVar8 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar8 = uVar2 - 1;
      }
      iVar8 = iVar8 >> 5;
      lVar5 = lVar6 + 1;
      uVar4 = uVar4 + 0x20;
      iVar3 = iVar8;
      if (iVar8 < iVar11) {
        iVar3 = iVar11;
      }
      if (iVar11 < iVar8) {
        iVar11 = iVar3 + 1;
        lVar6 = iVar3 - lVar6;
        do {
          uVar7 = *(uint *)(lVar9 + lVar5 * 4);
          if (uVar7 != 0) {
            *param_2 = (int)lVar5;
            param_2[6] = uVar4;
            param_2[4] = -1;
            goto LAB_14067de6b;
          }
          lVar5 = lVar5 + 1;
          uVar4 = uVar4 + 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        uVar10 = 0xffffffff;
      }
      else {
        iVar11 = (int)lVar5;
      }
      *param_2 = iVar11;
      param_2[6] = uVar4;
      param_2[4] = uVar10;
      uVar7 = uVar2;
    }
    else {
LAB_14067de6b:
      param_2[1] = -uVar7 & uVar7;
      uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar7 = (uVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar7) {
        uVar7 = uVar2;
      }
    }
    param_2[5] = uVar7;
  }
  return;
}



// FUNCTION 14067debe FUN_14067debe body=70 status=ok
// SIG undefined FUN_14067debe(void)

void FUN_14067debe(longlong *param_1)

{
  longlong lVar1;
  
  FUN_14067dd7c(param_1,(int)param_1[4]);
  FUN_144a127d2(param_1 + 2,(int)param_1[4],1);
  if (0 < (int)param_1[4]) {
    lVar1 = 0;
    do {
      *(int *)(*param_1 + lVar1 * 4) = (int)lVar1;
      *(int *)(param_1[2] + lVar1 * 4) = (int)lVar1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[4]);
  }
  return;
}



// FUNCTION 14067df04 FUN_14067df04 body=353 status=ok
// SIG undefined FUN_14067df04(void)

void FUN_14067df04(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14067df89;
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
LAB_14067df89:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14067e066 FUN_14067e066 body=6653 status=ok
// SIG undefined FUN_14067e066(void)

void FUN_14067e066(longlong *param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  float *pfVar31;
  undefined8 uVar32;
  longlong *plVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  int iVar40;
  uint uVar41;
  longlong *plVar42;
  uint uVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  int iVar47;
  longlong lVar48;
  int iVar49;
  code *pcVar50;
  bool bVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  uint local_1a4;
  longlong *local_1a0;
  undefined1 local_198 [8];
  ulonglong uStack_190;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  longlong lStack_170;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined8 uStack_104;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar33 = *(longlong **)(param_4 + 8);
  lVar48 = param_1[0x26];
  lVar9 = param_1[0x27];
  lVar39 = param_1[0x28];
  lVar20 = param_1[0x29];
  uVar13 = *(undefined4 *)((longlong)param_1 + 0x154);
  lVar30 = param_1[0x2b];
  uVar14 = *(undefined4 *)((longlong)param_1 + 0x15c);
  *(int *)(plVar33 + 4) = (int)param_1[0x2a];
  *(undefined4 *)((longlong)plVar33 + 0x24) = uVar13;
  *(int *)(plVar33 + 5) = (int)lVar30;
  *(undefined4 *)((longlong)plVar33 + 0x2c) = uVar14;
  plVar33[2] = lVar39;
  plVar33[3] = lVar20;
  *plVar33 = lVar48;
  plVar33[1] = lVar9;
  plVar33 = *(longlong **)(param_4 + 0x10);
  plVar33[2] = param_1[0x2e];
  lVar48 = param_1[0x2d];
  *plVar33 = param_1[0x2c];
  plVar33[1] = lVar48;
  FUN_14026f2d2(*(undefined8 *)(param_4 + 0x18),param_1 + 0x1f);
  FUN_14026f33c(&local_164,*(undefined8 *)(param_4 + 8),*(undefined4 *)((longlong)param_1 + 0x1ac));
  pfVar8 = *(float **)(param_4 + 0x18);
  pfVar31 = *(float **)(pfVar8 + 6);
  if (*(float **)(pfVar8 + 6) == (float *)0x0) {
    pfVar31 = pfVar8;
  }
  if ((longlong)(int)pfVar8[8] != 0) {
    pfVar8 = pfVar31 + (longlong)(int)pfVar8[8] * 6;
    do {
      *pfVar31 = *pfVar31 - local_164;
      pfVar31[1] = pfVar31[1] - local_160;
      pfVar31[2] = pfVar31[2] - local_15c;
      pfVar31[3] = pfVar31[3] + local_164;
      pfVar31[4] = pfVar31[4] + local_160;
      pfVar31[5] = pfVar31[5] + local_15c;
      pfVar31 = pfVar31 + 6;
    } while (pfVar31 != pfVar8);
  }
  plVar33 = *(longlong **)(param_4 + 0x50);
  bVar51 = true;
  iVar47 = (int)param_1[0x36];
  if ((char)param_1[0x12] == '\0' && *(char *)((longlong)param_1 + 0x91) == '\0') {
    iVar47 = *(int *)((longlong)param_1 + 0x84) + (int)param_1[0x10];
    bVar51 = iVar47 == (int)param_1[0x36];
  }
  local_1a0 = param_1 + 8;
  local_198._0_4_ = param_3;
  FUN_14026f28a(plVar33);
  if (iVar47 != 0) {
    fVar52 = SQRT(*(float *)(param_1 + 0x27) * *(float *)(param_1 + 0x27) +
                  *(float *)(param_1 + 0x26) * *(float *)(param_1 + 0x26) +
                  *(float *)((longlong)param_1 + 0x134) * *(float *)((longlong)param_1 + 0x134));
    fVar55 = SQRT(*(float *)((longlong)param_1 + 0x144) * *(float *)((longlong)param_1 + 0x144) +
                  *(float *)((longlong)param_1 + 0x13c) * *(float *)((longlong)param_1 + 0x13c) +
                  *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
    if (((1e-08 < ABS(fVar52 - fVar55)) ||
        (fVar56 = SQRT(*(float *)(param_1 + 0x2a) * *(float *)(param_1 + 0x2a) +
                       *(float *)(param_1 + 0x29) * *(float *)(param_1 + 0x29) +
                       *(float *)((longlong)param_1 + 0x14c) * *(float *)((longlong)param_1 + 0x14c)
                      ), 1e-08 < ABS(fVar52 - fVar56))) || (1e-08 < ABS(fVar55 - fVar56))) {
      auVar53 = insertps(*(undefined1 (*) [16])((longlong)param_1 + 0x154),(int)param_1[0x2b],0x10);
      if (bVar51) {
        uVar34 = 0;
        plVar42 = (longlong *)0x0;
LAB_14067e526:
        iVar36 = 0;
      }
      else {
        uVar41 = *(uint *)(param_1 + 9);
        uVar34 = (ulonglong)uVar41;
        iVar12 = (int)param_1[0xf];
        if ((int)param_1[0xe] < (int)param_1[0xf]) {
          iVar12 = (int)param_1[0xe];
        }
        iVar47 = iVar12 + 7;
        if (-1 < iVar12) {
          iVar47 = iVar12;
        }
        uVar37 = iVar47 >> 3;
        iVar36 = iVar12 % 8;
        iVar47 = 0;
        local_1a4 = 0;
        if ((int)uVar37 < (int)uVar41 && -8 < iVar12) {
          local_1a4 = *(uint *)(*local_1a0 + (longlong)(int)uVar37 * 4) & 0x33333333;
        }
        local_1a4 = local_1a4 >> ((char)iVar36 * '\x04' & 0x1fU);
        plVar42 = local_1a0;
        if ((int)uVar37 < (int)uVar41) {
          uVar45 = (ulonglong)(int)uVar37;
          if (local_1a4 == 0) {
            uVar46 = uVar45;
            do {
              if ((longlong)(int)uVar41 - 1U == uVar46) {
                iVar47 = 0;
                local_1a4 = 0;
                goto LAB_14067e526;
              }
              uVar45 = uVar46 + 1;
              local_1a4 = *(uint *)(*local_1a0 + 4 + uVar46 * 4) & 0x33333333;
              uVar46 = uVar45;
            } while (local_1a4 == 0);
            iVar36 = 0;
          }
          uVar41 = 0;
          if (local_1a4 != 0) {
            for (; (local_1a4 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
            }
          }
          local_1a4 = local_1a4 >> ((byte)uVar41 & 0x1c);
          iVar36 = (uVar41 >> 2) + iVar36;
          uVar34 = uVar45 & 0xffffffff;
        }
        else {
          uVar34 = (ulonglong)uVar37;
        }
      }
      uVar45 = param_1[0x26];
      lStack_170 = param_1[0x27];
      fVar52 = *(float *)((longlong)param_1 + 0x13c);
      fVar55 = *(float *)(param_1 + 0x28);
      fVar56 = *(float *)((longlong)param_1 + 0x144);
      _local_188 = insertps(auVar53,*(undefined4 *)((longlong)param_1 + 0x15c),0x20);
      fVar15 = *(float *)(param_1 + 0x29);
      fVar61 = *(float *)((longlong)param_1 + 0x14c);
      fVar16 = *(float *)(param_1 + 0x2a);
      uVar46 = 0;
LAB_14067e55b:
      do {
        iVar12 = (int)uVar34;
        do {
          lVar48 = uVar46 * 0x30 + 0x2c;
          do {
            local_178 = uVar45;
            if (bVar51) {
              uVar41 = iVar36 + iVar12 * 8;
              if ((longlong)iVar47 <= (longlong)uVar46) goto LAB_14067e921;
            }
            else {
              uVar41 = iVar36 + iVar12 * 8;
              iVar40 = *(int *)((longlong)plVar42 + 0x3c) + 1;
              if ((int)plVar42[6] < iVar40) {
                iVar40 = (int)plVar42[6];
              }
              if (iVar40 <= (int)uVar41) goto LAB_14067e921;
            }
            uVar34 = uVar46 & 0xffffffff;
            if (!bVar51) {
              uVar34 = (ulonglong)uVar41;
            }
            iVar40 = (int)uVar34;
            if (iVar40 < 0) {
              iVar49 = (int)param_2[1];
LAB_14067f79d:
              if (iVar40 < iVar49) {
LAB_14067e5b5:
                if (iVar40 != -1) {
                  lVar9 = param_1[0x16];
                  pfVar8 = (float *)(lVar9 + -0x2c + lVar48);
                  fVar4 = *pfVar8;
                  fVar5 = pfVar8[1];
                  fVar57 = pfVar8[2];
                  local_178._0_4_ = (float)uVar45;
                  local_178._4_4_ = (float)(uVar45 >> 0x20);
                  local_128 = fVar57 * fVar15 + fVar5 * fVar52 + fVar4 * (float)local_178;
                  fStack_124 = fVar57 * fVar61 + fVar5 * fVar55 + fVar4 * local_178._4_4_;
                  fStack_120 = fVar57 * fVar16 + fVar5 * fVar56 + fVar4 * (float)lStack_170;
                  pfVar8 = (float *)(lVar9 + -0x20 + lVar48);
                  fVar4 = *pfVar8;
                  fVar5 = pfVar8[1];
                  fVar57 = pfVar8[2];
                  fStack_11c = fVar57 * fVar15 + fVar5 * fVar52 + fVar4 * (float)local_178;
                  local_118 = fVar57 * fVar61 + fVar5 * fVar55 + fVar4 * local_178._4_4_;
                  fStack_114 = fVar57 * fVar16 + fVar5 * fVar56 + fVar4 * (float)lStack_170;
                  pfVar8 = (float *)(lVar9 + -0x14 + lVar48);
                  fVar4 = *pfVar8;
                  fVar5 = pfVar8[1];
                  fVar57 = pfVar8[2];
                  fVar17 = pfVar8[3];
                  fStack_110 = fVar57 * fVar15 + fVar5 * fVar52 + fVar4 * (float)local_178;
                  fStack_10c = fVar57 * fVar61 + fVar5 * fVar55 + fVar4 * local_178._4_4_;
                  fStack_108 = fVar57 * fVar16 + fVar5 * fVar56 + fVar4 * (float)lStack_170;
                  fVar4 = *(float *)(lVar9 + -4 + lVar48);
                  fVar5 = *(float *)(lVar9 + lVar48);
                  uStack_104 = CONCAT44(fVar5 * fVar61 +
                                        fVar4 * fVar55 + fVar17 * local_178._4_4_ + local_188._4_4_,
                                        fVar5 * fVar15 +
                                        fVar4 * fVar52 + fVar17 * (float)local_178 + local_188._0_4_
                                       );
                  if (((((local_128 != 0.0) || (NAN(local_128))) ||
                       ((fStack_124 != 0.0 || ((NAN(fStack_124) || (fStack_120 != 0.0)))))) ||
                      (NAN(fStack_120))) &&
                     (((((fStack_11c != 0.0 || (NAN(fStack_11c))) || (local_118 != 0.0)) ||
                       ((NAN(local_118) || (fStack_114 != 0.0)))) || (NAN(fStack_114))))) {
                    fVar57 = fStack_120 * fStack_120 +
                             local_128 * local_128 + fStack_124 * fStack_124;
                    fVar60 = (fStack_114 * fStack_120 +
                             fStack_11c * local_128 + fStack_124 * local_118) / fVar57;
                    fStack_11c = fStack_11c - fVar60 * local_128;
                    local_118 = local_118 - fStack_124 * fVar60;
                    fStack_114 = fStack_114 - fStack_120 * fVar60;
                    fVar57 = (fStack_108 * fStack_120 +
                             fStack_110 * local_128 + fStack_124 * fStack_10c) / fVar57;
                    fStack_110 = fStack_110 - fVar57 * local_128;
                    fStack_10c = fStack_10c - fStack_124 * fVar57;
                    fStack_108 = fStack_108 - fStack_120 * fVar57;
                    fVar57 = (fStack_108 * fStack_114 +
                             fStack_110 * fStack_11c + local_118 * fStack_10c) /
                             (fStack_114 * fStack_114 +
                             fStack_11c * fStack_11c + local_118 * local_118);
                    fStack_110 = fStack_110 - fVar57 * fStack_11c;
                    fStack_10c = fStack_10c - local_118 * fVar57;
                    fStack_108 = fStack_108 - fStack_114 * fVar57;
                  }
                  lVar9 = *plVar33;
                  lVar39 = (longlong)iVar40 * 0x30;
                  puVar1 = (undefined8 *)(lVar9 + 0x1c + lVar39);
                  *puVar1 = CONCAT44(fStack_108,fStack_10c);
                  puVar1[1] = uStack_104;
                  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar39);
                  *puVar1 = CONCAT44(fStack_114,local_118);
                  puVar1[1] = CONCAT44(fStack_10c,fStack_110);
                  *(undefined8 *)(lVar9 + lVar39) = CONCAT44(fStack_124,local_128);
                  ((undefined8 *)(lVar9 + lVar39))[1] = CONCAT44(fStack_11c,fStack_120);
                  *(float *)(lVar9 + 0x2c + lVar39) =
                       fVar5 * fVar16 +
                       fVar4 * fVar56 + fVar17 * (float)lStack_170 + local_188._8_4_;
                }
              }
            }
            else {
              iVar49 = (int)param_2[1];
              if ((int)((longlong *)*param_2)[1] <= iVar40) goto LAB_14067f79d;
              iVar40 = *(int *)(*(longlong *)*param_2 + uVar34 * 4);
              if (iVar40 < iVar49) goto LAB_14067e5b5;
            }
            uVar46 = uVar46 + 1;
            lVar48 = lVar48 + 0x30;
          } while (bVar51);
          uVar41 = *(uint *)(plVar42 + 1);
        } while ((int)uVar41 <= iVar12);
        uVar34 = (ulonglong)iVar12;
        local_1a4 = local_1a4 & 0xfffffffc;
        if (local_1a4 == 0) {
          uVar35 = uVar34;
          do {
            if ((longlong)(int)uVar41 - 1U == uVar35) {
              local_1a4 = 0;
              uVar34 = (ulonglong)uVar41;
              iVar36 = 0;
              goto LAB_14067e55b;
            }
            uVar34 = uVar35 + 1;
            local_1a4 = *(uint *)(*plVar42 + 4 + uVar35 * 4) & 0x33333333;
            uVar35 = uVar34;
          } while (local_1a4 == 0);
          iVar36 = 0;
        }
        uVar41 = 0;
        if (local_1a4 != 0) {
          for (; (local_1a4 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
          }
        }
        iVar36 = (uVar41 >> 2) + iVar36;
        local_1a4 = local_1a4 >> ((byte)uVar41 & 0x1c);
      } while( true );
    }
    auVar53 = insertps(*(undefined1 (*) [16])((longlong)param_1 + 0x154),(int)param_1[0x2b],0x10);
    if (bVar51) {
      iVar36 = 0;
      uVar34 = 0;
      plVar42 = (longlong *)0x0;
    }
    else {
      uVar41 = *(uint *)(param_1 + 9);
      uVar34 = (ulonglong)uVar41;
      iVar12 = (int)param_1[0xf];
      if ((int)param_1[0xe] < (int)param_1[0xf]) {
        iVar12 = (int)param_1[0xe];
      }
      iVar47 = iVar12 + 7;
      if (-1 < iVar12) {
        iVar47 = iVar12;
      }
      uVar37 = iVar47 >> 3;
      iVar36 = iVar12 % 8;
      iVar47 = 0;
      local_188._0_4_ = 0;
      if ((int)uVar37 < (int)uVar41 && -8 < iVar12) {
        local_188._0_4_ = *(uint *)(*local_1a0 + (longlong)(int)uVar37 * 4) & 0x33333333;
      }
      local_188._0_4_ = (uint)local_188._0_4_ >> ((char)iVar36 * '\x04' & 0x1fU);
      plVar42 = local_1a0;
      if ((int)uVar37 < (int)uVar41) {
        uVar45 = (ulonglong)(int)uVar37;
        if (local_188._0_4_ == 0) {
          uVar46 = uVar45;
          do {
            if ((longlong)(int)uVar41 - 1U == uVar46) {
              iVar36 = 0;
              auVar23._12_4_ = 0;
              auVar23._0_12_ = stack0xfffffffffffffe7c;
              _local_188 = auVar23 << 0x20;
              iVar47 = 0;
              goto LAB_14067e32d;
            }
            uVar45 = uVar46 + 1;
            local_188._0_4_ = *(uint *)(*local_1a0 + 4 + uVar46 * 4) & 0x33333333;
            uVar46 = uVar45;
          } while (local_188._0_4_ == 0);
          iVar36 = 0;
        }
        uVar41 = 0;
        if (local_188._0_4_ != 0) {
          for (; ((uint)local_188._0_4_ >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
          }
        }
        local_188._0_4_ = (uint)local_188._0_4_ >> ((byte)uVar41 & 0x1c);
        iVar36 = (uVar41 >> 2) + iVar36;
        uVar34 = uVar45 & 0xffffffff;
      }
      else {
        uVar34 = (ulonglong)uVar37;
      }
    }
LAB_14067e32d:
    fVar52 = *(float *)(param_1 + 0x26);
    fVar55 = *(float *)((longlong)param_1 + 0x134);
    fVar56 = *(float *)(param_1 + 0x27);
    fVar15 = *(float *)((longlong)param_1 + 0x13c);
    fVar61 = *(float *)((longlong)param_1 + 0x13c);
    fVar16 = *(float *)(param_1 + 0x28);
    fVar4 = *(float *)((longlong)param_1 + 0x144);
    fVar5 = *(float *)(param_1 + 0x29);
    fVar57 = *(float *)(param_1 + 0x29);
    fVar17 = *(float *)((longlong)param_1 + 0x14c);
    fVar60 = *(float *)(param_1 + 0x2a);
    fVar18 = *(float *)((longlong)param_1 + 0x154);
    auVar53 = insertps(auVar53,*(undefined4 *)((longlong)param_1 + 0x15c),0x20);
    uVar45 = 0;
LAB_14067e352:
    do {
      iVar12 = (int)uVar34;
      do {
        lVar48 = uVar45 * 0x30 + 0x2c;
        do {
          if (bVar51) {
            uVar41 = iVar36 + iVar12 * 8;
            if ((longlong)iVar47 <= (longlong)uVar45) goto LAB_14067e921;
          }
          else {
            uVar41 = iVar36 + iVar12 * 8;
            iVar40 = *(int *)((longlong)plVar42 + 0x3c) + 1;
            if ((int)plVar42[6] < iVar40) {
              iVar40 = (int)plVar42[6];
            }
            if (iVar40 <= (int)uVar41) goto LAB_14067e921;
          }
          uVar34 = uVar45 & 0xffffffff;
          if (!bVar51) {
            uVar34 = (ulonglong)uVar41;
          }
          iVar40 = (int)uVar34;
          if (iVar40 < 0) {
            iVar49 = (int)param_2[1];
          }
          else {
            iVar49 = (int)param_2[1];
            if (iVar40 < (int)((longlong *)*param_2)[1]) {
              iVar40 = *(int *)(*(longlong *)*param_2 + uVar34 * 4);
            }
          }
          if ((iVar40 < iVar49) && (iVar40 != -1)) {
            lVar9 = param_1[0x16];
            pfVar8 = (float *)(lVar9 + -0x2c + lVar48);
            fVar2 = *pfVar8;
            fVar3 = pfVar8[1];
            fVar58 = pfVar8[2];
            local_128 = fVar58 * fVar57 + fVar3 * fVar61 + fVar2 * fVar52;
            fStack_124 = fVar58 * fVar17 + fVar3 * fVar16 + fVar2 * fVar55;
            fStack_120 = fVar58 * fVar60 + fVar3 * fVar4 + fVar2 * fVar56;
            pfVar8 = (float *)(lVar9 + -0x20 + lVar48);
            fVar2 = *pfVar8;
            fVar3 = pfVar8[1];
            fVar58 = pfVar8[2];
            fStack_11c = fVar58 * fVar57 + fVar3 * fVar61 + fVar2 * fVar52;
            local_118 = fVar58 * fVar17 + fVar3 * fVar16 + fVar2 * fVar55;
            fStack_114 = fVar58 * fVar60 + fVar3 * fVar4 + fVar2 * fVar56;
            pfVar8 = (float *)(lVar9 + -0x14 + lVar48);
            fVar2 = *pfVar8;
            fVar3 = pfVar8[1];
            fVar58 = pfVar8[2];
            fVar19 = pfVar8[3];
            fStack_110 = fVar58 * fVar57 + fVar3 * fVar61 + fVar2 * fVar52;
            fStack_10c = fVar58 * fVar17 + fVar3 * fVar16 + fVar2 * fVar55;
            fStack_108 = fVar58 * fVar60 + fVar3 * fVar4 + fVar2 * fVar56;
            fVar2 = *(float *)(lVar9 + -4 + lVar48);
            fVar3 = *(float *)(lVar9 + lVar48);
            fVar58 = fVar3 * fVar57 + fVar2 * fVar61 + fVar19 * fVar52 + auVar53._0_4_;
            fVar59 = fVar3 * fVar17 + fVar2 * fVar16 + fVar19 * fVar55 + auVar53._4_4_;
            uStack_104 = CONCAT44(fVar59,fVar58);
            lVar9 = *plVar33;
            lVar39 = (longlong)iVar40 * 0x30;
            puVar1 = (undefined8 *)(lVar9 + 0x1c + lVar39);
            *puVar1 = CONCAT44(fStack_108,fStack_10c);
            puVar1[1] = uStack_104;
            puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar39);
            *puVar1 = CONCAT44(fStack_114,local_118);
            puVar1[1] = CONCAT44(fStack_10c,fStack_110);
            *(undefined8 *)(lVar9 + lVar39) = CONCAT44(fStack_124,local_128);
            ((undefined8 *)(lVar9 + lVar39))[1] = CONCAT44(fStack_11c,fStack_120);
            auVar10._4_4_ = fVar59;
            auVar10._0_4_ = fVar58;
            auVar10._8_4_ = fVar3 * fVar60 + fVar2 * fVar4 + fVar19 * fVar56 + auVar53._8_4_;
            auVar10._12_4_ = fVar3 * fVar18 + fVar2 * fVar5 + fVar19 * fVar15 + auVar53._12_4_;
            uVar32 = extractps(auVar10,2);
            *(undefined8 *)(lVar9 + 0x2c + lVar39) = uVar32;
          }
          uVar45 = uVar45 + 1;
          lVar48 = lVar48 + 0x30;
        } while (bVar51);
        uVar41 = *(uint *)(plVar42 + 1);
      } while ((int)uVar41 <= iVar12);
      uVar34 = (ulonglong)iVar12;
      uVar37 = local_188._0_4_ & 0xfffffffc;
      local_188._0_4_ = uVar37;
      if (uVar37 == 0) {
        uVar46 = uVar34;
        do {
          if ((longlong)(int)uVar41 - 1U == uVar46) {
            iVar36 = 0;
            auVar27._12_4_ = 0;
            auVar27._0_12_ = stack0xfffffffffffffe7c;
            _local_188 = auVar27 << 0x20;
            uVar34 = (ulonglong)uVar41;
            goto LAB_14067e352;
          }
          uVar34 = uVar46 + 1;
          local_188._0_4_ = *(uint *)(*plVar42 + 4 + uVar46 * 4) & 0x33333333;
          uVar46 = uVar34;
        } while (local_188._0_4_ == 0);
        iVar36 = 0;
      }
      uVar41 = 0;
      if (local_188._0_4_ != 0) {
        for (; ((uint)local_188._0_4_ >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
        }
      }
      iVar36 = (uVar41 >> 2) + iVar36;
      local_188._0_4_ = (uint)local_188._0_4_ >> ((byte)uVar41 & 0x1c);
    } while( true );
  }
LAB_14067e921:
  if ((*(byte *)(param_1 + 0x1e) & 4) == 0) {
    lVar48 = *(longlong *)(param_4 + 0x58);
    *(undefined4 *)(lVar48 + 8) = 0;
    if (*(int *)(lVar48 + 0xc) < 0) {
      FUN_140250e1e();
    }
  }
  else {
    plVar33 = param_1 + 0x26;
    if ((char)param_1[0x35] != '\0') {
      plVar33 = param_1 + 0x2f;
    }
    local_138 = plVar33[4];
    local_158 = *plVar33;
    uStack_150 = plVar33[1];
    local_148 = plVar33[2];
    uStack_140 = plVar33[3];
    uVar41 = *(uint *)(plVar33 + 5);
    uVar37 = *(uint *)((longlong)plVar33 + 0x2c);
    plVar33 = *(longlong **)(param_4 + 0x58);
    cVar6 = (char)param_1[0x12];
    cVar7 = *(char *)((longlong)param_1 + 0x91);
    iVar47 = *(int *)((longlong)param_1 + 0x84) + (int)param_1[0x10];
    bVar51 = iVar47 == (int)param_1[0x36];
    if (cVar6 != '\0' || cVar7 != '\0') {
      iVar47 = (int)param_1[0x36];
    }
    uVar34 = (ulonglong)(uint)local_198._0_4_;
    FUN_14026f28a(plVar33);
    if (iVar47 != 0) {
      fVar52 = SQRT((float)uStack_150 * (float)uStack_150 +
                    (float)local_158 * (float)local_158 + local_158._4_4_ * local_158._4_4_);
      fVar55 = SQRT(local_148._4_4_ * local_148._4_4_ +
                    uStack_150._4_4_ * uStack_150._4_4_ + (float)local_148 * (float)local_148);
      if (((ABS(fVar52 - fVar55) <= 1e-08) &&
          (fVar56 = SQRT((float)local_138 * (float)local_138 +
                         (float)uStack_140 * (float)uStack_140 + uStack_140._4_4_ * uStack_140._4_4_
                        ), ABS(fVar52 - fVar56) <= 1e-08)) && (ABS(fVar55 - fVar56) <= 1e-08)) {
        auVar53._4_4_ = local_138._4_4_;
        auVar53._0_4_ = local_138._4_4_;
        auVar53._8_4_ = local_138._4_4_;
        auVar53._12_4_ = local_138._4_4_;
        auVar53 = insertps(auVar53,ZEXT416(uVar41),0x10);
        if ((cVar6 == '\0' && cVar7 == '\0') && !bVar51) {
          uVar41 = *(uint *)(param_1 + 9);
          uVar45 = (ulonglong)uVar41;
          iVar12 = (int)param_1[0xf];
          if ((int)param_1[0xe] < (int)param_1[0xf]) {
            iVar12 = (int)param_1[0xe];
          }
          iVar47 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar47 = iVar12;
          }
          uVar43 = iVar47 >> 3;
          local_198._4_4_ = 0;
          local_198._0_4_ = iVar12 % 8;
          iVar47 = 0;
          uVar38 = 0;
          if ((int)uVar43 < (int)uVar41 && -8 < iVar12) {
            uVar38 = *(uint *)(*local_1a0 + (longlong)(int)uVar43 * 4) & 0x33333333;
          }
          uVar38 = uVar38 >> ((char)(iVar12 % 8) * '\x04' & 0x1fU);
          plVar42 = local_1a0;
          if ((int)uVar43 < (int)uVar41) {
            uVar34 = (ulonglong)(int)uVar43;
            if (uVar38 == 0) {
              uVar46 = uVar34;
              do {
                if ((longlong)(int)uVar41 - 1U == uVar46) {
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uStack_190;
                  _local_198 = auVar29 << 0x40;
                  uVar34 = 0;
                  iVar47 = 0;
                  goto LAB_14067f5aa;
                }
                uVar34 = uVar46 + 1;
                uVar38 = *(uint *)(*local_1a0 + 4 + uVar46 * 4) & 0x33333333;
                uVar46 = uVar34;
              } while (uVar38 == 0);
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uStack_190;
              _local_198 = auVar28 << 0x40;
            }
            auVar23 = _local_198;
            uVar41 = 0;
            if (uVar38 != 0) {
              for (; (uVar38 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
              }
            }
            uVar38 = uVar38 >> ((byte)uVar41 & 0x1c);
            local_198._4_4_ = 0;
            local_198._0_4_ = (uVar41 >> 2) + local_198._0_4_;
            uStack_190 = auVar23._8_8_;
            uVar45 = uVar34 & 0xffffffff;
          }
          else {
            uVar45 = (ulonglong)uVar43;
          }
          uVar34 = (ulonglong)uVar38;
        }
        else {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uStack_190;
          _local_198 = auVar24 << 0x40;
          uVar45 = 0;
          plVar42 = (longlong *)0x0;
        }
LAB_14067f5aa:
        auVar53 = insertps(auVar53,ZEXT416(uVar37),0x20);
        uVar46 = 0;
LAB_14067f5c6:
        do {
          iVar12 = (int)uVar45;
          uVar41 = local_198._0_4_ + iVar12 * 8;
          do {
            lVar48 = uVar46 * 0x30 + 0x2c;
            do {
              if ((cVar6 == '\0' && cVar7 == '\0') && !bVar51) {
                iVar36 = *(int *)((longlong)plVar42 + 0x3c) + 1;
                if ((int)plVar42[6] < iVar36) {
                  iVar36 = (int)plVar42[6];
                }
                if (iVar36 <= (int)uVar41) goto LAB_14067e943;
              }
              else if ((longlong)iVar47 <= (longlong)uVar46) goto LAB_14067e943;
              uVar45 = (ulonglong)uVar41;
              if ((cVar6 != '\0' || cVar7 != '\0') || bVar51) {
                uVar45 = uVar46 & 0xffffffff;
              }
              iVar36 = (int)uVar45;
              if (iVar36 < 0) {
                iVar40 = (int)param_2[1];
              }
              else {
                iVar40 = (int)param_2[1];
                if (iVar36 < (int)((longlong *)*param_2)[1]) {
                  iVar36 = *(int *)(*(longlong *)*param_2 + uVar45 * 4);
                }
              }
              if ((iVar36 < iVar40) && (iVar36 != -1)) {
                lVar9 = param_1[0x18];
                pfVar8 = (float *)(lVar9 + -0x2c + lVar48);
                fVar52 = *pfVar8;
                fVar55 = pfVar8[1];
                fVar56 = pfVar8[2];
                local_128 = fVar56 * (float)uStack_140 +
                            fVar55 * uStack_150._4_4_ + fVar52 * (float)local_158;
                fStack_124 = fVar56 * uStack_140._4_4_ +
                             fVar55 * (float)local_148 + fVar52 * local_158._4_4_;
                fStack_120 = fVar56 * (float)local_138 +
                             fVar55 * local_148._4_4_ + fVar52 * (float)uStack_150;
                pfVar8 = (float *)(lVar9 + -0x20 + lVar48);
                fVar52 = *pfVar8;
                fVar55 = pfVar8[1];
                fVar56 = pfVar8[2];
                fStack_11c = fVar56 * (float)uStack_140 +
                             fVar55 * uStack_150._4_4_ + fVar52 * (float)local_158;
                local_118 = fVar56 * uStack_140._4_4_ +
                            fVar55 * (float)local_148 + fVar52 * local_158._4_4_;
                fStack_114 = fVar56 * (float)local_138 +
                             fVar55 * local_148._4_4_ + fVar52 * (float)uStack_150;
                pfVar8 = (float *)(lVar9 + -0x14 + lVar48);
                fVar52 = *pfVar8;
                fVar55 = pfVar8[1];
                fVar56 = pfVar8[2];
                fVar15 = pfVar8[3];
                fStack_110 = fVar56 * (float)uStack_140 +
                             fVar55 * uStack_150._4_4_ + fVar52 * (float)local_158;
                fStack_10c = fVar56 * uStack_140._4_4_ +
                             fVar55 * (float)local_148 + fVar52 * local_158._4_4_;
                fStack_108 = fVar56 * (float)local_138 +
                             fVar55 * local_148._4_4_ + fVar52 * (float)uStack_150;
                fVar52 = *(float *)(lVar9 + -4 + lVar48);
                fVar55 = *(float *)(lVar9 + lVar48);
                fVar56 = fVar55 * (float)uStack_140 +
                         fVar52 * uStack_150._4_4_ + fVar15 * (float)local_158 + auVar53._0_4_;
                fVar61 = fVar55 * uStack_140._4_4_ +
                         fVar52 * (float)local_148 + fVar15 * local_158._4_4_ + auVar53._4_4_;
                uStack_104 = CONCAT44(fVar61,fVar56);
                lVar9 = *plVar33;
                lVar39 = (longlong)iVar36 * 0x30;
                puVar1 = (undefined8 *)(lVar9 + 0x1c + lVar39);
                *puVar1 = CONCAT44(fStack_108,fStack_10c);
                puVar1[1] = uStack_104;
                puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar39);
                *puVar1 = CONCAT44(fStack_114,local_118);
                puVar1[1] = CONCAT44(fStack_10c,fStack_110);
                *(undefined8 *)(lVar9 + lVar39) = CONCAT44(fStack_124,local_128);
                ((undefined8 *)(lVar9 + lVar39))[1] = CONCAT44(fStack_11c,fStack_120);
                auVar11._4_4_ = fVar61;
                auVar11._0_4_ = fVar56;
                auVar11._8_4_ =
                     fVar55 * (float)local_138 +
                     fVar52 * local_148._4_4_ + fVar15 * (float)uStack_150 + auVar53._8_4_;
                auVar11._12_4_ =
                     fVar55 * local_138._4_4_ +
                     fVar52 * (float)uStack_140 + fVar15 * uStack_150._4_4_ + auVar53._12_4_;
                uVar32 = extractps(auVar11,2);
                *(undefined8 *)(lVar9 + 0x2c + lVar39) = uVar32;
              }
              uVar46 = uVar46 + 1;
              lVar48 = lVar48 + 0x30;
            } while ((cVar6 != '\0' || cVar7 != '\0') || bVar51);
            uVar37 = *(uint *)(plVar42 + 1);
          } while ((int)uVar37 <= iVar12);
          uVar45 = (ulonglong)iVar12;
          uVar41 = (uint)uVar34 & 0xfffffffc;
          if ((uVar34 & 0xfffffffc) == 0) {
            uVar34 = uVar45;
            do {
              if ((longlong)(int)uVar37 - 1U == uVar34) {
                auVar26._8_8_ = 0;
                auVar26._0_8_ = uStack_190;
                _local_198 = auVar26 << 0x40;
                uVar34 = 0;
                uVar45 = (ulonglong)uVar37;
                goto LAB_14067f5c6;
              }
              uVar45 = uVar34 + 1;
              uVar41 = *(uint *)(*plVar42 + 4 + uVar34 * 4) & 0x33333333;
              uVar34 = uVar45;
            } while (uVar41 == 0);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uStack_190;
            _local_198 = auVar25 << 0x40;
          }
          auVar23 = _local_198;
          uVar37 = 0;
          if (uVar41 != 0) {
            for (; (uVar41 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
            }
          }
          uVar34 = (ulonglong)(uVar41 >> ((byte)uVar37 & 0x1c));
          local_198._4_4_ = 0;
          local_198._0_4_ = (uVar37 >> 2) + local_198._0_4_;
          uStack_190 = auVar23._8_8_;
        } while( true );
      }
      fStack_180 = (float)local_138;
      local_188 = (undefined1  [8])uStack_140;
      fStack_17c = local_138._4_4_;
      auVar54._4_4_ = local_138._4_4_;
      auVar54._0_4_ = local_138._4_4_;
      auVar54._8_4_ = local_138._4_4_;
      auVar54._12_4_ = local_138._4_4_;
      auVar53 = insertps(auVar54,ZEXT416(uVar41),0x10);
      if ((cVar6 == '\0' && cVar7 == '\0') && !bVar51) {
        uVar41 = *(uint *)(param_1 + 9);
        uVar45 = (ulonglong)uVar41;
        iVar12 = (int)param_1[0xf];
        if ((int)param_1[0xe] < (int)param_1[0xf]) {
          iVar12 = (int)param_1[0xe];
        }
        iVar47 = iVar12 + 7;
        if (-1 < iVar12) {
          iVar47 = iVar12;
        }
        uVar44 = iVar47 >> 3;
        uVar43 = iVar12 % 8;
        local_178 = (ulonglong)uVar43;
        iVar47 = 0;
        uVar38 = 0;
        if ((int)uVar44 < (int)uVar41 && -8 < iVar12) {
          uVar38 = *(uint *)(*local_1a0 + (longlong)(int)uVar44 * 4) & 0x33333333;
        }
        uVar38 = uVar38 >> ((char)uVar43 * '\x04' & 0x1fU);
        uVar34 = (ulonglong)uVar38;
        plVar42 = local_1a0;
        if ((int)uVar44 < (int)uVar41) {
          uVar46 = (ulonglong)(int)uVar44;
          local_178._0_4_ = (float)uVar43;
          if (uVar38 == 0) {
            uVar34 = uVar46;
            do {
              if ((longlong)(int)uVar41 - 1U == uVar34) {
                iVar47 = 0;
                uVar34 = 0;
                goto LAB_14067ef07;
              }
              uVar46 = uVar34 + 1;
              uVar38 = *(uint *)(*local_1a0 + 4 + uVar34 * 4) & 0x33333333;
              uVar34 = uVar46;
            } while (uVar38 == 0);
            local_178._0_4_ = 0.0;
          }
          uVar41 = 0;
          if (uVar38 != 0) {
            for (; (uVar38 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
            }
          }
          uVar34 = (ulonglong)(uVar38 >> ((byte)uVar41 & 0x1c));
          uVar45 = uVar46 & 0xffffffff;
          local_178 = (ulonglong)((uVar41 >> 2) + (int)(float)local_178);
        }
        else {
          uVar45 = (ulonglong)uVar44;
        }
      }
      else {
        uVar45 = 0;
        plVar42 = (longlong *)0x0;
LAB_14067ef07:
        local_178 = 0;
      }
      _local_198 = insertps(auVar53,ZEXT416(uVar37),0x20);
      uVar46 = 0;
LAB_14067ef36:
      do {
        iVar12 = (int)uVar45;
        uVar41 = (int)local_178 + iVar12 * 8;
        do {
          lVar48 = uVar46 * 0x30 + 0x2c;
          do {
            if ((cVar6 == '\0' && cVar7 == '\0') && !bVar51) {
              iVar36 = *(int *)((longlong)plVar42 + 0x3c) + 1;
              if ((int)plVar42[6] < iVar36) {
                iVar36 = (int)plVar42[6];
              }
              if (iVar36 <= (int)uVar41) goto LAB_14067e943;
            }
            else if ((longlong)iVar47 <= (longlong)uVar46) goto LAB_14067e943;
            uVar45 = (ulonglong)uVar41;
            if ((cVar6 != '\0' || cVar7 != '\0') || bVar51) {
              uVar45 = uVar46 & 0xffffffff;
            }
            iVar36 = (int)uVar45;
            if (iVar36 < 0) {
              iVar40 = (int)param_2[1];
            }
            else {
              iVar40 = (int)param_2[1];
              if (iVar36 < (int)((longlong *)*param_2)[1]) {
                iVar36 = *(int *)(*(longlong *)*param_2 + uVar45 * 4);
              }
            }
            if ((iVar36 < iVar40) && (iVar36 != -1)) {
              lVar9 = param_1[0x18];
              pfVar8 = (float *)(lVar9 + -0x2c + lVar48);
              fVar52 = *pfVar8;
              fVar55 = pfVar8[1];
              fVar56 = pfVar8[2];
              local_128 = fVar56 * (float)uStack_140 +
                          fVar55 * uStack_150._4_4_ + fVar52 * (float)local_158;
              fStack_124 = fVar56 * uStack_140._4_4_ +
                           fVar55 * (float)local_148 + fVar52 * local_158._4_4_;
              fStack_120 = fVar56 * (float)local_138 +
                           fVar55 * local_148._4_4_ + fVar52 * (float)uStack_150;
              pfVar8 = (float *)(lVar9 + -0x20 + lVar48);
              fVar52 = *pfVar8;
              fVar55 = pfVar8[1];
              fVar56 = pfVar8[2];
              fStack_11c = fVar56 * (float)uStack_140 +
                           fVar55 * uStack_150._4_4_ + fVar52 * (float)local_158;
              local_118 = fVar56 * uStack_140._4_4_ +
                          fVar55 * (float)local_148 + fVar52 * local_158._4_4_;
              fStack_114 = fVar56 * (float)local_138 +
                           fVar55 * local_148._4_4_ + fVar52 * (float)uStack_150;
              pfVar8 = (float *)(lVar9 + -0x14 + lVar48);
              fVar52 = *pfVar8;
              fVar55 = pfVar8[1];
              fVar56 = pfVar8[2];
              fVar15 = pfVar8[3];
              fStack_110 = fVar56 * (float)uStack_140 +
                           fVar55 * uStack_150._4_4_ + fVar52 * (float)local_158;
              fStack_10c = fVar56 * uStack_140._4_4_ +
                           fVar55 * (float)local_148 + fVar52 * local_158._4_4_;
              fStack_108 = fVar56 * (float)local_138 +
                           fVar55 * local_148._4_4_ + fVar52 * (float)uStack_150;
              fVar52 = *(float *)(lVar9 + -4 + lVar48);
              fVar55 = *(float *)(lVar9 + lVar48);
              uStack_104 = CONCAT44(fVar55 * uStack_140._4_4_ +
                                    fVar52 * (float)local_148 +
                                    fVar15 * local_158._4_4_ + (float)local_198._4_4_,
                                    fVar55 * (float)uStack_140 +
                                    fVar52 * uStack_150._4_4_ +
                                    fVar15 * (float)local_158 + (float)local_198._0_4_);
              if ((((local_128 != 0.0) ||
                   (((NAN(local_128) || (fStack_124 != 0.0)) || (NAN(fStack_124))))) ||
                  ((fStack_120 != 0.0 || (NAN(fStack_120))))) &&
                 ((fStack_11c != 0.0 ||
                  (((NAN(fStack_11c) || (local_118 != 0.0)) ||
                   ((NAN(local_118) || ((fStack_114 != 0.0 || (NAN(fStack_114))))))))))) {
                fVar56 = fStack_120 * fStack_120 + local_128 * local_128 + fStack_124 * fStack_124;
                fVar61 = (fStack_114 * fStack_120 + fStack_11c * local_128 + fStack_124 * local_118)
                         / fVar56;
                fStack_11c = fStack_11c - fVar61 * local_128;
                local_118 = local_118 - fStack_124 * fVar61;
                fStack_114 = fStack_114 - fStack_120 * fVar61;
                fVar56 = (fStack_108 * fStack_120 + fStack_110 * local_128 + fStack_124 * fStack_10c
                         ) / fVar56;
                fStack_110 = fStack_110 - fVar56 * local_128;
                fStack_10c = fStack_10c - fStack_124 * fVar56;
                fStack_108 = fStack_108 - fStack_120 * fVar56;
                fVar56 = (fStack_108 * fStack_114 + fStack_110 * fStack_11c + local_118 * fStack_10c
                         ) / (fStack_114 * fStack_114 +
                             fStack_11c * fStack_11c + local_118 * local_118);
                fStack_110 = fStack_110 - fVar56 * fStack_11c;
                fStack_10c = fStack_10c - local_118 * fVar56;
                fStack_108 = fStack_108 - fStack_114 * fVar56;
              }
              lVar9 = *plVar33;
              lVar39 = (longlong)iVar36 * 0x30;
              puVar1 = (undefined8 *)(lVar9 + 0x1c + lVar39);
              *puVar1 = CONCAT44(fStack_108,fStack_10c);
              puVar1[1] = uStack_104;
              auVar21._4_4_ = fStack_124;
              auVar21._0_4_ = local_128;
              auVar21._8_4_ = fStack_120;
              auVar21._12_4_ = fStack_11c;
              auVar22._4_4_ = fStack_114;
              auVar22._0_4_ = local_118;
              auVar22._8_4_ = fStack_110;
              auVar22._12_4_ = fStack_10c;
              *(undefined1 (*) [16])(lVar9 + 0x10 + lVar39) = auVar22;
              *(undefined1 (*) [16])(lVar9 + lVar39) = auVar21;
              *(float *)(lVar9 + 0x2c + lVar39) =
                   fVar55 * (float)local_138 +
                   fVar52 * local_148._4_4_ + fVar15 * (float)uStack_150 + (float)uStack_190;
            }
            uVar46 = uVar46 + 1;
            lVar48 = lVar48 + 0x30;
          } while ((cVar6 != '\0' || cVar7 != '\0') || bVar51);
          uVar37 = *(uint *)(plVar42 + 1);
        } while ((int)uVar37 <= iVar12);
        uVar45 = (ulonglong)iVar12;
        uVar41 = (uint)uVar34 & 0xfffffffc;
        if ((uVar34 & 0xfffffffc) == 0) {
          uVar34 = uVar45;
          do {
            if ((longlong)(int)uVar37 - 1U == uVar34) {
              uVar34 = 0;
              uVar45 = (ulonglong)uVar37;
              local_178 = 0;
              goto LAB_14067ef36;
            }
            uVar45 = uVar34 + 1;
            uVar41 = *(uint *)(*plVar42 + 4 + uVar34 * 4) & 0x33333333;
            uVar34 = uVar45;
          } while (uVar41 == 0);
          local_178 = 0;
        }
        uVar37 = 0;
        if (uVar41 != 0) {
          for (; (uVar41 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
          }
        }
        uVar34 = (ulonglong)(uVar41 >> ((byte)uVar37 & 0x1c));
        local_178 = (ulonglong)((uVar37 >> 2) + (int)(float)local_178);
      } while( true );
    }
  }
LAB_14067e943:
  if ((*(byte *)(param_1 + 0x1e) & 2) == 0) {
    **(undefined4 **)(param_4 + 0x70) = 0;
    lVar48 = *(longlong *)(param_4 + 0x20);
    *(undefined4 *)(lVar48 + 8) = 0;
    if (*(int *)(lVar48 + 0xc) < 0) {
      FUN_14482f6fa(lVar48,0);
    }
  }
  else {
    lVar48 = param_1[0x15];
    **(int **)(param_4 + 0x70) = (int)lVar48;
    local_1b8 = **(undefined4 **)(param_4 + 0x70);
    local_1c0 = param_1 + 0x1a;
    if (((int)lVar48 == 0) || ((*(ushort *)(param_1 + 0x1e) & 2) == 0)) {
      local_128 = 1.4013e-45;
      fStack_124 = 0.0;
      fStack_120 = 0.0;
      fStack_11c = 0.0;
    }
    else {
      fStack_124 = *(float *)(param_1 + 0x36);
      fStack_120 = SUB84(local_1a0,0);
      fStack_11c = (float)((ulonglong)local_1a0 >> 0x20);
      if ((char)param_1[0x12] == '\0') {
        fVar52 = (float)((int)param_1[0x11] + (int)param_1[0x10]);
        local_128 = (float)CONCAT31(local_128._1_3_,fVar52 == fStack_124);
        if (fVar52 != fStack_124) {
          fStack_124 = fVar52;
        }
      }
      else {
        local_128 = (float)CONCAT31(local_128._1_3_,1);
      }
    }
    local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,*(undefined4 *)((longlong)param_1 + 0x1b4));
    FUN_14573339e(param_2,(*(ushort *)(param_1 + 0x1e) & 2) >> 1,&local_128,
                  *(undefined8 *)(param_4 + 0x20));
  }
  lVar48 = *(longlong *)(param_4 + 0x30);
  local_128 = *(float *)(param_1 + 0x1d);
  if ((*(byte *)(param_1 + 0x1e) & 0x10) == 0) {
    *(undefined4 *)(lVar48 + 8) = 0;
    if (*(int *)(lVar48 + 0xc) < 0) {
      FUN_14499148c(lVar48);
    }
  }
  else {
    local_1c8 = param_2;
    FUN_147b4f579(&local_128,lVar48,*(undefined4 *)((longlong)param_1 + 0x1b4),param_1 + 0x1c);
  }
  plVar33 = *(longlong **)(param_4 + 0x28);
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    *(undefined4 *)(plVar33 + 1) = 0;
    if (*(int *)((longlong)plVar33 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1e8);
    }
  }
  else {
    iVar47 = *(int *)((longlong)param_1 + 0x1b4);
    iVar12 = (int)plVar33[1];
    if (iVar12 < iVar47) {
      *(int *)(plVar33 + 1) = iVar47;
      if ((uint)(*(int *)((longlong)plVar33 + 0xc) - iVar12) < (uint)(iVar47 - iVar12)) {
        FUN_14475e4ac(plVar33);
      }
      memset((void *)((longlong)iVar12 * 4 + *plVar33),0,(longlong)(iVar47 - iVar12) << 2);
    }
    else {
      if (iVar47 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar47);
      }
      if (iVar47 < iVar12) {
        *(int *)(plVar33 + 1) = iVar47;
        FUN_1401fef06(plVar33);
      }
    }
    pcVar50 = (code *)*param_1;
    if (pcVar50 == (code *)0x0) goto LAB_14067eaf2;
    local_128 = 0.0;
    fStack_124 = 0.0;
    fStack_120 = 0.0;
    fStack_11c = 0.0;
    fVar52 = *(float *)((longlong)param_1 + 0x1b4);
    uVar34 = (ulonglong)(uint)fVar52;
    if ((int)fVar52 < 1) {
      if ((int)fVar52 < 0) goto LAB_14067eba4;
    }
    else {
      fStack_120 = fVar52;
      FUN_14475e4ac(&local_128);
      memset((void *)CONCAT44(fStack_124,local_128),0,uVar34 * 4);
      pcVar50 = (code *)*param_1;
    }
    plVar33 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar33 = (longlong *)param_1[2];
    }
    uVar32 = (**(code **)(*plVar33 + 8))();
    (*pcVar50)(uVar32,&local_128);
    fVar52 = fStack_120;
    uVar45 = (ulonglong)(uint)fStack_120;
    uVar41 = *(uint *)((longlong)param_1 + 0x1b4);
    uVar34 = (ulonglong)uVar41;
    plVar33 = *(longlong **)(param_4 + 0x28);
    iVar47 = (int)plVar33[1];
    if (iVar47 < (int)uVar41) {
      *(uint *)(plVar33 + 1) = uVar41;
      if ((uint)(*(int *)((longlong)plVar33 + 0xc) - iVar47) < uVar41 - iVar47) {
        FUN_14475e4ac(plVar33);
      }
    }
    else {
      if ((int)uVar41 < 0) {
LAB_14067eba4:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar34);
      }
      if ((int)uVar41 < iVar47) {
        *(uint *)(plVar33 + 1) = uVar41;
        FUN_1401fef06(plVar33);
      }
    }
    if (0 < (int)fVar52) {
      uVar34 = 0;
      do {
        if ((longlong)uVar34 < (longlong)(int)((longlong *)*param_2)[1]) {
          iVar47 = *(int *)(*(longlong *)*param_2 + uVar34 * 4);
          if ((iVar47 != -1) && (iVar47 < (int)param_2[1])) {
LAB_14067eac3:
            *(undefined4 *)(*plVar33 + (longlong)iVar47 * 4) =
                 *(undefined4 *)(CONCAT44(fStack_124,local_128) + uVar34 * 4);
          }
        }
        else if ((longlong)uVar34 < (longlong)(int)param_2[1]) {
          iVar47 = (int)uVar34;
          goto LAB_14067eac3;
        }
        uVar34 = uVar34 + 1;
      } while (uVar45 != uVar34);
    }
    if (CONCAT44(fStack_124,local_128) != 0) {
      FUN_1400020a8();
    }
  }
LAB_14067eaf2:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14067fad9 FUN_14067fad9 body=716 status=ok
// SIG undefined FUN_14067fad9(void)

void FUN_14067fad9(char *param_1,longlong *param_2,int param_3,longlong *param_4,longlong *param_5,
                  int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  size_t _Size;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint local_64;
  longlong *local_60;
  
  FUN_144a12820(param_2,param_3 * param_6,CONCAT71((uint7)(uint3)((uint)(param_3 * param_6) >> 8),1)
               );
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    lVar12 = (longlong)*(int *)(param_1 + 4);
    local_60 = (longlong *)0x0;
    uVar6 = 0;
LAB_14067fb28:
    iVar3 = 0;
  }
  else {
    local_60 = *(longlong **)(param_1 + 8);
    uVar5 = *(uint *)(local_60 + 1);
    iVar2 = (int)local_60[7];
    if ((int)local_60[6] < (int)local_60[7]) {
      iVar2 = (int)local_60[6];
    }
    iVar3 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    uVar10 = iVar3 >> 3;
    uVar6 = (ulonglong)uVar10;
    iVar3 = iVar2 % 8;
    local_64 = 0;
    if ((int)uVar10 < (int)uVar5 && -8 < iVar2) {
      local_64 = *(uint *)(*local_60 + (longlong)(int)uVar10 * 4) & 0x55555555;
    }
    local_64 = local_64 >> ((char)iVar3 * '\x04' & 0x1fU);
    if ((int)uVar10 < (int)uVar5) {
      if (local_64 == 0) {
        uVar11 = (longlong)(int)uVar10;
        do {
          if ((longlong)(int)uVar5 - 1U == uVar11) {
            lVar12 = 0;
            uVar6 = (ulonglong)uVar5;
            local_64 = 0;
            goto LAB_14067fb28;
          }
          uVar6 = uVar11 + 1;
          local_64 = *(uint *)(*local_60 + 4 + uVar11 * 4) & 0x55555555;
          uVar11 = uVar6;
        } while (local_64 == 0);
        iVar3 = 0;
      }
      uVar5 = 0;
      if (local_64 != 0) {
        for (; (local_64 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      local_64 = local_64 >> ((byte)uVar5 & 0x1c);
      iVar3 = (uVar5 >> 2) + iVar3;
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
    }
  }
  _Size = (longlong)param_6 * 4;
  uVar11 = 0;
LAB_14067fb42:
  do {
    iVar2 = (int)uVar6;
    do {
      lVar9 = _Size * uVar11;
      do {
        if (cVar1 == '\0') {
          uVar5 = iVar3 + iVar2 * 8;
          iVar8 = *(int *)((longlong)local_60 + 0x3c) + 1;
          if ((int)local_60[6] < iVar8) {
            iVar8 = (int)local_60[6];
          }
          if (iVar8 <= (int)uVar5) {
            return;
          }
        }
        else {
          uVar5 = iVar3 + iVar2 * 8;
          if (lVar12 <= (longlong)uVar11) {
            return;
          }
        }
        uVar6 = uVar11 & 0xffffffff;
        if (cVar1 == '\0') {
          uVar6 = (ulonglong)uVar5;
        }
        iVar8 = (int)uVar6;
        if (iVar8 < 0) {
          iVar4 = (int)param_5[1];
        }
        else {
          iVar4 = (int)param_5[1];
          if (iVar8 < (int)((longlong *)*param_5)[1]) {
            iVar8 = *(int *)(*(longlong *)*param_5 + uVar6 * 4);
          }
        }
        if ((iVar8 < iVar4) && (iVar8 != -1)) {
          memcpy((void *)((longlong)(iVar8 * param_6) * 4 + *param_2),(void *)(*param_4 + lVar9),
                 _Size);
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + _Size;
      } while (cVar1 != '\0');
      uVar5 = *(uint *)(local_60 + 1);
    } while ((int)uVar5 <= iVar2);
    uVar6 = (ulonglong)iVar2;
    local_64 = local_64 & 0xfffffffa;
    if (local_64 == 0) {
      uVar7 = uVar6;
      do {
        if ((longlong)(int)uVar5 - 1U == uVar7) {
          local_64 = 0;
          uVar6 = (ulonglong)uVar5;
          iVar3 = 0;
          goto LAB_14067fb42;
        }
        uVar6 = uVar7 + 1;
        local_64 = *(uint *)(*local_60 + 4 + uVar7 * 4) & 0x55555555;
        uVar7 = uVar6;
      } while (local_64 == 0);
      iVar3 = 0;
    }
    uVar5 = 0;
    if (local_64 != 0) {
      for (; (local_64 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    iVar3 = (uVar5 >> 2) + iVar3;
    local_64 = local_64 >> ((byte)uVar5 & 0x1c);
  } while( true );
}



// FUNCTION 14067fda6 FUN_14067fda6 body=87 status=ok
// SIG undefined FUN_14067fda6(void)

void FUN_14067fda6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x661) == '\x01') && (*param_2 != 0)) {
    lVar2 = FUN_140083894();
    if (0 < *(int *)(param_1 + 0x10)) {
      plVar1 = *(longlong **)(lVar2 + 0x30);
      iVar4 = 0;
      do {
        uVar3 = FUN_147d55070(*param_2,iVar4);
        (**(code **)(*plVar1 + 0x118))(plVar1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 14067fdfe FUN_14067fdfe body=466 status=ok
// SIG undefined FUN_14067fdfe(void)

void FUN_14067fdfe(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  
  FUN_14067ffd0(param_1 + 0x90);
  puVar1 = *(undefined8 **)(param_1 + 0x138);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x170);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  bVar3 = DAT_14c872bf0;
  if ((DAT_14c872bf0 == 0) && (*(undefined4 *)(param_1 + 0x1c0) = 0, *(int *)(param_1 + 0x1c4) != 0)
     ) {
    FUN_140397e0a(param_1 + 0x1b8,0);
    bVar3 = DAT_14c872bf0;
  }
  *(undefined1 *)(param_1 + 0x208) = 0;
  if (((bVar3 & 1) == 0) && (*(undefined4 *)(param_1 + 0x200) = 0, *(int *)(param_1 + 0x204) != 0))
  {
    FUN_140397e0a(param_1 + 0x1f8,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x30) = 0;
    bVar3 = DAT_14c872bf0;
    if ((DAT_14c872bf0 == 0) && (*(undefined4 *)(lVar2 + 0x28) = 0, *(int *)(lVar2 + 0x2c) != 0)) {
      FUN_140397e0a(lVar2 + 0x20,0);
      bVar3 = DAT_14c872bf0;
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    *(undefined1 *)(lVar2 + 0x70) = 0;
    if (((bVar3 & 1) == 0) && (*(undefined4 *)(lVar2 + 0x68) = 0, *(int *)(lVar2 + 0x6c) != 0)) {
      FUN_140397e0a(lVar2 + 0x60,0);
      bVar3 = DAT_14c872bf0;
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    *(undefined1 *)(lVar2 + 0xb0) = 0;
    if (((bVar3 & 1) == 0) && (*(undefined4 *)(lVar2 + 0xa8) = 0, *(int *)(lVar2 + 0xac) != 0)) {
      FUN_140397e0a(lVar2 + 0xa0,0);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) && (DAT_14c872bf0 == 0)) &&
     (*(undefined4 *)(lVar2 + 0x20) = 0, *(int *)(lVar2 + 0x24) != 0)) {
    FUN_140397e0a(lVar2 + 0x18,0);
    return;
  }
  return;
}



// FUNCTION 14067ffd0 FUN_14067ffd0 body=72 status=ok
// SIG undefined FUN_14067ffd0(void)

void FUN_14067ffd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 140680018 FUN_140680018 body=328 status=ok
// SIG undefined FUN_140680018(void)

ulonglong FUN_140680018(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  int *piVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  int local_50;
  undefined4 uStack_4c;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0x268) == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x28))();
    piVar6 = &local_78;
    FUN_140680162(uVar3,piVar6,&DAT_14cbcab00);
    if (local_58 == 1) {
      bVar7 = local_78 != 0;
      uVar2 = 1;
    }
    else {
      piVar4 = &local_50;
      FUN_1400b56fe(piVar4,&local_78,1);
      bVar7 = local_50 != 0;
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_38) {
          piVar4 = (int *)CONCAT44(uStack_4c,local_50);
        }
        (*pcVar1)(piVar4);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(CONCAT44(uStack_4c,local_50));
      }
      bVar7 = local_30 != 0 && bVar7;
      uVar2 = (uint)local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_60) {
        piVar6 = (int *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar1)(piVar6);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar7 * '\x02');
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140680162 FUN_140680162 body=192 status=ok
// SIG undefined FUN_140680162(void)

undefined8 * FUN_140680162(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  longlong lVar4;
  undefined8 *_Src;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0x10);
  if (*(undefined8 **)(param_1 + 0x910) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x910);
  }
  if ((longlong)*(int *)(param_1 + 0x918) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x918) * 0x48;
    do {
      if (puVar5[5] == *param_3) {
        if (puVar5 != (undefined8 *)0x0) {
          bVar1 = *(byte *)(puVar5 + 4);
          uVar2 = *(ushort *)(puVar5 + 3);
          *(ushort *)(param_2 + 3) = uVar2;
          _Dst = param_2;
          _Src = puVar5;
          if (0x18 < uVar2) {
            _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
            *param_2 = _Dst;
            _Src = (undefined8 *)*puVar5;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
          if (pcVar3 == (code *)0x0) {
            memcpy(_Dst,_Src,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
          }
          else {
            (*pcVar3)();
          }
          *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar5 + 4);
          return param_2;
        }
        break;
      }
      puVar5 = puVar5 + 9;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 140680230 FUN_140680230 body=764 status=ok
// SIG undefined FUN_140680230(void)

undefined8 FUN_140680230(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined7 uVar8;
  undefined4 extraout_var;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_90;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(char *)(param_1 + 0xaa) == '\x01') {
    if ((*(char *)(param_1 + 0xb0) == '\0') && (*(longlong *)(param_1 + 0x78) != 0)) {
      memset(&uStack_c0,0,0x88);
      local_c8 = 0x20002;
      plVar3 = *(longlong **)(param_1 + 0x58);
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
      local_b8 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar6);
      local_90 = 0;
      lVar7 = *(longlong *)(param_1 + 0x78) + 0x40;
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar7 = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))
                (*(longlong **)(param_1 + 0x58),lVar7,&local_c8);
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (((*(char *)(param_1 + 0xae) == '\x01') && (*(char *)(param_1 + 0xaa) == '\0')) &&
     (*(longlong *)(param_1 + 0x50) != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x58);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
    uVar6 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar6);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))
              (*(longlong **)(param_1 + 0x58),&local_c8,uVar6);
    lVar7 = DAT_14cc28e70;
    plVar3 = *(longlong **)(param_1 + 0x58);
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar10 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar10 = 1;
    }
    uVar6 = 4;
    if (*(int *)(lVar7 + uVar10 * 4) == 0) {
      uVar6 = 0x20;
    }
    (**(code **)(*plVar3 + 0x50))
              (plVar3,&local_f8,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),uVar6);
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))();
    if (lVar7 != 0) {
      local_128 = local_c8;
      uStack_120 = uStack_c0;
      local_118 = local_b8;
      uStack_110 = uStack_b0;
      local_108 = local_a8;
      uStack_100 = uStack_a0;
      local_158 = local_f8;
      uStack_154 = uStack_f4;
      uStack_150 = uStack_f0;
      uStack_14c = uStack_ec;
      local_148 = local_e8;
      uStack_144 = uStack_e4;
      uStack_140 = uStack_e0;
      uStack_13c = uStack_dc;
      local_138 = local_d8;
      uStack_134 = uStack_d4;
      uStack_130 = uStack_d0;
      uStack_12c = uStack_cc;
      local_168 = local_b8;
      local_160 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0xa8))();
    }
  }
  lVar7 = DAT_14cc28f00;
  uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar10 = (ulonglong)uVar2;
  if (((uVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar2 == 2)) {
    uVar11 = 0;
  }
  else if (uVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar10 = CONCAT44(extraout_var,DVar5);
    uVar11 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar11 = 1;
  }
  bVar9 = *(byte *)(param_1 + 0xae);
  if ((((bVar9 == 0) && (*(int *)(lVar7 + uVar11 * 4) != 0)) &&
      (*(char *)(param_1 + 0xa8) == '\x01')) &&
     ((*(char *)(param_1 + 0xaa) == '\x01' && (*(longlong *)(param_1 + 0x50) != 0)))) {
    *param_2 = 1;
    bVar9 = *(byte *)(param_1 + 0xae);
  }
  uVar8 = (undefined7)(uVar10 >> 8);
  uVar6 = CONCAT71(uVar8,1);
  if ((bVar9 & 1) != 0) {
    uVar6 = CONCAT71(uVar8,*(undefined1 *)(param_1 + 0xaa));
  }
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068053a FUN_14068053a body=2936 status=ok
// SIG undefined FUN_14068053a(void)

void FUN_14068053a(longlong *param_1)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined ***pppuVar22;
  uint *puVar23;
  uint uVar24;
  longlong lVar25;
  undefined ***pppuVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_1f8 [32];
  undefined1 **local_1d8;
  undefined1 *local_1c8;
  longlong *local_1c0;
  undefined **local_1b8 [3];
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_138 [16];
  undefined1 *local_b8 [2];
  undefined8 *local_a8;
  undefined **local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar16 = (longlong *)FUN_1413dd87e(&DAT_14caa9c28);
  plVar17 = (longlong *)FUN_1406cf856(param_1 + 0x134);
  FUN_140491ce0(plVar16,(int)plVar17[1],1);
  if (0 < (int)plVar17[1]) {
    lVar18 = 0x30;
    lVar25 = 0x20;
    lVar27 = 0;
    do {
      lVar4 = *plVar17;
      pfVar2 = (float *)(lVar4 + -0x20 + lVar25);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar32 = pfVar2[2];
      fVar8 = pfVar2[3];
      fVar33 = fVar6 + fVar6;
      fVar34 = fVar7 + fVar7;
      fVar35 = fVar32 + fVar32;
      pfVar2 = (float *)(lVar4 + lVar25);
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar37 = fVar8 * (fVar8 + fVar8);
      auVar38._0_4_ = (1.0 - (fVar32 * fVar35 + fVar7 * fVar34)) * fVar9;
      auVar38._4_4_ = (1.0 - (fVar32 * fVar35 + fVar6 * fVar33)) * fVar10;
      auVar38._8_4_ = (1.0 - (fVar7 * fVar34 + fVar6 * fVar33)) * fVar11;
      auVar38._12_4_ = (0.0 - (fVar37 + fVar37)) * pfVar2[3];
      fVar32 = (fVar34 * fVar6 + fVar35 * fVar8) * fVar9;
      fVar37 = (fVar35 * fVar6 + fVar34 * fVar8) * fVar11;
      auVar31._4_4_ = (fVar35 * fVar7 + fVar33 * fVar8) * fVar10;
      auVar31._0_4_ = fVar32;
      auVar31._8_4_ = fVar37;
      auVar31._12_4_ = (fVar33 * fVar6 + fVar33 * fVar8) * pfVar2[3];
      auVar39 = blendps(auVar38,ZEXT816(0),8);
      auVar36 = insertps(auVar31,auVar31,0x4c);
      auVar31 = insertps(*(undefined1 (*) [16])(lVar4 + -0x10 + lVar25),0x3f800000,0x30);
      lVar4 = *plVar16;
      auVar5._4_4_ = fVar32;
      auVar5._0_4_ = auVar38._0_4_;
      auVar5._8_4_ = (fVar35 * fVar6 - fVar34 * fVar8) * fVar9;
      auVar5._12_4_ = 0;
      *(undefined1 (*) [16])(lVar4 + -0x30 + lVar18) = auVar5;
      pfVar2 = (float *)(lVar4 + -0x20 + lVar18);
      *pfVar2 = (fVar34 * fVar6 - fVar35 * fVar8) * fVar10;
      pfVar2[1] = auVar38._4_4_;
      pfVar2[2] = auVar36._0_4_;
      pfVar2[3] = auVar36._8_4_;
      pfVar2 = (float *)(lVar4 + -0x10 + lVar18);
      *pfVar2 = fVar37;
      pfVar2[1] = (fVar35 * fVar7 - fVar33 * fVar8) * fVar11;
      pfVar2[2] = auVar39._8_4_;
      pfVar2[3] = auVar39._12_4_;
      *(undefined1 (*) [16])(lVar4 + lVar18) = auVar31;
      lVar27 = lVar27 + 1;
      lVar18 = lVar18 + 0x40;
      lVar25 = lVar25 + 0x30;
    } while (lVar27 < (int)plVar17[1]);
  }
  lVar18 = param_1[0xb5];
  if (plVar16 == (longlong *)0x0 || lVar18 == 0) goto LAB_140680c9f;
  if ((*(byte *)(lVar18 + 0x74) & 8) == 0) {
    lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar13 = *(int *)(lVar25 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar13 == 2) goto LAB_1406806fd;
      if (iVar13 != 1) goto LAB_1406806f4;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_1406806fd;
    }
    else {
LAB_1406806f4:
      if (iVar13 == 0x10) goto LAB_1406806fd;
    }
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar25 + 0xc60), iVar13 == 2)) {
LAB_1406806fd:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_1f8);
      }
      if (iVar13 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        if (DVar14 == DVar15) goto LAB_1406806fd;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar21 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar23 = (uint *)*puVar21;
      if (puVar23 != (uint *)0x0) goto LAB_140680926;
      while( true ) {
        uVar24 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar24 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar24 | 1;
          __tlregdtor(&LAB_14327baaa);
        }
        lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar19 = *(undefined4 **)(lVar25 + 0x310);
        *(undefined8 *)(lVar25 + 0x310) = 0;
        if (puVar19 == (undefined4 *)0x0) {
          puVar19 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar19 = 0xffffffff;
        *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar21 = puVar19;
        FUN_140217a48(puVar21);
        puVar23 = (uint *)*puVar21;
LAB_140680926:
        puVar30 = (undefined8 *)(*(longlong *)(puVar23 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar28 = (uint *)(puVar30 + 0x17);
        uVar24 = puVar23[0x12];
        if (puVar28 <= puVar23 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar23 + 0x10) = puVar23 + 0x4000;
          LOCK();
          uVar3 = *puVar23;
          *puVar23 = *puVar23 + uVar24 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar24) != 0xffffffff) break;
          puVar23 = (uint *)*puVar21;
          *puVar23 = 0xffffffff;
          *(uint **)(puVar23 + 0x10) = puVar23 + 0x16;
          puVar23[0x12] = 0;
          *puVar21 = puVar23;
          puVar30 = (undefined8 *)((longlong)puVar23 + 0x5fU & 0xfffffffffffffff8);
          puVar28 = (uint *)(puVar30 + 0x17);
          uVar24 = 0;
          if (puVar28 <= puVar23 + 0x4000) {
            uVar24 = 1;
            goto LAB_1406809a6;
          }
        }
      }
      uVar24 = uVar24 + 1;
LAB_1406809a6:
      *(uint **)(puVar23 + 0x10) = puVar28;
      puVar23[0x12] = uVar24;
      iVar13 = 0;
      FUN_1447247dc(puVar30,0);
      *puVar30 = &PTR_FUN_14a40dbf0;
      puVar30[0x15] = lVar18;
      puVar30[0x16] = plVar16;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar24 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
          uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
          iVar13 = 0;
        }
        else {
          uVar29 = 2;
        }
      }
      else {
        iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar29 = 5;
      }
      if (*(code **)(puVar30[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar30[0xe] + 0x18))(puVar30 + 0xe,puVar30 + 9);
      }
      puVar30[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar30[9] = puVar30;
      puVar30[10] = puVar30;
      lVar18 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar18 == 0) {
        uVar12 = 1;
        if ((char)uVar29 != '\x06') {
          uVar12 = uVar29;
        }
        uVar29 = uVar12;
        uVar20 = 0;
      }
      else {
        if ((char)uVar29 == '\x06') {
          uVar29 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
        }
        uVar20 = *(undefined8 *)(lVar18 + 0x30);
      }
      puVar30[0xf] = uVar20;
      puVar30[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar30 + 0x1c) = iVar13;
      if (puVar30 == (undefined8 *)0x0) {
        local_1c8 = (undefined1 *)CONCAT71(local_1c8._1_7_,1);
LAB_140680ff8:
        FUN_1447439e4(0);
        goto LAB_140680c9f;
      }
      LOCK();
      *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
      UNLOCK();
      local_1c8 = (undefined1 *)CONCAT71(local_1c8._1_7_,1);
      FUN_1447439e4(puVar30);
      LOCK();
      piVar1 = (int *)(puVar30 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_140680c9f;
      puVar21 = (undefined8 *)*puVar30;
LAB_140680fa8:
      (*(code *)*puVar21)(puVar30,1);
      goto LAB_140680c9f;
    }
    local_1d8 = &local_1c8;
    local_1b8[0] = (undefined **)0x0;
    local_1b8[2] = &PTR_LAB_14a40dbd0;
    local_1c8 = &LAB_14327d9d2;
    local_1a0 = lVar18;
    local_198 = plVar16;
    FUN_14005a792(&DAT_14ca9a440,L"SendRenderDynamicData",&DAT_14caa9878);
    if (local_1c8 == (undefined1 *)0x0) goto LAB_140680c9f;
    pppuVar22 = local_1b8 + 2;
LAB_140680c8e:
    pppuVar26 = (undefined ***)pppuVar22[-2];
    if ((undefined ***)pppuVar22[-2] == (undefined ***)0x0) {
      pppuVar26 = pppuVar22;
    }
    (*(code *)(*pppuVar26)[2])();
  }
  else {
    (**(code **)(*param_1 + 0x7a8))(param_1,local_138);
    local_1c8 = (undefined1 *)param_1[0xb5];
    puVar21 = local_138;
    pppuVar22 = local_1b8;
    for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pppuVar22 = (undefined **)*puVar21;
      puVar21 = puVar21 + 1;
      pppuVar22 = pppuVar22 + 1;
    }
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar13 = *(int *)(lVar18 + 0xc60);
    local_1c0 = plVar16;
    if (DAT_14c86a9fc == 0) {
      if (iVar13 != 2) {
        if (iVar13 != 1) goto LAB_1406807ac;
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        if (DVar14 == DVar15) goto LAB_1406807bb;
        goto LAB_140680bc2;
      }
    }
    else {
LAB_1406807ac:
      if (iVar13 != 0x10) {
LAB_140680bc2:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar18 + 0xc60), iVar13 == 2))
          goto LAB_1406807bb;
          if (iVar13 == 1) {
            DVar14 = FUN_140ad26c0();
            DVar15 = GetCurrentThreadId();
            if (DVar14 == DVar15) goto LAB_1406807bb;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar21 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar23 = (uint *)*puVar21;
          if (puVar23 != (uint *)0x0) goto LAB_140680d88;
          while( true ) {
            uVar24 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar24 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar24 | 1;
              __tlregdtor(&LAB_14327baaa);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar19 = *(undefined4 **)(lVar18 + 0x310);
            *(undefined8 *)(lVar18 + 0x310) = 0;
            if (puVar19 == (undefined4 *)0x0) {
              puVar19 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar19 = 0xffffffff;
            *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
            puVar19[0x12] = 0;
            *puVar21 = puVar19;
            FUN_140217a48(puVar21);
            puVar23 = (uint *)*puVar21;
LAB_140680d88:
            puVar30 = (undefined8 *)(*(longlong *)(puVar23 + 0x10) + 0xfU & 0xfffffffffffffff0);
            puVar28 = (uint *)(puVar30 + 0x28);
            uVar24 = puVar23[0x12];
            if (puVar28 <= puVar23 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar23 + 0x10) = puVar23 + 0x4000;
              LOCK();
              uVar3 = *puVar23;
              *puVar23 = *puVar23 + uVar24 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar24) != 0xffffffff) break;
              puVar23 = (uint *)*puVar21;
              *puVar23 = 0xffffffff;
              *(uint **)(puVar23 + 0x10) = puVar23 + 0x16;
              puVar23[0x12] = 0;
              *puVar21 = puVar23;
              puVar30 = (undefined8 *)((longlong)puVar23 + 0x67U & 0xfffffffffffffff0);
              puVar28 = (uint *)(puVar30 + 0x28);
              uVar24 = 0;
              if (puVar28 <= puVar23 + 0x4000) {
                uVar24 = 1;
                goto LAB_140680e08;
              }
            }
          }
          uVar24 = uVar24 + 1;
LAB_140680e08:
          *(uint **)(puVar23 + 0x10) = puVar28;
          puVar23[0x12] = uVar24;
          iVar13 = 0;
          FUN_1447247dc(puVar30,0);
          *puVar30 = &PTR_FUN_14a40dbc0;
          memcpy(puVar30 + 0x16,&local_1c8,0x90);
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar24 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
              uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
              iVar13 = 0;
            }
            else {
              uVar29 = 2;
            }
          }
          else {
            iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar29 = 5;
          }
          if (*(code **)(puVar30[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar30[0xe] + 0x18))(puVar30 + 0xe,puVar30 + 9);
          }
          puVar30[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar30[9] = puVar30;
          puVar30[10] = puVar30;
          lVar18 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar18 == 0) {
            uVar12 = 1;
            if ((char)uVar29 != '\x06') {
              uVar12 = uVar29;
            }
            uVar29 = uVar12;
            uVar20 = 0;
          }
          else {
            if ((char)uVar29 == '\x06') {
              uVar29 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
            }
            uVar20 = *(undefined8 *)(lVar18 + 0x30);
          }
          puVar30[0xf] = uVar20;
          puVar30[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar30 + 0x1c) = iVar13;
          if (puVar30 == (undefined8 *)0x0) {
            local_b8[0] = (undefined1 *)CONCAT71(local_b8[0]._1_7_,1);
            goto LAB_140680ff8;
          }
          LOCK();
          *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
          UNLOCK();
          local_b8[0] = (undefined1 *)CONCAT71(local_b8[0]._1_7_,1);
          FUN_1447439e4(puVar30);
          LOCK();
          piVar1 = (int *)(puVar30 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_140680c9f;
          puVar21 = (undefined8 *)*puVar30;
          goto LAB_140680fa8;
        }
        local_b8[0] = (undefined1 *)0x0;
        puVar21 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
        *puVar21 = &PTR_LAB_14a40db70;
        local_a8 = puVar21;
        memcpy(puVar21 + 2,&local_1c8,0x90);
        if (puVar21 != (undefined8 *)&DAT_fffffffffffffff0) {
          local_b8[0] = &LAB_14327d7e4;
        }
        local_1d8 = local_b8;
        FUN_14005a792(&DAT_14ca9a440,L"SendRenderDynamicData",&DAT_14caa9874);
        if (local_b8[0] == (undefined1 *)0x0) goto LAB_140680c9f;
        pppuVar22 = local_98;
        goto LAB_140680c8e;
      }
    }
LAB_1406807bb:
    FUN_144910c5a(local_1c8,local_1c0,local_1b8);
  }
LAB_140680c9f:
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406810f0 FUN_1406810f0 body=122 status=ok
// SIG undefined FUN_1406810f0(void)

void FUN_1406810f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140681172 FUN_140681172 body=57 status=ok
// SIG undefined FUN_140681172(void)

void FUN_140681172(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar1 = (longlong *)0x0;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  FUN_1406811ac(param_1 + 0x3f0);
  return;
}



// FUNCTION 1406811ac FUN_1406811ac body=158 status=ok
// SIG undefined FUN_1406811ac(void)

void FUN_1406811ac(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 0x1c) != 0 || *(int *)(param_1 + 0x18) != 0) ||
      *(int *)(param_1 + 0x20) != 0) || *(int *)(param_1 + 0x24) != 0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
    if (lVar1 != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      FUN_140681484(lVar1 + 0x178,uVar2);
      lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
      if (lVar1 != 0) {
        FUN_14068181a(lVar1);
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}



// FUNCTION 14068124a FUN_14068124a body=43 status=ok
// SIG undefined FUN_14068124a(void)

undefined8 FUN_14068124a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 != 0) {
    uVar2 = FUN_1406812f0(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140681276 FUN_140681276 body=56 status=ok
// SIG undefined FUN_140681276(void)

undefined8 FUN_140681276(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  lVar2 = FUN_1447210f0(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_1447210f0(uVar1);
    uVar1 = FUN_14019257c(uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1406812b6 FUN_1406812b6 body=54 status=ok
// SIG undefined FUN_1406812b6(void)

void FUN_1406812b6(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if (lVar2 != 0) {
      FUN_1406816b6(lVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1406812f0 FUN_1406812f0 body=132 status=ok
// SIG undefined FUN_1406812f0(void)

undefined8 FUN_1406812f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  cVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar2 != '\0') {
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    iVar3 = FUN_140681374((longlong *)(param_1 + 0x128),
                          (int)((ulonglong)*puVar4 >> 0x20) * 0x17 + (int)*puVar4,puVar4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x128);
      if (lVar1 + (longlong)iVar3 * 0x40 == 0) {
        return 0;
      }
      plVar5 = (longlong *)(lVar1 + (longlong)iVar3 * 0x40 + 0x30);
      if (plVar5 == (longlong *)0x0) {
        return 0;
      }
      return *(undefined8 *)(*plVar5 + 0x178);
    }
  }
  return 0;
}



// FUNCTION 140681374 FUN_140681374 body=272 status=ok
// SIG undefined FUN_140681374(void)

int FUN_140681374(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
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
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
LAB_1406813b9:
      lVar10 = (longlong)iVar2 * 0x40;
      if ((((*(longlong *)(lVar4 + lVar10) == *param_3) &&
           (lVar1 = lVar4 + lVar10, *(int *)(lVar1 + 8) == (int)param_3[1])) &&
          (*(int *)(lVar1 + 0xc) == *(int *)((longlong)param_3 + 0xc))) &&
         (((*(int *)(lVar1 + 0x10) == (int)param_3[2] &&
           (*(int *)(lVar1 + 0x14) == *(int *)((longlong)param_3 + 0x14))) &&
          (*(longlong *)(lVar1 + 0x18) == param_3[3])))) {
        iVar3 = (int)param_3[5];
        if (*(int *)(lVar1 + 0x28) == iVar3) {
          if (iVar3 < 2) {
            return iVar2;
          }
          lVar6 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(lVar1 + 0x20) + lVar6);
            uVar9 = (ulonglong)uVar8;
            uVar7 = *(ushort *)(param_3[4] + lVar6);
            if (uVar8 == uVar7) {
              if (uVar8 == 0) {
                return iVar2;
              }
            }
            else {
              if (0x7f < (uVar7 | uVar8)) goto LAB_14068145e;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14068145e;
            }
            lVar6 = lVar6 + 2;
          } while( true );
        }
        if (iVar3 + *(int *)(lVar1 + 0x28) == 1) {
          return iVar2;
        }
      }
      goto LAB_1406813c6;
    }
  }
  return -1;
LAB_14068145e:
  if (uVar8 == uVar7) {
    return iVar2;
  }
LAB_1406813c6:
  iVar2 = *(int *)(lVar4 + 0x38 + lVar10);
  if (iVar2 == -1) {
    return -1;
  }
  goto LAB_1406813b9;
}



// FUNCTION 140681484 FUN_140681484 body=448 status=ok
// SIG undefined FUN_140681484(void)

undefined8 FUN_140681484(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar4 = *param_2;
  plVar8 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[8];
  }
  iVar7 = *(int *)((longlong)plVar8 +
                  ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                  (longlong)(int)param_1[9] - 1U) * 4);
  if (iVar7 == -1) {
    return 0;
  }
  lVar5 = *param_1;
LAB_140681508:
  lVar9 = (longlong)iVar7 * 0x40;
  lVar1 = lVar5 + lVar9;
  if ((((*(longlong *)(lVar5 + lVar9) == lVar4) && (*(int *)(lVar1 + 8) == (int)param_2[1])) &&
      (*(int *)(lVar1 + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
     (((*(int *)(lVar1 + 0x10) == (int)param_2[2] &&
       (*(int *)(lVar1 + 0x14) == *(int *)((longlong)param_2 + 0x14))) &&
      (*(longlong *)(lVar1 + 0x18) == param_2[3])))) {
    iVar11 = (int)param_2[5];
    if (*(int *)(lVar1 + 0x28) == iVar11) {
      if (1 < iVar11) {
        lVar10 = 0;
        do {
          uVar2 = *(ushort *)(*(longlong *)(lVar1 + 0x20) + lVar10);
          uVar3 = *(ushort *)(param_2[4] + lVar10);
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) {
              iVar11 = (uint)uVar2 - (uint)uVar3;
              goto LAB_1406815c5;
            }
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto code_r0x0001406815c2;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      goto LAB_1406815ce;
    }
    if (iVar11 + *(int *)(lVar1 + 0x28) == 1) goto LAB_1406815ce;
  }
  goto LAB_140681519;
code_r0x0001406815c2:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1406815c5:
  if (iVar11 == 0) {
LAB_1406815ce:
    iVar11 = *(int *)((longlong)plVar8 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
    if (iVar11 == iVar7) {
      piVar6 = (int *)((longlong)plVar8 + (longlong)*(int *)(lVar1 + 0x3c) * 4);
    }
    else {
      do {
        piVar6 = (int *)(lVar5 + (longlong)iVar11 * 0x40 + 0x38);
        iVar11 = *piVar6;
      } while (iVar11 != iVar7);
    }
    *piVar6 = *(int *)(lVar1 + 0x38);
    if (*(longlong *)(*param_1 + 0x20 + lVar9) != 0) {
      FUN_1400020a8();
    }
    FUN_140681644(param_1,iVar7);
    return 1;
  }
LAB_140681519:
  iVar7 = *(int *)(lVar1 + 0x38);
  if (iVar7 == -1) {
    return 0;
  }
  goto LAB_140681508;
}



// FUNCTION 140681644 FUN_140681644 body=114 status=ok
// SIG undefined FUN_140681644(void)

void FUN_140681644(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1406816b6 FUN_1406816b6 body=194 status=ok
// SIG undefined FUN_1406816b6(void)

void FUN_1406816b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
  iVar1 = FUN_140681374(param_1 + 0x128,(int)((ulonglong)*puVar2 >> 0x20) * 0x17 + (int)*puVar2,
                        puVar2);
  if ((iVar1 != -1) ||
     (iVar1 = FUN_140a10c5a(param_1 + 0xd8,(int)((ulonglong)*puVar2 >> 0x20) * 0x17 + (int)*puVar2,
                            puVar2), iVar1 != -1)) {
    FUN_14068195a(param_1 + 0x88,local_24,puVar2,0);
  }
  FUN_14068177a(param_1 + 0x38,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14068177a FUN_14068177a body=160 status=ok
// SIG undefined FUN_14068177a(void)

undefined8 FUN_14068177a(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147b9bb16(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14068181a FUN_14068181a body=319 status=ok
// SIG undefined FUN_14068181a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14068181a(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
  iVar3 = DAT_14cb10cf4;
  iVar2 = DAT_14cb10cc8;
  _DAT_14cb10d40 = 0;
  _DAT_14cb10d48 = 0;
  _DAT_14cb10d50 = 0;
  _DAT_14cb10d58 = 0;
  _DAT_14cb10d60 = 0;
  _DAT_14cb10d68 = 0;
  DAT_14cb10d70._0_1_ = 1;
  DAT_14cb10d70._1_2_ = 0;
  DAT_14cb10d70._3_1_ = 0;
  iVar6 = DAT_14cb10cc8;
  DAT_14cb10d38 = param_1;
  if (DAT_14cb10cc8 != DAT_14cb10cf4) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cb10cf8;
    if (DAT_14cb10d00 != (undefined *)0x0) {
      puVar5 = DAT_14cb10d00;
    }
    for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar4 >> 0x10 ^ uVar4) &
                                   (longlong)DAT_14cb10d08 - 1U) * 4); iVar6 = DAT_14cb10cf4,
        iVar1 != -1; iVar1 = *(int *)(DAT_14cb10cc0 + (longlong)iVar1 * 0x48 + 0x40)) {
      if (*(ulonglong *)(DAT_14cb10cc0 + (longlong)iVar1 * 0x48) == param_1) {
        FUN_140cadc3c(&DAT_14cb10cc0);
        iVar6 = DAT_14cb10cf4;
        break;
      }
    }
  }
  iVar1 = DAT_14cb10cc8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
  if ((iVar3 < iVar2) && (iVar1 == iVar6)) {
    FUN_140f93338(&DAT_14c9647b8,&DAT_14cb10cb8);
    return;
  }
  return;
}



// FUNCTION 14068195a FUN_14068195a body=1542 status=ok
// SIG undefined FUN_14068195a(void)

void FUN_14068195a(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  void *_Src;
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
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  byte bVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  longlong *plVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar33 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar33 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar33) {
      FUN_1447030e2(param_1,iVar33);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar16 = iVar17 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar27 = param_1 + 2;
    iVar23 = iVar17 + 1;
    iVar25 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar25 = iVar17;
    }
    if (iVar25 >> 5 == iVar16) {
      *(int *)(param_1 + 5) = iVar23;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar23 = 0x80;
          iVar16 = iVar17;
        }
        else {
          uVar30 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar31 = 4;
            if (4 < uVar30) {
              uVar31 = uVar30;
            }
          }
          else {
            uVar31 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
          }
          uVar21 = FUN_144a3809e(uVar31 << 2,0);
          iVar16 = (int)(uVar21 >> 2);
          iVar23 = -0x20;
          if ((int)uVar30 <= iVar16) {
            iVar23 = iVar16 << 5;
          }
          iVar16 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar23;
        FUN_1446efbd8(plVar27,iVar16);
        iVar23 = (int)param_1[5] + 1;
      }
      iVar16 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar16 = iVar23;
      }
      *(int *)(param_1 + 5) = iVar23;
      if (iVar23 % 0x20 != 0) {
        plVar28 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar28 = plVar27;
        }
        bVar22 = -(char)(iVar23 % 0x20);
        *(uint *)((longlong)plVar28 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar28 + (longlong)(iVar16 >> 5) * 4) << (bVar22 & 0x1f)) >>
             (bVar22 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar33;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[4];
    }
    bVar22 = (byte)iVar17 & 0x1f;
    puVar3 = (uint *)((longlong)plVar27 + (longlong)(iVar25 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
  }
  else {
    iVar33 = (int)param_1[6];
    lVar19 = (longlong)iVar33;
    iVar17 = *(int *)(*param_1 + 4 + lVar19 * 0x38);
    *(int *)(param_1 + 6) = iVar17;
    iVar16 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x38) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 2);
  puVar24 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar24 = puVar3;
  }
  iVar17 = iVar33 + 0x1f;
  if (-1 < iVar33) {
    iVar17 = iVar33;
  }
  puVar24[iVar17 >> 5] = puVar24[iVar17 >> 5] | 1 << ((byte)iVar33 & 0x1f);
  lVar32 = *param_1;
  lVar19 = lVar19 * 0x38;
  puVar1 = (undefined8 *)(lVar32 + lVar19);
  uVar20 = *param_3;
  *(undefined8 *)(lVar32 + lVar19) = uVar20;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined4 *)(param_3 + 2);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar2 = (undefined4 *)(lVar32 + 8 + lVar19);
  *puVar2 = *(undefined4 *)(param_3 + 1);
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined8 *)(lVar32 + 0x18 + lVar19) = param_3[3];
  *(undefined8 *)(lVar32 + 0x20 + lVar19) = 0;
  iVar17 = *(int *)(param_3 + 5);
  _Src = (void *)param_3[4];
  *(int *)(lVar32 + 0x28 + lVar19) = iVar17;
  if ((longlong)iVar17 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(lVar32 + lVar19 + 0x20,iVar17,0);
    memcpy((void *)puVar1[4],_Src,(longlong)iVar17 * 2);
    uVar20 = *puVar1;
  }
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  uVar30 = (int)((ulonglong)uVar20 >> 0x20) * 0x17 + (int)uVar20;
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) ||
     (iVar17 = FUN_140a10c5a(param_1,uVar30,puVar1), iVar17 == -1)) {
    cVar15 = '\0';
    iVar17 = iVar33;
  }
  else {
    puVar2 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x38);
    if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar17 * 0x38) != 0) {
      FUN_1400020a8();
    }
    uVar4 = *(undefined4 *)puVar1;
    uVar5 = *(undefined4 *)((longlong)puVar1 + 4);
    uVar6 = *(undefined4 *)(puVar1 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar1 + 0xc);
    uVar8 = *(undefined4 *)(puVar1 + 2);
    uVar9 = *(undefined4 *)((longlong)puVar1 + 0x14);
    uVar10 = *(undefined4 *)(puVar1 + 3);
    uVar11 = *(undefined4 *)((longlong)puVar1 + 0x1c);
    uVar12 = *(undefined4 *)((longlong)puVar1 + 0x24);
    uVar13 = *(undefined4 *)(puVar1 + 5);
    uVar14 = *(undefined4 *)((longlong)puVar1 + 0x2c);
    puVar2[8] = *(undefined4 *)(puVar1 + 4);
    puVar2[9] = uVar12;
    puVar2[10] = uVar13;
    puVar2[0xb] = uVar14;
    puVar2[4] = uVar8;
    puVar2[5] = uVar9;
    puVar2[6] = uVar10;
    puVar2[7] = uVar11;
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    FUN_140a10f00(param_1,iVar33);
    cVar15 = '\x01';
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar15;
  }
  if (cVar15 != '\0') goto LAB_140681b4e;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar31 = 1;
  if (3 < uVar18) {
    uVar21 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar31 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar31 <= (int)param_1[9])) {
    uVar30 = (int)param_1[9] - 1U & uVar30;
    *(uint *)((longlong)puVar1 + 0x34) = uVar30;
    plVar27 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar27 = param_1 + 7;
    }
    *(undefined4 *)(puVar1 + 6) =
         *(undefined4 *)
          ((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar30) * 4);
    plVar27 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar27 = param_1 + 7;
    }
    *(int *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar30) * 4) =
         iVar17;
    goto LAB_140681b4e;
  }
  *(uint *)(param_1 + 9) = uVar31;
  plVar27 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar27,0,0,4);
    uVar31 = *(uint *)(param_1 + 9);
  }
  plVar28 = param_1 + 7;
  if (uVar31 == 1) {
    if (*plVar27 != 0) {
      FUN_1446efa72(plVar27,0,0,4);
    }
LAB_140681bc2:
    uVar30 = 0;
    do {
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar28;
      }
      *(undefined4 *)((longlong)plVar27 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar30) * 4) =
           0xffffffff;
      uVar30 = uVar30 + 1;
    } while (uVar31 != uVar30);
  }
  else {
    if (uVar31 == 0) goto LAB_140681b4e;
    FUN_1446efa72(plVar27,0,uVar31,4);
    if (0 < (int)uVar31) goto LAB_140681bc2;
  }
  iVar33 = (int)param_1[5];
  if (iVar33 == 0) {
    uVar21 = 0;
    uVar29 = 1;
    iVar16 = 0;
    iVar23 = 0;
  }
  else {
    puVar24 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar24 = puVar3;
    }
    uVar30 = *puVar24;
    if (uVar30 == 0) {
      iVar16 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar16 = iVar33 + -1;
      }
      uVar21 = 0;
      uVar29 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar29 = uVar21;
      }
      iVar23 = 0;
      do {
        if (uVar29 == uVar21) goto LAB_140681b4e;
        iVar23 = iVar23 + 0x20;
        uVar30 = puVar24[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar21 = 0;
      iVar23 = 0;
    }
    uVar29 = (ulonglong)(-uVar30 & uVar30);
    uVar34 = uVar29 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar16 = (iVar23 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar16) {
      iVar16 = iVar33;
    }
  }
  if (iVar16 < iVar33) {
    uVar30 = 0xffffffff;
    do {
      lVar19 = *param_1;
      lVar32 = (longlong)iVar16 * 0x38;
      uVar34 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar19 + lVar32) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar19 + lVar32)) & (longlong)(int)param_1[9] - 1U;
      iVar33 = (int)uVar34;
      *(int *)(lVar19 + 0x34 + lVar32) = iVar33;
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar28;
      }
      *(undefined4 *)(lVar19 + 0x30 + lVar32) =
           *(undefined4 *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & uVar34) * 4);
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar28;
      }
      *(int *)((longlong)plVar27 + ((longlong)iVar33 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16
      ;
      uVar30 = ~(uint)uVar29 & uVar30;
      puVar24 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar24 = puVar3;
      }
      iVar33 = (int)param_1[5];
      iVar16 = (int)uVar21;
      lVar19 = (longlong)iVar16;
      uVar31 = puVar24[lVar19] & uVar30;
      if (uVar31 == 0) {
        iVar25 = iVar33 + 0x1e;
        if (-1 < iVar33 + -1) {
          iVar25 = iVar33 + -1;
        }
        iVar25 = iVar25 >> 5;
        iVar26 = iVar25;
        if (iVar25 < iVar16) {
          iVar26 = iVar16;
        }
        if (iVar25 <= iVar16) break;
        lVar32 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar31 = puVar24[lVar19 + lVar32 + 1];
          if (uVar31 != 0) break;
          lVar32 = lVar32 + 1;
          if (iVar26 - lVar19 == lVar32) goto LAB_140681b4e;
        }
        uVar21 = (ulonglong)(iVar16 + (int)lVar32 + 1);
        uVar30 = 0xffffffff;
      }
      uVar29 = (ulonglong)(-uVar31 & uVar31);
      uVar34 = uVar29 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar16 = (iVar23 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar33);
  }
LAB_140681b4e:
  *param_2 = iVar17;
  return;
}



// FUNCTION 140681f7e FUN_140681f7e body=73 status=ok
// SIG undefined FUN_140681f7e(void)

void FUN_140681f7e(longlong param_1)

{
  char cVar1;
  
  if ((((0 < *(int *)(param_1 + 0x28)) && (0 < *(int *)(param_1 + 0xc0))) &&
      (*(longlong *)(param_1 + 0x30) != 0)) && (*(int *)(param_1 + 0x98) == 0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar1 != '\0') {
      LOCK();
      *(undefined4 *)(param_1 + 0x98) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140681fc8 FUN_140681fc8 body=261 status=ok
// SIG undefined FUN_140681fc8(void)

void FUN_140681fc8(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 == '\x02') {
    lVar4 = 0x38;
    lVar5 = 0x20;
    lVar6 = 0x2c;
    lVar2 = 0x14;
  }
  else {
    if (param_3 != '\x01') {
      return;
    }
    lVar4 = 0x68;
    lVar5 = 0x50;
    lVar6 = 0x5c;
    lVar2 = 0x44;
  }
  uVar1 = *(undefined4 *)(param_1 + lVar2);
  uVar3 = FUN_1406820ce();
  (**(code **)(*param_2 + 8))(param_2,uVar3,5,uVar1,0,0);
  uVar1 = *(undefined4 *)(param_1 + lVar6);
  uVar3 = FUN_140682380();
  (**(code **)(*param_2 + 8))(param_2,uVar3,5,uVar1,0,0);
  uVar1 = *(undefined4 *)(param_1 + lVar5);
  uVar3 = FUN_1406821b4();
  (**(code **)(*param_2 + 8))(param_2,uVar3,5,uVar1,0,0);
  uVar1 = *(undefined4 *)(param_1 + lVar4);
  uVar3 = FUN_14068229a();
  (**(code **)(*param_2 + 8))(param_2,uVar3,5,uVar1,0,0);
  return;
}



// FUNCTION 1406820ce FUN_1406820ce body=228 status=ok
// SIG undefined FUN_1406820ce(void)

longlong FUN_1406820ce(void)

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
  if (DAT_14cb66740 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650fd22;
    local_38 = &LAB_148728683;
    local_40 = &LAB_14585a723;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierType_Chance",&DAT_14cb66740,
                  &DAT_148728682);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66740;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406821b4 FUN_1406821b4 body=228 status=ok
// SIG undefined FUN_1406821b4(void)

longlong FUN_1406821b4(void)

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
  if (DAT_14cb66758 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650fd22;
    local_38 = &LAB_148728687;
    local_40 = &LAB_145aa5b71;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierType_Charge",&DAT_14cb66758,
                  &DAT_148728686);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66758;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068229a FUN_14068229a body=228 status=ok
// SIG undefined FUN_14068229a(void)

longlong FUN_14068229a(void)

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
  if (DAT_14cb66770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650fd22;
    local_38 = &LAB_14872868b;
    local_40 = &LAB_145aa5bae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierType_Duration",&DAT_14cb66770,
                  &DAT_14872868a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140682380 FUN_140682380 body=228 status=ok
// SIG undefined FUN_140682380(void)

longlong FUN_140682380(void)

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
  if (DAT_14cb66788 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650fd22;
    local_38 = &LAB_14872868f;
    local_40 = &LAB_145aa5bea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierType_DPS",&DAT_14cb66788,
                  &DAT_14872868e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66788;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140682465 FUN_140682465 body=2242 status=ok
// SIG undefined FUN_140682465(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140682465(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8 [12];
  undefined1 local_158 [16];
  double *local_148;
  double *pdStack_140;
  double *local_138;
  undefined8 *puStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  pdVar5 = param_6;
  pdVar4 = param_5;
  auVar30 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 0x30,local_158,param_2);
    local_1f0 = pdVar5;
    local_1f8 = pdVar4;
    cVar6 = FUN_140682465(*(undefined8 *)(param_1 + 0x20),local_158,param_3,param_4);
    goto LAB_1406828cb;
  }
  local_158 = ZEXT816(0);
  local_148 = (double *)0x0;
  pdStack_140 = (double *)&DAT_3ff0000000000000;
  local_138 = (double *)0x0;
  puStack_130 = (undefined8 *)0x0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = _DAT_149934d80;
  local_108._0_16_ = ZEXT816(0x3ff0000000000000);
  dVar17 = param_2[2] * param_2[2] + *param_2 * *param_2;
  dVar21 = param_2[3] * param_2[3] + param_2[1] * param_2[1];
  auVar16._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar17 + dVar21)));
  auVar16._0_8_ =
       -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar17 + dVar21)));
  iVar7 = movmskpd((int)(DAT_14c707940 ^ (ulonglong)auStack_218),auVar16);
  if (iVar7 == 0) {
    auVar16 = minpd(*(undefined1 (*) [16])(param_4 + 8),*(undefined1 (*) [16])(param_2 + 8));
    auVar19 = minpd(*(undefined1 (*) [16])(param_4 + 10),*(undefined1 (*) [16])(param_2 + 10));
    auVar33._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar7 = movmskpd(0,auVar33);
    auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    uVar8 = movmskpd((int)param_1,auVar20);
    if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
      {
        DAT_14c8460a0 = 0x322bcc77322bcc77;
        DAT_14c8460a8 = 0x322bcc77322bcc77;
        _Init_thread_footer(&DAT_14c8460b0);
      }
      auVar16 = *(undefined1 (*) [16])(param_2 + 8);
      auVar33 = divpd(auVar30,auVar16);
      auVar30 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      dVar18 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar16._0_8_)) &
                       auVar33._0_8_);
      dVar22 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar16._8_8_)) &
                       auVar33._8_8_);
      dVar12 = (double)(-(ulonglong)
                         ((double)(float)DAT_14c8460a8 <
                         ABS(SUB168(*(undefined1 (*) [16])(param_2 + 10),0))) & auVar30._0_8_);
      dVar27 = param_4[4] - param_2[4];
      dVar28 = param_4[5] - param_2[5];
      dVar32 = param_4[6] - param_2[6];
      dVar29 = -*param_2;
      dVar31 = -param_2[1];
      dVar23 = param_2[2] * -1.0;
      dVar25 = param_2[3] * 1.0;
      dVar13 = dVar28 * dVar29 - dVar27 * dVar31;
      dVar15 = dVar32 * dVar31 - dVar28 * dVar23;
      dVar34 = dVar27 * dVar23 - dVar32 * dVar29;
      dVar35 = dVar25 * 0.0 - dVar25 * 0.0;
      dVar15 = dVar15 + dVar15;
      dVar34 = dVar34 + dVar34;
      dVar13 = dVar13 + dVar13;
      dVar35 = dVar35 + dVar35;
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar14 = param_4[2];
      dVar26 = param_4[3];
      dVar21 = param_2[1];
      dVar17 = param_2[1];
      dVar24 = dVar2 * dVar23 * 1.0 +
               ((dVar3 * dVar25 - *param_2 * dVar14 * -1.0) - dVar26 * dVar17);
      local_118._8_8_ = param_4[9] * dVar22;
      local_118._0_8_ = param_4[8] * dVar18;
      local_108._8_8_ = param_4[0xb] * 0.0;
      local_108._0_8_ = param_4[10] * dVar12;
      local_138 = (double *)
                  (((dVar13 * dVar31 - dVar23 * dVar34) + dVar25 * dVar15 + dVar27) * dVar18);
      puStack_130 = (undefined8 *)
                    (((dVar15 * dVar23 - dVar13 * dVar29) + dVar25 * dVar34 + dVar28) * dVar22);
      local_128 = ((dVar34 * dVar29 - dVar31 * dVar15) + dVar25 * dVar13 + dVar32) * dVar12;
      dStack_120 = ((dVar35 * dVar25 - dVar35 * dVar25) + dVar25 * dVar35 + 0.0) * 0.0;
      local_158._8_4_ = SUB84(dVar24,0);
      local_158._0_8_ =
           dVar3 * dVar23 * -1.0 + ((dVar2 * dVar25 - *param_2 * dVar26 * 1.0) - dVar14 * dVar21);
      local_158._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_148 = (double *)
                  (dVar26 * dVar23 * 1.0 +
                  dVar21 * dVar2 + (dVar25 * dVar14 - *param_2 * dVar3 * 1.0));
      pdStack_140 = (double *)
                    (dVar14 * dVar23 * -1.0 +
                    dVar17 * dVar3 + (dVar25 * dVar26 - *param_2 * dVar2 * -1.0));
    }
    else {
      FUN_1402db8fa(local_158,param_4,param_2);
    }
    puVar10 = (undefined8 *)local_158;
  }
  else {
    puVar10 = &DAT_14c846480;
  }
  puVar11 = local_1b8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_1c0 = param_2[6] - param_4[6];
    local_1d0 = param_2[4] - param_4[4];
    dStack_1c8 = param_2[5] - param_4[5];
    if (pdVar5 == (double *)0x0) {
      local_158._8_8_ = &param_5;
      local_158._0_8_ = param_3;
      local_148 = &local_1d0;
      cVar6 = FUN_140682d28(param_1,local_1b8);
    }
    else {
      local_158._8_8_ = &param_6;
      local_158._0_8_ = param_3;
      local_148 = (double *)&param_5;
      pdStack_140 = &local_1d0;
      local_138 = param_2;
      cVar6 = FUN_140683e18(param_1,local_1b8);
    }
    goto LAB_1406828cb;
  }
  switch(bVar1) {
  case 5:
  case 0xf:
    local_1d0 = (double)((ulonglong)local_1d0 & 0xffffffffffffff00);
    local_1d8 = local_158;
    local_158._8_8_ = param_2;
    local_158._0_8_ = &local_1d0;
    local_138 = pdVar4;
    puStack_130 = &param_6;
    local_1e0 = &LAB_146cc566a;
    local_148 = param_3;
    pdStack_140 = param_4;
    FUN_146db006e(param_1);
    cVar6 = local_1d0._0_1_;
    goto LAB_1406828cb;
  case 6:
    local_1f8 = pdVar5;
    cVar6 = FUN_146dd765e(param_1,param_3,local_1b8,pdVar4);
    break;
  default:
    if (-1 < (char)bVar1) {
      if (bVar1 < 0x40) {
        cVar6 = '\0';
        goto LAB_1406828cb;
      }
      param_1 = *(longlong *)(param_1 + 0x28);
      goto LAB_140682c09;
    }
    local_1f8 = pdVar5;
    cVar6 = FUN_140684050(param_1,param_3,local_1b8,pdVar4);
    break;
  case 0xb:
LAB_140682c09:
    local_158._8_8_ = 0x3ff0000000000000;
    local_158._0_8_ = 0x3ff0000000000000;
    local_1f0 = (double *)local_158;
    local_1f8 = pdVar5;
    local_148 = (double *)&DAT_3ff0000000000000;
    cVar6 = FUN_1406880c2(param_1,param_3,local_1b8,pdVar4);
    break;
  case 0xc:
    local_1f8 = pdVar5;
    cVar6 = FUN_140684758(param_1,param_3,local_1b8,pdVar4);
  }
  if (cVar6 == '\x01' && param_6 != (double *)0x0) {
    dVar13 = *param_6;
    dVar35 = param_6[1];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar14 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar24 = dVar35 * dVar2 - dVar13 * dVar3;
    dVar26 = param_6[2] * dVar3 - dVar35 * dVar14;
    dVar12 = dVar13 * dVar14 - dVar2 * param_6[2];
    dVar26 = dVar26 + dVar26;
    dVar12 = dVar12 + dVar12;
    dVar24 = dVar24 + dVar24;
    *param_6 = (dVar24 * dVar3 - dVar12 * dVar14) + dVar21 * dVar26 + dVar13;
    param_6[1] = (dVar14 * dVar26 - dVar2 * dVar24) + dVar17 * dVar12 + dVar35;
    param_6[2] = dVar24 * dVar21 + param_6[2] + (dVar12 * dVar2 - dVar26 * dVar3);
    dVar26 = param_6[3] * param_2[8];
    dVar12 = param_6[4] * param_2[9];
    dVar14 = param_6[5] * param_2[10];
    dVar35 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar15 = dVar12 * dVar35 - dVar26 * dVar2;
    dVar34 = dVar14 * dVar2 - dVar12 * dVar3;
    dVar18 = dVar26 * dVar3 - dVar35 * dVar14;
    dVar34 = dVar34 + dVar34;
    dVar18 = dVar18 + dVar18;
    dVar15 = dVar15 + dVar15;
    dVar13 = param_2[5];
    dVar24 = param_2[6];
    param_6[3] = (dVar15 * dVar2 - dVar18 * dVar3) + dVar21 * dVar34 + dVar26 + param_2[4];
    param_6[4] = (dVar3 * dVar34 - dVar35 * dVar15) + dVar17 * dVar18 + dVar12 + dVar13;
    param_6[5] = dVar15 * dVar21 + dVar14 + (dVar18 * dVar35 - dVar34 * dVar2) + dVar24;
    cVar6 = '\x01';
  }
LAB_1406828cb:
  if ((local_f0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return cVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140682d28 FUN_140682d28 body=1151 status=ok
// SIG undefined FUN_140682d28(void)

void FUN_140682d28(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  double *local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140683bb3(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 1:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140683244(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_140682d6b_caseD_2;
  case 3:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140683679(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,&local_88,param_2);
    FUN_140682d28(*(undefined8 *)(param_1 + 0x20),&local_88,param_3);
    break;
  case 8:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    uVar3 = *param_3;
    uVar4 = *(undefined8 *)param_3[1];
LAB_140682f5e:
    local_98 = &local_88;
    FUN_140683967(param_1,uVar3,param_2,uVar4);
    break;
  default:
    switch(uVar1) {
    case 0x80:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x81:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x82:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      goto switchD_140682d6b_caseD_2;
    case 0x83:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x88:
      pdVar2 = (double *)param_3[2];
      if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
        local_88 = 1.0;
        dStack_80 = 0.0;
        local_78 = 0.0;
      }
      else {
        local_78 = pdVar2[2];
        local_88 = *pdVar2;
        dStack_80 = pdVar2[1];
      }
      local_98 = &local_88;
      FUN_14068345d(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
      goto LAB_140682dd8;
    default:
      switch(uVar1) {
      case 0x40:
      default:
switchD_140682d6b_caseD_2:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x41:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x43:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x48:
        param_1 = *(longlong *)(param_1 + 0x28);
        pdVar2 = (double *)param_3[2];
        if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
          local_88 = 1.0;
          dStack_80 = 0.0;
          local_78 = 0.0;
        }
        else {
          local_78 = pdVar2[2];
          local_88 = *pdVar2;
          dStack_80 = pdVar2[1];
        }
        uVar3 = *param_3;
        uVar4 = *(undefined8 *)param_3[1];
      }
    }
    goto LAB_140682f5e;
  }
LAB_140682dd8:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140683244 FUN_140683244 body=536 status=ok
// SIG undefined FUN_140683244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140683244(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar6 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar7 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar6 <= dVar7 || dVar6 <= dVar9) && (dVar6 = dVar9, dVar9 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar11 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if ((dVar7 <= dVar9 || dVar7 <= dVar11) && (dVar7 = dVar9, dVar9 <= dVar11)) {
    dVar7 = dVar11;
  }
  local_78 = (float)dVar1;
  local_70 = &LAB_144a386ca;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_144857b9e;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  local_74 = local_78;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14068345d FUN_14068345d body=539 status=ok
// SIG undefined FUN_14068345d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14068345d(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar6 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar7 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar6 <= dVar7 || dVar6 <= dVar9) && (dVar6 = dVar9, dVar9 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar11 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar9 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar11) && (dVar7 = dVar9, dVar9 <= dVar11)) {
    dVar7 = dVar11;
  }
  local_78 = (float)dVar1;
  local_70 = &LAB_144a386ca;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_144a12d46;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  local_74 = local_78;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140683679 FUN_140683679 body=749 status=ok
// SIG undefined FUN_140683679(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140683679(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  float local_dc;
  undefined1 *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar12 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar13 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar15 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar12 <= dVar13 || dVar12 <= dVar15) && (dVar12 = dVar15, dVar15 <= dVar13)) {
    dVar12 = dVar13;
  }
  dVar13 = *(double *)(param_1 + 0x10);
  dVar15 = *(double *)(param_1 + 0x20);
  dVar17 = *(double *)(param_1 + 0x28);
  dVar20 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x50);
  dVar3 = *(double *)(param_1 + 0x48) * dVar2 + dVar20;
  dVar4 = *(double *)(param_1 + 0x40) * dVar2 + dVar17;
  dVar2 = dVar2 * *(double *)(param_1 + 0x38) + dVar15;
  dVar5 = dVar20;
  if (dVar3 <= dVar20) {
    dVar5 = dVar3;
  }
  dVar6 = dVar17;
  if (dVar4 <= dVar17) {
    dVar6 = dVar4;
  }
  dVar7 = dVar15;
  if (dVar2 <= dVar15) {
    dVar7 = dVar2;
  }
  if (dVar20 <= dVar3) {
    dVar20 = dVar3;
  }
  if (dVar17 <= dVar4) {
    dVar17 = dVar4;
  }
  if (dVar15 <= dVar2) {
    dVar15 = dVar2;
  }
  dVar15 = (dVar15 + dVar13) - (dVar7 - dVar13);
  dVar20 = (dVar20 + dVar13) - (dVar5 - dVar13);
  dVar17 = (dVar17 + dVar13) - (dVar6 - dVar13);
  if ((dVar15 <= dVar17 || dVar15 <= dVar20) && (dVar15 = dVar17, dVar17 <= dVar20)) {
    dVar15 = dVar20;
  }
  local_c8 = (float)dVar1;
  local_c0 = &LAB_144a386ca;
  local_e0 = (float)dVar13;
  local_d8 = &LAB_144a386e2;
  fVar8 = (float)param_3[2];
  fVar10 = (float)param_3[3];
  fVar14 = (float)*param_3;
  fVar16 = (float)param_3[1];
  local_a8._0_4_ = (float)param_3[4];
  local_a8._4_4_ = (float)param_3[5];
  local_a8._8_4_ = (float)param_3[6];
  local_a8._12_4_ = 0;
  fVar9 = fVar14 * fVar14 + fVar16 * fVar16;
  fVar11 = fVar8 * fVar8 + fVar10 * fVar10;
  auVar18._0_4_ = fVar11 + fVar9;
  auVar18._4_4_ = fVar11 + fVar9;
  auVar18._8_4_ = fVar9 + fVar11;
  auVar18._12_4_ = fVar9 + fVar11;
  auVar19 = sqrtps(auVar18,auVar18);
  auVar19 = divps(_DAT_1499314a0,auVar19);
  auVar21._0_4_ = auVar19._0_4_ * fVar14;
  auVar21._4_4_ = auVar19._4_4_ * fVar16;
  auVar21._8_4_ = auVar19._8_4_ * fVar8;
  auVar21._12_4_ = auVar19._12_4_ * fVar10;
  auVar19._4_4_ = -(uint)(1e-08 <= auVar18._4_4_);
  auVar19._0_4_ = -(uint)(1e-08 <= auVar18._0_4_);
  auVar19._8_4_ = -(uint)(1e-08 <= auVar18._8_4_);
  auVar19._12_4_ = -(uint)(1e-08 <= auVar18._12_4_);
  local_98 = blendvps(_DAT_149932320,auVar21,auVar19);
  local_108 = local_98;
  if (dVar15 <= dVar12) {
    dVar15 = dVar12;
  }
  local_f8 = local_b8;
  local_b8._4_4_ = (float)param_5[1];
  local_b8._0_4_ = (float)*param_5;
  local_b8._8_4_ = (float)param_5[2];
  local_b8._12_4_ = 0;
  local_100 = param_4;
  local_e8 = param_1;
  local_dc = local_e0;
  local_d0 = param_2;
  local_c4 = local_c8;
  FUN_144946907(&local_e8,&local_d0,dVar15);
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140683967 FUN_140683967 body=587 status=ok
// SIG undefined FUN_140683967(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140683967(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_a8;
  float local_a0;
  undefined4 local_9c;
  code *local_98;
  longlong local_90;
  float local_88;
  float local_84;
  undefined1 *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar6 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar7 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar6 <= dVar9 || dVar6 <= dVar7) && (dVar6 = dVar9, dVar9 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar7 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar9 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar11 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar7 <= dVar11 || dVar7 <= dVar9) && (dVar7 = dVar11, dVar11 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_88 = (float)dVar1;
  local_80 = &LAB_144a386ca;
  local_a0 = (float)*(double *)(param_1 + 0x10);
  local_9c = 0;
  local_98 = FUN_14172546a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_c8 = local_58;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_b8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_c0 = param_4;
  local_a8 = param_1;
  local_90 = param_2;
  local_84 = local_88;
  FUN_144946907(&local_a8,&local_90,dVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140683bb3 FUN_140683bb3 body=612 status=ok
// SIG undefined FUN_140683bb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140683bb3(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  longlong local_b8;
  float local_b0;
  float local_ac;
  undefined1 *local_a8;
  longlong local_a0;
  float local_98;
  float local_94;
  undefined1 *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar6 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar7 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar6 <= dVar7 || dVar6 <= dVar9) && (dVar6 = dVar9, dVar9 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar7 = *(double *)(param_1 + 0x10);
  dVar9 = (dVar7 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar7);
  dVar11 = (dVar7 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar7);
  dVar14 = (dVar7 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar7);
  if ((dVar9 <= dVar14 || dVar9 <= dVar11) && (dVar9 = dVar14, dVar14 <= dVar11)) {
    dVar9 = dVar11;
  }
  local_98 = (float)dVar1;
  local_90 = &LAB_144a386ca;
  local_b0 = (float)dVar7;
  local_a8 = &LAB_144a386ca;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_78._0_4_ = (float)param_3[4];
  local_78._4_4_ = (float)param_3[5];
  local_78._8_4_ = (float)param_3[6];
  local_78._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar15._0_4_ = auVar13._0_4_ * fVar8;
  auVar15._4_4_ = auVar13._4_4_ * fVar10;
  auVar15._8_4_ = auVar13._8_4_ * fVar2;
  auVar15._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_68 = blendvps(_DAT_149932320,auVar15,auVar13);
  local_d8 = local_68;
  if (dVar9 <= dVar6) {
    dVar9 = dVar6;
  }
  local_c8 = local_88;
  local_88._4_4_ = (float)param_5[1];
  local_88._0_4_ = (float)*param_5;
  local_88._8_4_ = (float)param_5[2];
  local_88._12_4_ = 0;
  local_d0 = param_4;
  local_b8 = param_1;
  local_ac = local_b0;
  local_a0 = param_2;
  local_94 = local_98;
  FUN_144946907(&local_b8,&local_a0,dVar9);
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140683e18 FUN_140683e18 body=370 status=ok
// SIG undefined FUN_140683e18(void)

void FUN_140683e18(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_140683e57_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_140683e57_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_140683e57_caseD_2;
  case 3:
switchD_140683e57_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_140683e18(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_140683e57_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x80:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    case 0x81:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    case 0x82:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      break;
    case 0x83:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    case 0x88:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    default:
      switch(uVar1) {
      case 0x40:
        goto switchD_140683e57_caseD_0;
      case 0x41:
        goto switchD_140683e57_caseD_1;
      case 0x43:
        goto switchD_140683e57_caseD_3;
      case 0x48:
        goto switchD_140683e57_caseD_8;
      }
    }
switchD_140683e57_caseD_2:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_140688ae8(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 140684050 FUN_140684050 body=283 status=ok
// SIG undefined FUN_140684050(void)

undefined4
FUN_140684050(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1406841ac(local_d0,param_2,param_1 + 0x38,0);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_140686708(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_14068416c(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068416c FUN_14068416c body=63 status=ok
// SIG undefined FUN_14068416c(void)

undefined4 FUN_14068416c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 1406841ac FUN_1406841ac body=216 status=ok
// SIG undefined FUN_1406841ac(void)

undefined8 *
FUN_1406841ac(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar1;
  *(byte *)((longlong)param_1 + 0x1d) = bVar1;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4ba90;
  param_1[0x11] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
    if (*(int *)(param_2 + 8) == 1) {
      LOCK();
      *(undefined4 *)(param_2 + 0xc) = 1;
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = param_4;
  FUN_140684284(param_1,param_3);
  return param_1;
}



// FUNCTION 140684284 FUN_140684284 body=128 status=ok
// SIG undefined FUN_140684284(void)

void FUN_140684284(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 4;
  do {
    dVar1 = *(double *)(param_2 + -0x20 + lVar2 * 8);
    uVar3 = -(ulonglong)(ABS(dVar1) < 9.999999974752427e-07);
    dVar1 = (double)(uVar3 & 0x3eb0c6f7a0000000 | ~uVar3 & (ulonglong)dVar1);
    *(double *)(param_1 + lVar2 * 8) = dVar1;
    *(double *)(param_1 + 0x18 + lVar2 * 8) = 1.0 / dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  *(double *)(param_1 + 0x10) =
       *(double *)(param_1 + 0x20) * *(double *)(*(longlong *)(param_1 + 0x88) + 0x10) +
       *(double *)(param_1 + 0x50);
  FUN_140684304();
  return;
}



// FUNCTION 140684304 FUN_140684304 body=216 status=ok
// SIG undefined FUN_140684304(void)

void FUN_140684304(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  dVar1 = *(double *)(lVar2 + 0x10);
  dVar5 = (*(double *)(lVar2 + 0x30) - dVar1) * *(double *)(param_1 + 0x30);
  dVar7 = (*(double *)(lVar2 + 0x28) - dVar1) * *(double *)(param_1 + 0x28);
  dVar6 = (*(double *)(lVar2 + 0x20) - dVar1) * *(double *)(param_1 + 0x20);
  dVar8 = (dVar1 + *(double *)(lVar2 + 0x30)) * *(double *)(param_1 + 0x30);
  dVar9 = (dVar1 + *(double *)(lVar2 + 0x28)) * *(double *)(param_1 + 0x28);
  dVar10 = (dVar1 + *(double *)(lVar2 + 0x20)) * *(double *)(param_1 + 0x20);
  dVar1 = dVar5;
  if (dVar8 <= dVar5) {
    dVar1 = dVar8;
  }
  dVar3 = dVar7;
  if (dVar9 <= dVar7) {
    dVar3 = dVar9;
  }
  dVar4 = dVar6;
  if (dVar10 <= dVar6) {
    dVar4 = dVar10;
  }
  *(double *)(param_1 + 0x58) = dVar4;
  *(double *)(param_1 + 0x60) = dVar3;
  *(double *)(param_1 + 0x68) = dVar1;
  if (dVar5 <= dVar8) {
    dVar5 = dVar8;
  }
  if (dVar7 <= dVar9) {
    dVar7 = dVar9;
  }
  if (dVar6 <= dVar10) {
    dVar6 = dVar10;
  }
  *(double *)(param_1 + 0x70) = dVar6;
  *(double *)(param_1 + 0x78) = dVar7;
  *(double *)(param_1 + 0x80) = dVar5;
  return;
}



// FUNCTION 1406843dc FUN_1406843dc body=891 status=ok
// SIG undefined FUN_1406843dc(void)

void FUN_1406843dc(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140684758 FUN_140684758 body=3127 status=ok
// SIG undefined FUN_140684758(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140684758(longlong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  double dVar20;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  double dVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  double *local_2d0;
  undefined8 local_2c8;
  int *local_2c0;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [16];
  double local_288;
  double local_280 [4];
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  int *local_228;
  undefined8 uStack_220;
  double local_218 [3];
  double local_200 [6];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  longlong local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  dVar1 = *(double *)(param_2 + 0x10);
  local_218[0] = (*(double *)(param_2 + 0x20) - dVar1) - param_4;
  local_218[1] = (*(double *)(param_2 + 0x28) - dVar1) - param_4;
  local_218[2] = (*(double *)(param_2 + 0x30) - dVar1) - param_4;
  local_200[0] = dVar1 + *(double *)(param_2 + 0x20) + param_4;
  local_200[1] = dVar1 + *(double *)(param_2 + 0x28) + param_4;
  local_200[2] = dVar1 + *(double *)(param_2 + 0x30) + param_4;
  FUN_1400c6592(local_218,&local_138);
  local_218[2] = local_128;
  local_218[0] = local_138;
  local_218[1] = uStack_130;
  local_200[2] = uStack_110;
  local_200[0] = uStack_120;
  local_200[1] = uStack_118;
  fVar37 = (float)local_128;
  local_228 = (int *)0x0;
  uStack_220 = 0;
  fVar43 = (float)local_138;
  fVar44 = (float)uStack_130;
  fVar30 = (float)uStack_110;
  fVar45 = (float)uStack_120;
  fVar46 = (float)uStack_118;
  local_248._4_4_ = fVar44;
  local_248._0_4_ = fVar43;
  local_248._8_4_ = fVar37;
  local_248._12_4_ = 0;
  local_238._4_4_ = fVar46;
  local_238._0_4_ = fVar45;
  local_238._8_4_ = fVar30;
  local_238._12_4_ = 0;
  local_280[3] = local_138;
  dStack_260 = uStack_130;
  local_258 = uStack_120;
  dStack_250 = uStack_118;
  cVar8 = FUN_144947e24(param_1);
  if (cVar8 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar17 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_220 != 0) {
        local_2b8 = (undefined1  [8])(param_5 + 3);
        local_2c0 = local_228 + (longlong)(int)uStack_220 * 2;
        uVar17 = 0;
        piVar16 = local_228;
        do {
          uVar3 = *(ushort *)(param_1 + 0x92);
          uVar14 = (uint)uVar3;
          iVar11 = piVar16[1] * uVar14 + *piVar16;
          lVar13 = *(longlong *)(param_1 + 0x20);
          lVar12 = (longlong)iVar11;
          dVar1 = *(double *)(param_1 + 0x80);
          dVar32 = *(double *)(param_1 + 0xa0);
          dVar42 = (double)*(ushort *)(lVar13 + lVar12 * 2) * dVar32 + dVar1;
          dVar20 = (double)*(ushort *)(lVar13 + 2 + lVar12 * 2) * dVar32 + dVar1;
          dVar31 = (double)*(ushort *)(lVar13 + ((ulonglong)uVar3 + lVar12) * 2) * dVar32 + dVar1;
          dVar1 = (double)*(ushort *)(lVar13 + 2 + ((ulonglong)uVar3 + lVar12) * 2) * dVar32 + dVar1
          ;
          dVar32 = dVar31;
          if (dVar1 <= dVar31) {
            dVar32 = dVar1;
          }
          dVar2 = dVar20;
          if (dVar32 <= dVar20) {
            dVar2 = dVar32;
          }
          local_280[2] = dVar42;
          if (dVar2 <= dVar42) {
            local_280[2] = dVar2;
          }
          dVar32 = dVar31;
          if (dVar31 <= dVar1) {
            dVar32 = dVar1;
          }
          dVar2 = dVar20;
          if (dVar20 <= dVar32) {
            dVar2 = dVar32;
          }
          dVar32 = dVar42;
          if (dVar42 <= dVar2) {
            dVar32 = dVar2;
          }
          dVar5 = *(double *)(param_1 + 0x50) * (double)(iVar11 % (int)uVar14);
          dVar49 = *(double *)(param_1 + 0x58) * (double)(iVar11 / (int)uVar14);
          dVar2 = *(double *)(param_1 + 0x60);
          dVar7 = ((double)(iVar11 % (int)uVar14) + 1.0) * *(double *)(param_1 + 0x50);
          dVar6 = ((double)(iVar11 / (int)uVar14) + 1.0) * *(double *)(param_1 + 0x58);
          dVar32 = dVar32 * dVar2;
          local_280[2] = local_280[2] * dVar2;
          local_288 = local_280[2];
          if (dVar32 <= local_280[2]) {
            local_288 = dVar32;
          }
          local_298._8_8_ = dVar49;
          if (dVar6 <= dVar49) {
            local_298._8_8_ = dVar6;
          }
          local_298._0_8_ = dVar5;
          if (dVar7 <= dVar5) {
            local_298._0_8_ = dVar7;
          }
          if (local_280[2] <= dVar32) {
            local_280[2] = dVar32;
          }
          local_280[1] = dVar49;
          if (dVar49 <= dVar6) {
            local_280[1] = dVar6;
          }
          local_280[0] = dVar5;
          if (dVar5 <= dVar7) {
            local_280[0] = dVar7;
          }
          lVar13 = -3;
          do {
            if ((local_200[lVar13 + 3] <= local_280[lVar13] &&
                 local_280[lVar13] != local_200[lVar13 + 3]) ||
               (local_280[lVar13 + 3] <= local_200[lVar13] &&
                local_200[lVar13] != local_280[lVar13 + 3])) goto LAB_1406852ee;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar14 = (uVar3 - 1) * piVar16[1] + *piVar16, uVar14 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar14) != -1)))) {
            local_178 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_190 = 0.0;
            local_198 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1b8 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_200[3] = 1.0;
            local_200[4] = 0.0;
            local_200[5] = 0.0;
            local_148 = &LAB_1406863be;
            local_140 = *(undefined8 *)(param_2 + 0x10);
            local_160 = &LAB_1429b1b78;
            local_158 = 0;
            local_2c8 = 0x3f50624de0000000;
            local_2d0 = local_200 + 3;
            local_2d8 = 0;
            local_2e8 = local_1d0;
            local_2f0 = local_1cc;
            local_2f8 = &local_188;
            local_300 = &local_1c8;
            local_308 = &local_1a8;
            local_2e0 = param_4;
            local_168 = &local_138;
            local_150 = param_2;
            local_138 = dVar5;
            uStack_130 = dVar49;
            local_128 = dVar42 * dVar2;
            uStack_120 = dVar7;
            uStack_118 = dVar49;
            uStack_110 = dVar20 * dVar2;
            local_108 = dVar7;
            uStack_100 = dVar6;
            local_f8 = dVar1 * dVar2;
            bVar9 = FUN_14068570a(&local_168,&local_150,param_3,&local_190);
            if ((bVar9 != 0) && ((double)param_5[6] <= local_190 && local_190 != (double)param_5[6])
               ) {
              param_5[6] = local_190;
              param_5[2] = local_178;
              *param_5 = local_188;
              param_5[1] = uStack_180;
              *(undefined8 *)local_2b8 = local_1a8;
              *(undefined8 *)((longlong)local_2b8 + 8) = uStack_1a0;
              *(undefined8 *)((longlong)local_2b8 + 0x10) = local_198;
            }
            local_178 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_190 = 0.0;
            local_198 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1b8 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_200[3] = 1.0;
            local_200[4] = 0.0;
            local_200[5] = 0.0;
            local_148 = &LAB_1406863be;
            local_140 = *(undefined8 *)(param_2 + 0x10);
            local_160 = &LAB_1429b1b78;
            local_158 = 0;
            local_2c8 = 0x3f50624de0000000;
            local_2d0 = local_200 + 3;
            local_2d8 = 0;
            local_2e8 = local_1d0;
            local_2f0 = local_1cc;
            local_2f8 = &local_188;
            local_300 = &local_1c8;
            local_308 = &local_1a8;
            local_2e0 = param_4;
            local_168 = &local_138;
            local_150 = param_2;
            local_138 = dVar5;
            uStack_130 = dVar49;
            local_128 = dVar42 * dVar2;
            uStack_120 = dVar7;
            uStack_118 = dVar6;
            uStack_110 = dVar1 * dVar2;
            local_108 = dVar5;
            uStack_100 = dVar6;
            local_f8 = dVar31 * dVar2;
            bVar10 = FUN_14068570a(&local_168,&local_150,param_3,&local_190);
            if ((bVar10 != 0) &&
               ((double)param_5[6] <= local_190 && local_190 != (double)param_5[6])) {
              param_5[6] = local_190;
              param_5[2] = local_178;
              *param_5 = local_188;
              param_5[1] = uStack_180;
              *(undefined8 *)local_2b8 = local_1a8;
              *(undefined8 *)((longlong)local_2b8 + 8) = uStack_1a0;
              *(undefined8 *)((longlong)local_2b8 + 0x10) = local_198;
            }
            uVar17 = (ulonglong)(byte)((byte)uVar17 | bVar9 | bVar10);
          }
LAB_1406852ee:
          piVar16 = piVar16 + 2;
        } while (piVar16 != local_2c0);
      }
      goto LAB_140684913;
    }
    local_2c0 = (int *)CONCAT44(local_2c0._4_4_,(float)*(double *)(param_2 + 0x10));
    auVar33 = insertps(ZEXT416((uint)(float)*(double *)(param_2 + 0x20)),
                       ZEXT416((uint)(float)*(double *)(param_2 + 0x28)),0x1c);
    local_298 = insertps(auVar33,ZEXT416((uint)(float)*(double *)(param_2 + 0x30)),0x28);
    fVar18 = (float)param_3[2];
    fVar21 = (float)param_3[3];
    fVar23 = (float)*param_3;
    fVar26 = (float)param_3[1];
    fVar19 = fVar23 * fVar23 + fVar26 * fVar26;
    fVar22 = fVar18 * fVar18 + fVar21 * fVar21;
    auVar34._0_4_ = fVar22 + fVar19;
    auVar34._4_4_ = fVar22 + fVar19;
    auVar34._8_4_ = fVar19 + fVar22;
    auVar34._12_4_ = fVar19 + fVar22;
    auVar33._4_4_ = -(uint)(1e-08 <= auVar34._4_4_);
    auVar33._0_4_ = -(uint)(1e-08 <= auVar34._0_4_);
    auVar33._8_4_ = -(uint)(1e-08 <= auVar34._8_4_);
    auVar33._12_4_ = -(uint)(1e-08 <= auVar34._12_4_);
    auVar34 = sqrtps(auVar34,auVar34);
    auVar34 = divps(_DAT_1499314a0,auVar34);
    auVar38._0_4_ = auVar34._0_4_ * fVar23 * -1.0;
    auVar38._4_4_ = auVar34._4_4_ * fVar26 * -1.0;
    auVar38._8_4_ = auVar34._8_4_ * fVar18 * -1.0;
    auVar38._12_4_ = auVar34._12_4_ * fVar21 * 1.0;
    auVar33 = blendvps(_DAT_149f51f60,auVar38,auVar33);
    if ((longlong)(int)uStack_220 != 0) {
      local_2b8._0_4_ = (undefined4)param_3[4];
      local_2b8._4_4_ = (undefined4)param_3[5];
      fStack_2b0 = (float)param_3[6];
      fStack_2ac = 0.0;
      piVar16 = local_228 + (longlong)(int)uStack_220 * 2;
      fVar18 = auVar33._0_4_;
      fVar19 = auVar33._4_4_;
      fVar21 = auVar33._8_4_;
      fVar22 = auVar33._12_4_;
      piVar15 = local_228;
      local_2a8 = fVar22;
      fStack_2a4 = fVar22;
      fStack_2a0 = fVar22;
      fStack_29c = fVar22;
      do {
        uVar3 = *(ushort *)(param_1 + 0x92);
        uVar14 = (uint)uVar3;
        iVar11 = piVar15[1] * uVar14 + *piVar15;
        dVar1 = *(double *)(param_1 + 0x80);
        lVar13 = *(longlong *)(param_1 + 0x20);
        lVar12 = (longlong)iVar11;
        dVar32 = *(double *)(param_1 + 0xa0);
        dVar31 = (double)*(ushort *)(lVar13 + lVar12 * 2) * dVar32 + dVar1;
        auVar35._0_4_ = (float)dVar31;
        auVar35._4_8_ = (ulonglong)dVar31 >> 0x20;
        auVar35._12_4_ = 0;
        fVar26 = (float)((double)*(ushort *)(lVar13 + 2 + lVar12 * 2) * dVar32 + dVar1);
        fVar47 = (float)((double)*(ushort *)(lVar13 + ((ulonglong)uVar3 + lVar12) * 2) * dVar32 +
                        dVar1);
        fVar39 = (float)(iVar11 / (int)uVar14);
        fVar23 = (float)(iVar11 % (int)uVar14);
        fVar41 = (float)((double)*(ushort *)(lVar13 + 2 + ((ulonglong)uVar3 + lVar12) * 2) * dVar32
                        + dVar1);
        auVar33 = insertps(ZEXT416((uint)fVar23),ZEXT416((uint)fVar39),0x1c);
        auVar48 = insertps(auVar33,auVar35,0x20);
        auVar34 = insertps(ZEXT416((uint)(fVar23 + 1.0)),ZEXT416((uint)fVar39),0x1c);
        auVar50 = insertps(auVar34,ZEXT416((uint)fVar26),0x20);
        auVar34 = insertps(ZEXT416((uint)fVar23),ZEXT416((uint)(fVar39 + 1.0)),0x1c);
        auVar38 = insertps(auVar34,ZEXT416((uint)fVar47),0x20);
        auVar34 = insertps(ZEXT416((uint)(fVar23 + 1.0)),ZEXT416((uint)(fVar39 + 1.0)),0x1c);
        auVar40._4_4_ = unaff_XMM8_Db;
        auVar40._0_4_ = fVar41;
        auVar40._8_4_ = unaff_XMM8_Dc;
        auVar40._12_4_ = unaff_XMM8_Dd;
        auVar40 = insertps(auVar34,auVar40,0x20);
        fVar23 = fVar47;
        if (fVar41 <= fVar47) {
          fVar23 = fVar41;
        }
        fVar39 = fVar26;
        if (fVar23 <= fVar26) {
          fVar39 = fVar23;
        }
        fVar23 = auVar35._0_4_;
        if (fVar39 <= auVar35._0_4_) {
          fVar23 = fVar39;
        }
        if (fVar47 <= fVar41) {
          fVar47 = fVar41;
        }
        if (fVar26 <= fVar47) {
          fVar26 = fVar47;
        }
        if (auVar35._0_4_ <= fVar26) {
          auVar35._0_4_ = fVar26;
          auVar35._12_4_ = 0;
        }
        auVar34 = insertps(auVar34,auVar35,0x20);
        auVar4._4_4_ = (int)((ulonglong)dVar31 >> 0x20);
        auVar4._0_4_ = fVar23;
        auVar4._8_8_ = 0;
        auVar33 = insertps(auVar33,auVar4,0x20);
        fVar23 = *(float *)(param_1 + 0x70);
        fVar26 = *(float *)(param_1 + 0x74);
        fVar47 = *(float *)(param_1 + 0x78);
        fVar39 = *(float *)(param_1 + 0x7c);
        local_138 = (double)CONCAT44(auVar48._4_4_ * fVar26,auVar48._0_4_ * fVar23);
        uStack_130 = (double)CONCAT44(auVar48._12_4_ * fVar39,auVar48._8_4_ * fVar47);
        local_128 = (double)CONCAT44(auVar50._4_4_ * fVar26,auVar50._0_4_ * fVar23);
        uStack_120 = (double)CONCAT44(auVar50._12_4_ * fVar39,auVar50._8_4_ * fVar47);
        uStack_118 = (double)CONCAT44(auVar38._4_4_ * fVar26,auVar38._0_4_ * fVar23);
        uStack_110 = (double)CONCAT44(auVar38._12_4_ * fVar39,auVar38._8_4_ * fVar47);
        local_108 = (double)CONCAT44(auVar40._4_4_ * fVar26,auVar40._0_4_ * fVar23);
        uStack_100 = (double)CONCAT44(auVar40._12_4_ * fVar39,auVar40._8_4_ * fVar47);
        auVar48._0_8_ = CONCAT44(auVar33._4_4_ * fVar26,auVar33._0_4_ * fVar23);
        auVar48._8_4_ = auVar33._8_4_ * fVar47;
        auVar48._12_4_ = auVar33._12_4_ * fVar39;
        auVar24._0_4_ = auVar34._0_4_ * fVar23;
        auVar24._4_4_ = auVar34._4_4_ * fVar26;
        auVar24._8_4_ = auVar34._8_4_ * fVar47;
        auVar24._12_4_ = auVar34._12_4_ * fVar39;
        auVar36._8_4_ = auVar48._8_4_;
        auVar36._0_8_ = auVar48._0_8_;
        auVar36._12_4_ = auVar48._12_4_;
        auVar34 = minps(auVar36,auVar24);
        auVar33 = maxps(auVar48,auVar24);
        auVar50._4_4_ = -(uint)(auVar33._4_4_ < fVar44);
        auVar50._0_4_ = -(uint)(auVar33._0_4_ < fVar43);
        auVar50._8_4_ = -(uint)(auVar33._8_4_ < fVar37);
        auVar50._12_4_ = -(uint)(auVar33._12_4_ < 0.0);
        auVar25._4_4_ = -(uint)(fVar46 < auVar34._4_4_);
        auVar25._0_4_ = -(uint)(fVar45 < auVar34._0_4_);
        auVar25._8_4_ = -(uint)(fVar30 < auVar34._8_4_);
        auVar25._12_4_ = -(uint)(0.0 < auVar34._12_4_);
        iVar11 = movmskps(iVar11 / (int)uVar14,auVar25 | auVar50);
        if ((iVar11 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar14 = (uVar3 - 1) * piVar15[1] + *piVar15, uVar14 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar14) != -1)))))) {
          lVar13 = 0;
          do {
            fVar23 = *(float *)((longlong)&local_138 + lVar13) - (float)local_2b8._0_4_;
            fVar26 = *(float *)((longlong)&local_138 + lVar13 + 4) - (float)local_2b8._4_4_;
            fVar47 = *(float *)((longlong)&uStack_130 + lVar13) - fStack_2b0;
            fVar39 = *(float *)((longlong)&uStack_130 + lVar13 + 4) - fStack_2ac;
            fVar41 = fVar26 * fVar18 - fVar19 * fVar23;
            fVar27 = fVar47 * fVar19 - fVar21 * fVar26;
            fVar28 = fVar23 * fVar21 - fVar18 * fVar47;
            fVar29 = fVar39 * fVar22 - fVar22 * fVar39;
            fVar41 = fVar41 + fVar41;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            fVar29 = fVar29 + fVar29;
            *(float *)((longlong)&local_138 + lVar13) =
                 (fVar41 * fVar19 - fVar28 * fVar21) + local_2a8 * fVar27 + fVar23;
            *(float *)((longlong)&local_138 + lVar13 + 4) =
                 (fVar27 * fVar21 - fVar41 * fVar18) + fStack_2a4 * fVar28 + fVar26;
            *(float *)((longlong)&uStack_130 + lVar13) =
                 (fVar28 * fVar18 - fVar27 * fVar19) + fStack_2a0 * fVar41 + fVar47;
            *(float *)((longlong)&uStack_130 + lVar13 + 4) =
                 (fVar29 * fVar22 - fVar29 * fVar22) + fStack_29c * fVar29 + fVar39;
            lVar13 = lVar13 + 0x10;
          } while (lVar13 != 0x40);
          local_308 = (undefined8 *)CONCAT44(local_308._4_4_,local_2c0._0_4_);
          cVar8 = FUN_140685390(&local_138,&local_128,&local_108,local_298);
          if (cVar8 == '\0') {
            local_308 = (undefined8 *)CONCAT44(local_308._4_4_,local_2c0._0_4_);
            cVar8 = FUN_140685390(&local_138,&local_108,&uStack_118,local_298);
            if (cVar8 == '\0') goto LAB_140684d30;
          }
          uVar17 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
          goto LAB_140684913;
        }
LAB_140684d30:
        piVar15 = piVar15 + 2;
      } while (piVar15 != piVar16);
    }
  }
  uVar17 = 0;
LAB_140684913:
  if (local_228 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffff01;
}



// FUNCTION 140685390 FUN_140685390 body=890 status=ok
// SIG undefined FUN_140685390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140685390(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar18 = *param_2;
  fVar19 = param_2[1];
  fVar20 = param_2[2];
  fVar26 = fVar18 - fVar2;
  fVar27 = fVar19 - fVar3;
  fVar28 = fVar20 - fVar4;
  fVar29 = param_2[3] - param_1[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar21 = fVar5 - fVar18;
  fVar23 = fVar6 - fVar19;
  fVar24 = fVar7 - fVar20;
  fVar25 = param_3[3] - param_2[3];
  fVar9 = fVar26 * fVar23 - fVar27 * fVar21;
  fVar13 = fVar27 * fVar24 - fVar28 * fVar23;
  fVar15 = fVar28 * fVar21 - fVar26 * fVar24;
  fVar25 = fVar29 * fVar25 - fVar29 * fVar25;
  fVar25 = fVar25 * fVar25;
  auVar11._0_4_ = fVar15 * fVar15 + fVar13 * fVar13;
  auVar11._4_4_ = fVar13 * fVar13 + fVar15 * fVar15;
  auVar11._8_4_ = fVar25 + fVar9 * fVar9;
  auVar11._12_4_ = fVar9 * fVar9 + fVar25;
  auVar12._4_4_ = auVar11._12_4_ + auVar11._4_4_;
  auVar12._0_4_ = auVar11._8_4_ + auVar11._0_4_;
  auVar12._8_4_ = auVar11._0_4_ + auVar11._8_4_;
  auVar12._12_4_ = auVar11._4_4_ + auVar11._12_4_;
  auVar12 = sqrtps(auVar11,auVar12);
  fVar25 = (float)DAT_1499314a0;
  fVar29 = DAT_1499314a0._4_4_;
  fVar1 = DAT_1499314a0._8_4_;
  auVar12 = divps(_DAT_1499314a0,auVar12);
  fVar13 = auVar12._0_4_ * fVar13;
  fVar15 = auVar12._4_4_ * fVar15;
  fVar9 = auVar12._8_4_ * fVar9;
  fVar10 = *param_4;
  fVar14 = param_4[1];
  fVar16 = param_4[2];
  if (ABS((fVar16 - fVar4) * fVar9 + (fVar10 - fVar2) * fVar13 + (fVar14 - fVar3) * fVar15) <=
      param_5) {
    param_5 = param_5 * param_5;
    fVar31 = fVar28 * fVar28 + fVar26 * fVar26 + fVar27 * fVar27;
    auVar30._0_4_ =
         ((fVar16 - fVar4) * fVar28 + (fVar10 - fVar2) * fVar26 + (fVar14 - fVar3) * fVar27) /
         fVar31;
    uVar8 = -(uint)(fVar31 != 0.0);
    auVar30._4_4_ = auVar30._0_4_;
    auVar30._8_4_ = auVar30._0_4_;
    auVar30._12_4_ = auVar30._0_4_;
    auVar12 = maxps(auVar30,ZEXT816(0));
    auVar12 = minps(auVar12,_DAT_1499314a0);
    fVar31 = (float)(uVar8 & auVar12._0_4_);
    fVar32 = (float)(uVar8 & auVar12._4_4_);
    fVar33 = (float)(uVar8 & auVar12._8_4_);
    fVar31 = fVar10 - ((fVar25 - fVar31) * fVar2 + fVar18 * fVar31);
    fVar32 = fVar14 - ((fVar29 - fVar32) * fVar3 + fVar19 * fVar32);
    fVar33 = fVar16 - ((fVar1 - fVar33) * fVar4 + fVar20 * fVar33);
    if (((fVar26 * fVar15 - fVar27 * fVar13) * fVar33 +
         (fVar27 * fVar9 - fVar28 * fVar15) * fVar31 + (fVar28 * fVar13 - fVar26 * fVar9) * fVar32
         <= 0.0) || (fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32 <= param_5)) {
      fVar26 = fVar24 * fVar24 + fVar21 * fVar21 + fVar23 * fVar23;
      auVar34._0_4_ =
           ((fVar16 - fVar20) * fVar24 + (fVar10 - fVar18) * fVar21 + (fVar14 - fVar19) * fVar23) /
           fVar26;
      uVar8 = -(uint)(fVar26 != 0.0);
      auVar34._4_4_ = auVar34._0_4_;
      auVar34._8_4_ = auVar34._0_4_;
      auVar34._12_4_ = auVar34._0_4_;
      auVar12 = maxps(auVar34,ZEXT816(0));
      auVar12 = minps(auVar12,_DAT_1499314a0);
      fVar26 = (float)(uVar8 & auVar12._0_4_);
      fVar27 = (float)(uVar8 & auVar12._4_4_);
      fVar28 = (float)(uVar8 & auVar12._8_4_);
      fVar18 = fVar10 - ((fVar25 - fVar26) * fVar18 + fVar5 * fVar26);
      fVar19 = fVar14 - ((fVar29 - fVar27) * fVar19 + fVar6 * fVar27);
      fVar20 = fVar16 - ((fVar1 - fVar28) * fVar20 + fVar7 * fVar28);
      if (((fVar21 * fVar15 - fVar23 * fVar13) * fVar20 +
           (fVar23 * fVar9 - fVar24 * fVar15) * fVar18 + (fVar24 * fVar13 - fVar21 * fVar9) * fVar19
           <= 0.0) || (fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19 <= param_5)) {
        fVar21 = fVar2 - fVar5;
        fVar23 = fVar3 - fVar6;
        fVar24 = fVar4 - fVar7;
        fVar18 = fVar24 * fVar24 + fVar21 * fVar21 + fVar23 * fVar23;
        auVar17._0_12_ = ZEXT812(0);
        auVar17._12_4_ = 0;
        auVar22._0_4_ =
             ((fVar16 - fVar7) * fVar24 + (fVar10 - fVar5) * fVar21 + (fVar14 - fVar6) * fVar23) /
             fVar18;
        uVar8 = -(uint)(fVar18 != 0.0);
        auVar22._4_4_ = auVar22._0_4_;
        auVar22._8_4_ = auVar22._0_4_;
        auVar22._12_4_ = auVar22._0_4_;
        auVar12 = maxps(auVar22,auVar17);
        auVar12 = minps(auVar12,_DAT_1499314a0);
        fVar18 = (float)(uVar8 & auVar12._0_4_);
        fVar19 = (float)(uVar8 & auVar12._4_4_);
        fVar20 = (float)(uVar8 & auVar12._8_4_);
        fVar10 = fVar10 - ((fVar25 - fVar18) * fVar5 + fVar2 * fVar18);
        fVar14 = fVar14 - ((fVar29 - fVar19) * fVar6 + fVar3 * fVar19);
        fVar16 = fVar16 - ((fVar1 - fVar20) * fVar7 + fVar4 * fVar20);
        if (((fVar15 * fVar21 - fVar23 * fVar13) * fVar16 +
             (fVar9 * fVar23 - fVar24 * fVar15) * fVar10 +
             (fVar13 * fVar24 - fVar21 * fVar9) * fVar14 <= 0.0) ||
           (fVar16 * fVar16 + fVar10 * fVar10 + fVar14 * fVar14 <= param_5)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14068570a FUN_14068570a body=2648 status=ok
// SIG undefined FUN_14068570a(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14068570a(undefined8 *param_1,longlong param_2,undefined4 *param_3,double *param_4,
                       double *param_5,double *param_6,double *param_7,undefined4 *param_8,
                       undefined4 *param_9,double param_10,double param_11,double *param_12,
                       double param_13)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  double *pdVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined1 local_3e8 [32];
  double *local_3c8;
  double *local_3c0;
  double *local_3b8;
  double *local_3b0;
  undefined8 local_3a8;
  double *local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  undefined1 local_338 [16];
  undefined4 *local_328;
  undefined4 *local_320;
  undefined8 *local_318;
  undefined4 *local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined4 local_2a8;
  uint uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  double local_298;
  double dStack_290;
  undefined8 local_280;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined8 **local_260;
  double local_258 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [10];
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148 [11];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_3e8;
  local_280._4_4_ = 0xffffffff;
  local_280._0_4_ = 0xffffffff;
  local_2a8 = *param_3;
  uStack_2a0 = param_3[2];
  uStack_2a4 = param_3[1] ^ 0x80000000;
  uStack_29c = param_3[3] ^ 0x80000000;
  local_298 = *(double *)(param_3 + 4) * -1.0;
  dStack_290 = *(double *)(param_3 + 6) * 1.0;
  dVar2 = param_12[2];
  dVar3 = *param_12;
  dVar4 = param_12[1];
  dVar18 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
  if (9.999999747378752e-05 <= dVar18) {
    dVar18 = SQRT(dVar18);
    local_2b8 = -dVar2 / dVar18;
    dStack_2c0 = -dVar4 / dVar18;
    local_2c8 = -dVar3 / dVar18;
    if ((dVar18 != 0.0) || (NAN(dVar18))) goto LAB_14068587f;
  }
  local_2c8 = -1.0;
  dStack_2c0 = 0.0;
  local_2b8 = 0.0;
LAB_14068587f:
  puVar13 = &local_1d8;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  pdVar16 = local_258;
  local_258[2] = -1.0;
  local_258[3] = -1.0;
  local_258[0] = -1.0;
  local_258[1] = -1.0;
  uVar25 = (uint)((ulonglong)local_2b8 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(local_2b8,0);
  uVar27 = (uint)((ulonglong)dStack_2c0 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dStack_2c0,0);
  local_390 = param_10 + (double)param_1[2];
  uVar29 = (uint)((ulonglong)local_2c8 >> 0x20) ^ 0x80000000;
  uVar28 = SUB84(local_2c8,0);
  local_388 = param_11 + *(double *)(param_2 + 0x10);
  local_380 = local_390 + local_388;
  local_378 = local_380 + param_13;
  iVar12 = 0x21;
  dVar2 = 3.4028234663852886e+38;
  local_398 = param_4;
  while( true ) {
    iVar12 = iVar12 + -1;
    dVar3 = dVar2;
    if (iVar12 == 0) goto LAB_140685bc8;
    local_328 = (undefined4 *)((ulonglong)local_2b8 ^ 0x8000000000000000);
    local_338._8_4_ = SUB84(dStack_2c0,0);
    local_338._0_8_ = -local_2c8;
    local_338._12_4_ = (uint)((ulonglong)dStack_2c0 >> 0x20) ^ 0x80000000;
    local_3c8 = (double *)((longlong)&local_280 + 4);
    (*(code *)param_1[1])(&local_2e0,*param_1,local_338,0);
    dVar23 = local_2d0;
    dVar21 = dStack_2d8;
    dVar19 = local_2e0;
    local_3c0 = (double *)&local_280;
    local_3c8 = &local_2c8;
    FUN_140686164(param_2,&local_2e0,param_3,&local_2a8);
    dVar4 = dVar23 - local_2d0;
    dVar20 = dVar21 - dStack_2d8;
    dVar22 = dVar19 - local_2e0;
    dVar18 = local_2b8 * dVar4 + local_2c8 * dVar22 + dStack_2c0 * dVar20;
    if (local_378 < dVar18) {
      puVar13 = (undefined8 *)0x0;
      goto LAB_140685d3f;
    }
    if (dVar2 * 0.9999000000025262 < dVar18) goto LAB_140685bc8;
    lVar11 = (longlong)(int)local_1d8;
    *(int *)((longlong)&local_1d8 + lVar11 * 4 + 4) = (int)local_1d8;
    (&local_158)[lVar11 * 3] = dVar19;
    (&uStack_150)[lVar11 * 3] = dVar21;
    local_148[lVar11 * 3] = dVar23;
    (&local_1b8)[lVar11 * 3] = local_2e0;
    (&uStack_1b0)[lVar11 * 3] = dStack_2d8;
    local_1a8[lVar11 * 3] = local_2d0;
    local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_1d8 + 1);
    local_258[lVar11 * 3 + 4] = dVar22;
    local_258[lVar11 * 3 + 5] = dVar20;
    local_258[lVar11 * 3 + 6] = dVar4;
    local_3c0 = (double *)&local_1b8;
    local_3c8 = (double *)&local_158;
    FUN_1449162b1(&local_2e0,local_258 + 4,puVar13);
    local_2b8 = local_2d0;
    local_2c8 = local_2e0;
    dStack_2c0 = dStack_2d8;
    dVar3 = SQRT(local_2d0 * local_2d0 + local_2e0 * local_2e0 + dStack_2d8 * dStack_2d8);
    if (dVar3 < param_13) break;
    bVar5 = dVar2 <= dVar3;
    local_2b8 = 1.0 / dVar3;
    local_2c8 = local_2e0 * local_2b8;
    dStack_2c0 = dStack_2d8 * local_2b8;
    local_2b8 = local_2d0 * local_2b8;
    uVar25 = (uint)((ulonglong)local_2b8 >> 0x20) ^ 0x80000000;
    uVar24 = SUB84(local_2b8,0);
    uVar27 = (uint)((ulonglong)dStack_2c0 >> 0x20) ^ 0x80000000;
    uVar26 = SUB84(dStack_2c0,0);
    uVar29 = (uint)((ulonglong)local_2c8 >> 0x20) ^ 0x80000000;
    uVar28 = SUB84(local_2c8,0);
    dVar2 = dVar3;
    if (bVar5) goto LAB_140685bc8;
  }
  local_2f8 = 0;
  uStack_2f0 = 0;
  plVar15 = &local_308;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(plVar15,8);
  if (0 < (int)local_1d8) {
    lVar17 = 0;
    lVar11 = 0;
    do {
      uVar9 = uStack_2f0;
      lVar14 = (longlong)(int)uStack_2f0;
      uVar10 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar10);
      if (uStack_2f0._4_4_ < uVar10) {
        FUN_14026a4e8(&local_2f8,uVar9 & 0xffffffff);
      }
      uVar9 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar14 * 0x18) =
           *(undefined8 *)((longlong)local_148 + lVar17);
      uVar6 = *(undefined4 *)((longlong)&local_158 + lVar17 + 4);
      uVar7 = *(undefined4 *)((longlong)&uStack_150 + lVar17);
      uVar8 = *(undefined4 *)((longlong)local_148 + lVar17 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_158 + lVar17);
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      plVar15 = (longlong *)(longlong)(int)uStack_300;
      uVar10 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar10);
      if (uStack_300._4_4_ < uVar10) {
        FUN_14026a4e8(&local_308,uVar9 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + (longlong)plVar15 * 0x18) =
           *(undefined8 *)((longlong)local_1a8 + lVar17);
      uVar6 = *(undefined4 *)((longlong)&local_1b8 + lVar17 + 4);
      uVar7 = *(undefined4 *)((longlong)&uStack_1b0 + lVar17);
      uVar8 = *(undefined4 *)((longlong)local_1a8 + lVar17 + -4);
      puVar1 = (undefined4 *)(local_308 + (longlong)plVar15 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1b8 + lVar17);
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar11 = lVar11 + 1;
      lVar17 = lVar17 + 0x18;
    } while (lVar11 < (int)local_1d8);
  }
  local_260 = &local_318;
  local_310 = (undefined4 *)((longlong)&local_280 + 4);
  local_338._8_8_ = &local_280;
  local_338._0_8_ = param_2;
  local_320 = &local_2a8;
  local_268 = FUN_141409dd8;
  local_270 = local_338;
  local_278 = FUN_141409e02;
  local_3a8 = 0x3f847ae140000000;
  local_3b0 = &local_370;
  local_3b8 = &local_358;
  local_3c8 = &local_340;
  local_3c0 = &local_2e0;
  local_328 = param_3;
  local_318 = param_1;
  uVar10 = FUN_144918d86(&local_2f8,&local_308);
  if (uVar10 < 2) {
    param_7[2] = local_2d0;
    *param_7 = local_2e0;
    param_7[1] = dStack_2d8;
    *local_398 = local_340 + local_390 + local_388;
    *param_5 = local_390 * local_2e0 + local_358;
    param_5[1] = local_390 * dStack_2d8 + local_350;
    param_5[2] = local_390 * local_2d0 + local_348;
    *param_6 = local_370 - local_2e0 * local_388;
    param_6[1] = local_368 - dStack_2d8 * local_388;
    param_6[2] = local_360 - local_2d0 * local_388;
    *param_8 = local_280._4_4_;
    *param_9 = (undefined4)local_280;
    puVar13 = (undefined8 *)CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (uVar10 == 3) {
      uVar28 = SUB84(local_2e0,0);
      uVar29 = (uint)((ulonglong)local_2e0 >> 0x20);
      uVar26 = SUB84(dStack_2d8,0);
      uVar27 = (uint)((ulonglong)dStack_2d8 >> 0x20);
      uVar24 = SUB84(local_2d0,0);
      uVar25 = (uint)((ulonglong)local_2d0 >> 0x20);
      dVar3 = -local_340;
    }
    puVar13 = (undefined8 *)0x0;
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (bVar5) {
LAB_140685bc8:
    dVar2 = 0.0;
    dVar19 = 0.0;
    dVar18 = 0.0;
    dVar21 = 0.0;
    dVar4 = 0.0;
    dVar23 = 0.0;
    if (0 < (longlong)(int)local_1d8) {
      lVar11 = 0;
      dVar4 = 0.0;
      dVar2 = 0.0;
      do {
        dVar20 = *pdVar16;
        dVar23 = dVar23 + local_148[lVar11] * dVar20;
        dVar4 = dVar4 + (double)(&uStack_150)[lVar11] * dVar20;
        dVar21 = dVar21 + (double)(&local_158)[lVar11] * dVar20;
        dVar18 = dVar18 + local_1a8[lVar11] * dVar20;
        dVar19 = dVar19 + (double)(&uStack_1b0)[lVar11] * dVar20;
        dVar2 = dVar2 + dVar20 * (double)(&local_1b8)[lVar11];
        lVar11 = lVar11 + 3;
        pdVar16 = pdVar16 + 1;
      } while ((longlong)(int)local_1d8 * 3 != lVar11);
    }
    *param_7 = (double)CONCAT44(uVar29,uVar28);
    param_7[1] = (double)CONCAT44(uVar27,uVar26);
    param_7[2] = (double)CONCAT44(uVar25,uVar24);
    *local_398 = local_380 - dVar3;
    *param_5 = local_390 * (double)CONCAT44(uVar29,uVar28) + dVar21;
    param_5[1] = local_390 * (double)CONCAT44(uVar27,uVar26) + dVar4;
    param_5[2] = local_390 * (double)CONCAT44(uVar25,uVar24) + dVar23;
    *param_6 = dVar2 - local_388 * (double)CONCAT44(uVar29,uVar28);
    param_6[1] = dVar19 - (double)CONCAT44(uVar27,uVar26) * local_388;
    param_6[2] = dVar18 - (double)CONCAT44(uVar25,uVar24) * local_388;
    *param_8 = local_280._4_4_;
    *param_9 = (undefined4)local_280;
    puVar13 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar13 >> 8),0.0 <= local_380 - dVar3);
  }
LAB_140685d3f:
  if ((local_f0 ^ (ulonglong)local_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar13 & 0xffffffff;
}



// FUNCTION 140686164 FUN_140686164 body=600 status=ok
// SIG undefined FUN_140686164(void)

double * FUN_140686164(undefined8 *param_1,double *param_2,double *param_3,double *param_4,
                      double *param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  dVar4 = param_4[2];
  dVar9 = *param_4;
  dVar5 = param_4[1];
  dVar7 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar7 = dVar7 + dVar7;
  dVar6 = param_4[3];
  dVar10 = dVar9 * dVar2 - dVar1 * dVar5;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar4 * dVar1 - dVar3 * dVar9;
  dVar8 = dVar8 + dVar8;
  local_90 = (dVar9 * dVar8 - dVar7 * dVar5) + dVar6 * dVar10 + dVar3;
  local_98 = (dVar4 * dVar7 - dVar10 * dVar9) + dVar6 * dVar8 + dVar2;
  local_a0 = (dVar5 * dVar10 - dVar8 * dVar4) + dVar7 * dVar6 + dVar1;
  local_a8 = param_6;
  (*(code *)param_1[1])(&local_88,*param_1,&local_a0,0);
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar7 = param_3[2];
  dVar1 = param_3[3];
  dVar2 = param_3[3];
  dVar9 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar10 = local_78 * dVar6 - dStack_80 * dVar7;
  dVar8 = local_88 * dVar7 - dVar5 * local_78;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar4 = param_3[5];
  dVar3 = param_3[6];
  *param_2 = (dVar9 * dVar6 - dVar8 * dVar7) + dVar1 * dVar10 + local_88 + param_3[4];
  param_2[1] = (dVar7 * dVar10 - dVar5 * dVar9) + dVar2 * dVar8 + dStack_80 + dVar4;
  param_2[2] = dVar9 * dVar1 + local_78 + (dVar8 * dVar5 - dVar10 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406863dc FUN_1406863dc body=195 status=ok
// SIG undefined FUN_1406863dc(void)

undefined4 *
FUN_1406863dc(undefined4 *param_1,longlong param_2,longlong param_3,double *param_4,int *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  uint local_14 [3];
  ulonglong local_8;
  double dVar4;
  double dVar5;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dVar2 = *(double *)(param_2 + 0x10);
  lVar6 = 0;
  do {
    pdVar1 = (double *)(param_3 + lVar6 * 2);
    dVar3 = *pdVar1;
    dVar4 = *pdVar1;
    dVar5 = *pdVar1;
    if (dVar5 <= 0.0 && dVar4 != 0.0) {
      dVar7 = *(double *)(param_2 + 0x20 + lVar6 * 2) + dVar2;
    }
    else {
      dVar7 = *(double *)(param_2 + 0x38 + lVar6 * 2) - dVar2;
    }
    *(double *)((longlong)&local_30 + lVar6 * 2) = dVar7;
    *(uint *)((longlong)local_14 + lVar6) = (uint)(NAN(dVar3) || (dVar5 > 0.0 || dVar4 == 0.0));
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  *param_5 = local_14[1] * 2 + local_14[0] + local_14[2] * 4;
  if (param_4 != (double *)0x0) {
    *param_4 = dVar2 * 0.7320508075688772;
  }
  *(undefined8 *)(param_1 + 4) = local_20;
  *param_1 = (undefined4)local_30;
  param_1[1] = local_30._4_4_;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_58);
}



// FUNCTION 14068657c FUN_14068657c body=395 status=ok
// SIG undefined FUN_14068657c(void)

undefined4 *
FUN_14068657c(undefined4 *param_1,longlong param_2,double *param_3,undefined8 param_4,int *param_5)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_2 + 0x88);
  if ((longlong)*(int *)(lVar2 + 0x38) < 1) {
    *param_5 = -1;
  }
  else {
    dVar1 = *(double *)(param_2 + 0x10);
    pfVar5 = (float *)(*(longlong *)(lVar2 + 0x30) + 8);
    uVar7 = 0xffffffff;
    fVar8 = -3.4028235e+38;
    uVar4 = 0;
    do {
      fVar9 = *pfVar5 * (float)(*(double *)(param_2 + 0x30) * param_3[2]) +
              pfVar5[-2] * (float)(*(double *)(param_2 + 0x20) * *param_3) +
              pfVar5[-1] * (float)(*(double *)(param_2 + 0x28) * param_3[1]);
      if (fVar8 < fVar9) {
        uVar7 = uVar4 & 0xffffffff;
        fVar8 = fVar9;
      }
      uVar4 = uVar4 + 1;
      pfVar5 = pfVar5 + 3;
    } while ((longlong)*(int *)(lVar2 + 0x38) != uVar4);
    iVar6 = (int)uVar7;
    *param_5 = iVar6;
    if (iVar6 != -1) {
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        local_58 = param_2 + 0x20;
        local_50 = param_4;
        FUN_14068b0c6(lVar2,&local_48);
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        lVar3 = (longlong)iVar6;
        local_38 = (double)*(float *)(lVar2 + 8 + lVar3 * 0xc) * *(double *)(param_2 + 0x30);
        uStack_40 = (double)*(float *)(lVar2 + 4 + lVar3 * 0xc) * *(double *)(param_2 + 0x28);
        local_48 = (double)*(float *)(lVar2 + lVar3 * 0xc) * *(double *)(param_2 + 0x20);
      }
      goto LAB_1406866a1;
    }
  }
  local_48 = 0.0;
  uStack_40 = 0.0;
  local_38 = 0.0;
LAB_1406866a1:
  *(double *)(param_1 + 4) = local_38;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140686708 FUN_140686708 body=3201 status=ok
// SIG undefined FUN_140686708(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140686708(double param_1,undefined8 param_2,double *param_3,double param_4,
                       undefined8 *param_5,double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 *puVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  double *pdVar24;
  longlong lVar25;
  double *pdVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  double dVar50;
  undefined1 auStack_448 [32];
  undefined8 *local_428;
  undefined8 *local_420;
  undefined8 *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  double local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  undefined8 *local_3d8;
  longlong local_3d0;
  undefined1 local_3c8 [16];
  double *local_3b8;
  longlong *local_3b0;
  double *local_3a8;
  double *local_3a0;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  double local_368;
  ulonglong uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong local_338;
  int local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8 [4];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  double local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  double *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 local_1e8 [16];
  ulonglong local_1d8;
  longlong local_1c8 [2];
  ulonglong local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  longlong local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  dVar8 = 1.0 / param_6[2];
  dVar7 = 1.0 / param_6[1];
  dVar31 = 1.0 / *param_6;
  local_290 = param_4;
  FUN_14068738a(local_1c8,param_2,param_6);
  if (param_5 == (undefined8 *)0x0) {
    pdVar24 = param_3;
    pdVar26 = local_2f8;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *pdVar26 = *pdVar24;
      pdVar24 = pdVar24 + 1;
      pdVar26 = pdVar26 + 1;
    }
    local_2c8 = local_2c8 * param_6[2];
    dStack_2d0 = dStack_2d0 * param_6[1];
    local_2d8 = local_2d8 * *param_6;
    uStack_2c0 = 0;
    (**(code **)(local_1c8[0] + 0x80))(local_1c8,&local_398);
    FUN_1400c6592(&local_398,&local_138,local_2f8);
    dVar37 = ABS(param_4);
    dVar6 = (local_110 + dVar37) * dVar8;
    dVar5 = (dStack_118 + dVar37) * dVar7;
    dVar45 = (local_120 + dVar37) * dVar31;
    dVar8 = (local_128 - dVar37) * dVar8;
    dVar7 = (dStack_130 - dVar37) * dVar7;
    dVar31 = (local_138 - dVar37) * dVar31;
    dVar37 = dVar8;
    if (dVar6 <= dVar8) {
      dVar37 = dVar6;
    }
    dVar10 = dVar7;
    if (dVar5 <= dVar7) {
      dVar10 = dVar5;
    }
    dVar38 = dVar31;
    if (dVar45 <= dVar31) {
      dVar38 = dVar45;
    }
    if (dVar8 <= dVar6) {
      dVar8 = dVar6;
    }
    if (dVar7 <= dVar5) {
      dVar7 = dVar5;
    }
    if (dVar31 <= dVar45) {
      dVar31 = dVar45;
    }
    dVar11 = *param_3;
    dVar12 = param_3[1];
    dVar13 = param_3[2];
    dVar39 = param_3[6] * param_6[2];
    dVar5 = param_6[1];
    dVar6 = param_3[3];
    auVar32._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar32._0_4_ = (float)dVar5;
    auVar32._8_8_ = 0;
    auVar32 = insertps(ZEXT416((uint)(float)*param_6),auVar32,0x1c);
    _local_378 = insertps(auVar32,ZEXT416((uint)(float)param_6[2]),0x28);
    local_398 = (double)CONCAT44(local_398._4_4_,
                                 (float)((double)(local_1b8 &
                                                 -(ulonglong)(0.0 < *(double *)(local_140 + 0x10)))
                                        + param_4));
    uStack_360 = uStack_360 & 0xffffffffffffff00;
    local_198 = *(double *)(local_140 + 0x30) * local_198;
    local_1a0 = *(double *)(local_140 + 0x28) * local_1a0;
    local_1a8 = *(double *)(local_140 + 0x20) * local_1a8;
    dVar50 = local_1a8 * dVar13 - dVar11 * local_198;
    dVar45 = local_1a0 * dVar11 - dVar12 * local_1a8;
    dVar9 = local_198 * dVar12 - dVar13 * local_1a0;
    dVar9 = dVar9 + dVar9;
    dVar50 = dVar50 + dVar50;
    dVar45 = dVar45 + dVar45;
    auVar43._0_4_ =
         (float)(dVar45 * dVar6 + local_198 + (dVar50 * dVar11 - dVar9 * dVar12) + dVar39);
    auVar43._4_4_ = (int)((ulonglong)dVar39 >> 0x20);
    auVar43._8_8_ = 0;
    auVar32 = insertps(ZEXT416((uint)(float)((dVar45 * dVar12 - dVar50 * dVar13) +
                                             dVar6 * dVar9 + local_1a8 + *param_6 * param_3[4])),
                       ZEXT416((uint)(float)((dVar13 * dVar9 - dVar11 * dVar45) +
                                             param_3[3] * dVar50 + local_1a0 + param_3[5] * dVar5)),
                       0x1c);
    local_388 = insertps(auVar32,auVar43,0x28);
    local_368 = param_1;
    local_138 = dVar38;
    dStack_130 = dVar10;
    local_128 = dVar37;
    local_120 = dVar31;
    dStack_118 = dVar7;
    local_110 = dVar8;
    if (*(int *)((longlong)param_1 + 0xe8) == 0) {
      uVar30 = 0;
    }
    else {
      local_208 = (double *)0x0;
      uStack_200 = (undefined1 *)0x0;
      FUN_14481578e(&local_208,0x10);
      uVar30 = (ulonglong)uStack_200;
      lVar20 = (longlong)(int)uStack_200;
      uVar16 = (int)uStack_200 + 1;
      uStack_200 = (undefined1 *)CONCAT44(uStack_200._4_4_,uVar16);
      if (uStack_200._4_4_ < uVar16) {
        FUN_1446f48e2(&local_208,uVar30 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_208 + lVar20 * 4) = 0;
      if ((int)uStack_200 != 0) {
        do {
          lVar18 = (longlong)(int)uStack_200;
          uStack_200 = (undefined1 *)CONCAT44(uStack_200._4_4_,(int)uStack_200 + -1);
          lVar25 = (longlong)*(int *)((longlong)local_208 + lVar18 * 4 + -4) * 0x50 +
                   *(longlong *)((longlong)param_1 + 0xe0);
          lVar20 = CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
          lVar18 = 0;
          do {
            puVar14 = uStack_200;
            iVar3 = *(int *)(lVar25 + 0x40 + lVar18 * 4);
            lVar29 = (longlong)iVar3;
            if (lVar29 != -1) {
              lVar21 = lVar18 * 0x20;
              pfVar2 = (float *)(lVar25 + 0x10 + lVar21);
              pfVar1 = (float *)(lVar25 + lVar21);
              auVar40._4_4_ = -(uint)((float)dVar7 < pfVar1[1]);
              auVar40._0_4_ = -(uint)((float)dVar31 < *pfVar1);
              auVar40._8_4_ = -(uint)((float)dVar8 < pfVar1[2]);
              auVar40._12_4_ = -(uint)(0.0 < pfVar1[3]);
              auVar47._4_4_ = -(uint)(pfVar2[1] < (float)dVar10);
              auVar47._0_4_ = -(uint)(*pfVar2 < (float)dVar38);
              auVar47._8_4_ = -(uint)(pfVar2[2] < (float)dVar37);
              auVar47._12_4_ = -(uint)(pfVar2[3] < 0.0);
              iVar19 = movmskps((int)lVar21,auVar40 | auVar47);
              if (iVar19 == 0) {
                iVar19 = *(int *)(lVar25 + 0x48 + lVar18 * 4);
                if (iVar19 == 0) {
                  lVar18 = (longlong)(int)uStack_200;
                  uVar16 = (int)uStack_200 + 1;
                  uStack_200 = (undefined1 *)CONCAT44(uStack_200._4_4_,uVar16);
                  if (uStack_200._4_4_ < uVar16) {
                    FUN_1446f48e2(&local_208,(ulonglong)puVar14 & 0xffffffff);
                  }
                  *(int *)((longlong)local_208 + lVar18 * 4) = iVar3;
                }
                else if (0 < iVar19) {
                  lVar18 = lVar29 << 0x20;
                  uVar30 = lVar29 << 5 | 0x10;
                  do {
                    lVar21 = *(longlong *)((longlong)param_1 + 0xf0);
                    pfVar1 = (float *)(lVar21 + uVar30);
                    pfVar2 = (float *)(lVar21 + -0x10 + uVar30);
                    auVar41._4_4_ = -(uint)((float)dVar7 < pfVar2[1]);
                    auVar41._0_4_ = -(uint)((float)dVar31 < *pfVar2);
                    auVar41._8_4_ = -(uint)((float)dVar8 < pfVar2[2]);
                    auVar41._12_4_ = -(uint)(0.0 < pfVar2[3]);
                    auVar33._4_4_ = -(uint)(pfVar1[1] < (float)dVar10);
                    auVar33._0_4_ = -(uint)(*pfVar1 < (float)dVar38);
                    auVar33._8_4_ = -(uint)(pfVar1[2] < (float)dVar37);
                    auVar33._12_4_ = -(uint)(pfVar1[3] < 0.0);
                    iVar17 = movmskps((int)lVar21,auVar41 | auVar33);
                    if (iVar17 == 0) {
                      lVar22 = lVar18 >> 0x20;
                      lVar21 = *(longlong *)((longlong)local_368 + 0x48);
                      if (*(char *)((longlong)local_368 + 0x80) == '\x01') {
                        lVar4 = *(longlong *)((longlong)local_368 + 0x60);
                        lVar28 = (longlong)*(int *)(lVar4 + lVar22 * 0xc);
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = *(ulonglong *)(lVar21 + lVar28 * 0xc);
                        auVar32 = insertps(auVar35,*(undefined4 *)(lVar21 + 8 + lVar28 * 0xc),0x28);
                        lVar28 = (longlong)*(int *)(lVar4 + 4 + lVar22 * 0xc);
                        auVar44._8_8_ = 0;
                        auVar44._0_8_ = *(ulonglong *)(lVar21 + lVar28 * 0xc);
                        auVar43 = insertps(auVar44,*(undefined4 *)(lVar21 + 8 + lVar28 * 0xc),0x28);
                        uVar23 = (ulonglong)*(int *)(lVar4 + 8 + lVar22 * 0xc);
                      }
                      else {
                        lVar4 = *(longlong *)((longlong)local_368 + 0x70);
                        uVar23 = (ulonglong)*(ushort *)(lVar4 + lVar22 * 6);
                        auVar34._8_8_ = 0;
                        auVar34._0_8_ = *(ulonglong *)(lVar21 + uVar23 * 0xc);
                        auVar32 = insertps(auVar34,*(undefined4 *)(lVar21 + 8 + uVar23 * 0xc),0x28);
                        uVar23 = (ulonglong)*(ushort *)(lVar4 + 2 + lVar22 * 6);
                        auVar42._8_8_ = 0;
                        auVar42._0_8_ = *(ulonglong *)(lVar21 + uVar23 * 0xc);
                        auVar43 = insertps(auVar42,*(undefined4 *)(lVar21 + 8 + uVar23 * 0xc),0x28);
                        uVar23 = (ulonglong)*(ushort *)(lVar4 + 4 + lVar22 * 6);
                      }
                      auVar46._8_8_ = 0;
                      auVar46._0_8_ = *(ulonglong *)(lVar21 + uVar23 * 0xc);
                      auVar47 = insertps(auVar46,*(undefined4 *)(lVar21 + 8 + uVar23 * 0xc),0x28);
                      local_3c8._0_4_ = auVar43._0_4_ * (float)local_378._0_4_;
                      local_3c8._4_4_ = auVar43._4_4_ * (float)local_378._4_4_;
                      local_3c8._8_4_ = auVar43._8_4_ * fStack_370;
                      local_3c8._12_4_ = auVar43._12_4_ * fStack_36c;
                      local_1e8._0_4_ = auVar47._0_4_ * (float)local_378._0_4_;
                      local_1e8._4_4_ = auVar47._4_4_ * (float)local_378._4_4_;
                      local_1e8._8_4_ = auVar47._8_4_ * fStack_370;
                      local_1e8._12_4_ = auVar47._12_4_ * fStack_36c;
                      local_328 = (double)CONCAT44(auVar32._4_4_ * (float)local_378._4_4_,
                                                   auVar32._0_4_ * (float)local_378._0_4_);
                      uStack_320 = (double)CONCAT44(auVar32._12_4_ * fStack_36c,
                                                    auVar32._8_4_ * fStack_370);
                      local_428 = (undefined8 *)CONCAT44(local_428._4_4_,local_398._0_4_);
                      cVar15 = FUN_140685390(&local_328,local_3c8,local_1e8,local_388);
                      uStack_360 = CONCAT71(uStack_360._1_7_,cVar15);
                      if (cVar15 != '\0') goto LAB_140686d49;
                    }
                    lVar29 = lVar29 + 1;
                    lVar18 = lVar18 + 0x100000000;
                    uVar30 = uVar30 + 0x20;
                  } while (lVar29 < iVar19 + iVar3);
                }
              }
            }
            lVar18 = 1;
            cVar15 = (char)lVar20;
            lVar20 = 0;
          } while (cVar15 != '\0');
        } while ((int)uStack_200 != 0);
      }
LAB_140686d49:
      if (local_208 != (double *)0x0) {
        FUN_1400020a8();
      }
      uVar30 = CONCAT71((int7)((ulonglong)lVar20 >> 8),(undefined1)uStack_360);
    }
  }
  else {
    pdVar24 = param_3;
    pdVar26 = local_2f8;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *pdVar26 = *pdVar24;
      pdVar24 = pdVar24 + 1;
      pdVar26 = pdVar26 + 1;
    }
    local_2c8 = local_2c8 * param_6[2];
    dStack_2d0 = dStack_2d0 * param_6[1];
    local_2d8 = local_2d8 * *param_6;
    uStack_2c0 = 0;
    (**(code **)(local_1c8[0] + 0x80))(local_1c8,&local_398);
    FUN_1400c6592(&local_398,&local_328,local_2f8);
    param_4 = ABS(param_4);
    dVar37 = (local_300 + param_4) * dVar8;
    dVar6 = (local_308 + param_4) * dVar7;
    dVar5 = (local_310 + param_4) * dVar31;
    local_300 = (local_318 - param_4) * dVar8;
    local_308 = (uStack_320 - param_4) * dVar7;
    local_310 = (local_328 - param_4) * dVar31;
    local_318 = local_300;
    if (dVar37 <= local_300) {
      local_318 = dVar37;
    }
    uStack_320 = local_308;
    if (dVar6 <= local_308) {
      uStack_320 = dVar6;
    }
    local_328 = local_310;
    if (dVar5 <= local_310) {
      local_328 = dVar5;
    }
    if (local_300 <= dVar37) {
      local_300 = dVar37;
    }
    if (local_308 <= dVar6) {
      local_308 = dVar6;
    }
    if (local_310 <= dVar5) {
      local_310 = dVar5;
    }
    FUN_140d8788e((longlong)param_1 + 0xe0,&local_338,&local_328);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    local_368 = param_3[6] * param_6[2];
    local_398 = *param_3;
    dStack_390 = param_3[1];
    local_388 = *(undefined1 (*) [16])(param_3 + 2);
    fStack_370 = (float)SUB84(param_3[5] * param_6[1],0);
    local_378 = param_3[4] * *param_6;
    fStack_36c = (float)(int)((ulonglong)(param_3[5] * param_6[1]) >> 0x20);
    uStack_360 = 0;
    local_358 = 0x3ff0000000000000;
    uStack_350 = 0x3ff0000000000000;
    local_348 = 0x3ff0000000000000;
    uStack_340 = 0;
    local_3c8._8_8_ = param_1;
    local_3c8._0_8_ = &local_338;
    local_3b8 = param_6;
    local_3a0 = &local_290;
    local_3b0 = local_1c8;
    local_3a8 = &local_398;
    if (*(char *)((longlong)param_1 + 0x80) == '\x01') {
      uVar16 = FUN_146e585e0(local_3c8,(longlong)param_1 + 0x60,param_5);
      uVar30 = (ulonglong)uVar16;
    }
    else if ((longlong)local_330 == 0) {
      uVar30 = 0;
    }
    else {
      local_3d0 = local_338;
      local_3d8 = param_5 + 3;
      lVar20 = 0;
      uVar30 = 0;
      do {
        lVar29 = (longlong)*(int *)(local_3d0 + lVar20);
        lVar18 = *(longlong *)((longlong)param_1 + 0x48);
        lVar25 = *(longlong *)((longlong)param_1 + 0x70);
        uVar23 = (ulonglong)*(ushort *)(lVar25 + lVar29 * 6);
        fVar36 = (float)param_6[2];
        fVar48 = (float)param_6[1];
        fVar49 = (float)*param_6;
        local_128 = (double)(*(float *)(lVar18 + 8 + uVar23 * 0xc) * fVar36);
        dStack_130 = (double)(*(float *)(lVar18 + 4 + uVar23 * 0xc) * fVar48);
        local_138 = (double)(*(float *)(lVar18 + uVar23 * 0xc) * fVar49);
        uVar27 = (ulonglong)*(ushort *)(lVar25 + 2 + lVar29 * 6);
        local_110 = (double)(*(float *)(lVar18 + 8 + uVar27 * 0xc) * fVar36);
        dStack_118 = (double)(*(float *)(lVar18 + 4 + uVar27 * 0xc) * fVar48);
        uVar23 = (ulonglong)*(ushort *)(lVar25 + 4 + lVar29 * 6);
        local_120 = (double)(*(float *)(lVar18 + uVar27 * 0xc) * fVar49);
        local_f8 = (double)(fVar36 * *(float *)(lVar18 + 8 + uVar23 * 0xc));
        local_100 = (double)(fVar48 * *(float *)(lVar18 + 4 + uVar23 * 0xc));
        local_108 = (double)(fVar49 * *(float *)(lVar18 + uVar23 * 0xc));
        local_218 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_230 = 0.0;
        local_238 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_258 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_288 = 0x3ff0000000000000;
        local_280 = 0;
        uStack_278 = 0;
        local_1e8._8_8_ = &LAB_140686536;
        local_1e8._0_8_ = local_1c8;
        local_1d8 = local_1b8;
        local_208 = &local_138;
        uStack_200 = &LAB_1429b1b78;
        local_1f8 = 0;
        local_3e8 = 0x3f50624de0000000;
        local_3f0 = (longlong)&local_288;
        local_3f8 = 0;
        local_400 = local_290;
        local_408 = local_270;
        local_410 = local_26c;
        local_418 = &local_228;
        local_420 = &local_268;
        local_428 = &local_248;
        cVar15 = FUN_14068570a(&local_208,local_1e8,&local_398,&local_230);
        if ((cVar15 != '\0') &&
           (uVar30 = 1, (double)param_5[6] <= local_230 && local_230 != (double)param_5[6])) {
          param_5[6] = local_230;
          param_5[2] = local_218;
          *param_5 = local_228;
          param_5[1] = uStack_220;
          *local_3d8 = local_248;
          local_3d8[1] = uStack_240;
          local_3d8[2] = local_238;
        }
        lVar20 = lVar20 + 4;
      } while ((longlong)local_330 * 4 != lVar20);
    }
    if (local_338 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14068416c(local_1c8);
  if ((local_f0 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar30 & 0xffffff01;
}



// FUNCTION 14068738a FUN_14068738a body=184 status=ok
// SIG undefined FUN_14068738a(void)

undefined8 FUN_14068738a(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_140687444(local_a8,&local_c8,&local_c0,0);
  FUN_140687536(param_1,local_a8);
  FUN_14068416c(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140687444 FUN_140687444 body=242 status=ok
// SIG undefined FUN_140687444(void)

undefined8 *
FUN_140687444(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  
  bVar3 = *(byte *)(*param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar3;
  *(byte *)((longlong)param_1 + 0x1d) = bVar3;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4ba90;
  lVar4 = *param_2;
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar4 = param_1[0x11];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar4 + 0x19);
  param_1[10] = param_4;
  FUN_140684284(param_1,param_3);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 140687536 FUN_140687536 body=279 status=ok
// SIG undefined FUN_140687536(void)

void FUN_140687536(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x88) + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar2;
  *(byte *)((longlong)param_1 + 0x1d) = bVar2;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4ba90;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar1;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return;
}



// FUNCTION 14068764e FUN_14068764e body=891 status=ok
// SIG undefined FUN_14068764e(void)

void FUN_14068764e(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406879ca FUN_1406879ca body=891 status=ok
// SIG undefined FUN_1406879ca(void)

void FUN_1406879ca(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140687d46 FUN_140687d46 body=891 status=ok
// SIG undefined FUN_140687d46(void)

void FUN_140687d46(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406880c2 FUN_1406880c2 body=2597 status=ok
// SIG undefined FUN_1406880c2(void)

ulonglong FUN_1406880c2(double param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5,double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double *local_1d8;
  longlong local_1d0;
  double *local_1c8;
  double *local_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  dVar46 = param_6[2];
  dVar6 = 1.0 / dVar46;
  dVar29 = *param_6;
  dVar47 = param_6[1];
  dVar37 = 1.0 / dVar47;
  dVar51 = 1.0 / dVar29;
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  local_228 = param_3[8];
  dStack_220 = param_3[9];
  dVar49 = param_3[10];
  dVar30 = param_3[6] * dVar46;
  dVar41 = param_3[5] * dVar47;
  dVar48 = param_3[4] * dVar29;
  dVar36 = param_3[3];
  dVar43 = param_3[3];
  local_120 = param_4;
  if (param_5 == (undefined8 *)0x0) {
    dVar52 = *(double *)(param_2 + 0x20);
    dVar53 = *(double *)(param_2 + 0x28);
    auVar24._0_4_ = (float)dVar47;
    auVar24._4_4_ = (int)((ulonglong)dVar47 >> 0x20);
    auVar24._8_8_ = 0;
    local_218 = *(double *)(param_2 + 0x30);
    auVar24 = insertps(ZEXT416((uint)(float)dVar29),auVar24,0x1c);
    local_198 = insertps(auVar24,ZEXT416((uint)(float)dVar46),0x28);
    uStack_210 = 0;
    dVar29 = local_218 * 1.0;
    dVar47 = dVar53 * dVar7 - dVar8 * dVar52;
    dVar50 = dVar29 * dVar8 - dVar9 * dVar53;
    dVar42 = dVar52 * dVar9 - dVar7 * dVar29;
    dVar46 = param_3[3] * 0.0 - param_3[3] * 0.0;
    dVar50 = dVar50 + dVar50;
    dVar42 = dVar42 + dVar42;
    dVar47 = dVar47 + dVar47;
    auVar34._8_8_ = dVar46 + dVar46;
    local_208._8_4_ = SUB84(dVar43,0);
    local_208._0_8_ = dVar36;
    local_208._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    dVar46 = *(double *)(param_2 + 0x10);
    auVar34._0_8_ = dVar47 * dVar36 + dVar29 + (dVar42 * dVar7 - dVar50 * dVar8) + dVar30;
    auVar39._4_12_ = auVar34._4_12_;
    auVar39._0_4_ = (float)auVar34._0_8_;
    local_1b8 = (double)CONCAT44(local_1b8._4_4_,(float)(dVar46 + param_4));
    auVar24 = insertps(ZEXT416((uint)(float)((dVar47 * dVar8 - dVar42 * dVar9) +
                                             dVar36 * dVar50 + dVar52 + dVar48)),
                       ZEXT416((uint)(float)((dVar9 * dVar50 - dVar7 * dVar47) +
                                             dVar43 * dVar42 + dVar53 + dVar41)),0x1c);
    local_1a8 = insertps(auVar24,auVar39,0x28);
    uStack_180 = uStack_180 & 0xffffffffffffff00;
    local_240 = dVar6;
    local_238 = dVar37;
    local_230 = dVar51;
    local_1f8 = dVar49;
    dStack_1f0 = param_3[0xb];
    local_188 = param_1;
    if (*(int *)((longlong)param_1 + 0xe8) == 0) {
      uVar23 = 0;
    }
    else {
      local_118 = 0;
      uStack_110 = 0;
      FUN_14481578e(&local_118,0x10);
      uVar23 = uStack_110;
      lVar20 = (longlong)(int)uStack_110;
      uVar12 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar12);
      if (uStack_110._4_4_ < uVar12) {
        FUN_1446f48e2(&local_118,uVar23 & 0xffffffff);
      }
      *(undefined4 *)(local_118 + lVar20 * 4) = 0;
      if ((int)uStack_110 != 0) {
        dVar52 = local_228 * dVar52;
        dVar53 = dStack_220 * dVar53;
        dVar43 = local_1f8 * local_218;
        dVar29 = dVar53 * dVar7 - dVar8 * dVar52;
        dVar47 = dVar43 * dVar8 - dVar9 * dVar53;
        dVar36 = dVar52 * dVar9 - dVar7 * dVar43;
        dVar47 = dVar47 + dVar47;
        dVar36 = dVar36 + dVar36;
        dVar29 = dVar29 + dVar29;
        dVar48 = dVar48 + (dVar29 * dVar8 - dVar9 * dVar36) +
                          dVar47 * (double)local_208._0_8_ + dVar52;
        dVar41 = dVar41 + (dVar9 * dVar47 - dVar7 * dVar29) +
                          dVar36 * (double)local_208._8_8_ + dVar53;
        dVar30 = dVar30 + dVar29 * (double)local_208._0_8_ + dVar43 +
                          (dVar36 * dVar7 - dVar8 * dVar47);
        param_4 = ABS(param_4);
        dVar29 = (param_4 + dVar46 + dVar30) * local_240;
        dVar47 = ((dVar30 - dVar46) - param_4) * local_240;
        dVar37 = (dVar46 + dVar41 + param_4) * local_238;
        dVar30 = (dVar46 + dVar48 + param_4) * local_230;
        dVar43 = ((dVar41 - dVar46) - param_4) * local_238;
        dVar46 = ((dVar48 - dVar46) - param_4) * local_230;
        dVar36 = dVar43;
        if (dVar37 <= dVar43) {
          dVar36 = dVar37;
        }
        dVar48 = dVar46;
        if (dVar30 <= dVar46) {
          dVar48 = dVar30;
        }
        dVar41 = dVar47;
        if (dVar29 <= dVar47) {
          dVar41 = dVar29;
        }
        if (dVar47 <= dVar29) {
          dVar47 = dVar29;
        }
        if (dVar43 <= dVar37) {
          dVar43 = dVar37;
        }
        if (dVar46 <= dVar30) {
          dVar46 = dVar30;
        }
        do {
          lVar20 = (longlong)(int)uStack_110;
          uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + -1);
          lVar18 = (longlong)*(int *)(local_118 + -4 + lVar20 * 4) * 0x50 +
                   *(longlong *)((longlong)param_1 + 0xe0);
          lVar20 = 0;
          bVar10 = true;
          do {
            bVar19 = bVar10;
            uVar23 = uStack_110;
            iVar3 = *(int *)(lVar18 + 0x40 + lVar20 * 4);
            lVar22 = (longlong)iVar3;
            if (lVar22 != -1) {
              lVar15 = lVar20 * 0x20;
              pfVar2 = (float *)(lVar18 + 0x10 + lVar15);
              pfVar1 = (float *)(lVar18 + lVar15);
              auVar31._4_4_ = -(uint)((float)dVar43 < pfVar1[1]);
              auVar31._0_4_ = -(uint)((float)dVar46 < *pfVar1);
              auVar31._8_4_ = -(uint)((float)dVar47 < pfVar1[2]);
              auVar31._12_4_ = -(uint)(0.0 < pfVar1[3]);
              auVar25._4_4_ = -(uint)(pfVar2[1] < (float)dVar36);
              auVar25._0_4_ = -(uint)(*pfVar2 < (float)dVar48);
              auVar25._8_4_ = -(uint)(pfVar2[2] < (float)dVar41);
              auVar25._12_4_ = -(uint)(pfVar2[3] < 0.0);
              iVar14 = movmskps((int)lVar15,auVar31 | auVar25);
              if (iVar14 == 0) {
                iVar14 = *(int *)(lVar18 + 0x48 + lVar20 * 4);
                if (iVar14 == 0) {
                  lVar20 = (longlong)(int)uStack_110;
                  uVar12 = (int)uStack_110 + 1;
                  uStack_110 = CONCAT44(uStack_110._4_4_,uVar12);
                  if (uStack_110._4_4_ < uVar12) {
                    FUN_1446f48e2(&local_118,uVar23 & 0xffffffff);
                  }
                  *(int *)(local_118 + lVar20 * 4) = iVar3;
                }
                else if (0 < iVar14) {
                  lVar20 = lVar22 << 0x20;
                  uVar23 = lVar22 << 5 | 0x10;
                  do {
                    lVar15 = *(longlong *)((longlong)param_1 + 0xf0);
                    pfVar1 = (float *)(lVar15 + uVar23);
                    pfVar2 = (float *)(lVar15 + -0x10 + uVar23);
                    auVar32._4_4_ = -(uint)((float)dVar43 < pfVar2[1]);
                    auVar32._0_4_ = -(uint)((float)dVar46 < *pfVar2);
                    auVar32._8_4_ = -(uint)((float)dVar47 < pfVar2[2]);
                    auVar32._12_4_ = -(uint)(0.0 < pfVar2[3]);
                    auVar26._4_4_ = -(uint)(pfVar1[1] < (float)dVar36);
                    auVar26._0_4_ = -(uint)(*pfVar1 < (float)dVar48);
                    auVar26._8_4_ = -(uint)(pfVar1[2] < (float)dVar41);
                    auVar26._12_4_ = -(uint)(pfVar1[3] < 0.0);
                    iVar13 = movmskps((int)lVar15,auVar32 | auVar26);
                    if (iVar13 == 0) {
                      lVar16 = lVar20 >> 0x20;
                      lVar15 = *(longlong *)((longlong)local_188 + 0x48);
                      if (*(char *)((longlong)local_188 + 0x80) == '\x01') {
                        lVar4 = *(longlong *)((longlong)local_188 + 0x60);
                        lVar21 = (longlong)*(int *)(lVar4 + lVar16 * 0xc);
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = *(ulonglong *)(lVar15 + lVar21 * 0xc);
                        auVar24 = insertps(auVar28,*(undefined4 *)(lVar15 + 8 + lVar21 * 0xc),0x28);
                        lVar21 = (longlong)*(int *)(lVar4 + 4 + lVar16 * 0xc);
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = *(ulonglong *)(lVar15 + lVar21 * 0xc);
                        auVar34 = insertps(auVar35,*(undefined4 *)(lVar15 + 8 + lVar21 * 0xc),0x28);
                        uVar17 = (ulonglong)*(int *)(lVar4 + 8 + lVar16 * 0xc);
                      }
                      else {
                        lVar4 = *(longlong *)((longlong)local_188 + 0x70);
                        uVar17 = (ulonglong)*(ushort *)(lVar4 + lVar16 * 6);
                        auVar27._8_8_ = 0;
                        auVar27._0_8_ = *(ulonglong *)(lVar15 + uVar17 * 0xc);
                        auVar24 = insertps(auVar27,*(undefined4 *)(lVar15 + 8 + uVar17 * 0xc),0x28);
                        uVar17 = (ulonglong)*(ushort *)(lVar4 + 2 + lVar16 * 6);
                        auVar33._8_8_ = 0;
                        auVar33._0_8_ = *(ulonglong *)(lVar15 + uVar17 * 0xc);
                        auVar34 = insertps(auVar33,*(undefined4 *)(lVar15 + 8 + uVar17 * 0xc),0x28);
                        uVar17 = (ulonglong)*(ushort *)(lVar4 + 4 + lVar16 * 6);
                      }
                      auVar38._8_8_ = 0;
                      auVar38._0_8_ = *(ulonglong *)(lVar15 + uVar17 * 0xc);
                      auVar39 = insertps(auVar38,*(undefined4 *)(lVar15 + 8 + uVar17 * 0xc),0x28);
                      fVar5 = local_198._12_4_;
                      fVar40 = local_198._0_4_;
                      fVar44 = local_198._4_4_;
                      fVar45 = local_198._8_4_;
                      local_1e8._0_4_ = auVar34._0_4_ * fVar40;
                      local_1e8._4_4_ = auVar34._4_4_ * fVar44;
                      local_1e8._8_4_ = auVar34._8_4_ * fVar45;
                      local_1e8._12_4_ = auVar34._12_4_ * fVar5;
                      local_108._0_4_ = auVar39._0_4_ * fVar40;
                      local_108._4_4_ = auVar39._4_4_ * fVar44;
                      local_108._8_4_ = auVar39._8_4_ * fVar45;
                      local_108._12_4_ = auVar39._12_4_ * fVar5;
                      local_158 = (double)CONCAT44(auVar24._4_4_ * fVar44,auVar24._0_4_ * fVar40);
                      uStack_150 = (double)CONCAT44(auVar24._12_4_ * fVar5,auVar24._8_4_ * fVar45);
                      local_248 = local_1b8._0_4_;
                      cVar11 = FUN_140685390(&local_158,local_1e8,local_108,local_1a8);
                      uStack_180 = CONCAT71(uStack_180._1_7_,cVar11);
                      if (cVar11 != '\0') goto LAB_140688724;
                    }
                    lVar22 = lVar22 + 1;
                    lVar20 = lVar20 + 0x100000000;
                    uVar23 = uVar23 + 0x20;
                  } while (lVar22 < iVar14 + iVar3);
                }
              }
            }
            lVar20 = 1;
            bVar10 = false;
          } while (bVar19);
        } while ((int)uStack_110 != 0);
      }
LAB_140688724:
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      uVar23 = CONCAT71((int7)((ulonglong)param_1 >> 8),(undefined1)uStack_180);
    }
  }
  else {
    dVar52 = local_228 * *(double *)(param_2 + 0x20);
    dVar53 = dStack_220 * *(double *)(param_2 + 0x28);
    dVar49 = dVar49 * *(double *)(param_2 + 0x30);
    dVar46 = dVar53 * dVar7 - dVar8 * dVar52;
    dVar29 = dVar49 * dVar8 - dVar9 * dVar53;
    dVar47 = dVar52 * dVar9 - dVar7 * dVar49;
    dVar29 = dVar29 + dVar29;
    dVar47 = dVar47 + dVar47;
    dVar46 = dVar46 + dVar46;
    dVar48 = dVar48 + (dVar46 * dVar8 - dVar47 * dVar9) + dVar36 * dVar29 + dVar52;
    dVar41 = dVar41 + (dVar9 * dVar29 - dVar7 * dVar46) + dVar43 * dVar47 + dVar53;
    dVar30 = dVar30 + dVar46 * dVar36 + dVar49 + (dVar47 * dVar7 - dVar29 * dVar8);
    dVar46 = *(double *)(param_2 + 0x10);
    param_4 = ABS(param_4);
    dVar29 = (param_4 + dVar46 + dVar30) * dVar6;
    dVar36 = (dVar46 + dVar41 + param_4) * dVar37;
    dVar47 = (dVar46 + dVar48 + param_4) * dVar51;
    local_130 = ((dVar30 - dVar46) - param_4) * dVar6;
    local_138 = ((dVar41 - dVar46) - param_4) * dVar37;
    local_140 = ((dVar48 - dVar46) - param_4) * dVar51;
    local_148 = local_130;
    if (dVar29 <= local_130) {
      local_148 = dVar29;
    }
    uStack_150 = local_138;
    if (dVar36 <= local_138) {
      uStack_150 = dVar36;
    }
    local_158 = local_140;
    if (dVar47 <= local_140) {
      local_158 = dVar47;
    }
    if (local_130 <= dVar29) {
      local_130 = dVar29;
    }
    if (local_138 <= dVar36) {
      local_138 = dVar36;
    }
    if (local_140 <= dVar47) {
      local_140 = dVar47;
    }
    FUN_140d8788e((longlong)param_1 + 0xe0,local_108);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    local_188 = param_3[6] * param_6[2];
    local_1b8 = *param_3;
    dStack_1b0 = param_3[1];
    local_1a8 = *(undefined1 (*) [16])(param_3 + 2);
    local_1c8 = &local_1b8;
    local_198._8_8_ = param_3[5] * param_6[1];
    local_198._0_8_ = param_3[4] * *param_6;
    uStack_180 = 0;
    local_178 = 0x3ff0000000000000;
    uStack_170 = 0x3ff0000000000000;
    local_168 = 0x3ff0000000000000;
    uStack_160 = 0;
    local_1e8._8_8_ = param_1;
    local_1e8._0_8_ = local_108;
    local_1d8 = param_6;
    local_1c0 = &local_120;
    local_1d0 = param_2;
    if (*(char *)((longlong)param_1 + 0x80) == '\x01') {
      uVar12 = FUN_146e571e2(local_1e8,(longlong)param_1 + 0x60,param_5);
    }
    else {
      uVar12 = FUN_140688e5e(local_1e8,(longlong)param_1 + 0x70,param_5);
    }
    uVar23 = (ulonglong)uVar12;
    if (local_108._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffff01;
}



// FUNCTION 140688ae8 FUN_140688ae8 body=884 status=ok
// SIG undefined FUN_140688ae8(void)

void FUN_140688ae8(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140688e5e FUN_140688e5e body=935 status=ok
// SIG undefined FUN_140688e5e(void)

uint FUN_140688e5e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  uint local_1a4;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar12 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar12 == 0) {
    local_1a4 = 0;
  }
  else {
    lVar1 = *(longlong *)*param_1;
    lVar2 = param_1[1];
    local_1a0 = param_3 + 3;
    lVar9 = 0;
    local_1a4 = 0;
    do {
      pdVar3 = (double *)param_1[2];
      fVar13 = (float)pdVar3[2];
      lVar8 = (longlong)*(int *)(lVar1 + lVar9);
      fVar14 = (float)pdVar3[1];
      lVar4 = *param_2;
      fVar15 = (float)*pdVar3;
      uVar10 = (ulonglong)*(ushort *)(lVar4 + lVar8 * 6);
      lVar5 = *(longlong *)(lVar2 + 0x48);
      uVar11 = (ulonglong)*(ushort *)(lVar4 + 2 + lVar8 * 6);
      uVar7 = (ulonglong)*(ushort *)(lVar4 + 4 + lVar8 * 6);
      local_d8 = (double)(*(float *)(lVar5 + 8 + uVar10 * 0xc) * fVar13);
      local_e0 = (double)(*(float *)(lVar5 + 4 + uVar10 * 0xc) * fVar14);
      local_e8 = (double)(*(float *)(lVar5 + uVar10 * 0xc) * fVar15);
      local_c0 = (double)(*(float *)(lVar5 + 8 + uVar11 * 0xc) * fVar13);
      local_c8 = (double)(*(float *)(lVar5 + 4 + uVar11 * 0xc) * fVar14);
      local_d0 = (double)(*(float *)(lVar5 + uVar11 * 0xc) * fVar15);
      local_a8 = (double)(fVar13 * *(float *)(lVar5 + 8 + uVar7 * 0xc));
      local_b0 = (double)(fVar14 * *(float *)(lVar5 + 4 + uVar7 * 0xc));
      local_b8 = (double)(fVar15 * *(float *)(lVar5 + uVar7 * 0xc));
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_140 = 0.0;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = 0x3ff0000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_1d0 = *(undefined8 *)param_1[5];
      local_100 = param_1[3];
      local_f8 = &LAB_1406863be;
      local_f0 = *(undefined8 *)(local_100 + 0x10);
      local_118 = &local_e8;
      local_110 = &LAB_1429b1b78;
      local_108 = 0;
      local_1b8 = 0x3f50624de0000000;
      local_1c0 = &local_198;
      local_1c8 = 0;
      local_1d8 = local_180;
      local_1e0 = local_17c;
      local_1e8 = &local_138;
      local_1f0 = &local_178;
      local_1f8 = &local_158;
      uVar6 = FUN_14068570a(&local_118,&local_100,param_1[4],&local_140);
      if (((char)uVar6 != '\0') &&
         (local_1a4 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1),
         (double)param_3[6] <= local_140 && local_140 != (double)param_3[6])) {
        param_3[6] = local_140;
        param_3[2] = local_128;
        *param_3 = local_138;
        param_3[1] = uStack_130;
        *(undefined4 *)local_1a0 = (undefined4)local_158;
        *(undefined4 *)((longlong)local_1a0 + 4) = local_158._4_4_;
        *(undefined4 *)(local_1a0 + 1) = (undefined4)uStack_150;
        *(undefined4 *)((longlong)local_1a0 + 0xc) = uStack_150._4_4_;
        local_1a0[2] = local_148;
      }
      lVar9 = lVar9 + 4;
    } while (lVar12 * 4 != lVar9);
  }
  if ((local_a0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_1a4 & 0xffffff01;
}



// FUNCTION 140689206 FUN_140689206 body=99 status=ok
// SIG undefined FUN_140689206(void)

void FUN_140689206(longlong param_1)

{
  if (*(int *)(param_1 + 0x38) == -1) {
    FUN_1406b43d8(*(longlong *)(param_1 + 0x100) + 0x4f40,param_1 + 0x34,1);
  }
  else {
    FUN_1406894da(*(longlong *)(param_1 + 0x100) + 0x4e90,*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  }
  FUN_1406892b0(*(longlong *)(param_1 + 0x100) + 0x4bb8,*(undefined4 *)(param_1 + 0x34));
  FUN_14068926a(param_1);
  return;
}



// FUNCTION 14068926a FUN_14068926a body=70 status=ok
// SIG undefined FUN_14068926a(void)

void FUN_14068926a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1471e6fa8(param_1 + 8,0);
  }
  while (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_144a12870();
  }
  while (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_144a12870();
  }
  return;
}



// FUNCTION 1406892b0 FUN_1406892b0 body=103 status=ok
// SIG undefined FUN_1406892b0(void)

undefined8 FUN_1406892b0(longlong *param_1,int param_2)

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
          FUN_140689318(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140689318 FUN_140689318 body=95 status=ok
// SIG undefined FUN_140689318(void)

void FUN_140689318(longlong *param_1,int param_2)

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
  FUN_140689378(param_1,param_2,1);
  return;
}



// FUNCTION 140689378 FUN_140689378 body=99 status=ok
// SIG undefined FUN_140689378(void)

void FUN_140689378(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      FUN_1406893db(*plVar2,(int)plVar2[1]);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140689452(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406893db FUN_1406893db body=119 status=ok
// SIG undefined FUN_1406893db(void)

void FUN_1406893db(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x3f0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-4] + 0x38))();
      }
      FUN_14002d124(plVar1 + -10);
      if (plVar1[-0x1a] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x3e] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x86;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140689452 FUN_140689452 body=136 status=ok
// SIG undefined FUN_140689452(void)

void FUN_140689452(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1406894da FUN_1406894da body=734 status=ok
// SIG undefined FUN_1406894da(void)

void FUN_1406894da(longlong param_1,ulonglong param_2)

{
  undefined1 *_Dst;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_478 [32];
  undefined1 local_458 [1024];
  longlong local_58;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_478;
  lVar11 = (longlong)(int)param_2;
  lVar12 = lVar11 * 0x420;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x410 + lVar12);
  lVar10 = *(longlong *)(param_1 + 0x80) + lVar12;
  uVar5 = (uint)(param_2 >> 0x20);
  iVar4 = ~uVar5 + iVar3;
  if (iVar4 != 0) {
    iVar7 = 1;
    if (iVar4 < 1) {
      iVar7 = iVar4;
    }
    lVar8 = *(longlong *)(lVar10 + 0x400);
    if (*(longlong *)(lVar10 + 0x400) == 0) {
      lVar8 = lVar10;
    }
    memmove((void *)(((longlong)param_2 >> 0x20) * 0x40 + lVar8),
            (void *)((longlong)(iVar3 - iVar7) * 0x40 + lVar8),(longlong)iVar7 << 6);
    iVar3 = *(int *)(lVar10 + 0x410);
  }
  *(int *)(lVar10 + 0x410) = iVar3 + -1;
  if ((int)uVar5 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x410 + lVar12)) {
    lVar12 = *(longlong *)(param_1 + 0x80) + lVar12;
    lVar10 = *(longlong *)(lVar12 + 0x400);
    if (lVar10 != 0) {
      lVar12 = lVar10;
    }
    *(ulonglong *)(*(longlong *)(lVar12 + 0x30 + ((longlong)param_2 >> 0x20) * 0x40) + 0x38) =
         param_2;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar11 * 8);
  *piVar1 = *piVar1 + -1;
  lVar12 = *(longlong *)(param_1 + 0x60);
  uVar6 = 0xffffffff;
  if (*(uint *)(lVar12 + 4 + lVar11 * 8) < 7) {
    uVar6 = param_2 & 0xffffffff;
  }
  uVar5 = (uint)uVar6;
  if ((int)param_2 != 0) {
    do {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)((int)param_2 - 1U >> 3) * 4);
      param_2 = (ulonglong)(int)uVar5;
      piVar1 = (int *)(lVar12 + 4 + param_2 * 8);
      *piVar1 = *piVar1 + -1;
      lVar12 = *(longlong *)(param_1 + 0x60);
      if (*(uint *)(lVar12 + 4 + param_2 * 8) < 7) {
        uVar6 = (ulonglong)uVar5;
      }
      uVar5 = (uint)uVar6;
    } while (param_2 != 0);
  }
  if ((uVar5 != 0xffffffff) && (lVar10 = (longlong)(int)uVar5, *(int *)(lVar12 + lVar10 * 8) != -1))
  {
    lVar11 = lVar10 * 0x420;
    uVar2 = *(uint *)(lVar12 + 4 + lVar10 * 8);
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x410 + lVar11) < (int)uVar2) {
      local_58 = 0;
      local_48 = 0x1000000000;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar2);
      }
      if (0x10 < uVar2) {
        FUN_1471e6f36(local_458);
      }
      FUN_14095273a(param_1,uVar5);
      lVar12 = *(longlong *)(param_1 + 0x80);
      _Dst = (undefined1 *)(lVar12 + lVar11);
      if (_Dst != local_458) {
        if (local_58 == 0) {
          memmove(_Dst,local_458,0x400);
        }
        if (*(longlong *)(_Dst + 0x400) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(_Dst + 0x400) = local_58;
        local_58 = 0;
        *(undefined4 *)(_Dst + 0x410) = (undefined4)local_48;
        *(undefined4 *)(_Dst + 0x414) = local_48._4_4_;
        local_48 = 0x1000000000;
        lVar12 = *(longlong *)(param_1 + 0x80);
      }
      if (0 < *(int *)(lVar12 + 0x410 + lVar11)) {
        uVar6 = (ulonglong)uVar5;
        lVar10 = 0x30;
        lVar8 = 0;
        do {
          lVar9 = *(longlong *)(lVar12 + lVar11 + 0x400);
          if (lVar9 == 0) {
            lVar9 = lVar12 + lVar11;
          }
          *(ulonglong *)(*(longlong *)(lVar9 + lVar10) + 0x38) = uVar6;
          lVar8 = lVar8 + 1;
          lVar12 = *(longlong *)(param_1 + 0x80);
          lVar10 = lVar10 + 0x40;
          uVar6 = uVar6 + 0x100000000;
        } while (lVar8 < *(int *)(lVar12 + 0x410 + lVar11));
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406897ba FUN_1406897ba body=132 status=ok
// SIG undefined FUN_1406897ba(void)

undefined8 FUN_1406897ba(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_140689840();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_147080a0a(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1406897fc;
    }
  }
  uVar6 = 0;
LAB_1406897fc:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140689840 FUN_140689840 body=198 status=ok
// SIG undefined FUN_140689840(void)

int FUN_140689840(longlong *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  longlong *plVar6;
  void *_Buf1;
  void *_Buf2;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar2 = *param_1;
      puVar3 = (uint *)*param_3;
      uVar1 = *puVar3;
      do {
        puVar4 = *(uint **)(lVar2 + (longlong)iVar7 * 0x18);
        if (*puVar4 == uVar1) {
          if ((((void *)((ulonglong)puVar4[1] + (longlong)puVar4) ==
                (void *)((ulonglong)puVar3[1] + (longlong)puVar3)) ||
              (iVar5 = memcmp((void *)((ulonglong)puVar4[1] + (longlong)puVar4),
                              (void *)((ulonglong)puVar3[1] + (longlong)puVar3),
                              (ulonglong)*puVar4 << 3), iVar5 == 0)) && (puVar4[2] == puVar3[2])) {
            _Buf1 = (void *)((longlong)puVar4 + (ulonglong)puVar4[3] + 8);
            _Buf2 = (void *)((longlong)puVar3 + (ulonglong)puVar3[3] + 8);
            if (_Buf1 == _Buf2) {
              return iVar7;
            }
            iVar5 = memcmp(_Buf1,_Buf2,(ulonglong)puVar4[2] * 0x14);
            if (iVar5 == 0) {
              return iVar7;
            }
          }
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 140689906 FUN_140689906 body=712 status=ok
// SIG undefined FUN_140689906(void)

int * FUN_140689906(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140689aea;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_140689aea:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140689bda FUN_140689bda body=221 status=ok
// SIG undefined FUN_140689bda(void)

void FUN_140689bda(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xc60);
  if (DAT_14c86a9f8 == '\x01') {
    if (iVar1 == 2) goto LAB_140689c24;
    if (iVar1 != 1) {
      return;
    }
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) {
      return;
    }
    iVar1 = *(int *)(lVar2 + 0xc60);
  }
  if (iVar1 == 4) {
    return;
  }
LAB_140689c24:
  if ((param_2 != '\0') || (*(char *)(param_1 + 0x91) == '\x01')) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    if (BVar3 != 0) {
      *(undefined1 *)(param_1 + 0x91) = 0;
      FUN_140689cb8(param_1 + 0x98,param_1 + 0x1d8);
      FUN_140689fa0(param_1 + 0x98,param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x000140689c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      return;
    }
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  return;
}



// FUNCTION 140689cb8 FUN_140689cb8 body=634 status=ok
// SIG undefined FUN_140689cb8(void)

void FUN_140689cb8(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    uVar9 = 1;
    uVar12 = 0;
    iVar8 = 0;
    iVar13 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x60);
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar9 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar9 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar9 == uVar12) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar6[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar9 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0x50);
      lVar7 = (longlong)iVar8 * 0x20;
      iVar4 = *(int *)(lVar11 + 4 + lVar7);
      if ((((iVar4 == 0) || (uVar3 = *(uint *)(lVar11 + lVar7), (int)uVar3 < 0)) ||
          (DAT_14c9647dc <= (int)uVar3)) ||
         (((lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 == 0 ||
           (*(int *)(lVar10 + 0x10) != iVar4)) || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1457335c4(param_2,iVar2);
        }
        lVar10 = *param_2;
        *(undefined8 *)(lVar10 + (longlong)iVar2 * 0x10) = *(undefined8 *)(lVar11 + lVar7 + 8);
        lVar11 = *(longlong *)(lVar11 + lVar7 + 0x10);
        *(longlong *)(lVar10 + 8 + (longlong)iVar2 * 0x10) = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        FUN_140689f32(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + lVar7));
        FUN_14573356a((longlong *)(param_1 + 0x50),iVar8);
        iVar2 = *(int *)(param_1 + 0x78);
      }
      uVar14 = uVar14 & ~(uint)uVar9;
      puVar6 = *(uint **)(param_1 + 0x70);
      if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x60);
      }
      iVar8 = (int)uVar12;
      lVar11 = (longlong)iVar8;
      uVar3 = puVar6[lVar11] & uVar14;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar4 <= iVar8) {
          return;
        }
        lVar7 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar3 = puVar6[lVar11 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar11 == lVar7) {
            return;
          }
        }
        uVar12 = (ulonglong)(iVar8 + (int)lVar7 + 1);
        uVar14 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar2);
  }
  return;
}



// FUNCTION 140689f32 FUN_140689f32 body=109 status=ok
// SIG undefined FUN_140689f32(void)

void FUN_140689f32(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar3 + 0x20) = 0;
    }
    plVar4 = *(longlong **)(lVar3 + 0x28);
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
    FUN_1400020a8(lVar3);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 140689fa0 FUN_140689fa0 body=673 status=ok
// SIG undefined FUN_140689fa0(void)

void FUN_140689fa0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  
  iVar3 = *(int *)(param_1 + 200);
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar14 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0xb0);
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar15 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar15 = uVar13;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar13) {
          return;
        }
        iVar14 = iVar14 + 0x20;
        uVar10 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar9 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar9) {
      iVar9 = iVar3;
    }
  }
  if (iVar9 < iVar3) {
    uVar10 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(param_1 + 0xa0);
      lVar8 = (longlong)iVar9 * 0x30;
      iVar5 = *(int *)(lVar12 + 4 + lVar8);
      if ((((iVar5 == 0) || (uVar4 = *(uint *)(lVar12 + lVar8), (int)uVar4 < 0)) ||
          (DAT_14c9647dc <= (int)uVar4)) ||
         (((plVar11 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar11 == (longlong *)0x0 || ((int)plVar11[2] != iVar5)) ||
          (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (*plVar11 == 0)))))) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_145733698(param_2,iVar3);
        }
        lVar2 = *param_2;
        *(undefined8 *)(lVar2 + (longlong)iVar3 * 0x10) = *(undefined8 *)(lVar12 + lVar8 + 0x18);
        lVar12 = *(longlong *)(lVar12 + lVar8 + 0x20);
        *(longlong *)(lVar2 + 8 + (longlong)iVar3 * 0x10) = lVar12;
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          UNLOCK();
        }
        FUN_14068a242(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18 + lVar8));
        FUN_14068a2b8((longlong *)(param_1 + 0xa0),iVar9);
        iVar3 = *(int *)(param_1 + 200);
      }
      uVar10 = uVar10 & ~(uint)uVar15;
      puVar7 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0xb0);
      }
      iVar9 = (int)uVar13;
      lVar12 = (longlong)iVar9;
      uVar4 = puVar7[lVar12] & uVar10;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar5 <= iVar9) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar4 = puVar7[lVar12 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar12 == lVar8) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar9 + (int)lVar8 + 1);
        uVar10 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar3);
  }
  return;
}



// FUNCTION 14068a242 FUN_14068a242 body=118 status=ok
// SIG undefined FUN_14068a242(void)

void FUN_14068a242(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    if (*(undefined8 **)(lVar3 + 0x20) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar3 + 0x20) = 0;
    }
    plVar4 = *(longlong **)(lVar3 + 0x28);
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
    FUN_1400020a8(lVar3);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14068a2b8 FUN_14068a2b8 body=159 status=ok
// SIG undefined FUN_14068a2b8(void)

void FUN_14068a2b8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x30;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0x2c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar7 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar2 + (longlong)iVar4 * 0x30 + 0x28);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar2 + lVar3 + 0x28);
  plVar5 = *(longlong **)(*param_1 + 0x20 + lVar3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_14068a358(param_1,param_2);
  return;
}



// FUNCTION 14068a358 FUN_14068a358 body=122 status=ok
// SIG undefined FUN_14068a358(void)

void FUN_14068a358(longlong *param_1,int param_2)

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



// FUNCTION 14068a3ec FUN_14068a3ec body=1 status=ok
// SIG undefined FUN_14068a3ec(void)

void FUN_14068a3ec(void)

{
  return;
}



// FUNCTION 14068a3ee FUN_14068a3ee body=727 status=ok
// SIG undefined FUN_14068a3ee(void)

void FUN_14068a3ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong lStack_80;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)(param_1 + 0x650);
  iVar11 = *(int *)(param_1 + 0x65c);
  FUN_14068a6c6(*(undefined8 *)(param_1 + 0x650),*(undefined4 *)(param_1 + 0x658));
  *(undefined4 *)(param_1 + 0x658) = 0;
  if ((iVar11 < 0) && (*(int *)(param_1 + 0x65c) != 0)) {
    FUN_1488e537c(plVar3,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x80);
  iVar11 = *(int *)(lVar8 + 0x758);
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (*(int *)(param_1 + 0x65c) < iVar11) {
    FUN_1488e537c(plVar3);
    lVar8 = *(longlong *)(param_1 + 0x80);
    iVar11 = *(int *)(lVar8 + 0x758);
  }
  if (iVar11 != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x750);
    lVar12 = 0;
    do {
      plVar6 = *(longlong **)(lVar8 + lVar12);
      if (plVar6 != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar8 + 8 + lVar12);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
        local_88 = 0;
        lStack_80 = 0;
        local_a0 = plVar6;
        local_98 = plVar7;
        if (param_1 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = param_1 + 0x30;
          if (DAT_14c950c29 != '\0') {
            FUN_1456cec3c(param_1);
          }
        }
        local_88 = param_1;
        lStack_80 = lVar9;
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_70,&local_88,&local_a0);
        plVar6 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_98 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        local_a0 = local_70;
        local_98 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        if (local_70 == (longlong *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(*local_70 + 8))();
        }
        local_90 = 0;
        FUN_14485c47a(&local_90,uVar10);
        iVar5 = *(int *)(param_1 + 0x658);
        *(uint *)(param_1 + 0x658) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x65c) < iVar5 + 1U) {
          FUN_1488e53ee(plVar3,iVar5);
        }
        puVar4 = (undefined8 *)(*plVar3 + (longlong)iVar5 * 0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        FUN_14029d0b6(puVar4,&local_a0);
        plVar6 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_98 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        plVar6 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_68 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_68)(local_68);
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
      lVar12 = lVar12 + 0x18;
    } while ((longlong)iVar11 * 0x18 != lVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068a6c6 FUN_14068a6c6 body=77 status=ok
// SIG undefined FUN_14068a6c6(void)

void FUN_14068a6c6(longlong param_1,int param_2)

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



// FUNCTION 14068a718 FUN_14068a718 body=252 status=ok
// SIG undefined FUN_14068a718(void)

void FUN_14068a718(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    plVar1 = (longlong *)(param_1 + 0x40);
    uVar6 = 0;
    do {
      lVar3 = *plVar1;
      iVar5 = (int)uVar6;
      plVar2 = *(longlong **)(lVar3 + uVar6 * 0x10);
      (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
      if (*(longlong *)(*(longlong *)(lVar3 + uVar6 * 0x10) + 0x30) == 0) {
        FUN_145733792(plVar1,uVar6);
        FUN_14068a814(plVar1);
        iVar5 = iVar5 + -1;
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0x48));
  }
  if (0 < *(int *)(param_1 + 0x58)) {
    plVar1 = (longlong *)(param_1 + 0x50);
    uVar4 = 0;
    do {
      lVar3 = *plVar1;
      plVar2 = *(longlong **)(lVar3 + (ulonglong)uVar4 * 0x10);
      (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
      if (*(longlong *)(*(longlong *)(lVar3 + (ulonglong)uVar4 * 0x10) + 0x30) == 0) {
        FUN_145733792(plVar1,uVar4);
        FUN_14068a814(plVar1);
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x58));
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x30) << 4;
    lVar7 = *(longlong *)(param_1 + 0x28) + 8;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar7,0,0);
      lVar7 = lVar7 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14068a814 FUN_14068a814 body=142 status=ok
// SIG undefined FUN_14068a814(void)

void FUN_14068a814(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14068a8a8 FUN_14068a8a8 body=57 status=ok
// SIG undefined FUN_14068a8a8(void)

void FUN_14068a8a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a768 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a768 = FUN_140002ddd(FUN_1464cac1a,uVar1,L"GbxBodyNodeState_Param");
  }
  return;
}



// FUNCTION 14068a8e1 FUN_14068a8e1 body=391 status=ok
// SIG undefined FUN_14068a8e1(void)

void FUN_14068a8e1(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 0x58;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1);
    puVar4 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 0x58;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14a247dd0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0x3f80000000000000;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0x3f80000000000000;
  puVar4[0x3c] = 0;
  puVar4[0x3d] = 0x3f80000000000000;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0x3f80000000000000;
  puVar3 = puVar4 + 2;
  memset(puVar3,0,0x2b0);
  puVar4[0x51] = DAT_14c9c0d80;
  puVar4[0x52] = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  puVar4[0x53] = DAT_14c9c0de0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar4;
  FUN_14068ab5c(param_1,puVar3,param_2);
  local_40 = puVar3;
  FUN_144a12b9e();
  local_48 = DAT_14c9e81c8;
  FUN_14068aa6a(param_1 + 0x1a8,plVar1,&local_40);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068aa6a FUN_14068aa6a body=242 status=ok
// SIG undefined FUN_14068aa6a(void)

undefined8 *
FUN_14068aa6a(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_144a12b9e();
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9e81f8;
  puVar6[4] = DAT_14c9e81f8;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9e81b0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a247dd8;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 14068ab5c FUN_14068ab5c body=1156 status=ok
// SIG undefined FUN_14068ab5c(void)

void FUN_14068ab5c(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_68,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_68);
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar4 != 0)) {
    lVar4 = lVar4 + 8;
  }
  else {
    lVar4 = 0;
  }
  *(undefined8 *)(param_2 + 0x270) = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,0x10);
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  local_78 = plVar1;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  local_70 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_70,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x290) = puVar7;
  lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,4);
  plVar1 = local_78;
  if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_78,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar7[1] = *(undefined8 *)(lVar4 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar7 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar4;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_70,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x298) = puVar7;
  if (((*(longlong *)(&DAT_14ca814b0 + (ulonglong)(param_3 & 0xffff) * 0x3c) == DAT_14ca838f8) ||
      (*(longlong *)(&DAT_14ca814b0 + (ulonglong)(param_3 & 0xffff) * 0x3c) == DAT_14ca81490)) ||
     ((&DAT_14ca814b8)[(ulonglong)(param_3 & 0xffff) * 0xf] == 1)) {
    local_50 = FUN_144735828(&DAT_14ca63b10,param_1,4);
    uVar3 = local_68 >> 8;
    local_68 = local_68 & 0xffffff00;
    uStack_64 = 0;
    uStack_60 = 0xffffffff;
    local_58 = 0;
    if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
      local_68 = CONCAT31((int3)uVar3,0x1c);
    }
    puVar5 = (undefined8 *)FUN_14475683e(local_70,local_78,local_50 + 8,&local_68);
  }
  else {
    local_80 = 0;
    local_88 = 0;
    lVar4 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,2);
    plVar1 = local_78;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar5 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(local_78,0x50);
      puVar5 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar5 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar5[1] = *(undefined8 *)(lVar4 + 8);
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 3;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
    *puVar5 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar5 + 5) = 0x20;
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000000;
    puVar5[7] = 0;
    puVar5[8] = lVar4;
    iVar2 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_70,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar5;
    *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  }
  *(undefined8 **)(param_2 + 0x2a0) = puVar5;
  *(undefined8 **)(param_2 + 0x2a8) = puVar5;
  *(undefined8 *)(param_2 + 0x264) = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068afe2 FUN_14068afe2 body=226 status=ok
// SIG undefined FUN_14068afe2(void)

longlong * FUN_14068afe2(longlong *param_1)

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
  pcVar13 = FUN_1462d5018;
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



// FUNCTION 14068b0c6 FUN_14068b0c6 body=2635 status=ok
// SIG undefined FUN_14068b0c6(void)

void FUN_14068b0c6(longlong param_1,double *param_2,int param_3,double param_4,double *param_5,
                  double *param_6)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  uVar13 = 0;
  uVar12 = 0xffffffff;
  lVar15 = (longlong)param_3;
  if (lVar3 == 0) {
    uVar9 = 0xffffffff;
    uVar11 = 0xffffffff;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x60);
    if (cVar2 == '\x01') {
      lVar3 = *(longlong *)(lVar3 + 0x40);
      uVar12 = (uint)*(byte *)(lVar3 + lVar15 * 4);
      uVar9 = (uint)*(byte *)(lVar3 + 1 + lVar15 * 4);
      uVar11 = (uint)*(byte *)(lVar3 + 2 + lVar15 * 4);
      uVar13 = (uint)*(byte *)(lVar3 + 3 + lVar15 * 4);
    }
    else if (cVar2 == '\x02') {
      lVar3 = *(longlong *)(lVar3 + 0x40);
      uVar12 = (uint)*(short *)(lVar3 + lVar15 * 8);
      uVar9 = (uint)*(short *)(lVar3 + 2 + lVar15 * 8);
      uVar11 = (uint)*(short *)(lVar3 + 4 + lVar15 * 8);
      uVar13 = (uint)*(short *)(lVar3 + 6 + lVar15 * 8);
    }
    else {
      uVar9 = 0xffffffff;
      uVar11 = 0xffffffff;
      if (cVar2 == '\x03') {
        lVar3 = *(longlong *)(lVar3 + 0x40);
        lVar14 = lVar15 * 0x10;
        uVar12 = *(uint *)(lVar3 + lVar14);
        uVar9 = *(uint *)(lVar3 + 4 + lVar14);
        uVar11 = *(uint *)(lVar3 + 8 + lVar14);
        uVar13 = *(uint *)(lVar3 + 0xc + lVar14);
      }
    }
  }
  dVar26 = param_5[2];
  dVar30 = 1.0 / dVar26;
  dVar1 = *param_5;
  dVar34 = param_5[1];
  dVar32 = 1.0 / dVar34;
  dVar22 = 1.0 / dVar1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (2 < (int)uVar13) {
    lVar14 = *(longlong *)(param_1 + 0x20);
    lVar10 = (longlong)(int)uVar12;
    fVar17 = (float)dVar30;
    fVar16 = *(float *)(lVar14 + 0x14 + lVar10 * 0x18) * fVar17;
    fVar28 = (float)dVar32;
    fVar19 = *(float *)(lVar14 + 0x10 + lVar10 * 0x18) * fVar28;
    fVar31 = (float)dVar22;
    fVar36 = *(float *)(lVar14 + 0xc + lVar10 * 0x18) * fVar31;
    fVar37 = 1.0 / SQRT(fVar16 * fVar16 + fVar36 * fVar36 + fVar19 * fVar19);
    dVar4 = (double)(fVar16 * fVar37);
    dVar7 = (double)(fVar19 * fVar37);
    dVar20 = (double)(fVar37 * fVar36);
    lVar10 = (longlong)(int)uVar9;
    fVar16 = *(float *)(lVar14 + 0x14 + lVar10 * 0x18) * fVar17;
    fVar19 = *(float *)(lVar14 + 0x10 + lVar10 * 0x18) * fVar28;
    fVar36 = *(float *)(lVar14 + 0xc + lVar10 * 0x18) * fVar31;
    fVar37 = 1.0 / SQRT(fVar16 * fVar16 + fVar36 * fVar36 + fVar19 * fVar19);
    dVar21 = (double)(fVar16 * fVar37);
    dVar23 = (double)(fVar19 * fVar37);
    dVar27 = (double)(fVar37 * fVar36);
    lVar10 = (longlong)(int)uVar11;
    fVar17 = fVar17 * *(float *)(lVar14 + 0x14 + lVar10 * 0x18);
    fVar28 = fVar28 * *(float *)(lVar14 + 0x10 + lVar10 * 0x18);
    fVar31 = fVar31 * *(float *)(lVar14 + 0xc + lVar10 * 0x18);
    fVar16 = 1.0 / SQRT(fVar17 * fVar17 + fVar31 * fVar31 + fVar28 * fVar28);
    dVar33 = (double)(fVar17 * fVar16);
    dVar5 = (double)(fVar28 * fVar16);
    dVar6 = (double)(fVar16 * fVar31);
    dVar29 = dVar20 * dVar23 - dVar7 * dVar27;
    dVar18 = dVar4 * dVar27 - dVar20 * dVar21;
    dVar8 = dVar7 * dVar21 - dVar4 * dVar23;
    dVar24 = dVar29 * dVar33 + dVar8 * dVar6 + dVar18 * dVar5;
    if (1e-06 <= dVar24 * dVar24) {
      dVar26 = dVar26 * (double)*(float *)(lVar3 + 8 + lVar15 * 0xc);
      dVar34 = dVar34 * (double)*(float *)(lVar3 + 4 + lVar15 * 0xc);
      dVar1 = dVar1 * (double)*(float *)(lVar3 + lVar15 * 0xc);
      dVar25 = (dVar26 - dVar4 * param_4) * dVar4 +
               (dVar1 - dVar20 * param_4) * dVar20 + (dVar34 - dVar7 * param_4) * dVar7;
      dVar22 = (dVar26 - dVar21 * param_4) * dVar21 +
               (dVar1 - dVar27 * param_4) * dVar27 + (dVar34 - dVar23 * param_4) * dVar23;
      dVar32 = (dVar26 - dVar33 * param_4) * dVar33 +
               (dVar1 - dVar6 * param_4) * dVar6 + (dVar34 - dVar5 * param_4) * dVar5;
      dVar30 = (dVar29 * dVar32 +
               dVar22 * (dVar6 * dVar7 - dVar20 * dVar5) +
               dVar25 * (dVar27 * dVar5 - dVar23 * dVar6)) / dVar24;
      dVar20 = (dVar18 * dVar32 +
               (dVar33 * dVar20 - dVar4 * dVar6) * dVar22 +
               (dVar21 * dVar6 - dVar27 * dVar33) * dVar25) / dVar24;
      dVar24 = (dVar8 * dVar32 +
               (dVar5 * dVar4 - dVar7 * dVar33) * dVar22 +
               (dVar23 * dVar33 - dVar21 * dVar5) * dVar25) / dVar24;
      *param_2 = dVar24;
      param_2[1] = dVar20;
      param_2[2] = dVar30;
      if (param_6 == (double *)0x0) {
        return;
      }
      dVar26 = dVar26 - dVar30;
      dVar34 = dVar34 - dVar20;
      dVar1 = dVar1 - dVar24;
      *param_6 = SQRT(dVar26 * dVar26 + dVar1 * dVar1 + dVar34 * dVar34) - param_4;
      return;
    }
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
  }
  fVar16 = *(float *)(lVar3 + 8 + lVar15 * 0xc);
  fVar17 = *(float *)(lVar3 + lVar15 * 0xc);
  fVar19 = *(float *)(lVar3 + 4 + lVar15 * 0xc);
  if (uVar13 == 1) {
    dVar26 = dVar26 * (double)fVar16;
    dVar34 = dVar34 * (double)fVar19;
    dVar1 = dVar1 * (double)fVar17;
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar15 = (longlong)(int)uVar12;
    fVar16 = (float)dVar30 * *(float *)(lVar3 + 0x14 + lVar15 * 0x18);
    fVar17 = (float)dVar32 * *(float *)(lVar3 + 0x10 + lVar15 * 0x18);
    fVar19 = (float)dVar22 * *(float *)(lVar3 + 0xc + lVar15 * 0x18);
    fVar28 = 1.0 / SQRT(fVar16 * fVar16 + fVar19 * fVar19 + fVar17 * fVar17);
    dVar22 = (double)(fVar17 * fVar28);
    dVar32 = (double)(fVar28 * fVar19);
    dVar30 = (double)(fVar16 * fVar28);
  }
  else {
    if (uVar13 != 2) {
      *param_2 = (double)(fVar17 * (float)dVar1);
      param_2[1] = (double)(fVar19 * (float)dVar34);
      param_2[2] = (double)(fVar16 * (float)dVar26);
      return;
    }
    dVar26 = dVar26 * (double)fVar16;
    dVar34 = dVar34 * (double)fVar19;
    dVar1 = dVar1 * (double)fVar17;
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar15 = (longlong)(int)uVar12;
    fVar31 = *(float *)(lVar3 + 0x14 + lVar15 * 0x18) * (float)dVar30;
    fVar36 = *(float *)(lVar3 + 0x10 + lVar15 * 0x18) * (float)dVar32;
    fVar37 = *(float *)(lVar3 + 0xc + lVar15 * 0x18) * (float)dVar22;
    fVar35 = 1.0 / SQRT(fVar31 * fVar31 + fVar37 * fVar37 + fVar36 * fVar36);
    lVar15 = (longlong)(int)uVar9;
    fVar16 = (float)dVar30 * *(float *)(lVar3 + 0x14 + lVar15 * 0x18);
    fVar17 = (float)dVar32 * *(float *)(lVar3 + 0x10 + lVar15 * 0x18);
    fVar19 = (float)dVar22 * *(float *)(lVar3 + 0xc + lVar15 * 0x18);
    fVar28 = 1.0 / SQRT(fVar16 * fVar16 + fVar19 * fVar19 + fVar17 * fVar17);
    dVar20 = (double)(fVar16 * fVar28) + (double)(fVar31 * fVar35);
    dVar18 = (double)(fVar17 * fVar28) + (double)(fVar36 * fVar35);
    dVar21 = (double)(fVar28 * fVar19) + (double)(fVar35 * fVar37);
    dVar27 = dVar20 * dVar20 + dVar21 * dVar21 + dVar18 * dVar18;
    if (((dVar27 != 1.0) || (dVar22 = dVar18, dVar32 = dVar21, dVar30 = dVar20, NAN(dVar27))) &&
       (dVar22 = DAT_14c8464e8, dVar32 = DAT_14c8464e0, dVar30 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar27)) {
      dVar30 = 1.0 / SQRT(dVar27);
      dVar22 = dVar18 * dVar30;
      dVar32 = dVar21 * dVar30;
      dVar30 = dVar20 * dVar30;
    }
  }
  *param_2 = dVar1 - dVar32 * param_4;
  param_2[1] = dVar34 - dVar22 * param_4;
  param_2[2] = dVar26 - dVar30 * param_4;
  return;
}



// FUNCTION 14068bb12 FUN_14068bb12 body=415 status=ok
// SIG undefined FUN_14068bb12(void)

void FUN_14068bb12(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  uint local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) && (*(int *)(param_1 + 100) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0)))) &&
     ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 100) &&
      ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
    lVar8 = *(longlong *)(param_1 + 0x48);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
    local_47 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
    local_4c = *(undefined4 *)(param_1 + 0x58);
    lVar2 = *param_2;
    lStack_60 = param_2[1];
    local_54 = 0x3f80000000000000;
    local_48 = 0;
    uVar1 = (uint)lStack_60;
    uVar7 = 0;
    local_68 = lVar2;
    if ((uint)lStack_60 == 0) {
LAB_14068bc17:
      local_58 = uVar7;
      if (uVar7 < (uint)lStack_60) {
        do {
          uVar7 = local_58;
          uVar5 = FUN_14030a32e((longlong)(int)local_58 * 0x38 + lVar2);
          cVar3 = FUN_14068bcb2(uVar4,uVar5,*(undefined1 *)(lVar8 + 0xa0));
          FUN_1402d7d58(&local_68,*(char *)(lVar8 + 0xa1) == cVar3);
          local_58 = uVar7 + 1;
          if ((local_58 < uVar1) &&
             ((*(byte *)(lVar2 + 0x34 + (longlong)(int)local_58 * 0x38) & 1) != 0)) {
            uVar7 = uVar7 + 2;
            do {
              local_58 = uVar1;
              if (uVar1 == uVar7) break;
              lVar6 = (longlong)(int)uVar7;
              local_58 = uVar7;
              uVar7 = uVar7 + 1;
            } while ((*(byte *)(lVar2 + 0x34 + lVar6 * 0x38) & 1) != 0);
          }
        } while (local_58 < uVar1);
      }
    }
    else {
      do {
        if ((*(byte *)(lVar2 + 0x34 + (longlong)(int)uVar7 * 0x38) & 1) == 0) goto LAB_14068bc17;
        uVar7 = uVar7 + 1;
      } while ((uint)lStack_60 != uVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14068bcb2 FUN_14068bcb2 body=544 status=ok
// SIG undefined FUN_14068bcb2(void)

uint FUN_14068bcb2(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint unaff_EBP;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((((*(int *)(param_1 + 0x9c) == 0) || (uVar3 = *(uint *)(param_1 + 0x98), (int)uVar3 < 0))
         || (DAT_14c9647dc <= (int)uVar3)) ||
        ((plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x9c))))) ||
       (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
        ((*plVar9 == 0 || (lVar7 = FUN_144860cdc(), lVar7 == 0)))))) ||
      (*(char *)(lVar7 + 0xf8) == '\0')) && (*(char *)(param_1 + 0xd8) == '\0')) {
    plVar9 = *(longlong **)(param_1 + 0x80);
    if (plVar9 != (longlong *)0x0) {
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) goto LAB_14068bd57;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
      lVar7 = *(longlong *)(param_1 + 0x78);
      if (lVar7 != 0) {
        uVar8 = (**(code **)(*(longlong *)(lVar7 + 8) + 0x10))(lVar7 + 8);
        unaff_EBP = FUN_14068bcb2(uVar8,param_2,param_3);
      }
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
      if (lVar7 != 0) goto LAB_14068be3a;
    }
LAB_14068bd57:
    if (param_2 != 0) {
      uVar3 = *(uint *)(param_2 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar6 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar10);
        }
        LOCK();
        uVar6 = *(uint *)(lVar7 + 0x10);
        bVar11 = uVar6 == 0;
        if (bVar11) {
          *(uint *)(lVar7 + 0x10) = uVar10;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar6 = uVar10;
        }
      }
      local_40 = CONCAT44(uVar6,uVar3);
      iVar5 = FUN_145733920((longlong *)(param_1 + 0x18),uVar3 ^ uVar6);
      if (iVar5 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x18);
        unaff_EBP = 0;
        if ((lVar7 + (longlong)iVar5 * 0x34 != 0) &&
           (lVar7 = lVar7 + (longlong)iVar5 * 0x34 + 8, lVar7 != 0)) {
          unaff_EBP = FUN_14011834e(lVar7,param_3);
        }
        goto LAB_14068be3a;
      }
    }
  }
  unaff_EBP = 0;
LAB_14068be3a:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 14068bed4 FUN_14068bed4 body=832 status=ok
// SIG undefined FUN_14068bed4(void)

void FUN_14068bed4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [40];
  longlong *local_70;
  LPCRITICAL_SECTION local_68;
  longlong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_68 = (LPCRITICAL_SECTION)(param_1 + 0x68);
    EnterCriticalSection(local_68);
    if (*(longlong *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    local_60 = param_1 + 8;
    local_70 = (longlong *)(param_1 + 0x18);
    lVar9 = 0;
    lVar8 = 0;
    lVar12 = *(longlong *)(param_1 + 8);
    do {
      lVar3 = *(longlong *)(lVar12 + 8);
      iVar7 = *(int *)(lVar12 + 0x50);
      *(int *)(lVar12 + 0x50) = iVar7 + -1;
      if (iVar7 < 2) {
        uVar4 = *(ulonglong *)(lVar12 + 0x40);
        plVar10 = *(longlong **)(lVar12 + 0x48);
        local_58 = uVar4;
        if (plVar10 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          local_50 = plVar10;
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
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
        plVar1 = local_70;
        uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        iVar7 = FUN_14068c298(local_70,uVar6 >> 0x10 ^ uVar6,&local_58);
        plVar5 = local_50;
        if (iVar7 == -1) {
          lVar11 = 0;
        }
        else {
          lVar11 = (longlong)iVar7 * 0x28 + *plVar1;
        }
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
        plVar10 = (longlong *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          plVar10 = (longlong *)0x0;
        }
        FUN_14068c232(lVar12,local_60,plVar10);
        lVar11 = lVar12;
        if (lVar9 != 0) {
          *(longlong *)(lVar9 + 8) = lVar12;
          lVar11 = lVar8;
        }
        lVar8 = lVar11;
        lVar9 = lVar12;
        if (*plVar10 == 0) {
          local_58 = *(ulonglong *)(lVar12 + 0x40);
          plVar10 = *(longlong **)(lVar12 + 0x48);
          if (plVar10 == (longlong *)0x0) {
            local_50 = (longlong *)0x0;
            FUN_14068c454(local_70,&local_58);
          }
          else {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            local_50 = plVar10;
            FUN_14068c454(local_70,&local_58);
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
          if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c)) {
            FUN_14068c710(local_70);
          }
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
        }
      }
      lVar12 = lVar3;
    } while (lVar3 != 0);
    LeaveCriticalSection(local_68);
    while (lVar8 != 0) {
      lVar9 = *(longlong *)(lVar8 + 8);
      if ((*(int *)(lVar8 + 0x28) != 0) && (*(longlong **)(lVar8 + 0x20) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar8 + 0x20) + 0x60))();
      }
      FUN_14068c37a(lVar8);
      FUN_1400020a8(lVar8);
      lVar8 = lVar9;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14068c232 FUN_14068c232 body=101 status=ok
// SIG undefined FUN_14068c232(void)

void FUN_14068c232(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)param_1[1];
  puVar4 = (undefined8 *)(*param_1 + 8);
  if (*param_1 == 0) {
    puVar4 = param_2;
  }
  *puVar4 = plVar3;
  plVar2 = param_2 + 1;
  if (plVar3 != (longlong *)0x0) {
    plVar2 = plVar3;
  }
  *plVar2 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_1[3];
  plVar3 = param_3;
  if (param_1[2] != 0) {
    plVar3 = (longlong *)(param_1[2] + 0x18);
  }
  *plVar3 = lVar1;
  plVar3 = (longlong *)(lVar1 + 0x10);
  if (lVar1 == 0) {
    plVar3 = param_3 + 1;
  }
  *plVar3 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14068c298 FUN_14068c298 body=225 status=ok
// SIG undefined FUN_14068c298(void)

int FUN_14068c298(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 14068c37a FUN_14068c37a body=218 status=ok
// SIG undefined FUN_14068c37a(void)

void FUN_14068c37a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14068c3ac;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14068c3ac:
  plVar3 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14068c454 FUN_14068c454 body=588 status=ok
// SIG undefined FUN_14068c454(void)

void FUN_14068c454(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong *puVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar12 = (int *)((longlong)plVar7 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar5 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    uVar9 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar7 + uVar9 * 4);
      do {
        puVar13 = (ulonglong *)((longlong)iVar6 * 0x28 + *param_1);
        uVar9 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar13;
        plVar4 = (longlong *)puVar13[1];
        if (plVar4 != (longlong *)0x0) {
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
            piVar12 = (int *)((longlong)plVar4 + 0xc);
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (*piVar12 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar12 = (int *)((longlong)plVar7 + 0xc);
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (*piVar12 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (uVar3 == uVar9) {
          iVar6 = (int)*puVar8;
          plVar7 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[8];
          }
          lVar2 = *param_1 + (longlong)iVar6 * 0x28;
          lVar11 = (longlong)*(int *)(lVar2 + 0x24);
          iVar10 = *(int *)((longlong)plVar7 + lVar11 * 4);
          if (iVar10 == iVar6) {
            piVar12 = (int *)((longlong)plVar7 + lVar11 * 4);
          }
          else {
            do {
              piVar12 = (int *)(*param_1 + (longlong)iVar10 * 0x28 + 0x20);
              iVar10 = *piVar12;
            } while (iVar10 != iVar6);
          }
          *piVar12 = *(int *)(lVar2 + 0x20);
          plVar7 = *(longlong **)(*param_1 + 8 + (longlong)iVar6 * 0x28);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar7 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar12 = (int *)((longlong)plVar7 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          FUN_14068c6a0(param_1,iVar6);
          break;
        }
        iVar6 = (int)puVar13[4];
        puVar8 = puVar13 + 4;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar12 = (int *)((longlong)plVar7 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014068c69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14068c6a0 FUN_14068c6a0 body=112 status=ok
// SIG undefined FUN_14068c6a0(void)

void FUN_14068c6a0(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14068c710 FUN_14068c710 body=484 status=ok
// SIG undefined FUN_14068c710(void)

void FUN_14068c710(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[9] != 0x80) {
    FUN_14068c90e(param_1,0x80);
    *(undefined4 *)(param_1 + 9) = 0x80;
    if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1402a265a(param_1);
    return;
  }
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < 0x20) {
    puVar1 = (uint *)(param_1 + 2);
    iVar2 = (int)param_1[5];
    local_4c = 1;
    if (iVar2 == 0) {
      local_38 = 0;
      local_50 = 0;
      local_3c = 0;
    }
    else {
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = puVar1;
      }
      uVar6 = *puVar4;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar9 = 0;
        uVar8 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar8 = uVar9;
        }
        local_50 = (int)uVar8 + 1;
        local_38 = (int)uVar8 * 0x20 + 0x20;
        iVar7 = 0;
        do {
          local_3c = iVar2;
          if (uVar8 == uVar9) goto LAB_14068c7f6;
          iVar7 = iVar7 + 0x20;
          uVar6 = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar6 == 0);
        local_50 = (int)uVar9;
        local_38 = iVar7;
      }
      else {
        local_38 = 0;
        local_50 = 0;
      }
      local_4c = -uVar6 & uVar6;
      uVar8 = (ulonglong)local_4c * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
      if (iVar2 <= local_3c) {
        local_3c = iVar2;
      }
    }
LAB_14068c7f6:
    local_40 = 0xffffffff;
    local_58 = param_1;
    local_48 = puVar1;
    if (local_3c != iVar2) {
      do {
        do {
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_58 + 0x24 + (longlong)local_3c * 0x28) * 4)
               = 0xffffffff;
          local_40 = local_40 & ~local_4c;
          FUN_1449c0562(&local_50);
        } while (local_3c != iVar2);
      } while ((local_48 != puVar1) || (local_58 != param_1));
    }
  }
  else {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 14068c90e FUN_14068c90e body=490 status=ok
// SIG undefined FUN_14068c90e(void)

void FUN_14068c90e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  local_54 = 1;
  if (iVar4 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    if (uVar8 == 0) {
      iVar10 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar10 = iVar4 + -1;
      }
      uVar12 = 0;
      uVar11 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar11 = uVar12;
      }
      local_58 = (int)uVar11 + 1;
      local_40 = (int)uVar11 * 0x20 + 0x20;
      iVar10 = 0;
      do {
        local_44 = iVar4;
        if (uVar11 == uVar12) goto LAB_14068c9cb;
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar9[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar8 == 0);
      local_58 = (int)uVar12;
      local_40 = iVar10;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar8 & uVar8;
    uVar11 = (ulonglong)local_54 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar4 <= local_44) {
      local_44 = iVar4;
    }
  }
LAB_14068c9cb:
  local_48 = 0xffffffff;
  local_60 = param_1;
  local_50 = puVar1;
  if (local_44 < iVar4) {
    do {
      plVar5 = *(longlong **)(*local_60 + 8 + (longlong)local_44 * 0x28);
      if (plVar5 != (longlong *)0x0) {
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
      local_48 = local_48 & ~local_54;
      FUN_1449c0562(&local_58);
    } while (local_44 < (int)local_50[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar8 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar8) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar8) {
      uVar7 = uVar8;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14068cafa FUN_14068cafa body=42 status=ok
// SIG undefined FUN_14068cafa(void)

void FUN_14068cafa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14068cb24(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 14068cb24 FUN_14068cb24 body=696 status=ok
// SIG undefined FUN_14068cb24(void)

void FUN_14068cb24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    if ((*(char *)(param_1 + 0x13) == '\0') && ((longlong)*(int *)(param_1 + 0x70) != 0)) {
      lVar8 = *(longlong *)(param_1 + 0x68);
      lVar11 = (longlong)*(int *)(param_1 + 0x70) * 0x20 + lVar8;
      do {
        lVar7 = FUN_1448b0550(*(undefined8 *)(param_1 + 0x98),lVar8);
        if (lVar7 != 0) {
          uVar6 = *(uint *)(lVar7 + 0x10);
          if (0 < (longlong)(int)uVar6) {
            iVar10 = -uVar6;
            uVar12 = (longlong)(int)uVar6;
            do {
              lVar3 = *(longlong *)(lVar7 + 8);
              if (*(longlong *)(lVar3 + -8 + uVar12 * 8) == param_1) {
                if (uVar12 != uVar6) {
                  iVar9 = uVar6 + iVar10;
                  if (0 < iVar9) {
                    iVar9 = 1;
                  }
                  memmove((void *)(lVar3 + uVar12 * 8 + -8),
                          (void *)(lVar3 + (longlong)(int)(uVar6 - iVar9) * 8),(longlong)iVar9 << 3)
                  ;
                  uVar6 = *(uint *)(lVar7 + 0x10);
                }
                uVar6 = uVar6 - 1;
                *(uint *)(lVar7 + 0x10) = uVar6;
              }
              iVar10 = iVar10 + 1;
              bVar5 = 1 < uVar12;
              uVar12 = uVar12 - 1;
            } while (bVar5);
          }
        }
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != lVar11);
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_14068ce61(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14068ce29(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_14068cddc(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_14068cc9f:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x40) = 0;
      goto LAB_14068cc9f;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) == 0) {
LAB_14068ccb5:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto LAB_14068ccb5;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14068ccdb;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14068ccdb:
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014068cdba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14068cddc FUN_14068cddc body=77 status=ok
// SIG undefined FUN_14068cddc(void)

void FUN_14068cddc(longlong param_1,int param_2)

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



// FUNCTION 14068ce29 FUN_14068ce29 body=56 status=ok
// SIG undefined FUN_14068ce29(void)

void FUN_14068ce29(longlong param_1,int param_2)

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



// FUNCTION 14068ce61 FUN_14068ce61 body=77 status=ok
// SIG undefined FUN_14068ce61(void)

void FUN_14068ce61(longlong param_1,int param_2)

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



// FUNCTION 14068cebc FUN_14068cebc body=715 status=ok
// SIG undefined FUN_14068cebc(void)

undefined8 FUN_14068cebc(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = DAT_14cb85e78;
  local_80 = DAT_14cb85e70;
  FUN_1448075d0(&local_70);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar7 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar4[9];
      }
      iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & (uint)local_70) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == (uint)local_70) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_14068cf75;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_14068cf75:
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar5 != (byte *)0x0) && ((*(byte *)*puVar5 & 3) == 1)) {
    local_78 = DAT_14cb85e90;
    local_80 = DAT_14cb85e88;
    FUN_1448075d0(&local_70);
    pbVar2 = (byte *)*param_2;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar4 = &DAT_14c9a1288;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
        plVar7 = plVar4 + 8;
        if ((longlong *)plVar4[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[9];
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar4[10] - 1U & (uint)local_70) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar4 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar4 + (longlong)iVar6 * 0x40) == (uint)local_70) {
              if (((lVar1 != 0) &&
                  (puVar8 = (undefined8 *)(lVar1 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
              goto LAB_14068d031;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar8 = &DAT_14c9a1308;
LAB_14068d031:
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar8 != (byte *)0x0) && ((~*(byte *)*puVar8 & 3) == 0)) {
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_5c = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      lStack_38 = 0;
      uVar3 = FUN_140643e6c();
      FUN_1446e7478(puVar8,&local_70,uVar3,0);
      FUN_14068d188(puVar5,&local_80,0);
      FUN_14068d1cc(param_1,&local_80,&local_70);
      lVar1 = lStack_38;
      if (lStack_38 != 0) {
        FUN_144a2da94(lStack_38);
        FUN_1400020a8(lVar1);
      }
    }
  }
  FUN_14068d358(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14068d188 FUN_14068d188 body=68 status=ok
// SIG undefined FUN_14068d188(void)

longlong FUN_14068d188(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) && (*(longlong *)(pbVar1 + 8) != 0)) {
    param_3 = *(longlong *)(pbVar1 + 8);
  }
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_14052b5e0(param_2,param_3,0);
  return param_2;
}



// FUNCTION 14068d1cc FUN_14068d1cc body=250 status=ok
// SIG undefined FUN_14068d1cc(void)

void FUN_14068d1cc(longlong param_1,int *param_2,int *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1446dda88(param_1 + 0x48,0);
  }
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  FUN_140641d04(param_1 + 0x60);
  if (*param_2 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0xb;
    FUN_140c25b54();
    local_30 = param_2[2];
    local_38 = *(undefined8 *)param_2;
    FUN_144928d62(param_1 + 0x30,0);
    if (*param_3 != 0) {
      local_40 = param_3[2];
      local_48 = *(undefined8 *)param_3;
      FUN_144928d62(param_1 + 0x30,1);
    }
    FUN_14068d2c8(param_3 + 4,param_1 + 0x60);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14068d2c8 FUN_14068d2c8 body=143 status=ok
// SIG undefined FUN_14068d2c8(void)

void FUN_14068d2c8(char *param_1,char *param_2)

{
  longlong lVar1;
  
  *param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
  if ((*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10)) ||
     (*(int *)(param_2 + 0x18) != *(int *)(param_1 + 0x18))) {
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
  }
  if ((*param_1 == '\x03') && (*(longlong *)(param_1 + 0x28) != 0)) {
    if (param_2 != param_1) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_1 + 0x28);
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      if (lVar1 != 0) goto LAB_14068d342;
    }
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x28);
    if (lVar1 != 0) {
      param_2[0x28] = '\0';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
LAB_14068d342:
      FUN_144a2da94(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14068d358 FUN_14068d358 body=960 status=ok
// SIG undefined FUN_14068d358(void)

undefined8 FUN_14068d358(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar3,0);
  local_58 = DAT_14cb85e30;
  local_60 = DAT_14cb85e28;
  FUN_1448075d0(local_50);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar8 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar5[9];
      }
      iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & local_50[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar4 = *plVar5 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar7 * 0x40) == local_50[0]) {
            if ((((lVar4 != 0) &&
                 (puVar6 = (undefined8 *)(lVar4 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                ((byte *)*puVar6 != (byte *)0x0)) && ((*(byte *)*puVar6 & 0x40) == 0))
            goto LAB_14068d423;
            break;
          }
          iVar7 = *(int *)(lVar4 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar6 = &DAT_14c9a1308;
LAB_14068d423:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar6 != (byte *)0x0) && ((*(byte *)*puVar6 & 3) != 0)) {
    lVar4 = FUN_145be7d48(param_1);
    FUN_14068d78e(lVar4 + 0x10,puVar6);
  }
  local_58 = DAT_14cb85e60;
  local_60 = DAT_14cb85e58;
  FUN_1448075d0(local_50);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar8 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar5[9];
      }
      iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & local_50[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar4 = *plVar5 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar7 * 0x40) == local_50[0]) {
            if (((lVar4 != 0) &&
                (puVar6 = (undefined8 *)(lVar4 + 0x28), puVar6 != (undefined8 *)0x0)) &&
               (((byte *)*puVar6 != (byte *)0x0 && ((*(byte *)*puVar6 & 0x40) == 0))))
            goto LAB_14068d4d8;
            break;
          }
          iVar7 = *(int *)(lVar4 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar6 = &DAT_14c9a1308;
LAB_14068d4d8:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar6 != (byte *)0x0) && ((*(byte *)*puVar6 & 3) != 0)) {
    lVar4 = FUN_145733b3e(param_1);
    pbVar1 = (byte *)*puVar6;
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(pbVar1 + 8);
    }
    uVar2 = FUN_1457339d6(uVar3,0);
    *(undefined1 *)(lVar4 + 0x10) = uVar2;
  }
  local_58 = DAT_14cb85e48;
  local_60 = DAT_14cb85e40;
  FUN_1448075d0(local_50);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar8 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar5[9];
      }
      iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & local_50[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar4 = *plVar5 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar7 * 0x40) == local_50[0]) {
            if ((((lVar4 != 0) &&
                 (puVar6 = (undefined8 *)(lVar4 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                ((byte *)*puVar6 != (byte *)0x0)) && ((*(byte *)*puVar6 & 0x40) == 0))
            goto LAB_14068d58d;
            break;
          }
          iVar7 = *(int *)(lVar4 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar6 = &DAT_14c9a1308;
LAB_14068d58d:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar6 != (byte *)0x0) && ((*(byte *)*puVar6 & 3) != 0)) {
    lVar4 = FUN_140c80b38(param_1);
    pbVar1 = (byte *)*puVar6;
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(pbVar1 + 8);
    }
    uVar2 = FUN_145733a8a(uVar3,0);
    *(undefined1 *)(lVar4 + 0x10) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14068d71a FUN_14068d71a body=57 status=ok
// SIG undefined FUN_14068d71a(void)

void FUN_14068d71a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba98 = FUN_140002ddd(FUN_14652dc22,uVar1,L"MissionActionType_FactChange");
  }
  return;
}



// FUNCTION 14068d754 FUN_14068d754 body=57 status=ok
// SIG undefined FUN_14068d754(void)

void FUN_14068d754(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bb00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bb00 = FUN_140002ddd(FUN_14652ddde,uVar1,L"MissionActionType_PlayMoment");
  }
  return;
}



// FUNCTION 14068d78e FUN_14068d78e body=45 status=ok
// SIG undefined FUN_14068d78e(void)

undefined8 FUN_14068d78e(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_140822ef4(param_1,uVar2,1);
  return 1;
}



// FUNCTION 14068d7bc FUN_14068d7bc body=57 status=ok
// SIG undefined FUN_14068d7bc(void)

void FUN_14068d7bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b900 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b900 = FUN_140002ddd(FUN_14652d560,uVar1,L"MissionActionCondition_PreCompletionFilter")
    ;
  }
  return;
}



// FUNCTION 14068d7f6 FUN_14068d7f6 body=1482 status=ok
// SIG undefined FUN_14068d7f6(void)

void FUN_14068d7f6(longlong param_1,byte param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  DWORD DVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  byte bVar11;
  longlong *plVar12;
  byte bVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auStack_b8 [40];
  longlong *local_90;
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
  lVar4 = *(longlong *)(param_1 + 0x6d8);
  if ((lVar4 != 0) && (DVar5 = GetCurrentThreadId(), DVar5 != *(DWORD *)(lVar4 + 0x20))) {
    FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
  }
  lVar4 = *(longlong *)(param_1 + 0x2a8);
  if ((byte)(*(byte *)(param_1 + 0x440) ^ 1 | param_2) == 1) {
    if ((longlong)*(int *)(lVar4 + 0x110) != 0) {
      puVar6 = *(uint **)(lVar4 + 0x108);
      puVar1 = puVar6 + *(int *)(lVar4 + 0x110);
      do {
        uVar3 = *puVar6;
        if ((-1 < (longlong)(int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x18))) {
          if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
            lVar8 = *(longlong *)(param_1 + 0x3d0);
            if (*(longlong *)(param_1 + 0x3d0) == 0) {
              lVar8 = param_1 + 0x3c8;
            }
            iVar9 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x3d8) + 0x7fffffffU & uVar3) *
                                     4);
            if (iVar9 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc) == uVar3)
                goto LAB_14068d8a8;
                iVar9 = *(int *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc + 4);
              } while (iVar9 != -1);
            }
          }
          FUN_14068de82((longlong)(int)uVar3 * 0xa8 + *(longlong *)(param_1 + 0x10));
        }
LAB_14068d8a8:
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
    if (((param_2 == 0) && (*DAT_14cb0a640 != 0)) && (0 < *DAT_14cb0a658)) {
      plVar12 = (longlong *)(param_1 + 0x3e0);
      *(undefined4 *)(param_1 + 1000) = 0;
      if (*(int *)(param_1 + 0x3ec) < 0) {
        FUN_147d64136(plVar12);
      }
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      if ((longlong)*(int *)(lVar4 + 0x100) != 0) {
        puVar6 = *(uint **)(lVar4 + 0xf8);
        puVar1 = puVar6 + *(int *)(lVar4 + 0x100);
        do {
          uVar3 = *puVar6;
          if ((-1 < (longlong)(int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x18))) {
            lVar8 = (longlong)(int)uVar3 * 0xa8;
            if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar8) != 0) {
              if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
                lVar7 = param_1 + 0x3c8;
                if (*(longlong *)(param_1 + 0x3d0) != 0) {
                  lVar7 = *(longlong *)(param_1 + 0x3d0);
                }
                iVar9 = *(int *)(lVar7 + (ulonglong)
                                         (*(int *)(param_1 + 0x3d8) + 0x7fffffffU & uVar3) * 4);
                if (iVar9 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc) == uVar3)
                    goto LAB_14068db90;
                    iVar9 = *(int *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc + 4);
                  } while (iVar9 != -1);
                }
              }
              puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8);
              *(byte *)((longlong)puVar10 + 0x87) =
                   *(byte *)((longlong)puVar10 + 0x87) & 0xfd |
                   *(byte *)((longlong)puVar10 + 0x86) >> 4 & 2;
              *(undefined1 *)((longlong)puVar10 + 0x82) = *(undefined1 *)(puVar10 + 0xf);
              *(undefined1 *)((longlong)puVar10 + 0x83) = *(undefined1 *)((longlong)puVar10 + 0x7f);
              iVar9 = *(int *)(param_1 + 1000);
              *(uint *)(param_1 + 1000) = iVar9 + 1U;
              if (*(uint *)(param_1 + 0x3ec) < iVar9 + 1U) {
                FUN_145733c50(plVar12,iVar9);
              }
              lVar8 = *plVar12;
              *(undefined8 *)(lVar8 + (longlong)iVar9 * 0x10) = *puVar10;
              *(uint *)(lVar8 + 8 + (longlong)iVar9 * 0x10) = uVar3;
            }
          }
LAB_14068db90:
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar1);
      }
    }
    else if ((longlong)*(int *)(lVar4 + 0x100) != 0) {
      puVar6 = *(uint **)(lVar4 + 0xf8);
      puVar1 = puVar6 + *(int *)(lVar4 + 0x100);
      do {
        uVar3 = *puVar6;
        if ((-1 < (longlong)(int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x18))) {
          if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
            lVar8 = param_1 + 0x3c8;
            if (*(longlong *)(param_1 + 0x3d0) != 0) {
              lVar8 = *(longlong *)(param_1 + 0x3d0);
            }
            iVar9 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x3d8) + 0x7fffffffU & uVar3) *
                                     4);
            if (iVar9 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc) == uVar3)
                goto LAB_14068d90e;
                iVar9 = *(int *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc + 4);
              } while (iVar9 != -1);
            }
          }
          FUN_14068ddc2((longlong)(int)uVar3 * 0xa8 + *(longlong *)(param_1 + 0x10),param_1);
        }
LAB_14068d90e:
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
  }
  if ((longlong)*(int *)(lVar4 + 0x120) != 0) {
    puVar6 = *(uint **)(lVar4 + 0x118);
    puVar1 = puVar6 + *(int *)(lVar4 + 0x120);
    do {
      uVar3 = *puVar6;
      if ((-1 < (longlong)(int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x18))) {
        if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
          lVar8 = *(longlong *)(param_1 + 0x3d0);
          if (*(longlong *)(param_1 + 0x3d0) == 0) {
            lVar8 = param_1 + 0x3c8;
          }
          iVar9 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x3d8) + 0x7fffffffU & uVar3) * 4)
          ;
          if (iVar9 != -1) {
            do {
              if (*(uint *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc) == uVar3)
              goto LAB_14068d9e0;
              iVar9 = *(int *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar9 * 0xc + 4);
            } while (iVar9 != -1);
          }
        }
        plVar12 = (longlong *)((longlong)(int)uVar3 * 0xa8 + *(longlong *)(param_1 + 0x10));
        if (*(int *)(lVar4 + 0x50) < 1) {
          bVar15 = (*(byte *)((longlong)plVar12 + 0x86) & 0x20) == 0;
        }
        else {
          bVar15 = false;
        }
        if (*(char *)(param_1 + 0x440) == '\0') {
          bVar13 = *(byte *)((longlong)plVar12 + 0x86);
          if (!(bool)(*(char *)((longlong)plVar12 + 0x7a) < *(char *)((longlong)plVar12 + 0x81) |
                     bVar15)) goto LAB_14068d9b0;
          bVar11 = 0x10;
          bVar14 = 4;
        }
        else {
          bVar13 = *(byte *)((longlong)plVar12 + 0x86);
LAB_14068d9b0:
          bVar14 = 0;
          bVar11 = 0;
        }
        *(byte *)((longlong)plVar12 + 0x86) = bVar13 & 0xef | bVar11;
        lVar8 = *plVar12;
        if (lVar8 != 0) {
          *(byte *)(lVar8 + 0xbc) = *(byte *)(lVar8 + 0xbc) & 0xfb | bVar14;
        }
      }
LAB_14068d9e0:
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  plVar12 = (longlong *)(param_1 + 0x390);
  local_60 = param_1 + 0x3a0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x3b8) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar12;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar9 = *(int *)(*local_90 + (longlong)iStack_74 * 0xc);
      if ((-1 < (longlong)iVar9) && (iVar9 < *(int *)(param_1 + 0x18))) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        lVar8 = (longlong)iVar9 * 0xa8;
        *(undefined4 *)(lVar4 + 0x70 + lVar8) = 0;
        pbVar2 = (byte *)(lVar4 + 0x86 + lVar8);
        *pbVar2 = *pbVar2 | 8;
        if (*(longlong *)(lVar4 + lVar8) != 0) {
          bVar13 = *(byte *)(*(longlong *)(lVar4 + lVar8) + 0xc2);
          bVar11 = *(byte *)(lVar4 + lVar8 + 0x7d);
          if ((int)(char)bVar11 < (int)(uint)bVar13) {
            bVar11 = bVar13;
          }
          *(byte *)(lVar4 + lVar8 + 0x7d) = bVar11;
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
  }
  FUN_14068ded2(plVar12,0);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14068ddc2 FUN_14068ddc2 body=191 status=ok
// SIG undefined FUN_14068ddc2(void)

void FUN_14068ddc2(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  if (*param_1 != 0) {
    cVar2 = FUN_1402bfec4(*param_1,0);
    if (cVar2 == '\0') {
      plVar1 = (longlong *)*param_1;
      uVar4 = plVar1[0x18];
      cVar2 = (char)(uVar4 >> 0x28);
      *(char *)((longlong)param_1 + 0x7a) = cVar2;
      uVar7 = (uint)(char)param_1[0xf];
      iVar8 = (int)cVar2;
      uVar6 = uVar4 >> 0x10 & 0xff;
      iVar3 = (int)uVar6;
      uVar4 = (ulonglong)uVar7;
      if (iVar3 < (int)uVar7) {
        uVar4 = uVar6;
      }
      if (iVar3 <= iVar8) {
        uVar4 = (ulonglong)uVar7;
      }
      iVar3 = (int)uVar4;
      if (iVar3 != iVar8) {
        if (iVar3 < iVar8) {
          (**(code **)(*plVar1 + 0x2c0))();
        }
        else {
          if (((*(byte *)((longlong)param_1 + 0x86) & 0x23) == 0) &&
             ((*(byte *)((longlong)param_1 + 0x87) & 1) == 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = iVar3 <= *(char *)((longlong)param_1 + 0x7f);
          }
          (**(code **)(*plVar1 + 0x2c8))(plVar1,uVar4,bVar5);
        }
        if (*param_1 != 0) {
          FUN_1400980f0(*param_1,1,0);
          *(undefined2 *)((longlong)param_1 + 0x7a) = *(undefined2 *)(*param_1 + 0xc5);
        }
      }
    }
  }
  return;
}



// FUNCTION 14068de82 FUN_14068de82 body=80 status=ok
// SIG undefined FUN_14068de82(void)

void FUN_14068de82(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(lVar2 + 0x38);
    if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x5c) == '\0')) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar2 = *param_1;
      if (lVar2 == 0) {
        return;
      }
    }
    FUN_1400980f0(lVar2,1,0);
    *(undefined2 *)((longlong)param_1 + 0x7a) = *(undefined2 *)(*param_1 + 0xc5);
  }
  return;
}



// FUNCTION 14068ded2 FUN_14068ded2 body=220 status=ok
// SIG undefined FUN_14068ded2(void)

void FUN_14068ded2(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)param_2 && *(int *)(param_1 + 0x48) < iVar4) || (iVar4 < *(int *)(param_1 + 0x48)))
  {
    FUN_14068e078(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_144a56d22(param_1);
    return;
  }
  FUN_144903b84(param_1);
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(uint *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar5 = param_2 + 0x1f & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar5 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar2 = 0x80;
  if (0x80 < (int)uVar5) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14068dfb0 FUN_14068dfb0 body=200 status=ok
// SIG undefined FUN_14068dfb0(void)

void FUN_14068dfb0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(char *)(param_1 + 0x5c) == '\0') && (*(int *)(param_1 + 0x60) != 0)) {
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    if (*(longlong **)(param_1 + 0x288) != (longlong *)0x0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x20))();
      if (iVar1 == 1) {
        plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar2[1] = 0;
        *plVar2 = (longlong)&PTR_FUN_14aace960;
        plVar2[2] = param_1;
        if (param_1 != 0) {
          LOCK();
          *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
          UNLOCK();
        }
        if (DAT_14c8442c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014068e047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*DAT_14c8442c0 + 0x18))(DAT_14c8442c0,plVar2,3);
          return;
        }
        FUN_1411476e8(plVar2 + 2);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014068e06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x28))(plVar2,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14068e078 FUN_14068e078 body=121 status=ok
// SIG undefined FUN_14068e078(void)

void FUN_14068e078(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 14068e0f2 FUN_14068e0f2 body=40 status=ok
// SIG undefined FUN_14068e0f2(void)

void FUN_14068e0f2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14068e11a();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 14068e11a FUN_14068e11a body=130 status=ok
// SIG undefined FUN_14068e11a(void)

undefined8 FUN_14068e11a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949218) {
    FUN_144b3d300(&DAT_14c949218);
    if (DAT_14c949218 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949210 = FUN_141473ad5(DAT_14c892c2c);
      _Init_thread_footer(&DAT_14c949218);
    }
  }
  return DAT_14c949210;
}



// FUNCTION 14068e19c FUN_14068e19c body=119 status=ok
// SIG undefined FUN_14068e19c(void)

undefined4 FUN_14068e19c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = FUN_14068e31a();
  cVar3 = FUN_14068e214(param_2);
  if ((cVar3 != '\0') && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
    uVar1 = *param_2;
    uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar5 = (uint)uVar1 & 0xffff;
    FUN_14068ebba(param_1 + 0x6e0,
                  ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),param_2,param_2 + 5);
  }
  return uVar4;
}



// FUNCTION 14068e214 FUN_14068e214 body=261 status=ok
// SIG undefined FUN_14068e214(void)

undefined8 FUN_14068e214(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_14068e2f6:
      plVar3 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_14068e2f6;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_14068e23a;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(char *)(lVar4 + 0x42) == '\x01');
LAB_14068e23a:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14068e31a FUN_14068e31a body=2207 status=ok
// SIG undefined FUN_14068e31a(void)

undefined8 FUN_14068e31a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140230656(param_2);
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    local_90 = *param_2;
    local_88 = (undefined8 *)0x0;
    local_80 = (longlong *)param_2[2];
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_78,&local_90);
    plVar11 = local_70;
    param_2[1] = (longlong)local_78;
    local_78 = (longlong *)0x0;
    plVar8 = (longlong *)param_2[2];
    if (local_70 == plVar8) {
LAB_14068eb87:
      plVar8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_70 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_70)(local_70);
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
    else {
      local_70 = (longlong *)0x0;
      param_2[2] = (longlong)plVar11;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        goto LAB_14068eb87;
      }
    }
    lVar7 = param_2[1];
    if (lVar7 != 0) goto LAB_14068e365;
LAB_14068e663:
    lVar7 = *param_2;
  }
  else {
LAB_14068e365:
    if (2 < (byte)(*(char *)(lVar7 + 0x42) - 2U)) goto LAB_14068e663;
    lVar3 = *param_2;
    if (lVar3 != DAT_14c964cb0) {
      if (lVar3 == DAT_14c964cc8) {
        iVar15 = (int)param_2[4];
        lVar7 = lVar3;
        goto joined_r0x00014068e399;
      }
LAB_14068e3a3:
      plVar8 = param_1 + 0x5c;
      uVar17 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar12 = (uint)lVar3 & 0xffff;
      local_78 = param_1;
      local_70 = param_2;
      lVar7 = FUN_1403e802c(plVar8,((uint)lVar3 << 0x10 | uVar12) + (int)((ulonglong)lVar3 >> 0x20)
                                   + (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar12 >> 4),param_2);
      FUN_143774a6e(&local_78,lVar7,(float)*(double *)(lVar7 + 0x18));
      *(char *)(lVar7 + 0x35) = *(char *)(lVar7 + 0x35) + (char)param_2[4];
      *(double *)(lVar7 + 0xd8) = (double)param_2[5] + *(double *)(lVar7 + 0xd8);
      *(double *)(lVar7 + 0xe0) = (double)param_2[6] + *(double *)(lVar7 + 0xe0);
      *(double *)(lVar7 + 0xe8) = (double)param_2[7] + *(double *)(lVar7 + 0xe8);
      FUN_14171ce4e(param_2,&local_90);
      cVar5 = FUN_1403e7f2a(&local_90);
      if (cVar5 != '\0') {
        cVar5 = FUN_14171ca20(param_2);
        lVar7 = FUN_1403e802c(plVar8);
        if ((int)param_1[0x5d] != *(int *)((longlong)param_1 + 0x314)) {
          lVar3 = *param_2;
          uVar17 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar12 = (uint)lVar3 & 0xffff;
          plVar11 = param_1 + 99;
          if ((longlong *)param_1[100] != (longlong *)0x0) {
            plVar11 = (longlong *)param_1[100];
          }
          iVar15 = *(int *)((longlong)plVar11 +
                           (ulonglong)
                           ((int)param_1[0x65] - 1U &
                           (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar12) +
                           (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar12 >> 4)) * 4);
          if (iVar15 != -1) {
            do {
              lVar13 = *plVar8 + (longlong)iVar15 * 0x110;
              if (*(longlong *)(*plVar8 + (longlong)iVar15 * 0x110) == lVar3) goto LAB_14068e541;
              iVar15 = *(int *)(lVar13 + 0x108);
            } while (iVar15 != -1);
          }
        }
        lVar13 = 0;
LAB_14068e541:
        bVar10 = cVar5 - 1;
        if (bVar10 < 3) {
          *(undefined8 *)(lVar7 + 0xd8 + (ulonglong)bVar10 * 8) = *(undefined8 *)(lVar13 + 0xf0);
          *(byte *)(lVar7 + 0x34) =
               *(byte *)(lVar7 + 0x34) | (byte)(0x402010 >> ((bVar10 & 3) << 3));
        }
        bVar10 = *(byte *)(lVar7 + 0x35);
        if (*(byte *)(lVar7 + 0x35) < *(byte *)(lVar13 + 0x4d)) {
          bVar10 = *(byte *)(lVar13 + 0x4d);
        }
        *(byte *)(lVar7 + 0x35) = bVar10;
        FUN_143774a6e(&local_78,lVar7,
                      (float)SQRT(*(double *)(lVar7 + 0x28) * *(double *)(lVar7 + 0x28) +
                                  *(double *)(lVar7 + 0x18) * *(double *)(lVar7 + 0x18) +
                                  *(double *)(lVar7 + 0x20) * *(double *)(lVar7 + 0x20)));
      }
      plVar8 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_80 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      uVar9 = 0;
      goto LAB_14068ea83;
    }
    iVar15 = (int)param_2[4];
    lVar7 = DAT_14c964cb0;
joined_r0x00014068e399:
    if (0 < iVar15) goto LAB_14068e3a3;
  }
  plVar8 = param_1 + 0x5c;
  if ((int)param_1[0x5d] != *(int *)((longlong)param_1 + 0x314)) {
    uVar17 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar12 = (uint)lVar7 & 0xffff;
    plVar11 = param_1 + 99;
    if ((longlong *)param_1[100] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[100];
    }
    iVar15 = *(int *)((longlong)plVar11 +
                     (ulonglong)
                     ((int)param_1[0x65] - 1U &
                     (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar12) +
                     (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar15 != -1) {
      do {
        lVar3 = *plVar8 + (longlong)iVar15 * 0x110;
        if (*(longlong *)(*plVar8 + (longlong)iVar15 * 0x110) == lVar7) {
          if (lVar3 != 0) {
            lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
            bVar10 = (*(byte *)(lVar3 + 0x4c) & 8) >> 3;
            goto LAB_14068e871;
          }
          break;
        }
        iVar15 = *(int *)(lVar3 + 0x108);
      } while (iVar15 != -1);
    }
  }
  local_78 = param_2;
  FUN_1403e9896(plVar8,&local_90);
  puVar4 = local_88;
  FUN_1403e970a(&local_78,local_88);
  *(undefined4 *)(puVar4 + 0x21) = 0xffffffff;
  local_64 = (int)local_90;
  uVar9 = *puVar4;
  uVar17 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar12 = (uint)uVar9 & 0xffff;
  uVar17 = ((uint)uVar9 << 0x10 | uVar12) + (int)((ulonglong)uVar9 >> 0x20) +
           (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar12 >> 4);
  local_b8 = 0;
  cVar5 = FUN_1403e964e(plVar8,uVar17,puVar4);
  if (cVar5 == '\0') {
    uVar12 = (int)param_1[0x5d] - *(int *)((longlong)param_1 + 0x314);
    if (uVar12 < 4) {
      iVar15 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar15 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar15 <= (int)param_1[0x65])) {
      uVar17 = (int)param_1[0x65] - 1U & uVar17;
      *(uint *)((longlong)puVar4 + 0x10c) = uVar17;
      plVar8 = (longlong *)param_1[100];
      if ((longlong *)param_1[100] == (longlong *)0x0) {
        plVar8 = param_1 + 99;
      }
      *(undefined4 *)(puVar4 + 0x21) =
           *(undefined4 *)
            ((longlong)plVar8 + ((longlong)(int)param_1[0x65] - 1U & (longlong)(int)uVar17) * 4);
      plVar8 = (longlong *)param_1[100];
      if ((longlong *)param_1[100] == (longlong *)0x0) {
        plVar8 = param_1 + 99;
      }
      *(int *)((longlong)plVar8 + ((longlong)(int)param_1[0x65] - 1U & (longlong)(int)uVar17) * 4) =
           local_64;
    }
    else {
      *(int *)(param_1 + 0x65) = iVar15;
      FUN_1403e9a80(plVar8);
    }
  }
  lVar3 = param_1[0x5c] + (longlong)local_64 * 0x110;
  lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  bVar10 = 1;
LAB_14068e871:
  fVar18 = (float)*(double *)(lVar7 + 0x6e0);
  uVar17 = *(uint *)((longlong)param_2 + 0x1c);
  if ((uVar17 == 2 & bVar10 & DAT_14c761e3d) == 1) {
    if (*(int *)(lVar3 + 0xa8) == 0) {
      *(longlong *)(lVar3 + 0xf0) = param_2[5];
      *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
      iVar15 = *(int *)(lVar3 + 0xa8);
      *(uint *)(lVar3 + 0xa8) = iVar15 + 1U;
      if (*(uint *)(lVar3 + 0xac) < iVar15 + 1U) {
        FUN_1447808da(lVar3 + 0xa0,iVar15);
      }
      *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)iVar15 * 4) = (int)param_1[0x92];
      *(float *)(lVar3 + 0x48) = fVar18;
      *(char *)(lVar3 + 0x4d) = *(char *)(lVar3 + 0x4d) + '\x01';
      *(byte *)(lVar3 + 0x4c) = *(byte *)(lVar3 + 0x4c) | 3;
      uVar17 = *(uint *)((longlong)param_2 + 0x1c);
      goto LAB_14068e8f7;
    }
switchD_14068e910_caseD_0:
    *(longlong *)(lVar3 + 0xf0) = param_2[5];
    lVar7 = lVar3 + 0x18 + (longlong)*(int *)((longlong)param_2 + 0x1c) * 0x10;
    *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
    iVar15 = *(int *)(lVar7 + 0x90);
    *(uint *)(lVar7 + 0x90) = iVar15 + 1U;
    if (*(uint *)(lVar7 + 0x94) < iVar15 + 1U) {
      FUN_1447808da((ulonglong *)(lVar7 + 0x88),iVar15);
    }
    uVar6 = *(ulonglong *)(lVar7 + 0x88);
    *(int *)(uVar6 + (longlong)iVar15 * 4) = (int)param_1[0x92];
    if ((*(byte *)(lVar3 + 0x4c) & 2) == 0) {
      fVar2 = *(float *)(lVar3 + 0x48);
      plVar8 = (longlong *)FUN_140389788();
      uVar6 = plVar8[0x22];
      if (uVar6 == 0) {
        (**(code **)(*plVar8 + 1000))(plVar8);
        uVar6 = plVar8[0x22];
      }
      if (fVar18 - fVar2 < *(float *)(uVar6 + 0x88)) {
        *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
        iVar15 = *(int *)(lVar3 + 0xd8);
        *(uint *)(lVar3 + 0xd8) = iVar15 + 1U;
        if (*(uint *)(lVar3 + 0xdc) < iVar15 + 1U) {
          FUN_1447808da((ulonglong *)(lVar3 + 0xd0),iVar15);
        }
        uVar6 = *(ulonglong *)(lVar3 + 0xd0);
        *(int *)(uVar6 + (longlong)iVar15 * 4) = (int)param_1[0x92];
      }
      *(float *)(lVar3 + 0x48) = fVar18;
    }
  }
  else {
LAB_14068e8f7:
    uVar6 = (ulonglong)uVar17;
    switch(uVar6) {
    case 0:
    case 2:
      goto switchD_14068e910_caseD_0;
    case 1:
      *(undefined8 *)(lVar3 + 0xf0) = 0;
      puVar14 = (ulonglong *)(lVar3 + 0xb0);
      *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
      uVar16 = (ulonglong)*(int *)(lVar3 + 0xb8);
      uVar17 = *(int *)(lVar3 + 0xb8) + 1;
      *(uint *)(lVar3 + 0xb8) = uVar17;
      if (*(uint *)(lVar3 + 0xbc) < uVar17) {
LAB_14068ea24:
        FUN_1447808da(puVar14,uVar16 & 0xffffffff);
      }
      break;
    case 3:
      *(longlong *)(lVar3 + 0xf0) = param_2[5];
      *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
      iVar15 = *(int *)(lVar3 + 0xa8);
      *(uint *)(lVar3 + 0xa8) = iVar15 + 1U;
      if (*(uint *)(lVar3 + 0xac) < iVar15 + 1U) {
        FUN_1447808da(lVar3 + 0xa0,iVar15);
      }
      lVar7 = param_1[0x92];
      *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)iVar15 * 4) = (int)lVar7;
      puVar14 = (ulonglong *)(lVar3 + 0xd0);
      *(int *)(param_1 + 0x92) = (int)lVar7 + 1;
      uVar16 = (ulonglong)*(int *)(lVar3 + 0xd8);
      uVar17 = *(int *)(lVar3 + 0xd8) + 1;
      *(uint *)(lVar3 + 0xd8) = uVar17;
      if (*(uint *)(lVar3 + 0xdc) < uVar17) goto LAB_14068ea24;
      break;
    default:
      goto switchD_14068e910_default;
    }
    uVar6 = *puVar14;
    *(int *)(uVar6 + uVar16 * 4) = (int)param_1[0x92];
  }
switchD_14068e910_default:
  *(char *)(lVar3 + 0x4d) = *(char *)(lVar3 + 0x4d) + '\x01';
  if (*(int *)((longlong)param_2 + 0x1c) == 0) {
    local_a8 = *param_2;
    local_a0 = param_2[1];
    local_98 = param_2[2];
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    uVar9 = (**(code **)(*param_1 + 0x2f0))(param_1,&local_a8);
  }
  else {
    *(byte *)(lVar3 + 0x4c) = *(byte *)(lVar3 + 0x4c) & 0xf7;
    uVar9 = CONCAT71((int7)(uVar6 >> 8),1);
  }
LAB_14068ea83:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


