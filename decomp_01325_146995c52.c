// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146995c52 FUN_146995c52 body=127 status=ok
// SIG undefined FUN_146995c52(void)

undefined8 FUN_146995c52(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146995a0c(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146995cd2 FUN_146995cd2 body=116 status=ok
// SIG undefined FUN_146995cd2(void)

void FUN_146995cd2(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428b1d82(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428b0f9a(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428b3f74();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428b34b2;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428b34b2;
  }
  uStack_74 = 1;
LAB_1428b34b2:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) * 2)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428b35ab:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428b37f4;
LAB_1428b378a:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428b37f4:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef71c0;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428b3980;
                }
                else {
                  puVar18[0x16] = &LAB_146996476;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428b3980:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428b39b3;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428b39b3:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428b35ab;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428b378a;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428b3bd4;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428b3bd4:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 146995d56 FUN_146995d56 body=29 status=ok
// SIG undefined FUN_146995d56(void)

void FUN_146995d56(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146995d74 FUN_146995d74 body=52 status=ok
// SIG undefined FUN_146995d74(void)

undefined8 * FUN_146995d74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7160;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146995da8 FUN_146995da8 body=125 status=ok
// SIG undefined FUN_146995da8(void)

undefined8 FUN_146995da8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146995e26(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146995e26 FUN_146995e26 body=287 status=ok
// SIG undefined FUN_146995e26(void)

void FUN_146995e26(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146995f46;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146995f4e FUN_146995f4e body=289 status=ok
// SIG undefined FUN_146995f4e(void)

void FUN_146995f4e(longlong *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar6 = 0;
    do {
      uVar2 = *(ushort *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar4 * iVar3 + param_2) * (uint)bVar1) * 2 + lVar6 * 2);
      uVar7 = (uint)uVar2 << 0xd;
      if ((uVar7 & 0xf800000) == 0xf800000) {
        fVar8 = (float)(uVar7 | 0x70000000);
      }
      else if ((uVar7 & 0xf800000) == 0) {
        fVar8 = (float)(uVar7 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar8 = (float)((uVar7 & 0xfffe000) + 0x38000000);
      }
      dVar9 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar8);
      if (1.0 <= dVar9) {
        dVar9 = 1.0;
      }
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      *(short *)(*(longlong *)param_1[2] + lVar5 * 2) = (short)(int)(dVar9 * 65535.0 + 0.5);
      lVar5 = lVar5 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699609c FUN_14699609c body=29 status=ok
// SIG undefined FUN_14699609c(void)

void FUN_14699609c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469960ba FUN_1469960ba body=52 status=ok
// SIG undefined FUN_1469960ba(void)

undefined8 * FUN_1469960ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7180;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469960ee FUN_1469960ee body=125 status=ok
// SIG undefined FUN_1469960ee(void)

undefined8 FUN_1469960ee(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699616c(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699616c FUN_14699616c body=261 status=ok
// SIG undefined FUN_14699616c(void)

void FUN_14699616c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146996272;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699627a FUN_14699627a body=253 status=ok
// SIG undefined FUN_14699627a(void)

void FUN_14699627a(longlong param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar4 = 0;
    do {
      uVar2 = *(ushort *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 2 +
               lVar4 * 2);
      uVar5 = (uint)uVar2 << 0xd;
      if ((uVar5 & 0xf800000) == 0xf800000) {
        fVar6 = (float)(uVar5 | 0x70000000);
      }
      else if ((uVar5 & 0xf800000) == 0) {
        fVar6 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar6 = (float)((uVar5 & 0xfffe000) + 0x38000000);
      }
      dVar7 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar6);
      if (1.0 <= dVar7) {
        dVar7 = 1.0;
      }
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      *(short *)(**(longlong **)(param_1 + 0x10) + lVar3 * 2) = (short)(int)(dVar7 * 65535.0 + 0.5);
      lVar3 = lVar3 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146996388 FUN_146996388 body=29 status=ok
// SIG undefined FUN_146996388(void)

void FUN_146996388(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469963a6 FUN_1469963a6 body=52 status=ok
// SIG undefined FUN_1469963a6(void)

undefined8 * FUN_1469963a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef71a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469963da FUN_1469963da body=127 status=ok
// SIG undefined FUN_1469963da(void)

undefined8 FUN_1469963da(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699616c(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146996486 FUN_146996486 body=29 status=ok
// SIG undefined FUN_146996486(void)

void FUN_146996486(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469964a4 FUN_1469964a4 body=52 status=ok
// SIG undefined FUN_1469964a4(void)

undefined8 * FUN_1469964a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef71c0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469964d8 FUN_1469964d8 body=125 status=ok
// SIG undefined FUN_1469964d8(void)

undefined8 FUN_1469964d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146996556(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146996556 FUN_146996556 body=287 status=ok
// SIG undefined FUN_146996556(void)

void FUN_146996556(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146996676;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699667e FUN_14699667e body=133 status=ok
// SIG undefined FUN_14699667e(void)

void FUN_14699667e(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_146996704(param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,param_1[2],
                    lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146996704 FUN_146996704 body=301 status=ok
// SIG undefined FUN_146996704(void)

void FUN_146996704(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(ushort *)(*param_1 + param_2 * 2);
  uVar3 = (uint)uVar1 << 0xd;
  uVar5 = uVar3 & 0xf800000;
  if ((param_4 & 0x8000000000000001) == 1) {
    if (uVar5 == 0xf800000) {
      fVar4 = (float)(uVar3 | 0x70000000);
    }
    else if (uVar5 == 0) {
      fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
    }
    dVar6 = (double)(float)((int)(short)uVar1 & 0x80000000U | (uint)fVar4);
    if (1.0 <= dVar6) {
      dVar6 = 1.0;
    }
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    uVar2 = (undefined2)(int)(dVar6 * 65535.0 + 0.5);
  }
  else {
    if (uVar5 == 0xf800000) {
      fVar4 = (float)(uVar3 | 0x70000000);
    }
    else if (uVar5 == 0) {
      fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
    }
    dVar6 = (double)(float)((int)(short)uVar1 & 0x80000000U | (uint)fVar4);
    if (1.0 <= dVar6) {
      dVar6 = 1.0;
    }
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    *(short *)(*param_3 + param_4 * 2) = (short)(int)(dVar6 * 65535.0 + 0.5);
    uVar2 = *(undefined2 *)(*param_3 + param_4 * 2);
    *(undefined2 *)(*param_3 + 2 + param_4 * 2) = uVar2;
  }
  *(undefined2 *)(*param_3 + 4 + param_4 * 2) = uVar2;
  return;
}



// FUNCTION 146996842 FUN_146996842 body=29 status=ok
// SIG undefined FUN_146996842(void)

void FUN_146996842(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146996860 FUN_146996860 body=52 status=ok
// SIG undefined FUN_146996860(void)

undefined8 * FUN_146996860(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef71e0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146996894 FUN_146996894 body=125 status=ok
// SIG undefined FUN_146996894(void)

undefined8 FUN_146996894(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146996912(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146996912 FUN_146996912 body=261 status=ok
// SIG undefined FUN_146996912(void)

void FUN_146996912(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146996a18;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146996a20 FUN_146996a20 body=99 status=ok
// SIG undefined FUN_146996a20(void)

void FUN_146996a20(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_146996704(*(undefined8 *)(param_1 + 0x18),(ulonglong)bVar1 * (longlong)param_2 + lVar3,
                    *(undefined8 *)(param_1 + 0x10),lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146996a94 FUN_146996a94 body=29 status=ok
// SIG undefined FUN_146996a94(void)

void FUN_146996a94(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146996ab2 FUN_146996ab2 body=52 status=ok
// SIG undefined FUN_146996ab2(void)

undefined8 * FUN_146996ab2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7200;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146996ae6 FUN_146996ae6 body=127 status=ok
// SIG undefined FUN_146996ae6(void)

undefined8 FUN_146996ae6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146996912(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146996b66 FUN_146996b66 body=116 status=ok
// SIG undefined FUN_146996b66(void)

void FUN_146996b66(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428b60fc(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428b5314(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428b82ee();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428b782c;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428b782c;
  }
  uStack_74 = 1;
LAB_1428b782c:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 2)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428b7926:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428b7b6f;
LAB_1428b7b05:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428b7b6f:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7280;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428b7cfb;
                }
                else {
                  puVar18[0x16] = &LAB_14699723a;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428b7cfb:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428b7d2e;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428b7d2e:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428b7926;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428b7b05;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428b7f4f;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428b7f4f:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 146996bea FUN_146996bea body=29 status=ok
// SIG undefined FUN_146996bea(void)

void FUN_146996bea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146996c08 FUN_146996c08 body=52 status=ok
// SIG undefined FUN_146996c08(void)

undefined8 * FUN_146996c08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7220;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146996c3c FUN_146996c3c body=125 status=ok
// SIG undefined FUN_146996c3c(void)

undefined8 FUN_146996c3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146996cba(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146996cba FUN_146996cba body=288 status=ok
// SIG undefined FUN_146996cba(void)

void FUN_146996cba(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146996dda;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146996ec8 FUN_146996ec8 body=29 status=ok
// SIG undefined FUN_146996ec8(void)

void FUN_146996ec8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146996ee6 FUN_146996ee6 body=52 status=ok
// SIG undefined FUN_146996ee6(void)

undefined8 * FUN_146996ee6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7240;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146996f1a FUN_146996f1a body=125 status=ok
// SIG undefined FUN_146996f1a(void)

undefined8 FUN_146996f1a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146996f98(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146996f98 FUN_146996f98 body=262 status=ok
// SIG undefined FUN_146996f98(void)

void FUN_146996f98(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699709e;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699714c FUN_14699714c body=29 status=ok
// SIG undefined FUN_14699714c(void)

void FUN_14699714c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699716a FUN_14699716a body=52 status=ok
// SIG undefined FUN_14699716a(void)

undefined8 * FUN_14699716a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7260;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699719e FUN_14699719e body=127 status=ok
// SIG undefined FUN_14699719e(void)

undefined8 FUN_14699719e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146996f98(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699724a FUN_14699724a body=29 status=ok
// SIG undefined FUN_14699724a(void)

void FUN_14699724a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146997268 FUN_146997268 body=52 status=ok
// SIG undefined FUN_146997268(void)

undefined8 * FUN_146997268(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7280;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699729c FUN_14699729c body=125 status=ok
// SIG undefined FUN_14699729c(void)

undefined8 FUN_14699729c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699731a(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699731a FUN_14699731a body=288 status=ok
// SIG undefined FUN_14699731a(void)

void FUN_14699731a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699743a;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146997442 FUN_146997442 body=234 status=ok
// SIG undefined FUN_146997442(void)

void FUN_146997442(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 uVar8;
  double dVar9;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      dVar9 = (double)*(float *)(*(longlong *)param_1[3] +
                                 (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 4 +
                                lVar7 * 4);
      if (1.0 <= dVar9) {
        dVar9 = 1.0;
      }
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      uVar8 = (undefined2)(int)(dVar9 * 65535.0 + 0.5);
      lVar6 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar6 + uVar5 * 2) = uVar8;
        uVar8 = *(undefined2 *)(*plVar3 + uVar5 * 2);
        *(undefined2 *)(*plVar3 + 2 + uVar5 * 2) = uVar8;
        lVar6 = *plVar3;
      }
      *(undefined2 *)(lVar6 + 4 + uVar5 * 2) = uVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699753c FUN_14699753c body=29 status=ok
// SIG undefined FUN_14699753c(void)

void FUN_14699753c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699755a FUN_14699755a body=52 status=ok
// SIG undefined FUN_14699755a(void)

undefined8 * FUN_14699755a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef72a0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699758e FUN_14699758e body=125 status=ok
// SIG undefined FUN_14699758e(void)

undefined8 FUN_14699758e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699760c(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699760c FUN_14699760c body=262 status=ok
// SIG undefined FUN_14699760c(void)

void FUN_14699760c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146997712;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699771a FUN_14699771a body=198 status=ok
// SIG undefined FUN_14699771a(void)

void FUN_14699771a(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  double dVar7;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      dVar7 = (double)*(float *)(**(longlong **)(param_1 + 0x18) +
                                 (ulonglong)bVar1 * (longlong)param_2 * 4 + lVar5 * 4);
      if (1.0 <= dVar7) {
        dVar7 = 1.0;
      }
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      uVar6 = (undefined2)(int)(dVar7 * 65535.0 + 0.5);
      lVar4 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar4 + uVar3 * 2) = uVar6;
        uVar6 = *(undefined2 *)(*plVar2 + uVar3 * 2);
        *(undefined2 *)(*plVar2 + 2 + uVar3 * 2) = uVar6;
        lVar4 = *plVar2;
      }
      *(undefined2 *)(lVar4 + 4 + uVar3 * 2) = uVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469977f0 FUN_1469977f0 body=29 status=ok
// SIG undefined FUN_1469977f0(void)

void FUN_1469977f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699780e FUN_14699780e body=52 status=ok
// SIG undefined FUN_14699780e(void)

undefined8 * FUN_14699780e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef72c0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146997842 FUN_146997842 body=127 status=ok
// SIG undefined FUN_146997842(void)

undefined8 FUN_146997842(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699760c(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469978c2 FUN_1469978c2 body=116 status=ok
// SIG undefined FUN_1469978c2(void)

void FUN_1469978c2(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428ba476(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428b968e(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428bc668();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428bbba6;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428bbba6;
  }
  uStack_74 = 1;
LAB_1428bbba6:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 3)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428bbca0:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428bbee9;
LAB_1428bbe7f:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428bbee9:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7340;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428bc075;
                }
                else {
                  puVar18[0x16] = &LAB_146997f8e;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428bc075:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428bc0a8;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428bc0a8:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428bbca0;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428bbe7f;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428bc2c9;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428bc2c9:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 146997946 FUN_146997946 body=29 status=ok
// SIG undefined FUN_146997946(void)

void FUN_146997946(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146997964 FUN_146997964 body=52 status=ok
// SIG undefined FUN_146997964(void)

undefined8 * FUN_146997964(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef72e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146997998 FUN_146997998 body=125 status=ok
// SIG undefined FUN_146997998(void)

undefined8 FUN_146997998(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146997a16(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146997a16 FUN_146997a16 body=288 status=ok
// SIG undefined FUN_146997a16(void)

void FUN_146997a16(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146997b36;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146997c20 FUN_146997c20 body=29 status=ok
// SIG undefined FUN_146997c20(void)

void FUN_146997c20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146997c3e FUN_146997c3e body=52 status=ok
// SIG undefined FUN_146997c3e(void)

undefined8 * FUN_146997c3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7300;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146997c72 FUN_146997c72 body=125 status=ok
// SIG undefined FUN_146997c72(void)

undefined8 FUN_146997c72(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146997cf0(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146997cf0 FUN_146997cf0 body=262 status=ok
// SIG undefined FUN_146997cf0(void)

void FUN_146997cf0(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146997df6;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146997ea0 FUN_146997ea0 body=29 status=ok
// SIG undefined FUN_146997ea0(void)

void FUN_146997ea0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146997ebe FUN_146997ebe body=52 status=ok
// SIG undefined FUN_146997ebe(void)

undefined8 * FUN_146997ebe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7320;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146997ef2 FUN_146997ef2 body=127 status=ok
// SIG undefined FUN_146997ef2(void)

undefined8 FUN_146997ef2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146997cf0(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146997f9e FUN_146997f9e body=29 status=ok
// SIG undefined FUN_146997f9e(void)

void FUN_146997f9e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146997fbc FUN_146997fbc body=52 status=ok
// SIG undefined FUN_146997fbc(void)

undefined8 * FUN_146997fbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7340;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146997ff0 FUN_146997ff0 body=125 status=ok
// SIG undefined FUN_146997ff0(void)

undefined8 FUN_146997ff0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699806e(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699806e FUN_14699806e body=288 status=ok
// SIG undefined FUN_14699806e(void)

void FUN_14699806e(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699818e;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146998196 FUN_146998196 body=231 status=ok
// SIG undefined FUN_146998196(void)

void FUN_146998196(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 uVar8;
  double dVar9;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      dVar9 = *(double *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 8 + lVar7 * 8);
      if (1.0 <= dVar9) {
        dVar9 = 1.0;
      }
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      uVar8 = (undefined2)(int)(dVar9 * 65535.0 + 0.5);
      lVar6 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar6 + uVar5 * 2) = uVar8;
        uVar8 = *(undefined2 *)(*plVar3 + uVar5 * 2);
        *(undefined2 *)(*plVar3 + 2 + uVar5 * 2) = uVar8;
        lVar6 = *plVar3;
      }
      *(undefined2 *)(lVar6 + 4 + uVar5 * 2) = uVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699828e FUN_14699828e body=29 status=ok
// SIG undefined FUN_14699828e(void)

void FUN_14699828e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469982ac FUN_1469982ac body=52 status=ok
// SIG undefined FUN_1469982ac(void)

undefined8 * FUN_1469982ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7360;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469982e0 FUN_1469982e0 body=125 status=ok
// SIG undefined FUN_1469982e0(void)

undefined8 FUN_1469982e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699835e(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699835e FUN_14699835e body=262 status=ok
// SIG undefined FUN_14699835e(void)

void FUN_14699835e(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146998464;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699846c FUN_14699846c body=195 status=ok
// SIG undefined FUN_14699846c(void)

void FUN_14699846c(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  double dVar7;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      dVar7 = *(double *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 8 +
               lVar5 * 8);
      if (1.0 <= dVar7) {
        dVar7 = 1.0;
      }
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      uVar6 = (undefined2)(int)(dVar7 * 65535.0 + 0.5);
      lVar4 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar4 + uVar3 * 2) = uVar6;
        uVar6 = *(undefined2 *)(*plVar2 + uVar3 * 2);
        *(undefined2 *)(*plVar2 + 2 + uVar3 * 2) = uVar6;
        lVar4 = *plVar2;
      }
      *(undefined2 *)(lVar4 + 4 + uVar3 * 2) = uVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146998540 FUN_146998540 body=29 status=ok
// SIG undefined FUN_146998540(void)

void FUN_146998540(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699855e FUN_14699855e body=52 status=ok
// SIG undefined FUN_14699855e(void)

undefined8 * FUN_14699855e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7380;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146998592 FUN_146998592 body=127 status=ok
// SIG undefined FUN_146998592(void)

undefined8 FUN_146998592(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699835e(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146998620 FUN_146998620 body=116 status=ok
// SIG undefined FUN_146998620(void)

void FUN_146998620(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428be7f0(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428bda08(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428c09e2();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428bff20;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428bff20;
  }
  uStack_74 = 1;
LAB_1428bff20:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) * 2)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428c0019:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428c0262;
LAB_1428c01f8:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428c0262:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7400;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428c03ee;
                }
                else {
                  puVar18[0x16] = &LAB_146998d64;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428c03ee:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428c0421;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428c0421:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428c0019;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428c01f8;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428c0642;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428c0642:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1469986a4 FUN_1469986a4 body=29 status=ok
// SIG undefined FUN_1469986a4(void)

void FUN_1469986a4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469986c2 FUN_1469986c2 body=52 status=ok
// SIG undefined FUN_1469986c2(void)

undefined8 * FUN_1469986c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef73a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469986f6 FUN_1469986f6 body=125 status=ok
// SIG undefined FUN_1469986f6(void)

undefined8 FUN_1469986f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146998774(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146998774 FUN_146998774 body=287 status=ok
// SIG undefined FUN_146998774(void)

void FUN_146998774(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146998894;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469989ba FUN_1469989ba body=29 status=ok
// SIG undefined FUN_1469989ba(void)

void FUN_1469989ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469989d8 FUN_1469989d8 body=52 status=ok
// SIG undefined FUN_1469989d8(void)

undefined8 * FUN_1469989d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef73c0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146998a0c FUN_146998a0c body=125 status=ok
// SIG undefined FUN_146998a0c(void)

undefined8 FUN_146998a0c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146998a8a(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146998a8a FUN_146998a8a body=261 status=ok
// SIG undefined FUN_146998a8a(void)

void FUN_146998a8a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146998b90;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146998c76 FUN_146998c76 body=29 status=ok
// SIG undefined FUN_146998c76(void)

void FUN_146998c76(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146998c94 FUN_146998c94 body=52 status=ok
// SIG undefined FUN_146998c94(void)

undefined8 * FUN_146998c94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef73e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146998cc8 FUN_146998cc8 body=127 status=ok
// SIG undefined FUN_146998cc8(void)

undefined8 FUN_146998cc8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146998a8a(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146998d74 FUN_146998d74 body=29 status=ok
// SIG undefined FUN_146998d74(void)

void FUN_146998d74(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146998d92 FUN_146998d92 body=52 status=ok
// SIG undefined FUN_146998d92(void)

undefined8 * FUN_146998d92(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7400;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146998dc6 FUN_146998dc6 body=125 status=ok
// SIG undefined FUN_146998dc6(void)

undefined8 FUN_146998dc6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146998e44(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146998e44 FUN_146998e44 body=287 status=ok
// SIG undefined FUN_146998e44(void)

void FUN_146998e44(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146998f64;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146998f6c FUN_146998f6c body=133 status=ok
// SIG undefined FUN_146998f6c(void)

void FUN_146998f6c(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_146998ff2(param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,param_1[2],
                    lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146998ff2 FUN_146998ff2 body=200 status=ok
// SIG undefined FUN_146998ff2(void)

void FUN_146998ff2(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  float fVar1;
  short sVar2;
  
  fVar1 = (float)*(ushort *)(*param_1 + param_2 * 2) * 1.5259022e-05;
  if ((param_4 & 0x8000000000000001) == 1) {
    if ((uint)fVar1 < 0x47800000) {
      if ((uint)fVar1 < 0x38800000) {
        sVar2 = SUB42(fVar1 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar1 + 0x8000fff + (uint)(((uint)fVar1 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar1 | 0x3e) << 9;
    }
  }
  else {
    if ((uint)fVar1 < 0x47800000) {
      if ((uint)fVar1 < 0x38800000) {
        sVar2 = SUB42(fVar1 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar1 + 0x8000fff + (uint)(((uint)fVar1 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar1 | 0x3e) << 9;
    }
    *(short *)(*param_3 + param_4 * 2) = sVar2;
    sVar2 = *(short *)(*param_3 + param_4 * 2);
    *(short *)(*param_3 + 2 + param_4 * 2) = sVar2;
  }
  *(short *)(*param_3 + 4 + param_4 * 2) = sVar2;
  return;
}



// FUNCTION 1469990ca FUN_1469990ca body=29 status=ok
// SIG undefined FUN_1469990ca(void)

void FUN_1469990ca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469990e8 FUN_1469990e8 body=52 status=ok
// SIG undefined FUN_1469990e8(void)

undefined8 * FUN_1469990e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7420;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699911c FUN_14699911c body=125 status=ok
// SIG undefined FUN_14699911c(void)

undefined8 FUN_14699911c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699919a(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699919a FUN_14699919a body=261 status=ok
// SIG undefined FUN_14699919a(void)

void FUN_14699919a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469992a0;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469992a8 FUN_1469992a8 body=99 status=ok
// SIG undefined FUN_1469992a8(void)

void FUN_1469992a8(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_146998ff2(*(undefined8 *)(param_1 + 0x18),(ulonglong)bVar1 * (longlong)param_2 + lVar3,
                    *(undefined8 *)(param_1 + 0x10),lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699931c FUN_14699931c body=29 status=ok
// SIG undefined FUN_14699931c(void)

void FUN_14699931c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699933a FUN_14699933a body=52 status=ok
// SIG undefined FUN_14699933a(void)

undefined8 * FUN_14699933a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7440;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699936e FUN_14699936e body=127 status=ok
// SIG undefined FUN_14699936e(void)

undefined8 FUN_14699936e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699919a(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469993ee FUN_1469993ee body=116 status=ok
// SIG undefined FUN_1469993ee(void)

void FUN_1469993ee(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428c2b6a(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428c1d82(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428c4d5c();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428c429a;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428c429a;
  }
  uStack_74 = 1;
LAB_1428c429a:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 2)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428c4394:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428c45dd;
LAB_1428c4573:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428c45dd:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef74c0;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428c4769;
                }
                else {
                  puVar18[0x16] = &LAB_146999b32;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428c4769:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428c479c;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428c479c:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428c4394;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428c4573;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428c49bd;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428c49bd:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 146999472 FUN_146999472 body=29 status=ok
// SIG undefined FUN_146999472(void)

void FUN_146999472(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146999490 FUN_146999490 body=52 status=ok
// SIG undefined FUN_146999490(void)

undefined8 * FUN_146999490(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7460;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469994c4 FUN_1469994c4 body=125 status=ok
// SIG undefined FUN_1469994c4(void)

undefined8 FUN_1469994c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146999542(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146999542 FUN_146999542 body=288 status=ok
// SIG undefined FUN_146999542(void)

void FUN_146999542(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146999662;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146999788 FUN_146999788 body=29 status=ok
// SIG undefined FUN_146999788(void)

void FUN_146999788(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469997a6 FUN_1469997a6 body=52 status=ok
// SIG undefined FUN_1469997a6(void)

undefined8 * FUN_1469997a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7480;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469997da FUN_1469997da body=125 status=ok
// SIG undefined FUN_1469997da(void)

undefined8 FUN_1469997da(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146999858(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146999858 FUN_146999858 body=262 status=ok
// SIG undefined FUN_146999858(void)

void FUN_146999858(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699995e;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146999a44 FUN_146999a44 body=29 status=ok
// SIG undefined FUN_146999a44(void)

void FUN_146999a44(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146999a62 FUN_146999a62 body=52 status=ok
// SIG undefined FUN_146999a62(void)

undefined8 * FUN_146999a62(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef74a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146999a96 FUN_146999a96 body=127 status=ok
// SIG undefined FUN_146999a96(void)

undefined8 FUN_146999a96(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146999858(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146999b42 FUN_146999b42 body=29 status=ok
// SIG undefined FUN_146999b42(void)

void FUN_146999b42(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146999b60 FUN_146999b60 body=52 status=ok
// SIG undefined FUN_146999b60(void)

undefined8 * FUN_146999b60(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef74c0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146999b94 FUN_146999b94 body=125 status=ok
// SIG undefined FUN_146999b94(void)

undefined8 FUN_146999b94(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146999c12(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146999c12 FUN_146999c12 body=288 status=ok
// SIG undefined FUN_146999c12(void)

void FUN_146999c12(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146999d32;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146999d3a FUN_146999d3a body=133 status=ok
// SIG undefined FUN_146999d3a(void)

void FUN_146999d3a(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_146999dc0(param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,param_1[2],
                    lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146999dc0 FUN_146999dc0 body=200 status=ok
// SIG undefined FUN_146999dc0(void)

void FUN_146999dc0(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  short sVar1;
  float fVar2;
  
  fVar2 = (float)((double)*(uint *)(*param_1 + param_2 * 4) * 2.3283064370807974e-10);
  if ((param_4 & 0x8000000000000001) == 1) {
    if ((uint)fVar2 < 0x47800000) {
      if ((uint)fVar2 < 0x38800000) {
        sVar1 = SUB42(fVar2 + 0.5,0);
      }
      else {
        sVar1 = (short)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar1 = (0x7f800000 < (uint)fVar2 | 0x3e) << 9;
    }
  }
  else {
    if ((uint)fVar2 < 0x47800000) {
      if ((uint)fVar2 < 0x38800000) {
        sVar1 = SUB42(fVar2 + 0.5,0);
      }
      else {
        sVar1 = (short)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar1 = (0x7f800000 < (uint)fVar2 | 0x3e) << 9;
    }
    *(short *)(*param_3 + param_4 * 2) = sVar1;
    sVar1 = *(short *)(*param_3 + param_4 * 2);
    *(short *)(*param_3 + 2 + param_4 * 2) = sVar1;
  }
  *(short *)(*param_3 + 4 + param_4 * 2) = sVar1;
  return;
}



// FUNCTION 146999e98 FUN_146999e98 body=29 status=ok
// SIG undefined FUN_146999e98(void)

void FUN_146999e98(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146999eb6 FUN_146999eb6 body=52 status=ok
// SIG undefined FUN_146999eb6(void)

undefined8 * FUN_146999eb6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef74e0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146999eea FUN_146999eea body=125 status=ok
// SIG undefined FUN_146999eea(void)

undefined8 FUN_146999eea(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146999f68(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146999f68 FUN_146999f68 body=262 status=ok
// SIG undefined FUN_146999f68(void)

void FUN_146999f68(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699a06e;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699a076 FUN_14699a076 body=99 status=ok
// SIG undefined FUN_14699a076(void)

void FUN_14699a076(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_146999dc0(*(undefined8 *)(param_1 + 0x18),(ulonglong)bVar1 * (longlong)param_2 + lVar3,
                    *(undefined8 *)(param_1 + 0x10),lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699a0ea FUN_14699a0ea body=29 status=ok
// SIG undefined FUN_14699a0ea(void)

void FUN_14699a0ea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699a108 FUN_14699a108 body=52 status=ok
// SIG undefined FUN_14699a108(void)

undefined8 * FUN_14699a108(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7500;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699a13c FUN_14699a13c body=127 status=ok
// SIG undefined FUN_14699a13c(void)

undefined8 FUN_14699a13c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146999f68(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699a1bc FUN_14699a1bc body=116 status=ok
// SIG undefined FUN_14699a1bc(void)

void FUN_14699a1bc(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428c6ee4(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428c60fc(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428c90d6();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428c8614;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428c8614;
  }
  uStack_74 = 1;
LAB_1428c8614:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 3)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428c870e:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428c8957;
LAB_1428c88ed:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428c8957:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7580;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428c8ae3;
                }
                else {
                  puVar18[0x16] = &LAB_14699a92c;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428c8ae3:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428c8b16;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428c8b16:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428c870e;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428c88ed;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428c8d37;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428c8d37:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14699a240 FUN_14699a240 body=29 status=ok
// SIG undefined FUN_14699a240(void)

void FUN_14699a240(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699a25e FUN_14699a25e body=52 status=ok
// SIG undefined FUN_14699a25e(void)

undefined8 * FUN_14699a25e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7520;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699a292 FUN_14699a292 body=125 status=ok
// SIG undefined FUN_14699a292(void)

undefined8 FUN_14699a292(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699a310(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699a310 FUN_14699a310 body=288 status=ok
// SIG undefined FUN_14699a310(void)

void FUN_14699a310(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699a430;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699a56c FUN_14699a56c body=29 status=ok
// SIG undefined FUN_14699a56c(void)

void FUN_14699a56c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699a58a FUN_14699a58a body=52 status=ok
// SIG undefined FUN_14699a58a(void)

undefined8 * FUN_14699a58a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7540;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699a5be FUN_14699a5be body=125 status=ok
// SIG undefined FUN_14699a5be(void)

undefined8 FUN_14699a5be(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699a63c(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699a63c FUN_14699a63c body=262 status=ok
// SIG undefined FUN_14699a63c(void)

void FUN_14699a63c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699a742;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699a83e FUN_14699a83e body=29 status=ok
// SIG undefined FUN_14699a83e(void)

void FUN_14699a83e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699a85c FUN_14699a85c body=52 status=ok
// SIG undefined FUN_14699a85c(void)

undefined8 * FUN_14699a85c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7560;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699a890 FUN_14699a890 body=127 status=ok
// SIG undefined FUN_14699a890(void)

undefined8 FUN_14699a890(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699a63c(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699a93c FUN_14699a93c body=29 status=ok
// SIG undefined FUN_14699a93c(void)

void FUN_14699a93c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699a95a FUN_14699a95a body=52 status=ok
// SIG undefined FUN_14699a95a(void)

undefined8 * FUN_14699a95a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7580;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699a98e FUN_14699a98e body=125 status=ok
// SIG undefined FUN_14699a98e(void)

undefined8 FUN_14699a98e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699aa0c(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699aa0c FUN_14699aa0c body=288 status=ok
// SIG undefined FUN_14699aa0c(void)

void FUN_14699aa0c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699ab2c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699ab34 FUN_14699ab34 body=133 status=ok
// SIG undefined FUN_14699ab34(void)

void FUN_14699ab34(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_14699abba(param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,param_1[2],
                    lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699abba FUN_14699abba body=216 status=ok
// SIG undefined FUN_14699abba(void)

void FUN_14699abba(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  short sVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)(*param_1 + param_2 * 8);
  fVar3 = (float)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                  ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar1 >> 0x20)) -
                  1.9342813113834067e+25)) * 5.421010862427522e-20);
  if ((param_4 & 0x8000000000000001) == 1) {
    if ((uint)fVar3 < 0x47800000) {
      if ((uint)fVar3 < 0x38800000) {
        sVar2 = SUB42(fVar3 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar3 + 0x8000fff + (uint)(((uint)fVar3 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar3 | 0x3e) << 9;
    }
  }
  else {
    if ((uint)fVar3 < 0x47800000) {
      if ((uint)fVar3 < 0x38800000) {
        sVar2 = SUB42(fVar3 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar3 + 0x8000fff + (uint)(((uint)fVar3 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar3 | 0x3e) << 9;
    }
    *(short *)(*param_3 + param_4 * 2) = sVar2;
    sVar2 = *(short *)(*param_3 + param_4 * 2);
    *(short *)(*param_3 + 2 + param_4 * 2) = sVar2;
  }
  *(short *)(*param_3 + 4 + param_4 * 2) = sVar2;
  return;
}



// FUNCTION 14699aca2 FUN_14699aca2 body=29 status=ok
// SIG undefined FUN_14699aca2(void)

void FUN_14699aca2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699acc0 FUN_14699acc0 body=52 status=ok
// SIG undefined FUN_14699acc0(void)

undefined8 * FUN_14699acc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef75a0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699acf4 FUN_14699acf4 body=125 status=ok
// SIG undefined FUN_14699acf4(void)

undefined8 FUN_14699acf4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699ad72(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699ad72 FUN_14699ad72 body=262 status=ok
// SIG undefined FUN_14699ad72(void)

void FUN_14699ad72(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699ae78;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699ae80 FUN_14699ae80 body=99 status=ok
// SIG undefined FUN_14699ae80(void)

void FUN_14699ae80(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_14699abba(*(undefined8 *)(param_1 + 0x18),(ulonglong)bVar1 * (longlong)param_2 + lVar3,
                    *(undefined8 *)(param_1 + 0x10),lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699aef4 FUN_14699aef4 body=29 status=ok
// SIG undefined FUN_14699aef4(void)

void FUN_14699aef4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699af12 FUN_14699af12 body=52 status=ok
// SIG undefined FUN_14699af12(void)

undefined8 * FUN_14699af12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef75c0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699af46 FUN_14699af46 body=127 status=ok
// SIG undefined FUN_14699af46(void)

undefined8 FUN_14699af46(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699ad72(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699afc6 FUN_14699afc6 body=116 status=ok
// SIG undefined FUN_14699afc6(void)

void FUN_14699afc6(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428cb25e(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428ca476(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428cd450();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428cc98e;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428cc98e;
  }
  uStack_74 = 1;
LAB_1428cc98e:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) * 2)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428cca87:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428cccd0;
LAB_1428ccc66:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428cccd0:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7640;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428cce5c;
                }
                else {
                  puVar18[0x16] = &LAB_14699b61e;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428cce5c:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428cce8f;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428cce8f:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428cca87;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428ccc66;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428cd0b0;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428cd0b0:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14699b04a FUN_14699b04a body=29 status=ok
// SIG undefined FUN_14699b04a(void)

void FUN_14699b04a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699b068 FUN_14699b068 body=52 status=ok
// SIG undefined FUN_14699b068(void)

undefined8 * FUN_14699b068(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef75e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699b09c FUN_14699b09c body=125 status=ok
// SIG undefined FUN_14699b09c(void)

undefined8 FUN_14699b09c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699b11a(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699b11a FUN_14699b11a body=287 status=ok
// SIG undefined FUN_14699b11a(void)

void FUN_14699b11a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699b23a;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699b2ee FUN_14699b2ee body=29 status=ok
// SIG undefined FUN_14699b2ee(void)

void FUN_14699b2ee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699b30c FUN_14699b30c body=52 status=ok
// SIG undefined FUN_14699b30c(void)

undefined8 * FUN_14699b30c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7600;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699b340 FUN_14699b340 body=125 status=ok
// SIG undefined FUN_14699b340(void)

undefined8 FUN_14699b340(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699b3be(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699b3be FUN_14699b3be body=261 status=ok
// SIG undefined FUN_14699b3be(void)

void FUN_14699b3be(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699b4c4;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699b530 FUN_14699b530 body=29 status=ok
// SIG undefined FUN_14699b530(void)

void FUN_14699b530(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699b54e FUN_14699b54e body=52 status=ok
// SIG undefined FUN_14699b54e(void)

undefined8 * FUN_14699b54e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7620;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699b582 FUN_14699b582 body=127 status=ok
// SIG undefined FUN_14699b582(void)

undefined8 FUN_14699b582(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699b3be(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699b62e FUN_14699b62e body=29 status=ok
// SIG undefined FUN_14699b62e(void)

void FUN_14699b62e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699b64c FUN_14699b64c body=52 status=ok
// SIG undefined FUN_14699b64c(void)

undefined8 * FUN_14699b64c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7640;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699b680 FUN_14699b680 body=125 status=ok
// SIG undefined FUN_14699b680(void)

undefined8 FUN_14699b680(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699b6fe(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699b6fe FUN_14699b6fe body=287 status=ok
// SIG undefined FUN_14699b6fe(void)

void FUN_14699b6fe(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699b81e;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699b826 FUN_14699b826 body=180 status=ok
// SIG undefined FUN_14699b826(void)

void FUN_14699b826(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      uVar8 = *(undefined2 *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 2 + lVar7 * 2);
      lVar6 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar6 + uVar5 * 2) = uVar8;
        uVar8 = *(undefined2 *)(*plVar3 + uVar5 * 2);
        *(undefined2 *)(*plVar3 + 2 + uVar5 * 2) = uVar8;
        lVar6 = *plVar3;
      }
      *(undefined2 *)(lVar6 + 4 + uVar5 * 2) = uVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699b8ea FUN_14699b8ea body=29 status=ok
// SIG undefined FUN_14699b8ea(void)

void FUN_14699b8ea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699b908 FUN_14699b908 body=52 status=ok
// SIG undefined FUN_14699b908(void)

undefined8 * FUN_14699b908(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7660;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699b93c FUN_14699b93c body=125 status=ok
// SIG undefined FUN_14699b93c(void)

undefined8 FUN_14699b93c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699b9ba(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699b9ba FUN_14699b9ba body=261 status=ok
// SIG undefined FUN_14699b9ba(void)

void FUN_14699b9ba(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699bac0;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699bac8 FUN_14699bac8 body=140 status=ok
// SIG undefined FUN_14699bac8(void)

void FUN_14699bac8(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      uVar6 = *(undefined2 *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 2 +
               lVar5 * 2);
      lVar4 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar4 + uVar3 * 2) = uVar6;
        uVar6 = *(undefined2 *)(*plVar2 + uVar3 * 2);
        *(undefined2 *)(*plVar2 + 2 + uVar3 * 2) = uVar6;
        lVar4 = *plVar2;
      }
      *(undefined2 *)(lVar4 + 4 + uVar3 * 2) = uVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699bb64 FUN_14699bb64 body=29 status=ok
// SIG undefined FUN_14699bb64(void)

void FUN_14699bb64(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699bb82 FUN_14699bb82 body=52 status=ok
// SIG undefined FUN_14699bb82(void)

undefined8 * FUN_14699bb82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7680;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699bbb6 FUN_14699bbb6 body=127 status=ok
// SIG undefined FUN_14699bbb6(void)

undefined8 FUN_14699bbb6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699b9ba(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699bc36 FUN_14699bc36 body=116 status=ok
// SIG undefined FUN_14699bc36(void)

void FUN_14699bc36(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428cf5d8(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428ce7f0(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428d17ca();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428d0d08;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428d0d08;
  }
  uStack_74 = 1;
LAB_1428d0d08:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 2)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428d0e02:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428d104b;
LAB_1428d0fe1:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428d104b:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7700;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428d11d7;
                }
                else {
                  puVar18[0x16] = &LAB_14699c386;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428d11d7:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428d120a;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428d120a:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428d0e02;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428d0fe1;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428d142b;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428d142b:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14699bcba FUN_14699bcba body=29 status=ok
// SIG undefined FUN_14699bcba(void)

void FUN_14699bcba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699bcd8 FUN_14699bcd8 body=52 status=ok
// SIG undefined FUN_14699bcd8(void)

undefined8 * FUN_14699bcd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef76a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699bd0c FUN_14699bd0c body=125 status=ok
// SIG undefined FUN_14699bd0c(void)

undefined8 FUN_14699bd0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699bd8a(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699bd8a FUN_14699bd8a body=288 status=ok
// SIG undefined FUN_14699bd8a(void)

void FUN_14699bd8a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699beaa;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699bfd6 FUN_14699bfd6 body=29 status=ok
// SIG undefined FUN_14699bfd6(void)

void FUN_14699bfd6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699bff4 FUN_14699bff4 body=52 status=ok
// SIG undefined FUN_14699bff4(void)

undefined8 * FUN_14699bff4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef76c0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699c028 FUN_14699c028 body=125 status=ok
// SIG undefined FUN_14699c028(void)

undefined8 FUN_14699c028(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699c0a6(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699c0a6 FUN_14699c0a6 body=262 status=ok
// SIG undefined FUN_14699c0a6(void)

void FUN_14699c0a6(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699c1ac;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699c298 FUN_14699c298 body=29 status=ok
// SIG undefined FUN_14699c298(void)

void FUN_14699c298(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699c2b6 FUN_14699c2b6 body=52 status=ok
// SIG undefined FUN_14699c2b6(void)

undefined8 * FUN_14699c2b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef76e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699c2ea FUN_14699c2ea body=127 status=ok
// SIG undefined FUN_14699c2ea(void)

undefined8 FUN_14699c2ea(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699c0a6(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699c396 FUN_14699c396 body=29 status=ok
// SIG undefined FUN_14699c396(void)

void FUN_14699c396(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699c3b4 FUN_14699c3b4 body=52 status=ok
// SIG undefined FUN_14699c3b4(void)

undefined8 * FUN_14699c3b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7700;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699c3e8 FUN_14699c3e8 body=125 status=ok
// SIG undefined FUN_14699c3e8(void)

undefined8 FUN_14699c3e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699c466(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699c466 FUN_14699c466 body=288 status=ok
// SIG undefined FUN_14699c466(void)

void FUN_14699c466(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699c586;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699c58e FUN_14699c58e body=133 status=ok
// SIG undefined FUN_14699c58e(void)

void FUN_14699c58e(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_14699c614(param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,param_1[2],
                    lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699c614 FUN_14699c614 body=205 status=ok
// SIG undefined FUN_14699c614(void)

void FUN_14699c614(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  double dVar1;
  short sVar2;
  float fVar3;
  
  dVar1 = (double)*(float *)(*param_1 + param_2 * 4);
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  fVar3 = (float)dVar1;
  if ((param_4 & 0x8000000000000001) == 1) {
    if ((uint)fVar3 < 0x47800000) {
      if ((uint)fVar3 < 0x38800000) {
        sVar2 = SUB42(fVar3 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar3 + 0x8000fff + (uint)(((uint)fVar3 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar3 | 0x3e) << 9;
    }
  }
  else {
    if ((uint)fVar3 < 0x47800000) {
      if ((uint)fVar3 < 0x38800000) {
        sVar2 = SUB42(fVar3 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar3 + 0x8000fff + (uint)(((uint)fVar3 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar3 | 0x3e) << 9;
    }
    *(short *)(*param_3 + param_4 * 2) = sVar2;
    sVar2 = *(short *)(*param_3 + param_4 * 2);
    *(short *)(*param_3 + 2 + param_4 * 2) = sVar2;
  }
  *(short *)(*param_3 + 4 + param_4 * 2) = sVar2;
  return;
}



// FUNCTION 14699c6f2 FUN_14699c6f2 body=29 status=ok
// SIG undefined FUN_14699c6f2(void)

void FUN_14699c6f2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699c710 FUN_14699c710 body=52 status=ok
// SIG undefined FUN_14699c710(void)

undefined8 * FUN_14699c710(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7720;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699c744 FUN_14699c744 body=125 status=ok
// SIG undefined FUN_14699c744(void)

undefined8 FUN_14699c744(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699c7c2(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699c7c2 FUN_14699c7c2 body=262 status=ok
// SIG undefined FUN_14699c7c2(void)

void FUN_14699c7c2(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699c8c8;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699c8d0 FUN_14699c8d0 body=99 status=ok
// SIG undefined FUN_14699c8d0(void)

void FUN_14699c8d0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_14699c614(*(undefined8 *)(param_1 + 0x18),(ulonglong)bVar1 * (longlong)param_2 + lVar3,
                    *(undefined8 *)(param_1 + 0x10),lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699c944 FUN_14699c944 body=29 status=ok
// SIG undefined FUN_14699c944(void)

void FUN_14699c944(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699c962 FUN_14699c962 body=52 status=ok
// SIG undefined FUN_14699c962(void)

undefined8 * FUN_14699c962(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7740;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699c996 FUN_14699c996 body=127 status=ok
// SIG undefined FUN_14699c996(void)

undefined8 FUN_14699c996(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699c7c2(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699ca16 FUN_14699ca16 body=116 status=ok
// SIG undefined FUN_14699ca16(void)

void FUN_14699ca16(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428d3952(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428d2b6a(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428d5b44();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428d5082;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428d5082;
  }
  uStack_74 = 1;
LAB_1428d5082:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 3)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428d517c:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428d53c5;
LAB_1428d535b:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428d53c5:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef77c0;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428d5551;
                }
                else {
                  puVar18[0x16] = &LAB_14699d15e;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428d5551:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428d5584;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428d5584:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428d517c;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428d535b;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428d57a5;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428d57a5:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14699ca9a FUN_14699ca9a body=29 status=ok
// SIG undefined FUN_14699ca9a(void)

void FUN_14699ca9a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699cab8 FUN_14699cab8 body=52 status=ok
// SIG undefined FUN_14699cab8(void)

undefined8 * FUN_14699cab8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7760;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699caec FUN_14699caec body=125 status=ok
// SIG undefined FUN_14699caec(void)

undefined8 FUN_14699caec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699cb6a(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699cb6a FUN_14699cb6a body=288 status=ok
// SIG undefined FUN_14699cb6a(void)

void FUN_14699cb6a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699cc8a;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699cdb2 FUN_14699cdb2 body=29 status=ok
// SIG undefined FUN_14699cdb2(void)

void FUN_14699cdb2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699cdd0 FUN_14699cdd0 body=52 status=ok
// SIG undefined FUN_14699cdd0(void)

undefined8 * FUN_14699cdd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7780;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699ce04 FUN_14699ce04 body=125 status=ok
// SIG undefined FUN_14699ce04(void)

undefined8 FUN_14699ce04(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699ce82(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699ce82 FUN_14699ce82 body=262 status=ok
// SIG undefined FUN_14699ce82(void)

void FUN_14699ce82(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699cf88;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699d070 FUN_14699d070 body=29 status=ok
// SIG undefined FUN_14699d070(void)

void FUN_14699d070(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699d08e FUN_14699d08e body=52 status=ok
// SIG undefined FUN_14699d08e(void)

undefined8 * FUN_14699d08e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef77a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699d0c2 FUN_14699d0c2 body=127 status=ok
// SIG undefined FUN_14699d0c2(void)

undefined8 FUN_14699d0c2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699ce82(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699d16e FUN_14699d16e body=29 status=ok
// SIG undefined FUN_14699d16e(void)

void FUN_14699d16e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699d18c FUN_14699d18c body=52 status=ok
// SIG undefined FUN_14699d18c(void)

undefined8 * FUN_14699d18c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef77c0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699d1c0 FUN_14699d1c0 body=125 status=ok
// SIG undefined FUN_14699d1c0(void)

undefined8 FUN_14699d1c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699d23e(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699d23e FUN_14699d23e body=288 status=ok
// SIG undefined FUN_14699d23e(void)

void FUN_14699d23e(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699d35e;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699d366 FUN_14699d366 body=133 status=ok
// SIG undefined FUN_14699d366(void)

void FUN_14699d366(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_14699d3ec(param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,param_1[2],
                    lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699d3ec FUN_14699d3ec body=205 status=ok
// SIG undefined FUN_14699d3ec(void)

void FUN_14699d3ec(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  double dVar1;
  short sVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  dVar1 = *(double *)(*param_1 + param_2 * 8);
  uVar3 = SUB84(dVar1,0);
  uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (1.0 <= dVar1) {
    uVar3 = 0;
    uVar5 = 0x3ff00000;
  }
  if ((double)CONCAT44(uVar5,uVar3) <= 0.0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  fVar4 = (float)(double)CONCAT44(uVar5,uVar3);
  if ((param_4 & 0x8000000000000001) == 1) {
    if ((uint)fVar4 < 0x47800000) {
      if ((uint)fVar4 < 0x38800000) {
        sVar2 = SUB42(fVar4 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar4 + 0x8000fff + (uint)(((uint)fVar4 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar4 | 0x3e) << 9;
    }
  }
  else {
    if ((uint)fVar4 < 0x47800000) {
      if ((uint)fVar4 < 0x38800000) {
        sVar2 = SUB42(fVar4 + 0.5,0);
      }
      else {
        sVar2 = (short)((int)fVar4 + 0x8000fff + (uint)(((uint)fVar4 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar2 = (0x7f800000 < (uint)fVar4 | 0x3e) << 9;
    }
    *(short *)(*param_3 + param_4 * 2) = sVar2;
    sVar2 = *(short *)(*param_3 + param_4 * 2);
    *(short *)(*param_3 + 2 + param_4 * 2) = sVar2;
  }
  *(short *)(*param_3 + 4 + param_4 * 2) = sVar2;
  return;
}



// FUNCTION 14699d4ca FUN_14699d4ca body=29 status=ok
// SIG undefined FUN_14699d4ca(void)

void FUN_14699d4ca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699d4e8 FUN_14699d4e8 body=52 status=ok
// SIG undefined FUN_14699d4e8(void)

undefined8 * FUN_14699d4e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef77e0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699d51c FUN_14699d51c body=125 status=ok
// SIG undefined FUN_14699d51c(void)

undefined8 FUN_14699d51c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699d59a(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699d59a FUN_14699d59a body=262 status=ok
// SIG undefined FUN_14699d59a(void)

void FUN_14699d59a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699d6a0;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699d6a8 FUN_14699d6a8 body=99 status=ok
// SIG undefined FUN_14699d6a8(void)

void FUN_14699d6a8(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_14699d3ec(*(undefined8 *)(param_1 + 0x18),(ulonglong)bVar1 * (longlong)param_2 + lVar3,
                    *(undefined8 *)(param_1 + 0x10),lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699d71c FUN_14699d71c body=29 status=ok
// SIG undefined FUN_14699d71c(void)

void FUN_14699d71c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699d73a FUN_14699d73a body=52 status=ok
// SIG undefined FUN_14699d73a(void)

undefined8 * FUN_14699d73a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7800;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699d76e FUN_14699d76e body=127 status=ok
// SIG undefined FUN_14699d76e(void)

undefined8 FUN_14699d76e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699d59a(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699d8d8 FUN_14699d8d8 body=116 status=ok
// SIG undefined FUN_14699d8d8(void)

void FUN_14699d8d8(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
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
  undefined8 in_RAX;
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
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428d7ccc(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428d6ee4(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428d9ebe();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428d93fd;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428d93fd;
  }
  uStack_74 = 1;
LAB_1428d93fd:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) * 2)) {
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
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428d94f6:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
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
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
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
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428d973f;
LAB_1428d96d5:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428d973f:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7880;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428d98cb;
                }
                else {
                  puVar18[0x16] = &LAB_14699df70;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428d98cb:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428d98fe;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428d98fe:
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
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428d94f6;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428d96d5;
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
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428d9b1f;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428d9b1f:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14699d95c FUN_14699d95c body=29 status=ok
// SIG undefined FUN_14699d95c(void)

void FUN_14699d95c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699d97a FUN_14699d97a body=52 status=ok
// SIG undefined FUN_14699d97a(void)

undefined8 * FUN_14699d97a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7820;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699d9ae FUN_14699d9ae body=125 status=ok
// SIG undefined FUN_14699d9ae(void)

undefined8 FUN_14699d9ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699da2c(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699da2c FUN_14699da2c body=287 status=ok
// SIG undefined FUN_14699da2c(void)

void FUN_14699da2c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699db4c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699dc1e FUN_14699dc1e body=29 status=ok
// SIG undefined FUN_14699dc1e(void)

void FUN_14699dc1e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699dc3c FUN_14699dc3c body=52 status=ok
// SIG undefined FUN_14699dc3c(void)

undefined8 * FUN_14699dc3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7840;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699dc70 FUN_14699dc70 body=125 status=ok
// SIG undefined FUN_14699dc70(void)

undefined8 FUN_14699dc70(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699dcee(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699dcee FUN_14699dcee body=261 status=ok
// SIG undefined FUN_14699dcee(void)

void FUN_14699dcee(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699ddf4;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699de80 FUN_14699de80 body=29 status=ok
// SIG undefined FUN_14699de80(void)

void FUN_14699de80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699de9e FUN_14699de9e body=52 status=ok
// SIG undefined FUN_14699de9e(void)

undefined8 * FUN_14699de9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7860;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699ded2 FUN_14699ded2 body=127 status=ok
// SIG undefined FUN_14699ded2(void)

undefined8 FUN_14699ded2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699dcee(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699df80 FUN_14699df80 body=29 status=ok
// SIG undefined FUN_14699df80(void)

void FUN_14699df80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699df9e FUN_14699df9e body=52 status=ok
// SIG undefined FUN_14699df9e(void)

undefined8 * FUN_14699df9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7880;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699dfd2 FUN_14699dfd2 body=125 status=ok
// SIG undefined FUN_14699dfd2(void)

undefined8 FUN_14699dfd2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699e050(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699e050 FUN_14699e050 body=287 status=ok
// SIG undefined FUN_14699e050(void)

void FUN_14699e050(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699e170;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}


