// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428d0a7c Unwind@1428d0a7c body=76 status=ok
// SIG undefined Unwind@1428d0a7c(void)

void Unwind_1428d0a7c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428d0ac8 Unwind@1428d0ac8 body=76 status=ok
// SIG undefined Unwind@1428d0ac8(void)

void Unwind_1428d0ac8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428d0b14 Unwind@1428d0b14 body=38 status=ok
// SIG undefined Unwind@1428d0b14(void)

void Unwind_1428d0b14(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d0b3c FUN_1428d0b3c body=2406 status=ok
// SIG undefined FUN_1428d0b3c(void)

void FUN_1428d0b3c(longlong param_1)

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
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
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
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
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
    if (iVar8 != 1) goto LAB_1428d0d08;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428d0d08;
  }
  local_74 = 1;
LAB_1428d0d08:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) << 2)) {
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
LAB_1428d0e02:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428d104b;
LAB_1428d0fe1:
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
LAB_1428d104b:
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
                *puVar16 = &PTR_LAB_149ef7700;
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
                  if (local_148 != 0) goto LAB_1428d11d7;
                }
                else {
                  puVar17[0x16] = &LAB_14699c386;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428d11d7:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428d120a;
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
LAB_1428d120a:
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
                goto LAB_1428d0e02;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428d0fe1;
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
          goto LAB_1428d142b;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428d142b:
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



// FUNCTION 1428d14a2 Unwind@1428d14a2 body=38 status=ok
// SIG undefined Unwind@1428d14a2(void)

void Unwind_1428d14a2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d14ca Unwind@1428d14ca body=196 status=ok
// SIG undefined Unwind@1428d14ca(void)

void Unwind_1428d14ca(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d158e Unwind@1428d158e body=95 status=ok
// SIG undefined Unwind@1428d158e(void)

void Unwind_1428d158e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d15ee Unwind@1428d15ee body=95 status=ok
// SIG undefined Unwind@1428d15ee(void)

void Unwind_1428d15ee(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d164e Unwind@1428d164e body=67 status=ok
// SIG undefined Unwind@1428d164e(void)

void Unwind_1428d164e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428d1692 Unwind@1428d1692 body=67 status=ok
// SIG undefined Unwind@1428d1692(void)

void Unwind_1428d1692(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428d16d6 Unwind@1428d16d6 body=38 status=ok
// SIG undefined Unwind@1428d16d6(void)

void Unwind_1428d16d6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d16fe Unwind@1428d16fe body=130 status=ok
// SIG undefined Unwind@1428d16fe(void)

void Unwind_1428d16fe(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428d1780 Unwind@1428d1780 body=73 status=ok
// SIG undefined Unwind@1428d1780(void)

void Unwind_1428d1780(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428d17ca FUN_1428d17ca body=3602 status=ok
// SIG undefined FUN_1428d17ca(void)

void FUN_1428d17ca(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
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
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428d191e;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428d191e;
  }
  uVar7 = 1;
LAB_1428d191e:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)bVar26 * 4 * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428d21bb;
LAB_1428d2158:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428d21bb:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7740;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428d2341;
              }
              else {
                puVar17[0x16] = &LAB_14699c934;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428d2341:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428d2374;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428d2374:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428d2491;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428d2158;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428d2530:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428d1a0e:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428d1c50;
LAB_1428d1be9:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428d1c50:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7720;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428d1dd9;
              }
              else {
                puVar17[0x16] = &LAB_14699c6e2;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428d1dd9:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428d1e0c;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428d1e0c:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
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
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
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
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428d1a0e;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428d1be9;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428d2530;
      }
LAB_1428d2491:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428d25dc Unwind@1428d25dc body=38 status=ok
// SIG undefined Unwind@1428d25dc(void)

void Unwind_1428d25dc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d2604 Unwind@1428d2604 body=193 status=ok
// SIG undefined Unwind@1428d2604(void)

void Unwind_1428d2604(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428d26c6 Unwind@1428d26c6 body=83 status=ok
// SIG undefined Unwind@1428d26c6(void)

void Unwind_1428d26c6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428d271a Unwind@1428d271a body=83 status=ok
// SIG undefined Unwind@1428d271a(void)

void Unwind_1428d271a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428d276e Unwind@1428d276e body=67 status=ok
// SIG undefined Unwind@1428d276e(void)

void Unwind_1428d276e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428d27b2 Unwind@1428d27b2 body=67 status=ok
// SIG undefined Unwind@1428d27b2(void)

void Unwind_1428d27b2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428d27f6 Unwind@1428d27f6 body=38 status=ok
// SIG undefined Unwind@1428d27f6(void)

void Unwind_1428d27f6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d281e Unwind@1428d281e body=193 status=ok
// SIG undefined Unwind@1428d281e(void)

void Unwind_1428d281e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428d28e0 Unwind@1428d28e0 body=95 status=ok
// SIG undefined Unwind@1428d28e0(void)

void Unwind_1428d28e0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d2940 Unwind@1428d2940 body=95 status=ok
// SIG undefined Unwind@1428d2940(void)

void Unwind_1428d2940(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d29a0 Unwind@1428d29a0 body=67 status=ok
// SIG undefined Unwind@1428d29a0(void)

void Unwind_1428d29a0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428d29e4 Unwind@1428d29e4 body=67 status=ok
// SIG undefined Unwind@1428d29e4(void)

void Unwind_1428d29e4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428d2a28 Unwind@1428d2a28 body=38 status=ok
// SIG undefined Unwind@1428d2a28(void)

void Unwind_1428d2a28(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d2a50 Unwind@1428d2a50 body=130 status=ok
// SIG undefined Unwind@1428d2a50(void)

void Unwind_1428d2a50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428d2ad2 Unwind@1428d2ad2 body=76 status=ok
// SIG undefined Unwind@1428d2ad2(void)

void Unwind_1428d2ad2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428d2b1e Unwind@1428d2b1e body=76 status=ok
// SIG undefined Unwind@1428d2b1e(void)

void Unwind_1428d2b1e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428d2b6a FUN_1428d2b6a body=2752 status=ok
// SIG undefined FUN_1428d2b6a(void)

void FUN_1428d2b6a(longlong ******param_1,undefined1 param_2,char param_3)

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
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
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
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 1;
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
  local_1d0 = (longlong *****)&local_170;
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
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428d2d37;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428d2d37;
  }
  uVar30 = 1;
LAB_1428d2d37:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) << 3)) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
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
LAB_1428d2e43:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428d3089;
LAB_1428d301d:
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
LAB_1428d3089:
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
                *puVar19 = &PTR_LAB_149ef7760;
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
                  if (local_118 != 0) goto LAB_1428d3229;
                }
                else {
                  puVar20[0x16] = &LAB_14699ca8a;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428d3229:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428d325f;
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
LAB_1428d325f:
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
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428d2e43;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428d301d;
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
          goto LAB_1428d3499;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
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
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699cd86;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428d3499:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428d362a Unwind@1428d362a body=38 status=ok
// SIG undefined Unwind@1428d362a(void)

void Unwind_1428d362a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d3652 Unwind@1428d3652 body=196 status=ok
// SIG undefined Unwind@1428d3652(void)

void Unwind_1428d3652(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d3716 Unwind@1428d3716 body=95 status=ok
// SIG undefined Unwind@1428d3716(void)

void Unwind_1428d3716(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d3776 Unwind@1428d3776 body=95 status=ok
// SIG undefined Unwind@1428d3776(void)

void Unwind_1428d3776(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d37d6 Unwind@1428d37d6 body=64 status=ok
// SIG undefined Unwind@1428d37d6(void)

void Unwind_1428d37d6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428d3816 Unwind@1428d3816 body=67 status=ok
// SIG undefined Unwind@1428d3816(void)

void Unwind_1428d3816(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d385a Unwind@1428d385a body=131 status=ok
// SIG undefined Unwind@1428d385a(void)

void Unwind_1428d385a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428d38de Unwind@1428d38de body=76 status=ok
// SIG undefined Unwind@1428d38de(void)

void Unwind_1428d38de(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428d392a Unwind@1428d392a body=38 status=ok
// SIG undefined Unwind@1428d392a(void)

void Unwind_1428d392a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d3952 FUN_1428d3952 body=4058 status=ok
// SIG undefined FUN_1428d3952(void)

void FUN_1428d3952(longlong *param_1,undefined1 param_2,char param_3)

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
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
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
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
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
  local_1b0 = &local_1c8;
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
    if (iVar6 != 1) goto LAB_1428d3ab8;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428d3ab8;
  }
  uVar7 = 1;
LAB_1428d3ab8:
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
  if (local_140 < (ulonglong)bVar25 * 8 * plVar20[0x11] * (longlong)(int)uVar22) {
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
          if (puVar15 != (uint *)0x0) goto LAB_1428d43db;
LAB_1428d4378:
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
LAB_1428d43db:
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
              *puVar16 = &PTR_LAB_149ef77a0;
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
                if (local_e8 != 0) goto LAB_1428d456e;
              }
              else {
                puVar18[0x16] = &LAB_14699d060;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428d456e:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428d45a4;
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
LAB_1428d45a4:
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
              goto LAB_1428d46c7;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428d4378;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428d4773:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428d4799;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428d3bd4:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428d3e35;
LAB_1428d3dce:
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
LAB_1428d3e35:
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
              *puVar16 = &PTR_LAB_149ef7780;
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
                if (local_e8 != 0) goto LAB_1428d3fd4;
              }
              else {
                puVar18[0x16] = &LAB_14699cda2;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428d3fd4:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428d400a;
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
LAB_1428d400a:
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
              goto LAB_1428d3bd4;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428d3dce;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428d4773;
      }
LAB_1428d46c7:
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
      local_130 = (longlong *)&LAB_14699d142;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428d4799:
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



// FUNCTION 1428d492c Unwind@1428d492c body=38 status=ok
// SIG undefined Unwind@1428d492c(void)

void Unwind_1428d492c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d4954 Unwind@1428d4954 body=193 status=ok
// SIG undefined Unwind@1428d4954(void)

void Unwind_1428d4954(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d4a16 Unwind@1428d4a16 body=83 status=ok
// SIG undefined Unwind@1428d4a16(void)

void Unwind_1428d4a16(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d4a6a Unwind@1428d4a6a body=83 status=ok
// SIG undefined Unwind@1428d4a6a(void)

void Unwind_1428d4a6a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d4abe Unwind@1428d4abe body=64 status=ok
// SIG undefined Unwind@1428d4abe(void)

void Unwind_1428d4abe(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428d4afe Unwind@1428d4afe body=67 status=ok
// SIG undefined Unwind@1428d4afe(void)

void Unwind_1428d4afe(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d4b42 Unwind@1428d4b42 body=38 status=ok
// SIG undefined Unwind@1428d4b42(void)

void Unwind_1428d4b42(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d4b6a Unwind@1428d4b6a body=196 status=ok
// SIG undefined Unwind@1428d4b6a(void)

void Unwind_1428d4b6a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d4c2e Unwind@1428d4c2e body=95 status=ok
// SIG undefined Unwind@1428d4c2e(void)

void Unwind_1428d4c2e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d4c8e Unwind@1428d4c8e body=95 status=ok
// SIG undefined Unwind@1428d4c8e(void)

void Unwind_1428d4c8e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d4cee Unwind@1428d4cee body=64 status=ok
// SIG undefined Unwind@1428d4cee(void)

void Unwind_1428d4cee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428d4d2e Unwind@1428d4d2e body=67 status=ok
// SIG undefined Unwind@1428d4d2e(void)

void Unwind_1428d4d2e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d4d72 Unwind@1428d4d72 body=131 status=ok
// SIG undefined Unwind@1428d4d72(void)

void Unwind_1428d4d72(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d4df6 Unwind@1428d4df6 body=76 status=ok
// SIG undefined Unwind@1428d4df6(void)

void Unwind_1428d4df6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428d4e42 Unwind@1428d4e42 body=76 status=ok
// SIG undefined Unwind@1428d4e42(void)

void Unwind_1428d4e42(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428d4e8e Unwind@1428d4e8e body=38 status=ok
// SIG undefined Unwind@1428d4e8e(void)

void Unwind_1428d4e8e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d4eb6 FUN_1428d4eb6 body=2406 status=ok
// SIG undefined FUN_1428d4eb6(void)

void FUN_1428d4eb6(longlong param_1)

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
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
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
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
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
    if (iVar8 != 1) goto LAB_1428d5082;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428d5082;
  }
  local_74 = 1;
LAB_1428d5082:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) << 3)) {
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
LAB_1428d517c:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428d53c5;
LAB_1428d535b:
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
LAB_1428d53c5:
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
                *puVar16 = &PTR_LAB_149ef77c0;
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
                  if (local_148 != 0) goto LAB_1428d5551;
                }
                else {
                  puVar17[0x16] = &LAB_14699d15e;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428d5551:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428d5584;
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
LAB_1428d5584:
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
                goto LAB_1428d517c;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428d535b;
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
          goto LAB_1428d57a5;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428d57a5:
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



// FUNCTION 1428d581c Unwind@1428d581c body=38 status=ok
// SIG undefined Unwind@1428d581c(void)

void Unwind_1428d581c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d5844 Unwind@1428d5844 body=196 status=ok
// SIG undefined Unwind@1428d5844(void)

void Unwind_1428d5844(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d5908 Unwind@1428d5908 body=95 status=ok
// SIG undefined Unwind@1428d5908(void)

void Unwind_1428d5908(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d5968 Unwind@1428d5968 body=95 status=ok
// SIG undefined Unwind@1428d5968(void)

void Unwind_1428d5968(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d59c8 Unwind@1428d59c8 body=67 status=ok
// SIG undefined Unwind@1428d59c8(void)

void Unwind_1428d59c8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428d5a0c Unwind@1428d5a0c body=67 status=ok
// SIG undefined Unwind@1428d5a0c(void)

void Unwind_1428d5a0c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428d5a50 Unwind@1428d5a50 body=38 status=ok
// SIG undefined Unwind@1428d5a50(void)

void Unwind_1428d5a50(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d5a78 Unwind@1428d5a78 body=130 status=ok
// SIG undefined Unwind@1428d5a78(void)

void Unwind_1428d5a78(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428d5afa Unwind@1428d5afa body=73 status=ok
// SIG undefined Unwind@1428d5afa(void)

void Unwind_1428d5afa(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428d5b44 FUN_1428d5b44 body=3602 status=ok
// SIG undefined FUN_1428d5b44(void)

void FUN_1428d5b44(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
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
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428d5c98;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428d5c98;
  }
  uVar7 = 1;
LAB_1428d5c98:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)bVar26 * 8 * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428d6535;
LAB_1428d64d2:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428d6535:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7800;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428d66bb;
              }
              else {
                puVar17[0x16] = &LAB_14699d70c;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428d66bb:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428d66ee;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428d66ee:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428d680b;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428d64d2;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428d68aa:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428d5d88:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428d5fca;
LAB_1428d5f63:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428d5fca:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef77e0;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428d6153;
              }
              else {
                puVar17[0x16] = &LAB_14699d4ba;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428d6153:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428d6186;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428d6186:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
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
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
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
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428d5d88;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428d5f63;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428d68aa;
      }
LAB_1428d680b:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428d6956 Unwind@1428d6956 body=38 status=ok
// SIG undefined Unwind@1428d6956(void)

void Unwind_1428d6956(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d697e Unwind@1428d697e body=193 status=ok
// SIG undefined Unwind@1428d697e(void)

void Unwind_1428d697e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428d6a40 Unwind@1428d6a40 body=83 status=ok
// SIG undefined Unwind@1428d6a40(void)

void Unwind_1428d6a40(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428d6a94 Unwind@1428d6a94 body=83 status=ok
// SIG undefined Unwind@1428d6a94(void)

void Unwind_1428d6a94(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428d6ae8 Unwind@1428d6ae8 body=67 status=ok
// SIG undefined Unwind@1428d6ae8(void)

void Unwind_1428d6ae8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428d6b2c Unwind@1428d6b2c body=67 status=ok
// SIG undefined Unwind@1428d6b2c(void)

void Unwind_1428d6b2c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428d6b70 Unwind@1428d6b70 body=38 status=ok
// SIG undefined Unwind@1428d6b70(void)

void Unwind_1428d6b70(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d6b98 Unwind@1428d6b98 body=193 status=ok
// SIG undefined Unwind@1428d6b98(void)

void Unwind_1428d6b98(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428d6c5a Unwind@1428d6c5a body=95 status=ok
// SIG undefined Unwind@1428d6c5a(void)

void Unwind_1428d6c5a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d6cba Unwind@1428d6cba body=95 status=ok
// SIG undefined Unwind@1428d6cba(void)

void Unwind_1428d6cba(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d6d1a Unwind@1428d6d1a body=67 status=ok
// SIG undefined Unwind@1428d6d1a(void)

void Unwind_1428d6d1a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428d6d5e Unwind@1428d6d5e body=67 status=ok
// SIG undefined Unwind@1428d6d5e(void)

void Unwind_1428d6d5e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428d6da2 Unwind@1428d6da2 body=38 status=ok
// SIG undefined Unwind@1428d6da2(void)

void Unwind_1428d6da2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d6dca Unwind@1428d6dca body=130 status=ok
// SIG undefined Unwind@1428d6dca(void)

void Unwind_1428d6dca(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428d6e4c Unwind@1428d6e4c body=76 status=ok
// SIG undefined Unwind@1428d6e4c(void)

void Unwind_1428d6e4c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428d6e98 Unwind@1428d6e98 body=76 status=ok
// SIG undefined Unwind@1428d6e98(void)

void Unwind_1428d6e98(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428d6ee4 FUN_1428d6ee4 body=2752 status=ok
// SIG undefined FUN_1428d6ee4(void)

void FUN_1428d6ee4(longlong ******param_1,undefined1 param_2,char param_3)

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
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
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
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 2;
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
  local_1d0 = (longlong *****)&local_170;
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
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428d70b2;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428d70b2;
  }
  uVar30 = 1;
LAB_1428d70b2:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) * 2)) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
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
LAB_1428d71bd:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428d7403;
LAB_1428d7397:
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
LAB_1428d7403:
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
                *puVar19 = &PTR_LAB_149ef7820;
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
                  if (local_118 != 0) goto LAB_1428d75a3;
                }
                else {
                  puVar20[0x16] = &LAB_14699d94c;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428d75a3:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428d75d9;
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
LAB_1428d75d9:
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
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428d71bd;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428d7397;
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
          goto LAB_1428d7813;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
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
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699dbf0;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428d7813:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428d79a4 Unwind@1428d79a4 body=38 status=ok
// SIG undefined Unwind@1428d79a4(void)

void Unwind_1428d79a4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d79cc Unwind@1428d79cc body=196 status=ok
// SIG undefined Unwind@1428d79cc(void)

void Unwind_1428d79cc(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d7a90 Unwind@1428d7a90 body=95 status=ok
// SIG undefined Unwind@1428d7a90(void)

void Unwind_1428d7a90(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d7af0 Unwind@1428d7af0 body=95 status=ok
// SIG undefined Unwind@1428d7af0(void)

void Unwind_1428d7af0(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d7b50 Unwind@1428d7b50 body=64 status=ok
// SIG undefined Unwind@1428d7b50(void)

void Unwind_1428d7b50(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428d7b90 Unwind@1428d7b90 body=67 status=ok
// SIG undefined Unwind@1428d7b90(void)

void Unwind_1428d7b90(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d7bd4 Unwind@1428d7bd4 body=131 status=ok
// SIG undefined Unwind@1428d7bd4(void)

void Unwind_1428d7bd4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428d7c58 Unwind@1428d7c58 body=76 status=ok
// SIG undefined Unwind@1428d7c58(void)

void Unwind_1428d7c58(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428d7ca4 Unwind@1428d7ca4 body=38 status=ok
// SIG undefined Unwind@1428d7ca4(void)

void Unwind_1428d7ca4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d7ccc FUN_1428d7ccc body=4058 status=ok
// SIG undefined FUN_1428d7ccc(void)

void FUN_1428d7ccc(longlong *param_1,undefined1 param_2,char param_3)

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
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
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
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
  local_1b0 = &local_1c8;
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
    if (iVar6 != 1) goto LAB_1428d7e33;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428d7e33;
  }
  uVar7 = 1;
LAB_1428d7e33:
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
  if (local_140 < (ulonglong)((uint)bVar25 * 2) * plVar20[0x11] * (longlong)(int)uVar22) {
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
          if (puVar15 != (uint *)0x0) goto LAB_1428d8755;
LAB_1428d86f2:
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
LAB_1428d8755:
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
              *puVar16 = &PTR_LAB_149ef7860;
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
                if (local_e8 != 0) goto LAB_1428d88e8;
              }
              else {
                puVar18[0x16] = &LAB_14699de70;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428d88e8:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428d891e;
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
LAB_1428d891e:
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
              goto LAB_1428d8a41;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428d86f2;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428d8aed:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428d8b13;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428d7f4e:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428d81af;
LAB_1428d8148:
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
LAB_1428d81af:
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
              *puVar16 = &PTR_LAB_149ef7840;
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
                if (local_e8 != 0) goto LAB_1428d834e;
              }
              else {
                puVar18[0x16] = &LAB_14699dc0e;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428d834e:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428d8384;
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
LAB_1428d8384:
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
              goto LAB_1428d7f4e;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428d8148;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428d8aed;
      }
LAB_1428d8a41:
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
      local_130 = (longlong *)&LAB_14699df52;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428d8b13:
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



// FUNCTION 1428d8ca6 Unwind@1428d8ca6 body=38 status=ok
// SIG undefined Unwind@1428d8ca6(void)

void Unwind_1428d8ca6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d8cce Unwind@1428d8cce body=193 status=ok
// SIG undefined Unwind@1428d8cce(void)

void Unwind_1428d8cce(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d8d90 Unwind@1428d8d90 body=83 status=ok
// SIG undefined Unwind@1428d8d90(void)

void Unwind_1428d8d90(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d8de4 Unwind@1428d8de4 body=83 status=ok
// SIG undefined Unwind@1428d8de4(void)

void Unwind_1428d8de4(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d8e38 Unwind@1428d8e38 body=64 status=ok
// SIG undefined Unwind@1428d8e38(void)

void Unwind_1428d8e38(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428d8e78 Unwind@1428d8e78 body=67 status=ok
// SIG undefined Unwind@1428d8e78(void)

void Unwind_1428d8e78(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d8ebc Unwind@1428d8ebc body=38 status=ok
// SIG undefined Unwind@1428d8ebc(void)

void Unwind_1428d8ebc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d8ee4 Unwind@1428d8ee4 body=196 status=ok
// SIG undefined Unwind@1428d8ee4(void)

void Unwind_1428d8ee4(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d8fa8 Unwind@1428d8fa8 body=95 status=ok
// SIG undefined Unwind@1428d8fa8(void)

void Unwind_1428d8fa8(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d9008 Unwind@1428d9008 body=95 status=ok
// SIG undefined Unwind@1428d9008(void)

void Unwind_1428d9008(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d9068 Unwind@1428d9068 body=64 status=ok
// SIG undefined Unwind@1428d9068(void)

void Unwind_1428d9068(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428d90a8 Unwind@1428d90a8 body=67 status=ok
// SIG undefined Unwind@1428d90a8(void)

void Unwind_1428d90a8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d90ec Unwind@1428d90ec body=131 status=ok
// SIG undefined Unwind@1428d90ec(void)

void Unwind_1428d90ec(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d9170 Unwind@1428d9170 body=76 status=ok
// SIG undefined Unwind@1428d9170(void)

void Unwind_1428d9170(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428d91bc Unwind@1428d91bc body=76 status=ok
// SIG undefined Unwind@1428d91bc(void)

void Unwind_1428d91bc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428d9208 Unwind@1428d9208 body=38 status=ok
// SIG undefined Unwind@1428d9208(void)

void Unwind_1428d9208(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d9230 FUN_1428d9230 body=2406 status=ok
// SIG undefined FUN_1428d9230(void)

void FUN_1428d9230(longlong param_1)

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
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
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
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
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
    if (iVar8 != 1) goto LAB_1428d93fd;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428d93fd;
  }
  local_74 = 1;
LAB_1428d93fd:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) * 2)) {
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
LAB_1428d94f6:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428d973f;
LAB_1428d96d5:
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
LAB_1428d973f:
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
                *puVar16 = &PTR_LAB_149ef7880;
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
                  if (local_148 != 0) goto LAB_1428d98cb;
                }
                else {
                  puVar17[0x16] = &LAB_14699df70;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428d98cb:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428d98fe;
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
LAB_1428d98fe:
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
                goto LAB_1428d94f6;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428d96d5;
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
          goto LAB_1428d9b1f;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428d9b1f:
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



// FUNCTION 1428d9b96 Unwind@1428d9b96 body=38 status=ok
// SIG undefined Unwind@1428d9b96(void)

void Unwind_1428d9b96(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d9bbe Unwind@1428d9bbe body=196 status=ok
// SIG undefined Unwind@1428d9bbe(void)

void Unwind_1428d9bbe(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428d9c82 Unwind@1428d9c82 body=95 status=ok
// SIG undefined Unwind@1428d9c82(void)

void Unwind_1428d9c82(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d9ce2 Unwind@1428d9ce2 body=95 status=ok
// SIG undefined Unwind@1428d9ce2(void)

void Unwind_1428d9ce2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428d9d42 Unwind@1428d9d42 body=67 status=ok
// SIG undefined Unwind@1428d9d42(void)

void Unwind_1428d9d42(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428d9d86 Unwind@1428d9d86 body=67 status=ok
// SIG undefined Unwind@1428d9d86(void)

void Unwind_1428d9d86(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428d9dca Unwind@1428d9dca body=38 status=ok
// SIG undefined Unwind@1428d9dca(void)

void Unwind_1428d9dca(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d9df2 Unwind@1428d9df2 body=130 status=ok
// SIG undefined Unwind@1428d9df2(void)

void Unwind_1428d9df2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428d9e74 Unwind@1428d9e74 body=73 status=ok
// SIG undefined Unwind@1428d9e74(void)

void Unwind_1428d9e74(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428d9ebe FUN_1428d9ebe body=3602 status=ok
// SIG undefined FUN_1428d9ebe(void)

void FUN_1428d9ebe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
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
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428da013;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428da013;
  }
  uVar7 = 1;
LAB_1428da013:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)((uint)bVar26 * 2) * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428da8af;
LAB_1428da84c:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428da8af:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef78c0;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428daa35;
              }
              else {
                puVar17[0x16] = &LAB_14699e4de;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428daa35:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428daa68;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428daa68:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428dab85;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428da84c;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428dac24:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428da102:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428da344;
LAB_1428da2dd:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428da344:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef78a0;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428da4cd;
              }
              else {
                puVar17[0x16] = &LAB_14699e246;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428da4cd:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428da500;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428da500:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
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
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
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
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428da102;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428da2dd;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428dac24;
      }
LAB_1428dab85:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428dacd0 Unwind@1428dacd0 body=38 status=ok
// SIG undefined Unwind@1428dacd0(void)

void Unwind_1428dacd0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428dacf8 Unwind@1428dacf8 body=193 status=ok
// SIG undefined Unwind@1428dacf8(void)

void Unwind_1428dacf8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428dadba Unwind@1428dadba body=83 status=ok
// SIG undefined Unwind@1428dadba(void)

void Unwind_1428dadba(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428dae0e Unwind@1428dae0e body=83 status=ok
// SIG undefined Unwind@1428dae0e(void)

void Unwind_1428dae0e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428dae62 Unwind@1428dae62 body=67 status=ok
// SIG undefined Unwind@1428dae62(void)

void Unwind_1428dae62(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428daea6 Unwind@1428daea6 body=67 status=ok
// SIG undefined Unwind@1428daea6(void)

void Unwind_1428daea6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428daeea Unwind@1428daeea body=38 status=ok
// SIG undefined Unwind@1428daeea(void)

void Unwind_1428daeea(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428daf12 Unwind@1428daf12 body=193 status=ok
// SIG undefined Unwind@1428daf12(void)

void Unwind_1428daf12(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428dafd4 Unwind@1428dafd4 body=95 status=ok
// SIG undefined Unwind@1428dafd4(void)

void Unwind_1428dafd4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428db034 Unwind@1428db034 body=95 status=ok
// SIG undefined Unwind@1428db034(void)

void Unwind_1428db034(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428db094 Unwind@1428db094 body=67 status=ok
// SIG undefined Unwind@1428db094(void)

void Unwind_1428db094(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428db0d8 Unwind@1428db0d8 body=67 status=ok
// SIG undefined Unwind@1428db0d8(void)

void Unwind_1428db0d8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428db11c Unwind@1428db11c body=38 status=ok
// SIG undefined Unwind@1428db11c(void)

void Unwind_1428db11c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428db144 Unwind@1428db144 body=130 status=ok
// SIG undefined Unwind@1428db144(void)

void Unwind_1428db144(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428db1c6 Unwind@1428db1c6 body=76 status=ok
// SIG undefined Unwind@1428db1c6(void)

void Unwind_1428db1c6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428db212 Unwind@1428db212 body=76 status=ok
// SIG undefined Unwind@1428db212(void)

void Unwind_1428db212(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428db25e FUN_1428db25e body=2753 status=ok
// SIG undefined FUN_1428db25e(void)

void FUN_1428db25e(longlong ******param_1,undefined1 param_2,char param_3)

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
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
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
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 2;
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
  local_1d0 = (longlong *****)&local_170;
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
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428db42c;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428db42c;
  }
  uVar30 = 1;
LAB_1428db42c:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) << 2)) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
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
LAB_1428db538:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428db77e;
LAB_1428db712:
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
LAB_1428db77e:
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
                *puVar19 = &PTR_LAB_149ef78e0;
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
                  if (local_118 != 0) goto LAB_1428db91e;
                }
                else {
                  puVar20[0x16] = &LAB_14699e634;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428db91e:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428db954;
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
LAB_1428db954:
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
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428db538;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428db712;
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
          goto LAB_1428dbb8e;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
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
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699e8d8;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428dbb8e:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428dbd20 Unwind@1428dbd20 body=38 status=ok
// SIG undefined Unwind@1428dbd20(void)

void Unwind_1428dbd20(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428dbd48 Unwind@1428dbd48 body=196 status=ok
// SIG undefined Unwind@1428dbd48(void)

void Unwind_1428dbd48(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dbe0c Unwind@1428dbe0c body=95 status=ok
// SIG undefined Unwind@1428dbe0c(void)

void Unwind_1428dbe0c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dbe6c Unwind@1428dbe6c body=95 status=ok
// SIG undefined Unwind@1428dbe6c(void)

void Unwind_1428dbe6c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dbecc Unwind@1428dbecc body=64 status=ok
// SIG undefined Unwind@1428dbecc(void)

void Unwind_1428dbecc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428dbf0c Unwind@1428dbf0c body=67 status=ok
// SIG undefined Unwind@1428dbf0c(void)

void Unwind_1428dbf0c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428dbf50 Unwind@1428dbf50 body=131 status=ok
// SIG undefined Unwind@1428dbf50(void)

void Unwind_1428dbf50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428dbfd4 Unwind@1428dbfd4 body=76 status=ok
// SIG undefined Unwind@1428dbfd4(void)

void Unwind_1428dbfd4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428dc020 Unwind@1428dc020 body=38 status=ok
// SIG undefined Unwind@1428dc020(void)

void Unwind_1428dc020(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428dc048 FUN_1428dc048 body=4059 status=ok
// SIG undefined FUN_1428dc048(void)

void FUN_1428dc048(longlong *param_1,undefined1 param_2,char param_3)

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
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
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
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
  local_1b0 = &local_1c8;
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
    if (iVar6 != 1) goto LAB_1428dc1af;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428dc1af;
  }
  uVar7 = 1;
LAB_1428dc1af:
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
  if (local_140 < (ulonglong)bVar25 * 4 * plVar20[0x11] * (longlong)(int)uVar22) {
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
          if (puVar15 != (uint *)0x0) goto LAB_1428dcad2;
LAB_1428dca6f:
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
LAB_1428dcad2:
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
              *puVar16 = &PTR_LAB_149ef7920;
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
                if (local_e8 != 0) goto LAB_1428dcc65;
              }
              else {
                puVar18[0x16] = &LAB_14699eb58;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428dcc65:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428dcc9b;
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
LAB_1428dcc9b:
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
              goto LAB_1428dcdbe;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428dca6f;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428dce6a:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428dce90;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428dc2cb:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428dc52c;
LAB_1428dc4c5:
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
LAB_1428dc52c:
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
              *puVar16 = &PTR_LAB_149ef7900;
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
                if (local_e8 != 0) goto LAB_1428dc6cb;
              }
              else {
                puVar18[0x16] = &LAB_14699e8f6;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428dc6cb:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428dc701;
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
LAB_1428dc701:
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
              goto LAB_1428dc2cb;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428dc4c5;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428dce6a;
      }
LAB_1428dcdbe:
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
      local_130 = (longlong *)&LAB_14699ec3a;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428dce90:
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



// FUNCTION 1428dd024 Unwind@1428dd024 body=38 status=ok
// SIG undefined Unwind@1428dd024(void)

void Unwind_1428dd024(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428dd04c Unwind@1428dd04c body=193 status=ok
// SIG undefined Unwind@1428dd04c(void)

void Unwind_1428dd04c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dd10e Unwind@1428dd10e body=83 status=ok
// SIG undefined Unwind@1428dd10e(void)

void Unwind_1428dd10e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dd162 Unwind@1428dd162 body=83 status=ok
// SIG undefined Unwind@1428dd162(void)

void Unwind_1428dd162(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dd1b6 Unwind@1428dd1b6 body=64 status=ok
// SIG undefined Unwind@1428dd1b6(void)

void Unwind_1428dd1b6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428dd1f6 Unwind@1428dd1f6 body=67 status=ok
// SIG undefined Unwind@1428dd1f6(void)

void Unwind_1428dd1f6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428dd23a Unwind@1428dd23a body=38 status=ok
// SIG undefined Unwind@1428dd23a(void)

void Unwind_1428dd23a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428dd262 Unwind@1428dd262 body=196 status=ok
// SIG undefined Unwind@1428dd262(void)

void Unwind_1428dd262(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dd326 Unwind@1428dd326 body=95 status=ok
// SIG undefined Unwind@1428dd326(void)

void Unwind_1428dd326(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dd386 Unwind@1428dd386 body=95 status=ok
// SIG undefined Unwind@1428dd386(void)

void Unwind_1428dd386(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dd3e6 Unwind@1428dd3e6 body=64 status=ok
// SIG undefined Unwind@1428dd3e6(void)

void Unwind_1428dd3e6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428dd426 Unwind@1428dd426 body=67 status=ok
// SIG undefined Unwind@1428dd426(void)

void Unwind_1428dd426(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428dd46a Unwind@1428dd46a body=131 status=ok
// SIG undefined Unwind@1428dd46a(void)

void Unwind_1428dd46a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428dd4ee Unwind@1428dd4ee body=76 status=ok
// SIG undefined Unwind@1428dd4ee(void)

void Unwind_1428dd4ee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428dd53a Unwind@1428dd53a body=76 status=ok
// SIG undefined Unwind@1428dd53a(void)

void Unwind_1428dd53a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428dd586 Unwind@1428dd586 body=38 status=ok
// SIG undefined Unwind@1428dd586(void)

void Unwind_1428dd586(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428dd5ae FUN_1428dd5ae body=2407 status=ok
// SIG undefined FUN_1428dd5ae(void)

void FUN_1428dd5ae(longlong param_1)

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
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
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
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
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
    if (iVar8 != 1) goto LAB_1428dd77b;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428dd77b;
  }
  local_74 = 1;
LAB_1428dd77b:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) << 2)) {
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
LAB_1428dd875:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428ddabe;
LAB_1428dda54:
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
LAB_1428ddabe:
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
                *puVar16 = &PTR_LAB_149ef7940;
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
                  if (local_148 != 0) goto LAB_1428ddc4a;
                }
                else {
                  puVar17[0x16] = &LAB_14699ec58;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428ddc4a:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428ddc7d;
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
LAB_1428ddc7d:
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
                goto LAB_1428dd875;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428dda54;
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
          goto LAB_1428dde9e;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428dde9e:
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



// FUNCTION 1428ddf16 Unwind@1428ddf16 body=38 status=ok
// SIG undefined Unwind@1428ddf16(void)

void Unwind_1428ddf16(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ddf3e Unwind@1428ddf3e body=196 status=ok
// SIG undefined Unwind@1428ddf3e(void)

void Unwind_1428ddf3e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428de002 Unwind@1428de002 body=95 status=ok
// SIG undefined Unwind@1428de002(void)

void Unwind_1428de002(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428de062 Unwind@1428de062 body=95 status=ok
// SIG undefined Unwind@1428de062(void)

void Unwind_1428de062(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428de0c2 Unwind@1428de0c2 body=67 status=ok
// SIG undefined Unwind@1428de0c2(void)

void Unwind_1428de0c2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428de106 Unwind@1428de106 body=67 status=ok
// SIG undefined Unwind@1428de106(void)

void Unwind_1428de106(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428de14a Unwind@1428de14a body=38 status=ok
// SIG undefined Unwind@1428de14a(void)

void Unwind_1428de14a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428de172 Unwind@1428de172 body=130 status=ok
// SIG undefined Unwind@1428de172(void)

void Unwind_1428de172(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428de1f4 Unwind@1428de1f4 body=73 status=ok
// SIG undefined Unwind@1428de1f4(void)

void Unwind_1428de1f4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428de23e FUN_1428de23e body=3603 status=ok
// SIG undefined FUN_1428de23e(void)

void FUN_1428de23e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
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
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428de393;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428de393;
  }
  uVar7 = 1;
LAB_1428de393:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)bVar26 * 4 * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428dec30;
LAB_1428debcd:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428dec30:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7980;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428dedb6;
              }
              else {
                puVar17[0x16] = &LAB_14699f1c6;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428dedb6:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428dede9;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428dede9:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428def06;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428debcd;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428defa5:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428de483:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428de6c5;
LAB_1428de65e:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428de6c5:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7960;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428de84e;
              }
              else {
                puVar17[0x16] = &LAB_14699ef2e;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428de84e:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428de881;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428de881:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
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
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
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
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428de483;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428de65e;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428defa5;
      }
LAB_1428def06:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428df052 Unwind@1428df052 body=38 status=ok
// SIG undefined Unwind@1428df052(void)

void Unwind_1428df052(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428df07a Unwind@1428df07a body=193 status=ok
// SIG undefined Unwind@1428df07a(void)

void Unwind_1428df07a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428df13c Unwind@1428df13c body=83 status=ok
// SIG undefined Unwind@1428df13c(void)

void Unwind_1428df13c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428df190 Unwind@1428df190 body=83 status=ok
// SIG undefined Unwind@1428df190(void)

void Unwind_1428df190(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428df1e4 Unwind@1428df1e4 body=67 status=ok
// SIG undefined Unwind@1428df1e4(void)

void Unwind_1428df1e4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428df228 Unwind@1428df228 body=67 status=ok
// SIG undefined Unwind@1428df228(void)

void Unwind_1428df228(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428df26c Unwind@1428df26c body=38 status=ok
// SIG undefined Unwind@1428df26c(void)

void Unwind_1428df26c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428df294 Unwind@1428df294 body=193 status=ok
// SIG undefined Unwind@1428df294(void)

void Unwind_1428df294(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428df356 Unwind@1428df356 body=95 status=ok
// SIG undefined Unwind@1428df356(void)

void Unwind_1428df356(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428df3b6 Unwind@1428df3b6 body=95 status=ok
// SIG undefined Unwind@1428df3b6(void)

void Unwind_1428df3b6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428df416 Unwind@1428df416 body=67 status=ok
// SIG undefined Unwind@1428df416(void)

void Unwind_1428df416(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428df45a Unwind@1428df45a body=67 status=ok
// SIG undefined Unwind@1428df45a(void)

void Unwind_1428df45a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428df49e Unwind@1428df49e body=38 status=ok
// SIG undefined Unwind@1428df49e(void)

void Unwind_1428df49e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428df4c6 Unwind@1428df4c6 body=130 status=ok
// SIG undefined Unwind@1428df4c6(void)

void Unwind_1428df4c6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428df548 Unwind@1428df548 body=76 status=ok
// SIG undefined Unwind@1428df548(void)

void Unwind_1428df548(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428df594 Unwind@1428df594 body=76 status=ok
// SIG undefined Unwind@1428df594(void)

void Unwind_1428df594(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428df5e0 FUN_1428df5e0 body=2753 status=ok
// SIG undefined FUN_1428df5e0(void)

void FUN_1428df5e0(longlong ******param_1,undefined1 param_2,char param_3)

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
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
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
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 2;
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
  local_1d0 = (longlong *****)&local_170;
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
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428df7ae;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428df7ae;
  }
  uVar30 = 1;
LAB_1428df7ae:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) << 3)) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
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
LAB_1428df8ba:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428dfb00;
LAB_1428dfa94:
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
LAB_1428dfb00:
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
                *puVar19 = &PTR_LAB_149ef79a0;
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
                  if (local_118 != 0) goto LAB_1428dfca0;
                }
                else {
                  puVar20[0x16] = &LAB_14699f31c;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428dfca0:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428dfcd6;
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
LAB_1428dfcd6:
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
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428df8ba;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428dfa94;
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
          goto LAB_1428dff10;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
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
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699f5d6;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428dff10:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428e00a2 Unwind@1428e00a2 body=38 status=ok
// SIG undefined Unwind@1428e00a2(void)

void Unwind_1428e00a2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e00ca Unwind@1428e00ca body=196 status=ok
// SIG undefined Unwind@1428e00ca(void)

void Unwind_1428e00ca(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e018e Unwind@1428e018e body=95 status=ok
// SIG undefined Unwind@1428e018e(void)

void Unwind_1428e018e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e01ee Unwind@1428e01ee body=95 status=ok
// SIG undefined Unwind@1428e01ee(void)

void Unwind_1428e01ee(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e024e Unwind@1428e024e body=64 status=ok
// SIG undefined Unwind@1428e024e(void)

void Unwind_1428e024e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428e028e Unwind@1428e028e body=67 status=ok
// SIG undefined Unwind@1428e028e(void)

void Unwind_1428e028e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e02d2 Unwind@1428e02d2 body=131 status=ok
// SIG undefined Unwind@1428e02d2(void)

void Unwind_1428e02d2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428e0356 Unwind@1428e0356 body=76 status=ok
// SIG undefined Unwind@1428e0356(void)

void Unwind_1428e0356(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428e03a2 Unwind@1428e03a2 body=38 status=ok
// SIG undefined Unwind@1428e03a2(void)

void Unwind_1428e03a2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e03ca FUN_1428e03ca body=4059 status=ok
// SIG undefined FUN_1428e03ca(void)

void FUN_1428e03ca(longlong *param_1,undefined1 param_2,char param_3)

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
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
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
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
  local_1b0 = &local_1c8;
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
    if (iVar6 != 1) goto LAB_1428e0531;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428e0531;
  }
  uVar7 = 1;
LAB_1428e0531:
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
  if (local_140 < (ulonglong)bVar25 * 8 * plVar20[0x11] * (longlong)(int)uVar22) {
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e0e54;
LAB_1428e0df1:
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
LAB_1428e0e54:
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
              *puVar16 = &PTR_LAB_149ef79e0;
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
                if (local_e8 != 0) goto LAB_1428e0fe7;
              }
              else {
                puVar18[0x16] = &LAB_14699f86c;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428e0fe7:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428e101d;
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
LAB_1428e101d:
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
              goto LAB_1428e1140;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428e0df1;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428e11ec:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428e1212;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428e064d:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e08ae;
LAB_1428e0847:
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
LAB_1428e08ae:
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
              *puVar16 = &PTR_LAB_149ef79c0;
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
                if (local_e8 != 0) goto LAB_1428e0a4d;
              }
              else {
                puVar18[0x16] = &LAB_14699f5f4;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428e0a4d:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428e0a83;
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
LAB_1428e0a83:
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
              goto LAB_1428e064d;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428e0847;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428e11ec;
      }
LAB_1428e1140:
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
      local_130 = (longlong *)&LAB_14699f94e;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428e1212:
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



// FUNCTION 1428e13a6 Unwind@1428e13a6 body=38 status=ok
// SIG undefined Unwind@1428e13a6(void)

void Unwind_1428e13a6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e13ce Unwind@1428e13ce body=193 status=ok
// SIG undefined Unwind@1428e13ce(void)

void Unwind_1428e13ce(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e1490 Unwind@1428e1490 body=83 status=ok
// SIG undefined Unwind@1428e1490(void)

void Unwind_1428e1490(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e14e4 Unwind@1428e14e4 body=83 status=ok
// SIG undefined Unwind@1428e14e4(void)

void Unwind_1428e14e4(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e1538 Unwind@1428e1538 body=64 status=ok
// SIG undefined Unwind@1428e1538(void)

void Unwind_1428e1538(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428e1578 Unwind@1428e1578 body=67 status=ok
// SIG undefined Unwind@1428e1578(void)

void Unwind_1428e1578(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e15bc Unwind@1428e15bc body=38 status=ok
// SIG undefined Unwind@1428e15bc(void)

void Unwind_1428e15bc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e15e4 Unwind@1428e15e4 body=196 status=ok
// SIG undefined Unwind@1428e15e4(void)

void Unwind_1428e15e4(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e16a8 Unwind@1428e16a8 body=95 status=ok
// SIG undefined Unwind@1428e16a8(void)

void Unwind_1428e16a8(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e1708 Unwind@1428e1708 body=95 status=ok
// SIG undefined Unwind@1428e1708(void)

void Unwind_1428e1708(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e1768 Unwind@1428e1768 body=64 status=ok
// SIG undefined Unwind@1428e1768(void)

void Unwind_1428e1768(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428e17a8 Unwind@1428e17a8 body=67 status=ok
// SIG undefined Unwind@1428e17a8(void)

void Unwind_1428e17a8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e17ec Unwind@1428e17ec body=131 status=ok
// SIG undefined Unwind@1428e17ec(void)

void Unwind_1428e17ec(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e1870 Unwind@1428e1870 body=76 status=ok
// SIG undefined Unwind@1428e1870(void)

void Unwind_1428e1870(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428e18bc Unwind@1428e18bc body=76 status=ok
// SIG undefined Unwind@1428e18bc(void)

void Unwind_1428e18bc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428e1908 Unwind@1428e1908 body=38 status=ok
// SIG undefined Unwind@1428e1908(void)

void Unwind_1428e1908(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e1930 FUN_1428e1930 body=2407 status=ok
// SIG undefined FUN_1428e1930(void)

void FUN_1428e1930(longlong param_1)

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
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
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
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
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
    if (iVar8 != 1) goto LAB_1428e1afd;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428e1afd;
  }
  local_74 = 1;
LAB_1428e1afd:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) << 3)) {
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
LAB_1428e1bf7:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428e1e40;
LAB_1428e1dd6:
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
LAB_1428e1e40:
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
                *puVar16 = &PTR_LAB_149ef7a00;
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
                  if (local_148 != 0) goto LAB_1428e1fcc;
                }
                else {
                  puVar17[0x16] = &LAB_14699f96c;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428e1fcc:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428e1fff;
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
LAB_1428e1fff:
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
                goto LAB_1428e1bf7;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428e1dd6;
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
          goto LAB_1428e2220;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428e2220:
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



// FUNCTION 1428e2298 Unwind@1428e2298 body=38 status=ok
// SIG undefined Unwind@1428e2298(void)

void Unwind_1428e2298(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e22c0 Unwind@1428e22c0 body=196 status=ok
// SIG undefined Unwind@1428e22c0(void)

void Unwind_1428e22c0(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e2384 Unwind@1428e2384 body=95 status=ok
// SIG undefined Unwind@1428e2384(void)

void Unwind_1428e2384(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428e23e4 Unwind@1428e23e4 body=95 status=ok
// SIG undefined Unwind@1428e23e4(void)

void Unwind_1428e23e4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428e2444 Unwind@1428e2444 body=67 status=ok
// SIG undefined Unwind@1428e2444(void)

void Unwind_1428e2444(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428e2488 Unwind@1428e2488 body=67 status=ok
// SIG undefined Unwind@1428e2488(void)

void Unwind_1428e2488(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428e24cc Unwind@1428e24cc body=38 status=ok
// SIG undefined Unwind@1428e24cc(void)

void Unwind_1428e24cc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e24f4 Unwind@1428e24f4 body=130 status=ok
// SIG undefined Unwind@1428e24f4(void)

void Unwind_1428e24f4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428e2576 Unwind@1428e2576 body=73 status=ok
// SIG undefined Unwind@1428e2576(void)

void Unwind_1428e2576(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428e25c0 FUN_1428e25c0 body=3603 status=ok
// SIG undefined FUN_1428e25c0(void)

void FUN_1428e25c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
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
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428e2715;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428e2715;
  }
  uVar7 = 1;
LAB_1428e2715:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)bVar26 * 8 * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428e2fb2;
LAB_1428e2f4f:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428e2fb2:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7a40;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428e3138;
              }
              else {
                puVar17[0x16] = &LAB_14699ff06;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428e3138:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428e316b;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428e316b:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428e3288;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428e2f4f;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428e3327:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428e2805:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
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
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428e2a47;
LAB_1428e29e0:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428e2a47:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7a20;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428e2bd0;
              }
              else {
                puVar17[0x16] = &LAB_14699fc58;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428e2bd0:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428e2c03;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428e2c03:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
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
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
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
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428e2805;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428e29e0;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428e3327;
      }
LAB_1428e3288:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428e33d4 Unwind@1428e33d4 body=38 status=ok
// SIG undefined Unwind@1428e33d4(void)

void Unwind_1428e33d4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e33fc Unwind@1428e33fc body=193 status=ok
// SIG undefined Unwind@1428e33fc(void)

void Unwind_1428e33fc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428e34be Unwind@1428e34be body=83 status=ok
// SIG undefined Unwind@1428e34be(void)

void Unwind_1428e34be(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428e3512 Unwind@1428e3512 body=83 status=ok
// SIG undefined Unwind@1428e3512(void)

void Unwind_1428e3512(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
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



// FUNCTION 1428e3566 Unwind@1428e3566 body=67 status=ok
// SIG undefined Unwind@1428e3566(void)

void Unwind_1428e3566(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428e35aa Unwind@1428e35aa body=67 status=ok
// SIG undefined Unwind@1428e35aa(void)

void Unwind_1428e35aa(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428e35ee Unwind@1428e35ee body=38 status=ok
// SIG undefined Unwind@1428e35ee(void)

void Unwind_1428e35ee(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e3616 Unwind@1428e3616 body=193 status=ok
// SIG undefined Unwind@1428e3616(void)

void Unwind_1428e3616(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428e36d8 Unwind@1428e36d8 body=95 status=ok
// SIG undefined Unwind@1428e36d8(void)

void Unwind_1428e36d8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428e3738 Unwind@1428e3738 body=95 status=ok
// SIG undefined Unwind@1428e3738(void)

void Unwind_1428e3738(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428e3798 Unwind@1428e3798 body=67 status=ok
// SIG undefined Unwind@1428e3798(void)

void Unwind_1428e3798(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428e37dc Unwind@1428e37dc body=67 status=ok
// SIG undefined Unwind@1428e37dc(void)

void Unwind_1428e37dc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428e3820 Unwind@1428e3820 body=38 status=ok
// SIG undefined Unwind@1428e3820(void)

void Unwind_1428e3820(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e3848 Unwind@1428e3848 body=130 status=ok
// SIG undefined Unwind@1428e3848(void)

void Unwind_1428e3848(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428e38ca Unwind@1428e38ca body=76 status=ok
// SIG undefined Unwind@1428e38ca(void)

void Unwind_1428e38ca(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428e3916 Unwind@1428e3916 body=76 status=ok
// SIG undefined Unwind@1428e3916(void)

void Unwind_1428e3916(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428e3962 FUN_1428e3962 body=2752 status=ok
// SIG undefined FUN_1428e3962(void)

void FUN_1428e3962(longlong ******param_1,undefined1 param_2,char param_3)

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
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
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
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 2;
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
  local_1d0 = (longlong *****)&local_170;
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
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428e3b30;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428e3b30;
  }
  uVar30 = 1;
LAB_1428e3b30:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) * 2)) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
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
LAB_1428e3c3b:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428e3e81;
LAB_1428e3e15:
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
LAB_1428e3e81:
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
                *puVar19 = &PTR_LAB_149ef7a60;
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
                  if (local_118 != 0) goto LAB_1428e4021;
                }
                else {
                  puVar20[0x16] = &LAB_1469a005c;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428e4021:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428e4057;
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
LAB_1428e4057:
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
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428e3c3b;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428e3e15;
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
          goto LAB_1428e4291;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
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
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_1469a036e;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428e4291:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428e4422 Unwind@1428e4422 body=38 status=ok
// SIG undefined Unwind@1428e4422(void)

void Unwind_1428e4422(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e444a Unwind@1428e444a body=196 status=ok
// SIG undefined Unwind@1428e444a(void)

void Unwind_1428e444a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e450e Unwind@1428e450e body=95 status=ok
// SIG undefined Unwind@1428e450e(void)

void Unwind_1428e450e(undefined8 param_1,longlong param_2)

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


